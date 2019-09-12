// python wrapper for vtkmProbe
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
#include "vtkmProbe.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkmProbe(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkmProbe_ClassNew(); }

#ifndef DECLARED_PyvtkDataSetAlgorithm_ClassNew
extern "C" { PyObject *PyvtkDataSetAlgorithm_ClassNew(); }
#define DECLARED_PyvtkDataSetAlgorithm_ClassNew
#endif

static const char *PyvtkmProbe_Doc =
  "vtkmProbe - Sample data at specified point locations\n\n"
  "Superclass: vtkDataSetAlgorithm\n\n"
  "vtkmProbe is a filter that computes point attributes(e.g., scalars,\n"
  "vectors, etc.) at specific point positions using the probe filter in\n"
  "VTK-m. The filter has two inputs: the Input and Source. The Input\n"
  "geometric structure is passed through the filter. The point\n"
  "attributes are computed at the Input point positions by interpolating\n"
  "into the source data. For example, we can compute data values on a\n"
  "plane(plane specified as Input from a volume(Source). The source\n"
  "geometry must have cellSet defined otherwise the vtkm filter won't\n"
  "work. The cell data of the source data is copied to the output based\n"
  "on in which source cell each input point is. If an array of the same\n"
  "name exists both in source's point and cell data, only the one from\n"
  "the point data is probed. The valid point result is stored as a field\n"
  "array whose default name is \"vtkValidPointMask\" in the point data and\n"
  "the valid cell result(Invalid cells are the cells with at least one\n"
  "invalid point) is stored as a field array whose default name is\n"
  "\"vtkValidCellMask\" in the cell data.\n\n"
  "This filter can be used to resample data, or convert one dataset form\n"
  "into another. For example, an unstructured grid (vtkUnstructuredGrid)\n"
  "can be probed with a volume (three-dimensional vtkImageData), and\n"
  "then volume rendering techniques can be used to visualize the\n"
  "results. Another example: a line or curve can be used to probe data\n"
  "to produce x-y plots along that line or curve.\n\n";


