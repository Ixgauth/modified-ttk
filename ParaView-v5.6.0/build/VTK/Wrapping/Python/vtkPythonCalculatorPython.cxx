// python wrapper for vtkPythonCalculator
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
#include "vtkPythonCalculator.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPythonCalculator(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPythonCalculator_ClassNew(); }

#ifndef DECLARED_PyvtkProgrammableFilter_ClassNew
extern "C" { PyObject *PyvtkProgrammableFilter_ClassNew(); }
#define DECLARED_PyvtkProgrammableFilter_ClassNew
#endif

static const char *PyvtkPythonCalculator_Doc =
  "vtkPythonCalculator - Evaluates a Python expression\nvtkPythonCalculator uses Python to calculate an expression.\n\n"
  "Superclass: vtkProgrammableFilter\n\n"
  "This filter depends heavily on the numpy and paraview.vtk modules. To\n"
  "use the parallel functions, mpi4py is also necessary. The expression\n"
  "is evaluated and the resulting scalar value or numpy array is added\n"
  "to the output as an array. See numpy and paraview.vtk documentation\n"
  "for the list of available functions.\n\n"
  "This filter tries to make it easy for the user to write expressions\n"
  "by defining certain variables. The filter tries to assign each array\n"
  "to a variable of the same name. If the name of the array is not a\n"
  "valid Python variable, it has to be accessed through a dictionary\n"
  "called arrays (i.e. arrays['array_name']). The points can be accessed\n"
  "using the points variable.\n\n";


static PyObject *
PyvtkPythonCalculator_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPythonCalculator::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPythonCalculator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonCalculator *op = static_cast<vtkPythonCalculator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPythonCalculator::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPythonCalculator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPythonCalculator *tempr = vtkPythonCalculator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPythonCalculator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonCalculator *op = static_cast<vtkPythonCalculator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPythonCalculator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPythonCalculator::NewInstance());

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
PyvtkPythonCalculator_SetArrayAssociation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArrayAssociation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonCalculator *op = static_cast<vtkPythonCalculator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetArrayAssociation(temp0);
    }
    else
    {
      op->vtkPythonCalculator::SetArrayAssociation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPythonCalculator_GetArrayAssociation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayAssociation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonCalculator *op = static_cast<vtkPythonCalculator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetArrayAssociation() :
      op->vtkPythonCalculator::GetArrayAssociation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPythonCalculator_SetExpression(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExpression");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonCalculator *op = static_cast<vtkPythonCalculator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetExpression(temp0);
    }
    else
    {
      op->vtkPythonCalculator::SetExpression(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPythonCalculator_GetExpression(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExpression");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonCalculator *op = static_cast<vtkPythonCalculator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetExpression() :
      op->vtkPythonCalculator::GetExpression());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPythonCalculator_SetArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonCalculator *op = static_cast<vtkPythonCalculator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetArrayName(temp0);
    }
    else
    {
      op->vtkPythonCalculator::SetArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPythonCalculator_GetArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonCalculator *op = static_cast<vtkPythonCalculator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetArrayName() :
      op->vtkPythonCalculator::GetArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPythonCalculator_ExecuteScript(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ExecuteScript");

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = VTK_PYBUFFER_INITIALIZER;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetBuffer(temp0, &pbuf0))
  {
    vtkPythonCalculator::ExecuteScript(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
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

static PyMethodDef PyvtkPythonCalculator_Methods[] = {
  {"IsTypeOf", PyvtkPythonCalculator_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPythonCalculator_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPythonCalculator_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPythonCalculator\nC++: static vtkPythonCalculator *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPythonCalculator_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPythonCalculator\nC++: vtkPythonCalculator *NewInstance()\n\n"},
  {"SetArrayAssociation", PyvtkPythonCalculator_SetArrayAssociation, METH_VARARGS,
   "V.SetArrayAssociation(int)\nC++: virtual void SetArrayAssociation(int _arg)\n\nWhich field data to get the arrays from. See\nvtkDataObject::FieldAssociations for choices. The default is\nFIELD_ASSOCIATION_POINTS.\n"},
  {"GetArrayAssociation", PyvtkPythonCalculator_GetArrayAssociation, METH_VARARGS,
   "V.GetArrayAssociation() -> int\nC++: virtual int GetArrayAssociation()\n\nWhich field data to get the arrays from. See\nvtkDataObject::FieldAssociations for choices. The default is\nFIELD_ASSOCIATION_POINTS.\n"},
  {"SetExpression", PyvtkPythonCalculator_SetExpression, METH_VARARGS,
   "V.SetExpression(string)\nC++: virtual void SetExpression(const char *_arg)\n\nSet the text of the python expression to execute. This expression\nmust return a scalar value (which is converted to an array) or a\nnumpy array.\n"},
  {"GetExpression", PyvtkPythonCalculator_GetExpression, METH_VARARGS,
   "V.GetExpression() -> string\nC++: virtual char *GetExpression()\n\nSet the text of the python expression to execute. This expression\nmust return a scalar value (which is converted to an array) or a\nnumpy array.\n"},
  {"SetArrayName", PyvtkPythonCalculator_SetArrayName, METH_VARARGS,
   "V.SetArrayName(string)\nC++: virtual void SetArrayName(const char *_arg)\n\nSet the name of the output array.\n"},
  {"GetArrayName", PyvtkPythonCalculator_GetArrayName, METH_VARARGS,
   "V.GetArrayName() -> string\nC++: virtual char *GetArrayName()\n\nSet the name of the output array.\n"},
  {"ExecuteScript", PyvtkPythonCalculator_ExecuteScript, METH_VARARGS,
   "V.ExecuteScript(void)\nC++: static void ExecuteScript(void *)\n\nFor internal use only.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPythonCalculator_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVClientServerCoreDefaultPython.vtkPythonCalculator", // tp_name
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
  PyvtkPythonCalculator_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPythonCalculator_StaticNew()
{
  return vtkPythonCalculator::New();
}

PyObject *PyvtkPythonCalculator_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPythonCalculator_Type, PyvtkPythonCalculator_Methods,
    "vtkPythonCalculator",
 &PyvtkPythonCalculator_StaticNew);

  PyTypeObject *pytype = &PyvtkPythonCalculator_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkProgrammableFilter_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPythonCalculator(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPythonCalculator_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPythonCalculator", o) != 0)
  {
    Py_DECREF(o);
  }

}

