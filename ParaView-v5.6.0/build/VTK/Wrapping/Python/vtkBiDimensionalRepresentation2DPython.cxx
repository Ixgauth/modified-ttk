// python wrapper for vtkBiDimensionalRepresentation2D
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
#include "vtkBiDimensionalRepresentation2D.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkBiDimensionalRepresentation2D(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkBiDimensionalRepresentation2D_ClassNew(); }

#ifndef DECLARED_PyvtkBiDimensionalRepresentation_ClassNew
extern "C" { PyObject *PyvtkBiDimensionalRepresentation_ClassNew(); }
#define DECLARED_PyvtkBiDimensionalRepresentation_ClassNew
#endif

static const char *PyvtkBiDimensionalRepresentation2D_Doc =
  "vtkBiDimensionalRepresentation2D - represent the\nvtkBiDimensionalWidget\n\n"
  "Superclass: vtkBiDimensionalRepresentation\n\n"
  "The vtkBiDimensionalRepresentation2D is used to represent the\n"
  "bi-dimensional measure in a 2D (overlay) context. This representation\n"
  "consists of two perpendicular lines defined by four\n"
  "vtkHandleRepresentations. The four handles can be independently\n"
  "manipulated consistent with the orthogonal constraint on the lines.\n"
  "(Note: the four points are referred to as Point1, Point2, Point3 and\n"
  "Point4. Point1 and Point2 define the first line; and Point3 and\n"
  "Point4 define the second orthogonal line.)\n\n"
  "To create this widget, you click to place the first two points. The\n"
  "third point is mirrored with the fourth point; when you place the\n"
  "third point (which is orthogonal to the lined defined by the first\n"
  "two points), the fourth point is dropped as well. After definition,\n"
  "the four points can be moved (in constrained fashion, preserving\n"
  "orthogonality). Further, the entire widget can be translated by\n"
  "grabbing the center point of the widget; each line can be moved along\n"
  "the other line; and the entire widget can be rotated around its\n"
  "center point.\n\n"
  "@sa\n"
  "vtkAngleWidget vtkHandleRepresentation vtkBiDimensionalRepresentation\n\n";


