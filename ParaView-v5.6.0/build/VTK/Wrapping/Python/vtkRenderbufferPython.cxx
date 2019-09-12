// python wrapper for vtkRenderbuffer
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
#include "vtkRenderbuffer.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkRenderbuffer(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkRenderbuffer_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkRenderbuffer_Doc =
  "vtkRenderbuffer - Storage for FBO's\n\n"
  "Superclass: vtkObject\n\n"
  "Lightweight API to OpenGL Framebuffer Object EXT renderbuffers.\n\n";


static PyObject *
PyvtkRenderbuffer_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkRenderbuffer::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderbuffer_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderbuffer *op = static_cast<vtkRenderbuffer *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkRenderbuffer::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderbuffer_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkRenderbuffer *tempr = vtkRenderbuffer::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderbuffer_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderbuffer *op = static_cast<vtkRenderbuffer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderbuffer *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkRenderbuffer::NewInstance());

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
PyvtkRenderbuffer_IsSupported(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsSupported");

  vtkRenderWindow *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderWindow"))
  {
    bool tempr = vtkRenderbuffer::IsSupported(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderbuffer_GetHandle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHandle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderbuffer *op = static_cast<vtkRenderbuffer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetHandle() :
      op->vtkRenderbuffer::GetHandle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderbuffer_SetContext(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetContext");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderbuffer *op = static_cast<vtkRenderbuffer *>(vp);

  vtkRenderWindow *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderWindow"))
  {
    if (ap.IsBound())
    {
      op->SetContext(temp0);
    }
    else
    {
      op->vtkRenderbuffer::SetContext(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderbuffer_GetContext(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContext");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderbuffer *op = static_cast<vtkRenderbuffer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderWindow *tempr = (ap.IsBound() ?
      op->GetContext() :
      op->vtkRenderbuffer::GetContext());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderbuffer_CreateColorAttachment(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateColorAttachment");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderbuffer *op = static_cast<vtkRenderbuffer *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->CreateColorAttachment(temp0, temp1) :
      op->vtkRenderbuffer::CreateColorAttachment(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderbuffer_CreateDepthAttachment(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDepthAttachment");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderbuffer *op = static_cast<vtkRenderbuffer *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->CreateDepthAttachment(temp0, temp1) :
      op->vtkRenderbuffer::CreateDepthAttachment(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderbuffer_Create_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Create");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderbuffer *op = static_cast<vtkRenderbuffer *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  unsigned int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    int tempr = (ap.IsBound() ?
      op->Create(temp0, temp1, temp2) :
      op->vtkRenderbuffer::Create(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkRenderbuffer_Create_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Create");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderbuffer *op = static_cast<vtkRenderbuffer *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  unsigned int temp2;
  unsigned int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    int tempr = (ap.IsBound() ?
      op->Create(temp0, temp1, temp2, temp3) :
      op->vtkRenderbuffer::Create(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkRenderbuffer_Create(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkRenderbuffer_Create_s1(self, args);
    case 4:
      return PyvtkRenderbuffer_Create_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Create");
  return nullptr;
}



static PyObject *
PyvtkRenderbuffer_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderbuffer *op = static_cast<vtkRenderbuffer *>(vp);

  vtkWindow *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkWindow"))
  {
    if (ap.IsBound())
    {
      op->ReleaseGraphicsResources(temp0);
    }
    else
    {
      op->vtkRenderbuffer::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderbuffer_Resize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Resize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderbuffer *op = static_cast<vtkRenderbuffer *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->Resize(temp0, temp1);
    }
    else
    {
      op->vtkRenderbuffer::Resize(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderbuffer_GetWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderbuffer *op = static_cast<vtkRenderbuffer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetWidth() :
      op->vtkRenderbuffer::GetWidth());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderbuffer_GetHeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderbuffer *op = static_cast<vtkRenderbuffer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetHeight() :
      op->vtkRenderbuffer::GetHeight());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderbuffer_GetSamples(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSamples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderbuffer *op = static_cast<vtkRenderbuffer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetSamples() :
      op->vtkRenderbuffer::GetSamples());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkRenderbuffer_Methods[] = {
  {"IsTypeOf", PyvtkRenderbuffer_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkRenderbuffer_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkRenderbuffer_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkRenderbuffer\nC++: static vtkRenderbuffer *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkRenderbuffer_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkRenderbuffer\nC++: vtkRenderbuffer *NewInstance()\n\n"},
  {"IsSupported", PyvtkRenderbuffer_IsSupported, METH_VARARGS,
   "V.IsSupported(vtkRenderWindow) -> bool\nC++: static bool IsSupported(vtkRenderWindow *renWin)\n\nReturns if the context supports the required extensions.\nExtension will be loaded when the context is set.\n"},
  {"GetHandle", PyvtkRenderbuffer_GetHandle, METH_VARARGS,
   "V.GetHandle() -> int\nC++: virtual unsigned int GetHandle()\n\nGet the name of the buffer for use opengl code.\n"},
  {"SetContext", PyvtkRenderbuffer_SetContext, METH_VARARGS,
   "V.SetContext(vtkRenderWindow)\nC++: void SetContext(vtkRenderWindow *win)\n\nSetting the context has the side affect of initializing OpenGL\nrequired extensions and allocates an OpenGL name(handle) that is\nreleased when the object is destroyed. NOTE: the reference count\nto the passed in object is not incremented. Contex must be set\nprior to other use.\n"},
  {"GetContext", PyvtkRenderbuffer_GetContext, METH_VARARGS,
   "V.GetContext() -> vtkRenderWindow\nC++: vtkRenderWindow *GetContext()\n\nSetting the context has the side affect of initializing OpenGL\nrequired extensions and allocates an OpenGL name(handle) that is\nreleased when the object is destroyed. NOTE: the reference count\nto the passed in object is not incremented. Contex must be set\nprior to other use.\n"},
  {"CreateColorAttachment", PyvtkRenderbuffer_CreateColorAttachment, METH_VARARGS,
   "V.CreateColorAttachment(int, int) -> int\nC++: int CreateColorAttachment(unsigned int width,\n    unsigned int height)\n\nSets up an RGBAF renderbufffer for use as a color attachment. Use\nmode to control READ or DRAW operation.\n"},
  {"CreateDepthAttachment", PyvtkRenderbuffer_CreateDepthAttachment, METH_VARARGS,
   "V.CreateDepthAttachment(int, int) -> int\nC++: int CreateDepthAttachment(unsigned int width,\n    unsigned int height)\n\nSets up an DEPTH renderbufffer for use as a color attachment. Use\nmode to control READ or DRAW operation.\n"},
  {"Create", PyvtkRenderbuffer_Create, METH_VARARGS,
   "V.Create(int, int, int) -> int\nC++: int Create(unsigned int format, unsigned int width,\n    unsigned int height)\nV.Create(int, int, int, int) -> int\nC++: int Create(unsigned int format, unsigned int width,\n    unsigned int height, unsigned int samples)\n\nSets up an renderbufffer. Use mode to control READ or DRAW\noperation and format to control the internal format. (see OpenGL\ndoc for more info)\n"},
  {"ReleaseGraphicsResources", PyvtkRenderbuffer_ReleaseGraphicsResources, METH_VARARGS,
   "V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *win)\n\n"},
  {"Resize", PyvtkRenderbuffer_Resize, METH_VARARGS,
   "V.Resize(int, int)\nC++: void Resize(unsigned int width, unsigned int height)\n\n"},
  {"GetWidth", PyvtkRenderbuffer_GetWidth, METH_VARARGS,
   "V.GetWidth() -> int\nC++: virtual unsigned int GetWidth()\n\nGet the buffer dimensions. These are the properties of the OpenGL\nrenderbuffer this instance represents.\n"},
  {"GetHeight", PyvtkRenderbuffer_GetHeight, METH_VARARGS,
   "V.GetHeight() -> int\nC++: virtual unsigned int GetHeight()\n\nGet the buffer dimensions. These are the properties of the OpenGL\nrenderbuffer this instance represents.\n"},
  {"GetSamples", PyvtkRenderbuffer_GetSamples, METH_VARARGS,
   "V.GetSamples() -> int\nC++: virtual unsigned int GetSamples()\n\nGet the buffer dimensions. These are the properties of the OpenGL\nrenderbuffer this instance represents.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkRenderbuffer_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingOpenGL2Python.vtkRenderbuffer", // tp_name
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
  PyvtkRenderbuffer_Doc, // tp_doc
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

static vtkObjectBase *PyvtkRenderbuffer_StaticNew()
{
  return vtkRenderbuffer::New();
}

PyObject *PyvtkRenderbuffer_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkRenderbuffer_Type, PyvtkRenderbuffer_Methods,
    "vtkRenderbuffer",
 &PyvtkRenderbuffer_StaticNew);

  PyTypeObject *pytype = &PyvtkRenderbuffer_Type;

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

void PyVTKAddFile_vtkRenderbuffer(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkRenderbuffer_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkRenderbuffer", o) != 0)
  {
    Py_DECREF(o);
  }

}

