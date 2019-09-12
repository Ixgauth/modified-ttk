// python wrapper for vtkSMSILModel
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
#include "vtkSMSILModel.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMSILModel(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMSILModel_ClassNew(); }

#ifndef DECLARED_PyvtkSMObject_ClassNew
extern "C" { PyObject *PyvtkSMObject_ClassNew(); }
#define DECLARED_PyvtkSMObject_ClassNew
#endif

static const char *PyvtkSMSILModel_Doc =
  "vtkSMSILModel - is a helper for to work with SILs.\n\n"
  "Superclass: vtkSMObject\n\n"
  "vtkSMSILModel makes it easier to make checks/unchecks for the SIL\n"
  "while respecting the links/dependencies defined by the SIL.\n\n"
  "There are two ways of initializing the model:\n"
  "\\li One way is to initialize it with a SIL (using\n"
  "    Initialize(vtkGraph*).\n"
  "Then the model can be used as a simple API to check/uncheck elements.\n"
  "\\li Second way is to initialize with a proxy and property (using\n"
  "Initialize(vtkSMProxy, vtkSMProperty*). In that case, the SIL is\n"
  "obtained from  the property's vtkSMSILDomain. Also as the user\n"
  "changes the check states, the property is updated/pushed.\n\n"
  "@par Events:\n"
  "\\li vtkCommand::UpdateDataEvent -- fired when the check state of any\n"
  "    element\n"
  "changes. calldata = vertexid for the element whose check state\n"
  "changed.\n\n"
  "@section vtkSMSILModelLegacyWarning Legacy Warning\n\n"
  "While not deprecated, this class exists to support readers that use\n"
  "legacy representation for SIL which used a `vtkGraph` to represent\n"
  "the SIL. It is recommended that newer code uses\n"
  "vtkSubsetInclusionLattice (or subclass) to represent the SIL. In that\n"
  "case, there is no need for such a helper class as similar API is\n"
  "exposed on vtkSubsetInclusionLattice and subclasses.\n\n";

static PyTypeObject PyvtkSMSILModel_CheckState_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerCorePython.vtkSMSILModel.CheckState", // tp_name
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

