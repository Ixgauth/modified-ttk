// python wrapper for vtkSelectionNode
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
#include "vtkSelectionNode.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSelectionNode(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSelectionNode_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkSelectionNode_Doc =
  "vtkSelectionNode - A node in a selection tree.\n\n"
  "Superclass: vtkObject\n\n"
  "Used to store selection results.\n\n"
  "vtkSelectionNode stores selection parameters for a selection (or part\n"
  "of a selection). It stores a list of properties (in a vtkInformation)\n"
  "and a list of selection values (in a vtkAbstractArray). The\n"
  "properties provide information about what the selection values mean.\n"
  "For example the CONTENT_TYPE property gives information about what is\n"
  "stored by the node. If the CONTENT_TYPE is GLOBALIDS, the\n"
  "SelectionList array should contain a list of cell or point ids, which\n"
  "identify the particular cells or points that have matching values in\n"
  "the GLOBALID vtkDataSetAttribute array. If the CONTENT_TYPE is\n"
  "PEDIGREEIDS, the SelectionList array should contain a list of cell or\n"
  "point ids, which identify the particular cells or points that have\n"
  "matching values in the PEDIGREEID vtkDataSetAttribute array. The\n"
  "FIELD_TYPE property designates whether the selection refers to cells\n"
  "or points.\n\n"
  "Usually, each node under the root is a selection from one data\n"
  "object. SOURCE or SOURCE_ID properties point to this object. If the\n"
  "selection was performed on a renderer, PROP or PROP_ID point to the\n"
  "prop the selection was made on. Selection nodes corresponding to\n"
  "composite datasets may contain child nodes. Each child node of a\n"
  "composite dataset should have COMPOSITE_INDEX set. This is the\n"
  "flat-index to identify a node with in the composite dataset to which\n"
  "the selection applies.\n\n"
  "@warning\n"
  "No SelectionList is created by default. It should be assigned.\n\n";

static PyTypeObject PyvtkSelectionNode_SelectionContent_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonDataModelPython.vtkSelectionNode.SelectionContent", // tp_name
  sizeof(PyIntObject), // tp_basicsize
  0, // tp_itemsize
  nullptr, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  nullptr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  nullptr, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  nullptr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  nullptr, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  &PyInt_Type, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  nullptr, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

PyObject *PyvtkSelectionNode_SelectionContent_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkSelectionNode_SelectionContent_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkSelectionNode_SelectionContent_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}

static PyTypeObject PyvtkSelectionNode_SelectionField_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonDataModelPython.vtkSelectionNode.SelectionField", // tp_name
  sizeof(PyIntObject), // tp_basicsize
  0, // tp_itemsize
  nullptr, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  nullptr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  nullptr, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  nullptr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  nullptr, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  &PyInt_Type, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  nullptr, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

