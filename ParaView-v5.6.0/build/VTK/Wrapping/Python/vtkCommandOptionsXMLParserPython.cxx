// python wrapper for vtkCommandOptionsXMLParser
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
#include "vtkCommandOptionsXMLParser.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCommandOptionsXMLParser(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkCommandOptionsXMLParser_ClassNew(); }

#ifndef DECLARED_PyvtkXMLParser_ClassNew
extern "C" { PyObject *PyvtkXMLParser_ClassNew(); }
#define DECLARED_PyvtkXMLParser_ClassNew
#endif

static const char *PyvtkCommandOptionsXMLParser_Doc =
  "vtkCommandOptionsXMLParser - ParaView options storage\n\n"
  "Superclass: vtkXMLParser\n\n"
  "An object of this class represents a storage for ParaView options\n\n"
  "These options can be retrieved during run-time, set using\n"
  "configuration file or using Command Line Arguments.\n\n";


static PyObject *
PyvtkCommandOptionsXMLParser_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCommandOptionsXMLParser::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCommandOptionsXMLParser_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommandOptionsXMLParser *op = static_cast<vtkCommandOptionsXMLParser *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCommandOptionsXMLParser::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCommandOptionsXMLParser_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCommandOptionsXMLParser *tempr = vtkCommandOptionsXMLParser::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCommandOptionsXMLParser_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommandOptionsXMLParser *op = static_cast<vtkCommandOptionsXMLParser *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCommandOptionsXMLParser *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCommandOptionsXMLParser::NewInstance());

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
PyvtkCommandOptionsXMLParser_AddBooleanArgument(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddBooleanArgument");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommandOptionsXMLParser *op = static_cast<vtkCommandOptionsXMLParser *>(vp);

  const char *temp0 = nullptr;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<int> store1(2*size1);
  int *temp1 = store1.Data();
  int *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  int temp2 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->AddBooleanArgument(temp0, temp1, temp2);
    }
    else
    {
      op->vtkCommandOptionsXMLParser::AddBooleanArgument(temp0, temp1, temp2);
    }

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCommandOptionsXMLParser_AddArgument(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddArgument");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommandOptionsXMLParser *op = static_cast<vtkCommandOptionsXMLParser *>(vp);

  const char *temp0 = nullptr;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<int> store1(2*size1);
  int *temp1 = store1.Data();
  int *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  int temp2 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->AddArgument(temp0, temp1, temp2);
    }
    else
    {
      op->vtkCommandOptionsXMLParser::AddArgument(temp0, temp1, temp2);
    }

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCommandOptionsXMLParser_SetPVOptions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPVOptions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommandOptionsXMLParser *op = static_cast<vtkCommandOptionsXMLParser *>(vp);

  vtkCommandOptions *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCommandOptions"))
  {
    if (ap.IsBound())
    {
      op->SetPVOptions(temp0);
    }
    else
    {
      op->vtkCommandOptionsXMLParser::SetPVOptions(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkCommandOptionsXMLParser_Methods[] = {
  {"IsTypeOf", PyvtkCommandOptionsXMLParser_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCommandOptionsXMLParser_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCommandOptionsXMLParser_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkCommandOptionsXMLParser\nC++: static vtkCommandOptionsXMLParser *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCommandOptionsXMLParser_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkCommandOptionsXMLParser\nC++: vtkCommandOptionsXMLParser *NewInstance()\n\n"},
  {"AddBooleanArgument", PyvtkCommandOptionsXMLParser_AddBooleanArgument, METH_VARARGS,
   "V.AddBooleanArgument(string, [int, ...], int)\nC++: void AddBooleanArgument(const char *longarg, int *var,\n    int type=0)\n\nAdd arguments to the xml parser.  These should be the long\narguments from the vtkCommandOptions class of the form\n--foo, and pass in the variable that needs to be set with the\n    value.\n"},
  {"AddArgument", PyvtkCommandOptionsXMLParser_AddArgument, METH_VARARGS,
   "V.AddArgument(string, [int, ...], int)\nC++: void AddArgument(const char *longarg, int *var, int type=0)\n\nAdd arguments to the xml parser.  These should be the long\narguments from the vtkCommandOptions class of the form\n--foo, and pass in the variable that needs to be set with the\n    value.\n"},
  {"SetPVOptions", PyvtkCommandOptionsXMLParser_SetPVOptions, METH_VARARGS,
   "V.SetPVOptions(vtkCommandOptions)\nC++: void SetPVOptions(vtkCommandOptions *o)\n\nAdd arguments to the xml parser.  These should be the long\narguments from the vtkCommandOptions class of the form\n--foo, and pass in the variable that needs to be set with the\n    value.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkCommandOptionsXMLParser_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVCommonPython.vtkCommandOptionsXMLParser", // tp_name
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
  PyvtkCommandOptionsXMLParser_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCommandOptionsXMLParser_StaticNew()
{
  return vtkCommandOptionsXMLParser::New();
}

PyObject *PyvtkCommandOptionsXMLParser_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkCommandOptionsXMLParser_Type, PyvtkCommandOptionsXMLParser_Methods,
    "vtkCommandOptionsXMLParser",
 &PyvtkCommandOptionsXMLParser_StaticNew);

  PyTypeObject *pytype = &PyvtkCommandOptionsXMLParser_Type;

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

void PyVTKAddFile_vtkCommandOptionsXMLParser(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCommandOptionsXMLParser_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCommandOptionsXMLParser", o) != 0)
  {
    Py_DECREF(o);
  }

}

