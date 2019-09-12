// python wrapper for vtkSelectPolyData
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
#include "vtkSelectPolyData.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSelectPolyData(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSelectPolyData_ClassNew(); }

#ifndef DECLARED_PyvtkPolyDataAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPolyDataAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPolyDataAlgorithm_ClassNew
#endif

static const char *PyvtkSelectPolyData_Doc =
  "vtkSelectPolyData - select portion of polygonal mesh; generate\nselection scalars\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkSelectPolyData is a filter that selects polygonal data based on\n"
  "defining a \"loop\" and indicating the region inside of the loop. The\n"
  "mesh within the loop consists of complete cells (the cells are not\n"
  "cut). Alternatively, this filter can be used to generate scalars.\n"
  "These scalar values, which are a distance measure to the loop, can be\n"
  "used to clip, contour. or extract data (i.e., anything that an\n"
  "implicit function can do).\n\n"
  "The loop is defined by an array of x-y-z point coordinates.\n"
  "(Coordinates should be in the same coordinate space as the input\n"
  "polygonal data.) The loop can be concave and non-planar, but not\n"
  "self-intersecting. The input to the filter is a polygonal mesh (only\n"
  "surface primitives such as triangle strips and polygons); the output\n"
  "is either a) a portion of the original mesh laying within the\n"
  "selection loop (GenerateSelectionScalarsOff); or b) the same\n"
  "polygonal mesh with the addition of scalar values\n"
  "(GenerateSelectionScalarsOn).\n\n"
  "The algorithm works as follows. For each point coordinate in the\n"
  "loop, the closest point in the mesh is found. The result is a loop of\n"
  "closest point ids from the mesh. Then, the edges in the mesh\n"
  "connecting the closest points (and laying along the lines forming the\n"
  "loop) are found. A greedy edge tracking procedure is used as follows.\n"
  "At the current point, the mesh edge oriented in the direction of and\n"
  "whose end point is closest to the line is chosen. The edge is\n"
  "followed to the new end point, and the procedure is repeated. This\n"
  "process continues until the entire loop has been created.\n\n"
  "To determine what portion of the mesh is inside and outside of the\n"
  "loop, three options are possible. 1) the smallest connected region,\n"
  "2) the largest connected region, and 3) the connected region closest\n"
  "   to a user specified point. (Set the ivar SelectionMode.)\n\n"
  "Once the loop is computed as above, the GenerateSelectionScalars\n"
  "controls the output of the filter. If on, then scalar values are\n"
  "generated based on distance to the loop lines. Otherwise, the cells\n"
  "laying inside the selection loop are output. By default, the mesh\n"
  "laying within the loop is output; however, if InsideOut is on, then\n"
  "the portion of the mesh laying outside of the loop is output.\n\n"
  "The filter can be configured to generate the unselected portions of\n"
  "the mesh as output by setting GenerateUnselectedOutput. Use the\n"
  "method GetUnselectedOutput to access this output. (Note: this flag is\n"
  "pertinent only when GenerateSelectionScalars is off.)\n\n"
  "@warning\n"
  "Make sure that the points you pick are on a connected surface. If\n"
  "not, then the filter will generate an empty or partial result. Also,\n"
  "self-intersecting loops will generate unpredictable results.\n\n"
  "@warning\n"
  "During processing of the data, non-triangular cells are converted to\n"
  "triangles if GenerateSelectionScalars is off.\n\n"
  "@sa\n"
  "vtkImplicitSelectionLoop\n\n";


