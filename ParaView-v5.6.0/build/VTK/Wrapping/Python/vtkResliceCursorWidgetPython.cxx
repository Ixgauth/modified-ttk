// python wrapper for vtkResliceCursorWidget
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
#include "vtkResliceCursorWidget.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkResliceCursorWidget(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkResliceCursorWidget_ClassNew(); }

#ifndef DECLARED_PyvtkAbstractWidget_ClassNew
extern "C" { PyObject *PyvtkAbstractWidget_ClassNew(); }
#define DECLARED_PyvtkAbstractWidget_ClassNew
#endif

static const char *PyvtkResliceCursorWidget_Doc =
  "vtkResliceCursorWidget - represent a reslice cursor\n\n"
  "Superclass: vtkAbstractWidget\n\n"
  "This class represents a reslice cursor that can be used to perform\n"
  "interactive thick slab MPR's through data. It consists of two cross\n"
  "sectional hairs, with an optional thickness. The hairs may have a\n"
  "hole in the center. These may be translated or rotated independent of\n"
  "each other in the view. The result is used to reslice the data along\n"
  "these cross sections. This allows the user to perform multi-planar\n"
  "thin or thick reformat of the data on an image view, rather than a 3D\n"
  "view. The class internally uses vtkImageSlabReslice or\n"
  "vtkImageReslice depending on the modes in vtkResliceCursor to do its\n"
  "reslicing. The slab thickness is set interactively from the widget.\n"
  "The slab resolution (ie the number of blend points) is set as the\n"
  "minimum spacing along any dimension from the dataset.\n"
  "@sa\n"
  "vtkImageSlabReslice vtkResliceCursorLineRepresentation\n"
  "vtkResliceCursor\n\n";