static PyObject *
PyvtkBiDimensionalRepresentation2D_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkBiDimensionalRepresentation2D::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBiDimensionalRepresentation2D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiDimensionalRepresentation2D *op = static_cast<vtkBiDimensionalRepresentation2D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkBiDimensionalRepresentation2D::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBiDimensionalRepresentation2D_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkBiDimensionalRepresentation2D *tempr = vtkBiDimensionalRepresentation2D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBiDimensionalRepresentation2D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiDimensionalRepresentation2D *op = static_cast<vtkBiDimensionalRepresentation2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkBiDimensionalRepresentation2D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkBiDimensionalRepresentation2D::NewInstance());

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
PyvtkBiDimensionalRepresentation2D_GetLineProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLineProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiDimensionalRepresentation2D *op = static_cast<vtkBiDimensionalRepresentation2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty2D *tempr = (ap.IsBound() ?
      op->GetLineProperty() :
      op->vtkBiDimensionalRepresentation2D::GetLineProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBiDimensionalRepresentation2D_GetSelectedLineProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedLineProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiDimensionalRepresentation2D *op = static_cast<vtkBiDimensionalRepresentation2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty2D *tempr = (ap.IsBound() ?
      op->GetSelectedLineProperty() :
      op->vtkBiDimensionalRepresentation2D::GetSelectedLineProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBiDimensionalRepresentation2D_GetTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiDimensionalRepresentation2D *op = static_cast<vtkBiDimensionalRepresentation2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetTextProperty() :
      op->vtkBiDimensionalRepresentation2D::GetTextProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBiDimensionalRepresentation2D_BuildRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiDimensionalRepresentation2D *op = static_cast<vtkBiDimensionalRepresentation2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BuildRepresentation();
    }
    else
    {
      op->vtkBiDimensionalRepresentation2D::BuildRepresentation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBiDimensionalRepresentation2D_ComputeInteractionState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeInteractionState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiDimensionalRepresentation2D *op = static_cast<vtkBiDimensionalRepresentation2D *>(vp);

  int temp0;
  int temp1;
  int temp2 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    int tempr = (ap.IsBound() ?
      op->ComputeInteractionState(temp0, temp1, temp2) :
      op->vtkBiDimensionalRepresentation2D::ComputeInteractionState(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBiDimensionalRepresentation2D_StartWidgetDefinition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartWidgetDefinition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiDimensionalRepresentation2D *op = static_cast<vtkBiDimensionalRepresentation2D *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  double save0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->StartWidgetDefinition(temp0);
    }
    else
    {
      op->vtkBiDimensionalRepresentation2D::StartWidgetDefinition(temp0);
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
PyvtkBiDimensionalRepresentation2D_Point2WidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Point2WidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiDimensionalRepresentation2D *op = static_cast<vtkBiDimensionalRepresentation2D *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  double save0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->Point2WidgetInteraction(temp0);
    }
    else
    {
      op->vtkBiDimensionalRepresentation2D::Point2WidgetInteraction(temp0);
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
PyvtkBiDimensionalRepresentation2D_Point3WidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Point3WidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiDimensionalRepresentation2D *op = static_cast<vtkBiDimensionalRepresentation2D *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  double save0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->Point3WidgetInteraction(temp0);
    }
    else
    {
      op->vtkBiDimensionalRepresentation2D::Point3WidgetInteraction(temp0);
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
PyvtkBiDimensionalRepresentation2D_StartWidgetManipulation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartWidgetManipulation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiDimensionalRepresentation2D *op = static_cast<vtkBiDimensionalRepresentation2D *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  double save0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->StartWidgetManipulation(temp0);
    }
    else
    {
      op->vtkBiDimensionalRepresentation2D::StartWidgetManipulation(temp0);
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
PyvtkBiDimensionalRepresentation2D_WidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiDimensionalRepresentation2D *op = static_cast<vtkBiDimensionalRepresentation2D *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  double save0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->WidgetInteraction(temp0);
    }
    else
    {
      op->vtkBiDimensionalRepresentation2D::WidgetInteraction(temp0);
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
PyvtkBiDimensionalRepresentation2D_Highlight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Highlight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiDimensionalRepresentation2D *op = static_cast<vtkBiDimensionalRepresentation2D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->Highlight(temp0);
    }
    else
    {
      op->vtkBiDimensionalRepresentation2D::Highlight(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBiDimensionalRepresentation2D_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiDimensionalRepresentation2D *op = static_cast<vtkBiDimensionalRepresentation2D *>(vp);

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
      op->vtkBiDimensionalRepresentation2D::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBiDimensionalRepresentation2D_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiDimensionalRepresentation2D *op = static_cast<vtkBiDimensionalRepresentation2D *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOverlay(temp0) :
      op->vtkBiDimensionalRepresentation2D::RenderOverlay(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBiDimensionalRepresentation2D_GetLabelText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiDimensionalRepresentation2D *op = static_cast<vtkBiDimensionalRepresentation2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetLabelText() :
      op->vtkBiDimensionalRepresentation2D::GetLabelText());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBiDimensionalRepresentation2D_GetLabelPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiDimensionalRepresentation2D *op = static_cast<vtkBiDimensionalRepresentation2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetLabelPosition() :
      op->vtkBiDimensionalRepresentation2D::GetLabelPosition());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkBiDimensionalRepresentation2D_GetLabelPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiDimensionalRepresentation2D *op = static_cast<vtkBiDimensionalRepresentation2D *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetLabelPosition(temp0);
    }
    else
    {
      op->vtkBiDimensionalRepresentation2D::GetLabelPosition(temp0);
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
PyvtkBiDimensionalRepresentation2D_GetLabelPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkBiDimensionalRepresentation2D_GetLabelPosition_s1(self, args);
    case 1:
      return PyvtkBiDimensionalRepresentation2D_GetLabelPosition_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetLabelPosition");
  return nullptr;
}



static PyObject *
PyvtkBiDimensionalRepresentation2D_GetWorldLabelPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWorldLabelPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiDimensionalRepresentation2D *op = static_cast<vtkBiDimensionalRepresentation2D *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetWorldLabelPosition(temp0);
    }
    else
    {
      op->vtkBiDimensionalRepresentation2D::GetWorldLabelPosition(temp0);
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

static PyMethodDef PyvtkBiDimensionalRepresentation2D_Methods[] = {
  {"IsTypeOf", PyvtkBiDimensionalRepresentation2D_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard VTK methods.\n"},
  {"IsA", PyvtkBiDimensionalRepresentation2D_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard VTK methods.\n"},
  {"SafeDownCast", PyvtkBiDimensionalRepresentation2D_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkBiDimensionalRepresentation2D\nC++: static vtkBiDimensionalRepresentation2D *SafeDownCast(\n    vtkObjectBase *o)\n\nStandard VTK methods.\n"},
  {"NewInstance", PyvtkBiDimensionalRepresentation2D_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkBiDimensionalRepresentation2D\nC++: vtkBiDimensionalRepresentation2D *NewInstance()\n\nStandard VTK methods.\n"},
  {"GetLineProperty", PyvtkBiDimensionalRepresentation2D_GetLineProperty, METH_VARARGS,
   "V.GetLineProperty() -> vtkProperty2D\nC++: virtual vtkProperty2D *GetLineProperty()\n\nRetrieve the property used to control the appearance of the two\northogonal lines.\n"},
  {"GetSelectedLineProperty", PyvtkBiDimensionalRepresentation2D_GetSelectedLineProperty, METH_VARARGS,
   "V.GetSelectedLineProperty() -> vtkProperty2D\nC++: virtual vtkProperty2D *GetSelectedLineProperty()\n\nRetrieve the property used to control the appearance of the two\northogonal lines.\n"},
  {"GetTextProperty", PyvtkBiDimensionalRepresentation2D_GetTextProperty, METH_VARARGS,
   "V.GetTextProperty() -> vtkTextProperty\nC++: virtual vtkTextProperty *GetTextProperty()\n\nRetrieve the property used to control the appearance of the text\nlabels.\n"},
  {"BuildRepresentation", PyvtkBiDimensionalRepresentation2D_BuildRepresentation, METH_VARARGS,
   "V.BuildRepresentation()\nC++: void BuildRepresentation() override;\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\n"},
  {"ComputeInteractionState", PyvtkBiDimensionalRepresentation2D_ComputeInteractionState, METH_VARARGS,
   "V.ComputeInteractionState(int, int, int) -> int\nC++: int ComputeInteractionState(int X, int Y, int modify=0)\n    override;\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\n"},
  {"StartWidgetDefinition", PyvtkBiDimensionalRepresentation2D_StartWidgetDefinition, METH_VARARGS,
   "V.StartWidgetDefinition([float, float])\nC++: void StartWidgetDefinition(double e[2]) override;\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\n"},
  {"Point2WidgetInteraction", PyvtkBiDimensionalRepresentation2D_Point2WidgetInteraction, METH_VARARGS,
   "V.Point2WidgetInteraction([float, float])\nC++: void Point2WidgetInteraction(double e[2]) override;\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\n"},
  {"Point3WidgetInteraction", PyvtkBiDimensionalRepresentation2D_Point3WidgetInteraction, METH_VARARGS,
   "V.Point3WidgetInteraction([float, float])\nC++: void Point3WidgetInteraction(double e[2]) override;\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\n"},
  {"StartWidgetManipulation", PyvtkBiDimensionalRepresentation2D_StartWidgetManipulation, METH_VARARGS,
   "V.StartWidgetManipulation([float, float])\nC++: void StartWidgetManipulation(double e[2]) override;\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\n"},
  {"WidgetInteraction", PyvtkBiDimensionalRepresentation2D_WidgetInteraction, METH_VARARGS,
   "V.WidgetInteraction([float, float])\nC++: void WidgetInteraction(double e[2]) override;\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\n"},
  {"Highlight", PyvtkBiDimensionalRepresentation2D_Highlight, METH_VARARGS,
   "V.Highlight(int)\nC++: void Highlight(int highlightOn) override;\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\n"},
  {"ReleaseGraphicsResources", PyvtkBiDimensionalRepresentation2D_ReleaseGraphicsResources, METH_VARARGS,
   "V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *w) override;\n\nMethods required by vtkProp superclass.\n"},
  {"RenderOverlay", PyvtkBiDimensionalRepresentation2D_RenderOverlay, METH_VARARGS,
   "V.RenderOverlay(vtkViewport) -> int\nC++: int RenderOverlay(vtkViewport *viewport) override;\n\nMethods required by vtkProp superclass.\n"},
  {"GetLabelText", PyvtkBiDimensionalRepresentation2D_GetLabelText, METH_VARARGS,
   "V.GetLabelText() -> string\nC++: char *GetLabelText() override;\n\nGet the text shown in the widget's label.\n"},
  {"GetLabelPosition", PyvtkBiDimensionalRepresentation2D_GetLabelPosition, METH_VARARGS,
   "V.GetLabelPosition() -> (float, ...)\nC++: double *GetLabelPosition() override;\nV.GetLabelPosition([float, float, float])\nC++: void GetLabelPosition(double pos[3]) override;\n\nGet the position of the widget's label in display coordinates.\n"},
  {"GetWorldLabelPosition", PyvtkBiDimensionalRepresentation2D_GetWorldLabelPosition, METH_VARARGS,
   "V.GetWorldLabelPosition([float, float, float])\nC++: void GetWorldLabelPosition(double pos[3]) override;\n\nGet the position of the widget's label in display coordinates.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkBiDimensionalRepresentation2D_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInteractionWidgetsPython.vtkBiDimensionalRepresentation2D", // tp_name
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
  PyvtkBiDimensionalRepresentation2D_Doc, // tp_doc
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

static vtkObjectBase *PyvtkBiDimensionalRepresentation2D_StaticNew()
{
  return vtkBiDimensionalRepresentation2D::New();
}

PyObject *PyvtkBiDimensionalRepresentation2D_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkBiDimensionalRepresentation2D_Type, PyvtkBiDimensionalRepresentation2D_Methods,
    "vtkBiDimensionalRepresentation2D",
 &PyvtkBiDimensionalRepresentation2D_StaticNew);

  PyTypeObject *pytype = &PyvtkBiDimensionalRepresentation2D_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkBiDimensionalRepresentation_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 10; c++)
  {
    static const struct { const char *name; int value; }
      constants[10] = {
        { "Outside", vtkBiDimensionalRepresentation2D::Outside },
        { "NearP1", vtkBiDimensionalRepresentation2D::NearP1 },
        { "NearP2", vtkBiDimensionalRepresentation2D::NearP2 },
        { "NearP3", vtkBiDimensionalRepresentation2D::NearP3 },
        { "NearP4", vtkBiDimensionalRepresentation2D::NearP4 },
        { "OnL1Inner", vtkBiDimensionalRepresentation2D::OnL1Inner },
        { "OnL1Outer", vtkBiDimensionalRepresentation2D::OnL1Outer },
        { "OnL2Inner", vtkBiDimensionalRepresentation2D::OnL2Inner },
        { "OnL2Outer", vtkBiDimensionalRepresentation2D::OnL2Outer },
        { "OnCenter", vtkBiDimensionalRepresentation2D::OnCenter },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkBiDimensionalRepresentation2D(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkBiDimensionalRepresentation2D_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkBiDimensionalRepresentation2D", o) != 0)
  {
    Py_DECREF(o);
  }

}

