// python wrapper for vtkPassInputTypeAlgorithm
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
#include "vtkPassInputTypeAlgorithm.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPassInputTypeAlgorithm(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPassInputTypeAlgorithm_ClassNew(); }

#ifndef DECLARED_PyvtkAlgorithm_ClassNew
extern "C" { PyObject *PyvtkAlgorithm_ClassNew(); }
#define DECLARED_PyvtkAlgorithm_ClassNew
#endif

static const char *PyvtkPassInputTypeAlgorithm_Doc =
  "vtkPassInputTypeAlgorithm - Superclass for algorithms that produce\noutput of the same type as input\n\n"
  "Superclass: vtkAlgorithm\n\n"
  "vtkPassInputTypeAlgorithm is a convenience class to make writing\n"
  "algorithms easier. It is also designed to help transition old\n"
  "algorithms to the new pipeline architecture. There are some\n"
  "assumptions and defaults made by this class you should be aware of.\n"
  "This class defaults such that your filter will have one input port\n"
  "and one output port. If that is not the case simply change it with\n"
  "SetNumberOfInputPorts etc. See this classes constructor for the\n"
  "default. This class also provides a FillInputPortInfo method that by\n"
  "default says that all inputs will be DataObject. If that isn't the\n"
  "case then please override this method in your subclass. This class\n"
  "breaks out the downstream requests into separate functions such as\n"
  "RequestDataObject RequestData and RequestInformation. The default\n"
  "implementation of RequestDataObject will create an output data of the\n"
  "same type as the input.\n\n";


