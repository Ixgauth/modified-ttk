// python wrapper for vtkOutputWindow
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
#include "vtkOutputWindow.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkOutputWindow(PyObject *); }

static const char *PyvtkOutputWindowCleanup_Doc =
  "vtkOutputWindowCleanup - no description provided.\n\n"

  "vtkOutputWindowCleanup()\n";

static PyMethodDef PyvtkOutputWindowCleanup_Methods[] = {
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkOutputWindowCleanup_vtkOutputWindowCleanup(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkOutputWindowCleanup");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkOutputWindowCleanup *op = new vtkOutputWindowCleanup();

    result = PyVTKSpecialObject_New("vtkOutputWindowCleanup", op);
  }

  return result;
}

static PyMethodDef PyvtkOutputWindowCleanup_vtkOutputWindowCleanup_Methods[] = {
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkOutputWindowCleanup_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkOutputWindowCleanup_vtkOutputWindowCleanup(nullptr, args);
}

static void PyvtkOutputWindowCleanup_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkOutputWindowCleanup *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkOutputWindowCleanup_Hash(PyObject *self)
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

static PyTypeObject PyvtkOutputWindowCleanup_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkOutputWindowCleanup", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkOutputWindowCleanup_Delete, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkOutputWindowCleanup_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkOutputWindowCleanup_Doc, // tp_doc
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
  PyvtkOutputWindowCleanup_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkOutputWindowCleanup_TypeNew(); }

