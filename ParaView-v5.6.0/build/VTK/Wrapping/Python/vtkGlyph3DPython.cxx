// python wrapper for vtkGlyph3D
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
#include "vtkGlyph3D.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkGlyph3D(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkGlyph3D_ClassNew(); }

#ifndef DECLARED_PyvtkPolyDataAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPolyDataAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPolyDataAlgorithm_ClassNew
#endif

static const char *PyvtkGlyph3D_Doc =
  "vtkGlyph3D - copy oriented and scaled glyph geometry to every input\npoint\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkGlyph3D is a filter that copies a geometric representation (called\n"
  "a glyph) to every point in the input dataset. The glyph is defined\n"
  "with polygonal data from a source filter input. The glyph may be\n"
  "oriented along the input vectors or normals, and it may be scaled\n"
  "according to scalar data or vector magnitude. More than one glyph may\n"
  "be used by creating a table of source objects, each defining a\n"
  "different glyph. If a table of glyphs is defined, then the table can\n"
  "be indexed into by using either scalar value or vector magnitude.\n\n"
  "To use this object you'll have to provide an input dataset and a\n"
  "source to define the glyph. Then decide whether you want to scale the\n"
  "glyph and how to scale the glyph (using scalar value or vector\n"
  "magnitude). Next decide whether you want to orient the glyph, and\n"
  "whether to use the vector data or normal data to orient it. Finally,\n"
  "decide whether to use a table of glyphs, or just a single glyph. If\n"
  "you use a table of glyphs, you'll have to decide whether to index\n"
  "into it with scalar value or with vector magnitude.\n\n"
  "@warning\n"
  "The scaling of the glyphs is controlled by the ScaleFactor ivar\n"
  "multiplied by the scalar value at each point (if VTK_SCALE_BY_SCALAR\n"
  "is set), or multiplied by the vector magnitude (if\n"
  "VTK_SCALE_BY_VECTOR is set), Alternatively (if\n"
  "VTK_SCALE_BY_VECTORCOMPONENTS is set), the scaling may be specified\n"
  "for x,y,z using the vector components. The scale factor can be\n"
  "further controlled by enabling clamping using the Clamping ivar. If\n"
  "clamping is enabled, the scale is normalized by the Range ivar, and\n"
  "then multiplied by the scale factor. The normalization process\n"
  "includes clamping the scale value between (0,1).\n\n"
  "@warning\n"
  "Typically this object operates on input data with scalar and/or\n"
  "vector data. However, scalar and/or vector aren't necessary, and it\n"
  "can be used to copy data from a single source to each point. In this\n"
  "case the scale factor can be used to uniformly scale the glyphs.\n\n"
  "@warning\n"
  "The object uses \"vector\" data to scale glyphs, orient glyphs, and/or\n"
  "index into a table of glyphs. You can choose to use either the vector\n"
  "or normal data at each input point. Use the method\n"
  "SetVectorModeToUseVector() to use the vector input data, and\n"
  "SetVectorModeToUseNormal() to use the normal input data.\n\n"
  "@warning\n"
  "If you do use a table of glyphs, make sure to set the Range ivar to\n"
  "make sure the index into the glyph table is computed correctly.\n\n"
  "@warning\n"
  "You can turn off scaling of the glyphs completely by using the\n"
  "Scaling ivar. You can also turn off scaling due to data (either\n"
  "vector or scalar) by using the SetScaleModeToDataScalingOff() method.\n\n"
  "@warning\n"
  "You can set what arrays to use for the scalars, vectors, normals, and\n"
  "color scalars by using the SetInputArrayToProcess methods in\n"
  "vtkAlgorithm. The first array is scalars, the next vectors, the next\n"
  "normals and finally color scalars.\n\n"
  "@sa\n"
  "vtkTensorGlyph\n\n";


