// python wrapper for vtkSelection
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
#include "vtkStdString.h"
#include "vtkSignedCharArray.h"
#include "vtkSelection.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSelection(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSelection_ClassNew(); }

#ifndef DECLARED_PyvtkDataObject_ClassNew
extern "C" { PyObject *PyvtkDataObject_ClassNew(); }
#define DECLARED_PyvtkDataObject_ClassNew
#endif

static const char *PyvtkSelection_Doc =
  "vtkSelection - data object that represents a \"selection\" in VTK.\n\n"
  "Superclass: vtkDataObject\n\n"
  "vtkSelection is a data object that represents a selection definition.\n"
  "It is used to define the elements that are selected. The criteria of\n"
  "the selection is defined using one or more vtkSelectionNode\n"
  "instances. Parameters of the vtkSelectionNode define what kind of\n"
  "elements are being selected (vtkSelectionNode::GetFieldType), how the\n"
  "selection criteria is defined (vtkSelectionNode::GetContentType),\n"
  "etc.\n\n"
  "Filters like vtkExtractSelection, vtkExtractDataArraysOverTime can be\n"
  "used to extract the selected elements from a dataset.\n\n"
  "@section CombiningSelection Combining Selections\n\n"
  "When a vtkSelection contains multiple vtkSelectionNode instances, the\n"
  "selection defined is a union of all the elements identified by each\n"
  "of the nodes.\n\n"
  "Optionally, one can use `vtkSelection::SetExpression` to define a\n"
  "boolean expression to build arbitrarily complex combinations. The\n"
  "expression can be defined using names assigned to the selection nodes\n"
  "when the nodes are added to vtkSelection (either explicitly or\n"
  "automatically).\n\n"
  "@sa\n"
  "vtkSelectionNode\n\n";


