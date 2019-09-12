// python wrapper for vtkHyperTreeGridAlgorithm
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
#include "vtkInformationVector.h"
#include "vtkHyperTreeGridAlgorithm.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkHyperTreeGridAlgorithm(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkHyperTreeGridAlgorithm_ClassNew(); }

#ifndef DECLARED_PyvtkAlgorithm_ClassNew
extern "C" { PyObject *PyvtkAlgorithm_ClassNew(); }
#define DECLARED_PyvtkAlgorithm_ClassNew
#endif

static const char *PyvtkHyperTreeGridAlgorithm_Doc =
  "vtkHyperTreeGridAlgorithm - Superclass for algorithms that produce a\nhyper tree grid as output\n\n"
  "Superclass: vtkAlgorithm\n\n"
  "vtkHyperTreeGridAlgorithm is a base class for hyper tree grid\n"
  "algorithms. This class defaults with one input port and one output\n"
  "port; it must be modified by the concrete derived class if a\n"
  "different behavior is sought. In addition, this class provides a\n"
  "FillOutputPortInfo() method that, by default, specifies that the\n"
  "output is a data object; this must also be modified in concrete\n"
  "subclasses if needed.\n\n"
  "@par Thanks: This test was written by Philippe Pebay and Charles Law,\n"
  "Kitware 2012 This test was rewritten by Philippe Pebay, 2016 This\n"
  "work was supported by Commissariat a l'Energie Atomique (CEA/DIF)\n\n";


