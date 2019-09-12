// python wrapper for vtkXMLFileOutputWindow
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkXMLFileOutputWindow.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkXMLFileOutputWindow(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkXMLFileOutputWindow_ClassNew(); }

#ifndef DECLARED_PyvtkFileOutputWindow_ClassNew
extern "C" { PyObject *PyvtkFileOutputWindow_ClassNew(); }
#define DECLARED_PyvtkFileOutputWindow_ClassNew
#endif

static const char *PyvtkXMLFileOutputWindow_Doc =
  "vtkXMLFileOutputWindow - XML File Specific output window class\n\n"
  "Superclass: vtkFileOutputWindow\n\n"
  "Writes debug/warning/error output to an XML file. Uses prefined XML\n"
  "tags for each text display method. The text is processed to replace\n"
  "XML markup characters.\n\n\n"
  "  DisplayText - \n\n\n"
  "  DisplayErrorText - \n\n\n"
  "  DisplayWarningText - \n\n\n"
  "  DisplayGenericWarningText - \n\n\n"
  "  DisplayDebugText - \n\n"
  "The method DisplayTag outputs the text unprocessed. To use this\n"
  "class, instantiate it and then call SetInstance(this).\n\n";


static PyObject *
PyvtkXMLFileOutputWindow_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkXMLFileOutputWindow::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLFileOutputWindow_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLFileOutputWindow *op = static_cast<vtkXMLFileOutputWindow *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkXMLFileOutputWindow::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLFileOutputWindow_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkXMLFileOutputWindow *tempr = vtkXMLFileOutputWindow::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLFileOutputWindow_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLFileOutputWindow *op = static_cast<vtkXMLFileOutputWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkXMLFileOutputWindow *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkXMLFileOutputWindow::NewInstance());

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
PyvtkXMLFileOutputWindow_DisplayText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisplayText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLFileOutputWindow *op = static_cast<vtkXMLFileOutputWindow *>(vp);

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
      op->vtkXMLFileOutputWindow::DisplayText(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLFileOutputWindow_DisplayErrorText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisplayErrorText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLFileOutputWindow *op = static_cast<vtkXMLFileOutputWindow *>(vp);

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
      op->vtkXMLFileOutputWindow::DisplayErrorText(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLFileOutputWindow_DisplayWarningText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisplayWarningText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLFileOutputWindow *op = static_cast<vtkXMLFileOutputWindow *>(vp);

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
      op->vtkXMLFileOutputWindow::DisplayWarningText(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLFileOutputWindow_DisplayGenericWarningText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisplayGenericWarningText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLFileOutputWindow *op = static_cast<vtkXMLFileOutputWindow *>(vp);

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
      op->vtkXMLFileOutputWindow::DisplayGenericWarningText(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLFileOutputWindow_DisplayDebugText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisplayDebugText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLFileOutputWindow *op = static_cast<vtkXMLFileOutputWindow *>(vp);

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
      op->vtkXMLFileOutputWindow::DisplayDebugText(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLFileOutputWindow_DisplayTag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisplayTag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLFileOutputWindow *op = static_cast<vtkXMLFileOutputWindow *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->DisplayTag(temp0);
    }
    else
    {
      op->vtkXMLFileOutputWindow::DisplayTag(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkXMLFileOutputWindow_Methods[] = {
  {"IsTypeOf", PyvtkXMLFileOutputWindow_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkXMLFileOutputWindow_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkXMLFileOutputWindow_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkXMLFileOutputWindow\nC++: static vtkXMLFileOutputWindow *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkXMLFileOutputWindow_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkXMLFileOutputWindow\nC++: vtkXMLFileOutputWindow *NewInstance()\n\n"},
  {"DisplayText", PyvtkXMLFileOutputWindow_DisplayText, METH_VARARGS,
   "V.DisplayText(string)\nC++: void DisplayText(const char *) override;\n\nPut the text into the log file. The text is processed to replace\n&, <, > with &amp, &lt, and &gt. Each display method outputs a\ndifferent XML tag.\n"},
  {"DisplayErrorText", PyvtkXMLFileOutputWindow_DisplayErrorText, METH_VARARGS,
   "V.DisplayErrorText(string)\nC++: void DisplayErrorText(const char *) override;\n\nPut the text into the log file. The text is processed to replace\n&, <, > with &amp, &lt, and &gt. Each display method outputs a\ndifferent XML tag.\n"},
  {"DisplayWarningText", PyvtkXMLFileOutputWindow_DisplayWarningText, METH_VARARGS,
   "V.DisplayWarningText(string)\nC++: void DisplayWarningText(const char *) override;\n\nPut the text into the log file. The text is processed to replace\n&, <, > with &amp, &lt, and &gt. Each display method outputs a\ndifferent XML tag.\n"},
  {"DisplayGenericWarningText", PyvtkXMLFileOutputWindow_DisplayGenericWarningText, METH_VARARGS,
   "V.DisplayGenericWarningText(string)\nC++: void DisplayGenericWarningText(const char *) override;\n\nPut the text into the log file. The text is processed to replace\n&, <, > with &amp, &lt, and &gt. Each display method outputs a\ndifferent XML tag.\n"},
  {"DisplayDebugText", PyvtkXMLFileOutputWindow_DisplayDebugText, METH_VARARGS,
   "V.DisplayDebugText(string)\nC++: void DisplayDebugText(const char *) override;\n\nPut the text into the log file. The text is processed to replace\n&, <, > with &amp, &lt, and &gt. Each display method outputs a\ndifferent XML tag.\n"},
  {"DisplayTag", PyvtkXMLFileOutputWindow_DisplayTag, METH_VARARGS,
   "V.DisplayTag(string)\nC++: virtual void DisplayTag(const char *)\n\nPut the text into the log file without processing it.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkXMLFileOutputWindow_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkXMLFileOutputWindow", // tp_name
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
  PyvtkXMLFileOutputWindow_Doc, // tp_doc
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

static vtkObjectBase *PyvtkXMLFileOutputWindow_StaticNew()
{
  return vtkXMLFileOutputWindow::New();
}

PyObject *PyvtkXMLFileOutputWindow_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkXMLFileOutputWindow_Type, PyvtkXMLFileOutputWindow_Methods,
    "vtkXMLFileOutputWindow",
 &PyvtkXMLFileOutputWindow_StaticNew);

  PyTypeObject *pytype = &PyvtkXMLFileOutputWindow_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkFileOutputWindow_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkXMLFileOutputWindow(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkXMLFileOutputWindow_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkXMLFileOutputWindow", o) != 0)
  {
    Py_DECREF(o);
  }

}

