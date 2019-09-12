// python wrapper for vtkPPhastaReader
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
#include "vtkPPhastaReader.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPPhastaReader(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPPhastaReader_ClassNew(); }

#ifndef DECLARED_PyvtkMultiBlockDataSetAlgorithm_ClassNew
extern "C" { PyObject *PyvtkMultiBlockDataSetAlgorithm_ClassNew(); }
#define DECLARED_PyvtkMultiBlockDataSetAlgorithm_ClassNew
#endif

static const char *PyvtkPPhastaReader_Doc =
  "vtkPPhastaReader - parallel Phasta meta-file reader vtkPPhastaReader\nreads XML based Phasta meta-files and the underlying\n\n"
  "Superclass: vtkMultiBlockDataSetAlgorithm\n\n"
  "Phasta files. The meta-file has the following form:\n"
  " <?xml version=\"1.0\" ?>\n\n"
  " <PhastaMetaFile number_of_pieces=\"2\">\n"
  "   <GeometryFileNamePattern pattern=\"geombc.dat.%d\"\n"
  "                            has_piece_entry=\"1\"\n"
  "                            has_time_entry=\"0\"/>\n"
  "   <FieldFileNamePattern pattern=\"restart.%d.%d\"\n"
  "                         has_piece_entry=\"1\"\n"
  "                         has_time_entry=\"1\"/>\n\n"
  "   <TimeSteps number_of_steps=\"2\"\n"
  "              auto_generate_indices=\"1\"\n"
  "              start_index=\"0\"\n"
  "              increment_index_by=\"20\"\n"
  "              start_value=\"0.\"\n"
  "              increment_value_by=\"20.\">\n"
  "     <TimeStep index=\"0\" geometry_index=\"\" field_index=\"0\" value=\"0.0\"/>\n"
  "     <TimeStep index=\"1\" geometry_index=\"\" field_index=\"20\" value=\"20.0\"/>\n"
  "   </TimeSteps>\n"
  "   <Fields number_of_fields=\"2\">\n"
  "     <Field paraview_field_tag=\"velocity\"\n"
  "            phasta_field_tag=\"solution\"\n"
  "            start_index_in_phasta_array=\"1\"\n"
  "            number_of_componenets=\"3\"\n"
  "            datadependency=\"0\"\n"
  "            data_type=\"double\"/>\n"
  "     <Field paraview_field_tag=\"average speed\"\n"
  "            phasta_field_tag=\"ybar\"\n"
  "            start_index_in_phasta_array=\"4\"\n"
  "            number_of_componenets=\"1\"/>\n"
  "   </Fields>\n"
  "</PhastaMetaFile>\n"
  "  The GeometryFileNamePattern and FieldFileNamePattern elements have\n"
  "three attributes:\n"
  "\\li pattern: This is the pattern used to get the Phasta filenames.\n"
  "  The %d placeholders will be replaced by appropriate\n"
  "  indices. The first index is time (if specified), the\n"
  "  second one is piece.\n"
  "\\li has_piece_entry (0 or 1): Specifies whether the pattern has a\n"
  "  piece placeholder. The piece placeholder is replaced by the\n"
  "  update piece number.\n"
  "\\li has_time_entry (0 or 1): Specified whether the pattern has a\n"
  "  time placeholder. The time placeholder is replaced by an index\n"
  "  specified in the TimeSteps element\n\n"
  "The TimeSteps element contains TimeStep sub-elements. Each TimeStep\n"
  "element specifies an index (index attribute), an index used in the\n"
  "geometry filename pattern (geometry_index), an index used in the\n"
  "field filename pattern (field_index) and a time value (float). In the\n"
  "example above, there are two timesteps. The first one is stored in\n"
  "files named geombc.dat.(0,1), restart.(0,20).(0,1). The time\n"
  "placeholders are substituted with the the geometry_index and\n"
  "field_index attribute values.\n\n"
  "Normally there is one TimeStep element per timestep. However, it is\n"
  "possible to ask the reader to automatically generate timestep\n"
  "entries. This is done with setting the (optional)\n"
  "auto_generate_indices to 1. In this case, the reader will generate\n"
  "number_of_steps entries. The geometry_index and field_index of these\n"
  "entries will start at start_index and will be incremented by\n"
  "increment_index_by. The time value of these entries will start at\n"
  "start_value and will be incremented by increment_value_by. Note that\n"
  "it is possible to use a combination of both approaches. Any values\n"
  "specified with the TimeStep elements will overwrite anything\n"
  "automatically computed. A common use of this is to let the reader\n"
  "compute all indices for field files and overwrite the geometry\n"
  "indices with TimeStep elements.\n\n"
  "The Fields element contain number_of_fields Field sub-element. Each\n"
  "Field element specifies tag attribute to be used in paraview, tag\n"
  "under which the field is stored in phasta files, start index of the\n"
  "array in phasta files, number of components of the field, data\n"
  "dependency, i.e., either 0 for nodal or 1 for elemental and data\n"
  "type, i.e., \"double\" (as of now supports only 1, 3 & 9 for number of\n"
  "components, i.e., scalars, vectors & tensors, and \"double\" for type\n"
  "of data). In the example above, there are two fields to be visualized\n"
  "one is velocity field stored under tag solution from index 1 to 3 in\n"
  "phasta files which is a vector field defined on nodes with double\n"
  "values, and the other field is average speed scalar field stored\n"
  "under tag ybar at index 4 in phasta files If any Field element is\n"
  "specified then default attribute values are : (phasta_field_tag is\n"
  "mandatory) paraview_field_tag = Field <number>\n"
  "start_index_in_phasta_array = 0 number_of_components = 1\n"
  "data_dependency = 0 data_type = double If no Field(s) is/are\n"
  "specified then the default is following 3 fields : pressure (index 0\n"
  "under solution), velocity (index 1-3 under solution) temperature\n"
  "(index 4 under soltuion)\n\n"
  "@sa\n"
  "vtkPhastaReader\n\n";


