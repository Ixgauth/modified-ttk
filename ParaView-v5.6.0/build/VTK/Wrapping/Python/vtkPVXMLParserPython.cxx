// python wrapper for vtkPVXMLParser
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
#include "vtkPVXMLParser.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPVXMLParser(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPVXMLParser_ClassNew(); }

#ifndef DECLARED_PyvtkXMLParser_ClassNew
extern "C" { PyObject *PyvtkXMLParser_ClassNew(); }
#define DECLARED_PyvtkXMLParser_ClassNew
#endif

static const char *PyvtkPVXMLParser_Doc =
  "vtkPVXMLParser - This is a subclass of vtkXMLParser that constructs a\nrepresentation of parsed XML using vtkPVXMLElement.\n\n"
  "Superclass: vtkXMLParser\n\n"
;


static PyObject *
PyvtkPVXMLParser_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPVXMLParser::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVXMLParser_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXMLParser *op = static_cast<vtkPVXMLParser *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVXMLParser::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVXMLParser_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPVXMLParser *tempr = vtkPVXMLParser::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVXMLParser_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXMLParser *op = static_cast<vtkPVXMLParser *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVXMLParser *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVXMLParser::NewInstance());

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
PyvtkPVXMLParser_GetRootElement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRootElement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXMLParser *op = static_cast<vtkPVXMLParser *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVXMLElement *tempr = (ap.IsBound() ?
      op->GetRootElement() :
      op->vtkPVXMLParser::GetRootElement());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVXMLParser_GetSuppressErrorMessages(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSuppressErrorMessages");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXMLParser *op = static_cast<vtkPVXMLParser *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSuppressErrorMessages() :
      op->vtkPVXMLParser::GetSuppressErrorMessages());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVXMLParser_SetSuppressErrorMessages(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSuppressErrorMessages");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXMLParser *op = static_cast<vtkPVXMLParser *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSuppressErrorMessages(temp0);
    }
    else
    {
      op->vtkPVXMLParser::SetSuppressErrorMessages(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXMLParser_SuppressErrorMessagesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SuppressErrorMessagesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXMLParser *op = static_cast<vtkPVXMLParser *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SuppressErrorMessagesOn();
    }
    else
    {
      op->vtkPVXMLParser::SuppressErrorMessagesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXMLParser_SuppressErrorMessagesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SuppressErrorMessagesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXMLParser *op = static_cast<vtkPVXMLParser *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SuppressErrorMessagesOff();
    }
    else
    {
      op->vtkPVXMLParser::SuppressErrorMessagesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPVXMLParser_Methods[] = {
  {"IsTypeOf", PyvtkPVXMLParser_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPVXMLParser_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPVXMLParser_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPVXMLParser\nC++: static vtkPVXMLParser *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPVXMLParser_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPVXMLParser\nC++: vtkPVXMLParser *NewInstance()\n\n"},
  {"GetRootElement", PyvtkPVXMLParser_GetRootElement, METH_VARARGS,
   "V.GetRootElement() -> vtkPVXMLElement\nC++: vtkPVXMLElement *GetRootElement()\n\nGet the root element from the XML document.\n"},
  {"GetSuppressErrorMessages", PyvtkPVXMLParser_GetSuppressErrorMessages, METH_VARARGS,
   "V.GetSuppressErrorMessages() -> int\nC++: virtual int GetSuppressErrorMessages()\n\nIf on, then the Parse method will NOT report an error using\nvtkErrorMacro. Rather, it will just return false.  This feature\nis useful when simply checking to see if a file is a valid XML\nfile or there is otherwise a way to recover from the failed\nparse.  This flag is off by default.\n"},
  {"SetSuppressErrorMessages", PyvtkPVXMLParser_SetSuppressErrorMessages, METH_VARARGS,
   "V.SetSuppressErrorMessages(int)\nC++: virtual void SetSuppressErrorMessages(int _arg)\n\nIf on, then the Parse method will NOT report an error using\nvtkErrorMacro. Rather, it will just return false.  This feature\nis useful when simply checking to see if a file is a valid XML\nfile or there is otherwise a way to recover from the failed\nparse.  This flag is off by default.\n"},
  {"SuppressErrorMessagesOn", PyvtkPVXMLParser_SuppressErrorMessagesOn, METH_VARARGS,
   "V.SuppressErrorMessagesOn()\nC++: virtual void SuppressErrorMessagesOn()\n\nIf on, then the Parse method will NOT report an error using\nvtkErrorMacro. Rather, it will just return false.  This feature\nis useful when simply checking to see if a file is a valid XML\nfile or there is otherwise a way to recover from the failed\nparse.  This flag is off by default.\n"},
  {"SuppressErrorMessagesOff", PyvtkPVXMLParser_SuppressErrorMessagesOff, METH_VARARGS,
   "V.SuppressErrorMessagesOff()\nC++: virtual void SuppressErrorMessagesOff()\n\nIf on, then the Parse method will NOT report an error using\nvtkErrorMacro. Rather, it will just return false.  This feature\nis useful when simply checking to see if a file is a valid XML\nfile or there is otherwise a way to recover from the failed\nparse.  This flag is off by default.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPVXMLParser_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVCommonPython.vtkPVXMLParser", // tp_name
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
  PyvtkPVXMLParser_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPVXMLParser_StaticNew()
{
  return vtkPVXMLParser::New();
}

PyObject *PyvtkPVXMLParser_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPVXMLParser_Type, PyvtkPVXMLParser_Methods,
    "vtkPVXMLParser",
 &PyvtkPVXMLParser_StaticNew);

  PyTypeObject *pytype = &PyvtkPVXMLParser_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkXMLParser_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPVXMLParser(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPVXMLParser_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPVXMLParser", o) != 0)
  {
    Py_DECREF(o);
  }

}

