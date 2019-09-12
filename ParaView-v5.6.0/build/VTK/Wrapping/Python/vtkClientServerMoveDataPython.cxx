// python wrapper for vtkClientServerMoveData
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
#include "vtkClientServerMoveData.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkClientServerMoveData(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkClientServerMoveData_ClassNew(); }

#ifndef DECLARED_PyvtkDataObjectAlgorithm_ClassNew
extern "C" { PyObject *PyvtkDataObjectAlgorithm_ClassNew(); }
#define DECLARED_PyvtkDataObjectAlgorithm_ClassNew
#endif

static const char *PyvtkClientServerMoveData_Doc =
  "vtkClientServerMoveData - Moves data from the server root node to the\nclient.\n\n"
  "Superclass: vtkDataObjectAlgorithm\n\n"
  "This class moves all the input data available at the input on the\n"
  "root server node to the client node. If not in server-client mode,\n"
  "this filter behaves as a simple pass-through filter. This can work\n"
  "with any data type, the application does not need to set the output\n"
  "type before hand.\n"
  "@warning\n"
  "This filter may change the output in RequestData().\n\n";

static PyTypeObject PyvtkClientServerMoveData_ProcessTypes_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVClientServerCoreRenderingPython.vtkClientServerMoveData.ProcessTypes", // tp_name
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

