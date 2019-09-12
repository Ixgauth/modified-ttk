// python wrapper for vtkSobelGradientMagnitudePass
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
#include "vtkSobelGradientMagnitudePass.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSobelGradientMagnitudePass(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSobelGradientMagnitudePass_ClassNew(); }

#ifndef DECLARED_PyvtkImageProcessingPass_ClassNew
extern "C" { PyObject *PyvtkImageProcessingPass_ClassNew(); }
#define DECLARED_PyvtkImageProcessingPass_ClassNew
#endif

static const char *PyvtkSobelGradientMagnitudePass_Doc =
  "vtkSobelGradientMagnitudePass - Implement a post-processing edge\ndetection with a Sobel gradient magnitude render pass.\n\n"
  "Superclass: vtkImageProcessingPass\n\n"
  "Detect the edges of the image renderered by its delegate.\n"
  "Edge-detection uses a Sobel high-pass filter (3x3 kernel).\n\n"
  "This pass expects an initialized depth buffer and color buffer.\n"
  "Initialized buffers means they have been cleared with farest z-value\n"
  "and background color/gradient/transparent color. An opaque pass may\n"
  "have been performed right after the initialization.\n\n"
  "The delegate is used once.\n\n"
  "Its delegate is usually set to a vtkCameraPass or to a\n"
  "post-processing pass.\n\n"
  "This pass requires a OpenGL context that supports texture objects\n"
  "(TO), framebuffer objects (FBO) and GLSL. If not, it will emit an\n"
  "error message and will render its delegate and return.\n\n"
  "@par Implementation: To compute the gradient magnitude, the x and y\n"
  "components of the gradient (Gx and Gy) have to be computed first.\n"
  "Each computation of Gx and Gy uses a separable filter. The first pass\n"
  "takes the image from the delegate as the single input texture. The\n"
  "first pass has two outputs, one for the first part of Gx, Gx1, result\n"
  "of a convolution with (-1 0 1), one for the first part of Gy, Gy1,\n"
  "result of a convolution with (1 2 1). The second pass has two inputs,\n"
  "Gx1 and Gy1. Kernel (1 2 1)^T is applied to Gx1 and kernel (-1 0 1)^T\n"
  "is applied to Gx2. It gives the values for Gx and Gy. Those values\n"
  "are then used to compute the magnitude of the gradient which is\n"
  "stored in the render target. The gradient computation happens per\n"
  "component (R,G,B). A is arbitrarly set to 1 (full opacity).\n\n"
  "@par Implementation:\\image html\n"
  "vtkSobelGradientMagnitudePassFigure.png\\image latex\n"
  "vtkSobelGradientMagnitudePassFigure.eps\n\n"
  "@sa\n"
  "vtkRenderPass\n\n";


static PyObject *
PyvtkSobelGradientMagnitudePass_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSobelGradientMagnitudePass::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSobelGradientMagnitudePass_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSobelGradientMagnitudePass *op = static_cast<vtkSobelGradientMagnitudePass *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSobelGradientMagnitudePass::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSobelGradientMagnitudePass_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSobelGradientMagnitudePass *tempr = vtkSobelGradientMagnitudePass::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSobelGradientMagnitudePass_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSobelGradientMagnitudePass *op = static_cast<vtkSobelGradientMagnitudePass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSobelGradientMagnitudePass *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSobelGradientMagnitudePass::NewInstance());

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
PyvtkSobelGradientMagnitudePass_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSobelGradientMagnitudePass *op = static_cast<vtkSobelGradientMagnitudePass *>(vp);

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
      op->vtkSobelGradientMagnitudePass::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSobelGradientMagnitudePass_Methods[] = {
  {"IsTypeOf", PyvtkSobelGradientMagnitudePass_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSobelGradientMagnitudePass_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSobelGradientMagnitudePass_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSobelGradientMagnitudePass\nC++: static vtkSobelGradientMagnitudePass *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSobelGradientMagnitudePass_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSobelGradientMagnitudePass\nC++: vtkSobelGradientMagnitudePass *NewInstance()\n\n"},
  {"ReleaseGraphicsResources", PyvtkSobelGradientMagnitudePass_ReleaseGraphicsResources, METH_VARARGS,
   "V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *w) override;\n\nRelease graphics resources and ask components to release their\nown resources.\n\\pre w_exists: w!=0\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSobelGradientMagnitudePass_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingOpenGL2Python.vtkSobelGradientMagnitudePass", // tp_name
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
  PyvtkSobelGradientMagnitudePass_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSobelGradientMagnitudePass_StaticNew()
{
  return vtkSobelGradientMagnitudePass::New();
}

PyObject *PyvtkSobelGradientMagnitudePass_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSobelGradientMagnitudePass_Type, PyvtkSobelGradientMagnitudePass_Methods,
    "vtkSobelGradientMagnitudePass",
 &PyvtkSobelGradientMagnitudePass_StaticNew);

  PyTypeObject *pytype = &PyvtkSobelGradientMagnitudePass_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkImageProcessingPass_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSobelGradientMagnitudePass(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSobelGradientMagnitudePass_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSobelGradientMagnitudePass", o) != 0)
  {
    Py_DECREF(o);
  }

}