PyObject *PyvtkOutputWindowCleanup_TypeNew()
{
  PyVTKSpecialType_Add(
    &PyvtkOutputWindowCleanup_Type,
    PyvtkOutputWindowCleanup_Methods,
    PyvtkOutputWindowCleanup_vtkOutputWindowCleanup_Methods,
    nullptr);

  PyTypeObject *pytype = &PyvtkOutputWindowCleanup_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkOutputWindow_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkOutputWindow_Doc =
  "vtkOutputWindow - base class for writing debug output to a console\n\n"
  "Superclass: vtkObject\n\n"
  "This class is used to encapsulate all text output, so that it will\n"
  "work with operating systems that have a stdout and stderr, and ones\n"
  "that do not.  (i.e windows does not).  Sub-classes can be provided\n"
  "which can redirect the output to a window.\n\n";


static PyObject *
PyvtkOutputWindow_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkOutputWindow::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOutputWindow_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutputWindow *op = static_cast<vtkOutputWindow *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkOutputWindow::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOutputWindow_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkOutputWindow *tempr = vtkOutputWindow::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOutputWindow_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutputWindow *op = static_cast<vtkOutputWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkOutputWindow *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkOutputWindow::NewInstance());

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
PyvtkOutputWindow_GetInstance(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetInstance");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkOutputWindow *tempr = vtkOutputWindow::GetInstance();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOutputWindow_SetInstance(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetInstance");

  vtkOutputWindow *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkOutputWindow"))
  {
    vtkOutputWindow::SetInstance(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOutputWindow_DisplayText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisplayText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutputWindow *op = static_cast<vtkOutputWindow *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->DisplayText(temp0);
    }
    else
    {
      op->vtkOutputWindow::DisplayText(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOutputWindow_DisplayErrorText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisplayErrorText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutputWindow *op = static_cast<vtkOutputWindow *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->DisplayErrorText(temp0);
    }
    else
    {
      op->vtkOutputWindow::DisplayErrorText(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOutputWindow_DisplayWarningText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisplayWarningText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutputWindow *op = static_cast<vtkOutputWindow *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->DisplayWarningText(temp0);
    }
    else
    {
      op->vtkOutputWindow::DisplayWarningText(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOutputWindow_DisplayGenericWarningText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisplayGenericWarningText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutputWindow *op = static_cast<vtkOutputWindow *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->DisplayGenericWarningText(temp0);
    }
    else
    {
      op->vtkOutputWindow::DisplayGenericWarningText(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOutputWindow_DisplayDebugText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisplayDebugText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutputWindow *op = static_cast<vtkOutputWindow *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->DisplayDebugText(temp0);
    }
    else
    {
      op->vtkOutputWindow::DisplayDebugText(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOutputWindow_PromptUserOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PromptUserOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutputWindow *op = static_cast<vtkOutputWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PromptUserOn();
    }
    else
    {
      op->vtkOutputWindow::PromptUserOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOutputWindow_PromptUserOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PromptUserOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutputWindow *op = static_cast<vtkOutputWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PromptUserOff();
    }
    else
    {
      op->vtkOutputWindow::PromptUserOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOutputWindow_SetPromptUser(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPromptUser");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutputWindow *op = static_cast<vtkOutputWindow *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPromptUser(temp0);
    }
    else
    {
      op->vtkOutputWindow::SetPromptUser(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOutputWindow_SetUseStdErrorForAllMessages(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseStdErrorForAllMessages");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutputWindow *op = static_cast<vtkOutputWindow *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseStdErrorForAllMessages(temp0);
    }
    else
    {
      op->vtkOutputWindow::SetUseStdErrorForAllMessages(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOutputWindow_GetUseStdErrorForAllMessages(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseStdErrorForAllMessages");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutputWindow *op = static_cast<vtkOutputWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseStdErrorForAllMessages() :
      op->vtkOutputWindow::GetUseStdErrorForAllMessages());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOutputWindow_UseStdErrorForAllMessagesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseStdErrorForAllMessagesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutputWindow *op = static_cast<vtkOutputWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseStdErrorForAllMessagesOn();
    }
    else
    {
      op->vtkOutputWindow::UseStdErrorForAllMessagesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOutputWindow_UseStdErrorForAllMessagesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseStdErrorForAllMessagesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutputWindow *op = static_cast<vtkOutputWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseStdErrorForAllMessagesOff();
    }
    else
    {
      op->vtkOutputWindow::UseStdErrorForAllMessagesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkOutputWindow_Methods[] = {
  {"IsTypeOf", PyvtkOutputWindow_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkOutputWindow_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkOutputWindow_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkOutputWindow\nC++: static vtkOutputWindow *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkOutputWindow_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkOutputWindow\nC++: vtkOutputWindow *NewInstance()\n\n"},
  {"GetInstance", PyvtkOutputWindow_GetInstance, METH_VARARGS,
   "V.GetInstance() -> vtkOutputWindow\nC++: static vtkOutputWindow *GetInstance()\n\nReturn the singleton instance with no reference counting.\n"},
  {"SetInstance", PyvtkOutputWindow_SetInstance, METH_VARARGS,
   "V.SetInstance(vtkOutputWindow)\nC++: static void SetInstance(vtkOutputWindow *instance)\n\nSupply a user defined output window. Call ->Delete() on the\nsupplied instance after setting it.\n"},
  {"DisplayText", PyvtkOutputWindow_DisplayText, METH_VARARGS,
   "V.DisplayText(string)\nC++: virtual void DisplayText(const char *)\n\nDisplay the text. Four virtual methods exist, depending on the\ntype of message to display. This allows redirection or\nreformatting of the messages. The default implementation uses\nDisplayText for all. Consequently, subclasses can simply override\nDisplayText and use `GetCurrentMessageType` to determine the type\nof message that's being reported.\n"},
  {"DisplayErrorText", PyvtkOutputWindow_DisplayErrorText, METH_VARARGS,
   "V.DisplayErrorText(string)\nC++: virtual void DisplayErrorText(const char *)\n\nDisplay the text. Four virtual methods exist, depending on the\ntype of message to display. This allows redirection or\nreformatting of the messages. The default implementation uses\nDisplayText for all. Consequently, subclasses can simply override\nDisplayText and use `GetCurrentMessageType` to determine the type\nof message that's being reported.\n"},
  {"DisplayWarningText", PyvtkOutputWindow_DisplayWarningText, METH_VARARGS,
   "V.DisplayWarningText(string)\nC++: virtual void DisplayWarningText(const char *)\n\nDisplay the text. Four virtual methods exist, depending on the\ntype of message to display. This allows redirection or\nreformatting of the messages. The default implementation uses\nDisplayText for all. Consequently, subclasses can simply override\nDisplayText and use `GetCurrentMessageType` to determine the type\nof message that's being reported.\n"},
  {"DisplayGenericWarningText", PyvtkOutputWindow_DisplayGenericWarningText, METH_VARARGS,
   "V.DisplayGenericWarningText(string)\nC++: virtual void DisplayGenericWarningText(const char *)\n\nDisplay the text. Four virtual methods exist, depending on the\ntype of message to display. This allows redirection or\nreformatting of the messages. The default implementation uses\nDisplayText for all. Consequently, subclasses can simply override\nDisplayText and use `GetCurrentMessageType` to determine the type\nof message that's being reported.\n"},
  {"DisplayDebugText", PyvtkOutputWindow_DisplayDebugText, METH_VARARGS,
   "V.DisplayDebugText(string)\nC++: virtual void DisplayDebugText(const char *)\n\nDisplay the text. Four virtual methods exist, depending on the\ntype of message to display. This allows redirection or\nreformatting of the messages. The default implementation uses\nDisplayText for all. Consequently, subclasses can simply override\nDisplayText and use `GetCurrentMessageType` to determine the type\nof message that's being reported.\n"},
  {"PromptUserOn", PyvtkOutputWindow_PromptUserOn, METH_VARARGS,
   "V.PromptUserOn()\nC++: virtual void PromptUserOn()\n\nIf PromptUser is set to true then each time a line of text is\ndisplayed, the user is asked if they want to keep getting\nmessages.\n\nNote that PromptUser has not effect of messages displayed by\ndirectly calling `DisplayText`. The prompt is never shown for\nsuch messages.\n"},
  {"PromptUserOff", PyvtkOutputWindow_PromptUserOff, METH_VARARGS,
   "V.PromptUserOff()\nC++: virtual void PromptUserOff()\n\nIf PromptUser is set to true then each time a line of text is\ndisplayed, the user is asked if they want to keep getting\nmessages.\n\nNote that PromptUser has not effect of messages displayed by\ndirectly calling `DisplayText`. The prompt is never shown for\nsuch messages.\n"},
  {"SetPromptUser", PyvtkOutputWindow_SetPromptUser, METH_VARARGS,
   "V.SetPromptUser(bool)\nC++: virtual void SetPromptUser(bool _arg)\n\nIf PromptUser is set to true then each time a line of text is\ndisplayed, the user is asked if they want to keep getting\nmessages.\n\nNote that PromptUser has not effect of messages displayed by\ndirectly calling `DisplayText`. The prompt is never shown for\nsuch messages.\n"},
  {"SetUseStdErrorForAllMessages", PyvtkOutputWindow_SetUseStdErrorForAllMessages, METH_VARARGS,
   "V.SetUseStdErrorForAllMessages(bool)\nC++: virtual void SetUseStdErrorForAllMessages(bool _arg)\n\nHistorically (VTK 8.1 and earlier), when printing messages to\nterminals, vtkOutputWindow would always post messages to `cerr`.\nSetting this to true restores that incorrect behavior. When false\n(default), vtkOutputWindow uses `cerr` for debug, error and\nwarning messages, and `cout` for text messages.\n"},
  {"GetUseStdErrorForAllMessages", PyvtkOutputWindow_GetUseStdErrorForAllMessages, METH_VARARGS,
   "V.GetUseStdErrorForAllMessages() -> bool\nC++: virtual bool GetUseStdErrorForAllMessages()\n\nHistorically (VTK 8.1 and earlier), when printing messages to\nterminals, vtkOutputWindow would always post messages to `cerr`.\nSetting this to true restores that incorrect behavior. When false\n(default), vtkOutputWindow uses `cerr` for debug, error and\nwarning messages, and `cout` for text messages.\n"},
  {"UseStdErrorForAllMessagesOn", PyvtkOutputWindow_UseStdErrorForAllMessagesOn, METH_VARARGS,
   "V.UseStdErrorForAllMessagesOn()\nC++: virtual void UseStdErrorForAllMessagesOn()\n\nHistorically (VTK 8.1 and earlier), when printing messages to\nterminals, vtkOutputWindow would always post messages to `cerr`.\nSetting this to true restores that incorrect behavior. When false\n(default), vtkOutputWindow uses `cerr` for debug, error and\nwarning messages, and `cout` for text messages.\n"},
  {"UseStdErrorForAllMessagesOff", PyvtkOutputWindow_UseStdErrorForAllMessagesOff, METH_VARARGS,
   "V.UseStdErrorForAllMessagesOff()\nC++: virtual void UseStdErrorForAllMessagesOff()\n\nHistorically (VTK 8.1 and earlier), when printing messages to\nterminals, vtkOutputWindow would always post messages to `cerr`.\nSetting this to true restores that incorrect behavior. When false\n(default), vtkOutputWindow uses `cerr` for debug, error and\nwarning messages, and `cout` for text messages.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkOutputWindow_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkOutputWindow", // tp_name
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
  PyvtkOutputWindow_Doc, // tp_doc
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

static vtkObjectBase *PyvtkOutputWindow_StaticNew()
{
  return vtkOutputWindow::New();
}

PyObject *PyvtkOutputWindow_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkOutputWindow_Type, PyvtkOutputWindow_Methods,
    "vtkOutputWindow",
 &PyvtkOutputWindow_StaticNew);

  PyTypeObject *pytype = &PyvtkOutputWindow_Type;

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

void PyVTKAddFile_vtkOutputWindow(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkOutputWindowCleanup_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkOutputWindowCleanup", o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkOutputWindow_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkOutputWindow", o) != 0)
  {
    Py_DECREF(o);
  }

}

