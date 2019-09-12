// python wrapper for vtkSelectionSerializer
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
#include "vtkSelectionSerializer.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSelectionSerializer(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSelectionSerializer_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkSelectionSerializer_Doc =
  "vtkSelectionSerializer - Serialize/deserialize vtkSelection to/from\nxml\n\n"
  "Superclass: vtkObject\n\n"
  "vtkSelectionSerializer is a helper class that can\n"
  "serialize/deserialize vtkSelection to/from xml. Currently, it\n"
  "supports only a subset of properties: CONTENT_TYPE, SOURCE_ID,\n"
  "PROP_ID, PROCESS_ID, ORIGINAL_SOURCE_ID\n"
  "@sa\n"
  "vtkSelection\n\n";


static PyObject *
PyvtkSelectionSerializer_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSelectionSerializer::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionSerializer_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSerializer *op = static_cast<vtkSelectionSerializer *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSelectionSerializer::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionSerializer_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSelectionSerializer *tempr = vtkSelectionSerializer::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionSerializer_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSerializer *op = static_cast<vtkSelectionSerializer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSelectionSerializer *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSelectionSerializer::NewInstance());

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
PyvtkSelectionSerializer_PrintXML(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "PrintXML");

  int temp0;
  vtkSelection *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkSelection"))
  {
    vtkSelectionSerializer::PrintXML(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionSerializer_Parse_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Parse");

  const char *temp0 = nullptr;
  vtkSelection *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkSelection"))
  {
    vtkSelectionSerializer::Parse(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSelectionSerializer_Parse_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Parse");

  const char *temp0 = nullptr;
  unsigned int temp1;
  vtkSelection *temp2 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkSelection"))
  {
    vtkSelectionSerializer::Parse(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSelectionSerializer_Parse(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 2:
      return PyvtkSelectionSerializer_Parse_s1(self, args);
    case 3:
      return PyvtkSelectionSerializer_Parse_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Parse");
  return nullptr;
}



static PyObject *
PyvtkSelectionSerializer_ORIGINAL_SOURCE_ID(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ORIGINAL_SOURCE_ID");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationIntegerKey *tempr = vtkSelectionSerializer::ORIGINAL_SOURCE_ID();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSelectionSerializer_Methods[] = {
  {"IsTypeOf", PyvtkSelectionSerializer_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSelectionSerializer_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSelectionSerializer_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSelectionSerializer\nC++: static vtkSelectionSerializer *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSelectionSerializer_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSelectionSerializer\nC++: vtkSelectionSerializer *NewInstance()\n\n"},
  {"PrintXML", PyvtkSelectionSerializer_PrintXML, METH_VARARGS,
   "V.PrintXML(int, vtkSelection)\nC++: static void PrintXML(int printData, vtkSelection *selection)\n\nSerialize the selection tree to a stream as xml. For now, only\nkeys of type vtkInformationIntegerKey are supported.\n"},
  {"Parse", PyvtkSelectionSerializer_Parse, METH_VARARGS,
   "V.Parse(string, vtkSelection)\nC++: static void Parse(const char *xml, vtkSelection *root)\nV.Parse(string, int, vtkSelection)\nC++: static void Parse(const char *xml, unsigned int length,\n    vtkSelection *root)\n\nParse an xml string to create a new selection tree. The string is\n0 terminated for the first version of this function, or we\nspecify the length of the string for the second version.\nCurrently, this supports only a subset of properties:\nCONTENT_TYPE, SOURCE_ID, PROP_ID, PROCESS_ID\n"},
  {"ORIGINAL_SOURCE_ID", PyvtkSelectionSerializer_ORIGINAL_SOURCE_ID, METH_VARARGS,
   "V.ORIGINAL_SOURCE_ID() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *ORIGINAL_SOURCE_ID()\n\nID of the dataset or algorithm that the selection belongs to.\nWhat ID means is application specific.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSelectionSerializer_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsCorePython.vtkSelectionSerializer", // tp_name
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
  PyvtkSelectionSerializer_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSelectionSerializer_StaticNew()
{
  return vtkSelectionSerializer::New();
}

PyObject *PyvtkSelectionSerializer_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSelectionSerializer_Type, PyvtkSelectionSerializer_Methods,
    "vtkSelectionSerializer",
 &PyvtkSelectionSerializer_StaticNew);

  PyTypeObject *pytype = &PyvtkSelectionSerializer_Type;

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

void PyVTKAddFile_vtkSelectionSerializer(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSelectionSerializer_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSelectionSerializer", o) != 0)
  {
    Py_DECREF(o);
  }

}

