// python wrapper for vtkCutter
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
#include "vtkCutter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCutter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkCutter_ClassNew(); }

#ifndef DECLARED_PyvtkPolyDataAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPolyDataAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPolyDataAlgorithm_ClassNew
#endif

static const char *PyvtkCutter_Doc =
  "vtkCutter - Cut vtkDataSet with user-specified implicit function\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkCutter is a filter to cut through data using any subclass of\n"
  "vtkImplicitFunction. That is, a polygonal surface is created\n"
  "corresponding to the implicit function F(x,y,z) = value(s), where you\n"
  "can specify one or more values used to cut with.\n\n"
  "In VTK, cutting means reducing a cell of dimension N to a cut surface\n"
  "of dimension N-1. For example, a tetrahedron when cut by a plane\n"
  "(i.e., vtkPlane implicit function) will generate triangles. (In\n"
  "comparison, clipping takes a N dimensional cell and creates N\n"
  "dimension primitives.)\n\n"
  "vtkCutter is generally used to \"slice-through\" a dataset, generating\n"
  "a surface that can be visualized. It is also possible to use\n"
  "vtkCutter to do a form of volume rendering. vtkCutter does this by\n"
  "generating multiple cut surfaces (usually planes) which are ordered\n"
  "(and rendered) from back-to-front. The surfaces are set translucent\n"
  "to give a volumetric rendering effect.\n\n"
  "Note that data can be cut using either 1) the scalar values\n"
  "associated with the dataset or 2) an implicit function associated\n"
  "with this class. By default, if an implicit function is set it is\n"
  "used to clip the data set, otherwise the dataset scalars are used to\n"
  "perform the clipping.\n\n"
  "@sa\n"
  "vtkImplicitFunction vtkClipPolyData\n\n";