PyObject *PyvtkClientServerMoveData_ProcessTypes_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkClientServerMoveData_ProcessTypes_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkClientServerMoveData_ProcessTypes_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkClientServerMoveData_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkClientServerMoveData::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClientServerMoveData_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClientServerMoveData *op = static_cast<vtkClientServerMoveData *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkClientServerMoveData::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClientServerMoveData_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkClientServerMoveData *tempr = vtkClientServerMoveData::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClientServerMoveData_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClientServerMoveData *op = static_cast<vtkClientServerMoveData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkClientServerMoveData *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkClientServerMoveData::NewInstance());

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
PyvtkClientServerMoveData_SetOutputDataType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputDataType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClientServerMoveData *op = static_cast<vtkClientServerMoveData *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOutputDataType(temp0);
    }
    else
    {
      op->vtkClientServerMoveData::SetOutputDataType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkClientServerMoveData_GetOutputDataType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputDataType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClientServerMoveData *op = static_cast<vtkClientServerMoveData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputDataType() :
      op->vtkClientServerMoveData::GetOutputDataType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClientServerMoveData_SetWholeExtent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClientServerMoveData *op = static_cast<vtkClientServerMoveData *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  int temp5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
  {
    if (ap.IsBound())
    {
      op->SetWholeExtent(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkClientServerMoveData::SetWholeExtent(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkClientServerMoveData_SetWholeExtent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClientServerMoveData *op = static_cast<vtkClientServerMoveData *>(vp);

  const size_t size0 = 6;
  int temp0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetWholeExtent(temp0);
    }
    else
    {
      op->vtkClientServerMoveData::SetWholeExtent(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkClientServerMoveData_SetWholeExtent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkClientServerMoveData_SetWholeExtent_s1(self, args);
    case 1:
      return PyvtkClientServerMoveData_SetWholeExtent_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetWholeExtent");
  return nullptr;
}



static PyObject *
PyvtkClientServerMoveData_GetWholeExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClientServerMoveData *op = static_cast<vtkClientServerMoveData *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetWholeExtent() :
      op->vtkClientServerMoveData::GetWholeExtent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkClientServerMoveData_SetProcessType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProcessType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClientServerMoveData *op = static_cast<vtkClientServerMoveData *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetProcessType(temp0);
    }
    else
    {
      op->vtkClientServerMoveData::SetProcessType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkClientServerMoveData_GetProcessType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProcessType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClientServerMoveData *op = static_cast<vtkClientServerMoveData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetProcessType() :
      op->vtkClientServerMoveData::GetProcessType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClientServerMoveData_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClientServerMoveData *op = static_cast<vtkClientServerMoveData *>(vp);

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
      op->vtkClientServerMoveData::SetController(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkClientServerMoveData_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClientServerMoveData *op = static_cast<vtkClientServerMoveData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetController() :
      op->vtkClientServerMoveData::GetController());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkClientServerMoveData_Methods[] = {
  {"IsTypeOf", PyvtkClientServerMoveData_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkClientServerMoveData_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkClientServerMoveData_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkClientServerMoveData\nC++: static vtkClientServerMoveData *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkClientServerMoveData_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkClientServerMoveData\nC++: vtkClientServerMoveData *NewInstance()\n\n"},
  {"SetOutputDataType", PyvtkClientServerMoveData_SetOutputDataType, METH_VARARGS,
   "V.SetOutputDataType(int)\nC++: virtual void SetOutputDataType(int _arg)\n\nControls the output type. This is required because processes\nreceiving data cannot know their output type in RequestDataObject\nwithout communicating with other processes. Since communicating\nwith other processes in RequestDataObject is dangerous (can cause\ndeadlock because it may happen out-of-sync), the application has\nto set the output type. The default is VTK_POLY_DATA. Make sure\nto call this before any pipeline updates occur.\n"},
  {"GetOutputDataType", PyvtkClientServerMoveData_GetOutputDataType, METH_VARARGS,
   "V.GetOutputDataType() -> int\nC++: virtual int GetOutputDataType()\n\nControls the output type. This is required because processes\nreceiving data cannot know their output type in RequestDataObject\nwithout communicating with other processes. Since communicating\nwith other processes in RequestDataObject is dangerous (can cause\ndeadlock because it may happen out-of-sync), the application has\nto set the output type. The default is VTK_POLY_DATA. Make sure\nto call this before any pipeline updates occur.\n"},
  {"SetWholeExtent", PyvtkClientServerMoveData_SetWholeExtent, METH_VARARGS,
   "V.SetWholeExtent(int, int, int, int, int, int)\nC++: void SetWholeExtent(int, int, int, int, int, int)\nV.SetWholeExtent((int, int, int, int, int, int))\nC++: void SetWholeExtent(int a[6])\n\n"},
  {"GetWholeExtent", PyvtkClientServerMoveData_GetWholeExtent, METH_VARARGS,
   "V.GetWholeExtent() -> (int, int, int, int, int, int)\nC++: int *GetWholeExtent()\n\n"},
  {"SetProcessType", PyvtkClientServerMoveData_SetProcessType, METH_VARARGS,
   "V.SetProcessType(int)\nC++: virtual void SetProcessType(int _arg)\n\nOptionally, set the process type. If set to AUTO, then the\nprocess type is tried to be determined using the active\nconnection.\n"},
  {"GetProcessType", PyvtkClientServerMoveData_GetProcessType, METH_VARARGS,
   "V.GetProcessType() -> int\nC++: virtual int GetProcessType()\n\nOptionally, set the process type. If set to AUTO, then the\nprocess type is tried to be determined using the active\nconnection.\n"},
  {"SetController", PyvtkClientServerMoveData_SetController, METH_VARARGS,
   "V.SetController(vtkMultiProcessController)\nC++: void SetController(vtkMultiProcessController *)\n\nGet/Set the controller to use. This is optional and needed only\nwhen ProcessType is set to something other than AUTO. If AUTO,\nthen the controller is obtained from the active session.\n"},
  {"GetController", PyvtkClientServerMoveData_GetController, METH_VARARGS,
   "V.GetController() -> vtkMultiProcessController\nC++: virtual vtkMultiProcessController *GetController()\n\nGet/Set the controller to use. This is optional and needed only\nwhen ProcessType is set to something other than AUTO. If AUTO,\nthen the controller is obtained from the active session.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkClientServerMoveData_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVClientServerCoreRenderingPython.vtkClientServerMoveData", // tp_name
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
  PyvtkClientServerMoveData_Doc, // tp_doc
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

static vtkObjectBase *PyvtkClientServerMoveData_StaticNew()
{
  return vtkClientServerMoveData::New();
}

PyObject *PyvtkClientServerMoveData_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkClientServerMoveData_Type, PyvtkClientServerMoveData_Methods,
    "vtkClientServerMoveData",
 &PyvtkClientServerMoveData_StaticNew);

  PyTypeObject *pytype = &PyvtkClientServerMoveData_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkDataObjectAlgorithm_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkClientServerMoveData_ProcessTypes_Type);
  PyvtkClientServerMoveData_ProcessTypes_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkClientServerMoveData_ProcessTypes_Type);

  o = (PyObject *)&PyvtkClientServerMoveData_ProcessTypes_Type;
  if (PyDict_SetItemString(d, "ProcessTypes", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 3; c++)
  {
    typedef vtkClientServerMoveData::ProcessTypes cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[3] = {
        { "AUTO", vtkClientServerMoveData::AUTO },
        { "SERVER", vtkClientServerMoveData::SERVER },
        { "CLIENT", vtkClientServerMoveData::CLIENT },
      };

    o = PyvtkClientServerMoveData_ProcessTypes_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkClientServerMoveData(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkClientServerMoveData_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkClientServerMoveData", o) != 0)
  {
    Py_DECREF(o);
  }

}