static PyObject *
PyvtkPPhastaReader_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPPhastaReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPPhastaReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPPhastaReader *op = static_cast<vtkPPhastaReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPPhastaReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPPhastaReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPPhastaReader *tempr = vtkPPhastaReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPPhastaReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPPhastaReader *op = static_cast<vtkPPhastaReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPPhastaReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPPhastaReader::NewInstance());

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
PyvtkPPhastaReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPPhastaReader *op = static_cast<vtkPPhastaReader *>(vp);

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
      op->vtkPPhastaReader::SetFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPPhastaReader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPPhastaReader *op = static_cast<vtkPPhastaReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkPPhastaReader::GetFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPPhastaReader_SetTimeStepIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimeStepIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPPhastaReader *op = static_cast<vtkPPhastaReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTimeStepIndex(temp0);
    }
    else
    {
      op->vtkPPhastaReader::SetTimeStepIndex(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPPhastaReader_GetTimeStepIndexMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeStepIndexMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPPhastaReader *op = static_cast<vtkPPhastaReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTimeStepIndexMinValue() :
      op->vtkPPhastaReader::GetTimeStepIndexMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPPhastaReader_GetTimeStepIndexMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeStepIndexMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPPhastaReader *op = static_cast<vtkPPhastaReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTimeStepIndexMaxValue() :
      op->vtkPPhastaReader::GetTimeStepIndexMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPPhastaReader_GetTimeStepIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeStepIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPPhastaReader *op = static_cast<vtkPPhastaReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTimeStepIndex() :
      op->vtkPPhastaReader::GetTimeStepIndex());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPPhastaReader_GetTimeStepRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeStepRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPPhastaReader *op = static_cast<vtkPPhastaReader *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetTimeStepRange() :
      op->vtkPPhastaReader::GetTimeStepRange());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkPPhastaReader_CanReadFile(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "CanReadFile");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPPhastaReader::CanReadFile(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPPhastaReader_Methods[] = {
  {"IsTypeOf", PyvtkPPhastaReader_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPPhastaReader_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPPhastaReader_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPPhastaReader\nC++: static vtkPPhastaReader *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPPhastaReader_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPPhastaReader\nC++: vtkPPhastaReader *NewInstance()\n\n"},
  {"SetFileName", PyvtkPPhastaReader_SetFileName, METH_VARARGS,
   "V.SetFileName(string)\nC++: virtual void SetFileName(const char *_arg)\n\nSet and get the Phasta meta file name\n"},
  {"GetFileName", PyvtkPPhastaReader_GetFileName, METH_VARARGS,
   "V.GetFileName() -> string\nC++: virtual char *GetFileName()\n\nSet and get the Phasta meta file name\n"},
  {"SetTimeStepIndex", PyvtkPPhastaReader_SetTimeStepIndex, METH_VARARGS,
   "V.SetTimeStepIndex(int)\nC++: virtual void SetTimeStepIndex(int _arg)\n\nSet the step number for the geometry.\n"},
  {"GetTimeStepIndexMinValue", PyvtkPPhastaReader_GetTimeStepIndexMinValue, METH_VARARGS,
   "V.GetTimeStepIndexMinValue() -> int\nC++: virtual int GetTimeStepIndexMinValue()\n\nSet the step number for the geometry.\n"},
  {"GetTimeStepIndexMaxValue", PyvtkPPhastaReader_GetTimeStepIndexMaxValue, METH_VARARGS,
   "V.GetTimeStepIndexMaxValue() -> int\nC++: virtual int GetTimeStepIndexMaxValue()\n\nSet the step number for the geometry.\n"},
  {"GetTimeStepIndex", PyvtkPPhastaReader_GetTimeStepIndex, METH_VARARGS,
   "V.GetTimeStepIndex() -> int\nC++: virtual int GetTimeStepIndex()\n\nSet the step number for the geometry.\n"},
  {"GetTimeStepRange", PyvtkPPhastaReader_GetTimeStepRange, METH_VARARGS,
   "V.GetTimeStepRange() -> (int, int)\nC++: int *GetTimeStepRange()\n\n"},
  {"CanReadFile", PyvtkPPhastaReader_CanReadFile, METH_VARARGS,
   "V.CanReadFile(string) -> int\nC++: static int CanReadFile(const char *filename)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPPhastaReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsDefaultPython.vtkPPhastaReader", // tp_name
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
  PyvtkPPhastaReader_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPPhastaReader_StaticNew()
{
  return vtkPPhastaReader::New();
}

PyObject *PyvtkPPhastaReader_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPPhastaReader_Type, PyvtkPPhastaReader_Methods,
    "vtkPPhastaReader",
 &PyvtkPPhastaReader_StaticNew);

  PyTypeObject *pytype = &PyvtkPPhastaReader_Type;

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

void PyVTKAddFile_vtkPPhastaReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPPhastaReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPPhastaReader", o) != 0)
  {
    Py_DECREF(o);
  }

}

