// python wrapper for vtkPlot3DMetaReader
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
#include "vtkPlot3DMetaReader.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPlot3DMetaReader(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPlot3DMetaReader_ClassNew(); }

#ifndef DECLARED_PyvtkMultiBlockDataSetAlgorithm_ClassNew
extern "C" { PyObject *PyvtkMultiBlockDataSetAlgorithm_ClassNew(); }
#define DECLARED_PyvtkMultiBlockDataSetAlgorithm_ClassNew
#endif

static const char *PyvtkPlot3DMetaReader_Doc =
  "vtkPlot3DMetaReader - reads meta-files points to PLOT3D files\n\n"
  "Superclass: vtkMultiBlockDataSetAlgorithm\n\n"
  "The main goal of this reader is to make it easy to read PLOT3D files,\n"
  "specifically time series of PLOT3D files. PLOT3D files can take many\n"
  "different forms based on their content. Unfortunately, it is not a\n"
  "self-describing format therefore the user needs to pass information\n"
  "about the contents of the file to the reader. Normally, this is done\n"
  "by setting a number of member variables. The goal of this reader is\n"
  "to provide a simple format that enable the writer of the PLOT3D file\n"
  "to describe its settings as well as group a number of files as a time\n"
  "series. Note that for binary files, the auto-detect-format option,\n"
  "which is on by default negates the need to specify most other option.\n"
  "However, this reader is still very useful when trying to read file\n"
  "series even for binary files. The format for this meta-file is very\n"
  "simple and is based on JSON (there is no need to know anything about\n"
  "JSON to understand this format). Below is an example with comments\n"
  "(followed by //) that describe the format. Note that the PLOT3D file\n"
  "names are relative to the location of the meta-file unless they start\n"
  "with a leading /.\n\n\n"
  " {\n"
  " \"auto-detect-format\" : true // Tells the reader to try to figure out the format automatically. Only works\n"
  "                             // with binary file. This is on by default, negating the need for most other\n"
  "                             // options for binary files (format, byte-order, precision, multi-grid,\n"
  "                             // blanking, 2D).\n"
  " \"format\" : \"binary\",  // Is this a binary or ascii file, values : binary, ascii\n"
  " \"byte-order\" : \"big\", // Byte order for binary files, values : little, big (denoting little or big endian)\n"
  " \"precision\" : 32,     // Precision of floating point values, can be 32 or 64 (bits)\n"
  " \"multi-grid\" : false, // Is this a multi-grid file, values: true, false\n"
  " \"language\" : \"C\",     // Which language was this file written in, values : C, fortran. This is\n"
  "                       // used to determine if an binary PLOT3D file contains byte counts, used by\n"
  "                       // Fortran IO routines.\n"
  " \"blanking\" : false,   // Does this file have blanking information (iblanks), values : true, false\n"
  " \"2D\" : false,         // Is this a 2D dataset, values : true, false\n"
  " \"R\" : 8.314,          // The value of the gas constant, default is 1.0. Set this according to the dimensions you use\n"
  " \"gamma\" : 1.4,        // Ratio of specific heats. Default is 1.4.\n"
  " \"functions\": [ 110, 200, 201 ],  // Additional derived values to calculate. This is an array of integers formatted\n"
  "                                  // as [ value, value, value, ...]\n"
  " \"filenames\" : [     // List of xyz (geometry) and q (value) file names along with the time values.\n"
  "                     // This is an array which contains items in the format:\n"
  "                     // {\"time\" : values, \"xyz\" : \"xyz file name\", \"q\" : \"q file name\", \"function\" : \"function file name\"}\n"
  "                     // Note that q and function are optional. Also, you can repeat the same file name for xyz or q\n"
  "                     // if they don't change over time. The reader will not read files unnecessarily.\n"
  "  { \"time\" : 3.5, \"xyz\" : \"combxyz.bin\", \"q\" : \"combq.1.bin\", \"function\" : \"combf.1.bin\" },\n"
  "  { \"time\" : 4.5, \"xyz\" : \"combxyz.bin\", \"q\" : \"combq.2.bin\", \"function\" : \"combf.2.bin\" }\n"
  " ],\n"
  " \"function-names\" : [\"density\", \"velocity_x\", \"temperature\"]\n"
  "                   // list of names of functions in function files\n"
  " }\n"
  " \n\n"
  "This reader leverages vtkMultiBlockPLOT3DReader to do the actual\n"
  "reading so you may want to refer to the documentation of\n"
  "vtkMultiBlockPLOT3DReader about the details of some of these\n"
  "parameters including the function numbers for derived value\n"
  "calculation.\n\n"
  "@sa\n"
  "vtkMultiBlockPLOT3DReader\n\n";


static PyObject *
PyvtkPlot3DMetaReader_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPlot3DMetaReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlot3DMetaReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot3DMetaReader *op = static_cast<vtkPlot3DMetaReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPlot3DMetaReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlot3DMetaReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPlot3DMetaReader *tempr = vtkPlot3DMetaReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlot3DMetaReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot3DMetaReader *op = static_cast<vtkPlot3DMetaReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPlot3DMetaReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPlot3DMetaReader::NewInstance());

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
PyvtkPlot3DMetaReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot3DMetaReader *op = static_cast<vtkPlot3DMetaReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFileName(temp0);
    }
    else
    {
      op->vtkPlot3DMetaReader::SetFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlot3DMetaReader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot3DMetaReader *op = static_cast<vtkPlot3DMetaReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkPlot3DMetaReader::GetFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPlot3DMetaReader_Methods[] = {
  {"IsTypeOf", PyvtkPlot3DMetaReader_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPlot3DMetaReader_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPlot3DMetaReader_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPlot3DMetaReader\nC++: static vtkPlot3DMetaReader *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPlot3DMetaReader_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPlot3DMetaReader\nC++: vtkPlot3DMetaReader *NewInstance()\n\n"},
  {"SetFileName", PyvtkPlot3DMetaReader_SetFileName, METH_VARARGS,
   "V.SetFileName(string)\nC++: virtual void SetFileName(const char *_arg)\n\nSet/Get the meta PLOT3D filename. See the class documentation for\nformat details.\n"},
  {"GetFileName", PyvtkPlot3DMetaReader_GetFileName, METH_VARARGS,
   "V.GetFileName() -> string\nC++: virtual char *GetFileName()\n\nSet/Get the meta PLOT3D filename. See the class documentation for\nformat details.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPlot3DMetaReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOParallelPython.vtkPlot3DMetaReader", // tp_name
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
  PyvtkPlot3DMetaReader_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPlot3DMetaReader_StaticNew()
{
  return vtkPlot3DMetaReader::New();
}

PyObject *PyvtkPlot3DMetaReader_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPlot3DMetaReader_Type, PyvtkPlot3DMetaReader_Methods,
    "vtkPlot3DMetaReader",
 &PyvtkPlot3DMetaReader_StaticNew);

  PyTypeObject *pytype = &PyvtkPlot3DMetaReader_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkMultiBlockDataSetAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPlot3DMetaReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPlot3DMetaReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPlot3DMetaReader", o) != 0)
  {
    Py_DECREF(o);
  }

}