static PyObject *
PyvtkSelection_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSelection::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelection_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelection *op = static_cast<vtkSelection *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSelection::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelection_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSelection *tempr = vtkSelection::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelection_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelection *op = static_cast<vtkSelection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSelection *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSelection::NewInstance());

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
PyvtkSelection_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelection *op = static_cast<vtkSelection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Initialize();
    }
    else
    {
      op->vtkSelection::Initialize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSelection_GetDataObjectType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataObjectType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelection *op = static_cast<vtkSelection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataObjectType() :
      op->vtkSelection::GetDataObjectType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelection_GetNumberOfNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelection *op = static_cast<vtkSelection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfNodes() :
      op->vtkSelection::GetNumberOfNodes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelection_GetNode_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelection *op = static_cast<vtkSelection *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkSelectionNode *tempr = (ap.IsBound() ?
      op->GetNode(temp0) :
      op->vtkSelection::GetNode(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSelection_GetNode_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelection *op = static_cast<vtkSelection *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkSelectionNode *tempr = (ap.IsBound() ?
      op->GetNode(temp0) :
      op->vtkSelection::GetNode(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSelection_GetNode_Methods[] = {
  {nullptr, PyvtkSelection_GetNode_s1, METH_VARARGS,
   "@I"},
  {nullptr, PyvtkSelection_GetNode_s2, METH_VARARGS,
   "@s"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSelection_GetNode(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSelection_GetNode_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetNode");
  return nullptr;
}



static PyObject *
PyvtkSelection_AddNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelection *op = static_cast<vtkSelection *>(vp);

  vtkSelectionNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSelectionNode"))
  {
    std::string tempr = (ap.IsBound() ?
      op->AddNode(temp0) :
      op->vtkSelection::AddNode(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelection_SetNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelection *op = static_cast<vtkSelection *>(vp);

  std::string temp0;
  vtkSelectionNode *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkSelectionNode"))
  {
    if (ap.IsBound())
    {
      op->SetNode(temp0, temp1);
    }
    else
    {
      op->vtkSelection::SetNode(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSelection_GetNodeNameAtIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeNameAtIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelection *op = static_cast<vtkSelection *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetNodeNameAtIndex(temp0) :
      op->vtkSelection::GetNodeNameAtIndex(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelection_RemoveNode_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelection *op = static_cast<vtkSelection *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RemoveNode(temp0);
    }
    else
    {
      op->vtkSelection::RemoveNode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSelection_RemoveNode_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelection *op = static_cast<vtkSelection *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RemoveNode(temp0);
    }
    else
    {
      op->vtkSelection::RemoveNode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSelection_RemoveNode_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelection *op = static_cast<vtkSelection *>(vp);

  vtkSelectionNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSelectionNode"))
  {
    if (ap.IsBound())
    {
      op->RemoveNode(temp0);
    }
    else
    {
      op->vtkSelection::RemoveNode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSelection_RemoveNode_Methods[] = {
  {nullptr, PyvtkSelection_RemoveNode_s1, METH_VARARGS,
   "@I"},
  {nullptr, PyvtkSelection_RemoveNode_s2, METH_VARARGS,
   "@s"},
  {nullptr, PyvtkSelection_RemoveNode_s3, METH_VARARGS,
   "@V *vtkSelectionNode"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSelection_RemoveNode(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSelection_RemoveNode_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "RemoveNode");
  return nullptr;
}



static PyObject *
PyvtkSelection_RemoveAllNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelection *op = static_cast<vtkSelection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllNodes();
    }
    else
    {
      op->vtkSelection::RemoveAllNodes();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSelection_SetExpression(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExpression");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelection *op = static_cast<vtkSelection *>(vp);

  std::string temp0;
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
      op->vtkSelection::SetExpression(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSelection_GetExpression(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExpression");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelection *op = static_cast<vtkSelection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetExpression() :
      op->vtkSelection::GetExpression());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelection_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelection *op = static_cast<vtkSelection *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->DeepCopy(temp0);
    }
    else
    {
      op->vtkSelection::DeepCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSelection_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelection *op = static_cast<vtkSelection *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->ShallowCopy(temp0);
    }
    else
    {
      op->vtkSelection::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSelection_Union_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Union");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelection *op = static_cast<vtkSelection *>(vp);

  vtkSelection *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSelection"))
  {
    if (ap.IsBound())
    {
      op->Union(temp0);
    }
    else
    {
      op->vtkSelection::Union(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSelection_Union_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Union");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelection *op = static_cast<vtkSelection *>(vp);

  vtkSelectionNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSelectionNode"))
  {
    if (ap.IsBound())
    {
      op->Union(temp0);
    }
    else
    {
      op->vtkSelection::Union(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSelection_Union_Methods[] = {
  {nullptr, PyvtkSelection_Union_s1, METH_VARARGS,
   "@V *vtkSelection"},
  {nullptr, PyvtkSelection_Union_s2, METH_VARARGS,
   "@V *vtkSelectionNode"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSelection_Union(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSelection_Union_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Union");
  return nullptr;
}



static PyObject *
PyvtkSelection_Subtract_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Subtract");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelection *op = static_cast<vtkSelection *>(vp);

  vtkSelection *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSelection"))
  {
    if (ap.IsBound())
    {
      op->Subtract(temp0);
    }
    else
    {
      op->vtkSelection::Subtract(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSelection_Subtract_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Subtract");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelection *op = static_cast<vtkSelection *>(vp);

  vtkSelectionNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSelectionNode"))
  {
    if (ap.IsBound())
    {
      op->Subtract(temp0);
    }
    else
    {
      op->vtkSelection::Subtract(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSelection_Subtract_Methods[] = {
  {nullptr, PyvtkSelection_Subtract_s1, METH_VARARGS,
   "@V *vtkSelection"},
  {nullptr, PyvtkSelection_Subtract_s2, METH_VARARGS,
   "@V *vtkSelectionNode"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSelection_Subtract(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSelection_Subtract_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Subtract");
  return nullptr;
}



static PyObject *
PyvtkSelection_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelection *op = static_cast<vtkSelection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkSelection::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelection_Dump(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Dump");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelection *op = static_cast<vtkSelection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Dump();
    }
    else
    {
      op->vtkSelection::Dump();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSelection_GetData_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
  {
    vtkSelection *tempr = vtkSelection::GetData(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSelection_GetData_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformationVector *temp0 = nullptr;
  int temp1 = 0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkInformationVector") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    vtkSelection *tempr = vtkSelection::GetData(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSelection_GetData_Methods[] = {
  {nullptr, PyvtkSelection_GetData_s1, METH_VARARGS | METH_STATIC,
   "V *vtkInformation"},
  {nullptr, PyvtkSelection_GetData_s2, METH_VARARGS | METH_STATIC,
   "V|i *vtkInformationVector"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSelection_GetData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSelection_GetData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 2:
      return PyvtkSelection_GetData_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetData");
  return nullptr;
}


static PyMethodDef PyvtkSelection_Methods[] = {
  {"IsTypeOf", PyvtkSelection_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSelection_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSelection_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSelection\nC++: static vtkSelection *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSelection_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSelection\nC++: vtkSelection *NewInstance()\n\n"},
  {"Initialize", PyvtkSelection_Initialize, METH_VARARGS,
   "V.Initialize()\nC++: void Initialize() override;\n\nRestore data object to initial state,\n"},
  {"GetDataObjectType", PyvtkSelection_GetDataObjectType, METH_VARARGS,
   "V.GetDataObjectType() -> int\nC++: int GetDataObjectType() override;\n\nReturns VTK_SELECTION enumeration value.\n"},
  {"GetNumberOfNodes", PyvtkSelection_GetNumberOfNodes, METH_VARARGS,
   "V.GetNumberOfNodes() -> int\nC++: unsigned int GetNumberOfNodes()\n\nReturns the number of nodes in this selection. Each node contains\ninformation about part of the selection.\n"},
  {"GetNode", PyvtkSelection_GetNode, METH_VARARGS,
   "V.GetNode(int) -> vtkSelectionNode\nC++: virtual vtkSelectionNode *GetNode(unsigned int idx)\nV.GetNode(string) -> vtkSelectionNode\nC++: virtual vtkSelectionNode *GetNode(const std::string &name)\n\nReturns a node given it's index. Performs bound checking and will\nreturn nullptr if out-of-bounds.\n"},
  {"AddNode", PyvtkSelection_AddNode, METH_VARARGS,
   "V.AddNode(vtkSelectionNode) -> string\nC++: virtual std::string AddNode(vtkSelectionNode *)\n\nAdds a selection node. Assigns the node a unique name and returns\nthat name. This API is primarily provided for backwards\ncompatibility and `SetNode` is the preferred method.\n"},
  {"SetNode", PyvtkSelection_SetNode, METH_VARARGS,
   "V.SetNode(string, vtkSelectionNode)\nC++: virtual void SetNode(const std::string &name,\n    vtkSelectionNode *)\n\nAdds a vtkSelectionNode and assigns it the specified name. The\nname must be a non-empty string. If an item with the same name\nhas already been added, it will be removed.\n"},
  {"GetNodeNameAtIndex", PyvtkSelection_GetNodeNameAtIndex, METH_VARARGS,
   "V.GetNodeNameAtIndex(int) -> string\nC++: virtual std::string GetNodeNameAtIndex(unsigned int idx)\n\nReturns the name for a node at the given index.\n"},
  {"RemoveNode", PyvtkSelection_RemoveNode, METH_VARARGS,
   "V.RemoveNode(int)\nC++: virtual void RemoveNode(unsigned int idx)\nV.RemoveNode(string)\nC++: virtual void RemoveNode(const std::string &name)\nV.RemoveNode(vtkSelectionNode)\nC++: virtual void RemoveNode(vtkSelectionNode *)\n\nRemoves a selection node.\n"},
  {"RemoveAllNodes", PyvtkSelection_RemoveAllNodes, METH_VARARGS,
   "V.RemoveAllNodes()\nC++: virtual void RemoveAllNodes()\n\nRemoves all selection nodes.\n"},
  {"SetExpression", PyvtkSelection_SetExpression, METH_VARARGS,
   "V.SetExpression(string)\nC++: virtual void SetExpression(std::string _arg)\n\nGet/Set the expression that defines the boolean expression to\ncombine the selection nodes. Expression consists of node name\nidentifiers, `|` for boolean-or, '&' for boolean and, '!' for\nboolean not, and parenthesis `(` and `)`. If the expression\nconsists of a node name identifier that is not assigned any\n`vtkSelectionNode` (using `SetNode`) then it is evaluates to\n`false`.\n\n`SetExpression` does not validate the expression. It will be\nvalidated in `Evaluate` call.\n"},
  {"GetExpression", PyvtkSelection_GetExpression, METH_VARARGS,
   "V.GetExpression() -> string\nC++: virtual std::string GetExpression()\n\nGet/Set the expression that defines the boolean expression to\ncombine the selection nodes. Expression consists of node name\nidentifiers, `|` for boolean-or, '&' for boolean and, '!' for\nboolean not, and parenthesis `(` and `)`. If the expression\nconsists of a node name identifier that is not assigned any\n`vtkSelectionNode` (using `SetNode`) then it is evaluates to\n`false`.\n\n`SetExpression` does not validate the expression. It will be\nvalidated in `Evaluate` call.\n"},
  {"DeepCopy", PyvtkSelection_DeepCopy, METH_VARARGS,
   "V.DeepCopy(vtkDataObject)\nC++: void DeepCopy(vtkDataObject *src) override;\n\nCopy selection nodes of the input.\n"},
  {"ShallowCopy", PyvtkSelection_ShallowCopy, METH_VARARGS,
   "V.ShallowCopy(vtkDataObject)\nC++: void ShallowCopy(vtkDataObject *src) override;\n\nCopy selection nodes of the input. This is a shallow copy:\nselection lists and pointers in the properties are passed by\nreference.\n"},
  {"Union", PyvtkSelection_Union, METH_VARARGS,
   "V.Union(vtkSelection)\nC++: virtual void Union(vtkSelection *selection)\nV.Union(vtkSelectionNode)\nC++: virtual void Union(vtkSelectionNode *node)\n\nUnion this selection with the specified selection. Attempts to\nreuse selection nodes in this selection if properties match\nexactly. Otherwise, creates new selection nodes.\n"},
  {"Subtract", PyvtkSelection_Subtract, METH_VARARGS,
   "V.Subtract(vtkSelection)\nC++: virtual void Subtract(vtkSelection *selection)\nV.Subtract(vtkSelectionNode)\nC++: virtual void Subtract(vtkSelectionNode *node)\n\nRemove the nodes from the specified selection from this\nselection. Assumes that selection node internal arrays are\nvtkIdTypeArrays.\n"},
  {"GetMTime", PyvtkSelection_GetMTime, METH_VARARGS,
   "V.GetMTime() -> int\nC++: vtkMTimeType GetMTime() override;\n\nReturn the MTime taking into account changes to the properties\n"},
  {"Dump", PyvtkSelection_Dump, METH_VARARGS,
   "V.Dump()\nC++: virtual void Dump()\n\nDumps the contents of the selection, giving basic information\nonly.\n"},
  {"GetData", PyvtkSelection_GetData, METH_VARARGS,
   "V.GetData(vtkInformation) -> vtkSelection\nC++: static vtkSelection *GetData(vtkInformation *info)\nV.GetData(vtkInformationVector, int) -> vtkSelection\nC++: static vtkSelection *GetData(vtkInformationVector *v,\n    int i=0)\n\nRetrieve a vtkSelection stored inside an invormation object.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSelection_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonDataModelPython.vtkSelection", // tp_name
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
  PyvtkSelection_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSelection_StaticNew()
{
  return vtkSelection::New();
}

PyObject *PyvtkSelection_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSelection_Type, PyvtkSelection_Methods,
    "vtkSelection",
 &PyvtkSelection_StaticNew);

  PyTypeObject *pytype = &PyvtkSelection_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkDataObject_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSelection(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSelection_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSelection", o) != 0)
  {
    Py_DECREF(o);
  }

}

