// python wrapper for vtkDataLabelRepresentation
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
#include "vtkDataLabelRepresentation.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkDataLabelRepresentation(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkDataLabelRepresentation_ClassNew(); }

#ifndef DECLARED_PyvtkPVDataRepresentation_ClassNew
extern "C" { PyObject *PyvtkPVDataRepresentation_ClassNew(); }
#define DECLARED_PyvtkPVDataRepresentation_ClassNew
#endif

static const char *PyvtkDataLabelRepresentation_Doc =
  "vtkDataLabelRepresentation - representation for showing cell and\npoint labels.\n\n"
  "Superclass: vtkPVDataRepresentation\n\n"
  "vtkDataLabelRepresentation is a representation for showing cell\n"
  "and/or point labels. This representation relies on all the data being\n"
  "cloned on all nodes hence beware of using this representation for\n"
  "large datasets.@par Caveat: Note that vtkDataLabelRepresentation adds\n"
  "the label props to the non-composited renderer.@par Thanks: The\n"
  "addition of a transformation matrix was supported by CEA/DIF\n"
  "Commissariat a l'Energie Atomique, Centre DAM Ile-De-France, Arpajon,\n"
  "France.\n\n";


static PyObject *
PyvtkDataLabelRepresentation_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDataLabelRepresentation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataLabelRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataLabelRepresentation *op = static_cast<vtkDataLabelRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDataLabelRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataLabelRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDataLabelRepresentation *tempr = vtkDataLabelRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataLabelRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataLabelRepresentation *op = static_cast<vtkDataLabelRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataLabelRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDataLabelRepresentation::NewInstance());

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
PyvtkDataLabelRepresentation_MarkModified(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MarkModified");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataLabelRepresentation *op = static_cast<vtkDataLabelRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MarkModified();
    }
    else
    {
      op->vtkDataLabelRepresentation::MarkModified();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataLabelRepresentation_SetVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataLabelRepresentation *op = static_cast<vtkDataLabelRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVisibility(temp0);
    }
    else
    {
      op->vtkDataLabelRepresentation::SetVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataLabelRepresentation_GetVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataLabelRepresentation *op = static_cast<vtkDataLabelRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetVisibility() :
      op->vtkDataLabelRepresentation::GetVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataLabelRepresentation_SetMaximumNumberOfLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumNumberOfLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataLabelRepresentation *op = static_cast<vtkDataLabelRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaximumNumberOfLabels(temp0);
    }
    else
    {
      op->vtkDataLabelRepresentation::SetMaximumNumberOfLabels(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataLabelRepresentation_GetMaximumNumberOfLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataLabelRepresentation *op = static_cast<vtkDataLabelRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaximumNumberOfLabels() :
      op->vtkDataLabelRepresentation::GetMaximumNumberOfLabels());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataLabelRepresentation_SetPointLabelVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataLabelRepresentation *op = static_cast<vtkDataLabelRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPointLabelVisibility(temp0);
    }
    else
    {
      op->vtkDataLabelRepresentation::SetPointLabelVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataLabelRepresentation_SetPointFieldDataArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointFieldDataArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataLabelRepresentation *op = static_cast<vtkDataLabelRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPointFieldDataArrayName(temp0);
    }
    else
    {
      op->vtkDataLabelRepresentation::SetPointFieldDataArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataLabelRepresentation_SetPointLabelMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointLabelMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataLabelRepresentation *op = static_cast<vtkDataLabelRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPointLabelMode(temp0);
    }
    else
    {
      op->vtkDataLabelRepresentation::SetPointLabelMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataLabelRepresentation_SetPointLabelColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointLabelColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataLabelRepresentation *op = static_cast<vtkDataLabelRepresentation *>(vp);

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
      op->SetPointLabelColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkDataLabelRepresentation::SetPointLabelColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataLabelRepresentation_SetPointLabelOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointLabelOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataLabelRepresentation *op = static_cast<vtkDataLabelRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPointLabelOpacity(temp0);
    }
    else
    {
      op->vtkDataLabelRepresentation::SetPointLabelOpacity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataLabelRepresentation_SetPointLabelFontFamily(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointLabelFontFamily");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataLabelRepresentation *op = static_cast<vtkDataLabelRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPointLabelFontFamily(temp0);
    }
    else
    {
      op->vtkDataLabelRepresentation::SetPointLabelFontFamily(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataLabelRepresentation_SetPointLabelFontFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointLabelFontFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataLabelRepresentation *op = static_cast<vtkDataLabelRepresentation *>(vp);

  size_t size0 = ap.GetStringSize(0);
  vtkPythonArgs::Array<char> store0(2*size0 + 1);
  char *temp0 = store0.Data();
  char *save0 = temp0 + size0 + 1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetPointLabelFontFile(temp0);
    }
    else
    {
      op->vtkDataLabelRepresentation::SetPointLabelFontFile(temp0);
    }

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
PyvtkDataLabelRepresentation_SetPointLabelBold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointLabelBold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataLabelRepresentation *op = static_cast<vtkDataLabelRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPointLabelBold(temp0);
    }
    else
    {
      op->vtkDataLabelRepresentation::SetPointLabelBold(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataLabelRepresentation_SetPointLabelItalic(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointLabelItalic");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataLabelRepresentation *op = static_cast<vtkDataLabelRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPointLabelItalic(temp0);
    }
    else
    {
      op->vtkDataLabelRepresentation::SetPointLabelItalic(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataLabelRepresentation_SetPointLabelShadow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointLabelShadow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataLabelRepresentation *op = static_cast<vtkDataLabelRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPointLabelShadow(temp0);
    }
    else
    {
      op->vtkDataLabelRepresentation::SetPointLabelShadow(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataLabelRepresentation_SetPointLabelJustification(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointLabelJustification");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataLabelRepresentation *op = static_cast<vtkDataLabelRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPointLabelJustification(temp0);
    }
    else
    {
      op->vtkDataLabelRepresentation::SetPointLabelJustification(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataLabelRepresentation_SetPointLabelFontSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointLabelFontSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataLabelRepresentation *op = static_cast<vtkDataLabelRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPointLabelFontSize(temp0);
    }
    else
    {
      op->vtkDataLabelRepresentation::SetPointLabelFontSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataLabelRepresentation_SetPointLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataLabelRepresentation *op = static_cast<vtkDataLabelRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPointLabelFormat(temp0);
    }
    else
    {
      op->vtkDataLabelRepresentation::SetPointLabelFormat(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataLabelRepresentation_SetCellLabelVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataLabelRepresentation *op = static_cast<vtkDataLabelRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCellLabelVisibility(temp0);
    }
    else
    {
      op->vtkDataLabelRepresentation::SetCellLabelVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataLabelRepresentation_SetCellFieldDataArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellFieldDataArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataLabelRepresentation *op = static_cast<vtkDataLabelRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCellFieldDataArrayName(temp0);
    }
    else
    {
      op->vtkDataLabelRepresentation::SetCellFieldDataArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataLabelRepresentation_SetCellLabelMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellLabelMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataLabelRepresentation *op = static_cast<vtkDataLabelRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCellLabelMode(temp0);
    }
    else
    {
      op->vtkDataLabelRepresentation::SetCellLabelMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataLabelRepresentation_SetCellLabelColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellLabelColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataLabelRepresentation *op = static_cast<vtkDataLabelRepresentation *>(vp);

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
      op->SetCellLabelColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkDataLabelRepresentation::SetCellLabelColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataLabelRepresentation_SetCellLabelOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellLabelOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataLabelRepresentation *op = static_cast<vtkDataLabelRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCellLabelOpacity(temp0);
    }
    else
    {
      op->vtkDataLabelRepresentation::SetCellLabelOpacity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataLabelRepresentation_SetCellLabelFontFamily(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellLabelFontFamily");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataLabelRepresentation *op = static_cast<vtkDataLabelRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCellLabelFontFamily(temp0);
    }
    else
    {
      op->vtkDataLabelRepresentation::SetCellLabelFontFamily(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataLabelRepresentation_SetCellLabelFontFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellLabelFontFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataLabelRepresentation *op = static_cast<vtkDataLabelRepresentation *>(vp);

  size_t size0 = ap.GetStringSize(0);
  vtkPythonArgs::Array<char> store0(2*size0 + 1);
  char *temp0 = store0.Data();
  char *save0 = temp0 + size0 + 1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetCellLabelFontFile(temp0);
    }
    else
    {
      op->vtkDataLabelRepresentation::SetCellLabelFontFile(temp0);
    }

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
PyvtkDataLabelRepresentation_SetCellLabelBold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellLabelBold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataLabelRepresentation *op = static_cast<vtkDataLabelRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCellLabelBold(temp0);
    }
    else
    {
      op->vtkDataLabelRepresentation::SetCellLabelBold(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataLabelRepresentation_SetCellLabelItalic(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellLabelItalic");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataLabelRepresentation *op = static_cast<vtkDataLabelRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCellLabelItalic(temp0);
    }
    else
    {
      op->vtkDataLabelRepresentation::SetCellLabelItalic(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataLabelRepresentation_SetCellLabelShadow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellLabelShadow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataLabelRepresentation *op = static_cast<vtkDataLabelRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCellLabelShadow(temp0);
    }
    else
    {
      op->vtkDataLabelRepresentation::SetCellLabelShadow(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataLabelRepresentation_SetCellLabelJustification(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellLabelJustification");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataLabelRepresentation *op = static_cast<vtkDataLabelRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCellLabelJustification(temp0);
    }
    else
    {
      op->vtkDataLabelRepresentation::SetCellLabelJustification(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataLabelRepresentation_SetCellLabelFontSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellLabelFontSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataLabelRepresentation *op = static_cast<vtkDataLabelRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCellLabelFontSize(temp0);
    }
    else
    {
      op->vtkDataLabelRepresentation::SetCellLabelFontSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataLabelRepresentation_SetCellLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataLabelRepresentation *op = static_cast<vtkDataLabelRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCellLabelFormat(temp0);
    }
    else
    {
      op->vtkDataLabelRepresentation::SetCellLabelFormat(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataLabelRepresentation_SetOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataLabelRepresentation *op = static_cast<vtkDataLabelRepresentation *>(vp);

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
      op->SetOrientation(temp0, temp1, temp2);
    }
    else
    {
      op->vtkDataLabelRepresentation::SetOrientation(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataLabelRepresentation_SetOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataLabelRepresentation *op = static_cast<vtkDataLabelRepresentation *>(vp);

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
      op->SetOrigin(temp0, temp1, temp2);
    }
    else
    {
      op->vtkDataLabelRepresentation::SetOrigin(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataLabelRepresentation_SetPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataLabelRepresentation *op = static_cast<vtkDataLabelRepresentation *>(vp);

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
      op->SetPosition(temp0, temp1, temp2);
    }
    else
    {
      op->vtkDataLabelRepresentation::SetPosition(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataLabelRepresentation_SetScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataLabelRepresentation *op = static_cast<vtkDataLabelRepresentation *>(vp);

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
      op->SetScale(temp0, temp1, temp2);
    }
    else
    {
      op->vtkDataLabelRepresentation::SetScale(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataLabelRepresentation_SetUserTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUserTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataLabelRepresentation *op = static_cast<vtkDataLabelRepresentation *>(vp);

  const size_t size0 = 16;
  double temp0[16];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetUserTransform(temp0);
    }
    else
    {
      op->vtkDataLabelRepresentation::SetUserTransform(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataLabelRepresentation_ProcessViewRequest(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessViewRequest");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataLabelRepresentation *op = static_cast<vtkDataLabelRepresentation *>(vp);

  vtkInformationRequestKey *temp0 = nullptr;
  vtkInformation *temp1 = nullptr;
  vtkInformation *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkInformationRequestKey") &&
      ap.GetVTKObject(temp1, "vtkInformation") &&
      ap.GetVTKObject(temp2, "vtkInformation"))
  {
    int tempr = (ap.IsBound() ?
      op->ProcessViewRequest(temp0, temp1, temp2) :
      op->vtkDataLabelRepresentation::ProcessViewRequest(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkDataLabelRepresentation_Methods[] = {
  {"IsTypeOf", PyvtkDataLabelRepresentation_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkDataLabelRepresentation_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkDataLabelRepresentation_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkDataLabelRepresentation\nC++: static vtkDataLabelRepresentation *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkDataLabelRepresentation_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkDataLabelRepresentation\nC++: vtkDataLabelRepresentation *NewInstance()\n\n"},
  {"MarkModified", PyvtkDataLabelRepresentation_MarkModified, METH_VARARGS,
   "V.MarkModified()\nC++: void MarkModified() override;\n\nThis needs to be called on all instances of\nvtkGeometryRepresentation when the input is modified. This is\nessential since the geometry filter does not have any real-input\non the client side which messes with the Update requests.\n"},
  {"SetVisibility", PyvtkDataLabelRepresentation_SetVisibility, METH_VARARGS,
   "V.SetVisibility(bool)\nC++: void SetVisibility(bool val) override;\n\nGet/Set the visibility for this representation. When the\nvisibility of representation of false, all view passes are\nignored.\n"},
  {"GetVisibility", PyvtkDataLabelRepresentation_GetVisibility, METH_VARARGS,
   "V.GetVisibility() -> bool\nC++: bool GetVisibility() override;\n\nGet/Set the visibility for this representation. When the\nvisibility of representation of false, all view passes are\nignored.\n"},
  {"SetMaximumNumberOfLabels", PyvtkDataLabelRepresentation_SetMaximumNumberOfLabels, METH_VARARGS,
   "V.SetMaximumNumberOfLabels(int)\nC++: void SetMaximumNumberOfLabels(int numLabels)\n\nGet/Set the maximum number of points/cells that will be labeled. \nToo many labels is difficult to read so this may help with large\ndatasets.  Default: 100.\n"},
  {"GetMaximumNumberOfLabels", PyvtkDataLabelRepresentation_GetMaximumNumberOfLabels, METH_VARARGS,
   "V.GetMaximumNumberOfLabels() -> int\nC++: int GetMaximumNumberOfLabels()\n\nGet/Set the maximum number of points/cells that will be labeled. \nToo many labels is difficult to read so this may help with large\ndatasets.  Default: 100.\n"},
  {"SetPointLabelVisibility", PyvtkDataLabelRepresentation_SetPointLabelVisibility, METH_VARARGS,
   "V.SetPointLabelVisibility(int)\nC++: void SetPointLabelVisibility(int)\n\n"},
  {"SetPointFieldDataArrayName", PyvtkDataLabelRepresentation_SetPointFieldDataArrayName, METH_VARARGS,
   "V.SetPointFieldDataArrayName(string)\nC++: void SetPointFieldDataArrayName(const char *)\n\n"},
  {"SetPointLabelMode", PyvtkDataLabelRepresentation_SetPointLabelMode, METH_VARARGS,
   "V.SetPointLabelMode(int)\nC++: void SetPointLabelMode(int)\n\n"},
  {"SetPointLabelColor", PyvtkDataLabelRepresentation_SetPointLabelColor, METH_VARARGS,
   "V.SetPointLabelColor(float, float, float)\nC++: void SetPointLabelColor(double r, double g, double b)\n\n"},
  {"SetPointLabelOpacity", PyvtkDataLabelRepresentation_SetPointLabelOpacity, METH_VARARGS,
   "V.SetPointLabelOpacity(float)\nC++: void SetPointLabelOpacity(double)\n\n"},
  {"SetPointLabelFontFamily", PyvtkDataLabelRepresentation_SetPointLabelFontFamily, METH_VARARGS,
   "V.SetPointLabelFontFamily(int)\nC++: void SetPointLabelFontFamily(int)\n\n"},
  {"SetPointLabelFontFile", PyvtkDataLabelRepresentation_SetPointLabelFontFile, METH_VARARGS,
   "V.SetPointLabelFontFile(string)\nC++: void SetPointLabelFontFile(char *)\n\n"},
  {"SetPointLabelBold", PyvtkDataLabelRepresentation_SetPointLabelBold, METH_VARARGS,
   "V.SetPointLabelBold(int)\nC++: void SetPointLabelBold(int)\n\n"},
  {"SetPointLabelItalic", PyvtkDataLabelRepresentation_SetPointLabelItalic, METH_VARARGS,
   "V.SetPointLabelItalic(int)\nC++: void SetPointLabelItalic(int)\n\n"},
  {"SetPointLabelShadow", PyvtkDataLabelRepresentation_SetPointLabelShadow, METH_VARARGS,
   "V.SetPointLabelShadow(int)\nC++: void SetPointLabelShadow(int)\n\n"},
  {"SetPointLabelJustification", PyvtkDataLabelRepresentation_SetPointLabelJustification, METH_VARARGS,
   "V.SetPointLabelJustification(int)\nC++: void SetPointLabelJustification(int)\n\n"},
  {"SetPointLabelFontSize", PyvtkDataLabelRepresentation_SetPointLabelFontSize, METH_VARARGS,
   "V.SetPointLabelFontSize(int)\nC++: void SetPointLabelFontSize(int)\n\n"},
  {"SetPointLabelFormat", PyvtkDataLabelRepresentation_SetPointLabelFormat, METH_VARARGS,
   "V.SetPointLabelFormat(string)\nC++: void SetPointLabelFormat(const char *)\n\n"},
  {"SetCellLabelVisibility", PyvtkDataLabelRepresentation_SetCellLabelVisibility, METH_VARARGS,
   "V.SetCellLabelVisibility(int)\nC++: void SetCellLabelVisibility(int)\n\n"},
  {"SetCellFieldDataArrayName", PyvtkDataLabelRepresentation_SetCellFieldDataArrayName, METH_VARARGS,
   "V.SetCellFieldDataArrayName(string)\nC++: void SetCellFieldDataArrayName(const char *)\n\n"},
  {"SetCellLabelMode", PyvtkDataLabelRepresentation_SetCellLabelMode, METH_VARARGS,
   "V.SetCellLabelMode(int)\nC++: void SetCellLabelMode(int)\n\n"},
  {"SetCellLabelColor", PyvtkDataLabelRepresentation_SetCellLabelColor, METH_VARARGS,
   "V.SetCellLabelColor(float, float, float)\nC++: void SetCellLabelColor(double r, double g, double b)\n\n"},
  {"SetCellLabelOpacity", PyvtkDataLabelRepresentation_SetCellLabelOpacity, METH_VARARGS,
   "V.SetCellLabelOpacity(float)\nC++: void SetCellLabelOpacity(double)\n\n"},
  {"SetCellLabelFontFamily", PyvtkDataLabelRepresentation_SetCellLabelFontFamily, METH_VARARGS,
   "V.SetCellLabelFontFamily(int)\nC++: void SetCellLabelFontFamily(int)\n\n"},
  {"SetCellLabelFontFile", PyvtkDataLabelRepresentation_SetCellLabelFontFile, METH_VARARGS,
   "V.SetCellLabelFontFile(string)\nC++: void SetCellLabelFontFile(char *)\n\n"},
  {"SetCellLabelBold", PyvtkDataLabelRepresentation_SetCellLabelBold, METH_VARARGS,
   "V.SetCellLabelBold(int)\nC++: void SetCellLabelBold(int)\n\n"},
  {"SetCellLabelItalic", PyvtkDataLabelRepresentation_SetCellLabelItalic, METH_VARARGS,
   "V.SetCellLabelItalic(int)\nC++: void SetCellLabelItalic(int)\n\n"},
  {"SetCellLabelShadow", PyvtkDataLabelRepresentation_SetCellLabelShadow, METH_VARARGS,
   "V.SetCellLabelShadow(int)\nC++: void SetCellLabelShadow(int)\n\n"},
  {"SetCellLabelJustification", PyvtkDataLabelRepresentation_SetCellLabelJustification, METH_VARARGS,
   "V.SetCellLabelJustification(int)\nC++: void SetCellLabelJustification(int)\n\n"},
  {"SetCellLabelFontSize", PyvtkDataLabelRepresentation_SetCellLabelFontSize, METH_VARARGS,
   "V.SetCellLabelFontSize(int)\nC++: void SetCellLabelFontSize(int)\n\n"},
  {"SetCellLabelFormat", PyvtkDataLabelRepresentation_SetCellLabelFormat, METH_VARARGS,
   "V.SetCellLabelFormat(string)\nC++: void SetCellLabelFormat(const char *)\n\n"},
  {"SetOrientation", PyvtkDataLabelRepresentation_SetOrientation, METH_VARARGS,
   "V.SetOrientation(float, float, float)\nC++: void SetOrientation(double, double, double)\n\nUsed to build the internal transform.\n"},
  {"SetOrigin", PyvtkDataLabelRepresentation_SetOrigin, METH_VARARGS,
   "V.SetOrigin(float, float, float)\nC++: void SetOrigin(double, double, double)\n\nUsed to build the internal transform.\n"},
  {"SetPosition", PyvtkDataLabelRepresentation_SetPosition, METH_VARARGS,
   "V.SetPosition(float, float, float)\nC++: void SetPosition(double, double, double)\n\nUsed to build the internal transform.\n"},
  {"SetScale", PyvtkDataLabelRepresentation_SetScale, METH_VARARGS,
   "V.SetScale(float, float, float)\nC++: void SetScale(double, double, double)\n\nUsed to build the internal transform.\n"},
  {"SetUserTransform", PyvtkDataLabelRepresentation_SetUserTransform, METH_VARARGS,
   "V.SetUserTransform((float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float))\nC++: void SetUserTransform(const double[16])\n\nUsed to build the internal transform.\n"},
  {"ProcessViewRequest", PyvtkDataLabelRepresentation_ProcessViewRequest, METH_VARARGS,
   "V.ProcessViewRequest(vtkInformationRequestKey, vtkInformation,\n    vtkInformation) -> int\nC++: int ProcessViewRequest(\n    vtkInformationRequestKey *request_type,\n    vtkInformation *inInfo, vtkInformation *outInfo) override;\n\nvtkAlgorithm::ProcessRequest() equivalent for rendering passes.\nThis is typically called by the vtkView to request meta-data from\nthe representations or ask them to perform certain tasks e.g.\nPrepareForRendering.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkDataLabelRepresentation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVClientServerCoreRenderingPython.vtkDataLabelRepresentation", // tp_name
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
  PyvtkDataLabelRepresentation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkDataLabelRepresentation_StaticNew()
{
  return vtkDataLabelRepresentation::New();
}

PyObject *PyvtkDataLabelRepresentation_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkDataLabelRepresentation_Type, PyvtkDataLabelRepresentation_Methods,
    "vtkDataLabelRepresentation",
 &PyvtkDataLabelRepresentation_StaticNew);

  PyTypeObject *pytype = &PyvtkDataLabelRepresentation_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPVDataRepresentation_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkDataLabelRepresentation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkDataLabelRepresentation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkDataLabelRepresentation", o) != 0)
  {
    Py_DECREF(o);
  }

}

