// python wrapper for vtkUnstructuredGridPreIntegration
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
#include "vtkUnstructuredGridPreIntegration.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkUnstructuredGridPreIntegration(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkUnstructuredGridPreIntegration_ClassNew(); }

#ifndef DECLARED_PyvtkUnstructuredGridVolumeRayIntegrator_ClassNew
extern "C" { PyObject *PyvtkUnstructuredGridVolumeRayIntegrator_ClassNew(); }
#define DECLARED_PyvtkUnstructuredGridVolumeRayIntegrator_ClassNew
#endif

static const char *PyvtkUnstructuredGridPreIntegration_Doc =
  "vtkUnstructuredGridPreIntegration - performs ray integration with\npre-integration tables.\n\n"
  "Superclass: vtkUnstructuredGridVolumeRayIntegrator\n\n"
  "vtkUnstructuredGridPreIntegration performs ray integration by looking\n"
  "into a precomputed table.  The result should be equivalent to that\n"
  "computed by vtkUnstructuredGridLinearRayIntegrator and\n"
  "vtkUnstructuredGridPartialPreIntegration, but faster than either one.\n"
  "The pre-integration algorithm was first introduced by Roettger,\n"
  "Kraus, and Ertl in \"Hardware-Accelerated Volume And Isosurface\n"
  "Rendering Based On Cell-Projection.\"\n\n"
  "Due to table size limitations, a table can only be indexed by\n"
  "independent scalars.  Thus, dependent scalars are not supported.\n\n";


