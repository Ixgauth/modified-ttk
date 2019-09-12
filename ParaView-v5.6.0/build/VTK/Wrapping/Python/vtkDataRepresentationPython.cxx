// python wrapper for vtkDataRepresentation
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
#include "vtkDataRepresentation.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkDataRepresentation(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkDataRepresentation_ClassNew(); }

#ifndef DECLARED_PyvtkPassInputTypeAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPassInputTypeAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPassInputTypeAlgorithm_ClassNew
#endif

static const char *PyvtkDataRepresentation_Doc =
  "vtkDataRepresentation - The superclass for all representations\n\n"
  "Superclass: vtkPassInputTypeAlgorithm\n\n"
  "vtkDataRepresentation the superclass for representations of data\n"
  "objects. This class itself may be instantiated and used as a\n"
  "representation that simply holds a connection to a pipeline.\n\n"
  "If there are multiple representations present in a view, you should\n"
  "use a subclass of vtkDataRepresentation.  The representation is\n"
  "responsible for taking the input pipeline connection and converting\n"
  "it to an object usable by a view.  In the most common case, the\n"
  "representation will contain the pipeline necessary to convert a data\n"
  "object into an actor or set of actors.\n\n"
  "The representation has a concept of a selection.  If the user\n"
  "performs a selection operation on the view, the view forwards this on\n"
  "to its representations.  The representation is responsible for\n"
  "displaying that selection in an appropriate way.\n\n"
  "Representation selections may also be linked.  The representation\n"
  "shares the selection by converting it into a view-independent format,\n"
  "then setting the selection on its vtkAnnotationLink.  Other\n"
  "representations sharing the same selection link instance will get the\n"
  "same selection from the selection link when the view is updated.  The\n"
  "application is responsible for linking representations as appropriate\n"
  "by setting the same vtkAnnotationLink on each linked representation.\n\n";


