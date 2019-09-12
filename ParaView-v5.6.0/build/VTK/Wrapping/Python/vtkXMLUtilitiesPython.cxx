// python wrapper for vtkXMLUtilities
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkXMLDataElement.h"
#include "vtkXMLUtilities.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkXMLUtilities(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkXMLUtilities_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkXMLUtilities_Doc =
  "vtkXMLUtilities - XML utilities.\n\n"
  "Superclass: vtkObject\n\n"
  "vtkXMLUtilities provides XML-related convenience functions.\n"
  "@sa\n"
  "vtkXMLDataElement\n\n";


static PyObject *
PyvtkXMLUtilities_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkXMLUtilities::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLUtilities_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLUtilities *op = static_cast<vtkXMLUtilities *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkXMLUtilities::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLUtilities_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkXMLUtilities *tempr = vtkXMLUtilities::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLUtilities_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLUtilities *op = static_cast<vtkXMLUtilities *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkXMLUtilities *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkXMLUtilities::NewInstance());

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
PyvtkXMLUtilities_ReadElementFromString(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ReadElementFromString");

  const char *temp0 = nullptr;
  int temp1 = VTK_ENCODING_NONE;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    vtkXMLDataElement *tempr = vtkXMLUtilities::ReadElementFromString(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLUtilities_ReadElementFromFile(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ReadElementFromFile");

  const char *temp0 = nullptr;
  int temp1 = VTK_ENCODING_NONE;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    vtkXMLDataElement *tempr = vtkXMLUtilities::ReadElementFromFile(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLUtilities_FactorElements(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "FactorElements");

  vtkXMLDataElement *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkXMLDataElement"))
  {
    vtkXMLUtilities::FactorElements(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLUtilities_UnFactorElements(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "UnFactorElements");

  vtkXMLDataElement *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkXMLDataElement"))
  {
    vtkXMLUtilities::UnFactorElements(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkXMLUtilities_Methods[] = {
  {"IsTypeOf", PyvtkXMLUtilities_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkXMLUtilities_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkXMLUtilities_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkXMLUtilities\nC++: static vtkXMLUtilities *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkXMLUtilities_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkXMLUtilities\nC++: vtkXMLUtilities *NewInstance()\n\n"},
  {"ReadElementFromString", PyvtkXMLUtilities_ReadElementFromString, METH_VARARGS,
   "V.ReadElementFromString(string, int) -> vtkXMLDataElement\nC++: static vtkXMLDataElement *ReadElementFromString(\n    const char *str, int encoding=VTK_ENCODING_NONE)\n\nRead a vtkXMLDataElement from a stream, string or file. The\n'encoding' parameter will be used to set the internal encoding of\nthe attributes of the data elements created by those functions\n(conversion from the XML stream encoding to that new encoding\nwill be performed automatically). If set to VTK_ENCODING_NONE,\nthe encoding won't be changed and will default to the default\nvtkXMLDataElement encoding. Return the root element on success,\nnullptr otherwise. Note that you have to call Delete() on the\nelement returned by that function to ensure it is freed properly.\n"},
  {"ReadElementFromFile", PyvtkXMLUtilities_ReadElementFromFile, METH_VARARGS,
   "V.ReadElementFromFile(string, int) -> vtkXMLDataElement\nC++: static vtkXMLDataElement *ReadElementFromFile(\n    const char *filename, int encoding=VTK_ENCODING_NONE)\n\nRead a vtkXMLDataElement from a stream, string or file. The\n'encoding' parameter will be used to set the internal encoding of\nthe attributes of the data elements created by those functions\n(conversion from the XML stream encoding to that new encoding\nwill be performed automatically). If set to VTK_ENCODING_NONE,\nthe encoding won't be changed and will default to the default\nvtkXMLDataElement encoding. Return the root element on success,\nnullptr otherwise. Note that you have to call Delete() on the\nelement returned by that function to ensure it is freed properly.\n"},
  {"FactorElements", PyvtkXMLUtilities_FactorElements, METH_VARARGS,
   "V.FactorElements(vtkXMLDataElement)\nC++: static void FactorElements(vtkXMLDataElement *tree)\n\nFactor and unfactor a tree. This operation looks for duplicate\nelements in the tree, and replace them with references to a pool\nof elements. Unfactoring a non-factored element is harmless.\n"},
  {"UnFactorElements", PyvtkXMLUtilities_UnFactorElements, METH_VARARGS,
   "V.UnFactorElements(vtkXMLDataElement)\nC++: static void UnFactorElements(vtkXMLDataElement *tree)\n\nFactor and unfactor a tree. This operation looks for duplicate\nelements in the tree, and replace them with references to a pool\nof elements. Unfactoring a non-factored element is harmless.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkXMLUtilities_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOXMLParserPython.vtkXMLUtilities", // tp_name
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
  PyvtkXMLUtilities_Doc, // tp_doc
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

static vtkObjectBase *PyvtkXMLUtilities_StaticNew()
{
  return vtkXMLUtilities::New();
}

PyObject *PyvtkXMLUtilities_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkXMLUtilities_Type, PyvtkXMLUtilities_Methods,
    "vtkXMLUtilities",
 &PyvtkXMLUtilities_StaticNew);

  PyTypeObject *pytype = &PyvtkXMLUtilities_Type;

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

void PyVTKAddFile_vtkXMLUtilities(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkXMLUtilities_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkXMLUtilities", o) != 0)
  {
    Py_DECREF(o);
  }

}

