// python wrapper for vtkSpreadSheetView
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
#include "vtkSpreadSheetView.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSpreadSheetView(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSpreadSheetView_ClassNew(); }

#ifndef DECLARED_PyvtkPVView_ClassNew
extern "C" { PyObject *PyvtkPVView_ClassNew(); }
#define DECLARED_PyvtkPVView_ClassNew
#endif

static const char *PyvtkSpreadSheetView_Doc =
  "vtkSpreadSheetView - vtkSpreadSheetView is a vtkPVView subclass for a\nview used to show any data as a spreadsheet.\n\n"
  "Superclass: vtkPVView\n\n"
  "This view can only show one representation at a time. If more than\n"
  "one representation is added to this view, only the first visible\n"
  "representation will be shown.\n\n";


static PyObject *
PyvtkSpreadSheetView_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSpreadSheetView::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpreadSheetView_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpreadSheetView *op = static_cast<vtkSpreadSheetView *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSpreadSheetView::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpreadSheetView_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSpreadSheetView *tempr = vtkSpreadSheetView::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpreadSheetView_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpreadSheetView *op = static_cast<vtkSpreadSheetView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSpreadSheetView *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSpreadSheetView::NewInstance());

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
PyvtkSpreadSheetView_StillRender(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StillRender");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpreadSheetView *op = static_cast<vtkSpreadSheetView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->StillRender();
    }
    else
    {
      op->vtkSpreadSheetView::StillRender();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpreadSheetView_InteractiveRender(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InteractiveRender");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpreadSheetView *op = static_cast<vtkSpreadSheetView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InteractiveRender();
    }
    else
    {
      op->vtkSpreadSheetView::InteractiveRender();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpreadSheetView_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpreadSheetView *op = static_cast<vtkSpreadSheetView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Update();
    }
    else
    {
      op->vtkSpreadSheetView::Update();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpreadSheetView_SetShowExtractedSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShowExtractedSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpreadSheetView *op = static_cast<vtkSpreadSheetView *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetShowExtractedSelection(temp0);
    }
    else
    {
      op->vtkSpreadSheetView::SetShowExtractedSelection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpreadSheetView_ShowExtractedSelectionOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShowExtractedSelectionOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpreadSheetView *op = static_cast<vtkSpreadSheetView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ShowExtractedSelectionOn();
    }
    else
    {
      op->vtkSpreadSheetView::ShowExtractedSelectionOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpreadSheetView_ShowExtractedSelectionOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShowExtractedSelectionOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpreadSheetView *op = static_cast<vtkSpreadSheetView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ShowExtractedSelectionOff();
    }
    else
    {
      op->vtkSpreadSheetView::ShowExtractedSelectionOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpreadSheetView_GetShowExtractedSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShowExtractedSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpreadSheetView *op = static_cast<vtkSpreadSheetView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetShowExtractedSelection() :
      op->vtkSpreadSheetView::GetShowExtractedSelection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpreadSheetView_SetGenerateCellConnectivity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateCellConnectivity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpreadSheetView *op = static_cast<vtkSpreadSheetView *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateCellConnectivity(temp0);
    }
    else
    {
      op->vtkSpreadSheetView::SetGenerateCellConnectivity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpreadSheetView_GetGenerateCellConnectivity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateCellConnectivity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpreadSheetView *op = static_cast<vtkSpreadSheetView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetGenerateCellConnectivity() :
      op->vtkSpreadSheetView::GetGenerateCellConnectivity());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpreadSheetView_GenerateCellConnectivityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateCellConnectivityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpreadSheetView *op = static_cast<vtkSpreadSheetView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateCellConnectivityOn();
    }
    else
    {
      op->vtkSpreadSheetView::GenerateCellConnectivityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpreadSheetView_GenerateCellConnectivityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateCellConnectivityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpreadSheetView *op = static_cast<vtkSpreadSheetView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateCellConnectivityOff();
    }
    else
    {
      op->vtkSpreadSheetView::GenerateCellConnectivityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpreadSheetView_SetFieldAssociation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFieldAssociation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpreadSheetView *op = static_cast<vtkSpreadSheetView *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFieldAssociation(temp0);
    }
    else
    {
      op->vtkSpreadSheetView::SetFieldAssociation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpreadSheetView_GetFieldAssociation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldAssociation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpreadSheetView *op = static_cast<vtkSpreadSheetView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFieldAssociation() :
      op->vtkSpreadSheetView::GetFieldAssociation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpreadSheetView_HideColumnByName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HideColumnByName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpreadSheetView *op = static_cast<vtkSpreadSheetView *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->HideColumnByName(temp0);
    }
    else
    {
      op->vtkSpreadSheetView::HideColumnByName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpreadSheetView_IsColumnHiddenByName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsColumnHiddenByName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpreadSheetView *op = static_cast<vtkSpreadSheetView *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsColumnHiddenByName(temp0) :
      op->vtkSpreadSheetView::IsColumnHiddenByName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpreadSheetView_ClearHiddenColumnsByName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearHiddenColumnsByName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpreadSheetView *op = static_cast<vtkSpreadSheetView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearHiddenColumnsByName();
    }
    else
    {
      op->vtkSpreadSheetView::ClearHiddenColumnsByName();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpreadSheetView_HideColumnByLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HideColumnByLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpreadSheetView *op = static_cast<vtkSpreadSheetView *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->HideColumnByLabel(temp0);
    }
    else
    {
      op->vtkSpreadSheetView::HideColumnByLabel(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpreadSheetView_IsColumnHiddenByLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsColumnHiddenByLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpreadSheetView *op = static_cast<vtkSpreadSheetView *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsColumnHiddenByLabel(temp0) :
      op->vtkSpreadSheetView::IsColumnHiddenByLabel(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpreadSheetView_ClearHiddenColumnsByLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearHiddenColumnsByLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpreadSheetView *op = static_cast<vtkSpreadSheetView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearHiddenColumnsByLabel();
    }
    else
    {
      op->vtkSpreadSheetView::ClearHiddenColumnsByLabel();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpreadSheetView_GetNumberOfColumns(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfColumns");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpreadSheetView *op = static_cast<vtkSpreadSheetView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfColumns() :
      op->vtkSpreadSheetView::GetNumberOfColumns());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpreadSheetView_GetNumberOfRows(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfRows");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpreadSheetView *op = static_cast<vtkSpreadSheetView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfRows() :
      op->vtkSpreadSheetView::GetNumberOfRows());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpreadSheetView_GetColumnName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColumnName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpreadSheetView *op = static_cast<vtkSpreadSheetView *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetColumnName(temp0) :
      op->vtkSpreadSheetView::GetColumnName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpreadSheetView_IsColumnInternal_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsColumnInternal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpreadSheetView *op = static_cast<vtkSpreadSheetView *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsColumnInternal(temp0) :
      op->vtkSpreadSheetView::IsColumnInternal(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSpreadSheetView_IsColumnInternal_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsColumnInternal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpreadSheetView *op = static_cast<vtkSpreadSheetView *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsColumnInternal(temp0) :
      op->vtkSpreadSheetView::IsColumnInternal(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSpreadSheetView_IsColumnInternal_Methods[] = {
  {nullptr, PyvtkSpreadSheetView_IsColumnInternal_s1, METH_VARARGS,
   "@k"},
  {nullptr, PyvtkSpreadSheetView_IsColumnInternal_s2, METH_VARARGS,
   "@z"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSpreadSheetView_IsColumnInternal(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSpreadSheetView_IsColumnInternal_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "IsColumnInternal");
  return nullptr;
}



static PyObject *
PyvtkSpreadSheetView_GetColumnLabel_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColumnLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpreadSheetView *op = static_cast<vtkSpreadSheetView *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetColumnLabel(temp0) :
      op->vtkSpreadSheetView::GetColumnLabel(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSpreadSheetView_GetColumnLabel_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColumnLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpreadSheetView *op = static_cast<vtkSpreadSheetView *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetColumnLabel(temp0) :
      op->vtkSpreadSheetView::GetColumnLabel(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSpreadSheetView_GetColumnLabel_Methods[] = {
  {nullptr, PyvtkSpreadSheetView_GetColumnLabel_s1, METH_VARARGS,
   "@k"},
  {nullptr, PyvtkSpreadSheetView_GetColumnLabel_s2, METH_VARARGS,
   "@z"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSpreadSheetView_GetColumnLabel(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSpreadSheetView_GetColumnLabel_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetColumnLabel");
  return nullptr;
}



static PyObject *
PyvtkSpreadSheetView_GetColumnVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColumnVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpreadSheetView *op = static_cast<vtkSpreadSheetView *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetColumnVisibility(temp0) :
      op->vtkSpreadSheetView::GetColumnVisibility(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpreadSheetView_GetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpreadSheetView *op = static_cast<vtkSpreadSheetView *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetValue(temp0, temp1) :
      op->vtkSpreadSheetView::GetValue(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
    }
  }

  return result;
}


static PyObject *
PyvtkSpreadSheetView_GetValueByName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueByName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpreadSheetView *op = static_cast<vtkSpreadSheetView *>(vp);

  vtkIdType temp0;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetValueByName(temp0, temp1) :
      op->vtkSpreadSheetView::GetValueByName(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
    }
  }

  return result;
}


static PyObject *
PyvtkSpreadSheetView_IsRowSelected(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsRowSelected");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpreadSheetView *op = static_cast<vtkSpreadSheetView *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsRowSelected(temp0) :
      op->vtkSpreadSheetView::IsRowSelected(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpreadSheetView_IsAvailable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsAvailable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpreadSheetView *op = static_cast<vtkSpreadSheetView *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsAvailable(temp0) :
      op->vtkSpreadSheetView::IsAvailable(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpreadSheetView_SetColumnNameToSort_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColumnNameToSort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpreadSheetView *op = static_cast<vtkSpreadSheetView *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetColumnNameToSort(temp0);
    }
    else
    {
      op->vtkSpreadSheetView::SetColumnNameToSort(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSpreadSheetView_SetColumnNameToSort_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColumnNameToSort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpreadSheetView *op = static_cast<vtkSpreadSheetView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetColumnNameToSort();
    }
    else
    {
      op->vtkSpreadSheetView::SetColumnNameToSort();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSpreadSheetView_SetColumnNameToSort(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkSpreadSheetView_SetColumnNameToSort_s1(self, args);
    case 0:
      return PyvtkSpreadSheetView_SetColumnNameToSort_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetColumnNameToSort");
  return nullptr;
}



static PyObject *
PyvtkSpreadSheetView_SetComponentToSort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComponentToSort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpreadSheetView *op = static_cast<vtkSpreadSheetView *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetComponentToSort(temp0);
    }
    else
    {
      op->vtkSpreadSheetView::SetComponentToSort(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpreadSheetView_SetInvertSortOrder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInvertSortOrder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpreadSheetView *op = static_cast<vtkSpreadSheetView *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInvertSortOrder(temp0);
    }
    else
    {
      op->vtkSpreadSheetView::SetInvertSortOrder(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpreadSheetView_SetBlockSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlockSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpreadSheetView *op = static_cast<vtkSpreadSheetView *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBlockSize(temp0);
    }
    else
    {
      op->vtkSpreadSheetView::SetBlockSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpreadSheetView_Export(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Export");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpreadSheetView *op = static_cast<vtkSpreadSheetView *>(vp);

  vtkCSVExporter *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCSVExporter"))
  {
    bool tempr = (ap.IsBound() ?
      op->Export(temp0) :
      op->vtkSpreadSheetView::Export(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpreadSheetView_ClearCache(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearCache");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpreadSheetView *op = static_cast<vtkSpreadSheetView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearCache();
    }
    else
    {
      op->vtkSpreadSheetView::ClearCache();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpreadSheetView_FetchBlockCallback(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FetchBlockCallback");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpreadSheetView *op = static_cast<vtkSpreadSheetView *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkTable *tempr = (ap.IsBound() ?
      op->FetchBlockCallback(temp0) :
      op->vtkSpreadSheetView::FetchBlockCallback(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSpreadSheetView_Methods[] = {
  {"IsTypeOf", PyvtkSpreadSheetView_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSpreadSheetView_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSpreadSheetView_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSpreadSheetView\nC++: static vtkSpreadSheetView *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSpreadSheetView_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSpreadSheetView\nC++: vtkSpreadSheetView *NewInstance()\n\n"},
  {"StillRender", PyvtkSpreadSheetView_StillRender, METH_VARARGS,
   "V.StillRender()\nC++: void StillRender() override;\n\nTriggers a high-resolution render.\n\note CallOnAllProcesses\n"},
  {"InteractiveRender", PyvtkSpreadSheetView_InteractiveRender, METH_VARARGS,
   "V.InteractiveRender()\nC++: void InteractiveRender() override;\n\nTriggers a interactive render. Based on the settings on the view,\nthis may result in a low-resolution rendering or a simplified\ngeometry rendering.\n\note CallOnAllProcesses\n"},
  {"Update", PyvtkSpreadSheetView_Update, METH_VARARGS,
   "V.Update()\nC++: void Update() override;\n\nOverridden to identify and locate the active-representation.\n"},
  {"SetShowExtractedSelection", PyvtkSpreadSheetView_SetShowExtractedSelection, METH_VARARGS,
   "V.SetShowExtractedSelection(bool)\nC++: void SetShowExtractedSelection(bool)\n\nGet/Set if the view shows extracted selection only or the actual\ndata. false by default.\n\note CallOnAllProcesses\n"},
  {"ShowExtractedSelectionOn", PyvtkSpreadSheetView_ShowExtractedSelectionOn, METH_VARARGS,
   "V.ShowExtractedSelectionOn()\nC++: virtual void ShowExtractedSelectionOn()\n\nGet/Set if the view shows extracted selection only or the actual\ndata. false by default.\n\note CallOnAllProcesses\n"},
  {"ShowExtractedSelectionOff", PyvtkSpreadSheetView_ShowExtractedSelectionOff, METH_VARARGS,
   "V.ShowExtractedSelectionOff()\nC++: virtual void ShowExtractedSelectionOff()\n\nGet/Set if the view shows extracted selection only or the actual\ndata. false by default.\n\note CallOnAllProcesses\n"},
  {"GetShowExtractedSelection", PyvtkSpreadSheetView_GetShowExtractedSelection, METH_VARARGS,
   "V.GetShowExtractedSelection() -> bool\nC++: virtual bool GetShowExtractedSelection()\n\nGet/Set if the view shows extracted selection only or the actual\ndata. false by default.\n\note CallOnAllProcesses\n"},
  {"SetGenerateCellConnectivity", PyvtkSpreadSheetView_SetGenerateCellConnectivity, METH_VARARGS,
   "V.SetGenerateCellConnectivity(bool)\nC++: virtual void SetGenerateCellConnectivity(bool _arg)\n\nAllow user to enable/disable cell connectivity generation.\n"},
  {"GetGenerateCellConnectivity", PyvtkSpreadSheetView_GetGenerateCellConnectivity, METH_VARARGS,
   "V.GetGenerateCellConnectivity() -> bool\nC++: virtual bool GetGenerateCellConnectivity()\n\nAllow user to enable/disable cell connectivity generation.\n"},
  {"GenerateCellConnectivityOn", PyvtkSpreadSheetView_GenerateCellConnectivityOn, METH_VARARGS,
   "V.GenerateCellConnectivityOn()\nC++: virtual void GenerateCellConnectivityOn()\n\nAllow user to enable/disable cell connectivity generation.\n"},
  {"GenerateCellConnectivityOff", PyvtkSpreadSheetView_GenerateCellConnectivityOff, METH_VARARGS,
   "V.GenerateCellConnectivityOff()\nC++: virtual void GenerateCellConnectivityOff()\n\nAllow user to enable/disable cell connectivity generation.\n"},
  {"SetFieldAssociation", PyvtkSpreadSheetView_SetFieldAssociation, METH_VARARGS,
   "V.SetFieldAssociation(int)\nC++: virtual void SetFieldAssociation(int _arg)\n\nSpecify the field association for the data to be shown in the\nview. This is passed on to the vtkSpreadSheetRepresentation in\n`Update` pass.\n"},
  {"GetFieldAssociation", PyvtkSpreadSheetView_GetFieldAssociation, METH_VARARGS,
   "V.GetFieldAssociation() -> int\nC++: virtual int GetFieldAssociation()\n\nSpecify the field association for the data to be shown in the\nview. This is passed on to the vtkSpreadSheetRepresentation in\n`Update` pass.\n"},
  {"HideColumnByName", PyvtkSpreadSheetView_HideColumnByName, METH_VARARGS,
   "V.HideColumnByName(string)\nC++: void HideColumnByName(const char *columnName)\n\nThis API enables the users to hide columns that should be shown.\nColumns can be hidden using their names or labels.\n"},
  {"IsColumnHiddenByName", PyvtkSpreadSheetView_IsColumnHiddenByName, METH_VARARGS,
   "V.IsColumnHiddenByName(string) -> bool\nC++: bool IsColumnHiddenByName(const char *columnName)\n\nThis API enables the users to hide columns that should be shown.\nColumns can be hidden using their names or labels.\n"},
  {"ClearHiddenColumnsByName", PyvtkSpreadSheetView_ClearHiddenColumnsByName, METH_VARARGS,
   "V.ClearHiddenColumnsByName()\nC++: void ClearHiddenColumnsByName()\n\nThis API enables the users to hide columns that should be shown.\nColumns can be hidden using their names or labels.\n"},
  {"HideColumnByLabel", PyvtkSpreadSheetView_HideColumnByLabel, METH_VARARGS,
   "V.HideColumnByLabel(string)\nC++: void HideColumnByLabel(const char *columnLabel)\n\nThis API enables the users to hide columns that should be shown.\nColumns can be hidden using their names or labels.\n"},
  {"IsColumnHiddenByLabel", PyvtkSpreadSheetView_IsColumnHiddenByLabel, METH_VARARGS,
   "V.IsColumnHiddenByLabel(string) -> bool\nC++: bool IsColumnHiddenByLabel(const char *columnLabel)\n\nThis API enables the users to hide columns that should be shown.\nColumns can be hidden using their names or labels.\n"},
  {"ClearHiddenColumnsByLabel", PyvtkSpreadSheetView_ClearHiddenColumnsByLabel, METH_VARARGS,
   "V.ClearHiddenColumnsByLabel()\nC++: void ClearHiddenColumnsByLabel()\n\nThis API enables the users to hide columns that should be shown.\nColumns can be hidden using their names or labels.\n"},
  {"GetNumberOfColumns", PyvtkSpreadSheetView_GetNumberOfColumns, METH_VARARGS,
   "V.GetNumberOfColumns() -> int\nC++: vtkIdType GetNumberOfColumns()\n\nGet the number of columns.\n\note CallOnClient\n"},
  {"GetNumberOfRows", PyvtkSpreadSheetView_GetNumberOfRows, METH_VARARGS,
   "V.GetNumberOfRows() -> int\nC++: vtkIdType GetNumberOfRows()\n\nGet the number of rows.\n\note CallOnClient\n"},
  {"GetColumnName", PyvtkSpreadSheetView_GetColumnName, METH_VARARGS,
   "V.GetColumnName(int) -> string\nC++: const char *GetColumnName(vtkIdType index)\n\nReturns the name for the column.\n\note CallOnClient\n"},
  {"IsColumnInternal", PyvtkSpreadSheetView_IsColumnInternal, METH_VARARGS,
   "V.IsColumnInternal(int) -> bool\nC++: bool IsColumnInternal(vtkIdType index)\nV.IsColumnInternal(string) -> bool\nC++: bool IsColumnInternal(const char *columnName)\n\nReturns true if the column is internal.\n"},
  {"GetColumnLabel", PyvtkSpreadSheetView_GetColumnLabel, METH_VARARGS,
   "V.GetColumnLabel(int) -> string\nC++: const char *GetColumnLabel(vtkIdType index)\nV.GetColumnLabel(string) -> string\nC++: const char *GetColumnLabel(const char *columnName)\n\nReturns the user-friendly label to use for the column in the\nspreadsheet view.\n\nIf `this->IsColumnInternal(..)` is true for the chosen column.\nThen this method will return `nullptr`.\n\note CallOnClient\n"},
  {"GetColumnVisibility", PyvtkSpreadSheetView_GetColumnVisibility, METH_VARARGS,
   "V.GetColumnVisibility(int) -> bool\nC++: bool GetColumnVisibility(vtkIdType index)\n\nReturns the visibility for the column at the given index.\n"},
  {"GetValue", PyvtkSpreadSheetView_GetValue, METH_VARARGS,
   "V.GetValue(int, int) -> vtkVariant\nC++: vtkVariant GetValue(vtkIdType row, vtkIdType col)\n\nReturns the value at given location. This may result in\ncollective operations is data is not available locally. This\nmethod can only be called on the CLIENT process for now.\n\note CallOnClient\n"},
  {"GetValueByName", PyvtkSpreadSheetView_GetValueByName, METH_VARARGS,
   "V.GetValueByName(int, string) -> vtkVariant\nC++: vtkVariant GetValueByName(vtkIdType row,\n    const char *columnName)\n\nReturns the value at given location. This may result in\ncollective operations is data is not available locally. This\nmethod can only be called on the CLIENT process for now.\n\note CallOnClient\n"},
  {"IsRowSelected", PyvtkSpreadSheetView_IsRowSelected, METH_VARARGS,
   "V.IsRowSelected(int) -> bool\nC++: bool IsRowSelected(vtkIdType row)\n\nReturns true if the row is selected.\n"},
  {"IsAvailable", PyvtkSpreadSheetView_IsAvailable, METH_VARARGS,
   "V.IsAvailable(int) -> bool\nC++: bool IsAvailable(vtkIdType row)\n\nReturns true is the data for the particular row is locally\navailable.\n"},
  {"SetColumnNameToSort", PyvtkSpreadSheetView_SetColumnNameToSort, METH_VARARGS,
   "V.SetColumnNameToSort(string)\nC++: void SetColumnNameToSort(const char *)\nV.SetColumnNameToSort()\nC++: void SetColumnNameToSort()\n\nGet/Set the column name to sort by.\n\note CallOnAllProcesses\n"},
  {"SetComponentToSort", PyvtkSpreadSheetView_SetComponentToSort, METH_VARARGS,
   "V.SetComponentToSort(int)\nC++: void SetComponentToSort(int val)\n\nGet/Set the component to sort with. Use -1 (default) for\nmagnitude.\n\note CallOnAllProcesses\n"},
  {"SetInvertSortOrder", PyvtkSpreadSheetView_SetInvertSortOrder, METH_VARARGS,
   "V.SetInvertSortOrder(bool)\nC++: void SetInvertSortOrder(bool)\n\nGet/Set whether the sort order must be Max to Min rather than Min\nto Max.\n\note CallOnAllProcesses\n"},
  {"SetBlockSize", PyvtkSpreadSheetView_SetBlockSize, METH_VARARGS,
   "V.SetBlockSize(int)\nC++: void SetBlockSize(vtkIdType val)\n\nSet the block size\n\note CallOnAllProcesses\n"},
  {"Export", PyvtkSpreadSheetView_Export, METH_VARARGS,
   "V.Export(vtkCSVExporter) -> bool\nC++: bool Export(vtkCSVExporter *exporter)\n\nExport the contents of this view using the exporter.\n"},
  {"ClearCache", PyvtkSpreadSheetView_ClearCache, METH_VARARGS,
   "V.ClearCache()\nC++: void ClearCache()\n\nAllow user to clear the cache if he needs to.\n"},
  {"FetchBlockCallback", PyvtkSpreadSheetView_FetchBlockCallback, METH_VARARGS,
   "V.FetchBlockCallback(int) -> vtkTable\nC++: vtkTable *FetchBlockCallback(vtkIdType blockindex)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSpreadSheetView_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVClientServerCoreRenderingPython.vtkSpreadSheetView", // tp_name
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
  PyvtkSpreadSheetView_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSpreadSheetView_StaticNew()
{
  return vtkSpreadSheetView::New();
}

PyObject *PyvtkSpreadSheetView_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSpreadSheetView_Type, PyvtkSpreadSheetView_Methods,
    "vtkSpreadSheetView",
 &PyvtkSpreadSheetView_StaticNew);

  PyTypeObject *pytype = &PyvtkSpreadSheetView_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPVView_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSpreadSheetView(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSpreadSheetView_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSpreadSheetView", o) != 0)
  {
    Py_DECREF(o);
  }

}

