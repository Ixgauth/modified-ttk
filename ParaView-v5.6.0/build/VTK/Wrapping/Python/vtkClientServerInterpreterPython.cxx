// python wrapper for vtkClientServerInterpreter
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
#include "vtkClientServerStream.h"
#include "vtkClientServerID.h"
#include "vtkClientServerInterpreter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkClientServerInterpreter(PyObject *); }

static const char *PyvtkClientServerInterpreterErrorCallbackInfo_Doc =
  "vtkClientServerInterpreterErrorCallbackInfo - A pointer to this\nstruct is sent as call data when an ErrorEvent is invoked by the\ninterpreter.\n\n"

  "vtkClientServerInterpreterErrorCallbackInfo()\n"
  "vtkClientServerInterpreterErrorCallbackInfo(\n    const &vtkClientServerInterpreterErrorCallbackInfo)\n";

static PyMethodDef PyvtkClientServerInterpreterErrorCallbackInfo_Methods[] = {
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkClientServerInterpreterErrorCallbackInfo_vtkClientServerInterpreterErrorCallbackInfo_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkClientServerInterpreterErrorCallbackInfo");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkClientServerInterpreterErrorCallbackInfo *op = new vtkClientServerInterpreterErrorCallbackInfo();

    result = PyVTKSpecialObject_New("vtkClientServerInterpreterErrorCallbackInfo", op);
  }

  return result;
}

static PyObject *
PyvtkClientServerInterpreterErrorCallbackInfo_vtkClientServerInterpreterErrorCallbackInfo_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkClientServerInterpreterErrorCallbackInfo");

  vtkClientServerInterpreterErrorCallbackInfo *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkClientServerInterpreterErrorCallbackInfo"))
  {
    vtkClientServerInterpreterErrorCallbackInfo *op = new vtkClientServerInterpreterErrorCallbackInfo(*temp0);

    result = PyVTKSpecialObject_New("vtkClientServerInterpreterErrorCallbackInfo", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkClientServerInterpreterErrorCallbackInfo_vtkClientServerInterpreterErrorCallbackInfo_Methods[] = {
  {nullptr, PyvtkClientServerInterpreterErrorCallbackInfo_vtkClientServerInterpreterErrorCallbackInfo_s2, METH_VARARGS,
   "@W vtkClientServerInterpreterErrorCallbackInfo"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkClientServerInterpreterErrorCallbackInfo_vtkClientServerInterpreterErrorCallbackInfo(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkClientServerInterpreterErrorCallbackInfo_vtkClientServerInterpreterErrorCallbackInfo_s1(self, args);
    case 1:
      return PyvtkClientServerInterpreterErrorCallbackInfo_vtkClientServerInterpreterErrorCallbackInfo_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkClientServerInterpreterErrorCallbackInfo");
  return nullptr;
}


static PyObject *
PyvtkClientServerInterpreterErrorCallbackInfo_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkClientServerInterpreterErrorCallbackInfo_vtkClientServerInterpreterErrorCallbackInfo(nullptr, args);
}

static void PyvtkClientServerInterpreterErrorCallbackInfo_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkClientServerInterpreterErrorCallbackInfo *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkClientServerInterpreterErrorCallbackInfo_Hash(PyObject *self)
{
#if PY_VERSION_HEX >= 0x020600B2
  return PyObject_HashNotImplemented(self);
#else
  char text[256];
  sprintf(text, "unhashable type: '%s'", Py_TYPE(self)->tp_name);
  PyErr_SetString(PyExc_TypeError, text);
  return -1;
#endif
}

static PyTypeObject PyvtkClientServerInterpreterErrorCallbackInfo_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkClientServerPython.vtkClientServerInterpreterErrorCallbackInfo", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkClientServerInterpreterErrorCallbackInfo_Delete, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkClientServerInterpreterErrorCallbackInfo_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkClientServerInterpreterErrorCallbackInfo_Doc, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  nullptr, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  PyvtkClientServerInterpreterErrorCallbackInfo_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkClientServerInterpreterErrorCallbackInfo_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkClientServerInterpreterErrorCallbackInfo(*static_cast<const vtkClientServerInterpreterErrorCallbackInfo*>(obj));
  }
  return 0;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkClientServerInterpreterErrorCallbackInfo_TypeNew(); }

PyObject *PyvtkClientServerInterpreterErrorCallbackInfo_TypeNew()
{
  PyVTKSpecialType_Add(
    &PyvtkClientServerInterpreterErrorCallbackInfo_Type,
    PyvtkClientServerInterpreterErrorCallbackInfo_Methods,
    PyvtkClientServerInterpreterErrorCallbackInfo_vtkClientServerInterpreterErrorCallbackInfo_Methods,
    &PyvtkClientServerInterpreterErrorCallbackInfo_CCopy);

  PyTypeObject *pytype = &PyvtkClientServerInterpreterErrorCallbackInfo_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkClientServerInterpreter_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkClientServerInterpreter_Doc =
  "vtkClientServerInterpreter - Run-time VTK interpreter.\n\n"
  "Superclass: vtkObject\n\n"
  "vtkClientServerInterpreter will process messages stored in a\n"
  "vtkClientServerStream.  This allows run-time creation and execution\n"
  "of VTK programs.\n\n";


static PyObject *
PyvtkClientServerInterpreter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkClientServerInterpreter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClientServerInterpreter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClientServerInterpreter *op = static_cast<vtkClientServerInterpreter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkClientServerInterpreter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClientServerInterpreter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkClientServerInterpreter *tempr = vtkClientServerInterpreter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClientServerInterpreter_NewInstance_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClientServerInterpreter *op = static_cast<vtkClientServerInterpreter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkClientServerInterpreter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkClientServerInterpreter::NewInstance());

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
PyvtkClientServerInterpreter_NewInstance_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClientServerInterpreter *op = static_cast<vtkClientServerInterpreter *>(vp);

  vtkObjectBase *temp0 = nullptr;
  vtkClientServerID *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkObjectBase") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkClientServerID"))
  {
    int tempr = (ap.IsBound() ?
      op->NewInstance(temp0, *temp1) :
      op->vtkClientServerInterpreter::NewInstance(temp0, *temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj1);

  return result;
}

static PyObject *
PyvtkClientServerInterpreter_NewInstance_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClientServerInterpreter *op = static_cast<vtkClientServerInterpreter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkObjectBase *tempr = (ap.IsBound() ?
      op->NewInstance(temp0) :
      op->vtkClientServerInterpreter::NewInstance(temp0));

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
PyvtkClientServerInterpreter_NewInstance(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkClientServerInterpreter_NewInstance_s1(self, args);
    case 2:
      return PyvtkClientServerInterpreter_NewInstance_s2(self, args);
    case 1:
      return PyvtkClientServerInterpreter_NewInstance_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "NewInstance");
  return nullptr;
}