static PyObject *
PyvtkUnstructuredGridPreIntegration_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkUnstructuredGridPreIntegration::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridPreIntegration_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridPreIntegration *op = static_cast<vtkUnstructuredGridPreIntegration *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkUnstructuredGridPreIntegration::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridPreIntegration_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkUnstructuredGridPreIntegration *tempr = vtkUnstructuredGridPreIntegration::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridPreIntegration_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridPreIntegration *op = static_cast<vtkUnstructuredGridPreIntegration *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkUnstructuredGridPreIntegration *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkUnstructuredGridPreIntegration::NewInstance());

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
PyvtkUnstructuredGridPreIntegration_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridPreIntegration *op = static_cast<vtkUnstructuredGridPreIntegration *>(vp);

  vtkVolume *temp0 = nullptr;
  vtkDataArray *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkVolume") &&
      ap.GetVTKObject(temp1, "vtkDataArray"))
  {
    if (ap.IsBound())
    {
      op->Initialize(temp0, temp1);
    }
    else
    {
      op->vtkUnstructuredGridPreIntegration::Initialize(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridPreIntegration_Integrate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Integrate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridPreIntegration *op = static_cast<vtkUnstructuredGridPreIntegration *>(vp);

  vtkDoubleArray *temp0 = nullptr;
  vtkDataArray *temp1 = nullptr;
  vtkDataArray *temp2 = nullptr;
  const size_t size3 = 4;
  float temp3[4];
  float save3[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkDoubleArray") &&
      ap.GetVTKObject(temp1, "vtkDataArray") &&
      ap.GetVTKObject(temp2, "vtkDataArray") &&
      ap.GetArray(temp3, size3))
  {
    ap.Save(temp3, save3, size3);

    if (ap.IsBound())
    {
      op->Integrate(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkUnstructuredGridPreIntegration::Integrate(temp0, temp1, temp2, temp3);
    }

    if (ap.HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridPreIntegration_GetIntegrator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntegrator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridPreIntegration *op = static_cast<vtkUnstructuredGridPreIntegration *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkUnstructuredGridVolumeRayIntegrator *tempr = (ap.IsBound() ?
      op->GetIntegrator() :
      op->vtkUnstructuredGridPreIntegration::GetIntegrator());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridPreIntegration_SetIntegrator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntegrator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridPreIntegration *op = static_cast<vtkUnstructuredGridPreIntegration *>(vp);

  vtkUnstructuredGridVolumeRayIntegrator *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkUnstructuredGridVolumeRayIntegrator"))
  {
    if (ap.IsBound())
    {
      op->SetIntegrator(temp0);
    }
    else
    {
      op->vtkUnstructuredGridPreIntegration::SetIntegrator(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridPreIntegration_SetIntegrationTableScalarResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntegrationTableScalarResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridPreIntegration *op = static_cast<vtkUnstructuredGridPreIntegration *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetIntegrationTableScalarResolution(temp0);
    }
    else
    {
      op->vtkUnstructuredGridPreIntegration::SetIntegrationTableScalarResolution(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridPreIntegration_GetIntegrationTableScalarResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntegrationTableScalarResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridPreIntegration *op = static_cast<vtkUnstructuredGridPreIntegration *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetIntegrationTableScalarResolution() :
      op->vtkUnstructuredGridPreIntegration::GetIntegrationTableScalarResolution());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridPreIntegration_SetIntegrationTableLengthResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntegrationTableLengthResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridPreIntegration *op = static_cast<vtkUnstructuredGridPreIntegration *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetIntegrationTableLengthResolution(temp0);
    }
    else
    {
      op->vtkUnstructuredGridPreIntegration::SetIntegrationTableLengthResolution(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridPreIntegration_GetIntegrationTableLengthResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntegrationTableLengthResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridPreIntegration *op = static_cast<vtkUnstructuredGridPreIntegration *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetIntegrationTableLengthResolution() :
      op->vtkUnstructuredGridPreIntegration::GetIntegrationTableLengthResolution());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridPreIntegration_GetIntegrationTableScalarShift(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntegrationTableScalarShift");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridPreIntegration *op = static_cast<vtkUnstructuredGridPreIntegration *>(vp);

  int temp0 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    double tempr = (ap.IsBound() ?
      op->GetIntegrationTableScalarShift(temp0) :
      op->vtkUnstructuredGridPreIntegration::GetIntegrationTableScalarShift(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridPreIntegration_GetIntegrationTableScalarScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntegrationTableScalarScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridPreIntegration *op = static_cast<vtkUnstructuredGridPreIntegration *>(vp);

  int temp0 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    double tempr = (ap.IsBound() ?
      op->GetIntegrationTableScalarScale(temp0) :
      op->vtkUnstructuredGridPreIntegration::GetIntegrationTableScalarScale(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridPreIntegration_GetIntegrationTableLengthScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntegrationTableLengthScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridPreIntegration *op = static_cast<vtkUnstructuredGridPreIntegration *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetIntegrationTableLengthScale() :
      op->vtkUnstructuredGridPreIntegration::GetIntegrationTableLengthScale());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridPreIntegration_GetIncrementalPreIntegration(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIncrementalPreIntegration");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridPreIntegration *op = static_cast<vtkUnstructuredGridPreIntegration *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetIncrementalPreIntegration() :
      op->vtkUnstructuredGridPreIntegration::GetIncrementalPreIntegration());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridPreIntegration_SetIncrementalPreIntegration(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIncrementalPreIntegration");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridPreIntegration *op = static_cast<vtkUnstructuredGridPreIntegration *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetIncrementalPreIntegration(temp0);
    }
    else
    {
      op->vtkUnstructuredGridPreIntegration::SetIncrementalPreIntegration(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridPreIntegration_IncrementalPreIntegrationOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IncrementalPreIntegrationOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridPreIntegration *op = static_cast<vtkUnstructuredGridPreIntegration *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->IncrementalPreIntegrationOn();
    }
    else
    {
      op->vtkUnstructuredGridPreIntegration::IncrementalPreIntegrationOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridPreIntegration_IncrementalPreIntegrationOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IncrementalPreIntegrationOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridPreIntegration *op = static_cast<vtkUnstructuredGridPreIntegration *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->IncrementalPreIntegrationOff();
    }
    else
    {
      op->vtkUnstructuredGridPreIntegration::IncrementalPreIntegrationOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridPreIntegration_GetPreIntegrationTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPreIntegrationTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridPreIntegration *op = static_cast<vtkUnstructuredGridPreIntegration *>(vp);

  int temp0 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    float *tempr = (ap.IsBound() ?
      op->GetPreIntegrationTable(temp0) :
      op->vtkUnstructuredGridPreIntegration::GetPreIntegrationTable(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridPreIntegration_GetTableEntry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTableEntry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridPreIntegration *op = static_cast<vtkUnstructuredGridPreIntegration *>(vp);

  double temp0;
  double temp1;
  double temp2;
  int temp3 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3, 4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
  {
    float *tempr = (ap.IsBound() ?
      op->GetTableEntry(temp0, temp1, temp2, temp3) :
      op->vtkUnstructuredGridPreIntegration::GetTableEntry(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridPreIntegration_GetIndexedTableEntry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIndexedTableEntry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridPreIntegration *op = static_cast<vtkUnstructuredGridPreIntegration *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3, 4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
  {
    float *tempr = (ap.IsBound() ?
      op->GetIndexedTableEntry(temp0, temp1, temp2, temp3) :
      op->vtkUnstructuredGridPreIntegration::GetIndexedTableEntry(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkUnstructuredGridPreIntegration_Methods[] = {
  {"IsTypeOf", PyvtkUnstructuredGridPreIntegration_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkUnstructuredGridPreIntegration_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkUnstructuredGridPreIntegration_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkUnstructuredGridPreIntegration\nC++: static vtkUnstructuredGridPreIntegration *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkUnstructuredGridPreIntegration_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkUnstructuredGridPreIntegration\nC++: vtkUnstructuredGridPreIntegration *NewInstance()\n\n"},
  {"Initialize", PyvtkUnstructuredGridPreIntegration_Initialize, METH_VARARGS,
   "V.Initialize(vtkVolume, vtkDataArray)\nC++: void Initialize(vtkVolume *volume, vtkDataArray *scalars)\n    override;\n\nSet up the integrator with the given properties and scalars.\n"},
  {"Integrate", PyvtkUnstructuredGridPreIntegration_Integrate, METH_VARARGS,
   "V.Integrate(vtkDoubleArray, vtkDataArray, vtkDataArray, [float,\n    float, float, float])\nC++: void Integrate(vtkDoubleArray *intersectionLengths,\n    vtkDataArray *nearIntersections,\n    vtkDataArray *farIntersections, float color[4]) override;\n\nGiven a set of intersections (defined by the three arrays),\ncompute the piecewise integration of the array in front to back\norder. /c intersectionLengths holds the lengths of each piecewise\nsegment. /c nearIntersections and /c farIntersections hold the\nscalar values at the front and back of each segment.  /c color\nshould contain the RGBA value of the volume in front of the\nsegments passed in, and the result will be placed back into /c\ncolor.\n"},
  {"GetIntegrator", PyvtkUnstructuredGridPreIntegration_GetIntegrator, METH_VARARGS,
   "V.GetIntegrator() -> vtkUnstructuredGridVolumeRayIntegrator\nC++: virtual vtkUnstructuredGridVolumeRayIntegrator *GetIntegrator(\n    )\n\nThe class used to fill the pre integration table.  By default, a\nvtkUnstructuredGridPartialPreIntegration is built.\n"},
  {"SetIntegrator", PyvtkUnstructuredGridPreIntegration_SetIntegrator, METH_VARARGS,
   "V.SetIntegrator(vtkUnstructuredGridVolumeRayIntegrator)\nC++: virtual void SetIntegrator(\n    vtkUnstructuredGridVolumeRayIntegrator *)\n\nThe class used to fill the pre integration table.  By default, a\nvtkUnstructuredGridPartialPreIntegration is built.\n"},
  {"SetIntegrationTableScalarResolution", PyvtkUnstructuredGridPreIntegration_SetIntegrationTableScalarResolution, METH_VARARGS,
   "V.SetIntegrationTableScalarResolution(int)\nC++: virtual void SetIntegrationTableScalarResolution(int _arg)\n\nSet/Get the size of the integration table built.\n"},
  {"GetIntegrationTableScalarResolution", PyvtkUnstructuredGridPreIntegration_GetIntegrationTableScalarResolution, METH_VARARGS,
   "V.GetIntegrationTableScalarResolution() -> int\nC++: virtual int GetIntegrationTableScalarResolution()\n\nSet/Get the size of the integration table built.\n"},
  {"SetIntegrationTableLengthResolution", PyvtkUnstructuredGridPreIntegration_SetIntegrationTableLengthResolution, METH_VARARGS,
   "V.SetIntegrationTableLengthResolution(int)\nC++: virtual void SetIntegrationTableLengthResolution(int _arg)\n\nSet/Get the size of the integration table built.\n"},
  {"GetIntegrationTableLengthResolution", PyvtkUnstructuredGridPreIntegration_GetIntegrationTableLengthResolution, METH_VARARGS,
   "V.GetIntegrationTableLengthResolution() -> int\nC++: virtual int GetIntegrationTableLengthResolution()\n\nSet/Get the size of the integration table built.\n"},
  {"GetIntegrationTableScalarShift", PyvtkUnstructuredGridPreIntegration_GetIntegrationTableScalarShift, METH_VARARGS,
   "V.GetIntegrationTableScalarShift(int) -> float\nC++: virtual double GetIntegrationTableScalarShift(\n    int component=0)\n\nGet how an integration table is indexed.\n"},
  {"GetIntegrationTableScalarScale", PyvtkUnstructuredGridPreIntegration_GetIntegrationTableScalarScale, METH_VARARGS,
   "V.GetIntegrationTableScalarScale(int) -> float\nC++: virtual double GetIntegrationTableScalarScale(\n    int component=0)\n\nGet how an integration table is indexed.\n"},
  {"GetIntegrationTableLengthScale", PyvtkUnstructuredGridPreIntegration_GetIntegrationTableLengthScale, METH_VARARGS,
   "V.GetIntegrationTableLengthScale() -> float\nC++: virtual double GetIntegrationTableLengthScale()\n\nGet how an integration table is indexed.\n"},
  {"GetIncrementalPreIntegration", PyvtkUnstructuredGridPreIntegration_GetIncrementalPreIntegration, METH_VARARGS,
   "V.GetIncrementalPreIntegration() -> int\nC++: virtual vtkTypeBool GetIncrementalPreIntegration()\n\nGet/set whether to use incremental pre-integration (by default\nit's on).  Incremental pre-integration is much faster but can\nintroduce error due to numerical imprecision.  Under most\ncircumstances, the error is not noticeable.\n"},
  {"SetIncrementalPreIntegration", PyvtkUnstructuredGridPreIntegration_SetIncrementalPreIntegration, METH_VARARGS,
   "V.SetIncrementalPreIntegration(int)\nC++: virtual void SetIncrementalPreIntegration(vtkTypeBool _arg)\n\nGet/set whether to use incremental pre-integration (by default\nit's on).  Incremental pre-integration is much faster but can\nintroduce error due to numerical imprecision.  Under most\ncircumstances, the error is not noticeable.\n"},
  {"IncrementalPreIntegrationOn", PyvtkUnstructuredGridPreIntegration_IncrementalPreIntegrationOn, METH_VARARGS,
   "V.IncrementalPreIntegrationOn()\nC++: virtual void IncrementalPreIntegrationOn()\n\nGet/set whether to use incremental pre-integration (by default\nit's on).  Incremental pre-integration is much faster but can\nintroduce error due to numerical imprecision.  Under most\ncircumstances, the error is not noticeable.\n"},
  {"IncrementalPreIntegrationOff", PyvtkUnstructuredGridPreIntegration_IncrementalPreIntegrationOff, METH_VARARGS,
   "V.IncrementalPreIntegrationOff()\nC++: virtual void IncrementalPreIntegrationOff()\n\nGet/set whether to use incremental pre-integration (by default\nit's on).  Incremental pre-integration is much faster but can\nintroduce error due to numerical imprecision.  Under most\ncircumstances, the error is not noticeable.\n"},
  {"GetPreIntegrationTable", PyvtkUnstructuredGridPreIntegration_GetPreIntegrationTable, METH_VARARGS,
   "V.GetPreIntegrationTable(int) -> (float, ...)\nC++: virtual float *GetPreIntegrationTable(int component=0)\n\nGet the partial pre-integration table for the given scalar\ncomponent. The tables are built when Initialize is called.  A\nsegment of length d with a front scalar of sf and a back scalar\nof sb is referenced in the resulting table as 4 * ((l *\nIntegrationTableLengthScale) * \\c\nIntegrationTableScalarResolution *\nIntegrationTableScalarResolution + (sb *\nIntegrationTableScalarScale + \\c IntegrationTableScalarShift) *\nIntegrationTableScalarResolution + (sf *\nIntegrationTableScalarScale + \\c IntegrationTableScalarShift)).\n"},
  {"GetTableEntry", PyvtkUnstructuredGridPreIntegration_GetTableEntry, METH_VARARGS,
   "V.GetTableEntry(float, float, float, int) -> (float, ...)\nC++: float *GetTableEntry(double scalar_front, double scalar_back,\n     double length, int component=0)\n\nGet an entry (RGBA) in one of the pre-integration tables.  The\ntables are built when Initialize is called.\n"},
  {"GetIndexedTableEntry", PyvtkUnstructuredGridPreIntegration_GetIndexedTableEntry, METH_VARARGS,
   "V.GetIndexedTableEntry(int, int, int, int) -> (float, ...)\nC++: float *GetIndexedTableEntry(int scalar_front_index,\n    int scalar_back_index, int length_index, int component=0)\n\nLike GetTableEntry, except the inputs are scaled indices into the\ntable rather than than the actual scalar and length values.  Use\nGetTableEntry unless you are really sure you know what you are\ndoing.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkUnstructuredGridPreIntegration_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingVolumePython.vtkUnstructuredGridPreIntegration", // tp_name
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
  PyvtkUnstructuredGridPreIntegration_Doc, // tp_doc
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

static vtkObjectBase *PyvtkUnstructuredGridPreIntegration_StaticNew()
{
  return vtkUnstructuredGridPreIntegration::New();
}

PyObject *PyvtkUnstructuredGridPreIntegration_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkUnstructuredGridPreIntegration_Type, PyvtkUnstructuredGridPreIntegration_Methods,
    "vtkUnstructuredGridPreIntegration",
 &PyvtkUnstructuredGridPreIntegration_StaticNew);

  PyTypeObject *pytype = &PyvtkUnstructuredGridPreIntegration_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkUnstructuredGridVolumeRayIntegrator_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkUnstructuredGridPreIntegration(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkUnstructuredGridPreIntegration_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkUnstructuredGridPreIntegration", o) != 0)
  {
    Py_DECREF(o);
  }

}

