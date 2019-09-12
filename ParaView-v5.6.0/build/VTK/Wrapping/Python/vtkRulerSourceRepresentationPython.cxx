// python wrapper for vtkRulerSourceRepresentation
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
#include "vtkRulerSourceRepresentation.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkRulerSourceRepresentation(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkRulerSourceRepresentation_ClassNew(); }

#ifndef DECLARED_PyvtkPVDataRepresentation_ClassNew
extern "C" { PyObject *PyvtkPVDataRepresentation_ClassNew(); }
#define DECLARED_PyvtkPVDataRepresentation_ClassNew
#endif

static const char *PyvtkRulerSourceRepresentation_Doc =
  "vtkRulerSourceRepresentation - vtkRulerSourceRepresentation is a\nrepresentation to show a ruler.\n\n"
  "Superclass: vtkPVDataRepresentation\n\n"
  "The input is expected to be vtkPolyData with two points.\n\n";


static PyObject *
PyvtkRulerSourceRepresentation_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkRulerSourceRepresentation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRulerSourceRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRulerSourceRepresentation *op = static_cast<vtkRulerSourceRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkRulerSourceRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRulerSourceRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkRulerSourceRepresentation *tempr = vtkRulerSourceRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRulerSourceRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRulerSourceRepresentation *op = static_cast<vtkRulerSourceRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRulerSourceRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkRulerSourceRepresentation::NewInstance());

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
PyvtkRulerSourceRepresentation_SetDistanceRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDistanceRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRulerSourceRepresentation *op = static_cast<vtkRulerSourceRepresentation *>(vp);

  vtkDistanceRepresentation2D *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDistanceRepresentation2D"))
  {
    if (ap.IsBound())
    {
      op->SetDistanceRepresentation(temp0);
    }
    else
    {
      op->vtkRulerSourceRepresentation::SetDistanceRepresentation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRulerSourceRepresentation_GetDistanceRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistanceRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRulerSourceRepresentation *op = static_cast<vtkRulerSourceRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDistanceRepresentation2D *tempr = (ap.IsBound() ?
      op->GetDistanceRepresentation() :
      op->vtkRulerSourceRepresentation::GetDistanceRepresentation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRulerSourceRepresentation_SetTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRulerSourceRepresentation *op = static_cast<vtkRulerSourceRepresentation *>(vp);

  vtkTextProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextProperty"))
  {
    if (ap.IsBound())
    {
      op->SetTextProperty(temp0);
    }
    else
    {
      op->vtkRulerSourceRepresentation::SetTextProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRulerSourceRepresentation_SetAxisLineWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisLineWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRulerSourceRepresentation *op = static_cast<vtkRulerSourceRepresentation *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAxisLineWidth(temp0);
    }
    else
    {
      op->vtkRulerSourceRepresentation::SetAxisLineWidth(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRulerSourceRepresentation_SetAxisColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRulerSourceRepresentation *op = static_cast<vtkRulerSourceRepresentation *>(vp);

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
      op->SetAxisColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkRulerSourceRepresentation::SetAxisColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRulerSourceRepresentation_MarkModified(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MarkModified");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRulerSourceRepresentation *op = static_cast<vtkRulerSourceRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MarkModified();
    }
    else
    {
      op->vtkRulerSourceRepresentation::MarkModified();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRulerSourceRepresentation_SetVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRulerSourceRepresentation *op = static_cast<vtkRulerSourceRepresentation *>(vp);

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
      op->vtkRulerSourceRepresentation::SetVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRulerSourceRepresentation_SetLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRulerSourceRepresentation *op = static_cast<vtkRulerSourceRepresentation *>(vp);

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
      op->SetLabelFormat(temp0);
    }
    else
    {
      op->vtkRulerSourceRepresentation::SetLabelFormat(temp0);
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
PyvtkRulerSourceRepresentation_SetRulerMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRulerMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRulerSourceRepresentation *op = static_cast<vtkRulerSourceRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRulerMode(temp0);
    }
    else
    {
      op->vtkRulerSourceRepresentation::SetRulerMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRulerSourceRepresentation_GetRulerMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRulerMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRulerSourceRepresentation *op = static_cast<vtkRulerSourceRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRulerMode() :
      op->vtkRulerSourceRepresentation::GetRulerMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRulerSourceRepresentation_SetRulerDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRulerDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRulerSourceRepresentation *op = static_cast<vtkRulerSourceRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRulerDistance(temp0);
    }
    else
    {
      op->vtkRulerSourceRepresentation::SetRulerDistance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRulerSourceRepresentation_GetRulerDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRulerDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRulerSourceRepresentation *op = static_cast<vtkRulerSourceRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRulerDistance() :
      op->vtkRulerSourceRepresentation::GetRulerDistance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRulerSourceRepresentation_SetScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRulerSourceRepresentation *op = static_cast<vtkRulerSourceRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScale(temp0);
    }
    else
    {
      op->vtkRulerSourceRepresentation::SetScale(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRulerSourceRepresentation_GetScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRulerSourceRepresentation *op = static_cast<vtkRulerSourceRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetScale() :
      op->vtkRulerSourceRepresentation::GetScale());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRulerSourceRepresentation_SetNumberOfRulerTicks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfRulerTicks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRulerSourceRepresentation *op = static_cast<vtkRulerSourceRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfRulerTicks(temp0);
    }
    else
    {
      op->vtkRulerSourceRepresentation::SetNumberOfRulerTicks(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRulerSourceRepresentation_ProcessViewRequest(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessViewRequest");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRulerSourceRepresentation *op = static_cast<vtkRulerSourceRepresentation *>(vp);

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
      op->vtkRulerSourceRepresentation::ProcessViewRequest(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkRulerSourceRepresentation_Methods[] = {
  {"IsTypeOf", PyvtkRulerSourceRepresentation_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkRulerSourceRepresentation_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkRulerSourceRepresentation_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkRulerSourceRepresentation\nC++: static vtkRulerSourceRepresentation *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkRulerSourceRepresentation_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkRulerSourceRepresentation\nC++: vtkRulerSourceRepresentation *NewInstance()\n\n"},
  {"SetDistanceRepresentation", PyvtkRulerSourceRepresentation_SetDistanceRepresentation, METH_VARARGS,
   "V.SetDistanceRepresentation(vtkDistanceRepresentation2D)\nC++: void SetDistanceRepresentation(vtkDistanceRepresentation2D *)\n\nSet the text widget.\n"},
  {"GetDistanceRepresentation", PyvtkRulerSourceRepresentation_GetDistanceRepresentation, METH_VARARGS,
   "V.GetDistanceRepresentation() -> vtkDistanceRepresentation2D\nC++: virtual vtkDistanceRepresentation2D *GetDistanceRepresentation(\n    )\n\nSet the text widget.\n"},
  {"SetTextProperty", PyvtkRulerSourceRepresentation_SetTextProperty, METH_VARARGS,
   "V.SetTextProperty(vtkTextProperty)\nC++: void SetTextProperty(vtkTextProperty *prop)\n\nSet the text property for the printed distance.\n"},
  {"SetAxisLineWidth", PyvtkRulerSourceRepresentation_SetAxisLineWidth, METH_VARARGS,
   "V.SetAxisLineWidth(float)\nC++: void SetAxisLineWidth(float width)\n\nSet the line width for the displayed axis in screen units.\n"},
  {"SetAxisColor", PyvtkRulerSourceRepresentation_SetAxisColor, METH_VARARGS,
   "V.SetAxisColor(float, float, float)\nC++: void SetAxisColor(double red, double green, double blue)\n\nSet the color for the displayed axis.\n"},
  {"MarkModified", PyvtkRulerSourceRepresentation_MarkModified, METH_VARARGS,
   "V.MarkModified()\nC++: void MarkModified() override;\n\nThis is one of the most important functions. In VTK pipelines,\nit's very easy for the pipeline to decide when it needs to\nre-execute. vtkAlgorithm::Update() can go up the entire pipeline\nto see if any filters MTime changed (among other things) and if\nso, it can re-execute the pipeline. However in case of\nrepresentations, the real input connection may only be present on\nthe data-server nodes. In that case the\nvtkPVDataRepresentation::RequestData() will only get called on\nthe data-server nodes. That means that representations won't be\nable to any data-delivery in RequestData(). We'd need some other\nmechanisms to synchronize data-delivery among processes. To avoid\nthat conundrum, the vtkSMRepresentationProxy calls MarkModified()\non all processes whenever any filter in the pipeline is modified.\nIn this method, the vtkPVDataRepresentation subclasses should\nensure that they mark all delivery related filters dirty in their\nRequestData to ensure they execute then next time they are\nupdated. The vtkPVDataRepresentation also uses a special\nexecutive which avoids updating the representation unless\nMarkModified() was called since the last Update(), thus acting as\na update-suppressor.\n"},
  {"SetVisibility", PyvtkRulerSourceRepresentation_SetVisibility, METH_VARARGS,
   "V.SetVisibility(bool)\nC++: void SetVisibility(bool) override;\n\nSet the visibility.\n"},
  {"SetLabelFormat", PyvtkRulerSourceRepresentation_SetLabelFormat, METH_VARARGS,
   "V.SetLabelFormat(string)\nC++: void SetLabelFormat(char *labelFormat)\n\nSpecify the format to use for labeling the distance. Note that an\nempty string results in no label, or a format string without a\n\"%\" character will not print the distance value.\n"},
  {"SetRulerMode", PyvtkRulerSourceRepresentation_SetRulerMode, METH_VARARGS,
   "V.SetRulerMode(int)\nC++: void SetRulerMode(int choice)\n\nEnable or disable ruler mode. When enabled, the ticks on the\ndistance widget are separated by the amount specified by\nvtkDistanceRepresentation::RulerDistance. Otherwise, the value\nvtkDistanceRepresentation::NumberOfRulerTicks is used to draw the\ntick marks.\n"},
  {"GetRulerMode", PyvtkRulerSourceRepresentation_GetRulerMode, METH_VARARGS,
   "V.GetRulerMode() -> int\nC++: int GetRulerMode()\n\nEnable or disable ruler mode. When enabled, the ticks on the\ndistance widget are separated by the amount specified by\nvtkDistanceRepresentation::RulerDistance. Otherwise, the value\nvtkDistanceRepresentation::NumberOfRulerTicks is used to draw the\ntick marks.\n"},
  {"SetRulerDistance", PyvtkRulerSourceRepresentation_SetRulerDistance, METH_VARARGS,
   "V.SetRulerDistance(float)\nC++: void SetRulerDistance(double distance)\n\nSpecify the RulerDistance which indicates the spacing of the\nmajor ticks in the unit space obtained after the Scale is applied\n(see SetScale()). This ivar only has effect when the RulerMode is\non.\n"},
  {"GetRulerDistance", PyvtkRulerSourceRepresentation_GetRulerDistance, METH_VARARGS,
   "V.GetRulerDistance() -> float\nC++: double GetRulerDistance()\n\nSpecify the RulerDistance which indicates the spacing of the\nmajor ticks in the unit space obtained after the Scale is applied\n(see SetScale()). This ivar only has effect when the RulerMode is\non.\n"},
  {"SetScale", PyvtkRulerSourceRepresentation_SetScale, METH_VARARGS,
   "V.SetScale(float)\nC++: void SetScale(double distance)\n\nSet scale factor to apply to the ruler graduation scale and the\ndisplayed distance. Used to transform VTK world space units to a\ndesired unit, e.g., inches to centimeters.\n"},
  {"GetScale", PyvtkRulerSourceRepresentation_GetScale, METH_VARARGS,
   "V.GetScale() -> float\nC++: double GetScale()\n\nSet scale factor to apply to the ruler graduation scale and the\ndisplayed distance. Used to transform VTK world space units to a\ndesired unit, e.g., inches to centimeters.\n"},
  {"SetNumberOfRulerTicks", PyvtkRulerSourceRepresentation_SetNumberOfRulerTicks, METH_VARARGS,
   "V.SetNumberOfRulerTicks(int)\nC++: void SetNumberOfRulerTicks(int numberOfRulerTicks)\n\nSpecify the number of major ruler ticks. Note: the number of\nticks is the number between the two handle endpoints. This ivar\nonly has effect when the RulerMode is off.\n"},
  {"ProcessViewRequest", PyvtkRulerSourceRepresentation_ProcessViewRequest, METH_VARARGS,
   "V.ProcessViewRequest(vtkInformationRequestKey, vtkInformation,\n    vtkInformation) -> int\nC++: int ProcessViewRequest(\n    vtkInformationRequestKey *request_type,\n    vtkInformation *inInfo, vtkInformation *outInfo) override;\n\nvtkAlgorithm::ProcessRequest() equivalent for rendering passes.\nThis is typically called by the vtkView to request meta-data from\nthe representations or ask them to perform certain tasks e.g.\nPrepareForRendering.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkRulerSourceRepresentation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVClientServerCoreRenderingPython.vtkRulerSourceRepresentation", // tp_name
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
  PyvtkRulerSourceRepresentation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkRulerSourceRepresentation_StaticNew()
{
  return vtkRulerSourceRepresentation::New();
}

PyObject *PyvtkRulerSourceRepresentation_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkRulerSourceRepresentation_Type, PyvtkRulerSourceRepresentation_Methods,
    "vtkRulerSourceRepresentation",
 &PyvtkRulerSourceRepresentation_StaticNew);

  PyTypeObject *pytype = &PyvtkRulerSourceRepresentation_Type;

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

void PyVTKAddFile_vtkRulerSourceRepresentation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkRulerSourceRepresentation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkRulerSourceRepresentation", o) != 0)
  {
    Py_DECREF(o);
  }

}

