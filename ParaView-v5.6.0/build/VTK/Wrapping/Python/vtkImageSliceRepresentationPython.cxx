// python wrapper for vtkImageSliceRepresentation
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
#include "vtkImageSliceRepresentation.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImageSliceRepresentation(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkImageSliceRepresentation_ClassNew(); }

#ifndef DECLARED_PyvtkPVDataRepresentation_ClassNew
extern "C" { PyObject *PyvtkPVDataRepresentation_ClassNew(); }
#define DECLARED_PyvtkPVDataRepresentation_ClassNew
#endif

static const char *PyvtkImageSliceRepresentation_Doc =
  "vtkImageSliceRepresentation - representation for showing slices from\na vtkImageData.\n\n"
  "Superclass: vtkPVDataRepresentation\n\n"
  "vtkImageSliceRepresentation is a representation for showing slices\n"
  "from an image dataset. Currently, it does not support composite\n"
  "datasets, however, we should be able to add such a support in future.\n\n";


static PyObject *
PyvtkImageSliceRepresentation_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImageSliceRepresentation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageSliceRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSliceRepresentation *op = static_cast<vtkImageSliceRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageSliceRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageSliceRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImageSliceRepresentation *tempr = vtkImageSliceRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageSliceRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSliceRepresentation *op = static_cast<vtkImageSliceRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageSliceRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageSliceRepresentation::NewInstance());

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
PyvtkImageSliceRepresentation_SetInputArrayToProcess_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputArrayToProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSliceRepresentation *op = static_cast<vtkImageSliceRepresentation *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  const char *temp4 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    if (ap.IsBound())
    {
      op->SetInputArrayToProcess(temp0, temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkImageSliceRepresentation::SetInputArrayToProcess(temp0, temp1, temp2, temp3, temp4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageSliceRepresentation_SetInputArrayToProcess_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputArrayToProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSliceRepresentation *op = static_cast<vtkImageSliceRepresentation *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    if (ap.IsBound())
    {
      op->SetInputArrayToProcess(temp0, temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkImageSliceRepresentation::SetInputArrayToProcess(temp0, temp1, temp2, temp3, temp4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageSliceRepresentation_SetInputArrayToProcess_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputArrayToProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSliceRepresentation *op = static_cast<vtkImageSliceRepresentation *>(vp);

  int temp0;
  vtkInformation *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkInformation"))
  {
    if (ap.IsBound())
    {
      op->SetInputArrayToProcess(temp0, temp1);
    }
    else
    {
      op->vtkImageSliceRepresentation::SetInputArrayToProcess(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageSliceRepresentation_SetInputArrayToProcess_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputArrayToProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSliceRepresentation *op = static_cast<vtkImageSliceRepresentation *>(vp);

  int temp0;
  int temp1;
  int temp2;
  const char *temp3 = nullptr;
  const char *temp4 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    if (ap.IsBound())
    {
      op->SetInputArrayToProcess(temp0, temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkImageSliceRepresentation::SetInputArrayToProcess(temp0, temp1, temp2, temp3, temp4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkImageSliceRepresentation_SetInputArrayToProcess_Methods[] = {
  {nullptr, PyvtkImageSliceRepresentation_SetInputArrayToProcess_s1, METH_VARARGS,
   "@iiiiz"},
  {nullptr, PyvtkImageSliceRepresentation_SetInputArrayToProcess_s2, METH_VARARGS,
   "@iiiii"},
  {nullptr, PyvtkImageSliceRepresentation_SetInputArrayToProcess_s4, METH_VARARGS,
   "@iiizz"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkImageSliceRepresentation_SetInputArrayToProcess(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkImageSliceRepresentation_SetInputArrayToProcess_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkImageSliceRepresentation_SetInputArrayToProcess_s3(self, args);
    case 5:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetInputArrayToProcess");
  return nullptr;
}



static PyObject *
PyvtkImageSliceRepresentation_ProcessViewRequest(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessViewRequest");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSliceRepresentation *op = static_cast<vtkImageSliceRepresentation *>(vp);

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
      op->vtkImageSliceRepresentation::ProcessViewRequest(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageSliceRepresentation_MarkModified(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MarkModified");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSliceRepresentation *op = static_cast<vtkImageSliceRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MarkModified();
    }
    else
    {
      op->vtkImageSliceRepresentation::MarkModified();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageSliceRepresentation_SetVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSliceRepresentation *op = static_cast<vtkImageSliceRepresentation *>(vp);

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
      op->vtkImageSliceRepresentation::SetVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageSliceRepresentation_SetSlice(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSlice");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSliceRepresentation *op = static_cast<vtkImageSliceRepresentation *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSlice(temp0);
    }
    else
    {
      op->vtkImageSliceRepresentation::SetSlice(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageSliceRepresentation_GetSlice(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSlice");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSliceRepresentation *op = static_cast<vtkImageSliceRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetSlice() :
      op->vtkImageSliceRepresentation::GetSlice());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageSliceRepresentation_SetSliceMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSliceRepresentation *op = static_cast<vtkImageSliceRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSliceMode(temp0);
    }
    else
    {
      op->vtkImageSliceRepresentation::SetSliceMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageSliceRepresentation_GetSliceMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSliceRepresentation *op = static_cast<vtkImageSliceRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSliceMode() :
      op->vtkImageSliceRepresentation::GetSliceMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageSliceRepresentation_SetOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSliceRepresentation *op = static_cast<vtkImageSliceRepresentation *>(vp);

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
      op->vtkImageSliceRepresentation::SetOrientation(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageSliceRepresentation_SetOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSliceRepresentation *op = static_cast<vtkImageSliceRepresentation *>(vp);

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
      op->vtkImageSliceRepresentation::SetOrigin(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageSliceRepresentation_SetPickable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPickable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSliceRepresentation *op = static_cast<vtkImageSliceRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPickable(temp0);
    }
    else
    {
      op->vtkImageSliceRepresentation::SetPickable(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageSliceRepresentation_SetPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSliceRepresentation *op = static_cast<vtkImageSliceRepresentation *>(vp);

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
      op->vtkImageSliceRepresentation::SetPosition(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageSliceRepresentation_SetScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSliceRepresentation *op = static_cast<vtkImageSliceRepresentation *>(vp);

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
      op->vtkImageSliceRepresentation::SetScale(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageSliceRepresentation_SetOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSliceRepresentation *op = static_cast<vtkImageSliceRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOpacity(temp0);
    }
    else
    {
      op->vtkImageSliceRepresentation::SetOpacity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageSliceRepresentation_SetLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSliceRepresentation *op = static_cast<vtkImageSliceRepresentation *>(vp);

  vtkScalarsToColors *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkScalarsToColors"))
  {
    if (ap.IsBound())
    {
      op->SetLookupTable(temp0);
    }
    else
    {
      op->vtkImageSliceRepresentation::SetLookupTable(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageSliceRepresentation_SetMapScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMapScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSliceRepresentation *op = static_cast<vtkImageSliceRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMapScalars(temp0);
    }
    else
    {
      op->vtkImageSliceRepresentation::SetMapScalars(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageSliceRepresentation_SetUseXYPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseXYPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSliceRepresentation *op = static_cast<vtkImageSliceRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseXYPlane(temp0);
    }
    else
    {
      op->vtkImageSliceRepresentation::SetUseXYPlane(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageSliceRepresentation_GetActor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSliceRepresentation *op = static_cast<vtkImageSliceRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVLODActor *tempr = (ap.IsBound() ?
      op->GetActor() :
      op->vtkImageSliceRepresentation::GetActor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkImageSliceRepresentation_Methods[] = {
  {"IsTypeOf", PyvtkImageSliceRepresentation_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImageSliceRepresentation_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImageSliceRepresentation_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkImageSliceRepresentation\nC++: static vtkImageSliceRepresentation *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImageSliceRepresentation_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkImageSliceRepresentation\nC++: vtkImageSliceRepresentation *NewInstance()\n\n"},
  {"SetInputArrayToProcess", PyvtkImageSliceRepresentation_SetInputArrayToProcess, METH_VARARGS,
   "V.SetInputArrayToProcess(int, int, int, int, string)\nC++: void SetInputArrayToProcess(int idx, int port,\n    int connection, int fieldAssociation, const char *name)\n    override;\nV.SetInputArrayToProcess(int, int, int, int, int)\nC++: void SetInputArrayToProcess(int idx, int port,\n    int connection, int fieldAssociation, int fieldAttributeType)\n    override;\nV.SetInputArrayToProcess(int, vtkInformation)\nC++: void SetInputArrayToProcess(int idx, vtkInformation *info)\n    override;\nV.SetInputArrayToProcess(int, int, int, string, string)\nC++: void SetInputArrayToProcess(int idx, int port,\n    int connection, const char *fieldAssociation,\n    const char *attributeTypeorName) override;\n\nSet the input data arrays that this algorithm will process.\nOverridden to pass the array selection to the mapper.\n"},
  {"ProcessViewRequest", PyvtkImageSliceRepresentation_ProcessViewRequest, METH_VARARGS,
   "V.ProcessViewRequest(vtkInformationRequestKey, vtkInformation,\n    vtkInformation) -> int\nC++: int ProcessViewRequest(\n    vtkInformationRequestKey *request_type,\n    vtkInformation *inInfo, vtkInformation *outInfo) override;\n\nvtkAlgorithm::ProcessRequest() equivalent for rendering passes.\nThis is typically called by the vtkView to request meta-data from\nthe representations or ask them to perform certain tasks e.g.\nPrepareForRendering.\n"},
  {"MarkModified", PyvtkImageSliceRepresentation_MarkModified, METH_VARARGS,
   "V.MarkModified()\nC++: void MarkModified() override;\n\nThis needs to be called on all instances of\nvtkImageSliceRepresentation when the input is modified. This is\nessential since the geometry filter does not have any real-input\non the client side which messes with the Update requests.\n"},
  {"SetVisibility", PyvtkImageSliceRepresentation_SetVisibility, METH_VARARGS,
   "V.SetVisibility(bool)\nC++: void SetVisibility(bool val) override;\n\nGet/Set the visibility for this representation. When the\nvisibility of representation of false, all view passes are\nignored. Overridden to propagate to the active representation.\n"},
  {"SetSlice", PyvtkImageSliceRepresentation_SetSlice, METH_VARARGS,
   "V.SetSlice(int)\nC++: virtual void SetSlice(unsigned int)\n\nGet set the slice number to extract.\n"},
  {"GetSlice", PyvtkImageSliceRepresentation_GetSlice, METH_VARARGS,
   "V.GetSlice() -> int\nC++: virtual unsigned int GetSlice()\n\nGet set the slice number to extract.\n"},
  {"SetSliceMode", PyvtkImageSliceRepresentation_SetSliceMode, METH_VARARGS,
   "V.SetSliceMode(int)\nC++: virtual void SetSliceMode(int)\n\nGet/Set the direction in which to slice a 3D input data.\n"},
  {"GetSliceMode", PyvtkImageSliceRepresentation_GetSliceMode, METH_VARARGS,
   "V.GetSliceMode() -> int\nC++: virtual int GetSliceMode()\n\nGet/Set the direction in which to slice a 3D input data.\n"},
  {"SetOrientation", PyvtkImageSliceRepresentation_SetOrientation, METH_VARARGS,
   "V.SetOrientation(float, float, float)\nC++: void SetOrientation(double, double, double)\n\n"},
  {"SetOrigin", PyvtkImageSliceRepresentation_SetOrigin, METH_VARARGS,
   "V.SetOrigin(float, float, float)\nC++: void SetOrigin(double, double, double)\n\n"},
  {"SetPickable", PyvtkImageSliceRepresentation_SetPickable, METH_VARARGS,
   "V.SetPickable(int)\nC++: void SetPickable(int val)\n\n"},
  {"SetPosition", PyvtkImageSliceRepresentation_SetPosition, METH_VARARGS,
   "V.SetPosition(float, float, float)\nC++: void SetPosition(double, double, double)\n\n"},
  {"SetScale", PyvtkImageSliceRepresentation_SetScale, METH_VARARGS,
   "V.SetScale(float, float, float)\nC++: void SetScale(double, double, double)\n\n"},
  {"SetOpacity", PyvtkImageSliceRepresentation_SetOpacity, METH_VARARGS,
   "V.SetOpacity(float)\nC++: void SetOpacity(double val)\n\n"},
  {"SetLookupTable", PyvtkImageSliceRepresentation_SetLookupTable, METH_VARARGS,
   "V.SetLookupTable(vtkScalarsToColors)\nC++: void SetLookupTable(vtkScalarsToColors *val)\n\n"},
  {"SetMapScalars", PyvtkImageSliceRepresentation_SetMapScalars, METH_VARARGS,
   "V.SetMapScalars(int)\nC++: void SetMapScalars(int val)\n\n"},
  {"SetUseXYPlane", PyvtkImageSliceRepresentation_SetUseXYPlane, METH_VARARGS,
   "V.SetUseXYPlane(int)\nC++: void SetUseXYPlane(int val)\n\n"},
  {"GetActor", PyvtkImageSliceRepresentation_GetActor, METH_VARARGS,
   "V.GetActor() -> vtkPVLODActor\nC++: vtkPVLODActor *GetActor()\n\nProvides access to the actor used by this representation.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkImageSliceRepresentation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVClientServerCoreRenderingPython.vtkImageSliceRepresentation", // tp_name
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
  PyvtkImageSliceRepresentation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImageSliceRepresentation_StaticNew()
{
  return vtkImageSliceRepresentation::New();
}

PyObject *PyvtkImageSliceRepresentation_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkImageSliceRepresentation_Type, PyvtkImageSliceRepresentation_Methods,
    "vtkImageSliceRepresentation",
 &PyvtkImageSliceRepresentation_StaticNew);

  PyTypeObject *pytype = &PyvtkImageSliceRepresentation_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPVDataRepresentation_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 3; c++)
  {
    static const struct { const char *name; int value; }
      constants[3] = {
        { "XY_PLANE", vtkImageSliceRepresentation::XY_PLANE },
        { "YZ_PLANE", vtkImageSliceRepresentation::YZ_PLANE },
        { "XZ_PLANE", vtkImageSliceRepresentation::XZ_PLANE },
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

void PyVTKAddFile_vtkImageSliceRepresentation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImageSliceRepresentation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImageSliceRepresentation", o) != 0)
  {
    Py_DECREF(o);
  }

}

