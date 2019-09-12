// python wrapper for vtkPLSDynaReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkPLSDynaReader.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPLSDynaReader(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPLSDynaReader_ClassNew(); }

#ifndef DECLARED_PyvtkLSDynaReader_ClassNew
extern "C" { PyObject *PyvtkLSDynaReader_ClassNew(); }
#define DECLARED_PyvtkLSDynaReader_ClassNew
#endif

static const char *PyvtkPLSDynaReader_Doc =
  "vtkPLSDynaReader - Read LS-Dyna databases (d3plot) in parallel\n\n"
  "Superclass: vtkLSDynaReader\n\n"
  "This filter reads LS-Dyna databases in parallel.\n\n"
  "The Set/GetFileName() routines are actually wrappers around the\n"
  "Set/GetDatabaseDirectory() members; the actual filename you choose is\n"
  "irrelevant -- only the directory name is used.  This is done in order\n"
  "to accommodate ParaView.\n\n"
  "@attention LSDyna files contain 3 different types of sections:\n"
  "control, data, and state.  Control sections contain constants that\n"
  "describe the type of simulation data in a file or group of files. \n"
  "Data sections contain simulation information that is invariant across\n"
  "individual time steps (but can vary when a mesh adaptation occurs). \n"
  "This information includes material, connectivity, and undeformed\n"
  "geometry.  Finally, state data is information that varies with each\n"
  "time step.  Unless a mesh adaptation occurs, there will be a single\n"
  "control and data section, and they will be located at the start of\n"
  "the database (the first file).\n\n"
  "@attention In their infinite wisdom, LSDyna developers decided to\n"
  "split simulation data into multiple files, each no larger than some\n"
  "predetermined limit. Each file can contain one section, a partial\n"
  "section (if it would not fit into a single file), or multiple\n"
  "sections. Files are padded with zeros so that their lengths will be\n"
  "multiples of 512*512.  The size of each section is determined by\n"
  "constants in the control and data sections, which means that these\n"
  "must be parsed carefully in order to correctly locate desired\n"
  "information.  Unfortunately, the constants are not terribly\n"
  "well-documented and in some cases the documentation is in error.\n\n"
  "@par \"Open Issues\": The LS-Dyna file format document leaves a good\n"
  "bit open to interpretation.  In addition to the \"documentation vs.\n"
  "files in the wild\" issues there are also implementation problems.\n\n"
  "@par \"Open Issues\":\n"
  "- Where exactly may breaks to a new file occur in the pre-state\n"
  "  information? At each section?\n"
  "- Will state data sections (node/cell data, element deletion, sph\n"
  "  data, rigid body motion) be moved to the beginning of a new file if\n"
  "their data will be too large for a given file, or are all the\n"
  "  sections counted together as a single state (makes more sense for\n"
  "  keeping time word at start of every file). The questions above\n"
  "  arise because the docs (p. 3) state \"There are 3 sections in this\n"
  "  database.\" but then call many smaller pieces of data \"sections\".\n"
  "  Should they be subsections? The docs are quiet about whether the\n"
  "  second section (of 3) is ever split across multiple files and, if\n"
  "  so, whether it is done at (sub)section boundaries when possible or\n"
  "  just wherever it needs to occur.\n"
  "- How many components does Eddy Viscosity have? It's shown as 7 bits\n"
  "  in NCFDV1 which makes no sense at all.\n"
  "- Why is NARBS larger than 10+NUMNP+NEL8+NEL2+NEL4+NELT (which is the\n"
  "  value specified by the documentation)? Obviously, NARBS is\n"
  "  definitive, but what are the extra numbers at the end?\n"
  "- Is there a difference between rigid body elements NUMRBE and rigid\n"
  "  road surfaces? It appears that the nodes and connectivity of the\n"
  "  road surface are given separately (p.13) while on p.7 the Material\n"
  "  Type Data subsection says that shells in a rigid body will just\n"
  "  have a certain material ID but be interspersed among deformable\n"
  "  shell elements.\n"
  "- Word 37 of the control section serves two possible purposes... it\n"
  "  can mean NMSPH or EDLOPT. I assume that different versions of the\n"
  "  code use that word differently. How do we know the difference?\n"
  "- It's unclear how much state isn't stored when a shell element is\n"
  "  marked as rigid. Specifically, is element deletion data stored for\n"
  "  rigid shells? Page 21 of the spec is mute on this.\n"
  "- The loop to read cell User IDs won't work if Rigid Body and Shell\n"
  "  elements are interleaved (which I now believe they are).\n\n"
  "@par \"Open Issues\": On the VTK side of things:\n"
  "- The reader doesn't handle crack files (d3crck)\n"
  "- The reader doesn't handle interface force files (no default name)\n"
  "- The reader doesn't handle time history (abbreviated output) files\n"
  "  (d3thdt)\n"
  "- The reader doesn't handle dynamic relaxation files (d3drfl)\n"
  "- The reader doesn't handle reduced parts (state for a subset of\n"
  "  parts) files (d3part)\n"
  "- The reader doesn't handle mode shape files (d3eigv)\n"
  "- The reader doesn't handle equilibrium iteration files (d3iter)\n"
  "- The reader doesn't handle extra time data files (d3xtf)\n"
  "- The reader doesn't handle printer files (d3hsp)\n"
  "- The reader doesn't handle modal neutral files (d3mnf)\n"
  "- The reader doesn't handle packed connectivity.\n"
  "- The reader doesn't handle adapted element parent lists (but the 2002 specification says LSDyna\n"
  "  doesn't implement it).\n"
  "- All the sample datasets have MATTYP = 0. Need something to test\n"
  "  MATTYP = 1.\n"
  "- I have no test datasets with rigid body and/or road surfaces, so\n"
  "  the implementation is half-baked.\n"
  "- It's unclear how some of the data should be presented. Although\n"
  "  blindly tacking the numbers into a large chuck of cell data is\n"
  "  better than nothing, some attributes (e.g., forces & moments) lend\n"
  "  themselves to more elaborate presentation. Also, shell and thick\n"
  "  shell elements have stresses that belong to a particular side of an\n"
  "element or have a finite thickness that could be rendered. Finally,\n"
  "  beam elements have cross sections that could be rendered. Some of\n"
  "  these operations require numerical processing of the results and so\n"
  "we shouldn't eliminate the ability to get at the raw simulation data.\n"
  "  Perhaps a filter could be applied to \"fancify\" the geometry.\n\n";


