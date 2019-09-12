// python wrapper for vtkResourceFileLocator
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
#include "vtkResourceFileLocator.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkResourceFileLocator(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkResourceFileLocator_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkResourceFileLocator_Doc =
  "vtkResourceFileLocator - utility to locate resource files.\n\n"
  "Superclass: vtkObject\n\n"
  "VTK based application often need to locate resource files, such\n"
  "configuration files, Python modules, etc. vtkResourceFileLocator\n"
  "provides methods that can be used to locate such resource files at\n"
  "runtime.\n\n"
  "Using `Locate`, one can locate files relative to an anchor directory\n"
  "such as the executable directory, or the library directory.\n\n"
  "`GetLibraryPathForSymbolUnix` and `GetLibraryPathForSymbolWin32`\n"
  "methods can be used to locate the library that provides a particular\n"
  "symbol. For example, this is used by `vtkPythonInterpreter` to ensure\n"
  "that the `vtk` Python package is located relative the VTK libraries,\n"
  "irrespective of the application location.\n\n";


static PyObject *
PyvtkResourceFileLocator_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkResourceFileLocator::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResourceFileLocator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResourceFileLocator *op = static_cast<vtkResourceFileLocator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkResourceFileLocator::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResourceFileLocator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkResourceFileLocator *tempr = vtkResourceFileLocator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResourceFileLocator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResourceFileLocator *op = static_cast<vtkResourceFileLocator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkResourceFileLocator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkResourceFileLocator::NewInstance());

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
PyvtkResourceFileLocator_SetPrintDebugInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPrintDebugInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResourceFileLocator *op = static_cast<vtkResourceFileLocator *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPrintDebugInformation(temp0);
    }
    else
    {
      op->vtkResourceFileLocator::SetPrintDebugInformation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResourceFileLocator_GetPrintDebugInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPrintDebugInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResourceFileLocator *op = static_cast<vtkResourceFileLocator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetPrintDebugInformation() :
      op->vtkResourceFileLocator::GetPrintDebugInformation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResourceFileLocator_PrintDebugInformationOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PrintDebugInformationOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResourceFileLocator *op = static_cast<vtkResourceFileLocator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PrintDebugInformationOn();
    }
    else
    {
      op->vtkResourceFileLocator::PrintDebugInformationOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResourceFileLocator_PrintDebugInformationOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PrintDebugInformationOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResourceFileLocator *op = static_cast<vtkResourceFileLocator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PrintDebugInformationOff();
    }
    else
    {
      op->vtkResourceFileLocator::PrintDebugInformationOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResourceFileLocator_Locate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Locate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResourceFileLocator *op = static_cast<vtkResourceFileLocator *>(vp);

  std::string temp0;
  std::string temp1;
  std::string temp2 = std::string();
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    std::string tempr = (ap.IsBound() ?
      op->Locate(temp0, temp1, temp2) :
      op->vtkResourceFileLocator::Locate(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResourceFileLocator_GetLibraryPathForSymbolUnix(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetLibraryPathForSymbolUnix");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    std::string tempr = vtkResourceFileLocator::GetLibraryPathForSymbolUnix(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResourceFileLocator_GetLibraryPathForSymbolWin32(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetLibraryPathForSymbolWin32");

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = VTK_PYBUFFER_INITIALIZER;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetBuffer(temp0, &pbuf0))
  {
    std::string tempr = vtkResourceFileLocator::GetLibraryPathForSymbolWin32(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

#if PY_VERSION_HEX >= 0x02060000
  if (pbuf0.obj != 0)
  {
    PyBuffer_Release(&pbuf0);
  }
#endif
  return result;
}

static PyMethodDef PyvtkResourceFileLocator_Methods[] = {
  {"IsTypeOf", PyvtkResourceFileLocator_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkResourceFileLocator_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkResourceFileLocator_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkResourceFileLocator\nC++: static vtkResourceFileLocator *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkResourceFileLocator_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkResourceFileLocator\nC++: vtkResourceFileLocator *NewInstance()\n\n"},
  {"SetPrintDebugInformation", PyvtkResourceFileLocator_SetPrintDebugInformation, METH_VARARGS,
   "V.SetPrintDebugInformation(bool)\nC++: virtual void SetPrintDebugInformation(bool _arg)\n\nEnable/disable printing of testing of various path during\n`Locate` to `stdout`.\n"},
  {"GetPrintDebugInformation", PyvtkResourceFileLocator_GetPrintDebugInformation, METH_VARARGS,
   "V.GetPrintDebugInformation() -> bool\nC++: virtual bool GetPrintDebugInformation()\n\nEnable/disable printing of testing of various path during\n`Locate` to `stdout`.\n"},
  {"PrintDebugInformationOn", PyvtkResourceFileLocator_PrintDebugInformationOn, METH_VARARGS,
   "V.PrintDebugInformationOn()\nC++: virtual void PrintDebugInformationOn()\n\nEnable/disable printing of testing of various path during\n`Locate` to `stdout`.\n"},
  {"PrintDebugInformationOff", PyvtkResourceFileLocator_PrintDebugInformationOff, METH_VARARGS,
   "V.PrintDebugInformationOff()\nC++: virtual void PrintDebugInformationOff()\n\nEnable/disable printing of testing of various path during\n`Locate` to `stdout`.\n"},
  {"Locate", PyvtkResourceFileLocator_Locate, METH_VARARGS,
   "V.Locate(string, string, string) -> string\nC++: virtual std::string Locate(const std::string &anchor,\n    const std::string &landmark,\n    const std::string &defaultDir=std::string())\n\nGiven a starting anchor directory, look for the landmark file\nrelative to the anchor. If found return the anchor. If not found,\ngo one directory up and then look the landmark file again.\n"},
  {"GetLibraryPathForSymbolUnix", PyvtkResourceFileLocator_GetLibraryPathForSymbolUnix, METH_VARARGS,
   "V.GetLibraryPathForSymbolUnix(string) -> string\nC++: static std::string GetLibraryPathForSymbolUnix(\n    const char *symbolname)\n\nReturns the name of the library providing the symbol. For\nexample, if you want to locate where the VTK libraries located\ncall `GetLibraryPathForSymbolUnix(\"GetVTKVersion\")` on Unixes and\n`GetLibraryPathForSymbolWin32(GetVTKVersion)` on Windows.\nAlternatively, you can simply use the\n`vtkGetLibraryPathForSymbol(GetVTKVersion)` macro that makes the\nappropriate call as per the current platform.\n"},
  {"GetLibraryPathForSymbolWin32", PyvtkResourceFileLocator_GetLibraryPathForSymbolWin32, METH_VARARGS,
   "V.GetLibraryPathForSymbolWin32(void) -> string\nC++: static std::string GetLibraryPathForSymbolWin32(\n    const void *fptr)\n\nReturns the name of the library providing the symbol. For\nexample, if you want to locate where the VTK libraries located\ncall `GetLibraryPathForSymbolUnix(\"GetVTKVersion\")` on Unixes and\n`GetLibraryPathForSymbolWin32(GetVTKVersion)` on Windows.\nAlternatively, you can simply use the\n`vtkGetLibraryPathForSymbol(GetVTKVersion)` macro that makes the\nappropriate call as per the current platform.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkResourceFileLocator_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonMiscPython.vtkResourceFileLocator", // tp_name
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
  PyvtkResourceFileLocator_Doc, // tp_doc
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

static vtkObjectBase *PyvtkResourceFileLocator_StaticNew()
{
  return vtkResourceFileLocator::New();
}

PyObject *PyvtkResourceFileLocator_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkResourceFileLocator_Type, PyvtkResourceFileLocator_Methods,
    "vtkResourceFileLocator",
 &PyvtkResourceFileLocator_StaticNew);

  PyTypeObject *pytype = &PyvtkResourceFileLocator_Type;

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

void PyVTKAddFile_vtkResourceFileLocator(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkResourceFileLocator_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkResourceFileLocator", o) != 0)
  {
    Py_DECREF(o);
  }

}

