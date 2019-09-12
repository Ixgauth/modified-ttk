// python wrapper for vtkCommand
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkCommand.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCommand(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkCommand_ClassNew(); }

#ifndef DECLARED_PyvtkObjectBase_ClassNew
extern "C" { PyObject *PyvtkObjectBase_ClassNew(); }
#define DECLARED_PyvtkObjectBase_ClassNew
#endif

static const char *PyvtkCommand_Doc =
  "vtkCommand - superclass for callback/observer methods\n\n"
  "Superclass: vtkObjectBase\n\n"
  "vtkCommand is an implementation of the observer/command design\n"
  "pattern.  In this design pattern, any instance of vtkObject can be\n"
  "\"observed\" for any events it might invoke. For example, vtkRenderer\n"
  "invokes a StartEvent as it begins to render and a EndEvent when it\n"
  "finishes rendering. Filters (subclasses of vtkProcessObject) invoke\n"
  "StartEvent, ProgressEvent, and EndEvent as the filter processes data.\n"
  "Observers of events are added with the AddObserver() method found in\n"
  "vtkObject.  AddObserver(), besides requiring an event id or name,\n"
  "also takes an instance of vtkCommand (or a subclasses). Note that\n"
  "vtkCommand is meant to be subclassed, so that you can package the\n"
  "information necessary to support your callback.\n\n"
  "Event processing can be organized in priority lists, so it is\n"
  "possible to truncate the processing of a particular event by setting\n"
  "the AbortFlag variable. The priority is set using the AddObserver()\n"
  "method.  By default the priority is 0, events of the same priority\n"
  "are processed in last-in-first-processed order. The ordering/aborting\n"
  "of events is important for things like 3D widgets, which handle an\n"
  "event if the widget is selected (and then aborting further processing\n"
  "of that event).  Otherwise. the event is passed along for further\n"
  "processing.\n\n"
  "When an instance of vtkObject invokes an event, it also passes an\n"
  "optional void pointer to a callData. This callData is nullptr most of\n"
  "the time. The callData is not specific to a type of event but\n"
  "specific to a type of vtkObject invoking a specific event. For\n"
  "instance, vtkCommand::PickEvent is invoked by vtkProp with a nullptr\n"
  "callData but is invoked by vtkInteractorStyleImage with a pointer to\n"
  "the vtkInteractorStyleImage object itself.\n\n"
  "Here is the list of events that may be invoked with a non-nullptr\n"
  "callData.\n"
  "- vtkCommand::ProgressEvent\n"
  "- most of the objects return a pointer to a double value ranged\n"
  "  between 0.0 and 1.0\n"
  "- Infovis/vtkFixedWidthTextReader returns a pointer to a float value\n"
  "  equal to the number of lines read so far.\n"
  "- vtkCommand::ErrorEvent\n"
  "- an error message as a const char * string\n"
  "- vtkCommand::WarningEvent\n"
  "- a warning message as a const char * string\n"
  "- vtkCommand::StartAnimationCueEvent\n"
  "- a pointer to a vtkAnimationCue::AnimationCueInfo object\n"
  "- vtkCommand::EndAnimationCueEvent\n"
  "- a pointer to a vtkAnimationCue::AnimationCueInfo object\n"
  "- vtkCommand::AnimationCueTickEvent\n"
  "- a pointer to a vtkAnimationCue::AnimationCueInfo object\n"
  "- vtkCommand::PickEvent\n"
  "- Common/vtkProp returns nullptr\n"
  "- Rendering/vtkInteractorStyleImage returns a pointer to itself\n"
  "- vtkCommand::StartPickEvent\n"
  "- Rendering/vtkPropPicker returns nullptr\n"
  "- Rendering/vtkInteractorStyleImage returns a pointer to itself\n"
  "- vtkCommand::EndPickEvent\n"
  "- Rendering/vtkPropPicker returns nullptr\n"
  "- Rendering/vtkInteractorStyleImage returns a pointer to itself\n"
  "- vtkCommand::WrongTagEvent\n"
  "- Parallel/vtkSocketCommunicator returns a received tag as a char *\n"
  "- vtkCommand::SelectionChangedEvent\n"
  "- Views/vtkView returns nullptr\n"
  "- Views/vtkDataRepresentation returns a pointer to a vtkSelection\n"
  "- Rendering/vtkInteractorStyleRubberBand2D returns an array of 5\n"
  "  unsigned integers (p1x, p1y, p2x, p2y, mode), where mode is\n"
  "  vtkInteractorStyleRubberBand2D::SELECT_UNION or\n"
  "  vtkInteractorStyleRubberBand2D::SELECT_NORMAL\n"
  "- vtkCommand::AnnotationChangedEvent\n"
  "- GUISupport/Qt/vtkQtAnnotationView returns a pointer to a\n"
  "  vtkAnnotationLayers\n"
  "- vtkCommand::PlacePointEvent\n"
  "- Widgets/vtkSeedWidget returns a pointer to an int, being the\n"
  "  current handle number\n"
  "- vtkCommand::DeletePointEvent\n"
  "- Widgets/vtkSeedWidget returns a pointer to an int, being the handle\n"
  "number of the deleted point\n"
  "- vtkCommand::ResetWindowLevelEvent\n"
  "- Widgets/vtkImagePlaneWidget returns an array of 2 double values\n"
  "  (window and level)\n"
  "- Rendering/vtkInteractorStyleImage returns a pointer to itself\n"
  "- vtkCommand::StartWindowLevelEvent\n"
  "- Widgets/vtkImagePlaneWidget returns an array of 2 double values\n"
  "  (window and level)\n"
  "- Rendering/vtkInteractorStyleImage returns a pointer to itself\n"
  "- vtkCommand::EndWindowLevelEvent\n"
  "- Widgets/vtkImagePlaneWidget returns an array of 2 double values\n"
  "  (window and level)\n"
  "- Rendering/vtkInteractorStyleImage returns a pointer to itself\n"
  "- vtkCommand::WindowLevelEvent\n"
  "- Widgets/vtkImagePlaneWidget returns an array of 2 double values\n"
  "  (window and level)\n"
  "- Rendering/vtkInteractorStyleImage returns a pointer to itself\n"
  "- vtkCommand::CharEvent\n"
  "- most of the objects return nullptr\n"
  "- GUISupport/Qt/QVTKOpenGLWidget returns a QKeyEvent *\n"
  "- vtkCommand::TimerEvent\n"
  "- most of the objects return a to an int representing a timer id\n"
  "- Widgets/vtkHoverWidget returns nullptr\n"
  "- vtkCommand::CreateTimerEvent\n"
  "- Rendering/vtkGenericRenderWindowInteractor returns a to an int\n"
  "  representing a timer id\n"
  "- vtkCommand::DestroyTimerEvent\n"
  "- Rendering/vtkGenericRenderWindowInteractor returns a to an int\n"
  "  representing a timer id\n"
  "- vtkCommand::UserEvent\n"
  "- most of the objects return nullptr\n"
  "- Infovis/vtkInteractorStyleTreeMapHover returns a pointer to a\n"
  "  vtkIdType representing a pedigree id\n"
  "- vtkCommand::KeyPressEvent\n"
  "- most of the objects return nullptr\n"
  "- GUISupport/Qt/QVTKOpenGLWidget returns a QKeyEvent*\n"
  "- vtkCommand::KeyReleaseEvent\n"
  "- most of the objects return nullptr\n"
  "- GUISupport/Qt/QVTKOpenGLWidget returns a QKeyEvent*\n"
  "- vtkCommand::LeftButtonPressEvent\n"
  "- most of the objects return nullptr\n"
  "- GUISupport/Qt/QVTKOpenGLWidget returns a QMouseEvent*\n"
  "- vtkCommand::LeftButtonReleaseEvent\n"
  "- most of the objects return nullptr\n"
  "- GUISupport/Qt/QVTKOpenGLWidget returns a QMouseEvent*\n"
  "- vtkCommand::MouseMoveEvent\n"
  "- most of the objects return nullptr\n"
  "- GUISupport/Qt/QVTKOpenGLWidget returns a QMouseEvent*\n"
  "- vtkCommand::MouseWheelForwardEvent\n"
  "- most of the objects return nullptr\n"
  "- GUISupport/Qt/QVTKOpenGLWidget returns a QWheelEvent*\n"
  "- vtkCommand::MouseWheelBackwardEvent\n"
  "- most of the objects return nullptr\n"
  "- GUISupport/Qt/QVTKOpenGLWidget returns a QWheelEvent*\n"
  "- vtkCommand::RightButtonPressEvent\n"
  "- most of the objects return nullptr\n"
  "- GUISupport/Qt/QVTKOpenGLWidget returns a QMouseEvent*\n"
  "- vtkCommand::RightButtonReleaseEvent\n"
  "- most of the objects return nullptr\n"
  "- GUISupport/Qt/QVTKOpenGLWidget returns a QMouseEvent*\n"
  "- vtkCommand::MiddleButtonPressEvent\n"
  "- most of the objects return nullptr\n"
  "- GUISupport/Qt/QVTKOpenGLWidget returns a QMouseEvent*\n"
  "- vtkCommand::MiddleButtonReleaseEvent\n"
  "- most of the objects return nullptr\n"
  "- GUISupport/Qt/QVTKOpenGLWidget returns a QMouseEvent*\n"
  "- vtkCommand::CursorChangedEvent\n"
  "- most of the objects return a pointer to an int representing a shape\n"
  "- Rendering/vtkInteractorObserver returns nullptr\n"
  "- vtkCommand::ResetCameraEvent\n"
  "- Rendering/vtkRenderer returns a pointer to itself\n"
  "- vtkCommand::ResetCameraClippingRangeEvent\n"
  "- Rendering/vtkRenderer returns a pointer to itself\n"
  "- vtkCommand::ActiveCameraEvent\n"
  "- Rendering/vtkRenderer returns a pointer to the active camera\n"
  "- vtkCommand::CreateCameraEvent\n"
  "- Rendering/vtkRenderer returns a pointer to the created camera\n"
  "- vtkCommand::EnterEvent\n"
  "- most of the objects return nullptr\n"
  "- GUISupport/Qt/QVTKOpenGLWidget returns a QEvent*\n"
  "- vtkCommand::LeaveEvent\n"
  "- most of the objects return nullptr\n"
  "- GUISupport/Qt/QVTKOpenGLWidget returns a QEvent*\n"
  "- vtkCommand::RenderWindowMessageEvent\n"
  "- Rendering/vtkWin32OpenGLRenderWindow return a pointer to a UINT\n"
  "  message\n"
  "- vtkCommand::ComputeVisiblePropBoundsEvent\n"
  "- Rendering/vtkRenderer returns a pointer to itself\n"
  "- QVTKOpenGLWidget::ContextMenuEvent\n"
  "- GUISupport/Qt/QVTKOpenGLWidget returns a QContextMenuEvent*\n"
  "- QVTKOpenGLWidget::DragEnterEvent\n"
  "- GUISupport/Qt/QVTKOpenGLWidget returns a QDragEnterEvent*\n"
  "- QVTKOpenGLWidget::DragMoveEvent\n"
  "- GUISupport/Qt/QVTKOpenGLWidget returns a QDragMoveEvent*\n"
  "- QVTKOpenGLWidget::DragLeaveEvent\n"
  "- GUISupport/Qt/QVTKOpenGLWidget returns a QDragLeaveEvent*\n"
  "- QVTKOpenGLWidget::DropEvent\n"
  "- GUISupport/Qt/QVTKOpenGLWidget returns a QDropEvent*\n"
  "- vtkCommand::ViewProgressEvent\n"
  "- View/vtkView returns a ViewProgressEventCallData*\n"
  "- vtkCommand::VolumeMapperRenderProgressEvent\n"
  "- A pointer to a double value between 0.0 and 1.0\n"
  "- vtkCommand::VolumeMapperComputeGradientsProgressEvent\n"
  "- A pointer to a double value between 0.0 and 1.0\n"
  "- vtkCommand::TDxMotionEvent (TDx=3DConnexion)\n"
  "- A vtkTDxMotionEventInfo*\n"
  "- vtkCommand::TDxButtonPressEvent\n"
  "- A int* being the number of the button\n"
  "- vtkCommand::TDxButtonReleaseEvent\n"
  "- A int* being the number of the button\n"
  "- vtkCommand::UpdateShaderEvent\n"
  "- A vtkOpenGLHelper* currently being used\n"
  "- vtkCommand::FourthButtonPressEvent\n"
  "- most of the objects return nullptr\n"
  "- vtkCommand::FourthButtonReleaseEvent\n"
  "- most of the objects return nullptr\n"
  "- vtkCommand::FifthButtonPressEvent\n"
  "- most of the objects return nullptr\n"
  "- vtkCommand::FifthButtonReleaseEvent\n"
  "- most of the objects return nullptr\n"
  "- vtkCommand::ErrorEvent\n"
  "- vtkOutputWindow fires this with `char char*` for the error message\n"
  "- vtkCommand::WarningEvent\n"
  "- vtkOutputWindow fires this with `char char*` for the warning\n"
  "  message\n"
  "- vtkCommand::MessageEvent\n"
  "- vtkOutputWindow fires this with `char char*` for the message text\n"
  "- vtkCommand::TextEvent\n"
  "- vtkOutputWindow fires this with `char char*` for the text\n\n"
  "@sa\n"
  "vtkObject vtkCallbackCommand vtkOldStyleCallbackCommand\n"
  "vtkInteractorObserver vtk3DWidget\n\n";

