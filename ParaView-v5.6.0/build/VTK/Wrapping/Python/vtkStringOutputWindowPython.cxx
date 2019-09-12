// python wrapper for vtkStringOutputWindow
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
#include "vtkStdString.h"
#include "vtkStringOutputWindow.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkStringOutputWindow(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkStringOutputWindow_ClassNew(); }

#ifndef DECLARED_PyvtkOutputWindow_ClassNew
extern "C" { PyObject *PyvtkOutputWindow_ClassNew(); }
#define DECLARED_PyvtkOutputWindow_ClassNew
#endif

static const char *PyvtkStringOutputWindow_Doc =
  "vtkStringOutputWindow - File Specific output window class\n\n"
  "Superclass: vtkOutputWindow\n\n"
  "Writes debug/warning/error output to a log file instead of the\n"
  "console. To use this class, instantiate it and then call\n"
  "SetInstance(this).\n\n";


static PyObject *
PyvtkStringOutputWindow_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkStringOutputWindow::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStringOutputWindow_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringOutputWindow *op = static_cast<vtkStringOutputWindow *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkStringOutputWindow::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStringOutputWindow_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkStringOutputWindow *tempr = vtkStringOutputWindow::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStringOutputWindow_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringOutputWindow *op = static_cast<vtkStringOutputWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStringOutputWindow *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkStringOutputWindow::NewInstance());

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
PyvtkStringOutputWindow_DisplayText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisplayText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringOutputWindow *op = static_cast<vtkStringOutputWindow *>(vp);

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
      op->vtkStringOutputWindow::DisplayText(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStringOutputWindow_GetOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringOutputWindow *op = static_cast<vtkStringOutputWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetOutput() :
      op->vtkStringOutputWindow::GetOutput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkStringOutputWindow_Methods[] = {
  {"IsTypeOf", PyvtkStringOutputWindow_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkStringOutputWindow_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkStringOutputWindow_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkStringOutputWindow\nC++: static vtkStringOutputWindow *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkStringOutputWindow_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkStringOutputWindow\nC++: vtkStringOutputWindow *NewInstance()\n\n"},
  {"DisplayText", PyvtkStringOutputWindow_DisplayText, METH_VARARGS,
   "V.DisplayText(string)\nC++: void DisplayText(const char *) override;\n\nPut the text into the log file. New lines are converted to\ncarriage return new lines.\n"},
  {"GetOutput", PyvtkStringOutputWindow_GetOutput, METH_VARARGS,
   "V.GetOutput() -> string\nC++: std::string GetOutput()\n\nGet the current output as a string\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkStringOutputWindow_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkStringOutputWindow", // tp_name
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
  PyvtkStringOutputWindow_Doc, // tp_doc
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

static vtkObjectBase *PyvtkStringOutputWindow_StaticNew()
{
  return vtkStringOutputWindow::New();
}

PyObject *PyvtkStringOutputWindow_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkStringOutputWindow_Type, PyvtkStringOutputWindow_Methods,
    "vtkStringOutputWindow",
 &PyvtkStringOutputWindow_StaticNew);

  PyTypeObject *pytype = &PyvtkStringOutputWindow_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkOutputWindow_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkStringOutputWindow(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkStringOutputWindow_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkStringOutputWindow", o) != 0)
  {
    Py_DECREF(o);
  }

}

