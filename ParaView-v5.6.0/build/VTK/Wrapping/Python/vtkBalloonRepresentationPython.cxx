// python wrapper for vtkBalloonRepresentation
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
#include "vtkBalloonRepresentation.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkBalloonRepresentation(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkBalloonRepresentation_ClassNew(); }

#ifndef DECLARED_PyvtkWidgetRepresentation_ClassNew
extern "C" { PyObject *PyvtkWidgetRepresentation_ClassNew(); }
#define DECLARED_PyvtkWidgetRepresentation_ClassNew
#endif

static const char *PyvtkBalloonRepresentation_Doc =
  "vtkBalloonRepresentation - represent the vtkBalloonWidget\n\n"
  "Superclass: vtkWidgetRepresentation\n\n"
  "The vtkBalloonRepresentation is used to represent the\n"
  "vtkBalloonWidget. This representation is defined by two items: a text\n"
  "string and an image. At least one of these two items must be defined,\n"
  "but it is allowable to specify both, or just an image or just text.\n"
  "If both the text and image are specified, then methods are available\n"
  "for positioning the text and image with respect to each other.\n\n"
  "The balloon representation consists of three parts: text, a\n"
  "rectangular frame behind the text, and an image placed next to the\n"
  "frame and sized to match the frame.\n\n"
  "The size of the balloon is ultimately controlled by the text\n"
  "properties (i.e., font size). This representation uses a layout\n"
  "policy as follows.\n\n"
  "If there is just text and no image, then the text properties and\n"
  "padding are used to control the size of the balloon.\n\n"
  "If there is just an image and no text, then the ImageSize[2] member\n"
  "is used to control the image size. (The image will fit into this\n"
  "rectangle, but will not necessarily fill the whole rectangle, i.e.,\n"
  "the image is not stretched).\n\n"
  "If there is text and an image, the following approach ia used. First,\n"
  "based on the font size and other related properties (e.g., padding),\n"
  "determine the size of the frame. Second, depending on the layout of\n"
  "the image and text frame, control the size of the neighboring image\n"
  "(since the frame and image share a common edge). However, if this\n"
  "results in an image that is smaller than ImageSize[2], then the image\n"
  "size will be set to ImageSize[2] and the frame will be adjusted\n"
  "accordingly. The text is always placed in the center of the frame if\n"
  "the frame is resized.\n\n"
  "@sa\n"
  "vtkBalloonWidget\n\n";

static PyTypeObject PyvtkBalloonRepresentation__InteractionState_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInteractionWidgetsPython.vtkBalloonRepresentation._InteractionState", // tp_name
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

