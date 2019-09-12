// python wrapper for vtkSMAnimationSceneWriter
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
#include "vtkSMAnimationSceneWriter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMAnimationSceneWriter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMAnimationSceneWriter_ClassNew(); }

#ifndef DECLARED_PyvtkSMSessionObject_ClassNew
extern "C" { PyObject *PyvtkSMSessionObject_ClassNew(); }
#define DECLARED_PyvtkSMSessionObject_ClassNew
#endif

static const char *PyvtkSMAnimationSceneWriter_Doc =
  "vtkSMAnimationSceneWriter - helper class used to write animations.\n\n"
  "Superclass: vtkSMSessionObject\n\n"
  "vtkSMAnimationSceneWriter is an abstract superclass for writers that\n"
  "can write animations out.\n\n";


static PyObject *
PyvtkSMAnimationSceneWriter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMAnimationSceneWriter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMAnimationSceneWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationSceneWriter *op = static_cast<vtkSMAnimationSceneWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMAnimationSceneWriter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMAnimationSceneWriter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMAnimationSceneWriter *tempr = vtkSMAnimationSceneWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMAnimationSceneWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationSceneWriter *op = static_cast<vtkSMAnimationSceneWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMAnimationSceneWriter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMAnimationSceneWriter::NewInstance());

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
PyvtkSMAnimationSceneWriter_SetAnimationScene_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAnimationScene");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationSceneWriter *op = static_cast<vtkSMAnimationSceneWriter *>(vp);

  vtkSMProxy *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
  {
    if (ap.IsBound())
    {
      op->SetAnimationScene(temp0);
    }
    else
    {
      op->vtkSMAnimationSceneWriter::SetAnimationScene(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSMAnimationSceneWriter_SetAnimationScene_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAnimationScene");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationSceneWriter *op = static_cast<vtkSMAnimationSceneWriter *>(vp);

  vtkSMAnimationScene *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMAnimationScene"))
  {
    if (ap.IsBound())
    {
      op->SetAnimationScene(temp0);
    }
    else
    {
      op->vtkSMAnimationSceneWriter::SetAnimationScene(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSMAnimationSceneWriter_SetAnimationScene_Methods[] = {
  {nullptr, PyvtkSMAnimationSceneWriter_SetAnimationScene_s1, METH_VARARGS,
   "@V *vtkSMProxy"},
  {nullptr, PyvtkSMAnimationSceneWriter_SetAnimationScene_s2, METH_VARARGS,
   "@V *vtkSMAnimationScene"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSMAnimationSceneWriter_SetAnimationScene(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSMAnimationSceneWriter_SetAnimationScene_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetAnimationScene");
  return nullptr;
}



static PyObject *
PyvtkSMAnimationSceneWriter_GetAnimationScene(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnimationScene");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationSceneWriter *op = static_cast<vtkSMAnimationSceneWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMAnimationScene *tempr = (ap.IsBound() ?
      op->GetAnimationScene() :
      op->vtkSMAnimationSceneWriter::GetAnimationScene());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMAnimationSceneWriter_Save(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Save");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationSceneWriter *op = static_cast<vtkSMAnimationSceneWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->Save() :
      op->vtkSMAnimationSceneWriter::Save());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMAnimationSceneWriter_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationSceneWriter *op = static_cast<vtkSMAnimationSceneWriter *>(vp);

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
      op->vtkSMAnimationSceneWriter::SetFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMAnimationSceneWriter_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationSceneWriter *op = static_cast<vtkSMAnimationSceneWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkSMAnimationSceneWriter::GetFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMAnimationSceneWriter_SetStartFileCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStartFileCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationSceneWriter *op = static_cast<vtkSMAnimationSceneWriter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetStartFileCount(temp0);
    }
    else
    {
      op->vtkSMAnimationSceneWriter::SetStartFileCount(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMAnimationSceneWriter_GetStartFileCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStartFileCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationSceneWriter *op = static_cast<vtkSMAnimationSceneWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetStartFileCount() :
      op->vtkSMAnimationSceneWriter::GetStartFileCount());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMAnimationSceneWriter_SetPlaybackTimeWindow_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlaybackTimeWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationSceneWriter *op = static_cast<vtkSMAnimationSceneWriter *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetPlaybackTimeWindow(temp0, temp1);
    }
    else
    {
      op->vtkSMAnimationSceneWriter::SetPlaybackTimeWindow(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSMAnimationSceneWriter_SetPlaybackTimeWindow_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlaybackTimeWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationSceneWriter *op = static_cast<vtkSMAnimationSceneWriter *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetPlaybackTimeWindow(temp0);
    }
    else
    {
      op->vtkSMAnimationSceneWriter::SetPlaybackTimeWindow(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSMAnimationSceneWriter_SetPlaybackTimeWindow(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkSMAnimationSceneWriter_SetPlaybackTimeWindow_s1(self, args);
    case 1:
      return PyvtkSMAnimationSceneWriter_SetPlaybackTimeWindow_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPlaybackTimeWindow");
  return nullptr;
}



static PyObject *
PyvtkSMAnimationSceneWriter_GetPlaybackTimeWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlaybackTimeWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationSceneWriter *op = static_cast<vtkSMAnimationSceneWriter *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetPlaybackTimeWindow() :
      op->vtkSMAnimationSceneWriter::GetPlaybackTimeWindow());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyMethodDef PyvtkSMAnimationSceneWriter_Methods[] = {
  {"IsTypeOf", PyvtkSMAnimationSceneWriter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMAnimationSceneWriter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMAnimationSceneWriter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSMAnimationSceneWriter\nC++: static vtkSMAnimationSceneWriter *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMAnimationSceneWriter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSMAnimationSceneWriter\nC++: vtkSMAnimationSceneWriter *NewInstance()\n\n"},
  {"SetAnimationScene", PyvtkSMAnimationSceneWriter_SetAnimationScene, METH_VARARGS,
   "V.SetAnimationScene(vtkSMProxy)\nC++: virtual void SetAnimationScene(vtkSMProxy *)\nV.SetAnimationScene(vtkSMAnimationScene)\nC++: virtual void SetAnimationScene(vtkSMAnimationScene *)\n\nConvenience method to set the proxy.\n"},
  {"GetAnimationScene", PyvtkSMAnimationSceneWriter_GetAnimationScene, METH_VARARGS,
   "V.GetAnimationScene() -> vtkSMAnimationScene\nC++: virtual vtkSMAnimationScene *GetAnimationScene()\n\nGet/Set the animation scene that this writer will write.\n"},
  {"Save", PyvtkSMAnimationSceneWriter_Save, METH_VARARGS,
   "V.Save() -> bool\nC++: bool Save()\n\nBegin the saving. This will result in playing of the animation.\nReturns the status of the save.\n"},
  {"SetFileName", PyvtkSMAnimationSceneWriter_SetFileName, METH_VARARGS,
   "V.SetFileName(string)\nC++: virtual void SetFileName(const char *_arg)\n\nGet/Set the filename.\n"},
  {"GetFileName", PyvtkSMAnimationSceneWriter_GetFileName, METH_VARARGS,
   "V.GetFileName() -> string\nC++: virtual char *GetFileName()\n\nGet/Set the filename.\n"},
  {"SetStartFileCount", PyvtkSMAnimationSceneWriter_SetStartFileCount, METH_VARARGS,
   "V.SetStartFileCount(int)\nC++: virtual void SetStartFileCount(int _arg)\n\nGet/Set the start file count.\n"},
  {"GetStartFileCount", PyvtkSMAnimationSceneWriter_GetStartFileCount, METH_VARARGS,
   "V.GetStartFileCount() -> int\nC++: virtual int GetStartFileCount()\n\nGet/Set the start file count.\n"},
  {"SetPlaybackTimeWindow", PyvtkSMAnimationSceneWriter_SetPlaybackTimeWindow, METH_VARARGS,
   "V.SetPlaybackTimeWindow(float, float)\nC++: void SetPlaybackTimeWindow(double, double)\nV.SetPlaybackTimeWindow((float, float))\nC++: void SetPlaybackTimeWindow(double a[2])\n\n"},
  {"GetPlaybackTimeWindow", PyvtkSMAnimationSceneWriter_GetPlaybackTimeWindow, METH_VARARGS,
   "V.GetPlaybackTimeWindow() -> (float, float)\nC++: double *GetPlaybackTimeWindow()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMAnimationSceneWriter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVAnimationPython.vtkSMAnimationSceneWriter", // tp_name
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
  PyvtkSMAnimationSceneWriter_Doc, // tp_doc
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

PyObject *PyvtkSMAnimationSceneWriter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMAnimationSceneWriter_Type, PyvtkSMAnimationSceneWriter_Methods,
    "vtkSMAnimationSceneWriter",
 nullptr);

  PyTypeObject *pytype = &PyvtkSMAnimationSceneWriter_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkSMSessionObject_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSMAnimationSceneWriter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMAnimationSceneWriter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMAnimationSceneWriter", o) != 0)
  {
    Py_DECREF(o);
  }

}