static PyTypeObject PyvtkCommand_EventIds_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkCommand.EventIds", // tp_name
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

PyObject *PyvtkCommand_EventIds_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkCommand_EventIds_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkCommand_EventIds_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkCommand_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCommand::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCommand_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommand *op = static_cast<vtkCommand *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCommand::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCommand_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCommand *tempr = vtkCommand::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCommand_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommand *op = static_cast<vtkCommand *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCommand *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCommand::NewInstance());

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
PyvtkCommand_Execute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Execute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommand *op = static_cast<vtkCommand *>(vp);

  vtkObject *temp0 = nullptr;
  unsigned long temp1;
  void  *temp2 = nullptr;
  Py_buffer pbuf2 = VTK_PYBUFFER_INITIALIZER;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkObject") &&
      ap.GetValue(temp1) &&
      ap.GetBuffer(temp2, &pbuf2))
  {
    op->Execute(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

#if PY_VERSION_HEX >= 0x02060000
  if (pbuf2.obj != 0)
  {
    PyBuffer_Release(&pbuf2);
  }
#endif
  return result;
}


static PyObject *
PyvtkCommand_GetStringFromEventId(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetStringFromEventId");

  unsigned long temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = vtkCommand::GetStringFromEventId(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCommand_GetEventIdFromString(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetEventIdFromString");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    unsigned long tempr = vtkCommand::GetEventIdFromString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCommand_EventHasData(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "EventHasData");

  unsigned long temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = vtkCommand::EventHasData(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCommand_SetAbortFlag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAbortFlag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommand *op = static_cast<vtkCommand *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAbortFlag(temp0);
    }
    else
    {
      op->vtkCommand::SetAbortFlag(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCommand_GetAbortFlag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAbortFlag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommand *op = static_cast<vtkCommand *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAbortFlag() :
      op->vtkCommand::GetAbortFlag());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCommand_AbortFlagOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AbortFlagOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommand *op = static_cast<vtkCommand *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AbortFlagOn();
    }
    else
    {
      op->vtkCommand::AbortFlagOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCommand_AbortFlagOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AbortFlagOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommand *op = static_cast<vtkCommand *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AbortFlagOff();
    }
    else
    {
      op->vtkCommand::AbortFlagOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCommand_SetPassiveObserver(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPassiveObserver");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommand *op = static_cast<vtkCommand *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPassiveObserver(temp0);
    }
    else
    {
      op->vtkCommand::SetPassiveObserver(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCommand_GetPassiveObserver(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPassiveObserver");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommand *op = static_cast<vtkCommand *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPassiveObserver() :
      op->vtkCommand::GetPassiveObserver());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCommand_PassiveObserverOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassiveObserverOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommand *op = static_cast<vtkCommand *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassiveObserverOn();
    }
    else
    {
      op->vtkCommand::PassiveObserverOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCommand_PassiveObserverOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassiveObserverOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommand *op = static_cast<vtkCommand *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassiveObserverOff();
    }
    else
    {
      op->vtkCommand::PassiveObserverOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkCommand_Methods[] = {
  {"IsTypeOf", PyvtkCommand_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCommand_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCommand_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkCommand\nC++: static vtkCommand *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCommand_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkCommand\nC++: vtkCommand *NewInstance()\n\n"},
  {"Execute", PyvtkCommand_Execute, METH_VARARGS,
   "V.Execute(vtkObject, int, void)\nC++: virtual void Execute(vtkObject *caller,\n    unsigned long eventId, void *callData)\n\nAll derived classes of vtkCommand must implement this method.\nThis is the method that actually does the work of the callback.\nThe caller argument is the object invoking the event, the eventId\nparameter is the id of the event, and callData parameter is data\nthat can be passed into the execute method. (Note:\nvtkObject::InvokeEvent() takes two parameters: the event id (or\nname) and call data. Typically call data is nullptr, but the user\ncan package data and pass it this way. Alternatively, a derived\nclass of vtkCommand can be used to pass data.)\n"},
  {"GetStringFromEventId", PyvtkCommand_GetStringFromEventId, METH_VARARGS,
   "V.GetStringFromEventId(int) -> string\nC++: static const char *GetStringFromEventId(unsigned long event)\n\nConvenience methods for translating between event names and event\nids.\n"},
  {"GetEventIdFromString", PyvtkCommand_GetEventIdFromString, METH_VARARGS,
   "V.GetEventIdFromString(string) -> int\nC++: static unsigned long GetEventIdFromString(const char *event)\n\nConvenience methods for translating between event names and event\nids.\n"},
  {"EventHasData", PyvtkCommand_EventHasData, METH_VARARGS,
   "V.EventHasData(int) -> bool\nC++: static bool EventHasData(unsigned long event)\n\nDoes this event type contain vtkEventData\n"},
  {"SetAbortFlag", PyvtkCommand_SetAbortFlag, METH_VARARGS,
   "V.SetAbortFlag(int)\nC++: void SetAbortFlag(int f)\n\nSet/Get the abort flag. If this is set to true no further\ncommands are executed.\n"},
  {"GetAbortFlag", PyvtkCommand_GetAbortFlag, METH_VARARGS,
   "V.GetAbortFlag() -> int\nC++: int GetAbortFlag()\n\n"},
  {"AbortFlagOn", PyvtkCommand_AbortFlagOn, METH_VARARGS,
   "V.AbortFlagOn()\nC++: void AbortFlagOn()\n\n"},
  {"AbortFlagOff", PyvtkCommand_AbortFlagOff, METH_VARARGS,
   "V.AbortFlagOff()\nC++: void AbortFlagOff()\n\n"},
  {"SetPassiveObserver", PyvtkCommand_SetPassiveObserver, METH_VARARGS,
   "V.SetPassiveObserver(int)\nC++: void SetPassiveObserver(int f)\n\nSet/Get the passive observer flag. If this is set to true, this\nindicates that this command does not change the state of the\nsystem in any way. Passive observers are processed first, and are\nnot called even when another command has focus.\n"},
  {"GetPassiveObserver", PyvtkCommand_GetPassiveObserver, METH_VARARGS,
   "V.GetPassiveObserver() -> int\nC++: int GetPassiveObserver()\n\n"},
  {"PassiveObserverOn", PyvtkCommand_PassiveObserverOn, METH_VARARGS,
   "V.PassiveObserverOn()\nC++: void PassiveObserverOn()\n\n"},
  {"PassiveObserverOff", PyvtkCommand_PassiveObserverOff, METH_VARARGS,
   "V.PassiveObserverOff()\nC++: void PassiveObserverOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkCommand_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkCommand", // tp_name
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
  PyvtkCommand_Doc, // tp_doc
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

PyObject *PyvtkCommand_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkCommand_Type, PyvtkCommand_Methods,
    "vtkCommand",
 nullptr);

  PyTypeObject *pytype = &PyvtkCommand_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkObjectBase_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkCommand_EventIds_Type);
  PyvtkCommand_EventIds_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkCommand_EventIds_Type);

  o = (PyObject *)&PyvtkCommand_EventIds_Type;
  if (PyDict_SetItemString(d, "EventIds", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 121; c++)
  {
    typedef vtkCommand::EventIds cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[121] = {
        { "NoEvent", vtkCommand::NoEvent },
        { "AnyEvent", vtkCommand::AnyEvent },
        { "DeleteEvent", vtkCommand::DeleteEvent },
        { "StartEvent", vtkCommand::StartEvent },
        { "EndEvent", vtkCommand::EndEvent },
        { "RenderEvent", vtkCommand::RenderEvent },
        { "ProgressEvent", vtkCommand::ProgressEvent },
        { "PickEvent", vtkCommand::PickEvent },
        { "StartPickEvent", vtkCommand::StartPickEvent },
        { "EndPickEvent", vtkCommand::EndPickEvent },
        { "AbortCheckEvent", vtkCommand::AbortCheckEvent },
        { "ExitEvent", vtkCommand::ExitEvent },
        { "LeftButtonPressEvent", vtkCommand::LeftButtonPressEvent },
        { "LeftButtonReleaseEvent", vtkCommand::LeftButtonReleaseEvent },
        { "MiddleButtonPressEvent", vtkCommand::MiddleButtonPressEvent },
        { "MiddleButtonReleaseEvent", vtkCommand::MiddleButtonReleaseEvent },
        { "RightButtonPressEvent", vtkCommand::RightButtonPressEvent },
        { "RightButtonReleaseEvent", vtkCommand::RightButtonReleaseEvent },
        { "EnterEvent", vtkCommand::EnterEvent },
        { "LeaveEvent", vtkCommand::LeaveEvent },
        { "KeyPressEvent", vtkCommand::KeyPressEvent },
        { "KeyReleaseEvent", vtkCommand::KeyReleaseEvent },
        { "CharEvent", vtkCommand::CharEvent },
        { "ExposeEvent", vtkCommand::ExposeEvent },
        { "ConfigureEvent", vtkCommand::ConfigureEvent },
        { "TimerEvent", vtkCommand::TimerEvent },
        { "MouseMoveEvent", vtkCommand::MouseMoveEvent },
        { "MouseWheelForwardEvent", vtkCommand::MouseWheelForwardEvent },
        { "MouseWheelBackwardEvent", vtkCommand::MouseWheelBackwardEvent },
        { "ActiveCameraEvent", vtkCommand::ActiveCameraEvent },
        { "CreateCameraEvent", vtkCommand::CreateCameraEvent },
        { "ResetCameraEvent", vtkCommand::ResetCameraEvent },
        { "ResetCameraClippingRangeEvent", vtkCommand::ResetCameraClippingRangeEvent },
        { "ModifiedEvent", vtkCommand::ModifiedEvent },
        { "WindowLevelEvent", vtkCommand::WindowLevelEvent },
        { "StartWindowLevelEvent", vtkCommand::StartWindowLevelEvent },
        { "EndWindowLevelEvent", vtkCommand::EndWindowLevelEvent },
        { "ResetWindowLevelEvent", vtkCommand::ResetWindowLevelEvent },
        { "SetOutputEvent", vtkCommand::SetOutputEvent },
        { "ErrorEvent", vtkCommand::ErrorEvent },
        { "WarningEvent", vtkCommand::WarningEvent },
        { "StartInteractionEvent", vtkCommand::StartInteractionEvent },
        { "InteractionEvent", vtkCommand::InteractionEvent },
        { "EndInteractionEvent", vtkCommand::EndInteractionEvent },
        { "EnableEvent", vtkCommand::EnableEvent },
        { "DisableEvent", vtkCommand::DisableEvent },
        { "CreateTimerEvent", vtkCommand::CreateTimerEvent },
        { "DestroyTimerEvent", vtkCommand::DestroyTimerEvent },
        { "PlacePointEvent", vtkCommand::PlacePointEvent },
        { "DeletePointEvent", vtkCommand::DeletePointEvent },
        { "PlaceWidgetEvent", vtkCommand::PlaceWidgetEvent },
        { "CursorChangedEvent", vtkCommand::CursorChangedEvent },
        { "ExecuteInformationEvent", vtkCommand::ExecuteInformationEvent },
        { "RenderWindowMessageEvent", vtkCommand::RenderWindowMessageEvent },
        { "WrongTagEvent", vtkCommand::WrongTagEvent },
        { "StartAnimationCueEvent", vtkCommand::StartAnimationCueEvent },
        { "ResliceAxesChangedEvent", vtkCommand::ResliceAxesChangedEvent },
        { "AnimationCueTickEvent", vtkCommand::AnimationCueTickEvent },
        { "EndAnimationCueEvent", vtkCommand::EndAnimationCueEvent },
        { "VolumeMapperRenderEndEvent", vtkCommand::VolumeMapperRenderEndEvent },
        { "VolumeMapperRenderProgressEvent", vtkCommand::VolumeMapperRenderProgressEvent },
        { "VolumeMapperRenderStartEvent", vtkCommand::VolumeMapperRenderStartEvent },
        { "VolumeMapperComputeGradientsEndEvent", vtkCommand::VolumeMapperComputeGradientsEndEvent },
        { "VolumeMapperComputeGradientsProgressEvent", vtkCommand::VolumeMapperComputeGradientsProgressEvent },
        { "VolumeMapperComputeGradientsStartEvent", vtkCommand::VolumeMapperComputeGradientsStartEvent },
        { "WidgetModifiedEvent", vtkCommand::WidgetModifiedEvent },
        { "WidgetValueChangedEvent", vtkCommand::WidgetValueChangedEvent },
        { "WidgetActivateEvent", vtkCommand::WidgetActivateEvent },
        { "ConnectionCreatedEvent", vtkCommand::ConnectionCreatedEvent },
        { "ConnectionClosedEvent", vtkCommand::ConnectionClosedEvent },
        { "DomainModifiedEvent", vtkCommand::DomainModifiedEvent },
        { "PropertyModifiedEvent", vtkCommand::PropertyModifiedEvent },
        { "UpdateEvent", vtkCommand::UpdateEvent },
        { "RegisterEvent", vtkCommand::RegisterEvent },
        { "UnRegisterEvent", vtkCommand::UnRegisterEvent },
        { "UpdateInformationEvent", vtkCommand::UpdateInformationEvent },
        { "AnnotationChangedEvent", vtkCommand::AnnotationChangedEvent },
        { "SelectionChangedEvent", vtkCommand::SelectionChangedEvent },
        { "UpdatePropertyEvent", vtkCommand::UpdatePropertyEvent },
        { "ViewProgressEvent", vtkCommand::ViewProgressEvent },
        { "UpdateDataEvent", vtkCommand::UpdateDataEvent },
        { "CurrentChangedEvent", vtkCommand::CurrentChangedEvent },
        { "ComputeVisiblePropBoundsEvent", vtkCommand::ComputeVisiblePropBoundsEvent },
        { "TDxMotionEvent", vtkCommand::TDxMotionEvent },
        { "TDxButtonPressEvent", vtkCommand::TDxButtonPressEvent },
        { "TDxButtonReleaseEvent", vtkCommand::TDxButtonReleaseEvent },
        { "HoverEvent", vtkCommand::HoverEvent },
        { "LoadStateEvent", vtkCommand::LoadStateEvent },
        { "SaveStateEvent", vtkCommand::SaveStateEvent },
        { "StateChangedEvent", vtkCommand::StateChangedEvent },
        { "WindowMakeCurrentEvent", vtkCommand::WindowMakeCurrentEvent },
        { "WindowIsCurrentEvent", vtkCommand::WindowIsCurrentEvent },
        { "WindowFrameEvent", vtkCommand::WindowFrameEvent },
        { "HighlightEvent", vtkCommand::HighlightEvent },
        { "WindowSupportsOpenGLEvent", vtkCommand::WindowSupportsOpenGLEvent },
        { "WindowIsDirectEvent", vtkCommand::WindowIsDirectEvent },
        { "WindowStereoTypeChangedEvent", vtkCommand::WindowStereoTypeChangedEvent },
        { "WindowResizeEvent", vtkCommand::WindowResizeEvent },
        { "UncheckedPropertyModifiedEvent", vtkCommand::UncheckedPropertyModifiedEvent },
        { "UpdateShaderEvent", vtkCommand::UpdateShaderEvent },
        { "MessageEvent", vtkCommand::MessageEvent },
        { "StartPinchEvent", vtkCommand::StartPinchEvent },
        { "PinchEvent", vtkCommand::PinchEvent },
        { "EndPinchEvent", vtkCommand::EndPinchEvent },
        { "StartRotateEvent", vtkCommand::StartRotateEvent },
        { "RotateEvent", vtkCommand::RotateEvent },
        { "EndRotateEvent", vtkCommand::EndRotateEvent },
        { "StartPanEvent", vtkCommand::StartPanEvent },
        { "PanEvent", vtkCommand::PanEvent },
        { "EndPanEvent", vtkCommand::EndPanEvent },
        { "TapEvent", vtkCommand::TapEvent },
        { "LongTapEvent", vtkCommand::LongTapEvent },
        { "SwipeEvent", vtkCommand::SwipeEvent },
        { "FourthButtonPressEvent", vtkCommand::FourthButtonPressEvent },
        { "FourthButtonReleaseEvent", vtkCommand::FourthButtonReleaseEvent },
        { "FifthButtonPressEvent", vtkCommand::FifthButtonPressEvent },
        { "FifthButtonReleaseEvent", vtkCommand::FifthButtonReleaseEvent },
        { "Move3DEvent", vtkCommand::Move3DEvent },
        { "Button3DEvent", vtkCommand::Button3DEvent },
        { "TextEvent", vtkCommand::TextEvent },
        { "UserEvent", vtkCommand::UserEvent },
      };

    o = PyvtkCommand_EventIds_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCommand(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCommand_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCommand", o) != 0)
  {
    Py_DECREF(o);
  }

}