PyObject *PyvtkSelectionNode_SelectionField_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkSelectionNode_SelectionField_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkSelectionNode_SelectionField_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkSelectionNode_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSelectionNode::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionNode_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionNode *op = static_cast<vtkSelectionNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSelectionNode::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionNode_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSelectionNode *tempr = vtkSelectionNode::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionNode_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionNode *op = static_cast<vtkSelectionNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSelectionNode *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSelectionNode::NewInstance());

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
PyvtkSelectionNode_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionNode *op = static_cast<vtkSelectionNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Initialize();
    }
    else
    {
      op->vtkSelectionNode::Initialize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionNode_SetSelectionList(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectionList");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionNode *op = static_cast<vtkSelectionNode *>(vp);

  vtkAbstractArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractArray"))
  {
    if (ap.IsBound())
    {
      op->SetSelectionList(temp0);
    }
    else
    {
      op->vtkSelectionNode::SetSelectionList(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionNode_GetSelectionList(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectionList");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionNode *op = static_cast<vtkSelectionNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractArray *tempr = (ap.IsBound() ?
      op->GetSelectionList() :
      op->vtkSelectionNode::GetSelectionList());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionNode_SetSelectionData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectionData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionNode *op = static_cast<vtkSelectionNode *>(vp);

  vtkDataSetAttributes *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataSetAttributes"))
  {
    if (ap.IsBound())
    {
      op->SetSelectionData(temp0);
    }
    else
    {
      op->vtkSelectionNode::SetSelectionData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionNode_GetSelectionData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectionData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionNode *op = static_cast<vtkSelectionNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataSetAttributes *tempr = (ap.IsBound() ?
      op->GetSelectionData() :
      op->vtkSelectionNode::GetSelectionData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionNode_GetProperties(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProperties");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionNode *op = static_cast<vtkSelectionNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkInformation *tempr = (ap.IsBound() ?
      op->GetProperties() :
      op->vtkSelectionNode::GetProperties());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionNode_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionNode *op = static_cast<vtkSelectionNode *>(vp);

  vtkSelectionNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSelectionNode"))
  {
    if (ap.IsBound())
    {
      op->DeepCopy(temp0);
    }
    else
    {
      op->vtkSelectionNode::DeepCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionNode_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionNode *op = static_cast<vtkSelectionNode *>(vp);

  vtkSelectionNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSelectionNode"))
  {
    if (ap.IsBound())
    {
      op->ShallowCopy(temp0);
    }
    else
    {
      op->vtkSelectionNode::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionNode_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionNode *op = static_cast<vtkSelectionNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkSelectionNode::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionNode_CONTENT_TYPE(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "CONTENT_TYPE");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationIntegerKey *tempr = vtkSelectionNode::CONTENT_TYPE();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionNode_SetContentType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetContentType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionNode *op = static_cast<vtkSelectionNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetContentType(temp0);
    }
    else
    {
      op->vtkSelectionNode::SetContentType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionNode_GetContentType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContentType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionNode *op = static_cast<vtkSelectionNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetContentType() :
      op->vtkSelectionNode::GetContentType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionNode_FIELD_TYPE(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "FIELD_TYPE");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationIntegerKey *tempr = vtkSelectionNode::FIELD_TYPE();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionNode_SetFieldType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFieldType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionNode *op = static_cast<vtkSelectionNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFieldType(temp0);
    }
    else
    {
      op->vtkSelectionNode::SetFieldType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionNode_GetFieldType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionNode *op = static_cast<vtkSelectionNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFieldType() :
      op->vtkSelectionNode::GetFieldType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionNode_ConvertSelectionFieldToAttributeType(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ConvertSelectionFieldToAttributeType");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSelectionNode::ConvertSelectionFieldToAttributeType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionNode_ConvertAttributeTypeToSelectionField(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ConvertAttributeTypeToSelectionField");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSelectionNode::ConvertAttributeTypeToSelectionField(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionNode_SetQueryString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQueryString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionNode *op = static_cast<vtkSelectionNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetQueryString(temp0);
    }
    else
    {
      op->vtkSelectionNode::SetQueryString(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionNode_GetQueryString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetQueryString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionNode *op = static_cast<vtkSelectionNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetQueryString() :
      op->vtkSelectionNode::GetQueryString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionNode_EPSILON(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "EPSILON");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationDoubleKey *tempr = vtkSelectionNode::EPSILON();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionNode_ZBUFFER_VALUE(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ZBUFFER_VALUE");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationDoubleKey *tempr = vtkSelectionNode::ZBUFFER_VALUE();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionNode_CONTAINING_CELLS(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "CONTAINING_CELLS");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationIntegerKey *tempr = vtkSelectionNode::CONTAINING_CELLS();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionNode_COMPONENT_NUMBER(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "COMPONENT_NUMBER");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationIntegerKey *tempr = vtkSelectionNode::COMPONENT_NUMBER();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionNode_INVERSE(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "INVERSE");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationIntegerKey *tempr = vtkSelectionNode::INVERSE();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionNode_PIXEL_COUNT(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "PIXEL_COUNT");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationIntegerKey *tempr = vtkSelectionNode::PIXEL_COUNT();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionNode_SOURCE(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SOURCE");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationObjectBaseKey *tempr = vtkSelectionNode::SOURCE();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionNode_SOURCE_ID(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SOURCE_ID");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationIntegerKey *tempr = vtkSelectionNode::SOURCE_ID();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionNode_PROP(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "PROP");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationObjectBaseKey *tempr = vtkSelectionNode::PROP();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionNode_PROP_ID(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "PROP_ID");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationIntegerKey *tempr = vtkSelectionNode::PROP_ID();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionNode_PROCESS_ID(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "PROCESS_ID");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationIntegerKey *tempr = vtkSelectionNode::PROCESS_ID();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionNode_COMPOSITE_INDEX(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "COMPOSITE_INDEX");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationIntegerKey *tempr = vtkSelectionNode::COMPOSITE_INDEX();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionNode_HIERARCHICAL_LEVEL(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "HIERARCHICAL_LEVEL");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationIntegerKey *tempr = vtkSelectionNode::HIERARCHICAL_LEVEL();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionNode_HIERARCHICAL_INDEX(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "HIERARCHICAL_INDEX");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationIntegerKey *tempr = vtkSelectionNode::HIERARCHICAL_INDEX();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionNode_INDEXED_VERTICES(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "INDEXED_VERTICES");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationIntegerKey *tempr = vtkSelectionNode::INDEXED_VERTICES();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionNode_UnionSelectionList(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnionSelectionList");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionNode *op = static_cast<vtkSelectionNode *>(vp);

  vtkSelectionNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSelectionNode"))
  {
    if (ap.IsBound())
    {
      op->UnionSelectionList(temp0);
    }
    else
    {
      op->vtkSelectionNode::UnionSelectionList(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionNode_SubtractSelectionList(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SubtractSelectionList");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionNode *op = static_cast<vtkSelectionNode *>(vp);

  vtkSelectionNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSelectionNode"))
  {
    if (ap.IsBound())
    {
      op->SubtractSelectionList(temp0);
    }
    else
    {
      op->vtkSelectionNode::SubtractSelectionList(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionNode_EqualProperties(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EqualProperties");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionNode *op = static_cast<vtkSelectionNode *>(vp);

  vtkSelectionNode *temp0 = nullptr;
  bool temp1 = true;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkSelectionNode") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    bool tempr = (ap.IsBound() ?
      op->EqualProperties(temp0, temp1) :
      op->vtkSelectionNode::EqualProperties(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSelectionNode_Methods[] = {
  {"IsTypeOf", PyvtkSelectionNode_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSelectionNode_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSelectionNode_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSelectionNode\nC++: static vtkSelectionNode *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSelectionNode_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSelectionNode\nC++: vtkSelectionNode *NewInstance()\n\n"},
  {"Initialize", PyvtkSelectionNode_Initialize, METH_VARARGS,
   "V.Initialize()\nC++: virtual void Initialize()\n\nRestore data object to initial state,\n"},
  {"SetSelectionList", PyvtkSelectionNode_SetSelectionList, METH_VARARGS,
   "V.SetSelectionList(vtkAbstractArray)\nC++: virtual void SetSelectionList(vtkAbstractArray *)\n\nSets the selection list.\n"},
  {"GetSelectionList", PyvtkSelectionNode_GetSelectionList, METH_VARARGS,
   "V.GetSelectionList() -> vtkAbstractArray\nC++: virtual vtkAbstractArray *GetSelectionList()\n\nSets the selection list.\n"},
  {"SetSelectionData", PyvtkSelectionNode_SetSelectionData, METH_VARARGS,
   "V.SetSelectionData(vtkDataSetAttributes)\nC++: virtual void SetSelectionData(vtkDataSetAttributes *data)\n\nSets the selection table.\n"},
  {"GetSelectionData", PyvtkSelectionNode_GetSelectionData, METH_VARARGS,
   "V.GetSelectionData() -> vtkDataSetAttributes\nC++: virtual vtkDataSetAttributes *GetSelectionData()\n\nSets the selection table.\n"},
  {"GetProperties", PyvtkSelectionNode_GetProperties, METH_VARARGS,
   "V.GetProperties() -> vtkInformation\nC++: virtual vtkInformation *GetProperties()\n\nReturns the property map.\n"},
  {"DeepCopy", PyvtkSelectionNode_DeepCopy, METH_VARARGS,
   "V.DeepCopy(vtkSelectionNode)\nC++: virtual void DeepCopy(vtkSelectionNode *src)\n\nCopy properties, selection list and children of the input.\n"},
  {"ShallowCopy", PyvtkSelectionNode_ShallowCopy, METH_VARARGS,
   "V.ShallowCopy(vtkSelectionNode)\nC++: virtual void ShallowCopy(vtkSelectionNode *src)\n\nCopy properties, selection list and children of the input. This\nis a shallow copy: selection lists and pointers in the properties\nare passed by reference.\n"},
  {"GetMTime", PyvtkSelectionNode_GetMTime, METH_VARARGS,
   "V.GetMTime() -> int\nC++: vtkMTimeType GetMTime() override;\n\nReturn the MTime taking into account changes to the properties\n"},
  {"CONTENT_TYPE", PyvtkSelectionNode_CONTENT_TYPE, METH_VARARGS,
   "V.CONTENT_TYPE() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *CONTENT_TYPE()\n\nGet the (primary) property that describes the content of a\nselection node's data. This key takes on values from the\nSelectionContent enum. GetContentType() returns -1 if the content\ntype is not set.\n\n\\sa vtkSelectionNode::SelectionContent\n"},
  {"SetContentType", PyvtkSelectionNode_SetContentType, METH_VARARGS,
   "V.SetContentType(int)\nC++: virtual void SetContentType(int type)\n\nGet or set the content type of the selection. This is the same as\nsetting the CONTENT_TYPE() key on the property.\n"},
  {"GetContentType", PyvtkSelectionNode_GetContentType, METH_VARARGS,
   "V.GetContentType() -> int\nC++: virtual int GetContentType()\n\nGet or set the content type of the selection. This is the same as\nsetting the CONTENT_TYPE() key on the property.\n"},
  {"FIELD_TYPE", PyvtkSelectionNode_FIELD_TYPE, METH_VARARGS,
   "V.FIELD_TYPE() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *FIELD_TYPE()\n\nControls whether cell, point, or field data determine what is\ninside and out. The default is CELL. Vertex and edge types are\nalso available for graph classes. GetFieldType() returns -1 if\nthe field type is not set.\n"},
  {"SetFieldType", PyvtkSelectionNode_SetFieldType, METH_VARARGS,
   "V.SetFieldType(int)\nC++: virtual void SetFieldType(int type)\n\nGet or set the field type of the selection. This is the same as\nsetting the FIELD_TYPE() key on the property.\n"},
  {"GetFieldType", PyvtkSelectionNode_GetFieldType, METH_VARARGS,
   "V.GetFieldType() -> int\nC++: virtual int GetFieldType()\n\nGet or set the field type of the selection. This is the same as\nsetting the FIELD_TYPE() key on the property.\n"},
  {"ConvertSelectionFieldToAttributeType", PyvtkSelectionNode_ConvertSelectionFieldToAttributeType, METH_VARARGS,
   "V.ConvertSelectionFieldToAttributeType(int) -> int\nC++: static int ConvertSelectionFieldToAttributeType(int val)\n\nMethods to convert vtkSelectionNode::SelectionField to\nvtkDataSetAttribute::AttributeTypes and vice-versa.\n"},
  {"ConvertAttributeTypeToSelectionField", PyvtkSelectionNode_ConvertAttributeTypeToSelectionField, METH_VARARGS,
   "V.ConvertAttributeTypeToSelectionField(int) -> int\nC++: static int ConvertAttributeTypeToSelectionField(int val)\n\nMethods to convert vtkSelectionNode::SelectionField to\nvtkDataSetAttribute::AttributeTypes and vice-versa.\n"},
  {"SetQueryString", PyvtkSelectionNode_SetQueryString, METH_VARARGS,
   "V.SetQueryString(string)\nC++: virtual void SetQueryString(const char *_arg)\n\nSet/Get the query expression string.\n"},
  {"GetQueryString", PyvtkSelectionNode_GetQueryString, METH_VARARGS,
   "V.GetQueryString() -> string\nC++: virtual char *GetQueryString()\n\nSet/Get the query expression string.\n"},
  {"EPSILON", PyvtkSelectionNode_EPSILON, METH_VARARGS,
   "V.EPSILON() -> vtkInformationDoubleKey\nC++: static vtkInformationDoubleKey *EPSILON()\n\nFor location selection of points, if distance is greater than\nthis reject.\n"},
  {"ZBUFFER_VALUE", PyvtkSelectionNode_ZBUFFER_VALUE, METH_VARARGS,
   "V.ZBUFFER_VALUE() -> vtkInformationDoubleKey\nC++: static vtkInformationDoubleKey *ZBUFFER_VALUE()\n\nIf present, closest zbuffer value of this selection\n"},
  {"CONTAINING_CELLS", PyvtkSelectionNode_CONTAINING_CELLS, METH_VARARGS,
   "V.CONTAINING_CELLS() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *CONTAINING_CELLS()\n\nThis flag tells the extraction filter, when FIELD_TYPE==POINT,\nthat it should also extract the cells that contain any of the\nextracted points.\n"},
  {"COMPONENT_NUMBER", PyvtkSelectionNode_COMPONENT_NUMBER, METH_VARARGS,
   "V.COMPONENT_NUMBER() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *COMPONENT_NUMBER()\n\nWhen ContentType==THRESHOLDS  or ContentType==VALUES i.e.\nthreshold and value based selections, it is possible pick the\ncomponent number using this key. If none is specified, the 0th\ncomponent is used. If any number less than 0 is specified, then\nthe magnitude is used.\n"},
  {"INVERSE", PyvtkSelectionNode_INVERSE, METH_VARARGS,
   "V.INVERSE() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *INVERSE()\n\nThis flag tells the extraction filter to exclude the selection.\n"},
  {"PIXEL_COUNT", PyvtkSelectionNode_PIXEL_COUNT, METH_VARARGS,
   "V.PIXEL_COUNT() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *PIXEL_COUNT()\n\nA helper for visible cell selector, this is the number of pixels\ncovered by the actor whose cells are listed in the selection.\n"},
  {"SOURCE", PyvtkSelectionNode_SOURCE, METH_VARARGS,
   "V.SOURCE() -> vtkInformationObjectBaseKey\nC++: static vtkInformationObjectBaseKey *SOURCE()\n\nPointer to the data or algorithm the selection belongs to.\n"},
  {"SOURCE_ID", PyvtkSelectionNode_SOURCE_ID, METH_VARARGS,
   "V.SOURCE_ID() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *SOURCE_ID()\n\nID of the data or algorithm the selection belongs to. What ID\nmeans is application specific.\n"},
  {"PROP", PyvtkSelectionNode_PROP, METH_VARARGS,
   "V.PROP() -> vtkInformationObjectBaseKey\nC++: static vtkInformationObjectBaseKey *PROP()\n\nPointer to the prop the selection belongs to.\n"},
  {"PROP_ID", PyvtkSelectionNode_PROP_ID, METH_VARARGS,
   "V.PROP_ID() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *PROP_ID()\n\nID of the prop the selection belongs to. What ID means is\napplication specific.\n"},
  {"PROCESS_ID", PyvtkSelectionNode_PROCESS_ID, METH_VARARGS,
   "V.PROCESS_ID() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *PROCESS_ID()\n\nProcess id the selection is on.\n"},
  {"COMPOSITE_INDEX", PyvtkSelectionNode_COMPOSITE_INDEX, METH_VARARGS,
   "V.COMPOSITE_INDEX() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *COMPOSITE_INDEX()\n\nUsed to identify a node in composite datasets.\n"},
  {"HIERARCHICAL_LEVEL", PyvtkSelectionNode_HIERARCHICAL_LEVEL, METH_VARARGS,
   "V.HIERARCHICAL_LEVEL() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *HIERARCHICAL_LEVEL()\n\nUsed to identify a dataset in a hiererchical box dataset.\n"},
  {"HIERARCHICAL_INDEX", PyvtkSelectionNode_HIERARCHICAL_INDEX, METH_VARARGS,
   "V.HIERARCHICAL_INDEX() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *HIERARCHICAL_INDEX()\n\nUsed to identify a dataset in a hiererchical box dataset.\n"},
  {"INDEXED_VERTICES", PyvtkSelectionNode_INDEXED_VERTICES, METH_VARARGS,
   "V.INDEXED_VERTICES() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *INDEXED_VERTICES()\n\nThis key is used when making visible vertex selection. It means\nthat the cell ID selection has data about which vertices for each\ncell are visible.\n"},
  {"UnionSelectionList", PyvtkSelectionNode_UnionSelectionList, METH_VARARGS,
   "V.UnionSelectionList(vtkSelectionNode)\nC++: void UnionSelectionList(vtkSelectionNode *other)\n\nMerges the selection list between self and the other. Assumes\nthat both has identical properties.\n"},
  {"SubtractSelectionList", PyvtkSelectionNode_SubtractSelectionList, METH_VARARGS,
   "V.SubtractSelectionList(vtkSelectionNode)\nC++: void SubtractSelectionList(vtkSelectionNode *other)\n\nSubtracts the items in the selection list, other, from this\nselection list. Assumes that both selections have identical\nproperties (i.e., test with EqualProperties before using).\n"},
  {"EqualProperties", PyvtkSelectionNode_EqualProperties, METH_VARARGS,
   "V.EqualProperties(vtkSelectionNode, bool) -> bool\nC++: bool EqualProperties(vtkSelectionNode *other,\n    bool fullcompare=true)\n\nCompares Properties of self and other to ensure that they are\nexactly same.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSelectionNode_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonDataModelPython.vtkSelectionNode", // tp_name
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
  PyvtkSelectionNode_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSelectionNode_StaticNew()
{
  return vtkSelectionNode::New();
}

PyObject *PyvtkSelectionNode_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSelectionNode_Type, PyvtkSelectionNode_Methods,
    "vtkSelectionNode",
 &PyvtkSelectionNode_StaticNew);

  PyTypeObject *pytype = &PyvtkSelectionNode_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkObject_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkSelectionNode_SelectionContent_Type);
  PyvtkSelectionNode_SelectionContent_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkSelectionNode_SelectionContent_Type);

  o = (PyObject *)&PyvtkSelectionNode_SelectionContent_Type;
  if (PyDict_SetItemString(d, "SelectionContent", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkSelectionNode_SelectionField_Type);
  PyvtkSelectionNode_SelectionField_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkSelectionNode_SelectionField_Type);

  o = (PyObject *)&PyvtkSelectionNode_SelectionField_Type;
  if (PyDict_SetItemString(d, "SelectionField", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 11; c++)
  {
    typedef vtkSelectionNode::SelectionContent cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[11] = {
        { "SELECTIONS", vtkSelectionNode::SELECTIONS },
        { "GLOBALIDS", vtkSelectionNode::GLOBALIDS },
        { "PEDIGREEIDS", vtkSelectionNode::PEDIGREEIDS },
        { "VALUES", vtkSelectionNode::VALUES },
        { "INDICES", vtkSelectionNode::INDICES },
        { "FRUSTUM", vtkSelectionNode::FRUSTUM },
        { "LOCATIONS", vtkSelectionNode::LOCATIONS },
        { "THRESHOLDS", vtkSelectionNode::THRESHOLDS },
        { "BLOCKS", vtkSelectionNode::BLOCKS },
        { "QUERY", vtkSelectionNode::QUERY },
        { "USER", vtkSelectionNode::USER },
      };

    o = PyvtkSelectionNode_SelectionContent_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 6; c++)
  {
    typedef vtkSelectionNode::SelectionField cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[6] = {
        { "CELL", vtkSelectionNode::CELL },
        { "POINT", vtkSelectionNode::POINT },
        { "FIELD", vtkSelectionNode::FIELD },
        { "VERTEX", vtkSelectionNode::VERTEX },
        { "EDGE", vtkSelectionNode::EDGE },
        { "ROW", vtkSelectionNode::ROW },
      };

    o = PyvtkSelectionNode_SelectionField_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSelectionNode(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSelectionNode_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSelectionNode", o) != 0)
  {
    Py_DECREF(o);
  }

}

