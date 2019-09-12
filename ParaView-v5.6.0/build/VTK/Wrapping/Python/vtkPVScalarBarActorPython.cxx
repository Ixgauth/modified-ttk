// python wrapper for vtkPVScalarBarActor
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
#include "vtkPVScalarBarActor.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPVScalarBarActor(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPVScalarBarActor_ClassNew(); }

#ifndef DECLARED_PyvtkScalarBarActor_ClassNew
extern "C" { PyObject *PyvtkScalarBarActor_ClassNew(); }
#define DECLARED_PyvtkScalarBarActor_ClassNew
#endif

static const char *PyvtkPVScalarBarActor_Doc =
  "vtkPVScalarBarActor - A scalar bar with labels of fixed font.\n\n"
  "Superclass: vtkScalarBarActor\n\n"
  "vtkPVScalarBarActor has basically the same functionality as\n"
  "vtkScalarBarActor except that the fonts are set to a fixed size and\n"
  "tick labels vary in precision before their size is adjusted to meet\n"
  "geometric constraints. These changes make it easier to control in\n"
  "ParaView.\n\n";


static PyObject *
PyvtkPVScalarBarActor_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPVScalarBarActor::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVScalarBarActor_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVScalarBarActor *op = static_cast<vtkPVScalarBarActor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVScalarBarActor::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVScalarBarActor_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPVScalarBarActor *tempr = vtkPVScalarBarActor::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVScalarBarActor_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVScalarBarActor *op = static_cast<vtkPVScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVScalarBarActor *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVScalarBarActor::NewInstance());

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
PyvtkPVScalarBarActor_GetAspectRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAspectRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVScalarBarActor *op = static_cast<vtkPVScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetAspectRatio() :
      op->vtkPVScalarBarActor::GetAspectRatio());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVScalarBarActor_SetAspectRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAspectRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVScalarBarActor *op = static_cast<vtkPVScalarBarActor *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAspectRatio(temp0);
    }
    else
    {
      op->vtkPVScalarBarActor::SetAspectRatio(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVScalarBarActor_GetAutomaticLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutomaticLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVScalarBarActor *op = static_cast<vtkPVScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAutomaticLabelFormat() :
      op->vtkPVScalarBarActor::GetAutomaticLabelFormat());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVScalarBarActor_SetAutomaticLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAutomaticLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVScalarBarActor *op = static_cast<vtkPVScalarBarActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAutomaticLabelFormat(temp0);
    }
    else
    {
      op->vtkPVScalarBarActor::SetAutomaticLabelFormat(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVScalarBarActor_AutomaticLabelFormatOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutomaticLabelFormatOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVScalarBarActor *op = static_cast<vtkPVScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AutomaticLabelFormatOn();
    }
    else
    {
      op->vtkPVScalarBarActor::AutomaticLabelFormatOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVScalarBarActor_AutomaticLabelFormatOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutomaticLabelFormatOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVScalarBarActor *op = static_cast<vtkPVScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AutomaticLabelFormatOff();
    }
    else
    {
      op->vtkPVScalarBarActor::AutomaticLabelFormatOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVScalarBarActor_GetDrawTickMarks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDrawTickMarks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVScalarBarActor *op = static_cast<vtkPVScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDrawTickMarks() :
      op->vtkPVScalarBarActor::GetDrawTickMarks());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVScalarBarActor_SetDrawTickMarks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDrawTickMarks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVScalarBarActor *op = static_cast<vtkPVScalarBarActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDrawTickMarks(temp0);
    }
    else
    {
      op->vtkPVScalarBarActor::SetDrawTickMarks(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVScalarBarActor_DrawTickMarksOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawTickMarksOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVScalarBarActor *op = static_cast<vtkPVScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DrawTickMarksOn();
    }
    else
    {
      op->vtkPVScalarBarActor::DrawTickMarksOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVScalarBarActor_DrawTickMarksOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawTickMarksOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVScalarBarActor *op = static_cast<vtkPVScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DrawTickMarksOff();
    }
    else
    {
      op->vtkPVScalarBarActor::DrawTickMarksOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVScalarBarActor_GetDrawSubTickMarks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDrawSubTickMarks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVScalarBarActor *op = static_cast<vtkPVScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDrawSubTickMarks() :
      op->vtkPVScalarBarActor::GetDrawSubTickMarks());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVScalarBarActor_SetDrawSubTickMarks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDrawSubTickMarks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVScalarBarActor *op = static_cast<vtkPVScalarBarActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDrawSubTickMarks(temp0);
    }
    else
    {
      op->vtkPVScalarBarActor::SetDrawSubTickMarks(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVScalarBarActor_DrawSubTickMarksOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawSubTickMarksOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVScalarBarActor *op = static_cast<vtkPVScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DrawSubTickMarksOn();
    }
    else
    {
      op->vtkPVScalarBarActor::DrawSubTickMarksOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVScalarBarActor_DrawSubTickMarksOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawSubTickMarksOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVScalarBarActor *op = static_cast<vtkPVScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DrawSubTickMarksOff();
    }
    else
    {
      op->vtkPVScalarBarActor::DrawSubTickMarksOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVScalarBarActor_GetAddRangeLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAddRangeLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVScalarBarActor *op = static_cast<vtkPVScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAddRangeLabels() :
      op->vtkPVScalarBarActor::GetAddRangeLabels());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVScalarBarActor_SetAddRangeLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAddRangeLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVScalarBarActor *op = static_cast<vtkPVScalarBarActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAddRangeLabels(temp0);
    }
    else
    {
      op->vtkPVScalarBarActor::SetAddRangeLabels(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVScalarBarActor_AddRangeLabelsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddRangeLabelsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVScalarBarActor *op = static_cast<vtkPVScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AddRangeLabelsOn();
    }
    else
    {
      op->vtkPVScalarBarActor::AddRangeLabelsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVScalarBarActor_AddRangeLabelsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddRangeLabelsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVScalarBarActor *op = static_cast<vtkPVScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AddRangeLabelsOff();
    }
    else
    {
      op->vtkPVScalarBarActor::AddRangeLabelsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVScalarBarActor_SetAutomaticAnnotations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAutomaticAnnotations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVScalarBarActor *op = static_cast<vtkPVScalarBarActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAutomaticAnnotations(temp0);
    }
    else
    {
      op->vtkPVScalarBarActor::SetAutomaticAnnotations(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVScalarBarActor_GetAutomaticAnnotations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutomaticAnnotations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVScalarBarActor *op = static_cast<vtkPVScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAutomaticAnnotations() :
      op->vtkPVScalarBarActor::GetAutomaticAnnotations());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVScalarBarActor_AutomaticAnnotationsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutomaticAnnotationsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVScalarBarActor *op = static_cast<vtkPVScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AutomaticAnnotationsOn();
    }
    else
    {
      op->vtkPVScalarBarActor::AutomaticAnnotationsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVScalarBarActor_AutomaticAnnotationsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutomaticAnnotationsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVScalarBarActor *op = static_cast<vtkPVScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AutomaticAnnotationsOff();
    }
    else
    {
      op->vtkPVScalarBarActor::AutomaticAnnotationsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVScalarBarActor_GetRangeLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRangeLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVScalarBarActor *op = static_cast<vtkPVScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetRangeLabelFormat() :
      op->vtkPVScalarBarActor::GetRangeLabelFormat());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVScalarBarActor_SetRangeLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRangeLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVScalarBarActor *op = static_cast<vtkPVScalarBarActor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRangeLabelFormat(temp0);
    }
    else
    {
      op->vtkPVScalarBarActor::SetRangeLabelFormat(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVScalarBarActor_AddValueLabelIfUnoccluded(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddValueLabelIfUnoccluded");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVScalarBarActor *op = static_cast<vtkPVScalarBarActor *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->AddValueLabelIfUnoccluded(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPVScalarBarActor::AddValueLabelIfUnoccluded(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVScalarBarActor_GetTitleJustification(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitleJustification");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVScalarBarActor *op = static_cast<vtkPVScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTitleJustification() :
      op->vtkPVScalarBarActor::GetTitleJustification());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVScalarBarActor_SetTitleJustification(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitleJustification");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVScalarBarActor *op = static_cast<vtkPVScalarBarActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTitleJustification(temp0);
    }
    else
    {
      op->vtkPVScalarBarActor::SetTitleJustification(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVScalarBarActor_GetTitleJustificationMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitleJustificationMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVScalarBarActor *op = static_cast<vtkPVScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTitleJustificationMinValue() :
      op->vtkPVScalarBarActor::GetTitleJustificationMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVScalarBarActor_GetTitleJustificationMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitleJustificationMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVScalarBarActor *op = static_cast<vtkPVScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTitleJustificationMaxValue() :
      op->vtkPVScalarBarActor::GetTitleJustificationMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVScalarBarActor_GetAddRangeAnnotations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAddRangeAnnotations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVScalarBarActor *op = static_cast<vtkPVScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAddRangeAnnotations() :
      op->vtkPVScalarBarActor::GetAddRangeAnnotations());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVScalarBarActor_SetAddRangeAnnotations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAddRangeAnnotations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVScalarBarActor *op = static_cast<vtkPVScalarBarActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAddRangeAnnotations(temp0);
    }
    else
    {
      op->vtkPVScalarBarActor::SetAddRangeAnnotations(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVScalarBarActor_AddRangeAnnotationsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddRangeAnnotationsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVScalarBarActor *op = static_cast<vtkPVScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AddRangeAnnotationsOn();
    }
    else
    {
      op->vtkPVScalarBarActor::AddRangeAnnotationsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVScalarBarActor_AddRangeAnnotationsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddRangeAnnotationsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVScalarBarActor *op = static_cast<vtkPVScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AddRangeAnnotationsOff();
    }
    else
    {
      op->vtkPVScalarBarActor::AddRangeAnnotationsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVScalarBarActor_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVScalarBarActor *op = static_cast<vtkPVScalarBarActor *>(vp);

  vtkWindow *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkWindow"))
  {
    if (ap.IsBound())
    {
      op->ReleaseGraphicsResources(temp0);
    }
    else
    {
      op->vtkPVScalarBarActor::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVScalarBarActor_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVScalarBarActor *op = static_cast<vtkPVScalarBarActor *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkPVScalarBarActor::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVScalarBarActor_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVScalarBarActor *op = static_cast<vtkPVScalarBarActor *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOverlay(temp0) :
      op->vtkPVScalarBarActor::RenderOverlay(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPVScalarBarActor_Methods[] = {
  {"IsTypeOf", PyvtkPVScalarBarActor_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPVScalarBarActor_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPVScalarBarActor_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPVScalarBarActor\nC++: static vtkPVScalarBarActor *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPVScalarBarActor_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPVScalarBarActor\nC++: vtkPVScalarBarActor *NewInstance()\n\n"},
  {"GetAspectRatio", PyvtkPVScalarBarActor_GetAspectRatio, METH_VARARGS,
   "V.GetAspectRatio() -> float\nC++: virtual double GetAspectRatio()\n\nThe bar aspect ratio (length/width).  Defaults to 20.  Note that\nthis the aspect ratio of the color bar only, not including\nlabels.\n"},
  {"SetAspectRatio", PyvtkPVScalarBarActor_SetAspectRatio, METH_VARARGS,
   "V.SetAspectRatio(float)\nC++: virtual void SetAspectRatio(double _arg)\n\nThe bar aspect ratio (length/width).  Defaults to 20.  Note that\nthis the aspect ratio of the color bar only, not including\nlabels.\n"},
  {"GetAutomaticLabelFormat", PyvtkPVScalarBarActor_GetAutomaticLabelFormat, METH_VARARGS,
   "V.GetAutomaticLabelFormat() -> int\nC++: virtual int GetAutomaticLabelFormat()\n\nIf true (the default), the printf format used for the labels will\nbe automatically generated to make the numbers best fit within\nthe widget.  If false, the LabelFormat ivar will be used.\n"},
  {"SetAutomaticLabelFormat", PyvtkPVScalarBarActor_SetAutomaticLabelFormat, METH_VARARGS,
   "V.SetAutomaticLabelFormat(int)\nC++: virtual void SetAutomaticLabelFormat(int _arg)\n\nIf true (the default), the printf format used for the labels will\nbe automatically generated to make the numbers best fit within\nthe widget.  If false, the LabelFormat ivar will be used.\n"},
  {"AutomaticLabelFormatOn", PyvtkPVScalarBarActor_AutomaticLabelFormatOn, METH_VARARGS,
   "V.AutomaticLabelFormatOn()\nC++: virtual void AutomaticLabelFormatOn()\n\nIf true (the default), the printf format used for the labels will\nbe automatically generated to make the numbers best fit within\nthe widget.  If false, the LabelFormat ivar will be used.\n"},
  {"AutomaticLabelFormatOff", PyvtkPVScalarBarActor_AutomaticLabelFormatOff, METH_VARARGS,
   "V.AutomaticLabelFormatOff()\nC++: virtual void AutomaticLabelFormatOff()\n\nIf true (the default), the printf format used for the labels will\nbe automatically generated to make the numbers best fit within\nthe widget.  If false, the LabelFormat ivar will be used.\n"},
  {"GetDrawTickMarks", PyvtkPVScalarBarActor_GetDrawTickMarks, METH_VARARGS,
   "V.GetDrawTickMarks() -> int\nC++: virtual int GetDrawTickMarks()\n\nIf true (the default), tick marks will be drawn.\n"},
  {"SetDrawTickMarks", PyvtkPVScalarBarActor_SetDrawTickMarks, METH_VARARGS,
   "V.SetDrawTickMarks(int)\nC++: virtual void SetDrawTickMarks(int _arg)\n\nIf true (the default), tick marks will be drawn.\n"},
  {"DrawTickMarksOn", PyvtkPVScalarBarActor_DrawTickMarksOn, METH_VARARGS,
   "V.DrawTickMarksOn()\nC++: virtual void DrawTickMarksOn()\n\nIf true (the default), tick marks will be drawn.\n"},
  {"DrawTickMarksOff", PyvtkPVScalarBarActor_DrawTickMarksOff, METH_VARARGS,
   "V.DrawTickMarksOff()\nC++: virtual void DrawTickMarksOff()\n\nIf true (the default), tick marks will be drawn.\n"},
  {"GetDrawSubTickMarks", PyvtkPVScalarBarActor_GetDrawSubTickMarks, METH_VARARGS,
   "V.GetDrawSubTickMarks() -> int\nC++: virtual int GetDrawSubTickMarks()\n\nIf true (the default), sub-tick marks will be drawn.\n"},
  {"SetDrawSubTickMarks", PyvtkPVScalarBarActor_SetDrawSubTickMarks, METH_VARARGS,
   "V.SetDrawSubTickMarks(int)\nC++: virtual void SetDrawSubTickMarks(int _arg)\n\nIf true (the default), sub-tick marks will be drawn.\n"},
  {"DrawSubTickMarksOn", PyvtkPVScalarBarActor_DrawSubTickMarksOn, METH_VARARGS,
   "V.DrawSubTickMarksOn()\nC++: virtual void DrawSubTickMarksOn()\n\nIf true (the default), sub-tick marks will be drawn.\n"},
  {"DrawSubTickMarksOff", PyvtkPVScalarBarActor_DrawSubTickMarksOff, METH_VARARGS,
   "V.DrawSubTickMarksOff()\nC++: virtual void DrawSubTickMarksOff()\n\nIf true (the default), sub-tick marks will be drawn.\n"},
  {"GetAddRangeLabels", PyvtkPVScalarBarActor_GetAddRangeLabels, METH_VARARGS,
   "V.GetAddRangeLabels() -> int\nC++: virtual int GetAddRangeLabels()\n\nSet whether the range endpoints (minimum and maximum) are added\nas labels alongside other value labels.\n"},
  {"SetAddRangeLabels", PyvtkPVScalarBarActor_SetAddRangeLabels, METH_VARARGS,
   "V.SetAddRangeLabels(int)\nC++: virtual void SetAddRangeLabels(int _arg)\n\nSet whether the range endpoints (minimum and maximum) are added\nas labels alongside other value labels.\n"},
  {"AddRangeLabelsOn", PyvtkPVScalarBarActor_AddRangeLabelsOn, METH_VARARGS,
   "V.AddRangeLabelsOn()\nC++: virtual void AddRangeLabelsOn()\n\nSet whether the range endpoints (minimum and maximum) are added\nas labels alongside other value labels.\n"},
  {"AddRangeLabelsOff", PyvtkPVScalarBarActor_AddRangeLabelsOff, METH_VARARGS,
   "V.AddRangeLabelsOff()\nC++: virtual void AddRangeLabelsOff()\n\nSet whether the range endpoints (minimum and maximum) are added\nas labels alongside other value labels.\n"},
  {"SetAutomaticAnnotations", PyvtkPVScalarBarActor_SetAutomaticAnnotations, METH_VARARGS,
   "V.SetAutomaticAnnotations(int)\nC++: virtual void SetAutomaticAnnotations(int _arg)\n\nSet whether annotions are automatically created according the\nnumber of discrete colors. Default is FALSE;\n"},
  {"GetAutomaticAnnotations", PyvtkPVScalarBarActor_GetAutomaticAnnotations, METH_VARARGS,
   "V.GetAutomaticAnnotations() -> int\nC++: virtual int GetAutomaticAnnotations()\n\nSet whether annotions are automatically created according the\nnumber of discrete colors. Default is FALSE;\n"},
  {"AutomaticAnnotationsOn", PyvtkPVScalarBarActor_AutomaticAnnotationsOn, METH_VARARGS,
   "V.AutomaticAnnotationsOn()\nC++: virtual void AutomaticAnnotationsOn()\n\nSet whether annotions are automatically created according the\nnumber of discrete colors. Default is FALSE;\n"},
  {"AutomaticAnnotationsOff", PyvtkPVScalarBarActor_AutomaticAnnotationsOff, METH_VARARGS,
   "V.AutomaticAnnotationsOff()\nC++: virtual void AutomaticAnnotationsOff()\n\nSet whether annotions are automatically created according the\nnumber of discrete colors. Default is FALSE;\n"},
  {"GetRangeLabelFormat", PyvtkPVScalarBarActor_GetRangeLabelFormat, METH_VARARGS,
   "V.GetRangeLabelFormat() -> string\nC++: virtual char *GetRangeLabelFormat()\n\nSet the C-style format string for the range labels.\n"},
  {"SetRangeLabelFormat", PyvtkPVScalarBarActor_SetRangeLabelFormat, METH_VARARGS,
   "V.SetRangeLabelFormat(string)\nC++: virtual void SetRangeLabelFormat(const char *_arg)\n\nSet the C-style format string for the range labels.\n"},
  {"AddValueLabelIfUnoccluded", PyvtkPVScalarBarActor_AddValueLabelIfUnoccluded, METH_VARARGS,
   "V.AddValueLabelIfUnoccluded(float, float, float)\nC++: virtual void AddValueLabelIfUnoccluded(double value,\n    double pos, double diff)\n\nAdd value as annotation label on scalar bar at the given position\n"},
  {"GetTitleJustification", PyvtkPVScalarBarActor_GetTitleJustification, METH_VARARGS,
   "V.GetTitleJustification() -> int\nC++: virtual int GetTitleJustification()\n\nSet the title justification. Valid values are VTK_TEXT_LEFT,\nVTK_TEXT_CENTERED, and VTK_TEXT_RIGHT.\n"},
  {"SetTitleJustification", PyvtkPVScalarBarActor_SetTitleJustification, METH_VARARGS,
   "V.SetTitleJustification(int)\nC++: virtual void SetTitleJustification(int _arg)\n\nSet the title justification. Valid values are VTK_TEXT_LEFT,\nVTK_TEXT_CENTERED, and VTK_TEXT_RIGHT.\n"},
  {"GetTitleJustificationMinValue", PyvtkPVScalarBarActor_GetTitleJustificationMinValue, METH_VARARGS,
   "V.GetTitleJustificationMinValue() -> int\nC++: virtual int GetTitleJustificationMinValue()\n\nSet the title justification. Valid values are VTK_TEXT_LEFT,\nVTK_TEXT_CENTERED, and VTK_TEXT_RIGHT.\n"},
  {"GetTitleJustificationMaxValue", PyvtkPVScalarBarActor_GetTitleJustificationMaxValue, METH_VARARGS,
   "V.GetTitleJustificationMaxValue() -> int\nC++: virtual int GetTitleJustificationMaxValue()\n\nSet the title justification. Valid values are VTK_TEXT_LEFT,\nVTK_TEXT_CENTERED, and VTK_TEXT_RIGHT.\n"},
  {"GetAddRangeAnnotations", PyvtkPVScalarBarActor_GetAddRangeAnnotations, METH_VARARGS,
   "V.GetAddRangeAnnotations() -> int\nC++: virtual int GetAddRangeAnnotations()\n\nSet whether the scalar data range endpoints (minimum and maximum)\nare added as annotations.\n"},
  {"SetAddRangeAnnotations", PyvtkPVScalarBarActor_SetAddRangeAnnotations, METH_VARARGS,
   "V.SetAddRangeAnnotations(int)\nC++: virtual void SetAddRangeAnnotations(int _arg)\n\nSet whether the scalar data range endpoints (minimum and maximum)\nare added as annotations.\n"},
  {"AddRangeAnnotationsOn", PyvtkPVScalarBarActor_AddRangeAnnotationsOn, METH_VARARGS,
   "V.AddRangeAnnotationsOn()\nC++: virtual void AddRangeAnnotationsOn()\n\nSet whether the scalar data range endpoints (minimum and maximum)\nare added as annotations.\n"},
  {"AddRangeAnnotationsOff", PyvtkPVScalarBarActor_AddRangeAnnotationsOff, METH_VARARGS,
   "V.AddRangeAnnotationsOff()\nC++: virtual void AddRangeAnnotationsOff()\n\nSet whether the scalar data range endpoints (minimum and maximum)\nare added as annotations.\n"},
  {"ReleaseGraphicsResources", PyvtkPVScalarBarActor_ReleaseGraphicsResources, METH_VARARGS,
   "V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nRelease any graphics resources that are being consumed by this\nactor. The parameter window could be used to determine which\ngraphic resources to release.\n"},
  {"RenderOpaqueGeometry", PyvtkPVScalarBarActor_RenderOpaqueGeometry, METH_VARARGS,
   "V.RenderOpaqueGeometry(vtkViewport) -> int\nC++: int RenderOpaqueGeometry(vtkViewport *viewport) override;\n\nOverridden to sync internal variables with renderer state.\n"},
  {"RenderOverlay", PyvtkPVScalarBarActor_RenderOverlay, METH_VARARGS,
   "V.RenderOverlay(vtkViewport) -> int\nC++: int RenderOverlay(vtkViewport *viewport) override;\n\nDraw the scalar bar and annotation text to the screen.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPVScalarBarActor_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsRenderingPython.vtkPVScalarBarActor", // tp_name
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
  PyvtkPVScalarBarActor_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPVScalarBarActor_StaticNew()
{
  return vtkPVScalarBarActor::New();
}

PyObject *PyvtkPVScalarBarActor_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPVScalarBarActor_Type, PyvtkPVScalarBarActor_Methods,
    "vtkPVScalarBarActor",
 &PyvtkPVScalarBarActor_StaticNew);

  PyTypeObject *pytype = &PyvtkPVScalarBarActor_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkScalarBarActor_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPVScalarBarActor(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPVScalarBarActor_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPVScalarBarActor", o) != 0)
  {
    Py_DECREF(o);
  }

}