static PyObject *
PyvtkCutter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCutter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCutter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutter *op = static_cast<vtkCutter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCutter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCutter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCutter *tempr = vtkCutter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCutter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutter *op = static_cast<vtkCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCutter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCutter::NewInstance());

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
PyvtkCutter_SetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutter *op = static_cast<vtkCutter *>(vp);

  int temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetValue(temp0, temp1);
    }
    else
    {
      op->vtkCutter::SetValue(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCutter_GetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutter *op = static_cast<vtkCutter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double tempr = (ap.IsBound() ?
      op->GetValue(temp0) :
      op->vtkCutter::GetValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCutter_GetValues_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutter *op = static_cast<vtkCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetValues() :
      op->vtkCutter::GetValues());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCutter_GetValues_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutter *op = static_cast<vtkCutter *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetValues(temp0);
    }
    else
    {
      op->vtkCutter::GetValues(temp0);
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
PyvtkCutter_GetValues(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkCutter_GetValues_s1(self, args);
    case 1:
      return PyvtkCutter_GetValues_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetValues");
  return nullptr;
}



static PyObject *
PyvtkCutter_SetNumberOfContours(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfContours");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutter *op = static_cast<vtkCutter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfContours(temp0);
    }
    else
    {
      op->vtkCutter::SetNumberOfContours(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCutter_GetNumberOfContours(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfContours");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutter *op = static_cast<vtkCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfContours() :
      op->vtkCutter::GetNumberOfContours());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCutter_GenerateValues_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutter *op = static_cast<vtkCutter *>(vp);

  int temp0;
  const size_t size1 = 2;
  double temp1[2];
  double save1[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->GenerateValues(temp0, temp1);
    }
    else
    {
      op->vtkCutter::GenerateValues(temp0, temp1);
    }

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCutter_GenerateValues_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutter *op = static_cast<vtkCutter *>(vp);

  int temp0;
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
      op->GenerateValues(temp0, temp1, temp2);
    }
    else
    {
      op->vtkCutter::GenerateValues(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCutter_GenerateValues(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkCutter_GenerateValues_s1(self, args);
    case 3:
      return PyvtkCutter_GenerateValues_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GenerateValues");
  return nullptr;
}



static PyObject *
PyvtkCutter_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutter *op = static_cast<vtkCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkCutter::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCutter_SetCutFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCutFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutter *op = static_cast<vtkCutter *>(vp);

  vtkImplicitFunction *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImplicitFunction"))
  {
    if (ap.IsBound())
    {
      op->SetCutFunction(temp0);
    }
    else
    {
      op->vtkCutter::SetCutFunction(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCutter_GetCutFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCutFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutter *op = static_cast<vtkCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImplicitFunction *tempr = (ap.IsBound() ?
      op->GetCutFunction() :
      op->vtkCutter::GetCutFunction());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCutter_SetGenerateCutScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateCutScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutter *op = static_cast<vtkCutter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateCutScalars(temp0);
    }
    else
    {
      op->vtkCutter::SetGenerateCutScalars(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCutter_GetGenerateCutScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateCutScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutter *op = static_cast<vtkCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGenerateCutScalars() :
      op->vtkCutter::GetGenerateCutScalars());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCutter_GenerateCutScalarsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateCutScalarsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutter *op = static_cast<vtkCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateCutScalarsOn();
    }
    else
    {
      op->vtkCutter::GenerateCutScalarsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCutter_GenerateCutScalarsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateCutScalarsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutter *op = static_cast<vtkCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateCutScalarsOff();
    }
    else
    {
      op->vtkCutter::GenerateCutScalarsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCutter_SetGenerateTriangles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateTriangles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutter *op = static_cast<vtkCutter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateTriangles(temp0);
    }
    else
    {
      op->vtkCutter::SetGenerateTriangles(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCutter_GetGenerateTriangles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateTriangles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutter *op = static_cast<vtkCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGenerateTriangles() :
      op->vtkCutter::GetGenerateTriangles());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCutter_GenerateTrianglesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateTrianglesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutter *op = static_cast<vtkCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateTrianglesOn();
    }
    else
    {
      op->vtkCutter::GenerateTrianglesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCutter_GenerateTrianglesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateTrianglesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutter *op = static_cast<vtkCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateTrianglesOff();
    }
    else
    {
      op->vtkCutter::GenerateTrianglesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCutter_SetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutter *op = static_cast<vtkCutter *>(vp);

  vtkIncrementalPointLocator *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkIncrementalPointLocator"))
  {
    if (ap.IsBound())
    {
      op->SetLocator(temp0);
    }
    else
    {
      op->vtkCutter::SetLocator(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCutter_GetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutter *op = static_cast<vtkCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIncrementalPointLocator *tempr = (ap.IsBound() ?
      op->GetLocator() :
      op->vtkCutter::GetLocator());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCutter_SetSortBy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSortBy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutter *op = static_cast<vtkCutter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSortBy(temp0);
    }
    else
    {
      op->vtkCutter::SetSortBy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCutter_GetSortByMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSortByMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutter *op = static_cast<vtkCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSortByMinValue() :
      op->vtkCutter::GetSortByMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCutter_GetSortByMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSortByMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutter *op = static_cast<vtkCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSortByMaxValue() :
      op->vtkCutter::GetSortByMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCutter_GetSortBy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSortBy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutter *op = static_cast<vtkCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSortBy() :
      op->vtkCutter::GetSortBy());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCutter_SetSortByToSortByValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSortByToSortByValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutter *op = static_cast<vtkCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetSortByToSortByValue();
    }
    else
    {
      op->vtkCutter::SetSortByToSortByValue();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCutter_SetSortByToSortByCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSortByToSortByCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutter *op = static_cast<vtkCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetSortByToSortByCell();
    }
    else
    {
      op->vtkCutter::SetSortByToSortByCell();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCutter_GetSortByAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSortByAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutter *op = static_cast<vtkCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetSortByAsString() :
      op->vtkCutter::GetSortByAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCutter_CreateDefaultLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutter *op = static_cast<vtkCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CreateDefaultLocator();
    }
    else
    {
      op->vtkCutter::CreateDefaultLocator();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCutter_GetCellTypeDimensions(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetCellTypeDimensions");

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<unsigned char> store0(2*size0);
  unsigned char *temp0 = store0.Data();
  unsigned char *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    vtkCutter::GetCellTypeDimensions(temp0);

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
PyvtkCutter_SetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutter *op = static_cast<vtkCutter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOutputPointsPrecision(temp0);
    }
    else
    {
      op->vtkCutter::SetOutputPointsPrecision(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCutter_GetOutputPointsPrecisionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecisionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutter *op = static_cast<vtkCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecisionMinValue() :
      op->vtkCutter::GetOutputPointsPrecisionMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCutter_GetOutputPointsPrecisionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecisionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutter *op = static_cast<vtkCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecisionMaxValue() :
      op->vtkCutter::GetOutputPointsPrecisionMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCutter_GetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutter *op = static_cast<vtkCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecision() :
      op->vtkCutter::GetOutputPointsPrecision());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkCutter_Methods[] = {
  {"IsTypeOf", PyvtkCutter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCutter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCutter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkCutter\nC++: static vtkCutter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCutter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkCutter\nC++: vtkCutter *NewInstance()\n\n"},
  {"SetValue", PyvtkCutter_SetValue, METH_VARARGS,
   "V.SetValue(int, float)\nC++: void SetValue(int i, double value)\n\nSet a particular contour value at contour number i. The index i\nranges between 0<=i<NumberOfContours.\n"},
  {"GetValue", PyvtkCutter_GetValue, METH_VARARGS,
   "V.GetValue(int) -> float\nC++: double GetValue(int i)\n\nGet the ith contour value.\n"},
  {"GetValues", PyvtkCutter_GetValues, METH_VARARGS,
   "V.GetValues() -> (float, ...)\nC++: double *GetValues()\nV.GetValues([float, ...])\nC++: void GetValues(double *contourValues)\n\nGet a pointer to an array of contour values. There will be\nGetNumberOfContours() values in the list.\n"},
  {"SetNumberOfContours", PyvtkCutter_SetNumberOfContours, METH_VARARGS,
   "V.SetNumberOfContours(int)\nC++: void SetNumberOfContours(int number)\n\nSet the number of contours to place into the list. You only\nreally need to use this method to reduce list size. The method\nSetValue() will automatically increase list size as needed.\n"},
  {"GetNumberOfContours", PyvtkCutter_GetNumberOfContours, METH_VARARGS,
   "V.GetNumberOfContours() -> int\nC++: int GetNumberOfContours()\n\nGet the number of contours in the list of contour values.\n"},
  {"GenerateValues", PyvtkCutter_GenerateValues, METH_VARARGS,
   "V.GenerateValues(int, [float, float])\nC++: void GenerateValues(int numContours, double range[2])\nV.GenerateValues(int, float, float)\nC++: void GenerateValues(int numContours, double rangeStart,\n    double rangeEnd)\n\nGenerate numContours equally spaced contour values between\nspecified range. Contour values will include min/max range\nvalues.\n"},
  {"GetMTime", PyvtkCutter_GetMTime, METH_VARARGS,
   "V.GetMTime() -> int\nC++: vtkMTimeType GetMTime() override;\n\nOverride GetMTime because we delegate to vtkContourValues and\nrefer to vtkImplicitFunction.\n"},
  {"SetCutFunction", PyvtkCutter_SetCutFunction, METH_VARARGS,
   "V.SetCutFunction(vtkImplicitFunction)\nC++: virtual void SetCutFunction(vtkImplicitFunction *)\n\nSpecify the implicit function to perform the cutting.\n"},
  {"GetCutFunction", PyvtkCutter_GetCutFunction, METH_VARARGS,
   "V.GetCutFunction() -> vtkImplicitFunction\nC++: virtual vtkImplicitFunction *GetCutFunction()\n\nSpecify the implicit function to perform the cutting.\n"},
  {"SetGenerateCutScalars", PyvtkCutter_SetGenerateCutScalars, METH_VARARGS,
   "V.SetGenerateCutScalars(int)\nC++: virtual void SetGenerateCutScalars(vtkTypeBool _arg)\n\nIf this flag is enabled, then the output scalar values will be\ninterpolated from the implicit function values, and not the input\nscalar data.\n"},
  {"GetGenerateCutScalars", PyvtkCutter_GetGenerateCutScalars, METH_VARARGS,
   "V.GetGenerateCutScalars() -> int\nC++: virtual vtkTypeBool GetGenerateCutScalars()\n\nIf this flag is enabled, then the output scalar values will be\ninterpolated from the implicit function values, and not the input\nscalar data.\n"},
  {"GenerateCutScalarsOn", PyvtkCutter_GenerateCutScalarsOn, METH_VARARGS,
   "V.GenerateCutScalarsOn()\nC++: virtual void GenerateCutScalarsOn()\n\nIf this flag is enabled, then the output scalar values will be\ninterpolated from the implicit function values, and not the input\nscalar data.\n"},
  {"GenerateCutScalarsOff", PyvtkCutter_GenerateCutScalarsOff, METH_VARARGS,
   "V.GenerateCutScalarsOff()\nC++: virtual void GenerateCutScalarsOff()\n\nIf this flag is enabled, then the output scalar values will be\ninterpolated from the implicit function values, and not the input\nscalar data.\n"},
  {"SetGenerateTriangles", PyvtkCutter_SetGenerateTriangles, METH_VARARGS,
   "V.SetGenerateTriangles(int)\nC++: virtual void SetGenerateTriangles(vtkTypeBool _arg)\n\nIf this is enabled (by default), the output will be triangles\notherwise, the output will be the intersection polygons WARNING:\nif the cutting function is not a plane, the output will be 3D\npoygons, which might be nice to look at but hard to compute with\ndownstream.\n"},
  {"GetGenerateTriangles", PyvtkCutter_GetGenerateTriangles, METH_VARARGS,
   "V.GetGenerateTriangles() -> int\nC++: virtual vtkTypeBool GetGenerateTriangles()\n\nIf this is enabled (by default), the output will be triangles\notherwise, the output will be the intersection polygons WARNING:\nif the cutting function is not a plane, the output will be 3D\npoygons, which might be nice to look at but hard to compute with\ndownstream.\n"},
  {"GenerateTrianglesOn", PyvtkCutter_GenerateTrianglesOn, METH_VARARGS,
   "V.GenerateTrianglesOn()\nC++: virtual void GenerateTrianglesOn()\n\nIf this is enabled (by default), the output will be triangles\notherwise, the output will be the intersection polygons WARNING:\nif the cutting function is not a plane, the output will be 3D\npoygons, which might be nice to look at but hard to compute with\ndownstream.\n"},
  {"GenerateTrianglesOff", PyvtkCutter_GenerateTrianglesOff, METH_VARARGS,
   "V.GenerateTrianglesOff()\nC++: virtual void GenerateTrianglesOff()\n\nIf this is enabled (by default), the output will be triangles\notherwise, the output will be the intersection polygons WARNING:\nif the cutting function is not a plane, the output will be 3D\npoygons, which might be nice to look at but hard to compute with\ndownstream.\n"},
  {"SetLocator", PyvtkCutter_SetLocator, METH_VARARGS,
   "V.SetLocator(vtkIncrementalPointLocator)\nC++: void SetLocator(vtkIncrementalPointLocator *locator)\n\nSpecify a spatial locator for merging points. By default, an\ninstance of vtkMergePoints is used.\n"},
  {"GetLocator", PyvtkCutter_GetLocator, METH_VARARGS,
   "V.GetLocator() -> vtkIncrementalPointLocator\nC++: virtual vtkIncrementalPointLocator *GetLocator()\n\nSpecify a spatial locator for merging points. By default, an\ninstance of vtkMergePoints is used.\n"},
  {"SetSortBy", PyvtkCutter_SetSortBy, METH_VARARGS,
   "V.SetSortBy(int)\nC++: virtual void SetSortBy(int _arg)\n\nSet the sorting order for the generated polydata. There are two\npossibilities: Sort by value = 0 - This is the most efficient\nsort. For each cell, all contour values are processed. This is\nthe default. Sort by cell = 1 - For each contour value, all cells\nare processed. This order should be used if the extracted\npolygons must be rendered in a back-to-front or front-to-back\norder. This is very problem dependent. For most applications, the\ndefault order is fine (and faster).\n\n* Sort by cell is going to have a problem if the input has 2D and\n3D cells.\n* Cell data will be scrambled because with\n* vtkPolyData output, verts and lines have lower cell ids than\n  triangles.\n"},
  {"GetSortByMinValue", PyvtkCutter_GetSortByMinValue, METH_VARARGS,
   "V.GetSortByMinValue() -> int\nC++: virtual int GetSortByMinValue()\n\nSet the sorting order for the generated polydata. There are two\npossibilities: Sort by value = 0 - This is the most efficient\nsort. For each cell, all contour values are processed. This is\nthe default. Sort by cell = 1 - For each contour value, all cells\nare processed. This order should be used if the extracted\npolygons must be rendered in a back-to-front or front-to-back\norder. This is very problem dependent. For most applications, the\ndefault order is fine (and faster).\n\n* Sort by cell is going to have a problem if the input has 2D and\n3D cells.\n* Cell data will be scrambled because with\n* vtkPolyData output, verts and lines have lower cell ids than\n  triangles.\n"},
  {"GetSortByMaxValue", PyvtkCutter_GetSortByMaxValue, METH_VARARGS,
   "V.GetSortByMaxValue() -> int\nC++: virtual int GetSortByMaxValue()\n\nSet the sorting order for the generated polydata. There are two\npossibilities: Sort by value = 0 - This is the most efficient\nsort. For each cell, all contour values are processed. This is\nthe default. Sort by cell = 1 - For each contour value, all cells\nare processed. This order should be used if the extracted\npolygons must be rendered in a back-to-front or front-to-back\norder. This is very problem dependent. For most applications, the\ndefault order is fine (and faster).\n\n* Sort by cell is going to have a problem if the input has 2D and\n3D cells.\n* Cell data will be scrambled because with\n* vtkPolyData output, verts and lines have lower cell ids than\n  triangles.\n"},
  {"GetSortBy", PyvtkCutter_GetSortBy, METH_VARARGS,
   "V.GetSortBy() -> int\nC++: virtual int GetSortBy()\n\nSet the sorting order for the generated polydata. There are two\npossibilities: Sort by value = 0 - This is the most efficient\nsort. For each cell, all contour values are processed. This is\nthe default. Sort by cell = 1 - For each contour value, all cells\nare processed. This order should be used if the extracted\npolygons must be rendered in a back-to-front or front-to-back\norder. This is very problem dependent. For most applications, the\ndefault order is fine (and faster).\n\n* Sort by cell is going to have a problem if the input has 2D and\n3D cells.\n* Cell data will be scrambled because with\n* vtkPolyData output, verts and lines have lower cell ids than\n  triangles.\n"},
  {"SetSortByToSortByValue", PyvtkCutter_SetSortByToSortByValue, METH_VARARGS,
   "V.SetSortByToSortByValue()\nC++: void SetSortByToSortByValue()\n\nSet the sorting order for the generated polydata. There are two\npossibilities: Sort by value = 0 - This is the most efficient\nsort. For each cell, all contour values are processed. This is\nthe default. Sort by cell = 1 - For each contour value, all cells\nare processed. This order should be used if the extracted\npolygons must be rendered in a back-to-front or front-to-back\norder. This is very problem dependent. For most applications, the\ndefault order is fine (and faster).\n\n* Sort by cell is going to have a problem if the input has 2D and\n3D cells.\n* Cell data will be scrambled because with\n* vtkPolyData output, verts and lines have lower cell ids than\n  triangles.\n"},
  {"SetSortByToSortByCell", PyvtkCutter_SetSortByToSortByCell, METH_VARARGS,
   "V.SetSortByToSortByCell()\nC++: void SetSortByToSortByCell()\n\nSet the sorting order for the generated polydata. There are two\npossibilities: Sort by value = 0 - This is the most efficient\nsort. For each cell, all contour values are processed. This is\nthe default. Sort by cell = 1 - For each contour value, all cells\nare processed. This order should be used if the extracted\npolygons must be rendered in a back-to-front or front-to-back\norder. This is very problem dependent. For most applications, the\ndefault order is fine (and faster).\n\n* Sort by cell is going to have a problem if the input has 2D and\n3D cells.\n* Cell data will be scrambled because with\n* vtkPolyData output, verts and lines have lower cell ids than\n  triangles.\n"},
  {"GetSortByAsString", PyvtkCutter_GetSortByAsString, METH_VARARGS,
   "V.GetSortByAsString() -> string\nC++: const char *GetSortByAsString()\n\nSet the sorting order for the generated polydata. There are two\npossibilities: Sort by value = 0 - This is the most efficient\nsort. For each cell, all contour values are processed. This is\nthe default. Sort by cell = 1 - For each contour value, all cells\nare processed. This order should be used if the extracted\npolygons must be rendered in a back-to-front or front-to-back\norder. This is very problem dependent. For most applications, the\ndefault order is fine (and faster).\n\n* Sort by cell is going to have a problem if the input has 2D and\n3D cells.\n* Cell data will be scrambled because with\n* vtkPolyData output, verts and lines have lower cell ids than\n  triangles.\n"},
  {"CreateDefaultLocator", PyvtkCutter_CreateDefaultLocator, METH_VARARGS,
   "V.CreateDefaultLocator()\nC++: void CreateDefaultLocator()\n\nCreate default locator. Used to create one when none is\nspecified. The locator is used to merge coincident points.\n"},
  {"GetCellTypeDimensions", PyvtkCutter_GetCellTypeDimensions, METH_VARARGS,
   "V.GetCellTypeDimensions([int, ...])\nC++: static void GetCellTypeDimensions(\n    unsigned char *cellTypeDimensions)\n\nNormally I would put this in a different class, but since This is\na temporary fix until we convert this class and contour filter to\ngenerate unstructured grid output instead of poly data, I am\nleaving it here.\n"},
  {"SetOutputPointsPrecision", PyvtkCutter_SetOutputPointsPrecision, METH_VARARGS,
   "V.SetOutputPointsPrecision(int)\nC++: virtual void SetOutputPointsPrecision(int _arg)\n\nSet/get the desired precision for the output types. See the\ndocumentation for the vtkAlgorithm::DesiredOutputPrecision enum\nfor an explanation of the available precision settings.\n"},
  {"GetOutputPointsPrecisionMinValue", PyvtkCutter_GetOutputPointsPrecisionMinValue, METH_VARARGS,
   "V.GetOutputPointsPrecisionMinValue() -> int\nC++: virtual int GetOutputPointsPrecisionMinValue()\n\nSet/get the desired precision for the output types. See the\ndocumentation for the vtkAlgorithm::DesiredOutputPrecision enum\nfor an explanation of the available precision settings.\n"},
  {"GetOutputPointsPrecisionMaxValue", PyvtkCutter_GetOutputPointsPrecisionMaxValue, METH_VARARGS,
   "V.GetOutputPointsPrecisionMaxValue() -> int\nC++: virtual int GetOutputPointsPrecisionMaxValue()\n\nSet/get the desired precision for the output types. See the\ndocumentation for the vtkAlgorithm::DesiredOutputPrecision enum\nfor an explanation of the available precision settings.\n"},
  {"GetOutputPointsPrecision", PyvtkCutter_GetOutputPointsPrecision, METH_VARARGS,
   "V.GetOutputPointsPrecision() -> int\nC++: virtual int GetOutputPointsPrecision()\n\nSet/get the desired precision for the output types. See the\ndocumentation for the vtkAlgorithm::DesiredOutputPrecision enum\nfor an explanation of the available precision settings.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkCutter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersCorePython.vtkCutter", // tp_name
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
  PyvtkCutter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCutter_StaticNew()
{
  return vtkCutter::New();
}

PyObject *PyvtkCutter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkCutter_Type, PyvtkCutter_Methods,
    "vtkCutter",
 &PyvtkCutter_StaticNew);

  PyTypeObject *pytype = &PyvtkCutter_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPolyDataAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCutter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCutter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCutter", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 2; c++)
  {
    static const struct { const char *name; int value; }
      constants[2] = {
        { "VTK_SORT_BY_VALUE", 0 },
        { "VTK_SORT_BY_CELL", 1 },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

