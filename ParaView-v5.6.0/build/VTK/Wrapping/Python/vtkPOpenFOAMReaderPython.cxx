// python wrapper for vtkPOpenFOAMReader
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
#include "vtkPOpenFOAMReader.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPOpenFOAMReader(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPOpenFOAMReader_ClassNew(); }

#ifndef DECLARED_PyvtkOpenFOAMReader_ClassNew
extern "C" { PyObject *PyvtkOpenFOAMReader_ClassNew(); }
#define DECLARED_PyvtkOpenFOAMReader_ClassNew
#endif

static const char *PyvtkPOpenFOAMReader_Doc =
  "vtkPOpenFOAMReader - reads a decomposed dataset in OpenFOAM format\n\n"
  "Superclass: vtkOpenFOAMReader\n\n"
  "vtkPOpenFOAMReader creates a multiblock dataset. It reads\n"
  "parallel-decomposed mesh information and time dependent data.  The\n"
  "polyMesh folders contain mesh information. The time folders contain\n"
  "transient data for the cells. Each folder can contain any number of\n"
  "data files.\n\n"
  "@par Thanks: This class was developed by Takuya Oshima at Niigata\n"
  "University, Japan (oshima@eng.niigata-u.ac.jp).\n\n";

static PyTypeObject PyvtkPOpenFOAMReader_caseType_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOParallelPython.vtkPOpenFOAMReader.caseType", // tp_name
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

PyObject *PyvtkPOpenFOAMReader_caseType_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkPOpenFOAMReader_caseType_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkPOpenFOAMReader_caseType_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkPOpenFOAMReader_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPOpenFOAMReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPOpenFOAMReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPOpenFOAMReader *op = static_cast<vtkPOpenFOAMReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPOpenFOAMReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPOpenFOAMReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPOpenFOAMReader *tempr = vtkPOpenFOAMReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPOpenFOAMReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPOpenFOAMReader *op = static_cast<vtkPOpenFOAMReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPOpenFOAMReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPOpenFOAMReader::NewInstance());

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
PyvtkPOpenFOAMReader_SetCaseType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCaseType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPOpenFOAMReader *op = static_cast<vtkPOpenFOAMReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCaseType(temp0);
    }
    else
    {
      op->vtkPOpenFOAMReader::SetCaseType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPOpenFOAMReader_GetCaseType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCaseType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPOpenFOAMReader *op = static_cast<vtkPOpenFOAMReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    typedef vtkPOpenFOAMReader::caseType tempr_type;
  tempr_type tempr = (ap.IsBound() ?
      op->GetCaseType() :
      op->vtkPOpenFOAMReader::GetCaseType());

    if (!ap.ErrorOccurred())
    {
      result = PyvtkPOpenFOAMReader_caseType_FromEnum(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPOpenFOAMReader_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPOpenFOAMReader *op = static_cast<vtkPOpenFOAMReader *>(vp);

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
      op->vtkPOpenFOAMReader::SetController(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPOpenFOAMReader_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPOpenFOAMReader *op = static_cast<vtkPOpenFOAMReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetController() :
      op->vtkPOpenFOAMReader::GetController());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPOpenFOAMReader_Methods[] = {
  {"IsTypeOf", PyvtkPOpenFOAMReader_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPOpenFOAMReader_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPOpenFOAMReader_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPOpenFOAMReader\nC++: static vtkPOpenFOAMReader *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPOpenFOAMReader_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPOpenFOAMReader\nC++: vtkPOpenFOAMReader *NewInstance()\n\n"},
  {"SetCaseType", PyvtkPOpenFOAMReader_SetCaseType, METH_VARARGS,
   "V.SetCaseType(int)\nC++: void SetCaseType(const int t)\n\nSet and get case type. 0 = decomposed case, 1 = reconstructed\ncase.\n"},
  {"GetCaseType", PyvtkPOpenFOAMReader_GetCaseType, METH_VARARGS,
   "V.GetCaseType() -> caseType\nC++: virtual caseType GetCaseType()\n\nSet and get case type. 0 = decomposed case, 1 = reconstructed\ncase.\n"},
  {"SetController", PyvtkPOpenFOAMReader_SetController, METH_VARARGS,
   "V.SetController(vtkMultiProcessController)\nC++: virtual void SetController(vtkMultiProcessController *)\n\nSet and get the controller.\n"},
  {"GetController", PyvtkPOpenFOAMReader_GetController, METH_VARARGS,
   "V.GetController() -> vtkMultiProcessController\nC++: virtual vtkMultiProcessController *GetController()\n\nSet and get the controller.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPOpenFOAMReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOParallelPython.vtkPOpenFOAMReader", // tp_name
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
  PyvtkPOpenFOAMReader_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPOpenFOAMReader_StaticNew()
{
  return vtkPOpenFOAMReader::New();
}

PyObject *PyvtkPOpenFOAMReader_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPOpenFOAMReader_Type, PyvtkPOpenFOAMReader_Methods,
    "vtkPOpenFOAMReader",
 &PyvtkPOpenFOAMReader_StaticNew);

  PyTypeObject *pytype = &PyvtkPOpenFOAMReader_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkOpenFOAMReader_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkPOpenFOAMReader_caseType_Type);
  PyvtkPOpenFOAMReader_caseType_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkPOpenFOAMReader_caseType_Type);

  o = (PyObject *)&PyvtkPOpenFOAMReader_caseType_Type;
  if (PyDict_SetItemString(d, "caseType", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 2; c++)
  {
    typedef vtkPOpenFOAMReader::caseType cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[2] = {
        { "DECOMPOSED_CASE", vtkPOpenFOAMReader::DECOMPOSED_CASE },
        { "RECONSTRUCTED_CASE", vtkPOpenFOAMReader::RECONSTRUCTED_CASE },
      };

    o = PyvtkPOpenFOAMReader_caseType_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPOpenFOAMReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPOpenFOAMReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPOpenFOAMReader", o) != 0)
  {
    Py_DECREF(o);
  }

}