static PyObject *
PyvtkPassInputTypeAlgorithm_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPassInputTypeAlgorithm::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPassInputTypeAlgorithm_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPassInputTypeAlgorithm *op = static_cast<vtkPassInputTypeAlgorithm *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPassInputTypeAlgorithm::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPassInputTypeAlgorithm_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPassInputTypeAlgorithm *tempr = vtkPassInputTypeAlgorithm::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPassInputTypeAlgorithm_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPassInputTypeAlgorithm *op = static_cast<vtkPassInputTypeAlgorithm *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPassInputTypeAlgorithm *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPassInputTypeAlgorithm::NewInstance());

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
PyvtkPassInputTypeAlgorithm_GetOutput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPassInputTypeAlgorithm *op = static_cast<vtkPassInputTypeAlgorithm *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataObject *tempr = (ap.IsBound() ?
      op->GetOutput() :
      op->vtkPassInputTypeAlgorithm::GetOutput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPassInputTypeAlgorithm_GetOutput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPassInputTypeAlgorithm *op = static_cast<vtkPassInputTypeAlgorithm *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkDataObject *tempr = (ap.IsBound() ?
      op->GetOutput(temp0) :
      op->vtkPassInputTypeAlgorithm::GetOutput(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPassInputTypeAlgorithm_GetOutput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkPassInputTypeAlgorithm_GetOutput_s1(self, args);
    case 1:
      return PyvtkPassInputTypeAlgorithm_GetOutput_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetOutput");
  return nullptr;
}



static PyObject *
PyvtkPassInputTypeAlgorithm_GetPolyDataOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolyDataOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPassInputTypeAlgorithm *op = static_cast<vtkPassInputTypeAlgorithm *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetPolyDataOutput() :
      op->vtkPassInputTypeAlgorithm::GetPolyDataOutput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPassInputTypeAlgorithm_GetStructuredPointsOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStructuredPointsOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPassInputTypeAlgorithm *op = static_cast<vtkPassInputTypeAlgorithm *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStructuredPoints *tempr = (ap.IsBound() ?
      op->GetStructuredPointsOutput() :
      op->vtkPassInputTypeAlgorithm::GetStructuredPointsOutput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPassInputTypeAlgorithm_GetImageDataOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageDataOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPassInputTypeAlgorithm *op = static_cast<vtkPassInputTypeAlgorithm *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageData *tempr = (ap.IsBound() ?
      op->GetImageDataOutput() :
      op->vtkPassInputTypeAlgorithm::GetImageDataOutput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPassInputTypeAlgorithm_GetStructuredGridOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStructuredGridOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPassInputTypeAlgorithm *op = static_cast<vtkPassInputTypeAlgorithm *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStructuredGrid *tempr = (ap.IsBound() ?
      op->GetStructuredGridOutput() :
      op->vtkPassInputTypeAlgorithm::GetStructuredGridOutput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPassInputTypeAlgorithm_GetUnstructuredGridOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUnstructuredGridOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPassInputTypeAlgorithm *op = static_cast<vtkPassInputTypeAlgorithm *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkUnstructuredGrid *tempr = (ap.IsBound() ?
      op->GetUnstructuredGridOutput() :
      op->vtkPassInputTypeAlgorithm::GetUnstructuredGridOutput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPassInputTypeAlgorithm_GetRectilinearGridOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRectilinearGridOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPassInputTypeAlgorithm *op = static_cast<vtkPassInputTypeAlgorithm *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRectilinearGrid *tempr = (ap.IsBound() ?
      op->GetRectilinearGridOutput() :
      op->vtkPassInputTypeAlgorithm::GetRectilinearGridOutput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPassInputTypeAlgorithm_GetGraphOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGraphOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPassInputTypeAlgorithm *op = static_cast<vtkPassInputTypeAlgorithm *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkGraph *tempr = (ap.IsBound() ?
      op->GetGraphOutput() :
      op->vtkPassInputTypeAlgorithm::GetGraphOutput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPassInputTypeAlgorithm_GetMoleculeOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMoleculeOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPassInputTypeAlgorithm *op = static_cast<vtkPassInputTypeAlgorithm *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMolecule *tempr = (ap.IsBound() ?
      op->GetMoleculeOutput() :
      op->vtkPassInputTypeAlgorithm::GetMoleculeOutput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPassInputTypeAlgorithm_GetTableOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTableOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPassInputTypeAlgorithm *op = static_cast<vtkPassInputTypeAlgorithm *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTable *tempr = (ap.IsBound() ?
      op->GetTableOutput() :
      op->vtkPassInputTypeAlgorithm::GetTableOutput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPassInputTypeAlgorithm_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPassInputTypeAlgorithm *op = static_cast<vtkPassInputTypeAlgorithm *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataObject *tempr = (ap.IsBound() ?
      op->GetInput() :
      op->vtkPassInputTypeAlgorithm::GetInput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPassInputTypeAlgorithm_SetInputData_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPassInputTypeAlgorithm *op = static_cast<vtkPassInputTypeAlgorithm *>(vp);

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
      op->vtkPassInputTypeAlgorithm::SetInputData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPassInputTypeAlgorithm_SetInputData_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPassInputTypeAlgorithm *op = static_cast<vtkPassInputTypeAlgorithm *>(vp);

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
      op->vtkPassInputTypeAlgorithm::SetInputData(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPassInputTypeAlgorithm_SetInputData(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkPassInputTypeAlgorithm_SetInputData_s1(self, args);
    case 2:
      return PyvtkPassInputTypeAlgorithm_SetInputData_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetInputData");
  return nullptr;
}



static PyObject *
PyvtkPassInputTypeAlgorithm_AddInputData_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPassInputTypeAlgorithm *op = static_cast<vtkPassInputTypeAlgorithm *>(vp);

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
      op->vtkPassInputTypeAlgorithm::AddInputData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPassInputTypeAlgorithm_AddInputData_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPassInputTypeAlgorithm *op = static_cast<vtkPassInputTypeAlgorithm *>(vp);

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
      op->vtkPassInputTypeAlgorithm::AddInputData(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPassInputTypeAlgorithm_AddInputData(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkPassInputTypeAlgorithm_AddInputData_s1(self, args);
    case 2:
      return PyvtkPassInputTypeAlgorithm_AddInputData_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "AddInputData");
  return nullptr;
}


static PyMethodDef PyvtkPassInputTypeAlgorithm_Methods[] = {
  {"IsTypeOf", PyvtkPassInputTypeAlgorithm_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPassInputTypeAlgorithm_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPassInputTypeAlgorithm_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPassInputTypeAlgorithm\nC++: static vtkPassInputTypeAlgorithm *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPassInputTypeAlgorithm_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPassInputTypeAlgorithm\nC++: vtkPassInputTypeAlgorithm *NewInstance()\n\n"},
  {"GetOutput", PyvtkPassInputTypeAlgorithm_GetOutput, METH_VARARGS,
   "V.GetOutput() -> vtkDataObject\nC++: vtkDataObject *GetOutput()\nV.GetOutput(int) -> vtkDataObject\nC++: vtkDataObject *GetOutput(int)\n\nGet the output data object for a port on this algorithm.\n"},
  {"GetPolyDataOutput", PyvtkPassInputTypeAlgorithm_GetPolyDataOutput, METH_VARARGS,
   "V.GetPolyDataOutput() -> vtkPolyData\nC++: vtkPolyData *GetPolyDataOutput()\n\nGet the output as a concrete type.\n"},
  {"GetStructuredPointsOutput", PyvtkPassInputTypeAlgorithm_GetStructuredPointsOutput, METH_VARARGS,
   "V.GetStructuredPointsOutput() -> vtkStructuredPoints\nC++: vtkStructuredPoints *GetStructuredPointsOutput()\n\nGet the output as a concrete type.\n"},
  {"GetImageDataOutput", PyvtkPassInputTypeAlgorithm_GetImageDataOutput, METH_VARARGS,
   "V.GetImageDataOutput() -> vtkImageData\nC++: vtkImageData *GetImageDataOutput()\n\nGet the output as a concrete type.\n"},
  {"GetStructuredGridOutput", PyvtkPassInputTypeAlgorithm_GetStructuredGridOutput, METH_VARARGS,
   "V.GetStructuredGridOutput() -> vtkStructuredGrid\nC++: vtkStructuredGrid *GetStructuredGridOutput()\n\nGet the output as a concrete type.\n"},
  {"GetUnstructuredGridOutput", PyvtkPassInputTypeAlgorithm_GetUnstructuredGridOutput, METH_VARARGS,
   "V.GetUnstructuredGridOutput() -> vtkUnstructuredGrid\nC++: vtkUnstructuredGrid *GetUnstructuredGridOutput()\n\nGet the output as a concrete type.\n"},
  {"GetRectilinearGridOutput", PyvtkPassInputTypeAlgorithm_GetRectilinearGridOutput, METH_VARARGS,
   "V.GetRectilinearGridOutput() -> vtkRectilinearGrid\nC++: vtkRectilinearGrid *GetRectilinearGridOutput()\n\nGet the output as a concrete type.\n"},
  {"GetGraphOutput", PyvtkPassInputTypeAlgorithm_GetGraphOutput, METH_VARARGS,
   "V.GetGraphOutput() -> vtkGraph\nC++: vtkGraph *GetGraphOutput()\n\nGet the output as a concrete type.\n"},
  {"GetMoleculeOutput", PyvtkPassInputTypeAlgorithm_GetMoleculeOutput, METH_VARARGS,
   "V.GetMoleculeOutput() -> vtkMolecule\nC++: vtkMolecule *GetMoleculeOutput()\n\nGet the output as a concrete type.\n"},
  {"GetTableOutput", PyvtkPassInputTypeAlgorithm_GetTableOutput, METH_VARARGS,
   "V.GetTableOutput() -> vtkTable\nC++: vtkTable *GetTableOutput()\n\nGet the output as a concrete type.\n"},
  {"GetInput", PyvtkPassInputTypeAlgorithm_GetInput, METH_VARARGS,
   "V.GetInput() -> vtkDataObject\nC++: vtkDataObject *GetInput()\n\nGet the input data object. This method is not recommended for\nuse, but lots of old style filters use it.\n"},
  {"SetInputData", PyvtkPassInputTypeAlgorithm_SetInputData, METH_VARARGS,
   "V.SetInputData(vtkDataObject)\nC++: void SetInputData(vtkDataObject *)\nV.SetInputData(int, vtkDataObject)\nC++: void SetInputData(int, vtkDataObject *)\n\nAssign a data object as input. Note that this method does not\nestablish a pipeline connection. Use SetInputConnection() to\nsetup a pipeline connection.\n"},
  {"AddInputData", PyvtkPassInputTypeAlgorithm_AddInputData, METH_VARARGS,
   "V.AddInputData(vtkDataObject)\nC++: void AddInputData(vtkDataObject *)\nV.AddInputData(int, vtkDataObject)\nC++: void AddInputData(int, vtkDataObject *)\n\nAssign a data object as input. Note that this method does not\nestablish a pipeline connection. Use SetInputConnection() to\nsetup a pipeline connection.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPassInputTypeAlgorithm_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonExecutionModelPython.vtkPassInputTypeAlgorithm", // tp_name
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
  PyvtkPassInputTypeAlgorithm_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPassInputTypeAlgorithm_StaticNew()
{
  return vtkPassInputTypeAlgorithm::New();
}

PyObject *PyvtkPassInputTypeAlgorithm_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPassInputTypeAlgorithm_Type, PyvtkPassInputTypeAlgorithm_Methods,
    "vtkPassInputTypeAlgorithm",
 &PyvtkPassInputTypeAlgorithm_StaticNew);

  PyTypeObject *pytype = &PyvtkPassInputTypeAlgorithm_Type;

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

void PyVTKAddFile_vtkPassInputTypeAlgorithm(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPassInputTypeAlgorithm_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPassInputTypeAlgorithm", o) != 0)
  {
    Py_DECREF(o);
  }

}