static PyObject *
PyvtkDataRepresentation_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDataRepresentation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataRepresentation *op = static_cast<vtkDataRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDataRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDataRepresentation *tempr = vtkDataRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataRepresentation *op = static_cast<vtkDataRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDataRepresentation::NewInstance());

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
PyvtkDataRepresentation_GetInputConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataRepresentation *op = static_cast<vtkDataRepresentation *>(vp);

  int temp0 = 0;
  int temp1 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 2) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    vtkAlgorithmOutput *tempr = (ap.IsBound() ?
      op->GetInputConnection(temp0, temp1) :
      op->vtkDataRepresentation::GetInputConnection(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataRepresentation_GetAnnotationLink(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnnotationLink");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataRepresentation *op = static_cast<vtkDataRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAnnotationLink *tempr = (ap.IsBound() ?
      op->GetAnnotationLink() :
      op->vtkDataRepresentation::GetAnnotationLink());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataRepresentation_SetAnnotationLink(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAnnotationLink");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataRepresentation *op = static_cast<vtkDataRepresentation *>(vp);

  vtkAnnotationLink *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAnnotationLink"))
  {
    if (ap.IsBound())
    {
      op->SetAnnotationLink(temp0);
    }
    else
    {
      op->vtkDataRepresentation::SetAnnotationLink(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataRepresentation_ApplyViewTheme(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ApplyViewTheme");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataRepresentation *op = static_cast<vtkDataRepresentation *>(vp);

  vtkViewTheme *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewTheme"))
  {
    if (ap.IsBound())
    {
      op->ApplyViewTheme(temp0);
    }
    else
    {
      op->vtkDataRepresentation::ApplyViewTheme(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataRepresentation_Select_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Select");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataRepresentation *op = static_cast<vtkDataRepresentation *>(vp);

  vtkView *temp0 = nullptr;
  vtkSelection *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkView") &&
      ap.GetVTKObject(temp1, "vtkSelection"))
  {
    if (ap.IsBound())
    {
      op->Select(temp0, temp1);
    }
    else
    {
      op->vtkDataRepresentation::Select(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDataRepresentation_Select_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Select");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataRepresentation *op = static_cast<vtkDataRepresentation *>(vp);

  vtkView *temp0 = nullptr;
  vtkSelection *temp1 = nullptr;
  bool temp2 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkView") &&
      ap.GetVTKObject(temp1, "vtkSelection") &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->Select(temp0, temp1, temp2);
    }
    else
    {
      op->vtkDataRepresentation::Select(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDataRepresentation_Select(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkDataRepresentation_Select_s1(self, args);
    case 3:
      return PyvtkDataRepresentation_Select_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Select");
  return nullptr;
}



static PyObject *
PyvtkDataRepresentation_Annotate_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Annotate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataRepresentation *op = static_cast<vtkDataRepresentation *>(vp);

  vtkView *temp0 = nullptr;
  vtkAnnotationLayers *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkView") &&
      ap.GetVTKObject(temp1, "vtkAnnotationLayers"))
  {
    if (ap.IsBound())
    {
      op->Annotate(temp0, temp1);
    }
    else
    {
      op->vtkDataRepresentation::Annotate(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDataRepresentation_Annotate_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Annotate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataRepresentation *op = static_cast<vtkDataRepresentation *>(vp);

  vtkView *temp0 = nullptr;
  vtkAnnotationLayers *temp1 = nullptr;
  bool temp2 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkView") &&
      ap.GetVTKObject(temp1, "vtkAnnotationLayers") &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->Annotate(temp0, temp1, temp2);
    }
    else
    {
      op->vtkDataRepresentation::Annotate(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDataRepresentation_Annotate(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkDataRepresentation_Annotate_s1(self, args);
    case 3:
      return PyvtkDataRepresentation_Annotate_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Annotate");
  return nullptr;
}



static PyObject *
PyvtkDataRepresentation_SetSelectable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataRepresentation *op = static_cast<vtkDataRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSelectable(temp0);
    }
    else
    {
      op->vtkDataRepresentation::SetSelectable(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataRepresentation_GetSelectable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataRepresentation *op = static_cast<vtkDataRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetSelectable() :
      op->vtkDataRepresentation::GetSelectable());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataRepresentation_SelectableOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectableOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataRepresentation *op = static_cast<vtkDataRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SelectableOn();
    }
    else
    {
      op->vtkDataRepresentation::SelectableOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataRepresentation_SelectableOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectableOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataRepresentation *op = static_cast<vtkDataRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SelectableOff();
    }
    else
    {
      op->vtkDataRepresentation::SelectableOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataRepresentation_UpdateSelection_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataRepresentation *op = static_cast<vtkDataRepresentation *>(vp);

  vtkSelection *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSelection"))
  {
    if (ap.IsBound())
    {
      op->UpdateSelection(temp0);
    }
    else
    {
      op->vtkDataRepresentation::UpdateSelection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDataRepresentation_UpdateSelection_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataRepresentation *op = static_cast<vtkDataRepresentation *>(vp);

  vtkSelection *temp0 = nullptr;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSelection") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->UpdateSelection(temp0, temp1);
    }
    else
    {
      op->vtkDataRepresentation::UpdateSelection(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDataRepresentation_UpdateSelection(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkDataRepresentation_UpdateSelection_s1(self, args);
    case 2:
      return PyvtkDataRepresentation_UpdateSelection_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "UpdateSelection");
  return nullptr;
}



static PyObject *
PyvtkDataRepresentation_UpdateAnnotations_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateAnnotations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataRepresentation *op = static_cast<vtkDataRepresentation *>(vp);

  vtkAnnotationLayers *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAnnotationLayers"))
  {
    if (ap.IsBound())
    {
      op->UpdateAnnotations(temp0);
    }
    else
    {
      op->vtkDataRepresentation::UpdateAnnotations(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDataRepresentation_UpdateAnnotations_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateAnnotations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataRepresentation *op = static_cast<vtkDataRepresentation *>(vp);

  vtkAnnotationLayers *temp0 = nullptr;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkAnnotationLayers") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->UpdateAnnotations(temp0, temp1);
    }
    else
    {
      op->vtkDataRepresentation::UpdateAnnotations(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDataRepresentation_UpdateAnnotations(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkDataRepresentation_UpdateAnnotations_s1(self, args);
    case 2:
      return PyvtkDataRepresentation_UpdateAnnotations_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "UpdateAnnotations");
  return nullptr;
}



static PyObject *
PyvtkDataRepresentation_GetInternalAnnotationOutputPort_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInternalAnnotationOutputPort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataRepresentation *op = static_cast<vtkDataRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAlgorithmOutput *tempr = (ap.IsBound() ?
      op->GetInternalAnnotationOutputPort() :
      op->vtkDataRepresentation::GetInternalAnnotationOutputPort());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDataRepresentation_GetInternalAnnotationOutputPort_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInternalAnnotationOutputPort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataRepresentation *op = static_cast<vtkDataRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkAlgorithmOutput *tempr = (ap.IsBound() ?
      op->GetInternalAnnotationOutputPort(temp0) :
      op->vtkDataRepresentation::GetInternalAnnotationOutputPort(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDataRepresentation_GetInternalAnnotationOutputPort_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInternalAnnotationOutputPort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataRepresentation *op = static_cast<vtkDataRepresentation *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkAlgorithmOutput *tempr = (ap.IsBound() ?
      op->GetInternalAnnotationOutputPort(temp0, temp1) :
      op->vtkDataRepresentation::GetInternalAnnotationOutputPort(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDataRepresentation_GetInternalAnnotationOutputPort(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkDataRepresentation_GetInternalAnnotationOutputPort_s1(self, args);
    case 1:
      return PyvtkDataRepresentation_GetInternalAnnotationOutputPort_s2(self, args);
    case 2:
      return PyvtkDataRepresentation_GetInternalAnnotationOutputPort_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetInternalAnnotationOutputPort");
  return nullptr;
}



static PyObject *
PyvtkDataRepresentation_GetInternalSelectionOutputPort_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInternalSelectionOutputPort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataRepresentation *op = static_cast<vtkDataRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAlgorithmOutput *tempr = (ap.IsBound() ?
      op->GetInternalSelectionOutputPort() :
      op->vtkDataRepresentation::GetInternalSelectionOutputPort());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDataRepresentation_GetInternalSelectionOutputPort_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInternalSelectionOutputPort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataRepresentation *op = static_cast<vtkDataRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkAlgorithmOutput *tempr = (ap.IsBound() ?
      op->GetInternalSelectionOutputPort(temp0) :
      op->vtkDataRepresentation::GetInternalSelectionOutputPort(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDataRepresentation_GetInternalSelectionOutputPort_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInternalSelectionOutputPort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataRepresentation *op = static_cast<vtkDataRepresentation *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkAlgorithmOutput *tempr = (ap.IsBound() ?
      op->GetInternalSelectionOutputPort(temp0, temp1) :
      op->vtkDataRepresentation::GetInternalSelectionOutputPort(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDataRepresentation_GetInternalSelectionOutputPort(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkDataRepresentation_GetInternalSelectionOutputPort_s1(self, args);
    case 1:
      return PyvtkDataRepresentation_GetInternalSelectionOutputPort_s2(self, args);
    case 2:
      return PyvtkDataRepresentation_GetInternalSelectionOutputPort_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetInternalSelectionOutputPort");
  return nullptr;
}



static PyObject *
PyvtkDataRepresentation_GetInternalOutputPort_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInternalOutputPort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataRepresentation *op = static_cast<vtkDataRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAlgorithmOutput *tempr = (ap.IsBound() ?
      op->GetInternalOutputPort() :
      op->vtkDataRepresentation::GetInternalOutputPort());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDataRepresentation_GetInternalOutputPort_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInternalOutputPort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataRepresentation *op = static_cast<vtkDataRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkAlgorithmOutput *tempr = (ap.IsBound() ?
      op->GetInternalOutputPort(temp0) :
      op->vtkDataRepresentation::GetInternalOutputPort(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDataRepresentation_GetInternalOutputPort_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInternalOutputPort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataRepresentation *op = static_cast<vtkDataRepresentation *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkAlgorithmOutput *tempr = (ap.IsBound() ?
      op->GetInternalOutputPort(temp0, temp1) :
      op->vtkDataRepresentation::GetInternalOutputPort(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDataRepresentation_GetInternalOutputPort(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkDataRepresentation_GetInternalOutputPort_s1(self, args);
    case 1:
      return PyvtkDataRepresentation_GetInternalOutputPort_s2(self, args);
    case 2:
      return PyvtkDataRepresentation_GetInternalOutputPort_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetInternalOutputPort");
  return nullptr;
}



static PyObject *
PyvtkDataRepresentation_SetSelectionType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectionType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataRepresentation *op = static_cast<vtkDataRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSelectionType(temp0);
    }
    else
    {
      op->vtkDataRepresentation::SetSelectionType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataRepresentation_GetSelectionType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectionType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataRepresentation *op = static_cast<vtkDataRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSelectionType() :
      op->vtkDataRepresentation::GetSelectionType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataRepresentation_SetSelectionArrayNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectionArrayNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataRepresentation *op = static_cast<vtkDataRepresentation *>(vp);

  vtkStringArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkStringArray"))
  {
    if (ap.IsBound())
    {
      op->SetSelectionArrayNames(temp0);
    }
    else
    {
      op->vtkDataRepresentation::SetSelectionArrayNames(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataRepresentation_GetSelectionArrayNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectionArrayNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataRepresentation *op = static_cast<vtkDataRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStringArray *tempr = (ap.IsBound() ?
      op->GetSelectionArrayNames() :
      op->vtkDataRepresentation::GetSelectionArrayNames());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataRepresentation_SetSelectionArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectionArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataRepresentation *op = static_cast<vtkDataRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSelectionArrayName(temp0);
    }
    else
    {
      op->vtkDataRepresentation::SetSelectionArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataRepresentation_GetSelectionArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectionArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataRepresentation *op = static_cast<vtkDataRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetSelectionArrayName() :
      op->vtkDataRepresentation::GetSelectionArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataRepresentation_ConvertSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConvertSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataRepresentation *op = static_cast<vtkDataRepresentation *>(vp);

  vtkView *temp0 = nullptr;
  vtkSelection *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkView") &&
      ap.GetVTKObject(temp1, "vtkSelection"))
  {
    vtkSelection *tempr = (ap.IsBound() ?
      op->ConvertSelection(temp0, temp1) :
      op->vtkDataRepresentation::ConvertSelection(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkDataRepresentation_Methods[] = {
  {"IsTypeOf", PyvtkDataRepresentation_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkDataRepresentation_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkDataRepresentation_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkDataRepresentation\nC++: static vtkDataRepresentation *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkDataRepresentation_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkDataRepresentation\nC++: vtkDataRepresentation *NewInstance()\n\n"},
  {"GetInputConnection", PyvtkDataRepresentation_GetInputConnection, METH_VARARGS,
   "V.GetInputConnection(int, int) -> vtkAlgorithmOutput\nC++: vtkAlgorithmOutput *GetInputConnection(int port=0,\n    int index=0)\n\nConvenience override method for obtaining the input connection\nwithout specifying the port or index.\n"},
  {"GetAnnotationLink", PyvtkDataRepresentation_GetAnnotationLink, METH_VARARGS,
   "V.GetAnnotationLink() -> vtkAnnotationLink\nC++: vtkAnnotationLink *GetAnnotationLink()\n\nThe annotation link for this representation. To link annotations,\nset the same vtkAnnotationLink object in multiple\nrepresentations.\n"},
  {"SetAnnotationLink", PyvtkDataRepresentation_SetAnnotationLink, METH_VARARGS,
   "V.SetAnnotationLink(vtkAnnotationLink)\nC++: void SetAnnotationLink(vtkAnnotationLink *link)\n\n"},
  {"ApplyViewTheme", PyvtkDataRepresentation_ApplyViewTheme, METH_VARARGS,
   "V.ApplyViewTheme(vtkViewTheme)\nC++: virtual void ApplyViewTheme(vtkViewTheme *theme)\n\nApply a theme to this representation. Subclasses should override\nthis method.\n"},
  {"Select", PyvtkDataRepresentation_Select, METH_VARARGS,
   "V.Select(vtkView, vtkSelection)\nC++: void Select(vtkView *view, vtkSelection *selection)\nV.Select(vtkView, vtkSelection, bool)\nC++: void Select(vtkView *view, vtkSelection *selection,\n    bool extend)\n\nThe view calls this method when a selection occurs. The\nrepresentation takes this selection and converts it into a\nselection on its data by calling ConvertSelection, then calls\nUpdateSelection with the converted selection. Subclasses should\nnot override this method, but should instead override\nConvertSelection. The optional third argument specifies whether\nthe selection should be added to the previous selection on this\nrepresentation.\n"},
  {"Annotate", PyvtkDataRepresentation_Annotate, METH_VARARGS,
   "V.Annotate(vtkView, vtkAnnotationLayers)\nC++: void Annotate(vtkView *view,\n    vtkAnnotationLayers *annotations)\nV.Annotate(vtkView, vtkAnnotationLayers, bool)\nC++: void Annotate(vtkView *view,\n    vtkAnnotationLayers *annotations, bool extend)\n\nAnalogous to Select(). The view calls this method when it needs\nto change the underlying annotations (some views might perform\nthe creation of annotations). The representation takes the\nannotations and converts them into a selection on its data by\ncalling ConvertAnnotations, then calls UpdateAnnotations with the\nconverted selection. Subclasses should not override this method,\nbut should instead override ConvertSelection. The optional third\nargument specifies whether the selection should be added to the\nprevious selection on this representation.\n"},
  {"SetSelectable", PyvtkDataRepresentation_SetSelectable, METH_VARARGS,
   "V.SetSelectable(bool)\nC++: virtual void SetSelectable(bool _arg)\n\nWhether this representation is able to handle a selection.\nDefault is true.\n"},
  {"GetSelectable", PyvtkDataRepresentation_GetSelectable, METH_VARARGS,
   "V.GetSelectable() -> bool\nC++: virtual bool GetSelectable()\n\nWhether this representation is able to handle a selection.\nDefault is true.\n"},
  {"SelectableOn", PyvtkDataRepresentation_SelectableOn, METH_VARARGS,
   "V.SelectableOn()\nC++: virtual void SelectableOn()\n\nWhether this representation is able to handle a selection.\nDefault is true.\n"},
  {"SelectableOff", PyvtkDataRepresentation_SelectableOff, METH_VARARGS,
   "V.SelectableOff()\nC++: virtual void SelectableOff()\n\nWhether this representation is able to handle a selection.\nDefault is true.\n"},
  {"UpdateSelection", PyvtkDataRepresentation_UpdateSelection, METH_VARARGS,
   "V.UpdateSelection(vtkSelection)\nC++: void UpdateSelection(vtkSelection *selection)\nV.UpdateSelection(vtkSelection, bool)\nC++: void UpdateSelection(vtkSelection *selection, bool extend)\n\nUpdates the selection in the selection link and fires a selection\nchange event. Subclasses should not override this method, but\nshould instead override ConvertSelection. The optional second\nargument specifies whether the selection should be added to the\nprevious selection on this representation.\n"},
  {"UpdateAnnotations", PyvtkDataRepresentation_UpdateAnnotations, METH_VARARGS,
   "V.UpdateAnnotations(vtkAnnotationLayers)\nC++: void UpdateAnnotations(vtkAnnotationLayers *annotations)\nV.UpdateAnnotations(vtkAnnotationLayers, bool)\nC++: void UpdateAnnotations(vtkAnnotationLayers *annotations,\n    bool extend)\n\nUpdates the selection in the selection link and fires a selection\nchange event. Subclasses should not override this method, but\nshould instead override ConvertSelection. The optional second\nargument specifies whether the selection should be added to the\nprevious selection on this representation.\n"},
  {"GetInternalAnnotationOutputPort", PyvtkDataRepresentation_GetInternalAnnotationOutputPort, METH_VARARGS,
   "V.GetInternalAnnotationOutputPort() -> vtkAlgorithmOutput\nC++: virtual vtkAlgorithmOutput *GetInternalAnnotationOutputPort()\nV.GetInternalAnnotationOutputPort(int) -> vtkAlgorithmOutput\nC++: virtual vtkAlgorithmOutput *GetInternalAnnotationOutputPort(\n    int port)\nV.GetInternalAnnotationOutputPort(int, int) -> vtkAlgorithmOutput\nC++: virtual vtkAlgorithmOutput *GetInternalAnnotationOutputPort(\n    int port, int conn)\n\nThe output port that contains the annotations whose selections\nare localized for a particular input data object. This should be\nused when connecting the internal pipelines.\n"},
  {"GetInternalSelectionOutputPort", PyvtkDataRepresentation_GetInternalSelectionOutputPort, METH_VARARGS,
   "V.GetInternalSelectionOutputPort() -> vtkAlgorithmOutput\nC++: virtual vtkAlgorithmOutput *GetInternalSelectionOutputPort()\nV.GetInternalSelectionOutputPort(int) -> vtkAlgorithmOutput\nC++: virtual vtkAlgorithmOutput *GetInternalSelectionOutputPort(\n    int port)\nV.GetInternalSelectionOutputPort(int, int) -> vtkAlgorithmOutput\nC++: virtual vtkAlgorithmOutput *GetInternalSelectionOutputPort(\n    int port, int conn)\n\nThe output port that contains the selection associated with the\ncurrent annotation (normally the interactive selection). This\nshould be used when connecting the internal pipelines.\n"},
  {"GetInternalOutputPort", PyvtkDataRepresentation_GetInternalOutputPort, METH_VARARGS,
   "V.GetInternalOutputPort() -> vtkAlgorithmOutput\nC++: virtual vtkAlgorithmOutput *GetInternalOutputPort()\nV.GetInternalOutputPort(int) -> vtkAlgorithmOutput\nC++: virtual vtkAlgorithmOutput *GetInternalOutputPort(int port)\nV.GetInternalOutputPort(int, int) -> vtkAlgorithmOutput\nC++: virtual vtkAlgorithmOutput *GetInternalOutputPort(int port,\n    int conn)\n\nRetrieves an output port for the input data object at the\nspecified port and connection index. This may be connected to the\nrepresentation's internal pipeline.\n"},
  {"SetSelectionType", PyvtkDataRepresentation_SetSelectionType, METH_VARARGS,
   "V.SetSelectionType(int)\nC++: virtual void SetSelectionType(int _arg)\n\nSet the selection type produced by this view. This should be one\nof the content type constants defined in vtkSelectionNode.h.\nCommon values are vtkSelectionNode::INDICES\nvtkSelectionNode::PEDIGREEIDS vtkSelectionNode::VALUES\n"},
  {"GetSelectionType", PyvtkDataRepresentation_GetSelectionType, METH_VARARGS,
   "V.GetSelectionType() -> int\nC++: virtual int GetSelectionType()\n\nSet the selection type produced by this view. This should be one\nof the content type constants defined in vtkSelectionNode.h.\nCommon values are vtkSelectionNode::INDICES\nvtkSelectionNode::PEDIGREEIDS vtkSelectionNode::VALUES\n"},
  {"SetSelectionArrayNames", PyvtkDataRepresentation_SetSelectionArrayNames, METH_VARARGS,
   "V.SetSelectionArrayNames(vtkStringArray)\nC++: virtual void SetSelectionArrayNames(vtkStringArray *names)\n\nIf a VALUES selection, the arrays used to produce a selection.\n"},
  {"GetSelectionArrayNames", PyvtkDataRepresentation_GetSelectionArrayNames, METH_VARARGS,
   "V.GetSelectionArrayNames() -> vtkStringArray\nC++: virtual vtkStringArray *GetSelectionArrayNames()\n\nIf a VALUES selection, the arrays used to produce a selection.\n"},
  {"SetSelectionArrayName", PyvtkDataRepresentation_SetSelectionArrayName, METH_VARARGS,
   "V.SetSelectionArrayName(string)\nC++: virtual void SetSelectionArrayName(const char *name)\n\nIf a VALUES selection, the array used to produce a selection.\n"},
  {"GetSelectionArrayName", PyvtkDataRepresentation_GetSelectionArrayName, METH_VARARGS,
   "V.GetSelectionArrayName() -> string\nC++: virtual const char *GetSelectionArrayName()\n\nIf a VALUES selection, the array used to produce a selection.\n"},
  {"ConvertSelection", PyvtkDataRepresentation_ConvertSelection, METH_VARARGS,
   "V.ConvertSelection(vtkView, vtkSelection) -> vtkSelection\nC++: virtual vtkSelection *ConvertSelection(vtkView *view,\n    vtkSelection *selection)\n\nConvert the selection to a type appropriate for sharing with\nother representations through vtkAnnotationLink, possibly using\nthe view. For the superclass, we just return the same selection.\nSubclasses may do something more fancy, like convert the\nselection from a frustrum to a list of pedigree ids.  If the\nselection cannot be applied to this representation, return\nnullptr.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkDataRepresentation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkViewsCorePython.vtkDataRepresentation", // tp_name
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
  PyvtkDataRepresentation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkDataRepresentation_StaticNew()
{
  return vtkDataRepresentation::New();
}

PyObject *PyvtkDataRepresentation_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkDataRepresentation_Type, PyvtkDataRepresentation_Methods,
    "vtkDataRepresentation",
 &PyvtkDataRepresentation_StaticNew);

  PyTypeObject *pytype = &PyvtkDataRepresentation_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPassInputTypeAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkDataRepresentation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkDataRepresentation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkDataRepresentation", o) != 0)
  {
    Py_DECREF(o);
  }

}