static PyObject *
PyvtkmProbe_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkmProbe::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkmProbe_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkmProbe *op = static_cast<vtkmProbe *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkmProbe::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkmProbe_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkmProbe *tempr = vtkmProbe::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkmProbe_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkmProbe *op = static_cast<vtkmProbe *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkmProbe *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkmProbe::NewInstance());

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
PyvtkmProbe_SetSourceData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSourceData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkmProbe *op = static_cast<vtkmProbe *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->SetSourceData(temp0);
    }
    else
    {
      op->vtkmProbe::SetSourceData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkmProbe_GetSource(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSource");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkmProbe *op = static_cast<vtkmProbe *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataObject *tempr = (ap.IsBound() ?
      op->GetSource() :
      op->vtkmProbe::GetSource());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkmProbe_SetSourceConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSourceConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkmProbe *op = static_cast<vtkmProbe *>(vp);

  vtkAlgorithmOutput *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
  {
    if (ap.IsBound())
    {
      op->SetSourceConnection(temp0);
    }
    else
    {
      op->vtkmProbe::SetSourceConnection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkmProbe_SetPassCellArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPassCellArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkmProbe *op = static_cast<vtkmProbe *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPassCellArrays(temp0);
    }
    else
    {
      op->vtkmProbe::SetPassCellArrays(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkmProbe_PassCellArraysOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassCellArraysOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkmProbe *op = static_cast<vtkmProbe *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassCellArraysOn();
    }
    else
    {
      op->vtkmProbe::PassCellArraysOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkmProbe_PassCellArraysOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassCellArraysOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkmProbe *op = static_cast<vtkmProbe *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassCellArraysOff();
    }
    else
    {
      op->vtkmProbe::PassCellArraysOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkmProbe_GetPassCellArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPassCellArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkmProbe *op = static_cast<vtkmProbe *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPassCellArrays() :
      op->vtkmProbe::GetPassCellArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkmProbe_SetPassPointArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPassPointArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkmProbe *op = static_cast<vtkmProbe *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPassPointArrays(temp0);
    }
    else
    {
      op->vtkmProbe::SetPassPointArrays(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkmProbe_PassPointArraysOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassPointArraysOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkmProbe *op = static_cast<vtkmProbe *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassPointArraysOn();
    }
    else
    {
      op->vtkmProbe::PassPointArraysOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkmProbe_PassPointArraysOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassPointArraysOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkmProbe *op = static_cast<vtkmProbe *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassPointArraysOff();
    }
    else
    {
      op->vtkmProbe::PassPointArraysOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkmProbe_GetPassPointArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPassPointArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkmProbe *op = static_cast<vtkmProbe *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPassPointArrays() :
      op->vtkmProbe::GetPassPointArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkmProbe_SetPassFieldArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPassFieldArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkmProbe *op = static_cast<vtkmProbe *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPassFieldArrays(temp0);
    }
    else
    {
      op->vtkmProbe::SetPassFieldArrays(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkmProbe_PassFieldArraysOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassFieldArraysOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkmProbe *op = static_cast<vtkmProbe *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassFieldArraysOn();
    }
    else
    {
      op->vtkmProbe::PassFieldArraysOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkmProbe_PassFieldArraysOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassFieldArraysOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkmProbe *op = static_cast<vtkmProbe *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassFieldArraysOff();
    }
    else
    {
      op->vtkmProbe::PassFieldArraysOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkmProbe_GetPassFieldArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPassFieldArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkmProbe *op = static_cast<vtkmProbe *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPassFieldArrays() :
      op->vtkmProbe::GetPassFieldArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkmProbe_SetValidPointMaskArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValidPointMaskArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkmProbe *op = static_cast<vtkmProbe *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetValidPointMaskArrayName(temp0);
    }
    else
    {
      op->vtkmProbe::SetValidPointMaskArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkmProbe_GetValidPointMaskArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValidPointMaskArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkmProbe *op = static_cast<vtkmProbe *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetValidPointMaskArrayName() :
      op->vtkmProbe::GetValidPointMaskArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkmProbe_SetValidCellMaskArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValidCellMaskArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkmProbe *op = static_cast<vtkmProbe *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetValidCellMaskArrayName(temp0);
    }
    else
    {
      op->vtkmProbe::SetValidCellMaskArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkmProbe_GetValidCellMaskArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValidCellMaskArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkmProbe *op = static_cast<vtkmProbe *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetValidCellMaskArrayName() :
      op->vtkmProbe::GetValidCellMaskArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkmProbe_Methods[] = {
  {"IsTypeOf", PyvtkmProbe_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkmProbe_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkmProbe_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkmProbe\nC++: static vtkmProbe *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkmProbe_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkmProbe\nC++: vtkmProbe *NewInstance()\n\n"},
  {"SetSourceData", PyvtkmProbe_SetSourceData, METH_VARARGS,
   "V.SetSourceData(vtkDataObject)\nC++: void SetSourceData(vtkDataObject *source)\n\nSpecify the data set that will be probed at the input points. The\nInput gives the geometry (the points and cells) for the output,\nwhile the Source is probed (interpolated) to generate the\nscalars, vectors, etc. for the output points based on the point\nlocations.\n"},
  {"GetSource", PyvtkmProbe_GetSource, METH_VARARGS,
   "V.GetSource() -> vtkDataObject\nC++: vtkDataObject *GetSource()\n\nSpecify the data set that will be probed at the input points. The\nInput gives the geometry (the points and cells) for the output,\nwhile the Source is probed (interpolated) to generate the\nscalars, vectors, etc. for the output points based on the point\nlocations.\n"},
  {"SetSourceConnection", PyvtkmProbe_SetSourceConnection, METH_VARARGS,
   "V.SetSourceConnection(vtkAlgorithmOutput)\nC++: void SetSourceConnection(vtkAlgorithmOutput *algOutput)\n\nSpecify the data set that will be probed at the input points. The\nInput gives the geometry (the points and cells) for the output,\nwhile the Source is probed (interpolated) to generate the\nscalars, vectors, etc. for the output points based on the point\nlocations.\n"},
  {"SetPassCellArrays", PyvtkmProbe_SetPassCellArrays, METH_VARARGS,
   "V.SetPassCellArrays(int)\nC++: virtual void SetPassCellArrays(vtkTypeBool _arg)\n\nShallow copy the input cell data arrays to the output. Off by\ndefault.\n"},
  {"PassCellArraysOn", PyvtkmProbe_PassCellArraysOn, METH_VARARGS,
   "V.PassCellArraysOn()\nC++: virtual void PassCellArraysOn()\n\nShallow copy the input cell data arrays to the output. Off by\ndefault.\n"},
  {"PassCellArraysOff", PyvtkmProbe_PassCellArraysOff, METH_VARARGS,
   "V.PassCellArraysOff()\nC++: virtual void PassCellArraysOff()\n\nShallow copy the input cell data arrays to the output. Off by\ndefault.\n"},
  {"GetPassCellArrays", PyvtkmProbe_GetPassCellArrays, METH_VARARGS,
   "V.GetPassCellArrays() -> int\nC++: virtual vtkTypeBool GetPassCellArrays()\n\nShallow copy the input cell data arrays to the output. Off by\ndefault.\n"},
  {"SetPassPointArrays", PyvtkmProbe_SetPassPointArrays, METH_VARARGS,
   "V.SetPassPointArrays(int)\nC++: virtual void SetPassPointArrays(vtkTypeBool _arg)\n\nShallow copy the input point data arrays to the output. Off by\ndefault.\n"},
  {"PassPointArraysOn", PyvtkmProbe_PassPointArraysOn, METH_VARARGS,
   "V.PassPointArraysOn()\nC++: virtual void PassPointArraysOn()\n\nShallow copy the input point data arrays to the output. Off by\ndefault.\n"},
  {"PassPointArraysOff", PyvtkmProbe_PassPointArraysOff, METH_VARARGS,
   "V.PassPointArraysOff()\nC++: virtual void PassPointArraysOff()\n\nShallow copy the input point data arrays to the output. Off by\ndefault.\n"},
  {"GetPassPointArrays", PyvtkmProbe_GetPassPointArrays, METH_VARARGS,
   "V.GetPassPointArrays() -> int\nC++: virtual vtkTypeBool GetPassPointArrays()\n\nShallow copy the input point data arrays to the output. Off by\ndefault.\n"},
  {"SetPassFieldArrays", PyvtkmProbe_SetPassFieldArrays, METH_VARARGS,
   "V.SetPassFieldArrays(int)\nC++: virtual void SetPassFieldArrays(vtkTypeBool _arg)\n\nSet whether to pass the field-data arrays from the Input i.e. the\ninput providing the geometry to the output. On by default.\n"},
  {"PassFieldArraysOn", PyvtkmProbe_PassFieldArraysOn, METH_VARARGS,
   "V.PassFieldArraysOn()\nC++: virtual void PassFieldArraysOn()\n\nSet whether to pass the field-data arrays from the Input i.e. the\ninput providing the geometry to the output. On by default.\n"},
  {"PassFieldArraysOff", PyvtkmProbe_PassFieldArraysOff, METH_VARARGS,
   "V.PassFieldArraysOff()\nC++: virtual void PassFieldArraysOff()\n\nSet whether to pass the field-data arrays from the Input i.e. the\ninput providing the geometry to the output. On by default.\n"},
  {"GetPassFieldArrays", PyvtkmProbe_GetPassFieldArrays, METH_VARARGS,
   "V.GetPassFieldArrays() -> int\nC++: virtual vtkTypeBool GetPassFieldArrays()\n\nSet whether to pass the field-data arrays from the Input i.e. the\ninput providing the geometry to the output. On by default.\n"},
  {"SetValidPointMaskArrayName", PyvtkmProbe_SetValidPointMaskArrayName, METH_VARARGS,
   "V.SetValidPointMaskArrayName(string)\nC++: virtual void SetValidPointMaskArrayName(std::string _arg)\n\nReturns the name of the valid point array added to the output\nwith values 2 for hidden points and 0 for valid points. Set to\n\"vtkValidPointMask\" by default.\n"},
  {"GetValidPointMaskArrayName", PyvtkmProbe_GetValidPointMaskArrayName, METH_VARARGS,
   "V.GetValidPointMaskArrayName() -> string\nC++: virtual std::string GetValidPointMaskArrayName()\n\nReturns the name of the valid point array added to the output\nwith values 2 for hidden points and 0 for valid points. Set to\n\"vtkValidPointMask\" by default.\n"},
  {"SetValidCellMaskArrayName", PyvtkmProbe_SetValidCellMaskArrayName, METH_VARARGS,
   "V.SetValidCellMaskArrayName(string)\nC++: virtual void SetValidCellMaskArrayName(std::string _arg)\n\nReturns the name of the valid cell array added to the output with\nvalues 2 for hidden points and 0 for valid points. Set to\n\"vtkValidCellMask\" by default.\n"},
  {"GetValidCellMaskArrayName", PyvtkmProbe_GetValidCellMaskArrayName, METH_VARARGS,
   "V.GetValidCellMaskArrayName() -> string\nC++: virtual std::string GetValidCellMaskArrayName()\n\nReturns the name of the valid cell array added to the output with\nvalues 2 for hidden points and 0 for valid points. Set to\n\"vtkValidCellMask\" by default.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkmProbe_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkAcceleratorsVTKmPython.vtkmProbe", // tp_name
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
  PyvtkmProbe_Doc, // tp_doc
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

static vtkObjectBase *PyvtkmProbe_StaticNew()
{
  return vtkmProbe::New();
}

PyObject *PyvtkmProbe_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkmProbe_Type, PyvtkmProbe_Methods,
    "vtkmProbe",
 &PyvtkmProbe_StaticNew);

  PyTypeObject *pytype = &PyvtkmProbe_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkDataSetAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkmProbe(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkmProbe_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkmProbe", o) != 0)
  {
    Py_DECREF(o);
  }

}