static PyObject *
PyvtkResliceCursorWidget_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkResliceCursorWidget::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursorWidget_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorWidget *op = static_cast<vtkResliceCursorWidget *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkResliceCursorWidget::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursorWidget_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkResliceCursorWidget *tempr = vtkResliceCursorWidget::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursorWidget_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorWidget *op = static_cast<vtkResliceCursorWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkResliceCursorWidget *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkResliceCursorWidget::NewInstance());

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
PyvtkResliceCursorWidget_SetRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorWidget *op = static_cast<vtkResliceCursorWidget *>(vp);

  vtkResliceCursorRepresentation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkResliceCursorRepresentation"))
  {
    if (ap.IsBound())
    {
      op->SetRepresentation(temp0);
    }
    else
    {
      op->vtkResliceCursorWidget::SetRepresentation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursorWidget_GetResliceCursorRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResliceCursorRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorWidget *op = static_cast<vtkResliceCursorWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkResliceCursorRepresentation *tempr = (ap.IsBound() ?
      op->GetResliceCursorRepresentation() :
      op->vtkResliceCursorWidget::GetResliceCursorRepresentation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursorWidget_CreateDefaultRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorWidget *op = static_cast<vtkResliceCursorWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CreateDefaultRepresentation();
    }
    else
    {
      op->vtkResliceCursorWidget::CreateDefaultRepresentation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursorWidget_SetEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorWidget *op = static_cast<vtkResliceCursorWidget *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEnabled(temp0);
    }
    else
    {
      op->vtkResliceCursorWidget::SetEnabled(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursorWidget_SetManageWindowLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetManageWindowLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorWidget *op = static_cast<vtkResliceCursorWidget *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetManageWindowLevel(temp0);
    }
    else
    {
      op->vtkResliceCursorWidget::SetManageWindowLevel(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursorWidget_GetManageWindowLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetManageWindowLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorWidget *op = static_cast<vtkResliceCursorWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetManageWindowLevel() :
      op->vtkResliceCursorWidget::GetManageWindowLevel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursorWidget_ManageWindowLevelOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ManageWindowLevelOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorWidget *op = static_cast<vtkResliceCursorWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ManageWindowLevelOn();
    }
    else
    {
      op->vtkResliceCursorWidget::ManageWindowLevelOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursorWidget_ManageWindowLevelOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ManageWindowLevelOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorWidget *op = static_cast<vtkResliceCursorWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ManageWindowLevelOff();
    }
    else
    {
      op->vtkResliceCursorWidget::ManageWindowLevelOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursorWidget_ResetResliceCursor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetResliceCursor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorWidget *op = static_cast<vtkResliceCursorWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ResetResliceCursor();
    }
    else
    {
      op->vtkResliceCursorWidget::ResetResliceCursor();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkResliceCursorWidget_Methods[] = {
  {"IsTypeOf", PyvtkResliceCursorWidget_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard VTK class macros.\n"},
  {"IsA", PyvtkResliceCursorWidget_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard VTK class macros.\n"},
  {"SafeDownCast", PyvtkResliceCursorWidget_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkResliceCursorWidget\nC++: static vtkResliceCursorWidget *SafeDownCast(vtkObjectBase *o)\n\nStandard VTK class macros.\n"},
  {"NewInstance", PyvtkResliceCursorWidget_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkResliceCursorWidget\nC++: vtkResliceCursorWidget *NewInstance()\n\nStandard VTK class macros.\n"},
  {"SetRepresentation", PyvtkResliceCursorWidget_SetRepresentation, METH_VARARGS,
   "V.SetRepresentation(vtkResliceCursorRepresentation)\nC++: void SetRepresentation(vtkResliceCursorRepresentation *r)\n\nSpecify an instance of vtkWidgetRepresentation used to represent\nthis widget in the scene. Note that the representation is a\nsubclass of vtkProp so it can be added to the renderer\nindependent of the widget.\n"},
  {"GetResliceCursorRepresentation", PyvtkResliceCursorWidget_GetResliceCursorRepresentation, METH_VARARGS,
   "V.GetResliceCursorRepresentation()\n    -> vtkResliceCursorRepresentation\nC++: vtkResliceCursorRepresentation *GetResliceCursorRepresentation(\n    )\n\nReturn the representation as a vtkResliceCursorRepresentation.\n"},
  {"CreateDefaultRepresentation", PyvtkResliceCursorWidget_CreateDefaultRepresentation, METH_VARARGS,
   "V.CreateDefaultRepresentation()\nC++: void CreateDefaultRepresentation() override;\n\nCreate the default widget representation if one is not set.\n"},
  {"SetEnabled", PyvtkResliceCursorWidget_SetEnabled, METH_VARARGS,
   "V.SetEnabled(int)\nC++: void SetEnabled(int) override;\n\nMethods for activiating this widget. This implementation extends\nthe superclasses' in order to resize the widget handles due to a\nrender start event.\n"},
  {"SetManageWindowLevel", PyvtkResliceCursorWidget_SetManageWindowLevel, METH_VARARGS,
   "V.SetManageWindowLevel(int)\nC++: virtual void SetManageWindowLevel(vtkTypeBool _arg)\n\nAlso perform window level ?\n"},
  {"GetManageWindowLevel", PyvtkResliceCursorWidget_GetManageWindowLevel, METH_VARARGS,
   "V.GetManageWindowLevel() -> int\nC++: virtual vtkTypeBool GetManageWindowLevel()\n\nAlso perform window level ?\n"},
  {"ManageWindowLevelOn", PyvtkResliceCursorWidget_ManageWindowLevelOn, METH_VARARGS,
   "V.ManageWindowLevelOn()\nC++: virtual void ManageWindowLevelOn()\n\nAlso perform window level ?\n"},
  {"ManageWindowLevelOff", PyvtkResliceCursorWidget_ManageWindowLevelOff, METH_VARARGS,
   "V.ManageWindowLevelOff()\nC++: virtual void ManageWindowLevelOff()\n\nAlso perform window level ?\n"},
  {"ResetResliceCursor", PyvtkResliceCursorWidget_ResetResliceCursor, METH_VARARGS,
   "V.ResetResliceCursor()\nC++: virtual void ResetResliceCursor()\n\nReset the cursor back to its initial state\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkResliceCursorWidget_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInteractionWidgetsPython.vtkResliceCursorWidget", // tp_name
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
  PyvtkResliceCursorWidget_Doc, // tp_doc
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

static vtkObjectBase *PyvtkResliceCursorWidget_StaticNew()
{
  return vtkResliceCursorWidget::New();
}

PyObject *PyvtkResliceCursorWidget_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkResliceCursorWidget_Type, PyvtkResliceCursorWidget_Methods,
    "vtkResliceCursorWidget",
 &PyvtkResliceCursorWidget_StaticNew);

  PyTypeObject *pytype = &PyvtkResliceCursorWidget_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkAbstractWidget_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 4; c++)
  {
    static const struct { const char *name; int value; }
      constants[4] = {
        { "WindowLevelEvent", vtkResliceCursorWidget::WindowLevelEvent },
        { "ResliceAxesChangedEvent", vtkResliceCursorWidget::ResliceAxesChangedEvent },
        { "ResliceThicknessChangedEvent", vtkResliceCursorWidget::ResliceThicknessChangedEvent },
        { "ResetCursorEvent", vtkResliceCursorWidget::ResetCursorEvent },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkResliceCursorWidget(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkResliceCursorWidget_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkResliceCursorWidget", o) != 0)
  {
    Py_DECREF(o);
  }

}

