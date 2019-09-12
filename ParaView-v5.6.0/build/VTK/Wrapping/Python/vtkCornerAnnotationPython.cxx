// python wrapper for vtkCornerAnnotation
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
#include "vtkCornerAnnotation.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCornerAnnotation(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkCornerAnnotation_ClassNew(); }

#ifndef DECLARED_PyvtkActor2D_ClassNew
extern "C" { PyObject *PyvtkActor2D_ClassNew(); }
#define DECLARED_PyvtkActor2D_ClassNew
#endif

static const char *PyvtkCornerAnnotation_Doc =
  "vtkCornerAnnotation - text annotation in four corners\n\n"
  "Superclass: vtkActor2D\n\n"
  "This is an annotation object that manages four text actors / mappers\n"
  "to provide annotation in the four corners of a viewport\n\n"
  "@par Special input text::\n"
  "- : will be replaced with slice number (relative number)\n"
  "- : will be replaced with slice number (relative number)\n"
  "- <image_and_max> : will be replaced with slice number and slice max\n"
  "  (relative)\n"
  "- <slice_and_max> : will be replaced with slice number and slice max\n"
  "  (relative)\n"
  "- <slice_pos> : will be replaced by the position of the current slice\n"
  "- : will be replaced with window value\n"
  "- : will be replaced with level value\n"
  "- <window_level> : will be replaced with window and level value\n\n"
  "@sa\n"
  "vtkActor2D vtkTextMapper\n\n";

static PyTypeObject PyvtkCornerAnnotation_TextPosition_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingAnnotationPython.vtkCornerAnnotation.TextPosition", // tp_name
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

