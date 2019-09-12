// python wrapper for vtkImageDataLIC2D
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
#include "vtkImageDataLIC2D.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImageDataLIC2D(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkImageDataLIC2D_ClassNew(); }

#ifndef DECLARED_PyvtkImageAlgorithm_ClassNew
extern "C" { PyObject *PyvtkImageAlgorithm_ClassNew(); }
#define DECLARED_PyvtkImageAlgorithm_ClassNew
#endif

static const char *PyvtkImageDataLIC2D_Doc =
  "vtkImageDataLIC2D -  GPU implementation of a Line Integral\nConvolution, a technique for\n imaging vector fields.\n\n"
  "Superclass: vtkImageAlgorithm\n\n"
  "The input on port 0 is an vtkImageData with extents of a 2D image. It\n"
  "needs\n"
  " a vector field on point data. This filter only works on point\n"
  "vectors. One\n"
  " can use a vtkCellDataToPointData filter to convert cell vectors to\n"
  "point\n"
  " vectors.\n\n\n"
  " Port 1 is a special port for customized noise input. It is an\n"
  "optional port.\n"
  " If noise input is not specified, then the filter using\n"
  "vtkImageNoiseSource to\n"
  " generate a 128x128 noise texture.\n\n"
  "@sa\n"
  " vtkSurfaceLICPainter vtkLineIntegralConvolution2D\n\n";


