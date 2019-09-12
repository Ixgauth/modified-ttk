// python wrapper for vtkConvertSelection
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
#include "vtkConvertSelection.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkConvertSelection(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkConvertSelection_ClassNew(); }

#ifndef DECLARED_PyvtkSelectionAlgorithm_ClassNew
extern "C" { PyObject *PyvtkSelectionAlgorithm_ClassNew(); }
#define DECLARED_PyvtkSelectionAlgorithm_ClassNew
#endif

static const char *PyvtkConvertSelection_Doc =
  "vtkConvertSelection - Convert a selection from one type to another\n\n"
  "Superclass: vtkSelectionAlgorithm\n\n"
  "vtkConvertSelection converts an input selection from one type to\n"
  "another in the context of a data object being selected. The first\n"
  "input is the selection, while the second input is the data object\n"
  "that the selection relates to.\n\n"
  "@sa\n"
  "vtkSelection vtkSelectionNode vtkExtractSelection\n"
  "vtkExtractSelectedGraph\n\n";


static PyObject *
PyvtkConvertSelection_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkConvertSelection::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConvertSelection_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvertSelection *op = static_cast<vtkConvertSelection *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkConvertSelection::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConvertSelection_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkConvertSelection *tempr = vtkConvertSelection::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConvertSelection_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvertSelection *op = static_cast<vtkConvertSelection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkConvertSelection *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkConvertSelection::NewInstance());

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
PyvtkConvertSelection_SetDataObjectConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataObjectConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvertSelection *op = static_cast<vtkConvertSelection *>(vp);

  vtkAlgorithmOutput *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
  {
    if (ap.IsBound())
    {
      op->SetDataObjectConnection(temp0);
    }
    else
    {
      op->vtkConvertSelection::SetDataObjectConnection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConvertSelection_SetInputFieldType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputFieldType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvertSelection *op = static_cast<vtkConvertSelection *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInputFieldType(temp0);
    }
    else
    {
      op->vtkConvertSelection::SetInputFieldType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConvertSelection_GetInputFieldType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputFieldType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvertSelection *op = static_cast<vtkConvertSelection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInputFieldType() :
      op->vtkConvertSelection::GetInputFieldType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConvertSelection_SetOutputType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvertSelection *op = static_cast<vtkConvertSelection *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOutputType(temp0);
    }
    else
    {
      op->vtkConvertSelection::SetOutputType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConvertSelection_GetOutputType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvertSelection *op = static_cast<vtkConvertSelection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputType() :
      op->vtkConvertSelection::GetOutputType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConvertSelection_SetArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvertSelection *op = static_cast<vtkConvertSelection *>(vp);

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
      op->vtkConvertSelection::SetArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConvertSelection_GetArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvertSelection *op = static_cast<vtkConvertSelection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetArrayName() :
      op->vtkConvertSelection::GetArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConvertSelection_SetArrayNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArrayNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvertSelection *op = static_cast<vtkConvertSelection *>(vp);

  vtkStringArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkStringArray"))
  {
    if (ap.IsBound())
    {
      op->SetArrayNames(temp0);
    }
    else
    {
      op->vtkConvertSelection::SetArrayNames(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConvertSelection_GetArrayNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvertSelection *op = static_cast<vtkConvertSelection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStringArray *tempr = (ap.IsBound() ?
      op->GetArrayNames() :
      op->vtkConvertSelection::GetArrayNames());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConvertSelection_AddArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvertSelection *op = static_cast<vtkConvertSelection *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->AddArrayName(temp0);
    }
    else
    {
      op->vtkConvertSelection::AddArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConvertSelection_ClearArrayNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearArrayNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvertSelection *op = static_cast<vtkConvertSelection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearArrayNames();
    }
    else
    {
      op->vtkConvertSelection::ClearArrayNames();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConvertSelection_SetMatchAnyValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMatchAnyValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvertSelection *op = static_cast<vtkConvertSelection *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMatchAnyValues(temp0);
    }
    else
    {
      op->vtkConvertSelection::SetMatchAnyValues(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConvertSelection_GetMatchAnyValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMatchAnyValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvertSelection *op = static_cast<vtkConvertSelection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetMatchAnyValues() :
      op->vtkConvertSelection::GetMatchAnyValues());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConvertSelection_MatchAnyValuesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MatchAnyValuesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvertSelection *op = static_cast<vtkConvertSelection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MatchAnyValuesOn();
    }
    else
    {
      op->vtkConvertSelection::MatchAnyValuesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConvertSelection_MatchAnyValuesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MatchAnyValuesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvertSelection *op = static_cast<vtkConvertSelection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MatchAnyValuesOff();
    }
    else
    {
      op->vtkConvertSelection::MatchAnyValuesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConvertSelection_SetAllowMissingArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAllowMissingArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvertSelection *op = static_cast<vtkConvertSelection *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAllowMissingArray(temp0);
    }
    else
    {
      op->vtkConvertSelection::SetAllowMissingArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConvertSelection_GetAllowMissingArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAllowMissingArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvertSelection *op = static_cast<vtkConvertSelection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetAllowMissingArray() :
      op->vtkConvertSelection::GetAllowMissingArray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConvertSelection_AllowMissingArrayOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllowMissingArrayOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvertSelection *op = static_cast<vtkConvertSelection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AllowMissingArrayOn();
    }
    else
    {
      op->vtkConvertSelection::AllowMissingArrayOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConvertSelection_AllowMissingArrayOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllowMissingArrayOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvertSelection *op = static_cast<vtkConvertSelection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AllowMissingArrayOff();
    }
    else
    {
      op->vtkConvertSelection::AllowMissingArrayOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConvertSelection_SetSelectionExtractor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectionExtractor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvertSelection *op = static_cast<vtkConvertSelection *>(vp);

  vtkExtractSelection *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkExtractSelection"))
  {
    if (ap.IsBound())
    {
      op->SetSelectionExtractor(temp0);
    }
    else
    {
      op->vtkConvertSelection::SetSelectionExtractor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConvertSelection_GetSelectionExtractor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectionExtractor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvertSelection *op = static_cast<vtkConvertSelection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkExtractSelection *tempr = (ap.IsBound() ?
      op->GetSelectionExtractor() :
      op->vtkConvertSelection::GetSelectionExtractor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConvertSelection_ToIndexSelection(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ToIndexSelection");

  vtkSelection *temp0 = nullptr;
  vtkDataObject *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSelection") &&
      ap.GetVTKObject(temp1, "vtkDataObject"))
  {
    vtkSelection *tempr = vtkConvertSelection::ToIndexSelection(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConvertSelection_ToGlobalIdSelection(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ToGlobalIdSelection");

  vtkSelection *temp0 = nullptr;
  vtkDataObject *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSelection") &&
      ap.GetVTKObject(temp1, "vtkDataObject"))
  {
    vtkSelection *tempr = vtkConvertSelection::ToGlobalIdSelection(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConvertSelection_ToPedigreeIdSelection(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ToPedigreeIdSelection");

  vtkSelection *temp0 = nullptr;
  vtkDataObject *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSelection") &&
      ap.GetVTKObject(temp1, "vtkDataObject"))
  {
    vtkSelection *tempr = vtkConvertSelection::ToPedigreeIdSelection(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConvertSelection_ToValueSelection_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ToValueSelection");

  vtkSelection *temp0 = nullptr;
  vtkDataObject *temp1 = nullptr;
  const char *temp2 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkSelection") &&
      ap.GetVTKObject(temp1, "vtkDataObject") &&
      ap.GetValue(temp2))
  {
    vtkSelection *tempr = vtkConvertSelection::ToValueSelection(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkConvertSelection_ToValueSelection_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ToValueSelection");

  vtkSelection *temp0 = nullptr;
  vtkDataObject *temp1 = nullptr;
  vtkStringArray *temp2 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkSelection") &&
      ap.GetVTKObject(temp1, "vtkDataObject") &&
      ap.GetVTKObject(temp2, "vtkStringArray"))
  {
    vtkSelection *tempr = vtkConvertSelection::ToValueSelection(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkConvertSelection_ToValueSelection_Methods[] = {
  {nullptr, PyvtkConvertSelection_ToValueSelection_s1, METH_VARARGS | METH_STATIC,
   "VVz *vtkSelection *vtkDataObject"},
  {nullptr, PyvtkConvertSelection_ToValueSelection_s2, METH_VARARGS | METH_STATIC,
   "VVV *vtkSelection *vtkDataObject *vtkStringArray"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkConvertSelection_ToValueSelection(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkConvertSelection_ToValueSelection_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "ToValueSelection");
  return nullptr;
}



static PyObject *
PyvtkConvertSelection_GetSelectedItems(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetSelectedItems");

  vtkSelection *temp0 = nullptr;
  vtkDataObject *temp1 = nullptr;
  int temp2;
  vtkIdTypeArray *temp3 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkSelection") &&
      ap.GetVTKObject(temp1, "vtkDataObject") &&
      ap.GetValue(temp2) &&
      ap.GetVTKObject(temp3, "vtkIdTypeArray"))
  {
    vtkConvertSelection::GetSelectedItems(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConvertSelection_GetSelectedVertices(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetSelectedVertices");

  vtkSelection *temp0 = nullptr;
  vtkGraph *temp1 = nullptr;
  vtkIdTypeArray *temp2 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkSelection") &&
      ap.GetVTKObject(temp1, "vtkGraph") &&
      ap.GetVTKObject(temp2, "vtkIdTypeArray"))
  {
    vtkConvertSelection::GetSelectedVertices(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConvertSelection_GetSelectedEdges(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetSelectedEdges");

  vtkSelection *temp0 = nullptr;
  vtkGraph *temp1 = nullptr;
  vtkIdTypeArray *temp2 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkSelection") &&
      ap.GetVTKObject(temp1, "vtkGraph") &&
      ap.GetVTKObject(temp2, "vtkIdTypeArray"))
  {
    vtkConvertSelection::GetSelectedEdges(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConvertSelection_GetSelectedPoints(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetSelectedPoints");

  vtkSelection *temp0 = nullptr;
  vtkDataSet *temp1 = nullptr;
  vtkIdTypeArray *temp2 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkSelection") &&
      ap.GetVTKObject(temp1, "vtkDataSet") &&
      ap.GetVTKObject(temp2, "vtkIdTypeArray"))
  {
    vtkConvertSelection::GetSelectedPoints(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConvertSelection_GetSelectedCells(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetSelectedCells");

  vtkSelection *temp0 = nullptr;
  vtkDataSet *temp1 = nullptr;
  vtkIdTypeArray *temp2 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkSelection") &&
      ap.GetVTKObject(temp1, "vtkDataSet") &&
      ap.GetVTKObject(temp2, "vtkIdTypeArray"))
  {
    vtkConvertSelection::GetSelectedCells(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConvertSelection_GetSelectedRows(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetSelectedRows");

  vtkSelection *temp0 = nullptr;
  vtkTable *temp1 = nullptr;
  vtkIdTypeArray *temp2 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkSelection") &&
      ap.GetVTKObject(temp1, "vtkTable") &&
      ap.GetVTKObject(temp2, "vtkIdTypeArray"))
  {
    vtkConvertSelection::GetSelectedRows(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConvertSelection_ToSelectionType(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ToSelectionType");

  vtkSelection *temp0 = nullptr;
  vtkDataObject *temp1 = nullptr;
  int temp2;
  vtkStringArray *temp3 = nullptr;
  int temp4 = -1;
  bool temp5 = false;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3, 6) &&
      ap.GetVTKObject(temp0, "vtkSelection") &&
      ap.GetVTKObject(temp1, "vtkDataObject") &&
      ap.GetValue(temp2) &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp3, "vtkStringArray")) &&
      (ap.NoArgsLeft() || ap.GetValue(temp4)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp5)))
  {
    vtkSelection *tempr = vtkConvertSelection::ToSelectionType(temp0, temp1, temp2, temp3, temp4, temp5);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkConvertSelection_Methods[] = {
  {"IsTypeOf", PyvtkConvertSelection_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkConvertSelection_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkConvertSelection_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkConvertSelection\nC++: static vtkConvertSelection *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkConvertSelection_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkConvertSelection\nC++: vtkConvertSelection *NewInstance()\n\n"},
  {"SetDataObjectConnection", PyvtkConvertSelection_SetDataObjectConnection, METH_VARARGS,
   "V.SetDataObjectConnection(vtkAlgorithmOutput)\nC++: void SetDataObjectConnection(vtkAlgorithmOutput *in)\n\nA convenience method for setting the second input (i.e. the data\nobject).\n"},
  {"SetInputFieldType", PyvtkConvertSelection_SetInputFieldType, METH_VARARGS,
   "V.SetInputFieldType(int)\nC++: virtual void SetInputFieldType(int _arg)\n\nThe input field type. If this is set to a number other than -1,\nignores the input selection field type and instead assumes that\nall selection nodes have the field type specified. This should be\none of the constants defined in vtkSelectionNode.h. Default is\n-1.\n"},
  {"GetInputFieldType", PyvtkConvertSelection_GetInputFieldType, METH_VARARGS,
   "V.GetInputFieldType() -> int\nC++: virtual int GetInputFieldType()\n\nThe input field type. If this is set to a number other than -1,\nignores the input selection field type and instead assumes that\nall selection nodes have the field type specified. This should be\none of the constants defined in vtkSelectionNode.h. Default is\n-1.\n"},
  {"SetOutputType", PyvtkConvertSelection_SetOutputType, METH_VARARGS,
   "V.SetOutputType(int)\nC++: virtual void SetOutputType(int _arg)\n\nThe output selection content type. This should be one of the\nconstants defined in vtkSelectionNode.h.\n"},
  {"GetOutputType", PyvtkConvertSelection_GetOutputType, METH_VARARGS,
   "V.GetOutputType() -> int\nC++: virtual int GetOutputType()\n\nThe output selection content type. This should be one of the\nconstants defined in vtkSelectionNode.h.\n"},
  {"SetArrayName", PyvtkConvertSelection_SetArrayName, METH_VARARGS,
   "V.SetArrayName(string)\nC++: virtual void SetArrayName(const char *)\n\nThe output array name for value or threshold selections.\n"},
  {"GetArrayName", PyvtkConvertSelection_GetArrayName, METH_VARARGS,
   "V.GetArrayName() -> string\nC++: virtual const char *GetArrayName()\n\nThe output array name for value or threshold selections.\n"},
  {"SetArrayNames", PyvtkConvertSelection_SetArrayNames, METH_VARARGS,
   "V.SetArrayNames(vtkStringArray)\nC++: virtual void SetArrayNames(vtkStringArray *)\n\nThe output array names for value selection.\n"},
  {"GetArrayNames", PyvtkConvertSelection_GetArrayNames, METH_VARARGS,
   "V.GetArrayNames() -> vtkStringArray\nC++: virtual vtkStringArray *GetArrayNames()\n\nThe output array names for value selection.\n"},
  {"AddArrayName", PyvtkConvertSelection_AddArrayName, METH_VARARGS,
   "V.AddArrayName(string)\nC++: void AddArrayName(const char *)\n\nConvenience methods used by UI\n"},
  {"ClearArrayNames", PyvtkConvertSelection_ClearArrayNames, METH_VARARGS,
   "V.ClearArrayNames()\nC++: void ClearArrayNames()\n\nConvenience methods used by UI\n"},
  {"SetMatchAnyValues", PyvtkConvertSelection_SetMatchAnyValues, METH_VARARGS,
   "V.SetMatchAnyValues(bool)\nC++: virtual void SetMatchAnyValues(bool _arg)\n\nWhen on, creates a separate selection node for each array.\nDefaults to OFF.\n"},
  {"GetMatchAnyValues", PyvtkConvertSelection_GetMatchAnyValues, METH_VARARGS,
   "V.GetMatchAnyValues() -> bool\nC++: virtual bool GetMatchAnyValues()\n\nWhen on, creates a separate selection node for each array.\nDefaults to OFF.\n"},
  {"MatchAnyValuesOn", PyvtkConvertSelection_MatchAnyValuesOn, METH_VARARGS,
   "V.MatchAnyValuesOn()\nC++: virtual void MatchAnyValuesOn()\n\nWhen on, creates a separate selection node for each array.\nDefaults to OFF.\n"},
  {"MatchAnyValuesOff", PyvtkConvertSelection_MatchAnyValuesOff, METH_VARARGS,
   "V.MatchAnyValuesOff()\nC++: virtual void MatchAnyValuesOff()\n\nWhen on, creates a separate selection node for each array.\nDefaults to OFF.\n"},
  {"SetAllowMissingArray", PyvtkConvertSelection_SetAllowMissingArray, METH_VARARGS,
   "V.SetAllowMissingArray(bool)\nC++: virtual void SetAllowMissingArray(bool _arg)\n\nWhen enabled, not finding expected array will not return an\nerror. Defaults to OFF.\n"},
  {"GetAllowMissingArray", PyvtkConvertSelection_GetAllowMissingArray, METH_VARARGS,
   "V.GetAllowMissingArray() -> bool\nC++: virtual bool GetAllowMissingArray()\n\nWhen enabled, not finding expected array will not return an\nerror. Defaults to OFF.\n"},
  {"AllowMissingArrayOn", PyvtkConvertSelection_AllowMissingArrayOn, METH_VARARGS,
   "V.AllowMissingArrayOn()\nC++: virtual void AllowMissingArrayOn()\n\nWhen enabled, not finding expected array will not return an\nerror. Defaults to OFF.\n"},
  {"AllowMissingArrayOff", PyvtkConvertSelection_AllowMissingArrayOff, METH_VARARGS,
   "V.AllowMissingArrayOff()\nC++: virtual void AllowMissingArrayOff()\n\nWhen enabled, not finding expected array will not return an\nerror. Defaults to OFF.\n"},
  {"SetSelectionExtractor", PyvtkConvertSelection_SetSelectionExtractor, METH_VARARGS,
   "V.SetSelectionExtractor(vtkExtractSelection)\nC++: virtual void SetSelectionExtractor(vtkExtractSelection *)\n\nSet/get a selection extractor used in some conversions to obtain\nIDs.\n"},
  {"GetSelectionExtractor", PyvtkConvertSelection_GetSelectionExtractor, METH_VARARGS,
   "V.GetSelectionExtractor() -> vtkExtractSelection\nC++: virtual vtkExtractSelection *GetSelectionExtractor()\n\nSet/get a selection extractor used in some conversions to obtain\nIDs.\n"},
  {"ToIndexSelection", PyvtkConvertSelection_ToIndexSelection, METH_VARARGS,
   "V.ToIndexSelection(vtkSelection, vtkDataObject) -> vtkSelection\nC++: static vtkSelection *ToIndexSelection(vtkSelection *input,\n    vtkDataObject *data)\n\nStatic methods for easily converting between selection types.\nNOTE: The returned selection pointer IS reference counted, so be\nsure to Delete() it when you are done with it.\n"},
  {"ToGlobalIdSelection", PyvtkConvertSelection_ToGlobalIdSelection, METH_VARARGS,
   "V.ToGlobalIdSelection(vtkSelection, vtkDataObject) -> vtkSelection\nC++: static vtkSelection *ToGlobalIdSelection(vtkSelection *input,\n     vtkDataObject *data)\n\nStatic methods for easily converting between selection types.\nNOTE: The returned selection pointer IS reference counted, so be\nsure to Delete() it when you are done with it.\n"},
  {"ToPedigreeIdSelection", PyvtkConvertSelection_ToPedigreeIdSelection, METH_VARARGS,
   "V.ToPedigreeIdSelection(vtkSelection, vtkDataObject)\n    -> vtkSelection\nC++: static vtkSelection *ToPedigreeIdSelection(\n    vtkSelection *input, vtkDataObject *data)\n\nStatic methods for easily converting between selection types.\nNOTE: The returned selection pointer IS reference counted, so be\nsure to Delete() it when you are done with it.\n"},
  {"ToValueSelection", PyvtkConvertSelection_ToValueSelection, METH_VARARGS,
   "V.ToValueSelection(vtkSelection, vtkDataObject, string)\n    -> vtkSelection\nC++: static vtkSelection *ToValueSelection(vtkSelection *input,\n    vtkDataObject *data, const char *arrayName)\nV.ToValueSelection(vtkSelection, vtkDataObject, vtkStringArray)\n    -> vtkSelection\nC++: static vtkSelection *ToValueSelection(vtkSelection *input,\n    vtkDataObject *data, vtkStringArray *arrayNames)\n\nStatic methods for easily converting between selection types.\nNOTE: The returned selection pointer IS reference counted, so be\nsure to Delete() it when you are done with it.\n"},
  {"GetSelectedItems", PyvtkConvertSelection_GetSelectedItems, METH_VARARGS,
   "V.GetSelectedItems(vtkSelection, vtkDataObject, int,\n    vtkIdTypeArray)\nC++: static void GetSelectedItems(vtkSelection *input,\n    vtkDataObject *data, int fieldType, vtkIdTypeArray *indices)\n\nStatic generic method for obtaining selected items from a data\nobject. Other static methods (e.g. GetSelectedVertices) call this\none.\n"},
  {"GetSelectedVertices", PyvtkConvertSelection_GetSelectedVertices, METH_VARARGS,
   "V.GetSelectedVertices(vtkSelection, vtkGraph, vtkIdTypeArray)\nC++: static void GetSelectedVertices(vtkSelection *input,\n    vtkGraph *data, vtkIdTypeArray *indices)\n\nStatic methods for easily obtaining selected items from a data\nobject. The array argument will be filled with the selected\nitems.\n"},
  {"GetSelectedEdges", PyvtkConvertSelection_GetSelectedEdges, METH_VARARGS,
   "V.GetSelectedEdges(vtkSelection, vtkGraph, vtkIdTypeArray)\nC++: static void GetSelectedEdges(vtkSelection *input,\n    vtkGraph *data, vtkIdTypeArray *indices)\n\nStatic methods for easily obtaining selected items from a data\nobject. The array argument will be filled with the selected\nitems.\n"},
  {"GetSelectedPoints", PyvtkConvertSelection_GetSelectedPoints, METH_VARARGS,
   "V.GetSelectedPoints(vtkSelection, vtkDataSet, vtkIdTypeArray)\nC++: static void GetSelectedPoints(vtkSelection *input,\n    vtkDataSet *data, vtkIdTypeArray *indices)\n\nStatic methods for easily obtaining selected items from a data\nobject. The array argument will be filled with the selected\nitems.\n"},
  {"GetSelectedCells", PyvtkConvertSelection_GetSelectedCells, METH_VARARGS,
   "V.GetSelectedCells(vtkSelection, vtkDataSet, vtkIdTypeArray)\nC++: static void GetSelectedCells(vtkSelection *input,\n    vtkDataSet *data, vtkIdTypeArray *indices)\n\nStatic methods for easily obtaining selected items from a data\nobject. The array argument will be filled with the selected\nitems.\n"},
  {"GetSelectedRows", PyvtkConvertSelection_GetSelectedRows, METH_VARARGS,
   "V.GetSelectedRows(vtkSelection, vtkTable, vtkIdTypeArray)\nC++: static void GetSelectedRows(vtkSelection *input,\n    vtkTable *data, vtkIdTypeArray *indices)\n\nStatic methods for easily obtaining selected items from a data\nobject. The array argument will be filled with the selected\nitems.\n"},
  {"ToSelectionType", PyvtkConvertSelection_ToSelectionType, METH_VARARGS,
   "V.ToSelectionType(vtkSelection, vtkDataObject, int,\n    vtkStringArray, int, bool) -> vtkSelection\nC++: static vtkSelection *ToSelectionType(vtkSelection *input,\n    vtkDataObject *data, int type,\n    vtkStringArray *arrayNames=nullptr, int inputFieldType=-1,\n    bool allowMissingArray=false)\n\nA generic static method for converting selection types. The type\nshould be an integer constant defined in vtkSelectionNode.h.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkConvertSelection_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersExtractionPython.vtkConvertSelection", // tp_name
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
  PyvtkConvertSelection_Doc, // tp_doc
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

static vtkObjectBase *PyvtkConvertSelection_StaticNew()
{
  return vtkConvertSelection::New();
}

PyObject *PyvtkConvertSelection_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkConvertSelection_Type, PyvtkConvertSelection_Methods,
    "vtkConvertSelection",
 &PyvtkConvertSelection_StaticNew);

  PyTypeObject *pytype = &PyvtkConvertSelection_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkSelectionAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkConvertSelection(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkConvertSelection_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkConvertSelection", o) != 0)
  {
    Py_DECREF(o);
  }

}