PyObject *PyvtkSMSILModel_CheckState_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkSMSILModel_CheckState_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkSMSILModel_CheckState_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkSMSILModel_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMSILModel::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMSILModel_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSILModel *op = static_cast<vtkSMSILModel *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMSILModel::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMSILModel_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMSILModel *tempr = vtkSMSILModel::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMSILModel_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSILModel *op = static_cast<vtkSMSILModel *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMSILModel *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMSILModel::NewInstance());

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
PyvtkSMSILModel_Initialize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSILModel *op = static_cast<vtkSMSILModel *>(vp);

  vtkGraph *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkGraph"))
  {
    if (ap.IsBound())
    {
      op->Initialize(temp0);
    }
    else
    {
      op->vtkSMSILModel::Initialize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSMSILModel_Initialize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSILModel *op = static_cast<vtkSMSILModel *>(vp);

  vtkSMProxy *temp0 = nullptr;
  vtkSMStringVectorProperty *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      ap.GetVTKObject(temp1, "vtkSMStringVectorProperty"))
  {
    if (ap.IsBound())
    {
      op->Initialize(temp0, temp1);
    }
    else
    {
      op->vtkSMSILModel::Initialize(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSMSILModel_Initialize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkSMSILModel_Initialize_s1(self, args);
    case 2:
      return PyvtkSMSILModel_Initialize_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Initialize");
  return nullptr;
}



static PyObject *
PyvtkSMSILModel_GetSIL(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSIL");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSILModel *op = static_cast<vtkSMSILModel *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkGraph *tempr = (ap.IsBound() ?
      op->GetSIL() :
      op->vtkSMSILModel::GetSIL());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMSILModel_GetProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSILModel *op = static_cast<vtkSMSILModel *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMProxy *tempr = (ap.IsBound() ?
      op->GetProxy() :
      op->vtkSMSILModel::GetProxy());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMSILModel_GetProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSILModel *op = static_cast<vtkSMSILModel *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMStringVectorProperty *tempr = (ap.IsBound() ?
      op->GetProperty() :
      op->vtkSMSILModel::GetProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMSILModel_GetNumberOfChildren(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfChildren");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSILModel *op = static_cast<vtkSMSILModel *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfChildren(temp0) :
      op->vtkSMSILModel::GetNumberOfChildren(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMSILModel_GetChildVertex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetChildVertex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSILModel *op = static_cast<vtkSMSILModel *>(vp);

  vtkIdType temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetChildVertex(temp0, temp1) :
      op->vtkSMSILModel::GetChildVertex(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMSILModel_GetParentVertex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParentVertex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSILModel *op = static_cast<vtkSMSILModel *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetParentVertex(temp0) :
      op->vtkSMSILModel::GetParentVertex(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMSILModel_GetName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSILModel *op = static_cast<vtkSMSILModel *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetName(temp0) :
      op->vtkSMSILModel::GetName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMSILModel_GetCheckStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCheckStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSILModel *op = static_cast<vtkSMSILModel *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCheckStatus(temp0) :
      op->vtkSMSILModel::GetCheckStatus(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMSILModel_SetCheckState_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCheckState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSILModel *op = static_cast<vtkSMSILModel *>(vp);

  vtkIdType temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    bool tempr = (ap.IsBound() ?
      op->SetCheckState(temp0, temp1) :
      op->vtkSMSILModel::SetCheckState(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMSILModel_SetCheckState_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCheckState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSILModel *op = static_cast<vtkSMSILModel *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    bool tempr = (ap.IsBound() ?
      op->SetCheckState(temp0, temp1) :
      op->vtkSMSILModel::SetCheckState(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSMSILModel_SetCheckState_Methods[] = {
  {nullptr, PyvtkSMSILModel_SetCheckState_s1, METH_VARARGS,
   "@ki"},
  {nullptr, PyvtkSMSILModel_SetCheckState_s2, METH_VARARGS,
   "@zi"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSMSILModel_SetCheckState(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSMSILModel_SetCheckState_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetCheckState");
  return nullptr;
}



static PyObject *
PyvtkSMSILModel_CheckAll(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CheckAll");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSILModel *op = static_cast<vtkSMSILModel *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CheckAll();
    }
    else
    {
      op->vtkSMSILModel::CheckAll();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMSILModel_UncheckAll(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UncheckAll");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSILModel *op = static_cast<vtkSMSILModel *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UncheckAll();
    }
    else
    {
      op->vtkSMSILModel::UncheckAll();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMSILModel_UpdatePropertyValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdatePropertyValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSILModel *op = static_cast<vtkSMSILModel *>(vp);

  vtkSMStringVectorProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMStringVectorProperty"))
  {
    if (ap.IsBound())
    {
      op->UpdatePropertyValue(temp0);
    }
    else
    {
      op->vtkSMSILModel::UpdatePropertyValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMSILModel_UpdateStateFromProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateStateFromProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSILModel *op = static_cast<vtkSMSILModel *>(vp);

  vtkSMStringVectorProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMStringVectorProperty"))
  {
    if (ap.IsBound())
    {
      op->UpdateStateFromProperty(temp0);
    }
    else
    {
      op->vtkSMSILModel::UpdateStateFromProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMSILModel_FindVertex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindVertex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSILModel *op = static_cast<vtkSMSILModel *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->FindVertex(temp0) :
      op->vtkSMSILModel::FindVertex(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSMSILModel_Methods[] = {
  {"IsTypeOf", PyvtkSMSILModel_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMSILModel_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMSILModel_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSMSILModel\nC++: static vtkSMSILModel *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMSILModel_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSMSILModel\nC++: vtkSMSILModel *NewInstance()\n\n"},
  {"Initialize", PyvtkSMSILModel_Initialize, METH_VARARGS,
   "V.Initialize(vtkGraph)\nC++: void Initialize(vtkGraph *sil)\nV.Initialize(vtkSMProxy, vtkSMStringVectorProperty)\nC++: void Initialize(vtkSMProxy *, vtkSMStringVectorProperty *)\n\nInitialize the model using a SIL. There are two ways of\ninitializing the model:\n\\li One way is to initialize it with a SIL (using\n    Initialize(vtkGraph*).\nThen the model can be used as a simple API to check/uncheck\nelements.\n\\li Second way is to initialize with a proxy and property (using\nInitialize(vtkSMProxy, vtkSMProperty*). In that case, the SIL is\nobtained from  the property's vtkSMSILDomain. Also as the user\nchanges the check states, the property is updated/pushed.\n"},
  {"GetSIL", PyvtkSMSILModel_GetSIL, METH_VARARGS,
   "V.GetSIL() -> vtkGraph\nC++: virtual vtkGraph *GetSIL()\n\nInitialize the model using a SIL. There are two ways of\ninitializing the model:\n\\li One way is to initialize it with a SIL (using\n    Initialize(vtkGraph*).\nThen the model can be used as a simple API to check/uncheck\nelements.\n\\li Second way is to initialize with a proxy and property (using\nInitialize(vtkSMProxy, vtkSMProperty*). In that case, the SIL is\nobtained from  the property's vtkSMSILDomain. Also as the user\nchanges the check states, the property is updated/pushed.\n"},
  {"GetProxy", PyvtkSMSILModel_GetProxy, METH_VARARGS,
   "V.GetProxy() -> vtkSMProxy\nC++: virtual vtkSMProxy *GetProxy()\n\nInitialize the model using a proxy and its property. If a\nproperty is set, then the model keeps the property updated when\nthe check states are changed or when the property changes, the\nmodel's internal check states are updated. If the property has a\nSILDomain, then the model attaches itself to the domain so that\nwhenever the domains is updated (i.e. a new SIL is obtained from\nthe server) the model updates the sil as well.\n\n* There are two ways of initializing the model:\n* \\li One way is to initialize it with a SIL (using\n  Initialize(vtkGraph*).\n* Then the model can be used as a simple API to check/uncheck\n  elements.\n* \\li Second way is to initialize with a proxy and property\n  (using\n* Initialize(vtkSMProxy, vtkSMProperty*). In that case, the SIL\n  is obtained\n* from  the property's vtkSMSILDomain. Also as the user changes\n  the check\n* states, the property is updated/pushed.\n"},
  {"GetProperty", PyvtkSMSILModel_GetProperty, METH_VARARGS,
   "V.GetProperty() -> vtkSMStringVectorProperty\nC++: virtual vtkSMStringVectorProperty *GetProperty()\n\nInitialize the model using a proxy and its property. If a\nproperty is set, then the model keeps the property updated when\nthe check states are changed or when the property changes, the\nmodel's internal check states are updated. If the property has a\nSILDomain, then the model attaches itself to the domain so that\nwhenever the domains is updated (i.e. a new SIL is obtained from\nthe server) the model updates the sil as well.\n\n* There are two ways of initializing the model:\n* \\li One way is to initialize it with a SIL (using\n  Initialize(vtkGraph*).\n* Then the model can be used as a simple API to check/uncheck\n  elements.\n* \\li Second way is to initialize with a proxy and property\n  (using\n* Initialize(vtkSMProxy, vtkSMProperty*). In that case, the SIL\n  is obtained\n* from  the property's vtkSMSILDomain. Also as the user changes\n  the check\n* states, the property is updated/pushed.\n"},
  {"GetNumberOfChildren", PyvtkSMSILModel_GetNumberOfChildren, METH_VARARGS,
   "V.GetNumberOfChildren(int) -> int\nC++: int GetNumberOfChildren(vtkIdType vertexid)\n\nReturns the number of children for the given vertex. A node is a\nchild node if it has no out-going edges or all out-going edges\nhave \"CrossEdges\" set to 1. If vertex id is invalid, returns -1.\n"},
  {"GetChildVertex", PyvtkSMSILModel_GetChildVertex, METH_VARARGS,
   "V.GetChildVertex(int, int) -> int\nC++: vtkIdType GetChildVertex(vtkIdType parentid, int child_index)\n\nReturns the vertex id for the n-th child where n=child_index.\nReturns 0 if request is invalid.\n"},
  {"GetParentVertex", PyvtkSMSILModel_GetParentVertex, METH_VARARGS,
   "V.GetParentVertex(int) -> int\nC++: vtkIdType GetParentVertex(vtkIdType parent)\n\nReturns the parent vertex i.e. the vertex at the end of an\nin-edge which is not a cross-edge. It's an error to call this\nmethod for the root vertex id i.e. 0.\n"},
  {"GetName", PyvtkSMSILModel_GetName, METH_VARARGS,
   "V.GetName(int) -> string\nC++: const char *GetName(vtkIdType vertex)\n\nGet the name for the vertex.\n"},
  {"GetCheckStatus", PyvtkSMSILModel_GetCheckStatus, METH_VARARGS,
   "V.GetCheckStatus(int) -> int\nC++: int GetCheckStatus(vtkIdType vertex)\n\nGet the check state for a vertex.\n"},
  {"SetCheckState", PyvtkSMSILModel_SetCheckState, METH_VARARGS,
   "V.SetCheckState(int, int) -> bool\nC++: bool SetCheckState(vtkIdType vertex, int status)\nV.SetCheckState(string, int) -> bool\nC++: bool SetCheckState(const char *name, int status)\n\nSet the check state for a vertex. Returns true if the status was\nchanged, false if unaffected.\n"},
  {"CheckAll", PyvtkSMSILModel_CheckAll, METH_VARARGS,
   "V.CheckAll()\nC++: void CheckAll()\n\nConvenience methods to check/uncheck all items.\n"},
  {"UncheckAll", PyvtkSMSILModel_UncheckAll, METH_VARARGS,
   "V.UncheckAll()\nC++: void UncheckAll()\n\nConvenience methods to check/uncheck all items.\n"},
  {"UpdatePropertyValue", PyvtkSMSILModel_UpdatePropertyValue, METH_VARARGS,
   "V.UpdatePropertyValue(vtkSMStringVectorProperty)\nC++: void UpdatePropertyValue(vtkSMStringVectorProperty *)\n\nUpdates the property using the check states maintained by the\nmodel.\n"},
  {"UpdateStateFromProperty", PyvtkSMSILModel_UpdateStateFromProperty, METH_VARARGS,
   "V.UpdateStateFromProperty(vtkSMStringVectorProperty)\nC++: void UpdateStateFromProperty(vtkSMStringVectorProperty *)\n\nUpdates the check states maintained internally by the model using\nthe status from the property.\n"},
  {"FindVertex", PyvtkSMSILModel_FindVertex, METH_VARARGS,
   "V.FindVertex(string) -> int\nC++: vtkIdType FindVertex(const char *name)\n\nLocate a vertex with the given name. Returns -1 if the vertex is\nnot found.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMSILModel_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerCorePython.vtkSMSILModel", // tp_name
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
  PyvtkSMSILModel_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSMSILModel_StaticNew()
{
  return vtkSMSILModel::New();
}

PyObject *PyvtkSMSILModel_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMSILModel_Type, PyvtkSMSILModel_Methods,
    "vtkSMSILModel",
 &PyvtkSMSILModel_StaticNew);

  PyTypeObject *pytype = &PyvtkSMSILModel_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkSMObject_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkSMSILModel_CheckState_Type);
  PyvtkSMSILModel_CheckState_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkSMSILModel_CheckState_Type);

  o = (PyObject *)&PyvtkSMSILModel_CheckState_Type;
  if (PyDict_SetItemString(d, "CheckState", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 3; c++)
  {
    typedef vtkSMSILModel::CheckState cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[3] = {
        { "UNCHECKED", vtkSMSILModel::UNCHECKED },
        { "PARTIAL", vtkSMSILModel::PARTIAL },
        { "CHECKED", vtkSMSILModel::CHECKED },
      };

    o = PyvtkSMSILModel_CheckState_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSMSILModel(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMSILModel_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMSILModel", o) != 0)
  {
    Py_DECREF(o);
  }

}