static PyObject *
PyvtkImageDataLIC2D_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImageDataLIC2D::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageDataLIC2D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataLIC2D *op = static_cast<vtkImageDataLIC2D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageDataLIC2D::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageDataLIC2D_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImageDataLIC2D *tempr = vtkImageDataLIC2D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageDataLIC2D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataLIC2D *op = static_cast<vtkImageDataLIC2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageDataLIC2D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageDataLIC2D::NewInstance());

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
PyvtkImageDataLIC2D_SetContext(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetContext");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataLIC2D *op = static_cast<vtkImageDataLIC2D *>(vp);

  vtkRenderWindow *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderWindow"))
  {
    int tempr = (ap.IsBound() ?
      op->SetContext(temp0) :
      op->vtkImageDataLIC2D::SetContext(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageDataLIC2D_GetContext(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContext");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataLIC2D *op = static_cast<vtkImageDataLIC2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderWindow *tempr = (ap.IsBound() ?
      op->GetContext() :
      op->vtkImageDataLIC2D::GetContext());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageDataLIC2D_SetSteps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSteps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataLIC2D *op = static_cast<vtkImageDataLIC2D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSteps(temp0);
    }
    else
    {
      op->vtkImageDataLIC2D::SetSteps(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageDataLIC2D_GetSteps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSteps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataLIC2D *op = static_cast<vtkImageDataLIC2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSteps() :
      op->vtkImageDataLIC2D::GetSteps());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageDataLIC2D_SetStepSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStepSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataLIC2D *op = static_cast<vtkImageDataLIC2D *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetStepSize(temp0);
    }
    else
    {
      op->vtkImageDataLIC2D::SetStepSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageDataLIC2D_GetStepSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStepSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataLIC2D *op = static_cast<vtkImageDataLIC2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetStepSize() :
      op->vtkImageDataLIC2D::GetStepSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageDataLIC2D_SetMagnification(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMagnification");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataLIC2D *op = static_cast<vtkImageDataLIC2D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMagnification(temp0);
    }
    else
    {
      op->vtkImageDataLIC2D::SetMagnification(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageDataLIC2D_GetMagnification(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMagnification");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataLIC2D *op = static_cast<vtkImageDataLIC2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMagnification() :
      op->vtkImageDataLIC2D::GetMagnification());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageDataLIC2D_GetOpenGLExtensionsSupported(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOpenGLExtensionsSupported");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataLIC2D *op = static_cast<vtkImageDataLIC2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOpenGLExtensionsSupported() :
      op->vtkImageDataLIC2D::GetOpenGLExtensionsSupported());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageDataLIC2D_TranslateInputExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TranslateInputExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataLIC2D *op = static_cast<vtkImageDataLIC2D *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<int> store0(size0);
  int *temp0 = store0.Data();
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<int> store1(size1);
  int *temp1 = store1.Data();
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<int> store2(2*size2);
  int *temp2 = store2.Data();
  int *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
  {
    ap.Save(temp2, save2, size2);

    if (ap.IsBound())
    {
      op->TranslateInputExtent(temp0, temp1, temp2);
    }
    else
    {
      op->vtkImageDataLIC2D::TranslateInputExtent(temp0, temp1, temp2);
    }

    if (ap.HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkImageDataLIC2D_Methods[] = {
  {"IsTypeOf", PyvtkImageDataLIC2D_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImageDataLIC2D_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImageDataLIC2D_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkImageDataLIC2D\nC++: static vtkImageDataLIC2D *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImageDataLIC2D_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkImageDataLIC2D\nC++: vtkImageDataLIC2D *NewInstance()\n\n"},
  {"SetContext", PyvtkImageDataLIC2D_SetContext, METH_VARARGS,
   "V.SetContext(vtkRenderWindow) -> int\nC++: int SetContext(vtkRenderWindow *context)\n\nGet/Set the context. Context must be a vtkOpenGLRenderWindow.\nThis does not increase the reference count of the context to\navoid reference loops. SetContext() may raise an error is the\nOpenGL context does not support the required OpenGL extensions.\nReturn 0 upon failure and 1 upon success.\n"},
  {"GetContext", PyvtkImageDataLIC2D_GetContext, METH_VARARGS,
   "V.GetContext() -> vtkRenderWindow\nC++: vtkRenderWindow *GetContext()\n\nGet/Set the context. Context must be a vtkOpenGLRenderWindow.\nThis does not increase the reference count of the context to\navoid reference loops. SetContext() may raise an error is the\nOpenGL context does not support the required OpenGL extensions.\nReturn 0 upon failure and 1 upon success.\n"},
  {"SetSteps", PyvtkImageDataLIC2D_SetSteps, METH_VARARGS,
   "V.SetSteps(int)\nC++: virtual void SetSteps(int _arg)\n\nNumber of steps. Initial value is 20. class invariant: Steps>0.\nIn term of visual quality, the greater the better.\n"},
  {"GetSteps", PyvtkImageDataLIC2D_GetSteps, METH_VARARGS,
   "V.GetSteps() -> int\nC++: virtual int GetSteps()\n\nNumber of steps. Initial value is 20. class invariant: Steps>0.\nIn term of visual quality, the greater the better.\n"},
  {"SetStepSize", PyvtkImageDataLIC2D_SetStepSize, METH_VARARGS,
   "V.SetStepSize(float)\nC++: virtual void SetStepSize(double _arg)\n\nStep size. Specify the step size as a unit of the cell length of\nthe input vector field. Cell length is the length of the diagonal\nof a cell. Initial value is 1.0. class invariant: StepSize>0.0.\nIn term of visual quality, the smaller the better. The type for\nthe interface is double as VTK interface is double but GPU only\nsupports float. This value will be converted to float in the\nexecution of the algorithm.\n"},
  {"GetStepSize", PyvtkImageDataLIC2D_GetStepSize, METH_VARARGS,
   "V.GetStepSize() -> float\nC++: virtual double GetStepSize()\n\nStep size. Specify the step size as a unit of the cell length of\nthe input vector field. Cell length is the length of the diagonal\nof a cell. Initial value is 1.0. class invariant: StepSize>0.0.\nIn term of visual quality, the smaller the better. The type for\nthe interface is double as VTK interface is double but GPU only\nsupports float. This value will be converted to float in the\nexecution of the algorithm.\n"},
  {"SetMagnification", PyvtkImageDataLIC2D_SetMagnification, METH_VARARGS,
   "V.SetMagnification(int)\nC++: virtual void SetMagnification(int _arg)\n\nThe magnification factor. Default is 1\n"},
  {"GetMagnification", PyvtkImageDataLIC2D_GetMagnification, METH_VARARGS,
   "V.GetMagnification() -> int\nC++: virtual int GetMagnification()\n\nThe magnification factor. Default is 1\n"},
  {"GetOpenGLExtensionsSupported", PyvtkImageDataLIC2D_GetOpenGLExtensionsSupported, METH_VARARGS,
   "V.GetOpenGLExtensionsSupported() -> int\nC++: virtual int GetOpenGLExtensionsSupported()\n\nCheck if the required OpenGL extensions / GPU are supported.\n"},
  {"TranslateInputExtent", PyvtkImageDataLIC2D_TranslateInputExtent, METH_VARARGS,
   "V.TranslateInputExtent((int, ...), (int, ...), [int, ...])\nC++: void TranslateInputExtent(const int *inExt,\n    const int *inWholeExtent, int *outExt)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkImageDataLIC2D_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingLICOpenGL2Python.vtkImageDataLIC2D", // tp_name
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
  PyvtkImageDataLIC2D_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImageDataLIC2D_StaticNew()
{
  return vtkImageDataLIC2D::New();
}

PyObject *PyvtkImageDataLIC2D_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkImageDataLIC2D_Type, PyvtkImageDataLIC2D_Methods,
    "vtkImageDataLIC2D",
 &PyvtkImageDataLIC2D_StaticNew);

  PyTypeObject *pytype = &PyvtkImageDataLIC2D_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkImageAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkImageDataLIC2D(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImageDataLIC2D_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImageDataLIC2D", o) != 0)
  {
    Py_DECREF(o);
  }

}