static PyObject *
PyvtkHyperTreeGridAlgorithm_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkHyperTreeGridAlgorithm::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridAlgorithm_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridAlgorithm *op = static_cast<vtkHyperTreeGridAlgorithm *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkHyperTreeGridAlgorithm::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridAlgorithm_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkHyperTreeGridAlgorithm *tempr = vtkHyperTreeGridAlgorithm::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridAlgorithm_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridAlgorithm *op = static_cast<vtkHyperTreeGridAlgorithm *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkHyperTreeGridAlgorithm *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkHyperTreeGridAlgorithm::NewInstance());

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
PyvtkHyperTreeGridAlgorithm_GetOutput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridAlgorithm *op = static_cast<vtkHyperTreeGridAlgorithm *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataObject *tempr = (ap.IsBound() ?
      op->GetOutput() :
      op->vtkHyperTreeGridAlgorithm::GetOutput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkHyperTreeGridAlgorithm_GetOutput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridAlgorithm *op = static_cast<vtkHyperTreeGridAlgorithm *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkDataObject *tempr = (ap.IsBound() ?
      op->GetOutput(temp0) :
      op->vtkHyperTreeGridAlgorithm::GetOutput(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkHyperTreeGridAlgorithm_GetOutput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkHyperTreeGridAlgorithm_GetOutput_s1(self, args);
    case 1:
      return PyvtkHyperTreeGridAlgorithm_GetOutput_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetOutput");
  return nullptr;
}



static PyObject *
PyvtkHyperTreeGridAlgorithm_SetOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridAlgorithm *op = static_cast<vtkHyperTreeGridAlgorithm *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->SetOutput(temp0);
    }
    else
    {
      op->vtkHyperTreeGridAlgorithm::SetOutput(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridAlgorithm_GetHyperTreeGridOutput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHyperTreeGridOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridAlgorithm *op = static_cast<vtkHyperTreeGridAlgorithm *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkHyperTreeGrid *tempr = (ap.IsBound() ?
      op->GetHyperTreeGridOutput() :
      op->vtkHyperTreeGridAlgorithm::GetHyperTreeGridOutput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkHyperTreeGridAlgorithm_GetHyperTreeGridOutput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHyperTreeGridOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridAlgorithm *op = static_cast<vtkHyperTreeGridAlgorithm *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkHyperTreeGrid *tempr = (ap.IsBound() ?
      op->GetHyperTreeGridOutput(temp0) :
      op->vtkHyperTreeGridAlgorithm::GetHyperTreeGridOutput(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkHyperTreeGridAlgorithm_GetHyperTreeGridOutput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkHyperTreeGridAlgorithm_GetHyperTreeGridOutput_s1(self, args);
    case 1:
      return PyvtkHyperTreeGridAlgorithm_GetHyperTreeGridOutput_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetHyperTreeGridOutput");
  return nullptr;
}



static PyObject *
PyvtkHyperTreeGridAlgorithm_GetPolyDataOutput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolyDataOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridAlgorithm *op = static_cast<vtkHyperTreeGridAlgorithm *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetPolyDataOutput() :
      op->vtkHyperTreeGridAlgorithm::GetPolyDataOutput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkHyperTreeGridAlgorithm_GetPolyDataOutput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolyDataOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridAlgorithm *op = static_cast<vtkHyperTreeGridAlgorithm *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetPolyDataOutput(temp0) :
      op->vtkHyperTreeGridAlgorithm::GetPolyDataOutput(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkHyperTreeGridAlgorithm_GetPolyDataOutput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkHyperTreeGridAlgorithm_GetPolyDataOutput_s1(self, args);
    case 1:
      return PyvtkHyperTreeGridAlgorithm_GetPolyDataOutput_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetPolyDataOutput");
  return nullptr;
}



static PyObject *
PyvtkHyperTreeGridAlgorithm_GetUnstructuredGridOutput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUnstructuredGridOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridAlgorithm *op = static_cast<vtkHyperTreeGridAlgorithm *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkUnstructuredGrid *tempr = (ap.IsBound() ?
      op->GetUnstructuredGridOutput() :
      op->vtkHyperTreeGridAlgorithm::GetUnstructuredGridOutput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkHyperTreeGridAlgorithm_GetUnstructuredGridOutput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUnstructuredGridOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridAlgorithm *op = static_cast<vtkHyperTreeGridAlgorithm *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkUnstructuredGrid *tempr = (ap.IsBound() ?
      op->GetUnstructuredGridOutput(temp0) :
      op->vtkHyperTreeGridAlgorithm::GetUnstructuredGridOutput(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkHyperTreeGridAlgorithm_GetUnstructuredGridOutput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkHyperTreeGridAlgorithm_GetUnstructuredGridOutput_s1(self, args);
    case 1:
      return PyvtkHyperTreeGridAlgorithm_GetUnstructuredGridOutput_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetUnstructuredGridOutput");
  return nullptr;
}



static PyObject *
PyvtkHyperTreeGridAlgorithm_SetInputData_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridAlgorithm *op = static_cast<vtkHyperTreeGridAlgorithm *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->SetInputData(temp0);
    }
    else
    {
      op->vtkHyperTreeGridAlgorithm::SetInputData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkHyperTreeGridAlgorithm_SetInputData_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridAlgorithm *op = static_cast<vtkHyperTreeGridAlgorithm *>(vp);

  int temp0;
  vtkDataObject *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->SetInputData(temp0, temp1);
    }
    else
    {
      op->vtkHyperTreeGridAlgorithm::SetInputData(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkHyperTreeGridAlgorithm_SetInputData(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkHyperTreeGridAlgorithm_SetInputData_s1(self, args);
    case 2:
      return PyvtkHyperTreeGridAlgorithm_SetInputData_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetInputData");
  return nullptr;
}



static PyObject *
PyvtkHyperTreeGridAlgorithm_AddInputData_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridAlgorithm *op = static_cast<vtkHyperTreeGridAlgorithm *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->AddInputData(temp0);
    }
    else
    {
      op->vtkHyperTreeGridAlgorithm::AddInputData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkHyperTreeGridAlgorithm_AddInputData_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridAlgorithm *op = static_cast<vtkHyperTreeGridAlgorithm *>(vp);

  int temp0;
  vtkDataObject *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->AddInputData(temp0, temp1);
    }
    else
    {
      op->vtkHyperTreeGridAlgorithm::AddInputData(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkHyperTreeGridAlgorithm_AddInputData(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkHyperTreeGridAlgorithm_AddInputData_s1(self, args);
    case 2:
      return PyvtkHyperTreeGridAlgorithm_AddInputData_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "AddInputData");
  return nullptr;
}


static PyMethodDef PyvtkHyperTreeGridAlgorithm_Methods[] = {
  {"IsTypeOf", PyvtkHyperTreeGridAlgorithm_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkHyperTreeGridAlgorithm_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkHyperTreeGridAlgorithm_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkHyperTreeGridAlgorithm\nC++: static vtkHyperTreeGridAlgorithm *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkHyperTreeGridAlgorithm_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkHyperTreeGridAlgorithm\nC++: vtkHyperTreeGridAlgorithm *NewInstance()\n\n"},
  {"GetOutput", PyvtkHyperTreeGridAlgorithm_GetOutput, METH_VARARGS,
   "V.GetOutput() -> vtkDataObject\nC++: vtkDataObject *GetOutput()\nV.GetOutput(int) -> vtkDataObject\nC++: vtkDataObject *GetOutput(int)\n\nGet the output data object for a port on this algorithm.\n"},
  {"SetOutput", PyvtkHyperTreeGridAlgorithm_SetOutput, METH_VARARGS,
   "V.SetOutput(vtkDataObject)\nC++: virtual void SetOutput(vtkDataObject *)\n\nGet the output data object for a port on this algorithm.\n"},
  {"GetHyperTreeGridOutput", PyvtkHyperTreeGridAlgorithm_GetHyperTreeGridOutput, METH_VARARGS,
   "V.GetHyperTreeGridOutput() -> vtkHyperTreeGrid\nC++: vtkHyperTreeGrid *GetHyperTreeGridOutput()\nV.GetHyperTreeGridOutput(int) -> vtkHyperTreeGrid\nC++: vtkHyperTreeGrid *GetHyperTreeGridOutput(int)\n\nGet the output as a hyper tree grid.\n"},
  {"GetPolyDataOutput", PyvtkHyperTreeGridAlgorithm_GetPolyDataOutput, METH_VARARGS,
   "V.GetPolyDataOutput() -> vtkPolyData\nC++: vtkPolyData *GetPolyDataOutput()\nV.GetPolyDataOutput(int) -> vtkPolyData\nC++: vtkPolyData *GetPolyDataOutput(int)\n\nGet the output as a polygonal dataset.\n"},
  {"GetUnstructuredGridOutput", PyvtkHyperTreeGridAlgorithm_GetUnstructuredGridOutput, METH_VARARGS,
   "V.GetUnstructuredGridOutput() -> vtkUnstructuredGrid\nC++: vtkUnstructuredGrid *GetUnstructuredGridOutput()\nV.GetUnstructuredGridOutput(int) -> vtkUnstructuredGrid\nC++: vtkUnstructuredGrid *GetUnstructuredGridOutput(int)\n\nGet the output as an unstructured grid.\n"},
  {"SetInputData", PyvtkHyperTreeGridAlgorithm_SetInputData, METH_VARARGS,
   "V.SetInputData(vtkDataObject)\nC++: void SetInputData(vtkDataObject *)\nV.SetInputData(int, vtkDataObject)\nC++: void SetInputData(int, vtkDataObject *)\n\nAssign a data object as input. Note that this method does not\nestablish a pipeline connection. Use SetInputConnection() to\nsetup a pipeline connection.\n"},
  {"AddInputData", PyvtkHyperTreeGridAlgorithm_AddInputData, METH_VARARGS,
   "V.AddInputData(vtkDataObject)\nC++: void AddInputData(vtkDataObject *)\nV.AddInputData(int, vtkDataObject)\nC++: void AddInputData(int, vtkDataObject *)\n\nAssign a data object as input. Note that this method does not\nestablish a pipeline connection. Use AddInputConnection() to\nsetup a pipeline connection.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkHyperTreeGridAlgorithm_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonExecutionModelPython.vtkHyperTreeGridAlgorithm", // tp_name
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
  PyvtkHyperTreeGridAlgorithm_Doc, // tp_doc
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

PyObject *PyvtkHyperTreeGridAlgorithm_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkHyperTreeGridAlgorithm_Type, PyvtkHyperTreeGridAlgorithm_Methods,
    "vtkHyperTreeGridAlgorithm",
 nullptr);

  PyTypeObject *pytype = &PyvtkHyperTreeGridAlgorithm_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkHyperTreeGridAlgorithm(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkHyperTreeGridAlgorithm_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkHyperTreeGridAlgorithm", o) != 0)
  {
    Py_DECREF(o);
  }

}