PyObject *PyvtkBalloonRepresentation__InteractionState_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkBalloonRepresentation__InteractionState_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkBalloonRepresentation__InteractionState_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkBalloonRepresentation_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkBalloonRepresentation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBalloonRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonRepresentation *op = static_cast<vtkBalloonRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkBalloonRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBalloonRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkBalloonRepresentation *tempr = vtkBalloonRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBalloonRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonRepresentation *op = static_cast<vtkBalloonRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkBalloonRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkBalloonRepresentation::NewInstance());

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
PyvtkBalloonRepresentation_SetBalloonImage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBalloonImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonRepresentation *op = static_cast<vtkBalloonRepresentation *>(vp);

  vtkImageData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageData"))
  {
    if (ap.IsBound())
    {
      op->SetBalloonImage(temp0);
    }
    else
    {
      op->vtkBalloonRepresentation::SetBalloonImage(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBalloonRepresentation_GetBalloonImage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBalloonImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonRepresentation *op = static_cast<vtkBalloonRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageData *tempr = (ap.IsBound() ?
      op->GetBalloonImage() :
      op->vtkBalloonRepresentation::GetBalloonImage());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBalloonRepresentation_GetBalloonText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBalloonText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonRepresentation *op = static_cast<vtkBalloonRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetBalloonText() :
      op->vtkBalloonRepresentation::GetBalloonText());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBalloonRepresentation_SetBalloonText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBalloonText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonRepresentation *op = static_cast<vtkBalloonRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBalloonText(temp0);
    }
    else
    {
      op->vtkBalloonRepresentation::SetBalloonText(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBalloonRepresentation_SetImageSize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImageSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonRepresentation *op = static_cast<vtkBalloonRepresentation *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetImageSize(temp0, temp1);
    }
    else
    {
      op->vtkBalloonRepresentation::SetImageSize(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBalloonRepresentation_SetImageSize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImageSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonRepresentation *op = static_cast<vtkBalloonRepresentation *>(vp);

  const size_t size0 = 2;
  int temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetImageSize(temp0);
    }
    else
    {
      op->vtkBalloonRepresentation::SetImageSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBalloonRepresentation_SetImageSize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkBalloonRepresentation_SetImageSize_s1(self, args);
    case 1:
      return PyvtkBalloonRepresentation_SetImageSize_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetImageSize");
  return nullptr;
}



static PyObject *
PyvtkBalloonRepresentation_GetImageSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonRepresentation *op = static_cast<vtkBalloonRepresentation *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetImageSize() :
      op->vtkBalloonRepresentation::GetImageSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkBalloonRepresentation_SetTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonRepresentation *op = static_cast<vtkBalloonRepresentation *>(vp);

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
      op->vtkBalloonRepresentation::SetTextProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBalloonRepresentation_GetTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonRepresentation *op = static_cast<vtkBalloonRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetTextProperty() :
      op->vtkBalloonRepresentation::GetTextProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBalloonRepresentation_SetFrameProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFrameProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonRepresentation *op = static_cast<vtkBalloonRepresentation *>(vp);

  vtkProperty2D *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty2D"))
  {
    if (ap.IsBound())
    {
      op->SetFrameProperty(temp0);
    }
    else
    {
      op->vtkBalloonRepresentation::SetFrameProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBalloonRepresentation_GetFrameProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFrameProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonRepresentation *op = static_cast<vtkBalloonRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty2D *tempr = (ap.IsBound() ?
      op->GetFrameProperty() :
      op->vtkBalloonRepresentation::GetFrameProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBalloonRepresentation_SetImageProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImageProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonRepresentation *op = static_cast<vtkBalloonRepresentation *>(vp);

  vtkProperty2D *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty2D"))
  {
    if (ap.IsBound())
    {
      op->SetImageProperty(temp0);
    }
    else
    {
      op->vtkBalloonRepresentation::SetImageProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBalloonRepresentation_GetImageProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonRepresentation *op = static_cast<vtkBalloonRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty2D *tempr = (ap.IsBound() ?
      op->GetImageProperty() :
      op->vtkBalloonRepresentation::GetImageProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBalloonRepresentation_SetBalloonLayout(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBalloonLayout");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonRepresentation *op = static_cast<vtkBalloonRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBalloonLayout(temp0);
    }
    else
    {
      op->vtkBalloonRepresentation::SetBalloonLayout(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBalloonRepresentation_GetBalloonLayout(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBalloonLayout");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonRepresentation *op = static_cast<vtkBalloonRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBalloonLayout() :
      op->vtkBalloonRepresentation::GetBalloonLayout());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBalloonRepresentation_SetBalloonLayoutToImageLeft(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBalloonLayoutToImageLeft");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonRepresentation *op = static_cast<vtkBalloonRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetBalloonLayoutToImageLeft();
    }
    else
    {
      op->vtkBalloonRepresentation::SetBalloonLayoutToImageLeft();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBalloonRepresentation_SetBalloonLayoutToImageRight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBalloonLayoutToImageRight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonRepresentation *op = static_cast<vtkBalloonRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetBalloonLayoutToImageRight();
    }
    else
    {
      op->vtkBalloonRepresentation::SetBalloonLayoutToImageRight();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBalloonRepresentation_SetBalloonLayoutToImageBottom(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBalloonLayoutToImageBottom");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonRepresentation *op = static_cast<vtkBalloonRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetBalloonLayoutToImageBottom();
    }
    else
    {
      op->vtkBalloonRepresentation::SetBalloonLayoutToImageBottom();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBalloonRepresentation_SetBalloonLayoutToImageTop(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBalloonLayoutToImageTop");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonRepresentation *op = static_cast<vtkBalloonRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetBalloonLayoutToImageTop();
    }
    else
    {
      op->vtkBalloonRepresentation::SetBalloonLayoutToImageTop();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBalloonRepresentation_SetBalloonLayoutToTextLeft(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBalloonLayoutToTextLeft");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonRepresentation *op = static_cast<vtkBalloonRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetBalloonLayoutToTextLeft();
    }
    else
    {
      op->vtkBalloonRepresentation::SetBalloonLayoutToTextLeft();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBalloonRepresentation_SetBalloonLayoutToTextRight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBalloonLayoutToTextRight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonRepresentation *op = static_cast<vtkBalloonRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetBalloonLayoutToTextRight();
    }
    else
    {
      op->vtkBalloonRepresentation::SetBalloonLayoutToTextRight();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBalloonRepresentation_SetBalloonLayoutToTextTop(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBalloonLayoutToTextTop");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonRepresentation *op = static_cast<vtkBalloonRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetBalloonLayoutToTextTop();
    }
    else
    {
      op->vtkBalloonRepresentation::SetBalloonLayoutToTextTop();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBalloonRepresentation_SetBalloonLayoutToTextBottom(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBalloonLayoutToTextBottom");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonRepresentation *op = static_cast<vtkBalloonRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetBalloonLayoutToTextBottom();
    }
    else
    {
      op->vtkBalloonRepresentation::SetBalloonLayoutToTextBottom();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBalloonRepresentation_SetOffset_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonRepresentation *op = static_cast<vtkBalloonRepresentation *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetOffset(temp0, temp1);
    }
    else
    {
      op->vtkBalloonRepresentation::SetOffset(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBalloonRepresentation_SetOffset_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonRepresentation *op = static_cast<vtkBalloonRepresentation *>(vp);

  const size_t size0 = 2;
  int temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetOffset(temp0);
    }
    else
    {
      op->vtkBalloonRepresentation::SetOffset(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBalloonRepresentation_SetOffset(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkBalloonRepresentation_SetOffset_s1(self, args);
    case 1:
      return PyvtkBalloonRepresentation_SetOffset_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetOffset");
  return nullptr;
}



static PyObject *
PyvtkBalloonRepresentation_GetOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonRepresentation *op = static_cast<vtkBalloonRepresentation *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetOffset() :
      op->vtkBalloonRepresentation::GetOffset());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkBalloonRepresentation_SetPadding(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPadding");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonRepresentation *op = static_cast<vtkBalloonRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPadding(temp0);
    }
    else
    {
      op->vtkBalloonRepresentation::SetPadding(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBalloonRepresentation_GetPaddingMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPaddingMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonRepresentation *op = static_cast<vtkBalloonRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPaddingMinValue() :
      op->vtkBalloonRepresentation::GetPaddingMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBalloonRepresentation_GetPaddingMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPaddingMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonRepresentation *op = static_cast<vtkBalloonRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPaddingMaxValue() :
      op->vtkBalloonRepresentation::GetPaddingMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBalloonRepresentation_GetPadding(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPadding");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonRepresentation *op = static_cast<vtkBalloonRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPadding() :
      op->vtkBalloonRepresentation::GetPadding());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBalloonRepresentation_StartWidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartWidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonRepresentation *op = static_cast<vtkBalloonRepresentation *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  double save0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->StartWidgetInteraction(temp0);
    }
    else
    {
      op->vtkBalloonRepresentation::StartWidgetInteraction(temp0);
    }

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBalloonRepresentation_EndWidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EndWidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonRepresentation *op = static_cast<vtkBalloonRepresentation *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  double save0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->EndWidgetInteraction(temp0);
    }
    else
    {
      op->vtkBalloonRepresentation::EndWidgetInteraction(temp0);
    }

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBalloonRepresentation_BuildRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonRepresentation *op = static_cast<vtkBalloonRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BuildRepresentation();
    }
    else
    {
      op->vtkBalloonRepresentation::BuildRepresentation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBalloonRepresentation_ComputeInteractionState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeInteractionState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonRepresentation *op = static_cast<vtkBalloonRepresentation *>(vp);

  int temp0;
  int temp1;
  int temp2 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    int tempr = (ap.IsBound() ?
      op->ComputeInteractionState(temp0, temp1, temp2) :
      op->vtkBalloonRepresentation::ComputeInteractionState(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBalloonRepresentation_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonRepresentation *op = static_cast<vtkBalloonRepresentation *>(vp);

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
      op->vtkBalloonRepresentation::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBalloonRepresentation_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonRepresentation *op = static_cast<vtkBalloonRepresentation *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOverlay(temp0) :
      op->vtkBalloonRepresentation::RenderOverlay(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkBalloonRepresentation_Methods[] = {
  {"IsTypeOf", PyvtkBalloonRepresentation_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard VTK methods.\n"},
  {"IsA", PyvtkBalloonRepresentation_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard VTK methods.\n"},
  {"SafeDownCast", PyvtkBalloonRepresentation_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkBalloonRepresentation\nC++: static vtkBalloonRepresentation *SafeDownCast(\n    vtkObjectBase *o)\n\nStandard VTK methods.\n"},
  {"NewInstance", PyvtkBalloonRepresentation_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkBalloonRepresentation\nC++: vtkBalloonRepresentation *NewInstance()\n\nStandard VTK methods.\n"},
  {"SetBalloonImage", PyvtkBalloonRepresentation_SetBalloonImage, METH_VARARGS,
   "V.SetBalloonImage(vtkImageData)\nC++: virtual void SetBalloonImage(vtkImageData *img)\n\nSpecify/retrieve the image to display in the balloon.\n"},
  {"GetBalloonImage", PyvtkBalloonRepresentation_GetBalloonImage, METH_VARARGS,
   "V.GetBalloonImage() -> vtkImageData\nC++: virtual vtkImageData *GetBalloonImage()\n\nSpecify/retrieve the image to display in the balloon.\n"},
  {"GetBalloonText", PyvtkBalloonRepresentation_GetBalloonText, METH_VARARGS,
   "V.GetBalloonText() -> string\nC++: virtual char *GetBalloonText()\n\nSpecify/retrieve the text to display in the balloon.\n"},
  {"SetBalloonText", PyvtkBalloonRepresentation_SetBalloonText, METH_VARARGS,
   "V.SetBalloonText(string)\nC++: virtual void SetBalloonText(const char *_arg)\n\nSpecify/retrieve the text to display in the balloon.\n"},
  {"SetImageSize", PyvtkBalloonRepresentation_SetImageSize, METH_VARARGS,
   "V.SetImageSize(int, int)\nC++: void SetImageSize(int, int)\nV.SetImageSize((int, int))\nC++: void SetImageSize(int a[2])\n\n"},
  {"GetImageSize", PyvtkBalloonRepresentation_GetImageSize, METH_VARARGS,
   "V.GetImageSize() -> (int, int)\nC++: int *GetImageSize()\n\n"},
  {"SetTextProperty", PyvtkBalloonRepresentation_SetTextProperty, METH_VARARGS,
   "V.SetTextProperty(vtkTextProperty)\nC++: virtual void SetTextProperty(vtkTextProperty *p)\n\nSet/get the text property (relevant only if text is shown).\n"},
  {"GetTextProperty", PyvtkBalloonRepresentation_GetTextProperty, METH_VARARGS,
   "V.GetTextProperty() -> vtkTextProperty\nC++: virtual vtkTextProperty *GetTextProperty()\n\nSet/get the text property (relevant only if text is shown).\n"},
  {"SetFrameProperty", PyvtkBalloonRepresentation_SetFrameProperty, METH_VARARGS,
   "V.SetFrameProperty(vtkProperty2D)\nC++: virtual void SetFrameProperty(vtkProperty2D *p)\n\nSet/get the frame property (relevant only if text is shown). The\nframe lies behind the text.\n"},
  {"GetFrameProperty", PyvtkBalloonRepresentation_GetFrameProperty, METH_VARARGS,
   "V.GetFrameProperty() -> vtkProperty2D\nC++: virtual vtkProperty2D *GetFrameProperty()\n\nSet/get the frame property (relevant only if text is shown). The\nframe lies behind the text.\n"},
  {"SetImageProperty", PyvtkBalloonRepresentation_SetImageProperty, METH_VARARGS,
   "V.SetImageProperty(vtkProperty2D)\nC++: virtual void SetImageProperty(vtkProperty2D *p)\n\nSet/get the image property (relevant only if an image is shown).\n"},
  {"GetImageProperty", PyvtkBalloonRepresentation_GetImageProperty, METH_VARARGS,
   "V.GetImageProperty() -> vtkProperty2D\nC++: virtual vtkProperty2D *GetImageProperty()\n\nSet/get the image property (relevant only if an image is shown).\n"},
  {"SetBalloonLayout", PyvtkBalloonRepresentation_SetBalloonLayout, METH_VARARGS,
   "V.SetBalloonLayout(int)\nC++: virtual void SetBalloonLayout(int _arg)\n\nSpecify the layout of the image and text within the balloon. Note\nthat there are reduncies in these methods, for example\nSetBalloonLayoutToImageLeft() results in the same effect as\nSetBalloonLayoutToTextRight(). If only text is specified, or only\nan image is specified, then it doesn't matter how the layout is\nspecified.\n"},
  {"GetBalloonLayout", PyvtkBalloonRepresentation_GetBalloonLayout, METH_VARARGS,
   "V.GetBalloonLayout() -> int\nC++: virtual int GetBalloonLayout()\n\nSpecify the layout of the image and text within the balloon. Note\nthat there are reduncies in these methods, for example\nSetBalloonLayoutToImageLeft() results in the same effect as\nSetBalloonLayoutToTextRight(). If only text is specified, or only\nan image is specified, then it doesn't matter how the layout is\nspecified.\n"},
  {"SetBalloonLayoutToImageLeft", PyvtkBalloonRepresentation_SetBalloonLayoutToImageLeft, METH_VARARGS,
   "V.SetBalloonLayoutToImageLeft()\nC++: void SetBalloonLayoutToImageLeft()\n\nSpecify the layout of the image and text within the balloon. Note\nthat there are reduncies in these methods, for example\nSetBalloonLayoutToImageLeft() results in the same effect as\nSetBalloonLayoutToTextRight(). If only text is specified, or only\nan image is specified, then it doesn't matter how the layout is\nspecified.\n"},
  {"SetBalloonLayoutToImageRight", PyvtkBalloonRepresentation_SetBalloonLayoutToImageRight, METH_VARARGS,
   "V.SetBalloonLayoutToImageRight()\nC++: void SetBalloonLayoutToImageRight()\n\nSpecify the layout of the image and text within the balloon. Note\nthat there are reduncies in these methods, for example\nSetBalloonLayoutToImageLeft() results in the same effect as\nSetBalloonLayoutToTextRight(). If only text is specified, or only\nan image is specified, then it doesn't matter how the layout is\nspecified.\n"},
  {"SetBalloonLayoutToImageBottom", PyvtkBalloonRepresentation_SetBalloonLayoutToImageBottom, METH_VARARGS,
   "V.SetBalloonLayoutToImageBottom()\nC++: void SetBalloonLayoutToImageBottom()\n\nSpecify the layout of the image and text within the balloon. Note\nthat there are reduncies in these methods, for example\nSetBalloonLayoutToImageLeft() results in the same effect as\nSetBalloonLayoutToTextRight(). If only text is specified, or only\nan image is specified, then it doesn't matter how the layout is\nspecified.\n"},
  {"SetBalloonLayoutToImageTop", PyvtkBalloonRepresentation_SetBalloonLayoutToImageTop, METH_VARARGS,
   "V.SetBalloonLayoutToImageTop()\nC++: void SetBalloonLayoutToImageTop()\n\nSpecify the layout of the image and text within the balloon. Note\nthat there are reduncies in these methods, for example\nSetBalloonLayoutToImageLeft() results in the same effect as\nSetBalloonLayoutToTextRight(). If only text is specified, or only\nan image is specified, then it doesn't matter how the layout is\nspecified.\n"},
  {"SetBalloonLayoutToTextLeft", PyvtkBalloonRepresentation_SetBalloonLayoutToTextLeft, METH_VARARGS,
   "V.SetBalloonLayoutToTextLeft()\nC++: void SetBalloonLayoutToTextLeft()\n\nSpecify the layout of the image and text within the balloon. Note\nthat there are reduncies in these methods, for example\nSetBalloonLayoutToImageLeft() results in the same effect as\nSetBalloonLayoutToTextRight(). If only text is specified, or only\nan image is specified, then it doesn't matter how the layout is\nspecified.\n"},
  {"SetBalloonLayoutToTextRight", PyvtkBalloonRepresentation_SetBalloonLayoutToTextRight, METH_VARARGS,
   "V.SetBalloonLayoutToTextRight()\nC++: void SetBalloonLayoutToTextRight()\n\nSpecify the layout of the image and text within the balloon. Note\nthat there are reduncies in these methods, for example\nSetBalloonLayoutToImageLeft() results in the same effect as\nSetBalloonLayoutToTextRight(). If only text is specified, or only\nan image is specified, then it doesn't matter how the layout is\nspecified.\n"},
  {"SetBalloonLayoutToTextTop", PyvtkBalloonRepresentation_SetBalloonLayoutToTextTop, METH_VARARGS,
   "V.SetBalloonLayoutToTextTop()\nC++: void SetBalloonLayoutToTextTop()\n\nSpecify the layout of the image and text within the balloon. Note\nthat there are reduncies in these methods, for example\nSetBalloonLayoutToImageLeft() results in the same effect as\nSetBalloonLayoutToTextRight(). If only text is specified, or only\nan image is specified, then it doesn't matter how the layout is\nspecified.\n"},
  {"SetBalloonLayoutToTextBottom", PyvtkBalloonRepresentation_SetBalloonLayoutToTextBottom, METH_VARARGS,
   "V.SetBalloonLayoutToTextBottom()\nC++: void SetBalloonLayoutToTextBottom()\n\nSpecify the layout of the image and text within the balloon. Note\nthat there are reduncies in these methods, for example\nSetBalloonLayoutToImageLeft() results in the same effect as\nSetBalloonLayoutToTextRight(). If only text is specified, or only\nan image is specified, then it doesn't matter how the layout is\nspecified.\n"},
  {"SetOffset", PyvtkBalloonRepresentation_SetOffset, METH_VARARGS,
   "V.SetOffset(int, int)\nC++: void SetOffset(int, int)\nV.SetOffset((int, int))\nC++: void SetOffset(int a[2])\n\n"},
  {"GetOffset", PyvtkBalloonRepresentation_GetOffset, METH_VARARGS,
   "V.GetOffset() -> (int, int)\nC++: int *GetOffset()\n\n"},
  {"SetPadding", PyvtkBalloonRepresentation_SetPadding, METH_VARARGS,
   "V.SetPadding(int)\nC++: virtual void SetPadding(int _arg)\n\nSet/Get the padding (in pixels) that is used between the text and\nthe frame.\n"},
  {"GetPaddingMinValue", PyvtkBalloonRepresentation_GetPaddingMinValue, METH_VARARGS,
   "V.GetPaddingMinValue() -> int\nC++: virtual int GetPaddingMinValue()\n\nSet/Get the padding (in pixels) that is used between the text and\nthe frame.\n"},
  {"GetPaddingMaxValue", PyvtkBalloonRepresentation_GetPaddingMaxValue, METH_VARARGS,
   "V.GetPaddingMaxValue() -> int\nC++: virtual int GetPaddingMaxValue()\n\nSet/Get the padding (in pixels) that is used between the text and\nthe frame.\n"},
  {"GetPadding", PyvtkBalloonRepresentation_GetPadding, METH_VARARGS,
   "V.GetPadding() -> int\nC++: virtual int GetPadding()\n\nSet/Get the padding (in pixels) that is used between the text and\nthe frame.\n"},
  {"StartWidgetInteraction", PyvtkBalloonRepresentation_StartWidgetInteraction, METH_VARARGS,
   "V.StartWidgetInteraction([float, float])\nC++: void StartWidgetInteraction(double e[2]) override;\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\n"},
  {"EndWidgetInteraction", PyvtkBalloonRepresentation_EndWidgetInteraction, METH_VARARGS,
   "V.EndWidgetInteraction([float, float])\nC++: void EndWidgetInteraction(double e[2]) override;\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\n"},
  {"BuildRepresentation", PyvtkBalloonRepresentation_BuildRepresentation, METH_VARARGS,
   "V.BuildRepresentation()\nC++: void BuildRepresentation() override;\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\n"},
  {"ComputeInteractionState", PyvtkBalloonRepresentation_ComputeInteractionState, METH_VARARGS,
   "V.ComputeInteractionState(int, int, int) -> int\nC++: int ComputeInteractionState(int X, int Y, int modify=0)\n    override;\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\n"},
  {"ReleaseGraphicsResources", PyvtkBalloonRepresentation_ReleaseGraphicsResources, METH_VARARGS,
   "V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *w) override;\n\nMethods required by vtkProp superclass.\n"},
  {"RenderOverlay", PyvtkBalloonRepresentation_RenderOverlay, METH_VARARGS,
   "V.RenderOverlay(vtkViewport) -> int\nC++: int RenderOverlay(vtkViewport *viewport) override;\n\nMethods required by vtkProp superclass.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkBalloonRepresentation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInteractionWidgetsPython.vtkBalloonRepresentation", // tp_name
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
  PyvtkBalloonRepresentation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkBalloonRepresentation_StaticNew()
{
  return vtkBalloonRepresentation::New();
}

PyObject *PyvtkBalloonRepresentation_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkBalloonRepresentation_Type, PyvtkBalloonRepresentation_Methods,
    "vtkBalloonRepresentation",
 &PyvtkBalloonRepresentation_StaticNew);

  PyTypeObject *pytype = &PyvtkBalloonRepresentation_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkWidgetRepresentation_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkBalloonRepresentation__InteractionState_Type);
  PyvtkBalloonRepresentation__InteractionState_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkBalloonRepresentation__InteractionState_Type);

  o = (PyObject *)&PyvtkBalloonRepresentation__InteractionState_Type;
  if (PyDict_SetItemString(d, "_InteractionState", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 4; c++)
  {
    static const struct { const char *name; int value; }
      constants[4] = {
        { "ImageLeft", vtkBalloonRepresentation::ImageLeft },
        { "ImageRight", vtkBalloonRepresentation::ImageRight },
        { "ImageBottom", vtkBalloonRepresentation::ImageBottom },
        { "ImageTop", vtkBalloonRepresentation::ImageTop },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 3; c++)
  {
    typedef vtkBalloonRepresentation::_InteractionState cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[3] = {
        { "Outside", vtkBalloonRepresentation::Outside },
        { "OnText", vtkBalloonRepresentation::OnText },
        { "OnImage", vtkBalloonRepresentation::OnImage },
      };

    o = PyvtkBalloonRepresentation__InteractionState_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkBalloonRepresentation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkBalloonRepresentation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkBalloonRepresentation", o) != 0)
  {
    Py_DECREF(o);
  }

}

