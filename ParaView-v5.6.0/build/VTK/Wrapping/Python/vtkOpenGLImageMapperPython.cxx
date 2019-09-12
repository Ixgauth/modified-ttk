// python wrapper for vtkOpenGLImageMapper
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
#include "vtkOpenGLImageMapper.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkOpenGLImageMapper(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkOpenGLImageMapper_ClassNew(); }

#ifndef DECLARED_PyvtkImageMapper_ClassNew
extern "C" { PyObject *PyvtkImageMapper_ClassNew(); }
#define DECLARED_PyvtkImageMapper_ClassNew
#endif

static const char *PyvtkOpenGLImageMapper_Doc =
  "vtkOpenGLImageMapper - 2D image display support for OpenGL\n\n"
  "Superclass: vtkImageMapper\n\n"
  "vtkOpenGLImageMapper is a concrete subclass of vtkImageMapper that\n"
  "renders images under OpenGL\n\n"
  "@warning\n"
  "vtkOpenGLImageMapper does not support vtkBitArray, you have to\n"
  "convert the array first to vtkUnsignedCharArray (for example)\n\n"
  "@sa\n"
  "vtkImageMapper\n\n";


static PyObject *
PyvtkOpenGLImageMapper_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkOpenGLImageMapper::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLImageMapper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLImageMapper *op = static_cast<vtkOpenGLImageMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkOpenGLImageMapper::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLImageMapper_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkOpenGLImageMapper *tempr = vtkOpenGLImageMapper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLImageMapper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLImageMapper *op = static_cast<vtkOpenGLImageMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkOpenGLImageMapper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkOpenGLImageMapper::NewInstance());

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
PyvtkOpenGLImageMapper_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLImageMapper *op = static_cast<vtkOpenGLImageMapper *>(vp);

  vtkViewport *temp0 = nullptr;
  vtkActor2D *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkViewport") &&
      ap.GetVTKObject(temp1, "vtkActor2D"))
  {
    if (ap.IsBound())
    {
      op->RenderOverlay(temp0, temp1);
    }
    else
    {
      op->vtkOpenGLImageMapper::RenderOverlay(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLImageMapper_RenderData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLImageMapper *op = static_cast<vtkOpenGLImageMapper *>(vp);

  vtkViewport *temp0 = nullptr;
  vtkImageData *temp1 = nullptr;
  vtkActor2D *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkViewport") &&
      ap.GetVTKObject(temp1, "vtkImageData") &&
      ap.GetVTKObject(temp2, "vtkActor2D"))
  {
    if (ap.IsBound())
    {
      op->RenderData(temp0, temp1, temp2);
    }
    else
    {
      op->vtkOpenGLImageMapper::RenderData(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLImageMapper_DrawPixels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawPixels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLImageMapper *op = static_cast<vtkOpenGLImageMapper *>(vp);

  vtkViewport *temp0 = nullptr;
  int temp1;
  int temp2;
  int temp3;
  void  *temp4 = nullptr;
  Py_buffer pbuf4 = VTK_PYBUFFER_INITIALIZER;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetVTKObject(temp0, "vtkViewport") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetBuffer(temp4, &pbuf4))
  {
    if (ap.IsBound())
    {
      op->DrawPixels(temp0, temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkOpenGLImageMapper::DrawPixels(temp0, temp1, temp2, temp3, temp4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

#if PY_VERSION_HEX >= 0x02060000
  if (pbuf4.obj != 0)
  {
    PyBuffer_Release(&pbuf4);
  }
#endif
  return result;
}


static PyObject *
PyvtkOpenGLImageMapper_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLImageMapper *op = static_cast<vtkOpenGLImageMapper *>(vp);

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
      op->vtkOpenGLImageMapper::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkOpenGLImageMapper_Methods[] = {
  {"IsTypeOf", PyvtkOpenGLImageMapper_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkOpenGLImageMapper_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkOpenGLImageMapper_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkOpenGLImageMapper\nC++: static vtkOpenGLImageMapper *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkOpenGLImageMapper_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkOpenGLImageMapper\nC++: vtkOpenGLImageMapper *NewInstance()\n\n"},
  {"RenderOverlay", PyvtkOpenGLImageMapper_RenderOverlay, METH_VARARGS,
   "V.RenderOverlay(vtkViewport, vtkActor2D)\nC++: void RenderOverlay(vtkViewport *viewport, vtkActor2D *actor)\n    override;\n\nHandle the render method.\n"},
  {"RenderData", PyvtkOpenGLImageMapper_RenderData, METH_VARARGS,
   "V.RenderData(vtkViewport, vtkImageData, vtkActor2D)\nC++: void RenderData(vtkViewport *viewport, vtkImageData *data,\n    vtkActor2D *actor) override;\n\nCalled by the Render function in vtkImageMapper.  Actually draws\nthe image to the screen.\n"},
  {"DrawPixels", PyvtkOpenGLImageMapper_DrawPixels, METH_VARARGS,
   "V.DrawPixels(vtkViewport, int, int, int, void)\nC++: void DrawPixels(vtkViewport *vp, int width, int height,\n    int numComponents, void *data)\n\ndraw the data once it has been converted to uchar, windowed\nleveled used internally by the templated functions\n"},
  {"ReleaseGraphicsResources", PyvtkOpenGLImageMapper_ReleaseGraphicsResources, METH_VARARGS,
   "V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nRelease any graphics resources that are being consumed by this\nmapper, the image texture in particular.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkOpenGLImageMapper_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingOpenGL2Python.vtkOpenGLImageMapper", // tp_name
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
  PyvtkOpenGLImageMapper_Doc, // tp_doc
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

static vtkObjectBase *PyvtkOpenGLImageMapper_StaticNew()
{
  return vtkOpenGLImageMapper::New();
}

PyObject *PyvtkOpenGLImageMapper_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkOpenGLImageMapper_Type, PyvtkOpenGLImageMapper_Methods,
    "vtkOpenGLImageMapper",
 &PyvtkOpenGLImageMapper_StaticNew);

  PyTypeObject *pytype = &PyvtkOpenGLImageMapper_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkImageMapper_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkOpenGLImageMapper(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkOpenGLImageMapper_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkOpenGLImageMapper", o) != 0)
  {
    Py_DECREF(o);
  }

}

