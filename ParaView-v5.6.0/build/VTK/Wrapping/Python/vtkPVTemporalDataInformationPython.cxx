// python wrapper for vtkPVTemporalDataInformation
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
#include "vtkMultiProcessStream.h"
#include "vtkPVTemporalDataInformation.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPVTemporalDataInformation(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPVTemporalDataInformation_ClassNew(); }

#ifndef DECLARED_PyvtkPVInformation_ClassNew
extern "C" { PyObject *PyvtkPVInformation_ClassNew(); }
#define DECLARED_PyvtkPVInformation_ClassNew
#endif

static const char *PyvtkPVTemporalDataInformation_Doc =
  "vtkPVTemporalDataInformation - vtkPVTemporalDataInformation is used\nto gather data information over time.\n\n"
  "Superclass: vtkPVInformation\n\n"
  "This information provided by this class is a sub-set of\n"
  "vtkPVDataInformation and hence this is not directly a subclass of\n"
  "vtkPVDataInformation. It internally uses vtkPVDataInformation to\n"
  "collect information about each timestep.\n\n";


static PyObject *
PyvtkPVTemporalDataInformation_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPVTemporalDataInformation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVTemporalDataInformation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVTemporalDataInformation *op = static_cast<vtkPVTemporalDataInformation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVTemporalDataInformation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVTemporalDataInformation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPVTemporalDataInformation *tempr = vtkPVTemporalDataInformation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVTemporalDataInformation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVTemporalDataInformation *op = static_cast<vtkPVTemporalDataInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVTemporalDataInformation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVTemporalDataInformation::NewInstance());

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
PyvtkPVTemporalDataInformation_SetPortNumber(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPortNumber");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVTemporalDataInformation *op = static_cast<vtkPVTemporalDataInformation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPortNumber(temp0);
    }
    else
    {
      op->vtkPVTemporalDataInformation::SetPortNumber(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVTemporalDataInformation_CopyFromObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyFromObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVTemporalDataInformation *op = static_cast<vtkPVTemporalDataInformation *>(vp);

  vtkObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
  {
    if (ap.IsBound())
    {
      op->CopyFromObject(temp0);
    }
    else
    {
      op->vtkPVTemporalDataInformation::CopyFromObject(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVTemporalDataInformation_AddInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVTemporalDataInformation *op = static_cast<vtkPVTemporalDataInformation *>(vp);

  vtkPVInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVInformation"))
  {
    if (ap.IsBound())
    {
      op->AddInformation(temp0);
    }
    else
    {
      op->vtkPVTemporalDataInformation::AddInformation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVTemporalDataInformation_CopyParametersToStream(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyParametersToStream");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVTemporalDataInformation *op = static_cast<vtkPVTemporalDataInformation *>(vp);

  vtkMultiProcessStream *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, "vtkMultiProcessStream"))
  {
    if (ap.IsBound())
    {
      op->CopyParametersToStream(*temp0);
    }
    else
    {
      op->vtkPVTemporalDataInformation::CopyParametersToStream(*temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVTemporalDataInformation_CopyParametersFromStream(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyParametersFromStream");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVTemporalDataInformation *op = static_cast<vtkPVTemporalDataInformation *>(vp);

  vtkMultiProcessStream *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, "vtkMultiProcessStream"))
  {
    if (ap.IsBound())
    {
      op->CopyParametersFromStream(*temp0);
    }
    else
    {
      op->vtkPVTemporalDataInformation::CopyParametersFromStream(*temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVTemporalDataInformation_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVTemporalDataInformation *op = static_cast<vtkPVTemporalDataInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Initialize();
    }
    else
    {
      op->vtkPVTemporalDataInformation::Initialize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVTemporalDataInformation_GetNumberOfTimeSteps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTimeSteps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVTemporalDataInformation *op = static_cast<vtkPVTemporalDataInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfTimeSteps() :
      op->vtkPVTemporalDataInformation::GetNumberOfTimeSteps());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVTemporalDataInformation_GetTimeRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVTemporalDataInformation *op = static_cast<vtkPVTemporalDataInformation *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetTimeRange() :
      op->vtkPVTemporalDataInformation::GetTimeRange());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkPVTemporalDataInformation_GetPointDataInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointDataInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVTemporalDataInformation *op = static_cast<vtkPVTemporalDataInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVDataSetAttributesInformation *tempr = (ap.IsBound() ?
      op->GetPointDataInformation() :
      op->vtkPVTemporalDataInformation::GetPointDataInformation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVTemporalDataInformation_GetCellDataInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellDataInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVTemporalDataInformation *op = static_cast<vtkPVTemporalDataInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVDataSetAttributesInformation *tempr = (ap.IsBound() ?
      op->GetCellDataInformation() :
      op->vtkPVTemporalDataInformation::GetCellDataInformation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVTemporalDataInformation_GetVertexDataInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVertexDataInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVTemporalDataInformation *op = static_cast<vtkPVTemporalDataInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVDataSetAttributesInformation *tempr = (ap.IsBound() ?
      op->GetVertexDataInformation() :
      op->vtkPVTemporalDataInformation::GetVertexDataInformation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVTemporalDataInformation_GetEdgeDataInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeDataInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVTemporalDataInformation *op = static_cast<vtkPVTemporalDataInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVDataSetAttributesInformation *tempr = (ap.IsBound() ?
      op->GetEdgeDataInformation() :
      op->vtkPVTemporalDataInformation::GetEdgeDataInformation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVTemporalDataInformation_GetRowDataInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRowDataInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVTemporalDataInformation *op = static_cast<vtkPVTemporalDataInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVDataSetAttributesInformation *tempr = (ap.IsBound() ?
      op->GetRowDataInformation() :
      op->vtkPVTemporalDataInformation::GetRowDataInformation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVTemporalDataInformation_GetAttributeInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributeInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVTemporalDataInformation *op = static_cast<vtkPVTemporalDataInformation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkPVDataSetAttributesInformation *tempr = (ap.IsBound() ?
      op->GetAttributeInformation(temp0) :
      op->vtkPVTemporalDataInformation::GetAttributeInformation(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVTemporalDataInformation_GetFieldDataInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldDataInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVTemporalDataInformation *op = static_cast<vtkPVTemporalDataInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVDataSetAttributesInformation *tempr = (ap.IsBound() ?
      op->GetFieldDataInformation() :
      op->vtkPVTemporalDataInformation::GetFieldDataInformation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVTemporalDataInformation_GetArrayInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVTemporalDataInformation *op = static_cast<vtkPVTemporalDataInformation *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkPVArrayInformation *tempr = (ap.IsBound() ?
      op->GetArrayInformation(temp0, temp1) :
      op->vtkPVTemporalDataInformation::GetArrayInformation(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPVTemporalDataInformation_Methods[] = {
  {"IsTypeOf", PyvtkPVTemporalDataInformation_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPVTemporalDataInformation_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPVTemporalDataInformation_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPVTemporalDataInformation\nC++: static vtkPVTemporalDataInformation *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPVTemporalDataInformation_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPVTemporalDataInformation\nC++: vtkPVTemporalDataInformation *NewInstance()\n\n"},
  {"SetPortNumber", PyvtkPVTemporalDataInformation_SetPortNumber, METH_VARARGS,
   "V.SetPortNumber(int)\nC++: virtual void SetPortNumber(int _arg)\n\nPort number controls which output port the information is\ngathered from. This is only applicable when the vtkObject from\nwhich the information being gathered is a vtkAlgorithm. Set it to\n-1(default), to return the classname of the vtkAlgorithm itself.\nThis is the only parameter that can be set on  the client-side\nbefore gathering the information.\n"},
  {"CopyFromObject", PyvtkPVTemporalDataInformation_CopyFromObject, METH_VARARGS,
   "V.CopyFromObject(vtkObject)\nC++: void CopyFromObject(vtkObject *object) override;\n\nTransfer information about a single object into this object. This\nexpects the object to be a vtkAlgorithmOutput.\n"},
  {"AddInformation", PyvtkPVTemporalDataInformation_AddInformation, METH_VARARGS,
   "V.AddInformation(vtkPVInformation)\nC++: void AddInformation(vtkPVInformation *info) override;\n\nMerge another information object. Calls AddInformation(info, 0).\n"},
  {"CopyParametersToStream", PyvtkPVTemporalDataInformation_CopyParametersToStream, METH_VARARGS,
   "V.CopyParametersToStream(vtkMultiProcessStream)\nC++: void CopyParametersToStream(vtkMultiProcessStream &)\n    override;\n\nSerialize/Deserialize the parameters that control how/what\ninformation is gathered. This are different from the ivars that\nconstitute the gathered information itself. For example,\nPortNumber on vtkPVDataInformation controls what output port the\ndata-information is gathered from.\n"},
  {"CopyParametersFromStream", PyvtkPVTemporalDataInformation_CopyParametersFromStream, METH_VARARGS,
   "V.CopyParametersFromStream(vtkMultiProcessStream)\nC++: void CopyParametersFromStream(vtkMultiProcessStream &)\n    override;\n\nSerialize/Deserialize the parameters that control how/what\ninformation is gathered. This are different from the ivars that\nconstitute the gathered information itself. For example,\nPortNumber on vtkPVDataInformation controls what output port the\ndata-information is gathered from.\n"},
  {"Initialize", PyvtkPVTemporalDataInformation_Initialize, METH_VARARGS,
   "V.Initialize()\nC++: void Initialize()\n\nInitializes the information object.\n"},
  {"GetNumberOfTimeSteps", PyvtkPVTemporalDataInformation_GetNumberOfTimeSteps, METH_VARARGS,
   "V.GetNumberOfTimeSteps() -> int\nC++: virtual int GetNumberOfTimeSteps()\n\nReturns the number of timesteps this information was gathered\nfrom.\n"},
  {"GetTimeRange", PyvtkPVTemporalDataInformation_GetTimeRange, METH_VARARGS,
   "V.GetTimeRange() -> (float, float)\nC++: double *GetTimeRange()\n\n"},
  {"GetPointDataInformation", PyvtkPVTemporalDataInformation_GetPointDataInformation, METH_VARARGS,
   "V.GetPointDataInformation() -> vtkPVDataSetAttributesInformation\nC++: virtual vtkPVDataSetAttributesInformation *GetPointDataInformation(\n    )\n\nAccess to information about point/cell/vertex/edge/row data.\n"},
  {"GetCellDataInformation", PyvtkPVTemporalDataInformation_GetCellDataInformation, METH_VARARGS,
   "V.GetCellDataInformation() -> vtkPVDataSetAttributesInformation\nC++: virtual vtkPVDataSetAttributesInformation *GetCellDataInformation(\n    )\n\nAccess to information about point/cell/vertex/edge/row data.\n"},
  {"GetVertexDataInformation", PyvtkPVTemporalDataInformation_GetVertexDataInformation, METH_VARARGS,
   "V.GetVertexDataInformation() -> vtkPVDataSetAttributesInformation\nC++: virtual vtkPVDataSetAttributesInformation *GetVertexDataInformation(\n    )\n\nAccess to information about point/cell/vertex/edge/row data.\n"},
  {"GetEdgeDataInformation", PyvtkPVTemporalDataInformation_GetEdgeDataInformation, METH_VARARGS,
   "V.GetEdgeDataInformation() -> vtkPVDataSetAttributesInformation\nC++: virtual vtkPVDataSetAttributesInformation *GetEdgeDataInformation(\n    )\n\nAccess to information about point/cell/vertex/edge/row data.\n"},
  {"GetRowDataInformation", PyvtkPVTemporalDataInformation_GetRowDataInformation, METH_VARARGS,
   "V.GetRowDataInformation() -> vtkPVDataSetAttributesInformation\nC++: virtual vtkPVDataSetAttributesInformation *GetRowDataInformation(\n    )\n\nAccess to information about point/cell/vertex/edge/row data.\n"},
  {"GetAttributeInformation", PyvtkPVTemporalDataInformation_GetAttributeInformation, METH_VARARGS,
   "V.GetAttributeInformation(int)\n    -> vtkPVDataSetAttributesInformation\nC++: vtkPVDataSetAttributesInformation *GetAttributeInformation(\n    int attr)\n\nConvenience method to get the attribute information given the\nattribute type. attr can be vtkDataObject::FieldAssociations or\nvtkDataObject::AttributeTypes (since both are identical).\n"},
  {"GetFieldDataInformation", PyvtkPVTemporalDataInformation_GetFieldDataInformation, METH_VARARGS,
   "V.GetFieldDataInformation() -> vtkPVDataSetAttributesInformation\nC++: virtual vtkPVDataSetAttributesInformation *GetFieldDataInformation(\n    )\n\nAccess to information about field data, if any.\n"},
  {"GetArrayInformation", PyvtkPVTemporalDataInformation_GetArrayInformation, METH_VARARGS,
   "V.GetArrayInformation(string, int) -> vtkPVArrayInformation\nC++: vtkPVArrayInformation *GetArrayInformation(\n    const char *arrayname, int fieldAssociation)\n\nMethod to find and return attribute array information for a\nparticular array for the given attribute type if one exists.\nReturns NULL if none is found.fieldAssociation can be\nvtkDataObject::FIELD_ASSOCIATION_POINTS,\nvtkDataObject::FIELD_ASSOCIATION_CELLS etc. (use\nvtkDataObject::FIELD_ASSOCIATION_NONE for field data) (or\nvtkDataObject::POINT, vtkDataObject::CELL, vtkDataObject::FIELD).\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPVTemporalDataInformation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVClientServerCoreCorePython.vtkPVTemporalDataInformation", // tp_name
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
  PyvtkPVTemporalDataInformation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPVTemporalDataInformation_StaticNew()
{
  return vtkPVTemporalDataInformation::New();
}

PyObject *PyvtkPVTemporalDataInformation_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPVTemporalDataInformation_Type, PyvtkPVTemporalDataInformation_Methods,
    "vtkPVTemporalDataInformation",
 &PyvtkPVTemporalDataInformation_StaticNew);

  PyTypeObject *pytype = &PyvtkPVTemporalDataInformation_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPVInformation_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPVTemporalDataInformation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPVTemporalDataInformation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPVTemporalDataInformation", o) != 0)
  {
    Py_DECREF(o);
  }

}