static PyObject *
PyvtkSelectPolyData_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSelectPolyData::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectPolyData_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectPolyData *op = static_cast<vtkSelectPolyData *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSelectPolyData::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectPolyData_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSelectPolyData *tempr = vtkSelectPolyData::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectPolyData_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectPolyData *op = static_cast<vtkSelectPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSelectPolyData *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSelectPolyData::NewInstance());

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
PyvtkSelectPolyData_SetGenerateSelectionScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateSelectionScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectPolyData *op = static_cast<vtkSelectPolyData *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateSelectionScalars(temp0);
    }
    else
    {
      op->vtkSelectPolyData::SetGenerateSelectionScalars(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSelectPolyData_GetGenerateSelectionScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateSelectionScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectPolyData *op = static_cast<vtkSelectPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGenerateSelectionScalars() :
      op->vtkSelectPolyData::GetGenerateSelectionScalars());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectPolyData_GenerateSelectionScalarsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateSelectionScalarsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectPolyData *op = static_cast<vtkSelectPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateSelectionScalarsOn();
    }
    else
    {
      op->vtkSelectPolyData::GenerateSelectionScalarsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSelectPolyData_GenerateSelectionScalarsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateSelectionScalarsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectPolyData *op = static_cast<vtkSelectPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateSelectionScalarsOff();
    }
    else
    {
      op->vtkSelectPolyData::GenerateSelectionScalarsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSelectPolyData_SetInsideOut(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInsideOut");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectPolyData *op = static_cast<vtkSelectPolyData *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInsideOut(temp0);
    }
    else
    {
      op->vtkSelectPolyData::SetInsideOut(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSelectPolyData_GetInsideOut(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInsideOut");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectPolyData *op = static_cast<vtkSelectPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInsideOut() :
      op->vtkSelectPolyData::GetInsideOut());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectPolyData_InsideOutOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsideOutOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectPolyData *op = static_cast<vtkSelectPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InsideOutOn();
    }
    else
    {
      op->vtkSelectPolyData::InsideOutOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSelectPolyData_InsideOutOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsideOutOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectPolyData *op = static_cast<vtkSelectPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InsideOutOff();
    }
    else
    {
      op->vtkSelectPolyData::InsideOutOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSelectPolyData_SetLoop(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLoop");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectPolyData *op = static_cast<vtkSelectPolyData *>(vp);

  vtkPoints *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPoints"))
  {
    if (ap.IsBound())
    {
      op->SetLoop(temp0);
    }
    else
    {
      op->vtkSelectPolyData::SetLoop(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSelectPolyData_GetLoop(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLoop");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectPolyData *op = static_cast<vtkSelectPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPoints *tempr = (ap.IsBound() ?
      op->GetLoop() :
      op->vtkSelectPolyData::GetLoop());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectPolyData_SetClosestPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClosestPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectPolyData *op = static_cast<vtkSelectPolyData *>(vp);

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
      op->SetClosestPoint(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSelectPolyData::SetClosestPoint(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSelectPolyData_SetClosestPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClosestPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectPolyData *op = static_cast<vtkSelectPolyData *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetClosestPoint(temp0);
    }
    else
    {
      op->vtkSelectPolyData::SetClosestPoint(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSelectPolyData_SetClosestPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkSelectPolyData_SetClosestPoint_s1(self, args);
    case 1:
      return PyvtkSelectPolyData_SetClosestPoint_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetClosestPoint");
  return nullptr;
}



static PyObject *
PyvtkSelectPolyData_GetClosestPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClosestPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectPolyData *op = static_cast<vtkSelectPolyData *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetClosestPoint() :
      op->vtkSelectPolyData::GetClosestPoint());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectPolyData_SetSelectionMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectionMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectPolyData *op = static_cast<vtkSelectPolyData *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSelectionMode(temp0);
    }
    else
    {
      op->vtkSelectPolyData::SetSelectionMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSelectPolyData_GetSelectionModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectionModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectPolyData *op = static_cast<vtkSelectPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSelectionModeMinValue() :
      op->vtkSelectPolyData::GetSelectionModeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectPolyData_GetSelectionModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectionModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectPolyData *op = static_cast<vtkSelectPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSelectionModeMaxValue() :
      op->vtkSelectPolyData::GetSelectionModeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectPolyData_GetSelectionMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectionMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectPolyData *op = static_cast<vtkSelectPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSelectionMode() :
      op->vtkSelectPolyData::GetSelectionMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectPolyData_SetSelectionModeToSmallestRegion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectionModeToSmallestRegion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectPolyData *op = static_cast<vtkSelectPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetSelectionModeToSmallestRegion();
    }
    else
    {
      op->vtkSelectPolyData::SetSelectionModeToSmallestRegion();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSelectPolyData_SetSelectionModeToLargestRegion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectionModeToLargestRegion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectPolyData *op = static_cast<vtkSelectPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetSelectionModeToLargestRegion();
    }
    else
    {
      op->vtkSelectPolyData::SetSelectionModeToLargestRegion();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSelectPolyData_SetSelectionModeToClosestPointRegion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectionModeToClosestPointRegion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectPolyData *op = static_cast<vtkSelectPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetSelectionModeToClosestPointRegion();
    }
    else
    {
      op->vtkSelectPolyData::SetSelectionModeToClosestPointRegion();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSelectPolyData_GetSelectionModeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectionModeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectPolyData *op = static_cast<vtkSelectPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetSelectionModeAsString() :
      op->vtkSelectPolyData::GetSelectionModeAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectPolyData_SetGenerateUnselectedOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateUnselectedOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectPolyData *op = static_cast<vtkSelectPolyData *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateUnselectedOutput(temp0);
    }
    else
    {
      op->vtkSelectPolyData::SetGenerateUnselectedOutput(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSelectPolyData_GetGenerateUnselectedOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateUnselectedOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectPolyData *op = static_cast<vtkSelectPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGenerateUnselectedOutput() :
      op->vtkSelectPolyData::GetGenerateUnselectedOutput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectPolyData_GenerateUnselectedOutputOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateUnselectedOutputOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectPolyData *op = static_cast<vtkSelectPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateUnselectedOutputOn();
    }
    else
    {
      op->vtkSelectPolyData::GenerateUnselectedOutputOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSelectPolyData_GenerateUnselectedOutputOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateUnselectedOutputOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectPolyData *op = static_cast<vtkSelectPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateUnselectedOutputOff();
    }
    else
    {
      op->vtkSelectPolyData::GenerateUnselectedOutputOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSelectPolyData_GetUnselectedOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUnselectedOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectPolyData *op = static_cast<vtkSelectPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetUnselectedOutput() :
      op->vtkSelectPolyData::GetUnselectedOutput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectPolyData_GetSelectionEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectionEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectPolyData *op = static_cast<vtkSelectPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetSelectionEdges() :
      op->vtkSelectPolyData::GetSelectionEdges());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectPolyData_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectPolyData *op = static_cast<vtkSelectPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkSelectPolyData::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSelectPolyData_Methods[] = {
  {"IsTypeOf", PyvtkSelectPolyData_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSelectPolyData_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSelectPolyData_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSelectPolyData\nC++: static vtkSelectPolyData *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSelectPolyData_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSelectPolyData\nC++: vtkSelectPolyData *NewInstance()\n\n"},
  {"SetGenerateSelectionScalars", PyvtkSelectPolyData_SetGenerateSelectionScalars, METH_VARARGS,
   "V.SetGenerateSelectionScalars(int)\nC++: virtual void SetGenerateSelectionScalars(vtkTypeBool _arg)\n\nSet/Get the flag to control behavior of the filter. If\nGenerateSelectionScalars is on, then the output of the filter is\nthe same as the input, except that scalars are generated. If off,\nthe filter outputs the cells laying inside the loop, and does not\ngenerate scalars.\n"},
  {"GetGenerateSelectionScalars", PyvtkSelectPolyData_GetGenerateSelectionScalars, METH_VARARGS,
   "V.GetGenerateSelectionScalars() -> int\nC++: virtual vtkTypeBool GetGenerateSelectionScalars()\n\nSet/Get the flag to control behavior of the filter. If\nGenerateSelectionScalars is on, then the output of the filter is\nthe same as the input, except that scalars are generated. If off,\nthe filter outputs the cells laying inside the loop, and does not\ngenerate scalars.\n"},
  {"GenerateSelectionScalarsOn", PyvtkSelectPolyData_GenerateSelectionScalarsOn, METH_VARARGS,
   "V.GenerateSelectionScalarsOn()\nC++: virtual void GenerateSelectionScalarsOn()\n\nSet/Get the flag to control behavior of the filter. If\nGenerateSelectionScalars is on, then the output of the filter is\nthe same as the input, except that scalars are generated. If off,\nthe filter outputs the cells laying inside the loop, and does not\ngenerate scalars.\n"},
  {"GenerateSelectionScalarsOff", PyvtkSelectPolyData_GenerateSelectionScalarsOff, METH_VARARGS,
   "V.GenerateSelectionScalarsOff()\nC++: virtual void GenerateSelectionScalarsOff()\n\nSet/Get the flag to control behavior of the filter. If\nGenerateSelectionScalars is on, then the output of the filter is\nthe same as the input, except that scalars are generated. If off,\nthe filter outputs the cells laying inside the loop, and does not\ngenerate scalars.\n"},
  {"SetInsideOut", PyvtkSelectPolyData_SetInsideOut, METH_VARARGS,
   "V.SetInsideOut(int)\nC++: virtual void SetInsideOut(vtkTypeBool _arg)\n\nSet/Get the InsideOut flag. When off, the mesh within the loop is\nextracted. When on, the mesh outside the loop is extracted.\n"},
  {"GetInsideOut", PyvtkSelectPolyData_GetInsideOut, METH_VARARGS,
   "V.GetInsideOut() -> int\nC++: virtual vtkTypeBool GetInsideOut()\n\nSet/Get the InsideOut flag. When off, the mesh within the loop is\nextracted. When on, the mesh outside the loop is extracted.\n"},
  {"InsideOutOn", PyvtkSelectPolyData_InsideOutOn, METH_VARARGS,
   "V.InsideOutOn()\nC++: virtual void InsideOutOn()\n\nSet/Get the InsideOut flag. When off, the mesh within the loop is\nextracted. When on, the mesh outside the loop is extracted.\n"},
  {"InsideOutOff", PyvtkSelectPolyData_InsideOutOff, METH_VARARGS,
   "V.InsideOutOff()\nC++: virtual void InsideOutOff()\n\nSet/Get the InsideOut flag. When off, the mesh within the loop is\nextracted. When on, the mesh outside the loop is extracted.\n"},
  {"SetLoop", PyvtkSelectPolyData_SetLoop, METH_VARARGS,
   "V.SetLoop(vtkPoints)\nC++: virtual void SetLoop(vtkPoints *)\n\nSet/Get the array of point coordinates defining the loop. There\nmust be at least three points used to define a loop.\n"},
  {"GetLoop", PyvtkSelectPolyData_GetLoop, METH_VARARGS,
   "V.GetLoop() -> vtkPoints\nC++: virtual vtkPoints *GetLoop()\n\nSet/Get the array of point coordinates defining the loop. There\nmust be at least three points used to define a loop.\n"},
  {"SetClosestPoint", PyvtkSelectPolyData_SetClosestPoint, METH_VARARGS,
   "V.SetClosestPoint(float, float, float)\nC++: void SetClosestPoint(double, double, double)\nV.SetClosestPoint((float, float, float))\nC++: void SetClosestPoint(double a[3])\n\n"},
  {"GetClosestPoint", PyvtkSelectPolyData_GetClosestPoint, METH_VARARGS,
   "V.GetClosestPoint() -> (float, float, float)\nC++: double *GetClosestPoint()\n\n"},
  {"SetSelectionMode", PyvtkSelectPolyData_SetSelectionMode, METH_VARARGS,
   "V.SetSelectionMode(int)\nC++: virtual void SetSelectionMode(int _arg)\n\nControl how inside/outside of loop is defined.\n"},
  {"GetSelectionModeMinValue", PyvtkSelectPolyData_GetSelectionModeMinValue, METH_VARARGS,
   "V.GetSelectionModeMinValue() -> int\nC++: virtual int GetSelectionModeMinValue()\n\nControl how inside/outside of loop is defined.\n"},
  {"GetSelectionModeMaxValue", PyvtkSelectPolyData_GetSelectionModeMaxValue, METH_VARARGS,
   "V.GetSelectionModeMaxValue() -> int\nC++: virtual int GetSelectionModeMaxValue()\n\nControl how inside/outside of loop is defined.\n"},
  {"GetSelectionMode", PyvtkSelectPolyData_GetSelectionMode, METH_VARARGS,
   "V.GetSelectionMode() -> int\nC++: virtual int GetSelectionMode()\n\nControl how inside/outside of loop is defined.\n"},
  {"SetSelectionModeToSmallestRegion", PyvtkSelectPolyData_SetSelectionModeToSmallestRegion, METH_VARARGS,
   "V.SetSelectionModeToSmallestRegion()\nC++: void SetSelectionModeToSmallestRegion()\n\nControl how inside/outside of loop is defined.\n"},
  {"SetSelectionModeToLargestRegion", PyvtkSelectPolyData_SetSelectionModeToLargestRegion, METH_VARARGS,
   "V.SetSelectionModeToLargestRegion()\nC++: void SetSelectionModeToLargestRegion()\n\nControl how inside/outside of loop is defined.\n"},
  {"SetSelectionModeToClosestPointRegion", PyvtkSelectPolyData_SetSelectionModeToClosestPointRegion, METH_VARARGS,
   "V.SetSelectionModeToClosestPointRegion()\nC++: void SetSelectionModeToClosestPointRegion()\n\nControl how inside/outside of loop is defined.\n"},
  {"GetSelectionModeAsString", PyvtkSelectPolyData_GetSelectionModeAsString, METH_VARARGS,
   "V.GetSelectionModeAsString() -> string\nC++: const char *GetSelectionModeAsString()\n\nControl how inside/outside of loop is defined.\n"},
  {"SetGenerateUnselectedOutput", PyvtkSelectPolyData_SetGenerateUnselectedOutput, METH_VARARGS,
   "V.SetGenerateUnselectedOutput(int)\nC++: virtual void SetGenerateUnselectedOutput(vtkTypeBool _arg)\n\nControl whether a second output is generated. The second output\ncontains the polygonal data that's not been selected.\n"},
  {"GetGenerateUnselectedOutput", PyvtkSelectPolyData_GetGenerateUnselectedOutput, METH_VARARGS,
   "V.GetGenerateUnselectedOutput() -> int\nC++: virtual vtkTypeBool GetGenerateUnselectedOutput()\n\nControl whether a second output is generated. The second output\ncontains the polygonal data that's not been selected.\n"},
  {"GenerateUnselectedOutputOn", PyvtkSelectPolyData_GenerateUnselectedOutputOn, METH_VARARGS,
   "V.GenerateUnselectedOutputOn()\nC++: virtual void GenerateUnselectedOutputOn()\n\nControl whether a second output is generated. The second output\ncontains the polygonal data that's not been selected.\n"},
  {"GenerateUnselectedOutputOff", PyvtkSelectPolyData_GenerateUnselectedOutputOff, METH_VARARGS,
   "V.GenerateUnselectedOutputOff()\nC++: virtual void GenerateUnselectedOutputOff()\n\nControl whether a second output is generated. The second output\ncontains the polygonal data that's not been selected.\n"},
  {"GetUnselectedOutput", PyvtkSelectPolyData_GetUnselectedOutput, METH_VARARGS,
   "V.GetUnselectedOutput() -> vtkPolyData\nC++: vtkPolyData *GetUnselectedOutput()\n\nReturn output that hasn't been selected (if\nGenreateUnselectedOutput is enabled).\n"},
  {"GetSelectionEdges", PyvtkSelectPolyData_GetSelectionEdges, METH_VARARGS,
   "V.GetSelectionEdges() -> vtkPolyData\nC++: vtkPolyData *GetSelectionEdges()\n\nReturn the (mesh) edges of the selection region.\n"},
  {"GetMTime", PyvtkSelectPolyData_GetMTime, METH_VARARGS,
   "V.GetMTime() -> int\nC++: vtkMTimeType GetMTime() override;\n\nReturn this object's modified time.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSelectPolyData_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersModelingPython.vtkSelectPolyData", // tp_name
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
  PyvtkSelectPolyData_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSelectPolyData_StaticNew()
{
  return vtkSelectPolyData::New();
}

PyObject *PyvtkSelectPolyData_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSelectPolyData_Type, PyvtkSelectPolyData_Methods,
    "vtkSelectPolyData",
 &PyvtkSelectPolyData_StaticNew);

  PyTypeObject *pytype = &PyvtkSelectPolyData_Type;

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

void PyVTKAddFile_vtkSelectPolyData(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSelectPolyData_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSelectPolyData", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 3; c++)
  {
    static const struct { const char *name; int value; }
      constants[3] = {
        { "VTK_INSIDE_SMALLEST_REGION", 0 },
        { "VTK_INSIDE_LARGEST_REGION", 1 },
        { "VTK_INSIDE_CLOSEST_POINT_REGION", 2 },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