PyObject *PyvtkCornerAnnotation_TextPosition_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkCornerAnnotation_TextPosition_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkCornerAnnotation_TextPosition_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkCornerAnnotation_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCornerAnnotation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCornerAnnotation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCornerAnnotation *op = static_cast<vtkCornerAnnotation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCornerAnnotation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCornerAnnotation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCornerAnnotation *tempr = vtkCornerAnnotation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCornerAnnotation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCornerAnnotation *op = static_cast<vtkCornerAnnotation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCornerAnnotation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCornerAnnotation::NewInstance());

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
PyvtkCornerAnnotation_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCornerAnnotation *op = static_cast<vtkCornerAnnotation *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkCornerAnnotation::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCornerAnnotation_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCornerAnnotation *op = static_cast<vtkCornerAnnotation *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderTranslucentPolygonalGeometry(temp0) :
      op->vtkCornerAnnotation::RenderTranslucentPolygonalGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCornerAnnotation_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCornerAnnotation *op = static_cast<vtkCornerAnnotation *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOverlay(temp0) :
      op->vtkCornerAnnotation::RenderOverlay(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCornerAnnotation_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCornerAnnotation *op = static_cast<vtkCornerAnnotation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->HasTranslucentPolygonalGeometry() :
      op->vtkCornerAnnotation::HasTranslucentPolygonalGeometry());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCornerAnnotation_SetMaximumLineHeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumLineHeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCornerAnnotation *op = static_cast<vtkCornerAnnotation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaximumLineHeight(temp0);
    }
    else
    {
      op->vtkCornerAnnotation::SetMaximumLineHeight(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCornerAnnotation_GetMaximumLineHeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumLineHeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCornerAnnotation *op = static_cast<vtkCornerAnnotation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMaximumLineHeight() :
      op->vtkCornerAnnotation::GetMaximumLineHeight());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCornerAnnotation_SetMinimumFontSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinimumFontSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCornerAnnotation *op = static_cast<vtkCornerAnnotation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMinimumFontSize(temp0);
    }
    else
    {
      op->vtkCornerAnnotation::SetMinimumFontSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCornerAnnotation_GetMinimumFontSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumFontSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCornerAnnotation *op = static_cast<vtkCornerAnnotation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMinimumFontSize() :
      op->vtkCornerAnnotation::GetMinimumFontSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCornerAnnotation_SetMaximumFontSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumFontSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCornerAnnotation *op = static_cast<vtkCornerAnnotation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaximumFontSize(temp0);
    }
    else
    {
      op->vtkCornerAnnotation::SetMaximumFontSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCornerAnnotation_GetMaximumFontSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumFontSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCornerAnnotation *op = static_cast<vtkCornerAnnotation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaximumFontSize() :
      op->vtkCornerAnnotation::GetMaximumFontSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCornerAnnotation_SetLinearFontScaleFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLinearFontScaleFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCornerAnnotation *op = static_cast<vtkCornerAnnotation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLinearFontScaleFactor(temp0);
    }
    else
    {
      op->vtkCornerAnnotation::SetLinearFontScaleFactor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCornerAnnotation_GetLinearFontScaleFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLinearFontScaleFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCornerAnnotation *op = static_cast<vtkCornerAnnotation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLinearFontScaleFactor() :
      op->vtkCornerAnnotation::GetLinearFontScaleFactor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCornerAnnotation_SetNonlinearFontScaleFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNonlinearFontScaleFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCornerAnnotation *op = static_cast<vtkCornerAnnotation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNonlinearFontScaleFactor(temp0);
    }
    else
    {
      op->vtkCornerAnnotation::SetNonlinearFontScaleFactor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCornerAnnotation_GetNonlinearFontScaleFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNonlinearFontScaleFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCornerAnnotation *op = static_cast<vtkCornerAnnotation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetNonlinearFontScaleFactor() :
      op->vtkCornerAnnotation::GetNonlinearFontScaleFactor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCornerAnnotation_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCornerAnnotation *op = static_cast<vtkCornerAnnotation *>(vp);

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
      op->vtkCornerAnnotation::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCornerAnnotation_SetText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCornerAnnotation *op = static_cast<vtkCornerAnnotation *>(vp);

  int temp0;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetText(temp0, temp1);
    }
    else
    {
      op->vtkCornerAnnotation::SetText(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCornerAnnotation_GetText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCornerAnnotation *op = static_cast<vtkCornerAnnotation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetText(temp0) :
      op->vtkCornerAnnotation::GetText(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCornerAnnotation_ClearAllTexts(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearAllTexts");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCornerAnnotation *op = static_cast<vtkCornerAnnotation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearAllTexts();
    }
    else
    {
      op->vtkCornerAnnotation::ClearAllTexts();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCornerAnnotation_CopyAllTextsFrom(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyAllTextsFrom");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCornerAnnotation *op = static_cast<vtkCornerAnnotation *>(vp);

  vtkCornerAnnotation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCornerAnnotation"))
  {
    if (ap.IsBound())
    {
      op->CopyAllTextsFrom(temp0);
    }
    else
    {
      op->vtkCornerAnnotation::CopyAllTextsFrom(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCornerAnnotation_SetImageActor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImageActor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCornerAnnotation *op = static_cast<vtkCornerAnnotation *>(vp);

  vtkImageActor *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageActor"))
  {
    if (ap.IsBound())
    {
      op->SetImageActor(temp0);
    }
    else
    {
      op->vtkCornerAnnotation::SetImageActor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCornerAnnotation_GetImageActor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageActor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCornerAnnotation *op = static_cast<vtkCornerAnnotation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageActor *tempr = (ap.IsBound() ?
      op->GetImageActor() :
      op->vtkCornerAnnotation::GetImageActor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCornerAnnotation_SetWindowLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWindowLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCornerAnnotation *op = static_cast<vtkCornerAnnotation *>(vp);

  vtkImageMapToWindowLevelColors *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageMapToWindowLevelColors"))
  {
    if (ap.IsBound())
    {
      op->SetWindowLevel(temp0);
    }
    else
    {
      op->vtkCornerAnnotation::SetWindowLevel(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCornerAnnotation_GetWindowLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWindowLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCornerAnnotation *op = static_cast<vtkCornerAnnotation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageMapToWindowLevelColors *tempr = (ap.IsBound() ?
      op->GetWindowLevel() :
      op->vtkCornerAnnotation::GetWindowLevel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCornerAnnotation_SetLevelShift(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLevelShift");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCornerAnnotation *op = static_cast<vtkCornerAnnotation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLevelShift(temp0);
    }
    else
    {
      op->vtkCornerAnnotation::SetLevelShift(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCornerAnnotation_GetLevelShift(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLevelShift");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCornerAnnotation *op = static_cast<vtkCornerAnnotation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLevelShift() :
      op->vtkCornerAnnotation::GetLevelShift());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCornerAnnotation_SetLevelScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLevelScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCornerAnnotation *op = static_cast<vtkCornerAnnotation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLevelScale(temp0);
    }
    else
    {
      op->vtkCornerAnnotation::SetLevelScale(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCornerAnnotation_GetLevelScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLevelScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCornerAnnotation *op = static_cast<vtkCornerAnnotation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLevelScale() :
      op->vtkCornerAnnotation::GetLevelScale());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCornerAnnotation_SetTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCornerAnnotation *op = static_cast<vtkCornerAnnotation *>(vp);

  vtkTextProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextProperty"))
  {
    if (ap.IsBound())
    {
      op->SetTextProperty(temp0);
    }
    else
    {
      op->vtkCornerAnnotation::SetTextProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCornerAnnotation_GetTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCornerAnnotation *op = static_cast<vtkCornerAnnotation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetTextProperty() :
      op->vtkCornerAnnotation::GetTextProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCornerAnnotation_ShowSliceAndImageOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShowSliceAndImageOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCornerAnnotation *op = static_cast<vtkCornerAnnotation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ShowSliceAndImageOn();
    }
    else
    {
      op->vtkCornerAnnotation::ShowSliceAndImageOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCornerAnnotation_ShowSliceAndImageOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShowSliceAndImageOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCornerAnnotation *op = static_cast<vtkCornerAnnotation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ShowSliceAndImageOff();
    }
    else
    {
      op->vtkCornerAnnotation::ShowSliceAndImageOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCornerAnnotation_SetShowSliceAndImage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShowSliceAndImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCornerAnnotation *op = static_cast<vtkCornerAnnotation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetShowSliceAndImage(temp0);
    }
    else
    {
      op->vtkCornerAnnotation::SetShowSliceAndImage(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCornerAnnotation_GetShowSliceAndImage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShowSliceAndImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCornerAnnotation *op = static_cast<vtkCornerAnnotation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetShowSliceAndImage() :
      op->vtkCornerAnnotation::GetShowSliceAndImage());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkCornerAnnotation_Methods[] = {
  {"IsTypeOf", PyvtkCornerAnnotation_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCornerAnnotation_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCornerAnnotation_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkCornerAnnotation\nC++: static vtkCornerAnnotation *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCornerAnnotation_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkCornerAnnotation\nC++: vtkCornerAnnotation *NewInstance()\n\n"},
  {"RenderOpaqueGeometry", PyvtkCornerAnnotation_RenderOpaqueGeometry, METH_VARARGS,
   "V.RenderOpaqueGeometry(vtkViewport) -> int\nC++: int RenderOpaqueGeometry(vtkViewport *viewport) override;\n\nDraw the scalar bar and annotation text to the screen.\n"},
  {"RenderTranslucentPolygonalGeometry", PyvtkCornerAnnotation_RenderTranslucentPolygonalGeometry, METH_VARARGS,
   "V.RenderTranslucentPolygonalGeometry(vtkViewport) -> int\nC++: int RenderTranslucentPolygonalGeometry(vtkViewport *)\n    override;\n\nDraw the scalar bar and annotation text to the screen.\n"},
  {"RenderOverlay", PyvtkCornerAnnotation_RenderOverlay, METH_VARARGS,
   "V.RenderOverlay(vtkViewport) -> int\nC++: int RenderOverlay(vtkViewport *viewport) override;\n\nDraw the scalar bar and annotation text to the screen.\n"},
  {"HasTranslucentPolygonalGeometry", PyvtkCornerAnnotation_HasTranslucentPolygonalGeometry, METH_VARARGS,
   "V.HasTranslucentPolygonalGeometry() -> int\nC++: int HasTranslucentPolygonalGeometry() override;\n\nDoes this prop have some translucent polygonal geometry?\n"},
  {"SetMaximumLineHeight", PyvtkCornerAnnotation_SetMaximumLineHeight, METH_VARARGS,
   "V.SetMaximumLineHeight(float)\nC++: virtual void SetMaximumLineHeight(double _arg)\n\nSet/Get the maximum height of a line of text as a percentage of\nthe vertical area allocated to this scaled text actor. Defaults\nto 1.0\n"},
  {"GetMaximumLineHeight", PyvtkCornerAnnotation_GetMaximumLineHeight, METH_VARARGS,
   "V.GetMaximumLineHeight() -> float\nC++: virtual double GetMaximumLineHeight()\n\nSet/Get the maximum height of a line of text as a percentage of\nthe vertical area allocated to this scaled text actor. Defaults\nto 1.0\n"},
  {"SetMinimumFontSize", PyvtkCornerAnnotation_SetMinimumFontSize, METH_VARARGS,
   "V.SetMinimumFontSize(int)\nC++: virtual void SetMinimumFontSize(int _arg)\n\nSet/Get the minimum/maximum size font that will be shown. If the\nfont drops below the minimum size it will not be rendered.\n"},
  {"GetMinimumFontSize", PyvtkCornerAnnotation_GetMinimumFontSize, METH_VARARGS,
   "V.GetMinimumFontSize() -> int\nC++: virtual int GetMinimumFontSize()\n\nSet/Get the minimum/maximum size font that will be shown. If the\nfont drops below the minimum size it will not be rendered.\n"},
  {"SetMaximumFontSize", PyvtkCornerAnnotation_SetMaximumFontSize, METH_VARARGS,
   "V.SetMaximumFontSize(int)\nC++: virtual void SetMaximumFontSize(int _arg)\n\nSet/Get the minimum/maximum size font that will be shown. If the\nfont drops below the minimum size it will not be rendered.\n"},
  {"GetMaximumFontSize", PyvtkCornerAnnotation_GetMaximumFontSize, METH_VARARGS,
   "V.GetMaximumFontSize() -> int\nC++: virtual int GetMaximumFontSize()\n\nSet/Get the minimum/maximum size font that will be shown. If the\nfont drops below the minimum size it will not be rendered.\n"},
  {"SetLinearFontScaleFactor", PyvtkCornerAnnotation_SetLinearFontScaleFactor, METH_VARARGS,
   "V.SetLinearFontScaleFactor(float)\nC++: virtual void SetLinearFontScaleFactor(double _arg)\n\nSet/Get font scaling factors The font size, f, is calculated as\nthe largest possible value such that the annotations for the\ngiven viewport do not overlap. This font size is scaled\nnon-linearly with the viewport size, to maintain an acceptable\nreadable size at larger viewport sizes, without being too big. f'\n= linearScale * pow(f,nonlinearScale)\n"},
  {"GetLinearFontScaleFactor", PyvtkCornerAnnotation_GetLinearFontScaleFactor, METH_VARARGS,
   "V.GetLinearFontScaleFactor() -> float\nC++: virtual double GetLinearFontScaleFactor()\n\nSet/Get font scaling factors The font size, f, is calculated as\nthe largest possible value such that the annotations for the\ngiven viewport do not overlap. This font size is scaled\nnon-linearly with the viewport size, to maintain an acceptable\nreadable size at larger viewport sizes, without being too big. f'\n= linearScale * pow(f,nonlinearScale)\n"},
  {"SetNonlinearFontScaleFactor", PyvtkCornerAnnotation_SetNonlinearFontScaleFactor, METH_VARARGS,
   "V.SetNonlinearFontScaleFactor(float)\nC++: virtual void SetNonlinearFontScaleFactor(double _arg)\n\nSet/Get font scaling factors The font size, f, is calculated as\nthe largest possible value such that the annotations for the\ngiven viewport do not overlap. This font size is scaled\nnon-linearly with the viewport size, to maintain an acceptable\nreadable size at larger viewport sizes, without being too big. f'\n= linearScale * pow(f,nonlinearScale)\n"},
  {"GetNonlinearFontScaleFactor", PyvtkCornerAnnotation_GetNonlinearFontScaleFactor, METH_VARARGS,
   "V.GetNonlinearFontScaleFactor() -> float\nC++: virtual double GetNonlinearFontScaleFactor()\n\nSet/Get font scaling factors The font size, f, is calculated as\nthe largest possible value such that the annotations for the\ngiven viewport do not overlap. This font size is scaled\nnon-linearly with the viewport size, to maintain an acceptable\nreadable size at larger viewport sizes, without being too big. f'\n= linearScale * pow(f,nonlinearScale)\n"},
  {"ReleaseGraphicsResources", PyvtkCornerAnnotation_ReleaseGraphicsResources, METH_VARARGS,
   "V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nRelease any graphics resources that are being consumed by this\nactor. The parameter window could be used to determine which\ngraphic resources to release.\n"},
  {"SetText", PyvtkCornerAnnotation_SetText, METH_VARARGS,
   "V.SetText(int, string)\nC++: void SetText(int i, const char *text)\n\nSet/Get the text to be displayed for each corner\n\\sa TextPosition\n"},
  {"GetText", PyvtkCornerAnnotation_GetText, METH_VARARGS,
   "V.GetText(int) -> string\nC++: const char *GetText(int i)\n\nSet/Get the text to be displayed for each corner\n\\sa TextPosition\n"},
  {"ClearAllTexts", PyvtkCornerAnnotation_ClearAllTexts, METH_VARARGS,
   "V.ClearAllTexts()\nC++: void ClearAllTexts()\n\nSet/Get the text to be displayed for each corner\n\\sa TextPosition\n"},
  {"CopyAllTextsFrom", PyvtkCornerAnnotation_CopyAllTextsFrom, METH_VARARGS,
   "V.CopyAllTextsFrom(vtkCornerAnnotation)\nC++: void CopyAllTextsFrom(vtkCornerAnnotation *ca)\n\nSet/Get the text to be displayed for each corner\n\\sa TextPosition\n"},
  {"SetImageActor", PyvtkCornerAnnotation_SetImageActor, METH_VARARGS,
   "V.SetImageActor(vtkImageActor)\nC++: void SetImageActor(vtkImageActor *)\n\nSet an image actor to look at for slice information\n"},
  {"GetImageActor", PyvtkCornerAnnotation_GetImageActor, METH_VARARGS,
   "V.GetImageActor() -> vtkImageActor\nC++: virtual vtkImageActor *GetImageActor()\n\nSet an image actor to look at for slice information\n"},
  {"SetWindowLevel", PyvtkCornerAnnotation_SetWindowLevel, METH_VARARGS,
   "V.SetWindowLevel(vtkImageMapToWindowLevelColors)\nC++: void SetWindowLevel(vtkImageMapToWindowLevelColors *)\n\nSet an instance of vtkImageMapToWindowLevelColors to use for\nlooking at window level changes\n"},
  {"GetWindowLevel", PyvtkCornerAnnotation_GetWindowLevel, METH_VARARGS,
   "V.GetWindowLevel() -> vtkImageMapToWindowLevelColors\nC++: virtual vtkImageMapToWindowLevelColors *GetWindowLevel()\n\nSet an instance of vtkImageMapToWindowLevelColors to use for\nlooking at window level changes\n"},
  {"SetLevelShift", PyvtkCornerAnnotation_SetLevelShift, METH_VARARGS,
   "V.SetLevelShift(float)\nC++: virtual void SetLevelShift(double _arg)\n\nSet the value to shift the level by.\n"},
  {"GetLevelShift", PyvtkCornerAnnotation_GetLevelShift, METH_VARARGS,
   "V.GetLevelShift() -> float\nC++: virtual double GetLevelShift()\n\nSet the value to shift the level by.\n"},
  {"SetLevelScale", PyvtkCornerAnnotation_SetLevelScale, METH_VARARGS,
   "V.SetLevelScale(float)\nC++: virtual void SetLevelScale(double _arg)\n\nSet the value to scale the level by.\n"},
  {"GetLevelScale", PyvtkCornerAnnotation_GetLevelScale, METH_VARARGS,
   "V.GetLevelScale() -> float\nC++: virtual double GetLevelScale()\n\nSet the value to scale the level by.\n"},
  {"SetTextProperty", PyvtkCornerAnnotation_SetTextProperty, METH_VARARGS,
   "V.SetTextProperty(vtkTextProperty)\nC++: virtual void SetTextProperty(vtkTextProperty *p)\n\nSet/Get the text property of all corners.\n"},
  {"GetTextProperty", PyvtkCornerAnnotation_GetTextProperty, METH_VARARGS,
   "V.GetTextProperty() -> vtkTextProperty\nC++: virtual vtkTextProperty *GetTextProperty()\n\nSet/Get the text property of all corners.\n"},
  {"ShowSliceAndImageOn", PyvtkCornerAnnotation_ShowSliceAndImageOn, METH_VARARGS,
   "V.ShowSliceAndImageOn()\nC++: virtual void ShowSliceAndImageOn()\n\nEven if there is an image actor, should `slice' and `image' be\ndisplayed?\n"},
  {"ShowSliceAndImageOff", PyvtkCornerAnnotation_ShowSliceAndImageOff, METH_VARARGS,
   "V.ShowSliceAndImageOff()\nC++: virtual void ShowSliceAndImageOff()\n\nEven if there is an image actor, should `slice' and `image' be\ndisplayed?\n"},
  {"SetShowSliceAndImage", PyvtkCornerAnnotation_SetShowSliceAndImage, METH_VARARGS,
   "V.SetShowSliceAndImage(int)\nC++: virtual void SetShowSliceAndImage(vtkTypeBool _arg)\n\nEven if there is an image actor, should `slice' and `image' be\ndisplayed?\n"},
  {"GetShowSliceAndImage", PyvtkCornerAnnotation_GetShowSliceAndImage, METH_VARARGS,
   "V.GetShowSliceAndImage() -> int\nC++: virtual vtkTypeBool GetShowSliceAndImage()\n\nEven if there is an image actor, should `slice' and `image' be\ndisplayed?\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkCornerAnnotation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingAnnotationPython.vtkCornerAnnotation", // tp_name
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
  PyvtkCornerAnnotation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCornerAnnotation_StaticNew()
{
  return vtkCornerAnnotation::New();
}

PyObject *PyvtkCornerAnnotation_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkCornerAnnotation_Type, PyvtkCornerAnnotation_Methods,
    "vtkCornerAnnotation",
 &PyvtkCornerAnnotation_StaticNew);

  PyTypeObject *pytype = &PyvtkCornerAnnotation_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkActor2D_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkCornerAnnotation_TextPosition_Type);
  PyvtkCornerAnnotation_TextPosition_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkCornerAnnotation_TextPosition_Type);

  o = (PyObject *)&PyvtkCornerAnnotation_TextPosition_Type;
  if (PyDict_SetItemString(d, "TextPosition", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 8; c++)
  {
    typedef vtkCornerAnnotation::TextPosition cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[8] = {
        { "LowerLeft", vtkCornerAnnotation::LowerLeft },
        { "LowerRight", vtkCornerAnnotation::LowerRight },
        { "UpperLeft", vtkCornerAnnotation::UpperLeft },
        { "UpperRight", vtkCornerAnnotation::UpperRight },
        { "LowerEdge", vtkCornerAnnotation::LowerEdge },
        { "RightEdge", vtkCornerAnnotation::RightEdge },
        { "LeftEdge", vtkCornerAnnotation::LeftEdge },
        { "UpperEdge", vtkCornerAnnotation::UpperEdge },
      };

    o = PyvtkCornerAnnotation_TextPosition_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  o = PyInt_FromLong(8);
  if (o)
  {
    PyDict_SetItemString(d, "NumTextPositions", o);
    Py_DECREF(o);
  }
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCornerAnnotation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCornerAnnotation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCornerAnnotation", o) != 0)
  {
    Py_DECREF(o);
  }

}