static PyObject *
PyvtkClientServerInterpreter_ProcessStream_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessStream");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClientServerInterpreter *op = static_cast<vtkClientServerInterpreter *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<unsigned char> store0(size0);
  unsigned char *temp0 = store0.Data();
  size_t temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->ProcessStream(temp0, temp1) :
      op->vtkClientServerInterpreter::ProcessStream(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkClientServerInterpreter_ProcessStream_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessStream");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClientServerInterpreter *op = static_cast<vtkClientServerInterpreter *>(vp);

  vtkClientServerStream *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkClientServerStream"))
  {
    int tempr = (ap.IsBound() ?
      op->ProcessStream(*temp0) :
      op->vtkClientServerInterpreter::ProcessStream(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyObject *
PyvtkClientServerInterpreter_ProcessStream(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkClientServerInterpreter_ProcessStream_s1(self, args);
    case 1:
      return PyvtkClientServerInterpreter_ProcessStream_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "ProcessStream");
  return nullptr;
}



static PyObject *
PyvtkClientServerInterpreter_ProcessOneMessage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessOneMessage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClientServerInterpreter *op = static_cast<vtkClientServerInterpreter *>(vp);

  vtkClientServerStream *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkClientServerStream") &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->ProcessOneMessage(*temp0, temp1) :
      op->vtkClientServerInterpreter::ProcessOneMessage(*temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkClientServerInterpreter_GetLastResult(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastResult");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClientServerInterpreter *op = static_cast<vtkClientServerInterpreter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const vtkClientServerStream *tempr = (ap.IsBound() ?
      &op->GetLastResult() :
      &op->vtkClientServerInterpreter::GetLastResult());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(tempr, "vtkClientServerStream");
    }
  }

  return result;
}


static PyObject *
PyvtkClientServerInterpreter_GetObjectFromID_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetObjectFromID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClientServerInterpreter *op = static_cast<vtkClientServerInterpreter *>(vp);

  vtkClientServerID *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkClientServerID"))
  {
    vtkObjectBase *tempr = (ap.IsBound() ?
      op->GetObjectFromID(*temp0) :
      op->vtkClientServerInterpreter::GetObjectFromID(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyObject *
PyvtkClientServerInterpreter_GetObjectFromID_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetObjectFromID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClientServerInterpreter *op = static_cast<vtkClientServerInterpreter *>(vp);

  vtkClientServerID *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkClientServerID") &&
      ap.GetValue(temp1))
  {
    vtkObjectBase *tempr = (ap.IsBound() ?
      op->GetObjectFromID(*temp0, temp1) :
      op->vtkClientServerInterpreter::GetObjectFromID(*temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyObject *
PyvtkClientServerInterpreter_GetObjectFromID(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkClientServerInterpreter_GetObjectFromID_s1(self, args);
    case 2:
      return PyvtkClientServerInterpreter_GetObjectFromID_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetObjectFromID");
  return nullptr;
}



static PyObject *
PyvtkClientServerInterpreter_GetIDFromObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIDFromObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClientServerInterpreter *op = static_cast<vtkClientServerInterpreter *>(vp);

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkClientServerID tempr = (ap.IsBound() ?
      op->GetIDFromObject(temp0) :
      op->vtkClientServerInterpreter::GetIDFromObject(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkClientServerID");
    }
  }

  return result;
}


static PyObject *
PyvtkClientServerInterpreter_SetLogFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLogFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClientServerInterpreter *op = static_cast<vtkClientServerInterpreter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLogFile(temp0);
    }
    else
    {
      op->vtkClientServerInterpreter::SetLogFile(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkClientServerInterpreter_NewObserver(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewObserver");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClientServerInterpreter *op = static_cast<vtkClientServerInterpreter *>(vp);

  vtkObject *temp0 = nullptr;
  const char *temp1 = nullptr;
  vtkClientServerStream *temp2 = nullptr;
  PyObject *pobj2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkObject") &&
      ap.GetValue(temp1) &&
      ap.GetSpecialObject(temp2, pobj2, "vtkClientServerStream"))
  {
    int tempr = (ap.IsBound() ?
      op->NewObserver(temp0, temp1, *temp2) :
      op->vtkClientServerInterpreter::NewObserver(temp0, temp1, *temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj2);

  return result;
}


static PyObject *
PyvtkClientServerInterpreter_HasCommandFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasCommandFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClientServerInterpreter *op = static_cast<vtkClientServerInterpreter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasCommandFunction(temp0) :
      op->vtkClientServerInterpreter::HasCommandFunction(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClientServerInterpreter_CallCommandFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CallCommandFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClientServerInterpreter *op = static_cast<vtkClientServerInterpreter *>(vp);

  const char *temp0 = nullptr;
  vtkObjectBase *temp1 = nullptr;
  const char *temp2 = nullptr;
  vtkClientServerStream *temp3 = nullptr;
  PyObject *pobj3 = nullptr;
  vtkClientServerStream *temp4 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkObjectBase") &&
      ap.GetValue(temp2) &&
      ap.GetSpecialObject(temp3, pobj3, "vtkClientServerStream") &&
      ap.GetSpecialObject(temp4, "vtkClientServerStream"))
  {
    int tempr = (ap.IsBound() ?
      op->CallCommandFunction(temp0, temp1, temp2, *temp3, *temp4) :
      op->vtkClientServerInterpreter::CallCommandFunction(temp0, temp1, temp2, *temp3, *temp4));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj3);

  return result;
}


static PyObject *
PyvtkClientServerInterpreter_ClearLastResult(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearLastResult");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClientServerInterpreter *op = static_cast<vtkClientServerInterpreter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearLastResult();
    }
    else
    {
      op->vtkClientServerInterpreter::ClearLastResult();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkClientServerInterpreter_Load(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Load");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClientServerInterpreter *op = static_cast<vtkClientServerInterpreter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->Load(temp0) :
      op->vtkClientServerInterpreter::Load(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClientServerInterpreter_GetNextAvailableId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNextAvailableId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClientServerInterpreter *op = static_cast<vtkClientServerInterpreter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkClientServerID tempr = (ap.IsBound() ?
      op->GetNextAvailableId() :
      op->vtkClientServerInterpreter::GetNextAvailableId());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkClientServerID");
    }
  }

  return result;
}

static PyMethodDef PyvtkClientServerInterpreter_Methods[] = {
  {"IsTypeOf", PyvtkClientServerInterpreter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkClientServerInterpreter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkClientServerInterpreter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkClientServerInterpreter\nC++: static vtkClientServerInterpreter *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkClientServerInterpreter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkClientServerInterpreter\nC++: vtkClientServerInterpreter *NewInstance()\nV.NewInstance(vtkObjectBase, vtkClientServerID) -> int\nC++: int NewInstance(vtkObjectBase *obj, vtkClientServerID id)\nV.NewInstance(string) -> vtkObjectBase\nC++: vtkObjectBase *NewInstance(const char *classname)\n\n"},
  {"ProcessStream", PyvtkClientServerInterpreter_ProcessStream, METH_VARARGS,
   "V.ProcessStream((int, ...), int) -> int\nC++: int ProcessStream(const unsigned char *msg, size_t msgLength)\nV.ProcessStream(vtkClientServerStream) -> int\nC++: int ProcessStream(const vtkClientServerStream &css)\n\nProcess all messages in a given vtkClientServerStream.  Return 1\nif all messages succeeded, and 0 otherwise.\n"},
  {"ProcessOneMessage", PyvtkClientServerInterpreter_ProcessOneMessage, METH_VARARGS,
   "V.ProcessOneMessage(vtkClientServerStream, int) -> int\nC++: int ProcessOneMessage(const vtkClientServerStream &css,\n    int message)\n\nProcess the message with the given index in the given stream.\nReturns 1 for success, 0 for failure.\n"},
  {"GetLastResult", PyvtkClientServerInterpreter_GetLastResult, METH_VARARGS,
   "V.GetLastResult() -> vtkClientServerStream\nC++: const vtkClientServerStream &GetLastResult()\n\nGet the last result message.\n"},
  {"GetObjectFromID", PyvtkClientServerInterpreter_GetObjectFromID, METH_VARARGS,
   "V.GetObjectFromID(vtkClientServerID) -> vtkObjectBase\nC++: vtkObjectBase *GetObjectFromID(vtkClientServerID id)\nV.GetObjectFromID(vtkClientServerID, int) -> vtkObjectBase\nC++: vtkObjectBase *GetObjectFromID(vtkClientServerID id,\n    int noerror)\n\nReturn a pointer to a vtkObjectBase for an ID whose message\ncontains only the one object.\n"},
  {"GetIDFromObject", PyvtkClientServerInterpreter_GetIDFromObject, METH_VARARGS,
   "V.GetIDFromObject(vtkObjectBase) -> vtkClientServerID\nC++: vtkClientServerID GetIDFromObject(vtkObjectBase *key)\n\nReturn an ID given a pointer to a vtkObjectBase (or 0 if object\nis not found)\n"},
  {"SetLogFile", PyvtkClientServerInterpreter_SetLogFile, METH_VARARGS,
   "V.SetLogFile(string)\nC++: void SetLogFile(const char *name)\n\nGet/Set a stream to which an execution log is written.\n"},
  {"NewObserver", PyvtkClientServerInterpreter_NewObserver, METH_VARARGS,
   "V.NewObserver(vtkObject, string, vtkClientServerStream) -> int\nC++: int NewObserver(vtkObject *obj, const char *event,\n    const vtkClientServerStream &css)\n\nCalled by generated code to add an observer to a wrapped object.\nDo not call directly.\n"},
  {"HasCommandFunction", PyvtkClientServerInterpreter_HasCommandFunction, METH_VARARGS,
   "V.HasCommandFunction(string) -> bool\nC++: bool HasCommandFunction(const char *cname)\n\nReturn true if the classname has a command function, false\notherwise.\n"},
  {"CallCommandFunction", PyvtkClientServerInterpreter_CallCommandFunction, METH_VARARGS,
   "V.CallCommandFunction(string, vtkObjectBase, string,\n    vtkClientServerStream, vtkClientServerStream) -> int\nC++: int CallCommandFunction(const char *classname,\n    vtkObjectBase *ptr, const char *method,\n    const vtkClientServerStream &msg,\n    vtkClientServerStream &result)\n\nCall a command function.\n"},
  {"ClearLastResult", PyvtkClientServerInterpreter_ClearLastResult, METH_VARARGS,
   "V.ClearLastResult()\nC++: void ClearLastResult()\n\nResets the LastResult stream.\n"},
  {"Load", PyvtkClientServerInterpreter_Load, METH_VARARGS,
   "V.Load(string) -> int\nC++: int Load(const char *moduleName)\n\nDynamically load a wrapper module into the interpreter.  Returns\n1 for success and 0 for failure.\n"},
  {"GetNextAvailableId", PyvtkClientServerInterpreter_GetNextAvailableId, METH_VARARGS,
   "V.GetNextAvailableId() -> vtkClientServerID\nC++: vtkClientServerID GetNextAvailableId()\n\nReturn the next available Id that can be used to create a new\nobject. This only work if all class that created object into the\ninterpretor have used this method. Basically it is just a counter\navailable with the interpreter instance.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkClientServerInterpreter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkClientServerPython.vtkClientServerInterpreter", // tp_name
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
  PyvtkClientServerInterpreter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkClientServerInterpreter_StaticNew()
{
  return vtkClientServerInterpreter::New();
}

PyObject *PyvtkClientServerInterpreter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkClientServerInterpreter_Type, PyvtkClientServerInterpreter_Methods,
    "vtkClientServerInterpreter",
 &PyvtkClientServerInterpreter_StaticNew);

  PyTypeObject *pytype = &PyvtkClientServerInterpreter_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkObject_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkClientServerInterpreter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkClientServerInterpreterErrorCallbackInfo_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkClientServerInterpreterErrorCallbackInfo", o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkClientServerInterpreter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkClientServerInterpreter", o) != 0)
  {
    Py_DECREF(o);
  }

}