static PyObject *
PyvtkPLSDynaReader_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPLSDynaReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPLSDynaReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLSDynaReader *op = static_cast<vtkPLSDynaReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPLSDynaReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPLSDynaReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPLSDynaReader *tempr = vtkPLSDynaReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPLSDynaReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLSDynaReader *op = static_cast<vtkPLSDynaReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPLSDynaReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPLSDynaReader::NewInstance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
      if (result && PyVTKObject_Check(result))
      {
        PyVTKObject_GetObject(result)->UnRegister(0);
        PyVTKObject_SetFlag(result, VTK_PYTHON_IGNORE_UNREGISTER, 1);
      }
    }
  }

  return result;
}


static PyObject *
PyvtkPLSDynaReader_CanReadFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanReadFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLSDynaReader *op = static_cast<vtkPLSDynaReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->CanReadFile(temp0) :
      op->vtkPLSDynaReader::CanReadFile(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPLSDynaReader_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLSDynaReader *op = static_cast<vtkPLSDynaReader *>(vp);

  vtkMultiProcessController *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMultiProcessController"))
  {
    if (ap.IsBound())
    {
      op->SetController(temp0);
    }
    else
    {
      op->vtkPLSDynaReader::SetController(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPLSDynaReader_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLSDynaReader *op = static_cast<vtkPLSDynaReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetController() :
      op->vtkPLSDynaReader::GetController());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPLSDynaReader_Methods[] = {
  {"IsTypeOf", PyvtkPLSDynaReader_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPLSDynaReader_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPLSDynaReader_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPLSDynaReader\nC++: static vtkPLSDynaReader *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPLSDynaReader_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPLSDynaReader\nC++: vtkPLSDynaReader *NewInstance()\n\n"},
  {"CanReadFile", PyvtkPLSDynaReader_CanReadFile, METH_VARARGS,
   "V.CanReadFile(string) -> int\nC++: int CanReadFile(const char *fname) override;\n\nDetermine if the file can be read with this reader.\n"},
  {"SetController", PyvtkPLSDynaReader_SetController, METH_VARARGS,
   "V.SetController(vtkMultiProcessController)\nC++: void SetController(vtkMultiProcessController *c)\n\nSet/Get the communicator object. By default we use the world\ncontroller\n"},
  {"GetController", PyvtkPLSDynaReader_GetController, METH_VARARGS,
   "V.GetController() -> vtkMultiProcessController\nC++: virtual vtkMultiProcessController *GetController()\n\nSet/Get the communicator object. By default we use the world\ncontroller\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPLSDynaReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOParallelLSDynaPython.vtkPLSDynaReader", // tp_name
  sizeof(PyVTKObject), // tp_basicsize
  0, // tp_itemsize
  PyVTKObject_Delete, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  nullptr, // tp_hash
  nullptr, // tp_call
  PyVTKObject_String, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  PyObject_GenericSetAttr, // tp_setattro
  &PyVTKObject_AsBuffer, // tp_as_buffer
  Py_TPFLAGS_DEFAULT|Py_TPFLAGS_HAVE_GC|Py_TPFLAGS_BASETYPE, // tp_flags
  PyvtkPLSDynaReader_Doc, // tp_doc
  PyVTKObject_Traverse, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  offsetof(PyVTKObject, vtk_weakreflist), // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  PyVTKObject_GetSet, // tp_getset
  nullptr, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  offsetof(PyVTKObject, vtk_dict), // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  PyVTKObject_New, // tp_new
  PyObject_GC_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static vtkObjectBase *PyvtkPLSDynaReader_StaticNew()
{
  return vtkPLSDynaReader::New();
}

PyObject *PyvtkPLSDynaReader_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPLSDynaReader_Type, PyvtkPLSDynaReader_Methods,
    "vtkPLSDynaReader",
 &PyvtkPLSDynaReader_StaticNew);

  PyTypeObject *pytype = &PyvtkPLSDynaReader_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkLSDynaReader_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPLSDynaReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPLSDynaReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPLSDynaReader", o) != 0)
  {
    Py_DECREF(o);
  }

}

