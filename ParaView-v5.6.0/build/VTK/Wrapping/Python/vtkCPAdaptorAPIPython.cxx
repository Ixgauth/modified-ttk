// python wrapper for vtkCPAdaptorAPI
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkCPAdaptorAPI.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCPAdaptorAPI(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkCPAdaptorAPI_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkCPAdaptorAPI_Doc =
  "vtkCPAdaptorAPI - vtkCPAdaptorAPI provides the implementation for API\nexposed to typical adaptor, such as C, Fortran.\n\n"
  "Superclass: vtkObject\n\n"
;


static PyObject *
PyvtkCPAdaptorAPI_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCPAdaptorAPI::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCPAdaptorAPI_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPAdaptorAPI *op = static_cast<vtkCPAdaptorAPI *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCPAdaptorAPI::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCPAdaptorAPI_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCPAdaptorAPI *tempr = vtkCPAdaptorAPI::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCPAdaptorAPI_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPAdaptorAPI *op = static_cast<vtkCPAdaptorAPI *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCPAdaptorAPI *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCPAdaptorAPI::NewInstance());

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
PyvtkCPAdaptorAPI_CoProcessorInitialize(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "CoProcessorInitialize");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkCPAdaptorAPI::CoProcessorInitialize();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCPAdaptorAPI_CoProcessorFinalize(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "CoProcessorFinalize");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkCPAdaptorAPI::CoProcessorFinalize();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCPAdaptorAPI_RequestDataDescription(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "RequestDataDescription");

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<int> store0(2*size0);
  int *temp0 = store0.Data();
  int *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<int> store2(2*size2);
  int *temp2 = store2.Data();
  int *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
  {
    ap.Save(temp0, save0, size0);
    ap.Save(temp1, save1, size1);
    ap.Save(temp2, save2, size2);

    vtkCPAdaptorAPI::RequestDataDescription(temp0, temp1, temp2);

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (ap.HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCPAdaptorAPI_NeedToCreateGrid(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "NeedToCreateGrid");

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<int> store0(2*size0);
  int *temp0 = store0.Data();
  int *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    vtkCPAdaptorAPI::NeedToCreateGrid(temp0);

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCPAdaptorAPI_CoProcess(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "CoProcess");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkCPAdaptorAPI::CoProcess();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCPAdaptorAPI_GetCoProcessorData(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetCoProcessorData");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkCPDataDescription *tempr = vtkCPAdaptorAPI::GetCoProcessorData();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCPAdaptorAPI_GetCoProcessor(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetCoProcessor");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkCPProcessor *tempr = vtkCPAdaptorAPI::GetCoProcessor();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkCPAdaptorAPI_Methods[] = {
  {"IsTypeOf", PyvtkCPAdaptorAPI_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCPAdaptorAPI_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCPAdaptorAPI_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkCPAdaptorAPI\nC++: static vtkCPAdaptorAPI *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCPAdaptorAPI_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkCPAdaptorAPI\nC++: vtkCPAdaptorAPI *NewInstance()\n\n"},
  {"CoProcessorInitialize", PyvtkCPAdaptorAPI_CoProcessorInitialize, METH_VARARGS,
   "V.CoProcessorInitialize()\nC++: static void CoProcessorInitialize()\n\ncall at the start of the simulation\n"},
  {"CoProcessorFinalize", PyvtkCPAdaptorAPI_CoProcessorFinalize, METH_VARARGS,
   "V.CoProcessorFinalize()\nC++: static void CoProcessorFinalize()\n\ncall at the end of the simulation\n"},
  {"RequestDataDescription", PyvtkCPAdaptorAPI_RequestDataDescription, METH_VARARGS,
   "V.RequestDataDescription([int, ...], [float, ...], [int, ...])\nC++: static void RequestDataDescription(int *timeStep,\n    double *time, int *coprocessThisTimeStep)\n\nthis is the function that determines whether or not there is\nanything to coprocess this time step\n"},
  {"NeedToCreateGrid", PyvtkCPAdaptorAPI_NeedToCreateGrid, METH_VARARGS,
   "V.NeedToCreateGrid([int, ...])\nC++: static void NeedToCreateGrid(int *needGrid)\n\nthis function sets needgrid to 1 if it does not have a copy of\nthe grid it sets needgrid to 0 if it does have a copy of the grid\nbut does not check if the grid is modified or needs to be updated\n"},
  {"CoProcess", PyvtkCPAdaptorAPI_CoProcess, METH_VARARGS,
   "V.CoProcess()\nC++: static void CoProcess()\n\ndo the actual coprocessing.  it is assumed that the\nvtkCPDataDescription has been filled in elsewhere.\n"},
  {"GetCoProcessorData", PyvtkCPAdaptorAPI_GetCoProcessorData, METH_VARARGS,
   "V.GetCoProcessorData() -> vtkCPDataDescription\nC++: static vtkCPDataDescription *GetCoProcessorData()\n\nprovides access to the vtkCPDataDescription instance.\n"},
  {"GetCoProcessor", PyvtkCPAdaptorAPI_GetCoProcessor, METH_VARARGS,
   "V.GetCoProcessor() -> vtkCPProcessor\nC++: static vtkCPProcessor *GetCoProcessor()\n\nprovides access to the vtkCPProcessor instance.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkCPAdaptorAPI_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVCatalystPython.vtkCPAdaptorAPI", // tp_name
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
  PyvtkCPAdaptorAPI_Doc, // tp_doc
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

PyObject *PyvtkCPAdaptorAPI_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkCPAdaptorAPI_Type, PyvtkCPAdaptorAPI_Methods,
    "vtkCPAdaptorAPI",
 nullptr);

  PyTypeObject *pytype = &PyvtkCPAdaptorAPI_Type;

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

void PyVTKAddFile_vtkCPAdaptorAPI(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCPAdaptorAPI_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCPAdaptorAPI", o) != 0)
  {
    Py_DECREF(o);
  }

}

