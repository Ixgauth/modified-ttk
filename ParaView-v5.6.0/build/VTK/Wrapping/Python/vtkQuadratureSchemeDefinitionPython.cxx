// python wrapper for vtkQuadratureSchemeDefinition
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
#include "vtkQuadratureSchemeDefinition.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkQuadratureSchemeDefinition(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkQuadratureSchemeDefinition_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkQuadratureSchemeDefinition_Doc =
  "vtkQuadratureSchemeDefinition - An Elemental data type that holds a\ndefinition of a numerical quadrature scheme.\n\n"
  "Superclass: vtkObject\n\n"
  "The definition contains the requisite information to interpolate to\n"
  "the so called quadrature points of the specific scheme. namely:\n\n"
  "1) A matrix of shape function weights(shape functions evaluated at\n"
  "parametric coordinates of the quadrature points).\n\n"
  "2) The number of quadrature points and cell nodes. These parameters\n"
  "size the matrix, and allow for convinent evaluation by users of the\n"
  "definition. \n\n";


static PyObject *
PyvtkQuadratureSchemeDefinition_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkQuadratureSchemeDefinition::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuadratureSchemeDefinition_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadratureSchemeDefinition *op = static_cast<vtkQuadratureSchemeDefinition *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkQuadratureSchemeDefinition::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuadratureSchemeDefinition_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkQuadratureSchemeDefinition *tempr = vtkQuadratureSchemeDefinition::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuadratureSchemeDefinition_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadratureSchemeDefinition *op = static_cast<vtkQuadratureSchemeDefinition *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkQuadratureSchemeDefinition *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkQuadratureSchemeDefinition::NewInstance());

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
PyvtkQuadratureSchemeDefinition_DICTIONARY(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "DICTIONARY");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationQuadratureSchemeDefinitionVectorKey *tempr = vtkQuadratureSchemeDefinition::DICTIONARY();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuadratureSchemeDefinition_QUADRATURE_OFFSET_ARRAY_NAME(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "QUADRATURE_OFFSET_ARRAY_NAME");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationStringKey *tempr = vtkQuadratureSchemeDefinition::QUADRATURE_OFFSET_ARRAY_NAME();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuadratureSchemeDefinition_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadratureSchemeDefinition *op = static_cast<vtkQuadratureSchemeDefinition *>(vp);

  vtkQuadratureSchemeDefinition *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkQuadratureSchemeDefinition"))
  {
    int tempr = (ap.IsBound() ?
      op->DeepCopy(temp0) :
      op->vtkQuadratureSchemeDefinition::DeepCopy(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuadratureSchemeDefinition_SaveState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SaveState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadratureSchemeDefinition *op = static_cast<vtkQuadratureSchemeDefinition *>(vp);

  vtkXMLDataElement *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkXMLDataElement"))
  {
    int tempr = (ap.IsBound() ?
      op->SaveState(temp0) :
      op->vtkQuadratureSchemeDefinition::SaveState(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuadratureSchemeDefinition_RestoreState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RestoreState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadratureSchemeDefinition *op = static_cast<vtkQuadratureSchemeDefinition *>(vp);

  vtkXMLDataElement *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkXMLDataElement"))
  {
    int tempr = (ap.IsBound() ?
      op->RestoreState(temp0) :
      op->vtkQuadratureSchemeDefinition::RestoreState(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuadratureSchemeDefinition_Clear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Clear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadratureSchemeDefinition *op = static_cast<vtkQuadratureSchemeDefinition *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Clear();
    }
    else
    {
      op->vtkQuadratureSchemeDefinition::Clear();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuadratureSchemeDefinition_Initialize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadratureSchemeDefinition *op = static_cast<vtkQuadratureSchemeDefinition *>(vp);

  int temp0;
  int temp1;
  int temp2;
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<double> store3(2*size3);
  double *temp3 = store3.Data();
  double *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3))
  {
    ap.Save(temp3, save3, size3);

    if (ap.IsBound())
    {
      op->Initialize(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkQuadratureSchemeDefinition::Initialize(temp0, temp1, temp2, temp3);
    }

    if (ap.HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkQuadratureSchemeDefinition_Initialize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadratureSchemeDefinition *op = static_cast<vtkQuadratureSchemeDefinition *>(vp);

  int temp0;
  int temp1;
  int temp2;
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<double> store3(2*size3);
  double *temp3 = store3.Data();
  double *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  size_t size4 = ap.GetArgSize(4);
  vtkPythonArgs::Array<double> store4(2*size4);
  double *temp4 = store4.Data();
  double *save4 = (size4 == 0 ? nullptr : temp4 + size4);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4))
  {
    ap.Save(temp3, save3, size3);
    ap.Save(temp4, save4, size4);

    if (ap.IsBound())
    {
      op->Initialize(temp0, temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkQuadratureSchemeDefinition::Initialize(temp0, temp1, temp2, temp3, temp4);
    }

    if (ap.HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (ap.HasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(4, temp4, size4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkQuadratureSchemeDefinition_Initialize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkQuadratureSchemeDefinition_Initialize_s1(self, args);
    case 5:
      return PyvtkQuadratureSchemeDefinition_Initialize_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Initialize");
  return nullptr;
}



static PyObject *
PyvtkQuadratureSchemeDefinition_GetCellType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadratureSchemeDefinition *op = static_cast<vtkQuadratureSchemeDefinition *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCellType() :
      op->vtkQuadratureSchemeDefinition::GetCellType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuadratureSchemeDefinition_GetQuadratureKey(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetQuadratureKey");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadratureSchemeDefinition *op = static_cast<vtkQuadratureSchemeDefinition *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetQuadratureKey() :
      op->vtkQuadratureSchemeDefinition::GetQuadratureKey());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuadratureSchemeDefinition_GetNumberOfNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadratureSchemeDefinition *op = static_cast<vtkQuadratureSchemeDefinition *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfNodes() :
      op->vtkQuadratureSchemeDefinition::GetNumberOfNodes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuadratureSchemeDefinition_GetNumberOfQuadraturePoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfQuadraturePoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadratureSchemeDefinition *op = static_cast<vtkQuadratureSchemeDefinition *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfQuadraturePoints() :
      op->vtkQuadratureSchemeDefinition::GetNumberOfQuadraturePoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuadratureSchemeDefinition_GetShapeFunctionWeights_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShapeFunctionWeights");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadratureSchemeDefinition *op = static_cast<vtkQuadratureSchemeDefinition *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const double *tempr = (ap.IsBound() ?
      op->GetShapeFunctionWeights() :
      op->vtkQuadratureSchemeDefinition::GetShapeFunctionWeights());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkQuadratureSchemeDefinition_GetShapeFunctionWeights_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShapeFunctionWeights");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadratureSchemeDefinition *op = static_cast<vtkQuadratureSchemeDefinition *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const double *tempr = (ap.IsBound() ?
      op->GetShapeFunctionWeights(temp0) :
      op->vtkQuadratureSchemeDefinition::GetShapeFunctionWeights(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkQuadratureSchemeDefinition_GetShapeFunctionWeights(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkQuadratureSchemeDefinition_GetShapeFunctionWeights_s1(self, args);
    case 1:
      return PyvtkQuadratureSchemeDefinition_GetShapeFunctionWeights_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetShapeFunctionWeights");
  return nullptr;
}



static PyObject *
PyvtkQuadratureSchemeDefinition_GetQuadratureWeights(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetQuadratureWeights");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadratureSchemeDefinition *op = static_cast<vtkQuadratureSchemeDefinition *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const double *tempr = (ap.IsBound() ?
      op->GetQuadratureWeights() :
      op->vtkQuadratureSchemeDefinition::GetQuadratureWeights());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkQuadratureSchemeDefinition_Methods[] = {
  {"IsTypeOf", PyvtkQuadratureSchemeDefinition_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkQuadratureSchemeDefinition_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkQuadratureSchemeDefinition_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkQuadratureSchemeDefinition\nC++: static vtkQuadratureSchemeDefinition *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkQuadratureSchemeDefinition_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkQuadratureSchemeDefinition\nC++: vtkQuadratureSchemeDefinition *NewInstance()\n\n"},
  {"DICTIONARY", PyvtkQuadratureSchemeDefinition_DICTIONARY, METH_VARARGS,
   "V.DICTIONARY()\n    -> vtkInformationQuadratureSchemeDefinitionVectorKey\nC++: static vtkInformationQuadratureSchemeDefinitionVectorKey *DICTIONARY(\n    )\n\n"},
  {"QUADRATURE_OFFSET_ARRAY_NAME", PyvtkQuadratureSchemeDefinition_QUADRATURE_OFFSET_ARRAY_NAME, METH_VARARGS,
   "V.QUADRATURE_OFFSET_ARRAY_NAME() -> vtkInformationStringKey\nC++: static vtkInformationStringKey *QUADRATURE_OFFSET_ARRAY_NAME(\n    )\n\n"},
  {"DeepCopy", PyvtkQuadratureSchemeDefinition_DeepCopy, METH_VARARGS,
   "V.DeepCopy(vtkQuadratureSchemeDefinition) -> int\nC++: int DeepCopy(const vtkQuadratureSchemeDefinition *other)\n\nDeep copy.\n"},
  {"SaveState", PyvtkQuadratureSchemeDefinition_SaveState, METH_VARARGS,
   "V.SaveState(vtkXMLDataElement) -> int\nC++: int SaveState(vtkXMLDataElement *e)\n\nPut the object into an XML representation. The element passed in\nis assumed to be empty.\n"},
  {"RestoreState", PyvtkQuadratureSchemeDefinition_RestoreState, METH_VARARGS,
   "V.RestoreState(vtkXMLDataElement) -> int\nC++: int RestoreState(vtkXMLDataElement *e)\n\nRestore the object from an XML representation.\n"},
  {"Clear", PyvtkQuadratureSchemeDefinition_Clear, METH_VARARGS,
   "V.Clear()\nC++: void Clear()\n\nRelease all allocated resources and set the object to an\nuninitialized state.\n"},
  {"Initialize", PyvtkQuadratureSchemeDefinition_Initialize, METH_VARARGS,
   "V.Initialize(int, int, int, [float, ...])\nC++: void Initialize(int cellType, int numberOfNodes,\n    int numberOfQuadraturePoints, double *shapeFunctionWeights)\nV.Initialize(int, int, int, [float, ...], [float, ...])\nC++: void Initialize(int cellType, int numberOfNodes,\n    int numberOfQuadraturePoints, double *shapeFunctionWeights,\n    double *quadratureWeights)\n\nInitialize the object allocating resources as needed.\n"},
  {"GetCellType", PyvtkQuadratureSchemeDefinition_GetCellType, METH_VARARGS,
   "V.GetCellType() -> int\nC++: int GetCellType()\n\nAccess the VTK cell type id.\n"},
  {"GetQuadratureKey", PyvtkQuadratureSchemeDefinition_GetQuadratureKey, METH_VARARGS,
   "V.GetQuadratureKey() -> int\nC++: int GetQuadratureKey()\n\nAccess to an alternative key.\n"},
  {"GetNumberOfNodes", PyvtkQuadratureSchemeDefinition_GetNumberOfNodes, METH_VARARGS,
   "V.GetNumberOfNodes() -> int\nC++: int GetNumberOfNodes()\n\nGet the number of nodes associated with the interpolation.\n"},
  {"GetNumberOfQuadraturePoints", PyvtkQuadratureSchemeDefinition_GetNumberOfQuadraturePoints, METH_VARARGS,
   "V.GetNumberOfQuadraturePoints() -> int\nC++: int GetNumberOfQuadraturePoints()\n\nGet the number of quadrature points associated with the scheme.\n"},
  {"GetShapeFunctionWeights", PyvtkQuadratureSchemeDefinition_GetShapeFunctionWeights, METH_VARARGS,
   "V.GetShapeFunctionWeights() -> (float, ...)\nC++: const double *GetShapeFunctionWeights()\nV.GetShapeFunctionWeights(int) -> (float, ...)\nC++: const double *GetShapeFunctionWeights(int quadraturePointId)\n\nGet the array of shape function weights. Shape function weights\nare the shape functions evaluated at the quadrature points. There\nare \"NumberOfNodes\" weights for each quadrature point.\n"},
  {"GetQuadratureWeights", PyvtkQuadratureSchemeDefinition_GetQuadratureWeights, METH_VARARGS,
   "V.GetQuadratureWeights() -> (float, ...)\nC++: const double *GetQuadratureWeights()\n\nAccess to the quadrature weights.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkQuadratureSchemeDefinition_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonDataModelPython.vtkQuadratureSchemeDefinition", // tp_name
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
  PyvtkQuadratureSchemeDefinition_Doc, // tp_doc
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

static vtkObjectBase *PyvtkQuadratureSchemeDefinition_StaticNew()
{
  return vtkQuadratureSchemeDefinition::New();
}

PyObject *PyvtkQuadratureSchemeDefinition_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkQuadratureSchemeDefinition_Type, PyvtkQuadratureSchemeDefinition_Methods,
    "vtkQuadratureSchemeDefinition",
 &PyvtkQuadratureSchemeDefinition_StaticNew);

  PyTypeObject *pytype = &PyvtkQuadratureSchemeDefinition_Type;

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

void PyVTKAddFile_vtkQuadratureSchemeDefinition(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkQuadratureSchemeDefinition_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkQuadratureSchemeDefinition", o) != 0)
  {
    Py_DECREF(o);
  }

}

