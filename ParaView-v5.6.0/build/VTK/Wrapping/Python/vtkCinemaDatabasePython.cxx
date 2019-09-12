// python wrapper for vtkCinemaDatabase
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
#include "vtkStdString.h"
#include "vtkCinemaDatabase.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCinemaDatabase(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkCinemaDatabase_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkCinemaDatabase_Doc =
  "vtkCinemaDatabase - class that provides access to\n`cinema_python.database.file_store`\n\n"
  "Superclass: vtkObject\n\n"
  "API.\n\n"
  "vtkCinemaDatabase is an abstraction that provides access to a\n"
  "`cinema_python.database.file_store.FileStore` instance. The API is\n"
  "limited to the functionality needed for the rendering Cinema layers\n"
  "in\n"
  " ParaView.\n\n";

static PyTypeObject PyvtkCinemaDatabase_Spec_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVCinemaReaderPython.vtkCinemaDatabase.Spec", // tp_name
  sizeof(PyIntObject), // tp_basicsize
  0, // tp_itemsize
  nullptr, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  nullptr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  nullptr, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  nullptr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  nullptr, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  &PyInt_Type, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  nullptr, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

PyObject *PyvtkCinemaDatabase_Spec_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkCinemaDatabase_Spec_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkCinemaDatabase_Spec_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkCinemaDatabase_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCinemaDatabase::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCinemaDatabase_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCinemaDatabase *op = static_cast<vtkCinemaDatabase *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCinemaDatabase::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCinemaDatabase_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCinemaDatabase *tempr = vtkCinemaDatabase::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCinemaDatabase_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCinemaDatabase *op = static_cast<vtkCinemaDatabase *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCinemaDatabase *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCinemaDatabase::NewInstance());

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
PyvtkCinemaDatabase_Load(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Load");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCinemaDatabase *op = static_cast<vtkCinemaDatabase *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->Load(temp0) :
      op->vtkCinemaDatabase::Load(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCinemaDatabase_GetPipelineObjectVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPipelineObjectVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCinemaDatabase *op = static_cast<vtkCinemaDatabase *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetPipelineObjectVisibility(temp0) :
      op->vtkCinemaDatabase::GetPipelineObjectVisibility(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCinemaDatabase_GetFieldName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCinemaDatabase *op = static_cast<vtkCinemaDatabase *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetFieldName(temp0) :
      op->vtkCinemaDatabase::GetFieldName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCinemaDatabase_GetFieldValueRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldValueRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCinemaDatabase *op = static_cast<vtkCinemaDatabase *>(vp);

  std::string temp0;
  std::string temp1;
  const size_t size2 = 2;
  double temp2[2];
  double save2[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2))
  {
    ap.Save(temp2, save2, size2);

    bool tempr = (ap.IsBound() ?
      op->GetFieldValueRange(temp0, temp1, temp2) :
      op->vtkCinemaDatabase::GetFieldValueRange(temp0, temp1, temp2));

    if (ap.HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCinemaDatabase_GetSpec(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSpec");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCinemaDatabase *op = static_cast<vtkCinemaDatabase *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSpec() :
      op->vtkCinemaDatabase::GetSpec());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCinemaDatabase_GetNearestParameterValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNearestParameterValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCinemaDatabase *op = static_cast<vtkCinemaDatabase *>(vp);

  std::string temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetNearestParameterValue(temp0, temp1) :
      op->vtkCinemaDatabase::GetNearestParameterValue(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkCinemaDatabase_Methods[] = {
  {"IsTypeOf", PyvtkCinemaDatabase_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCinemaDatabase_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCinemaDatabase_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkCinemaDatabase\nC++: static vtkCinemaDatabase *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCinemaDatabase_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkCinemaDatabase\nC++: vtkCinemaDatabase *NewInstance()\n\n"},
  {"Load", PyvtkCinemaDatabase_Load, METH_VARARGS,
   "V.Load(string) -> bool\nC++: bool Load(const char *fname)\n\nLoads the cinema database.\n@param[in] fname path to the `info.json` file corresponding to a\n    Cinema store.\n@returns true on success\n"},
  {"GetPipelineObjectVisibility", PyvtkCinemaDatabase_GetPipelineObjectVisibility, METH_VARARGS,
   "V.GetPipelineObjectVisibility(string) -> bool\nC++: bool GetPipelineObjectVisibility(\n    const std::string &objectname)\n\nReturns a pipeline objects default visibility, as recorded in the\ndatabase.\n"},
  {"GetFieldName", PyvtkCinemaDatabase_GetFieldName, METH_VARARGS,
   "V.GetFieldName(string) -> string\nC++: std::string GetFieldName(const std::string &objectname)\n\nGet the name for the field associated with the object.\n`GetFieldValues` will returns values for this field.\n"},
  {"GetFieldValueRange", PyvtkCinemaDatabase_GetFieldValueRange, METH_VARARGS,
   "V.GetFieldValueRange(string, string, [float, float]) -> bool\nC++: bool GetFieldValueRange(const std::string &objectname,\n    const std::string &fieldvalue, double range[2])\n\nGets the range for a field value.\n@param[in] objectname name of the pipeline object\n@param[in] fieldvalue name of the field value\n@param[out] range range for the field value\n@returns true if range was available.\n"},
  {"GetSpec", PyvtkCinemaDatabase_GetSpec, METH_VARARGS,
   "V.GetSpec() -> int\nC++: int GetSpec()\n\nGets the spec used by the database.\n@return value from Spec enum.\n"},
  {"GetNearestParameterValue", PyvtkCinemaDatabase_GetNearestParameterValue, METH_VARARGS,
   "V.GetNearestParameterValue(string, float) -> string\nC++: std::string GetNearestParameterValue(\n    const std::string &param, double value)\n\nGets the nearest value in parameter list as a string. Values\nshould be double and in ascending order.\n@param param parameter name\n@param value input data\n@return the nearest value as string\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkCinemaDatabase_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVCinemaReaderPython.vtkCinemaDatabase", // tp_name
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
  PyvtkCinemaDatabase_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCinemaDatabase_StaticNew()
{
  return vtkCinemaDatabase::New();
}

PyObject *PyvtkCinemaDatabase_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkCinemaDatabase_Type, PyvtkCinemaDatabase_Methods,
    "vtkCinemaDatabase",
 &PyvtkCinemaDatabase_StaticNew);

  PyTypeObject *pytype = &PyvtkCinemaDatabase_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkObject_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkCinemaDatabase_Spec_Type);
  PyvtkCinemaDatabase_Spec_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkCinemaDatabase_Spec_Type);

  o = (PyObject *)&PyvtkCinemaDatabase_Spec_Type;
  if (PyDict_SetItemString(d, "Spec", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 3; c++)
  {
    typedef vtkCinemaDatabase::Spec cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[3] = {
        { "UNKNOWN", vtkCinemaDatabase::UNKNOWN },
        { "CINEMA_SPEC_A", vtkCinemaDatabase::CINEMA_SPEC_A },
        { "CINEMA_SPEC_C", vtkCinemaDatabase::CINEMA_SPEC_C },
      };

    o = PyvtkCinemaDatabase_Spec_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCinemaDatabase(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCinemaDatabase_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCinemaDatabase", o) != 0)
  {
    Py_DECREF(o);
  }

}