static PyObject *
PyvtkGlyph3D_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkGlyph3D::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGlyph3D::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3D_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkGlyph3D *tempr = vtkGlyph3D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkGlyph3D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGlyph3D::NewInstance());

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
PyvtkGlyph3D_SetSourceData_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSourceData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  vtkPolyData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPolyData"))
  {
    if (ap.IsBound())
    {
      op->SetSourceData(temp0);
    }
    else
    {
      op->vtkGlyph3D::SetSourceData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkGlyph3D_SetSourceData_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSourceData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  int temp0;
  vtkPolyData *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkPolyData"))
  {
    if (ap.IsBound())
    {
      op->SetSourceData(temp0, temp1);
    }
    else
    {
      op->vtkGlyph3D::SetSourceData(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkGlyph3D_SetSourceData(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkGlyph3D_SetSourceData_s1(self, args);
    case 2:
      return PyvtkGlyph3D_SetSourceData_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetSourceData");
  return nullptr;
}



static PyObject *
PyvtkGlyph3D_SetSourceConnection_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSourceConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  int temp0;
  vtkAlgorithmOutput *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkAlgorithmOutput"))
  {
    if (ap.IsBound())
    {
      op->SetSourceConnection(temp0, temp1);
    }
    else
    {
      op->vtkGlyph3D::SetSourceConnection(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkGlyph3D_SetSourceConnection_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSourceConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

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
      op->vtkGlyph3D::SetSourceConnection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkGlyph3D_SetSourceConnection(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkGlyph3D_SetSourceConnection_s1(self, args);
    case 1:
      return PyvtkGlyph3D_SetSourceConnection_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetSourceConnection");
  return nullptr;
}



static PyObject *
PyvtkGlyph3D_GetSource(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSource");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  int temp0 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetSource(temp0) :
      op->vtkGlyph3D::GetSource(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3D_SetScaling(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaling");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScaling(temp0);
    }
    else
    {
      op->vtkGlyph3D::SetScaling(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3D_ScalingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScalingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ScalingOn();
    }
    else
    {
      op->vtkGlyph3D::ScalingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3D_ScalingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScalingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ScalingOff();
    }
    else
    {
      op->vtkGlyph3D::ScalingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3D_GetScaling(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaling");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetScaling() :
      op->vtkGlyph3D::GetScaling());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3D_SetScaleMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScaleMode(temp0);
    }
    else
    {
      op->vtkGlyph3D::SetScaleMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3D_GetScaleMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaleMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetScaleMode() :
      op->vtkGlyph3D::GetScaleMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3D_SetScaleModeToScaleByScalar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleModeToScaleByScalar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScaleModeToScaleByScalar();
    }
    else
    {
      op->vtkGlyph3D::SetScaleModeToScaleByScalar();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3D_SetScaleModeToScaleByVector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleModeToScaleByVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScaleModeToScaleByVector();
    }
    else
    {
      op->vtkGlyph3D::SetScaleModeToScaleByVector();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3D_SetScaleModeToScaleByVectorComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleModeToScaleByVectorComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScaleModeToScaleByVectorComponents();
    }
    else
    {
      op->vtkGlyph3D::SetScaleModeToScaleByVectorComponents();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3D_SetScaleModeToDataScalingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleModeToDataScalingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScaleModeToDataScalingOff();
    }
    else
    {
      op->vtkGlyph3D::SetScaleModeToDataScalingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3D_GetScaleModeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaleModeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetScaleModeAsString() :
      op->vtkGlyph3D::GetScaleModeAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3D_SetColorMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetColorMode(temp0);
    }
    else
    {
      op->vtkGlyph3D::SetColorMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3D_GetColorMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetColorMode() :
      op->vtkGlyph3D::GetColorMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3D_SetColorModeToColorByScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorModeToColorByScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetColorModeToColorByScale();
    }
    else
    {
      op->vtkGlyph3D::SetColorModeToColorByScale();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3D_SetColorModeToColorByScalar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorModeToColorByScalar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetColorModeToColorByScalar();
    }
    else
    {
      op->vtkGlyph3D::SetColorModeToColorByScalar();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3D_SetColorModeToColorByVector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorModeToColorByVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetColorModeToColorByVector();
    }
    else
    {
      op->vtkGlyph3D::SetColorModeToColorByVector();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3D_GetColorModeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorModeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetColorModeAsString() :
      op->vtkGlyph3D::GetColorModeAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3D_SetScaleFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScaleFactor(temp0);
    }
    else
    {
      op->vtkGlyph3D::SetScaleFactor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3D_GetScaleFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaleFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetScaleFactor() :
      op->vtkGlyph3D::GetScaleFactor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3D_SetRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetRange(temp0, temp1);
    }
    else
    {
      op->vtkGlyph3D::SetRange(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkGlyph3D_SetRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetRange(temp0);
    }
    else
    {
      op->vtkGlyph3D::SetRange(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkGlyph3D_SetRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkGlyph3D_SetRange_s1(self, args);
    case 1:
      return PyvtkGlyph3D_SetRange_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetRange");
  return nullptr;
}



static PyObject *
PyvtkGlyph3D_GetRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetRange() :
      op->vtkGlyph3D::GetRange());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3D_SetOrient(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOrient(temp0);
    }
    else
    {
      op->vtkGlyph3D::SetOrient(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3D_OrientOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OrientOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OrientOn();
    }
    else
    {
      op->vtkGlyph3D::OrientOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3D_OrientOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OrientOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OrientOff();
    }
    else
    {
      op->vtkGlyph3D::OrientOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3D_GetOrient(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOrient() :
      op->vtkGlyph3D::GetOrient());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3D_SetClamping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClamping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetClamping(temp0);
    }
    else
    {
      op->vtkGlyph3D::SetClamping(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3D_ClampingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClampingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClampingOn();
    }
    else
    {
      op->vtkGlyph3D::ClampingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3D_ClampingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClampingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClampingOff();
    }
    else
    {
      op->vtkGlyph3D::ClampingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3D_GetClamping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClamping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetClamping() :
      op->vtkGlyph3D::GetClamping());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3D_SetVectorMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVectorMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVectorMode(temp0);
    }
    else
    {
      op->vtkGlyph3D::SetVectorMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3D_GetVectorMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetVectorMode() :
      op->vtkGlyph3D::GetVectorMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3D_SetVectorModeToUseVector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVectorModeToUseVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetVectorModeToUseVector();
    }
    else
    {
      op->vtkGlyph3D::SetVectorModeToUseVector();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3D_SetVectorModeToUseNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVectorModeToUseNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetVectorModeToUseNormal();
    }
    else
    {
      op->vtkGlyph3D::SetVectorModeToUseNormal();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3D_SetVectorModeToVectorRotationOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVectorModeToVectorRotationOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetVectorModeToVectorRotationOff();
    }
    else
    {
      op->vtkGlyph3D::SetVectorModeToVectorRotationOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3D_GetVectorModeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorModeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetVectorModeAsString() :
      op->vtkGlyph3D::GetVectorModeAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3D_SetIndexMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIndexMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetIndexMode(temp0);
    }
    else
    {
      op->vtkGlyph3D::SetIndexMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3D_GetIndexMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIndexMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetIndexMode() :
      op->vtkGlyph3D::GetIndexMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3D_SetIndexModeToScalar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIndexModeToScalar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetIndexModeToScalar();
    }
    else
    {
      op->vtkGlyph3D::SetIndexModeToScalar();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3D_SetIndexModeToVector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIndexModeToVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetIndexModeToVector();
    }
    else
    {
      op->vtkGlyph3D::SetIndexModeToVector();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3D_SetIndexModeToOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIndexModeToOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetIndexModeToOff();
    }
    else
    {
      op->vtkGlyph3D::SetIndexModeToOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3D_GetIndexModeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIndexModeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetIndexModeAsString() :
      op->vtkGlyph3D::GetIndexModeAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3D_SetGeneratePointIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGeneratePointIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGeneratePointIds(temp0);
    }
    else
    {
      op->vtkGlyph3D::SetGeneratePointIds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3D_GetGeneratePointIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGeneratePointIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGeneratePointIds() :
      op->vtkGlyph3D::GetGeneratePointIds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3D_GeneratePointIdsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GeneratePointIdsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GeneratePointIdsOn();
    }
    else
    {
      op->vtkGlyph3D::GeneratePointIdsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3D_GeneratePointIdsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GeneratePointIdsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GeneratePointIdsOff();
    }
    else
    {
      op->vtkGlyph3D::GeneratePointIdsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3D_SetPointIdsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointIdsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPointIdsName(temp0);
    }
    else
    {
      op->vtkGlyph3D::SetPointIdsName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3D_GetPointIdsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointIdsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetPointIdsName() :
      op->vtkGlyph3D::GetPointIdsName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3D_SetFillCellData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFillCellData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFillCellData(temp0);
    }
    else
    {
      op->vtkGlyph3D::SetFillCellData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3D_GetFillCellData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFillCellData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFillCellData() :
      op->vtkGlyph3D::GetFillCellData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3D_FillCellDataOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FillCellDataOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FillCellDataOn();
    }
    else
    {
      op->vtkGlyph3D::FillCellDataOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3D_FillCellDataOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FillCellDataOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FillCellDataOff();
    }
    else
    {
      op->vtkGlyph3D::FillCellDataOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3D_IsPointVisible(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsPointVisible");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  vtkDataSet *temp0 = nullptr;
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataSet") &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->IsPointVisible(temp0, temp1) :
      op->vtkGlyph3D::IsPointVisible(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3D_SetSourceTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSourceTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  vtkTransform *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTransform"))
  {
    if (ap.IsBound())
    {
      op->SetSourceTransform(temp0);
    }
    else
    {
      op->vtkGlyph3D::SetSourceTransform(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3D_GetSourceTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSourceTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTransform *tempr = (ap.IsBound() ?
      op->GetSourceTransform() :
      op->vtkGlyph3D::GetSourceTransform());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3D_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkGlyph3D::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3D_SetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

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
      op->vtkGlyph3D::SetOutputPointsPrecision(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph3D_GetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3D *op = static_cast<vtkGlyph3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecision() :
      op->vtkGlyph3D::GetOutputPointsPrecision());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkGlyph3D_Methods[] = {
  {"IsTypeOf", PyvtkGlyph3D_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkGlyph3D_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkGlyph3D_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkGlyph3D\nC++: static vtkGlyph3D *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkGlyph3D_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkGlyph3D\nC++: vtkGlyph3D *NewInstance()\n\n"},
  {"SetSourceData", PyvtkGlyph3D_SetSourceData, METH_VARARGS,
   "V.SetSourceData(vtkPolyData)\nC++: void SetSourceData(vtkPolyData *pd)\nV.SetSourceData(int, vtkPolyData)\nC++: void SetSourceData(int id, vtkPolyData *pd)\n\nSet the source to use for the glyph. Note that this method does\nnot connect the pipeline. The algorithm will work on the input\ndata as it is without updating the producer of the data. See\nSetSourceConnection for connecting the pipeline.\n"},
  {"SetSourceConnection", PyvtkGlyph3D_SetSourceConnection, METH_VARARGS,
   "V.SetSourceConnection(int, vtkAlgorithmOutput)\nC++: void SetSourceConnection(int id,\n    vtkAlgorithmOutput *algOutput)\nV.SetSourceConnection(vtkAlgorithmOutput)\nC++: void SetSourceConnection(vtkAlgorithmOutput *algOutput)\n\nSpecify a source object at a specified table location. New style.\nSource connection is stored in port 1. This method is equivalent\nto SetInputConnection(1, id, outputPort).\n"},
  {"GetSource", PyvtkGlyph3D_GetSource, METH_VARARGS,
   "V.GetSource(int) -> vtkPolyData\nC++: vtkPolyData *GetSource(int id=0)\n\nGet a pointer to a source object at a specified table location.\n"},
  {"SetScaling", PyvtkGlyph3D_SetScaling, METH_VARARGS,
   "V.SetScaling(int)\nC++: virtual void SetScaling(vtkTypeBool _arg)\n\nTurn on/off scaling of source geometry.\n"},
  {"ScalingOn", PyvtkGlyph3D_ScalingOn, METH_VARARGS,
   "V.ScalingOn()\nC++: virtual void ScalingOn()\n\nTurn on/off scaling of source geometry.\n"},
  {"ScalingOff", PyvtkGlyph3D_ScalingOff, METH_VARARGS,
   "V.ScalingOff()\nC++: virtual void ScalingOff()\n\nTurn on/off scaling of source geometry.\n"},
  {"GetScaling", PyvtkGlyph3D_GetScaling, METH_VARARGS,
   "V.GetScaling() -> int\nC++: virtual vtkTypeBool GetScaling()\n\nTurn on/off scaling of source geometry.\n"},
  {"SetScaleMode", PyvtkGlyph3D_SetScaleMode, METH_VARARGS,
   "V.SetScaleMode(int)\nC++: virtual void SetScaleMode(int _arg)\n\nEither scale by scalar or by vector/normal magnitude.\n"},
  {"GetScaleMode", PyvtkGlyph3D_GetScaleMode, METH_VARARGS,
   "V.GetScaleMode() -> int\nC++: virtual int GetScaleMode()\n\nEither scale by scalar or by vector/normal magnitude.\n"},
  {"SetScaleModeToScaleByScalar", PyvtkGlyph3D_SetScaleModeToScaleByScalar, METH_VARARGS,
   "V.SetScaleModeToScaleByScalar()\nC++: void SetScaleModeToScaleByScalar()\n\nEither scale by scalar or by vector/normal magnitude.\n"},
  {"SetScaleModeToScaleByVector", PyvtkGlyph3D_SetScaleModeToScaleByVector, METH_VARARGS,
   "V.SetScaleModeToScaleByVector()\nC++: void SetScaleModeToScaleByVector()\n\nEither scale by scalar or by vector/normal magnitude.\n"},
  {"SetScaleModeToScaleByVectorComponents", PyvtkGlyph3D_SetScaleModeToScaleByVectorComponents, METH_VARARGS,
   "V.SetScaleModeToScaleByVectorComponents()\nC++: void SetScaleModeToScaleByVectorComponents()\n\nEither scale by scalar or by vector/normal magnitude.\n"},
  {"SetScaleModeToDataScalingOff", PyvtkGlyph3D_SetScaleModeToDataScalingOff, METH_VARARGS,
   "V.SetScaleModeToDataScalingOff()\nC++: void SetScaleModeToDataScalingOff()\n\nEither scale by scalar or by vector/normal magnitude.\n"},
  {"GetScaleModeAsString", PyvtkGlyph3D_GetScaleModeAsString, METH_VARARGS,
   "V.GetScaleModeAsString() -> string\nC++: const char *GetScaleModeAsString()\n\nEither scale by scalar or by vector/normal magnitude.\n"},
  {"SetColorMode", PyvtkGlyph3D_SetColorMode, METH_VARARGS,
   "V.SetColorMode(int)\nC++: virtual void SetColorMode(int _arg)\n\nEither color by scale, scalar or by vector/normal magnitude.\n"},
  {"GetColorMode", PyvtkGlyph3D_GetColorMode, METH_VARARGS,
   "V.GetColorMode() -> int\nC++: virtual int GetColorMode()\n\nEither color by scale, scalar or by vector/normal magnitude.\n"},
  {"SetColorModeToColorByScale", PyvtkGlyph3D_SetColorModeToColorByScale, METH_VARARGS,
   "V.SetColorModeToColorByScale()\nC++: void SetColorModeToColorByScale()\n\nEither color by scale, scalar or by vector/normal magnitude.\n"},
  {"SetColorModeToColorByScalar", PyvtkGlyph3D_SetColorModeToColorByScalar, METH_VARARGS,
   "V.SetColorModeToColorByScalar()\nC++: void SetColorModeToColorByScalar()\n\nEither color by scale, scalar or by vector/normal magnitude.\n"},
  {"SetColorModeToColorByVector", PyvtkGlyph3D_SetColorModeToColorByVector, METH_VARARGS,
   "V.SetColorModeToColorByVector()\nC++: void SetColorModeToColorByVector()\n\nEither color by scale, scalar or by vector/normal magnitude.\n"},
  {"GetColorModeAsString", PyvtkGlyph3D_GetColorModeAsString, METH_VARARGS,
   "V.GetColorModeAsString() -> string\nC++: const char *GetColorModeAsString()\n\nEither color by scale, scalar or by vector/normal magnitude.\n"},
  {"SetScaleFactor", PyvtkGlyph3D_SetScaleFactor, METH_VARARGS,
   "V.SetScaleFactor(float)\nC++: virtual void SetScaleFactor(double _arg)\n\nSpecify scale factor to scale object by.\n"},
  {"GetScaleFactor", PyvtkGlyph3D_GetScaleFactor, METH_VARARGS,
   "V.GetScaleFactor() -> float\nC++: virtual double GetScaleFactor()\n\nSpecify scale factor to scale object by.\n"},
  {"SetRange", PyvtkGlyph3D_SetRange, METH_VARARGS,
   "V.SetRange(float, float)\nC++: void SetRange(double, double)\nV.SetRange((float, float))\nC++: void SetRange(double a[2])\n\n"},
  {"GetRange", PyvtkGlyph3D_GetRange, METH_VARARGS,
   "V.GetRange() -> (float, float)\nC++: double *GetRange()\n\nSpecify range to map scalar values into.\n"},
  {"SetOrient", PyvtkGlyph3D_SetOrient, METH_VARARGS,
   "V.SetOrient(int)\nC++: virtual void SetOrient(vtkTypeBool _arg)\n\nTurn on/off orienting of input geometry along vector/normal.\n"},
  {"OrientOn", PyvtkGlyph3D_OrientOn, METH_VARARGS,
   "V.OrientOn()\nC++: virtual void OrientOn()\n\nTurn on/off orienting of input geometry along vector/normal.\n"},
  {"OrientOff", PyvtkGlyph3D_OrientOff, METH_VARARGS,
   "V.OrientOff()\nC++: virtual void OrientOff()\n\nTurn on/off orienting of input geometry along vector/normal.\n"},
  {"GetOrient", PyvtkGlyph3D_GetOrient, METH_VARARGS,
   "V.GetOrient() -> int\nC++: virtual vtkTypeBool GetOrient()\n\nTurn on/off orienting of input geometry along vector/normal.\n"},
  {"SetClamping", PyvtkGlyph3D_SetClamping, METH_VARARGS,
   "V.SetClamping(int)\nC++: virtual void SetClamping(vtkTypeBool _arg)\n\nTurn on/off clamping of \"scalar\" values to range. (Scalar value\nmay be vector magnitude if ScaleByVector() is enabled.)\n"},
  {"ClampingOn", PyvtkGlyph3D_ClampingOn, METH_VARARGS,
   "V.ClampingOn()\nC++: virtual void ClampingOn()\n\nTurn on/off clamping of \"scalar\" values to range. (Scalar value\nmay be vector magnitude if ScaleByVector() is enabled.)\n"},
  {"ClampingOff", PyvtkGlyph3D_ClampingOff, METH_VARARGS,
   "V.ClampingOff()\nC++: virtual void ClampingOff()\n\nTurn on/off clamping of \"scalar\" values to range. (Scalar value\nmay be vector magnitude if ScaleByVector() is enabled.)\n"},
  {"GetClamping", PyvtkGlyph3D_GetClamping, METH_VARARGS,
   "V.GetClamping() -> int\nC++: virtual vtkTypeBool GetClamping()\n\nTurn on/off clamping of \"scalar\" values to range. (Scalar value\nmay be vector magnitude if ScaleByVector() is enabled.)\n"},
  {"SetVectorMode", PyvtkGlyph3D_SetVectorMode, METH_VARARGS,
   "V.SetVectorMode(int)\nC++: virtual void SetVectorMode(int _arg)\n\nSpecify whether to use vector or normal to perform vector\noperations.\n"},
  {"GetVectorMode", PyvtkGlyph3D_GetVectorMode, METH_VARARGS,
   "V.GetVectorMode() -> int\nC++: virtual int GetVectorMode()\n\nSpecify whether to use vector or normal to perform vector\noperations.\n"},
  {"SetVectorModeToUseVector", PyvtkGlyph3D_SetVectorModeToUseVector, METH_VARARGS,
   "V.SetVectorModeToUseVector()\nC++: void SetVectorModeToUseVector()\n\nSpecify whether to use vector or normal to perform vector\noperations.\n"},
  {"SetVectorModeToUseNormal", PyvtkGlyph3D_SetVectorModeToUseNormal, METH_VARARGS,
   "V.SetVectorModeToUseNormal()\nC++: void SetVectorModeToUseNormal()\n\nSpecify whether to use vector or normal to perform vector\noperations.\n"},
  {"SetVectorModeToVectorRotationOff", PyvtkGlyph3D_SetVectorModeToVectorRotationOff, METH_VARARGS,
   "V.SetVectorModeToVectorRotationOff()\nC++: void SetVectorModeToVectorRotationOff()\n\nSpecify whether to use vector or normal to perform vector\noperations.\n"},
  {"GetVectorModeAsString", PyvtkGlyph3D_GetVectorModeAsString, METH_VARARGS,
   "V.GetVectorModeAsString() -> string\nC++: const char *GetVectorModeAsString()\n\nSpecify whether to use vector or normal to perform vector\noperations.\n"},
  {"SetIndexMode", PyvtkGlyph3D_SetIndexMode, METH_VARARGS,
   "V.SetIndexMode(int)\nC++: virtual void SetIndexMode(int _arg)\n\nIndex into table of sources by scalar, by vector/normal\nmagnitude, or no indexing. If indexing is turned off, then the\nfirst source glyph in the table of glyphs is used. Note that\nindexing mode will only use the InputScalarsSelection array and\nnot the InputColorScalarsSelection as the scalar source if an\narray is specified.\n"},
  {"GetIndexMode", PyvtkGlyph3D_GetIndexMode, METH_VARARGS,
   "V.GetIndexMode() -> int\nC++: virtual int GetIndexMode()\n\nIndex into table of sources by scalar, by vector/normal\nmagnitude, or no indexing. If indexing is turned off, then the\nfirst source glyph in the table of glyphs is used. Note that\nindexing mode will only use the InputScalarsSelection array and\nnot the InputColorScalarsSelection as the scalar source if an\narray is specified.\n"},
  {"SetIndexModeToScalar", PyvtkGlyph3D_SetIndexModeToScalar, METH_VARARGS,
   "V.SetIndexModeToScalar()\nC++: void SetIndexModeToScalar()\n\nIndex into table of sources by scalar, by vector/normal\nmagnitude, or no indexing. If indexing is turned off, then the\nfirst source glyph in the table of glyphs is used. Note that\nindexing mode will only use the InputScalarsSelection array and\nnot the InputColorScalarsSelection as the scalar source if an\narray is specified.\n"},
  {"SetIndexModeToVector", PyvtkGlyph3D_SetIndexModeToVector, METH_VARARGS,
   "V.SetIndexModeToVector()\nC++: void SetIndexModeToVector()\n\nIndex into table of sources by scalar, by vector/normal\nmagnitude, or no indexing. If indexing is turned off, then the\nfirst source glyph in the table of glyphs is used. Note that\nindexing mode will only use the InputScalarsSelection array and\nnot the InputColorScalarsSelection as the scalar source if an\narray is specified.\n"},
  {"SetIndexModeToOff", PyvtkGlyph3D_SetIndexModeToOff, METH_VARARGS,
   "V.SetIndexModeToOff()\nC++: void SetIndexModeToOff()\n\nIndex into table of sources by scalar, by vector/normal\nmagnitude, or no indexing. If indexing is turned off, then the\nfirst source glyph in the table of glyphs is used. Note that\nindexing mode will only use the InputScalarsSelection array and\nnot the InputColorScalarsSelection as the scalar source if an\narray is specified.\n"},
  {"GetIndexModeAsString", PyvtkGlyph3D_GetIndexModeAsString, METH_VARARGS,
   "V.GetIndexModeAsString() -> string\nC++: const char *GetIndexModeAsString()\n\nIndex into table of sources by scalar, by vector/normal\nmagnitude, or no indexing. If indexing is turned off, then the\nfirst source glyph in the table of glyphs is used. Note that\nindexing mode will only use the InputScalarsSelection array and\nnot the InputColorScalarsSelection as the scalar source if an\narray is specified.\n"},
  {"SetGeneratePointIds", PyvtkGlyph3D_SetGeneratePointIds, METH_VARARGS,
   "V.SetGeneratePointIds(int)\nC++: virtual void SetGeneratePointIds(vtkTypeBool _arg)\n\nEnable/disable the generation of point ids as part of the output.\nThe point ids are the id of the input generating point. The point\nids are stored in the output point field data and named\n\"InputPointIds\". Point generation is useful for debugging and\npick operations.\n"},
  {"GetGeneratePointIds", PyvtkGlyph3D_GetGeneratePointIds, METH_VARARGS,
   "V.GetGeneratePointIds() -> int\nC++: virtual vtkTypeBool GetGeneratePointIds()\n\nEnable/disable the generation of point ids as part of the output.\nThe point ids are the id of the input generating point. The point\nids are stored in the output point field data and named\n\"InputPointIds\". Point generation is useful for debugging and\npick operations.\n"},
  {"GeneratePointIdsOn", PyvtkGlyph3D_GeneratePointIdsOn, METH_VARARGS,
   "V.GeneratePointIdsOn()\nC++: virtual void GeneratePointIdsOn()\n\nEnable/disable the generation of point ids as part of the output.\nThe point ids are the id of the input generating point. The point\nids are stored in the output point field data and named\n\"InputPointIds\". Point generation is useful for debugging and\npick operations.\n"},
  {"GeneratePointIdsOff", PyvtkGlyph3D_GeneratePointIdsOff, METH_VARARGS,
   "V.GeneratePointIdsOff()\nC++: virtual void GeneratePointIdsOff()\n\nEnable/disable the generation of point ids as part of the output.\nThe point ids are the id of the input generating point. The point\nids are stored in the output point field data and named\n\"InputPointIds\". Point generation is useful for debugging and\npick operations.\n"},
  {"SetPointIdsName", PyvtkGlyph3D_SetPointIdsName, METH_VARARGS,
   "V.SetPointIdsName(string)\nC++: virtual void SetPointIdsName(const char *_arg)\n\nSet/Get the name of the PointIds array if generated. By default\nthe Ids are named \"InputPointIds\", but this can be changed with\nthis function.\n"},
  {"GetPointIdsName", PyvtkGlyph3D_GetPointIdsName, METH_VARARGS,
   "V.GetPointIdsName() -> string\nC++: virtual char *GetPointIdsName()\n\nSet/Get the name of the PointIds array if generated. By default\nthe Ids are named \"InputPointIds\", but this can be changed with\nthis function.\n"},
  {"SetFillCellData", PyvtkGlyph3D_SetFillCellData, METH_VARARGS,
   "V.SetFillCellData(int)\nC++: virtual void SetFillCellData(vtkTypeBool _arg)\n\nEnable/disable the generation of cell data as part of the output.\nThe cell data at each cell will match the point data of the input\nat the glyphed point.\n"},
  {"GetFillCellData", PyvtkGlyph3D_GetFillCellData, METH_VARARGS,
   "V.GetFillCellData() -> int\nC++: virtual vtkTypeBool GetFillCellData()\n\nEnable/disable the generation of cell data as part of the output.\nThe cell data at each cell will match the point data of the input\nat the glyphed point.\n"},
  {"FillCellDataOn", PyvtkGlyph3D_FillCellDataOn, METH_VARARGS,
   "V.FillCellDataOn()\nC++: virtual void FillCellDataOn()\n\nEnable/disable the generation of cell data as part of the output.\nThe cell data at each cell will match the point data of the input\nat the glyphed point.\n"},
  {"FillCellDataOff", PyvtkGlyph3D_FillCellDataOff, METH_VARARGS,
   "V.FillCellDataOff()\nC++: virtual void FillCellDataOff()\n\nEnable/disable the generation of cell data as part of the output.\nThe cell data at each cell will match the point data of the input\nat the glyphed point.\n"},
  {"IsPointVisible", PyvtkGlyph3D_IsPointVisible, METH_VARARGS,
   "V.IsPointVisible(vtkDataSet, int) -> int\nC++: virtual int IsPointVisible(vtkDataSet *, vtkIdType)\n\nThis can be overwritten by subclass to return 0 when a point is\nblanked. Default implementation is to always return 1;\n"},
  {"SetSourceTransform", PyvtkGlyph3D_SetSourceTransform, METH_VARARGS,
   "V.SetSourceTransform(vtkTransform)\nC++: void SetSourceTransform(vtkTransform *)\n\nWhen set, this is use to transform the source polydata before\nusing it to generate the glyph. This is useful if one wanted to\nreorient the source, for example.\n"},
  {"GetSourceTransform", PyvtkGlyph3D_GetSourceTransform, METH_VARARGS,
   "V.GetSourceTransform() -> vtkTransform\nC++: virtual vtkTransform *GetSourceTransform()\n\nWhen set, this is use to transform the source polydata before\nusing it to generate the glyph. This is useful if one wanted to\nreorient the source, for example.\n"},
  {"GetMTime", PyvtkGlyph3D_GetMTime, METH_VARARGS,
   "V.GetMTime() -> int\nC++: vtkMTimeType GetMTime() override;\n\nOverridden to include SourceTransform's MTime.\n"},
  {"SetOutputPointsPrecision", PyvtkGlyph3D_SetOutputPointsPrecision, METH_VARARGS,
   "V.SetOutputPointsPrecision(int)\nC++: virtual void SetOutputPointsPrecision(int _arg)\n\nSet/get the desired precision for the output types. See the\ndocumentation for the vtkAlgorithm::DesiredOutputPrecision enum\nfor an explanation of the available precision settings.\n"},
  {"GetOutputPointsPrecision", PyvtkGlyph3D_GetOutputPointsPrecision, METH_VARARGS,
   "V.GetOutputPointsPrecision() -> int\nC++: virtual int GetOutputPointsPrecision()\n\nSet/get the desired precision for the output types. See the\ndocumentation for the vtkAlgorithm::DesiredOutputPrecision enum\nfor an explanation of the available precision settings.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkGlyph3D_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersCorePython.vtkGlyph3D", // tp_name
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
  PyvtkGlyph3D_Doc, // tp_doc
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

static vtkObjectBase *PyvtkGlyph3D_StaticNew()
{
  return vtkGlyph3D::New();
}

PyObject *PyvtkGlyph3D_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkGlyph3D_Type, PyvtkGlyph3D_Methods,
    "vtkGlyph3D",
 &PyvtkGlyph3D_StaticNew);

  PyTypeObject *pytype = &PyvtkGlyph3D_Type;

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

void PyVTKAddFile_vtkGlyph3D(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkGlyph3D_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkGlyph3D", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 13; c++)
  {
    static const struct { const char *name; int value; }
      constants[13] = {
        { "VTK_SCALE_BY_SCALAR", 0 },
        { "VTK_SCALE_BY_VECTOR", 1 },
        { "VTK_SCALE_BY_VECTORCOMPONENTS", 2 },
        { "VTK_DATA_SCALING_OFF", 3 },
        { "VTK_COLOR_BY_SCALE", 0 },
        { "VTK_COLOR_BY_SCALAR", 1 },
        { "VTK_COLOR_BY_VECTOR", 2 },
        { "VTK_USE_VECTOR", 0 },
        { "VTK_USE_NORMAL", 1 },
        { "VTK_VECTOR_ROTATION_OFF", 2 },
        { "VTK_INDEXING_OFF", 0 },
        { "VTK_INDEXING_BY_SCALAR", 1 },
        { "VTK_INDEXING_BY_VECTOR", 2 },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

