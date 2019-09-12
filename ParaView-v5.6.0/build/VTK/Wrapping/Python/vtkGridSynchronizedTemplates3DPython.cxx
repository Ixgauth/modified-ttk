// python wrapper for vtkGridSynchronizedTemplates3D
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
#include "vtkInformationVector.h"
#include "vtkGridSynchronizedTemplates3D.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkGridSynchronizedTemplates3D(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkGridSynchronizedTemplates3D_ClassNew(); }

#ifndef DECLARED_PyvtkPolyDataAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPolyDataAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPolyDataAlgorithm_ClassNew
#endif

static const char *PyvtkGridSynchronizedTemplates3D_Doc =
  "vtkGridSynchronizedTemplates3D - generate isosurface from structured\ngrids\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkGridSynchronizedTemplates3D is a 3D implementation of the\n"
  "synchronized template algorithm.\n\n"
  "@warning\n"
  "This filter is specialized to 3D grids.\n\n"
  "@sa\n"
  "vtkContourFilter vtkSynchronizedTemplates3D\n\n";


static PyObject *
PyvtkGridSynchronizedTemplates3D_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkGridSynchronizedTemplates3D::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridSynchronizedTemplates3D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridSynchronizedTemplates3D *op = static_cast<vtkGridSynchronizedTemplates3D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGridSynchronizedTemplates3D::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridSynchronizedTemplates3D_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkGridSynchronizedTemplates3D *tempr = vtkGridSynchronizedTemplates3D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridSynchronizedTemplates3D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridSynchronizedTemplates3D *op = static_cast<vtkGridSynchronizedTemplates3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkGridSynchronizedTemplates3D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGridSynchronizedTemplates3D::NewInstance());

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
PyvtkGridSynchronizedTemplates3D_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridSynchronizedTemplates3D *op = static_cast<vtkGridSynchronizedTemplates3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkGridSynchronizedTemplates3D::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridSynchronizedTemplates3D_SetComputeNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridSynchronizedTemplates3D *op = static_cast<vtkGridSynchronizedTemplates3D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetComputeNormals(temp0);
    }
    else
    {
      op->vtkGridSynchronizedTemplates3D::SetComputeNormals(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridSynchronizedTemplates3D_GetComputeNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputeNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridSynchronizedTemplates3D *op = static_cast<vtkGridSynchronizedTemplates3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetComputeNormals() :
      op->vtkGridSynchronizedTemplates3D::GetComputeNormals());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridSynchronizedTemplates3D_ComputeNormalsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeNormalsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridSynchronizedTemplates3D *op = static_cast<vtkGridSynchronizedTemplates3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeNormalsOn();
    }
    else
    {
      op->vtkGridSynchronizedTemplates3D::ComputeNormalsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridSynchronizedTemplates3D_ComputeNormalsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeNormalsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridSynchronizedTemplates3D *op = static_cast<vtkGridSynchronizedTemplates3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeNormalsOff();
    }
    else
    {
      op->vtkGridSynchronizedTemplates3D::ComputeNormalsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridSynchronizedTemplates3D_SetComputeGradients(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeGradients");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridSynchronizedTemplates3D *op = static_cast<vtkGridSynchronizedTemplates3D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetComputeGradients(temp0);
    }
    else
    {
      op->vtkGridSynchronizedTemplates3D::SetComputeGradients(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridSynchronizedTemplates3D_GetComputeGradients(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputeGradients");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridSynchronizedTemplates3D *op = static_cast<vtkGridSynchronizedTemplates3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetComputeGradients() :
      op->vtkGridSynchronizedTemplates3D::GetComputeGradients());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridSynchronizedTemplates3D_ComputeGradientsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeGradientsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridSynchronizedTemplates3D *op = static_cast<vtkGridSynchronizedTemplates3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeGradientsOn();
    }
    else
    {
      op->vtkGridSynchronizedTemplates3D::ComputeGradientsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridSynchronizedTemplates3D_ComputeGradientsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeGradientsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridSynchronizedTemplates3D *op = static_cast<vtkGridSynchronizedTemplates3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeGradientsOff();
    }
    else
    {
      op->vtkGridSynchronizedTemplates3D::ComputeGradientsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridSynchronizedTemplates3D_SetComputeScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridSynchronizedTemplates3D *op = static_cast<vtkGridSynchronizedTemplates3D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetComputeScalars(temp0);
    }
    else
    {
      op->vtkGridSynchronizedTemplates3D::SetComputeScalars(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridSynchronizedTemplates3D_GetComputeScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputeScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridSynchronizedTemplates3D *op = static_cast<vtkGridSynchronizedTemplates3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetComputeScalars() :
      op->vtkGridSynchronizedTemplates3D::GetComputeScalars());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridSynchronizedTemplates3D_ComputeScalarsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeScalarsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridSynchronizedTemplates3D *op = static_cast<vtkGridSynchronizedTemplates3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeScalarsOn();
    }
    else
    {
      op->vtkGridSynchronizedTemplates3D::ComputeScalarsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridSynchronizedTemplates3D_ComputeScalarsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeScalarsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridSynchronizedTemplates3D *op = static_cast<vtkGridSynchronizedTemplates3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeScalarsOff();
    }
    else
    {
      op->vtkGridSynchronizedTemplates3D::ComputeScalarsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridSynchronizedTemplates3D_SetGenerateTriangles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateTriangles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridSynchronizedTemplates3D *op = static_cast<vtkGridSynchronizedTemplates3D *>(vp);

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
      op->vtkGridSynchronizedTemplates3D::SetGenerateTriangles(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridSynchronizedTemplates3D_GetGenerateTriangles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateTriangles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridSynchronizedTemplates3D *op = static_cast<vtkGridSynchronizedTemplates3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGenerateTriangles() :
      op->vtkGridSynchronizedTemplates3D::GetGenerateTriangles());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridSynchronizedTemplates3D_GenerateTrianglesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateTrianglesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridSynchronizedTemplates3D *op = static_cast<vtkGridSynchronizedTemplates3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateTrianglesOn();
    }
    else
    {
      op->vtkGridSynchronizedTemplates3D::GenerateTrianglesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridSynchronizedTemplates3D_GenerateTrianglesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateTrianglesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridSynchronizedTemplates3D *op = static_cast<vtkGridSynchronizedTemplates3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateTrianglesOff();
    }
    else
    {
      op->vtkGridSynchronizedTemplates3D::GenerateTrianglesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridSynchronizedTemplates3D_SetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridSynchronizedTemplates3D *op = static_cast<vtkGridSynchronizedTemplates3D *>(vp);

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
      op->vtkGridSynchronizedTemplates3D::SetValue(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridSynchronizedTemplates3D_GetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridSynchronizedTemplates3D *op = static_cast<vtkGridSynchronizedTemplates3D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double tempr = (ap.IsBound() ?
      op->GetValue(temp0) :
      op->vtkGridSynchronizedTemplates3D::GetValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridSynchronizedTemplates3D_GetValues_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridSynchronizedTemplates3D *op = static_cast<vtkGridSynchronizedTemplates3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetValues() :
      op->vtkGridSynchronizedTemplates3D::GetValues());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkGridSynchronizedTemplates3D_GetValues_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridSynchronizedTemplates3D *op = static_cast<vtkGridSynchronizedTemplates3D *>(vp);

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
      op->vtkGridSynchronizedTemplates3D::GetValues(temp0);
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
PyvtkGridSynchronizedTemplates3D_GetValues(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkGridSynchronizedTemplates3D_GetValues_s1(self, args);
    case 1:
      return PyvtkGridSynchronizedTemplates3D_GetValues_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetValues");
  return nullptr;
}



static PyObject *
PyvtkGridSynchronizedTemplates3D_SetNumberOfContours(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfContours");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridSynchronizedTemplates3D *op = static_cast<vtkGridSynchronizedTemplates3D *>(vp);

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
      op->vtkGridSynchronizedTemplates3D::SetNumberOfContours(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridSynchronizedTemplates3D_GetNumberOfContours(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfContours");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridSynchronizedTemplates3D *op = static_cast<vtkGridSynchronizedTemplates3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfContours() :
      op->vtkGridSynchronizedTemplates3D::GetNumberOfContours());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridSynchronizedTemplates3D_GenerateValues_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridSynchronizedTemplates3D *op = static_cast<vtkGridSynchronizedTemplates3D *>(vp);

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
      op->vtkGridSynchronizedTemplates3D::GenerateValues(temp0, temp1);
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
PyvtkGridSynchronizedTemplates3D_GenerateValues_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridSynchronizedTemplates3D *op = static_cast<vtkGridSynchronizedTemplates3D *>(vp);

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
      op->vtkGridSynchronizedTemplates3D::GenerateValues(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkGridSynchronizedTemplates3D_GenerateValues(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkGridSynchronizedTemplates3D_GenerateValues_s1(self, args);
    case 3:
      return PyvtkGridSynchronizedTemplates3D_GenerateValues_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GenerateValues");
  return nullptr;
}



static PyObject *
PyvtkGridSynchronizedTemplates3D_SetInputMemoryLimit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputMemoryLimit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridSynchronizedTemplates3D *op = static_cast<vtkGridSynchronizedTemplates3D *>(vp);

  long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInputMemoryLimit(temp0);
    }
    else
    {
      op->vtkGridSynchronizedTemplates3D::SetInputMemoryLimit(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridSynchronizedTemplates3D_SetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridSynchronizedTemplates3D *op = static_cast<vtkGridSynchronizedTemplates3D *>(vp);

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
      op->vtkGridSynchronizedTemplates3D::SetOutputPointsPrecision(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGridSynchronizedTemplates3D_GetOutputPointsPrecisionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecisionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridSynchronizedTemplates3D *op = static_cast<vtkGridSynchronizedTemplates3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecisionMinValue() :
      op->vtkGridSynchronizedTemplates3D::GetOutputPointsPrecisionMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridSynchronizedTemplates3D_GetOutputPointsPrecisionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecisionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridSynchronizedTemplates3D *op = static_cast<vtkGridSynchronizedTemplates3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecisionMaxValue() :
      op->vtkGridSynchronizedTemplates3D::GetOutputPointsPrecisionMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGridSynchronizedTemplates3D_GetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridSynchronizedTemplates3D *op = static_cast<vtkGridSynchronizedTemplates3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecision() :
      op->vtkGridSynchronizedTemplates3D::GetOutputPointsPrecision());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkGridSynchronizedTemplates3D_Methods[] = {
  {"IsTypeOf", PyvtkGridSynchronizedTemplates3D_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkGridSynchronizedTemplates3D_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkGridSynchronizedTemplates3D_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkGridSynchronizedTemplates3D\nC++: static vtkGridSynchronizedTemplates3D *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkGridSynchronizedTemplates3D_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkGridSynchronizedTemplates3D\nC++: vtkGridSynchronizedTemplates3D *NewInstance()\n\n"},
  {"GetMTime", PyvtkGridSynchronizedTemplates3D_GetMTime, METH_VARARGS,
   "V.GetMTime() -> int\nC++: vtkMTimeType GetMTime() override;\n\nBecause we delegate to vtkContourValues\n"},
  {"SetComputeNormals", PyvtkGridSynchronizedTemplates3D_SetComputeNormals, METH_VARARGS,
   "V.SetComputeNormals(int)\nC++: virtual void SetComputeNormals(vtkTypeBool _arg)\n\nSet/Get the computation of normals. Normal computation is fairly\nexpensive in both time and storage. If the output data will be\nprocessed by filters that modify topology or geometry, it may be\nwise to turn Normals and Gradients off.\n"},
  {"GetComputeNormals", PyvtkGridSynchronizedTemplates3D_GetComputeNormals, METH_VARARGS,
   "V.GetComputeNormals() -> int\nC++: virtual vtkTypeBool GetComputeNormals()\n\nSet/Get the computation of normals. Normal computation is fairly\nexpensive in both time and storage. If the output data will be\nprocessed by filters that modify topology or geometry, it may be\nwise to turn Normals and Gradients off.\n"},
  {"ComputeNormalsOn", PyvtkGridSynchronizedTemplates3D_ComputeNormalsOn, METH_VARARGS,
   "V.ComputeNormalsOn()\nC++: virtual void ComputeNormalsOn()\n\nSet/Get the computation of normals. Normal computation is fairly\nexpensive in both time and storage. If the output data will be\nprocessed by filters that modify topology or geometry, it may be\nwise to turn Normals and Gradients off.\n"},
  {"ComputeNormalsOff", PyvtkGridSynchronizedTemplates3D_ComputeNormalsOff, METH_VARARGS,
   "V.ComputeNormalsOff()\nC++: virtual void ComputeNormalsOff()\n\nSet/Get the computation of normals. Normal computation is fairly\nexpensive in both time and storage. If the output data will be\nprocessed by filters that modify topology or geometry, it may be\nwise to turn Normals and Gradients off.\n"},
  {"SetComputeGradients", PyvtkGridSynchronizedTemplates3D_SetComputeGradients, METH_VARARGS,
   "V.SetComputeGradients(int)\nC++: virtual void SetComputeGradients(vtkTypeBool _arg)\n\nSet/Get the computation of gradients. Gradient computation is\nfairly expensive in both time and storage. Note that if\nComputeNormals is on, gradients will have to be calculated, but\nwill not be stored in the output dataset.  If the output data\nwill be processed by filters that modify topology or geometry, it\nmay be wise to turn Normals and Gradients off.\n"},
  {"GetComputeGradients", PyvtkGridSynchronizedTemplates3D_GetComputeGradients, METH_VARARGS,
   "V.GetComputeGradients() -> int\nC++: virtual vtkTypeBool GetComputeGradients()\n\nSet/Get the computation of gradients. Gradient computation is\nfairly expensive in both time and storage. Note that if\nComputeNormals is on, gradients will have to be calculated, but\nwill not be stored in the output dataset.  If the output data\nwill be processed by filters that modify topology or geometry, it\nmay be wise to turn Normals and Gradients off.\n"},
  {"ComputeGradientsOn", PyvtkGridSynchronizedTemplates3D_ComputeGradientsOn, METH_VARARGS,
   "V.ComputeGradientsOn()\nC++: virtual void ComputeGradientsOn()\n\nSet/Get the computation of gradients. Gradient computation is\nfairly expensive in both time and storage. Note that if\nComputeNormals is on, gradients will have to be calculated, but\nwill not be stored in the output dataset.  If the output data\nwill be processed by filters that modify topology or geometry, it\nmay be wise to turn Normals and Gradients off.\n"},
  {"ComputeGradientsOff", PyvtkGridSynchronizedTemplates3D_ComputeGradientsOff, METH_VARARGS,
   "V.ComputeGradientsOff()\nC++: virtual void ComputeGradientsOff()\n\nSet/Get the computation of gradients. Gradient computation is\nfairly expensive in both time and storage. Note that if\nComputeNormals is on, gradients will have to be calculated, but\nwill not be stored in the output dataset.  If the output data\nwill be processed by filters that modify topology or geometry, it\nmay be wise to turn Normals and Gradients off.\n"},
  {"SetComputeScalars", PyvtkGridSynchronizedTemplates3D_SetComputeScalars, METH_VARARGS,
   "V.SetComputeScalars(int)\nC++: virtual void SetComputeScalars(vtkTypeBool _arg)\n\nSet/Get the computation of scalars.\n"},
  {"GetComputeScalars", PyvtkGridSynchronizedTemplates3D_GetComputeScalars, METH_VARARGS,
   "V.GetComputeScalars() -> int\nC++: virtual vtkTypeBool GetComputeScalars()\n\nSet/Get the computation of scalars.\n"},
  {"ComputeScalarsOn", PyvtkGridSynchronizedTemplates3D_ComputeScalarsOn, METH_VARARGS,
   "V.ComputeScalarsOn()\nC++: virtual void ComputeScalarsOn()\n\nSet/Get the computation of scalars.\n"},
  {"ComputeScalarsOff", PyvtkGridSynchronizedTemplates3D_ComputeScalarsOff, METH_VARARGS,
   "V.ComputeScalarsOff()\nC++: virtual void ComputeScalarsOff()\n\nSet/Get the computation of scalars.\n"},
  {"SetGenerateTriangles", PyvtkGridSynchronizedTemplates3D_SetGenerateTriangles, METH_VARARGS,
   "V.SetGenerateTriangles(int)\nC++: virtual void SetGenerateTriangles(vtkTypeBool _arg)\n\nIf this is enabled (by default), the output will be triangles\notherwise, the output will be the intersection polygons\n"},
  {"GetGenerateTriangles", PyvtkGridSynchronizedTemplates3D_GetGenerateTriangles, METH_VARARGS,
   "V.GetGenerateTriangles() -> int\nC++: virtual vtkTypeBool GetGenerateTriangles()\n\nIf this is enabled (by default), the output will be triangles\notherwise, the output will be the intersection polygons\n"},
  {"GenerateTrianglesOn", PyvtkGridSynchronizedTemplates3D_GenerateTrianglesOn, METH_VARARGS,
   "V.GenerateTrianglesOn()\nC++: virtual void GenerateTrianglesOn()\n\nIf this is enabled (by default), the output will be triangles\notherwise, the output will be the intersection polygons\n"},
  {"GenerateTrianglesOff", PyvtkGridSynchronizedTemplates3D_GenerateTrianglesOff, METH_VARARGS,
   "V.GenerateTrianglesOff()\nC++: virtual void GenerateTrianglesOff()\n\nIf this is enabled (by default), the output will be triangles\notherwise, the output will be the intersection polygons\n"},
  {"SetValue", PyvtkGridSynchronizedTemplates3D_SetValue, METH_VARARGS,
   "V.SetValue(int, float)\nC++: void SetValue(int i, double value)\n\nSet a particular contour value at contour number i. The index i\nranges between 0<=i<NumberOfContours.\n"},
  {"GetValue", PyvtkGridSynchronizedTemplates3D_GetValue, METH_VARARGS,
   "V.GetValue(int) -> float\nC++: double GetValue(int i)\n\nGet the ith contour value.\n"},
  {"GetValues", PyvtkGridSynchronizedTemplates3D_GetValues, METH_VARARGS,
   "V.GetValues() -> (float, ...)\nC++: double *GetValues()\nV.GetValues([float, ...])\nC++: void GetValues(double *contourValues)\n\nGet a pointer to an array of contour values. There will be\nGetNumberOfContours() values in the list.\n"},
  {"SetNumberOfContours", PyvtkGridSynchronizedTemplates3D_SetNumberOfContours, METH_VARARGS,
   "V.SetNumberOfContours(int)\nC++: void SetNumberOfContours(int number)\n\nSet the number of contours to place into the list. You only\nreally need to use this method to reduce list size. The method\nSetValue() will automatically increase list size as needed.\n"},
  {"GetNumberOfContours", PyvtkGridSynchronizedTemplates3D_GetNumberOfContours, METH_VARARGS,
   "V.GetNumberOfContours() -> int\nC++: int GetNumberOfContours()\n\nGet the number of contours in the list of contour values.\n"},
  {"GenerateValues", PyvtkGridSynchronizedTemplates3D_GenerateValues, METH_VARARGS,
   "V.GenerateValues(int, [float, float])\nC++: void GenerateValues(int numContours, double range[2])\nV.GenerateValues(int, float, float)\nC++: void GenerateValues(int numContours, double rangeStart,\n    double rangeEnd)\n\nGenerate numContours equally spaced contour values between\nspecified range. Contour values will include min/max range\nvalues.\n"},
  {"SetInputMemoryLimit", PyvtkGridSynchronizedTemplates3D_SetInputMemoryLimit, METH_VARARGS,
   "V.SetInputMemoryLimit(int)\nC++: void SetInputMemoryLimit(long limit)\n\nThis filter will initiate streaming so that no piece requested\nfrom the input will be larger than this value (KiloBytes).\n"},
  {"SetOutputPointsPrecision", PyvtkGridSynchronizedTemplates3D_SetOutputPointsPrecision, METH_VARARGS,
   "V.SetOutputPointsPrecision(int)\nC++: virtual void SetOutputPointsPrecision(int _arg)\n\nSet/get the desired precision for the output types. See the\ndocumentation for the vtkAlgorithm::DesiredOutputPrecision enum\nfor an explanation of the available precision settings.\n"},
  {"GetOutputPointsPrecisionMinValue", PyvtkGridSynchronizedTemplates3D_GetOutputPointsPrecisionMinValue, METH_VARARGS,
   "V.GetOutputPointsPrecisionMinValue() -> int\nC++: virtual int GetOutputPointsPrecisionMinValue()\n\nSet/get the desired precision for the output types. See the\ndocumentation for the vtkAlgorithm::DesiredOutputPrecision enum\nfor an explanation of the available precision settings.\n"},
  {"GetOutputPointsPrecisionMaxValue", PyvtkGridSynchronizedTemplates3D_GetOutputPointsPrecisionMaxValue, METH_VARARGS,
   "V.GetOutputPointsPrecisionMaxValue() -> int\nC++: virtual int GetOutputPointsPrecisionMaxValue()\n\nSet/get the desired precision for the output types. See the\ndocumentation for the vtkAlgorithm::DesiredOutputPrecision enum\nfor an explanation of the available precision settings.\n"},
  {"GetOutputPointsPrecision", PyvtkGridSynchronizedTemplates3D_GetOutputPointsPrecision, METH_VARARGS,
   "V.GetOutputPointsPrecision() -> int\nC++: virtual int GetOutputPointsPrecision()\n\nSet/get the desired precision for the output types. See the\ndocumentation for the vtkAlgorithm::DesiredOutputPrecision enum\nfor an explanation of the available precision settings.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkGridSynchronizedTemplates3D_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersCorePython.vtkGridSynchronizedTemplates3D", // tp_name
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
  PyvtkGridSynchronizedTemplates3D_Doc, // tp_doc
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

static vtkObjectBase *PyvtkGridSynchronizedTemplates3D_StaticNew()
{
  return vtkGridSynchronizedTemplates3D::New();
}

PyObject *PyvtkGridSynchronizedTemplates3D_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkGridSynchronizedTemplates3D_Type, PyvtkGridSynchronizedTemplates3D_Methods,
    "vtkGridSynchronizedTemplates3D",
 &PyvtkGridSynchronizedTemplates3D_StaticNew);

  PyTypeObject *pytype = &PyvtkGridSynchronizedTemplates3D_Type;

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

void PyVTKAddFile_vtkGridSynchronizedTemplates3D(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkGridSynchronizedTemplates3D_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkGridSynchronizedTemplates3D", o) != 0)
  {
    Py_DECREF(o);
  }

}

