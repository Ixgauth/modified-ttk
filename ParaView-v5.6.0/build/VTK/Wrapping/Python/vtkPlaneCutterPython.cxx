// python wrapper for vtkPlaneCutter
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
#include "vtkPlaneCutter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPlaneCutter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPlaneCutter_ClassNew(); }

#ifndef DECLARED_PyvtkDataSetAlgorithm_ClassNew
extern "C" { PyObject *PyvtkDataSetAlgorithm_ClassNew(); }
#define DECLARED_PyvtkDataSetAlgorithm_ClassNew
#endif

static const char *PyvtkPlaneCutter_Doc =
  "vtkPlaneCutter - cut any dataset with a plane and generate a\npolygonal cut surface\n\n"
  "Superclass: vtkDataSetAlgorithm\n\n"
  "vtkPlaneCutter is a specialization of the vtkCutter algorithm to cut\n"
  "a dataset grid with a single plane. It is designed for performance\n"
  "and an exploratory, fast workflow. It produces output polygons that\n"
  "result from cutting the icnput dataset with the specified plane.\n\n"
  "This algorithm is fast because it is threaded, and may build (in a\n"
  "preprocessing step) a spatial search structure that accelerates the\n"
  "plane cuts. The search structure, which is typically a sphere tree,\n"
  "is used to quickly cull candidate cells. Also unlike vtkCutter, the\n"
  "vtkPlane implicit function (representing the plane) does not need to\n"
  "be evaluated with each cut. (Note that other methods of acceleration\n"
  "are delegated to for image data, see vtkFlyingEdgesPlaneCutter\n"
  "documentation.)\n\n"
  "Because this filter builds an initial data structure during a\n"
  "preprocessing step, the first execution of the filter may take longer\n"
  "than subsequent operations. Typically the first execution is still\n"
  "faster than vtkCutter (especially with threading enabled), but for\n"
  "certain types of data this may not be true. However if you are using\n"
  "the filter to cut a dataset multiple times (as in an exploratory or\n"
  "interactive workflow) this filter works well.\n\n"
  "@warning\n"
  "This filter outputs a vtkMultiPieceDataSet.\n\n"
  "@warning\n"
  "This filter delegates to vtkFlyingEdgesPlaneCutter to process image\n"
  "data, but output and input have been standardized when possible.\n\n"
  "@warning\n"
  "This class has been threaded with vtkSMPTools. Using TBB or other\n"
  "non-sequential type (set in the CMake variable\n"
  "VTK_SMP_IMPLEMENTATION_TYPE) may improve performance significantly.\n\n"
  "@sa\n"
  "vtkCutter vtkFlyingEdgesPlaneCutter vtkPlane\n\n";


static PyObject *
PyvtkPlaneCutter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPlaneCutter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlaneCutter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneCutter *op = static_cast<vtkPlaneCutter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPlaneCutter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlaneCutter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPlaneCutter *tempr = vtkPlaneCutter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlaneCutter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneCutter *op = static_cast<vtkPlaneCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPlaneCutter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPlaneCutter::NewInstance());

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
PyvtkPlaneCutter_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneCutter *op = static_cast<vtkPlaneCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkPlaneCutter::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlaneCutter_SetPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneCutter *op = static_cast<vtkPlaneCutter *>(vp);

  vtkPlane *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPlane"))
  {
    if (ap.IsBound())
    {
      op->SetPlane(temp0);
    }
    else
    {
      op->vtkPlaneCutter::SetPlane(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlaneCutter_GetPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneCutter *op = static_cast<vtkPlaneCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPlane *tempr = (ap.IsBound() ?
      op->GetPlane() :
      op->vtkPlaneCutter::GetPlane());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlaneCutter_SetComputeNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneCutter *op = static_cast<vtkPlaneCutter *>(vp);

  bool temp0 = false;
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
      op->vtkPlaneCutter::SetComputeNormals(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlaneCutter_GetComputeNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputeNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneCutter *op = static_cast<vtkPlaneCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetComputeNormals() :
      op->vtkPlaneCutter::GetComputeNormals());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlaneCutter_ComputeNormalsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeNormalsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneCutter *op = static_cast<vtkPlaneCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeNormalsOn();
    }
    else
    {
      op->vtkPlaneCutter::ComputeNormalsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlaneCutter_ComputeNormalsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeNormalsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneCutter *op = static_cast<vtkPlaneCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeNormalsOff();
    }
    else
    {
      op->vtkPlaneCutter::ComputeNormalsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlaneCutter_SetInterpolateAttributes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolateAttributes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneCutter *op = static_cast<vtkPlaneCutter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInterpolateAttributes(temp0);
    }
    else
    {
      op->vtkPlaneCutter::SetInterpolateAttributes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlaneCutter_GetInterpolateAttributes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterpolateAttributes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneCutter *op = static_cast<vtkPlaneCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetInterpolateAttributes() :
      op->vtkPlaneCutter::GetInterpolateAttributes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlaneCutter_InterpolateAttributesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateAttributesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneCutter *op = static_cast<vtkPlaneCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InterpolateAttributesOn();
    }
    else
    {
      op->vtkPlaneCutter::InterpolateAttributesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlaneCutter_InterpolateAttributesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateAttributesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneCutter *op = static_cast<vtkPlaneCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InterpolateAttributesOff();
    }
    else
    {
      op->vtkPlaneCutter::InterpolateAttributesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlaneCutter_SetGeneratePolygons(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGeneratePolygons");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneCutter *op = static_cast<vtkPlaneCutter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGeneratePolygons(temp0);
    }
    else
    {
      op->vtkPlaneCutter::SetGeneratePolygons(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlaneCutter_GetGeneratePolygons(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGeneratePolygons");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneCutter *op = static_cast<vtkPlaneCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetGeneratePolygons() :
      op->vtkPlaneCutter::GetGeneratePolygons());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlaneCutter_GeneratePolygonsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GeneratePolygonsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneCutter *op = static_cast<vtkPlaneCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GeneratePolygonsOn();
    }
    else
    {
      op->vtkPlaneCutter::GeneratePolygonsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlaneCutter_GeneratePolygonsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GeneratePolygonsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneCutter *op = static_cast<vtkPlaneCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GeneratePolygonsOff();
    }
    else
    {
      op->vtkPlaneCutter::GeneratePolygonsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlaneCutter_SetBuildTree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBuildTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneCutter *op = static_cast<vtkPlaneCutter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBuildTree(temp0);
    }
    else
    {
      op->vtkPlaneCutter::SetBuildTree(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlaneCutter_GetBuildTree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBuildTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneCutter *op = static_cast<vtkPlaneCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetBuildTree() :
      op->vtkPlaneCutter::GetBuildTree());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlaneCutter_BuildTreeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildTreeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneCutter *op = static_cast<vtkPlaneCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BuildTreeOn();
    }
    else
    {
      op->vtkPlaneCutter::BuildTreeOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlaneCutter_BuildTreeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildTreeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneCutter *op = static_cast<vtkPlaneCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BuildTreeOff();
    }
    else
    {
      op->vtkPlaneCutter::BuildTreeOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlaneCutter_SetBuildHierarchy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBuildHierarchy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneCutter *op = static_cast<vtkPlaneCutter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBuildHierarchy(temp0);
    }
    else
    {
      op->vtkPlaneCutter::SetBuildHierarchy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlaneCutter_GetBuildHierarchy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBuildHierarchy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneCutter *op = static_cast<vtkPlaneCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetBuildHierarchy() :
      op->vtkPlaneCutter::GetBuildHierarchy());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlaneCutter_BuildHierarchyOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildHierarchyOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneCutter *op = static_cast<vtkPlaneCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BuildHierarchyOn();
    }
    else
    {
      op->vtkPlaneCutter::BuildHierarchyOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlaneCutter_BuildHierarchyOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildHierarchyOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneCutter *op = static_cast<vtkPlaneCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BuildHierarchyOff();
    }
    else
    {
      op->vtkPlaneCutter::BuildHierarchyOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPlaneCutter_Methods[] = {
  {"IsTypeOf", PyvtkPlaneCutter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard construction and print methods.\n"},
  {"IsA", PyvtkPlaneCutter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard construction and print methods.\n"},
  {"SafeDownCast", PyvtkPlaneCutter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPlaneCutter\nC++: static vtkPlaneCutter *SafeDownCast(vtkObjectBase *o)\n\nStandard construction and print methods.\n"},
  {"NewInstance", PyvtkPlaneCutter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPlaneCutter\nC++: vtkPlaneCutter *NewInstance()\n\nStandard construction and print methods.\n"},
  {"GetMTime", PyvtkPlaneCutter_GetMTime, METH_VARARGS,
   "V.GetMTime() -> int\nC++: vtkMTimeType GetMTime() override;\n\nThe modified time depends on the delegated cut plane.\n"},
  {"SetPlane", PyvtkPlaneCutter_SetPlane, METH_VARARGS,
   "V.SetPlane(vtkPlane)\nC++: virtual void SetPlane(vtkPlane *)\n\nSpecify the plane (an implicit function) to perform the cutting.\nThe definition of the plane (its origin and normal) is controlled\nvia this instance of vtkPlane.\n"},
  {"GetPlane", PyvtkPlaneCutter_GetPlane, METH_VARARGS,
   "V.GetPlane() -> vtkPlane\nC++: virtual vtkPlane *GetPlane()\n\nSpecify the plane (an implicit function) to perform the cutting.\nThe definition of the plane (its origin and normal) is controlled\nvia this instance of vtkPlane.\n"},
  {"SetComputeNormals", PyvtkPlaneCutter_SetComputeNormals, METH_VARARGS,
   "V.SetComputeNormals(bool)\nC++: virtual void SetComputeNormals(bool _arg)\n\nSet/Get the computation of normals. The normal generated is\nsimply the cut plane normal. The normal, if generated, is defined\nby cell data associated with the output polygons. By default\ncomputing of normals is disabled.\n"},
  {"GetComputeNormals", PyvtkPlaneCutter_GetComputeNormals, METH_VARARGS,
   "V.GetComputeNormals() -> bool\nC++: virtual bool GetComputeNormals()\n\nSet/Get the computation of normals. The normal generated is\nsimply the cut plane normal. The normal, if generated, is defined\nby cell data associated with the output polygons. By default\ncomputing of normals is disabled.\n"},
  {"ComputeNormalsOn", PyvtkPlaneCutter_ComputeNormalsOn, METH_VARARGS,
   "V.ComputeNormalsOn()\nC++: virtual void ComputeNormalsOn()\n\nSet/Get the computation of normals. The normal generated is\nsimply the cut plane normal. The normal, if generated, is defined\nby cell data associated with the output polygons. By default\ncomputing of normals is disabled.\n"},
  {"ComputeNormalsOff", PyvtkPlaneCutter_ComputeNormalsOff, METH_VARARGS,
   "V.ComputeNormalsOff()\nC++: virtual void ComputeNormalsOff()\n\nSet/Get the computation of normals. The normal generated is\nsimply the cut plane normal. The normal, if generated, is defined\nby cell data associated with the output polygons. By default\ncomputing of normals is disabled.\n"},
  {"SetInterpolateAttributes", PyvtkPlaneCutter_SetInterpolateAttributes, METH_VARARGS,
   "V.SetInterpolateAttributes(bool)\nC++: virtual void SetInterpolateAttributes(bool _arg)\n\nIndicate whether to interpolate attribute data. By default this\nis enabled. Note that both cell data and point data is\ninterpolated and outputted, except for image data input where\nonly point data are outputted.\n"},
  {"GetInterpolateAttributes", PyvtkPlaneCutter_GetInterpolateAttributes, METH_VARARGS,
   "V.GetInterpolateAttributes() -> bool\nC++: virtual bool GetInterpolateAttributes()\n\nIndicate whether to interpolate attribute data. By default this\nis enabled. Note that both cell data and point data is\ninterpolated and outputted, except for image data input where\nonly point data are outputted.\n"},
  {"InterpolateAttributesOn", PyvtkPlaneCutter_InterpolateAttributesOn, METH_VARARGS,
   "V.InterpolateAttributesOn()\nC++: virtual void InterpolateAttributesOn()\n\nIndicate whether to interpolate attribute data. By default this\nis enabled. Note that both cell data and point data is\ninterpolated and outputted, except for image data input where\nonly point data are outputted.\n"},
  {"InterpolateAttributesOff", PyvtkPlaneCutter_InterpolateAttributesOff, METH_VARARGS,
   "V.InterpolateAttributesOff()\nC++: virtual void InterpolateAttributesOff()\n\nIndicate whether to interpolate attribute data. By default this\nis enabled. Note that both cell data and point data is\ninterpolated and outputted, except for image data input where\nonly point data are outputted.\n"},
  {"SetGeneratePolygons", PyvtkPlaneCutter_SetGeneratePolygons, METH_VARARGS,
   "V.SetGeneratePolygons(bool)\nC++: virtual void SetGeneratePolygons(bool _arg)\n\nIndicate whether to generate polygons instead of triangles when\ncutting structured and rectilinear grid. No effect with other\nkinds of inputs, enabled by default.\n"},
  {"GetGeneratePolygons", PyvtkPlaneCutter_GetGeneratePolygons, METH_VARARGS,
   "V.GetGeneratePolygons() -> bool\nC++: virtual bool GetGeneratePolygons()\n\nIndicate whether to generate polygons instead of triangles when\ncutting structured and rectilinear grid. No effect with other\nkinds of inputs, enabled by default.\n"},
  {"GeneratePolygonsOn", PyvtkPlaneCutter_GeneratePolygonsOn, METH_VARARGS,
   "V.GeneratePolygonsOn()\nC++: virtual void GeneratePolygonsOn()\n\nIndicate whether to generate polygons instead of triangles when\ncutting structured and rectilinear grid. No effect with other\nkinds of inputs, enabled by default.\n"},
  {"GeneratePolygonsOff", PyvtkPlaneCutter_GeneratePolygonsOff, METH_VARARGS,
   "V.GeneratePolygonsOff()\nC++: virtual void GeneratePolygonsOff()\n\nIndicate whether to generate polygons instead of triangles when\ncutting structured and rectilinear grid. No effect with other\nkinds of inputs, enabled by default.\n"},
  {"SetBuildTree", PyvtkPlaneCutter_SetBuildTree, METH_VARARGS,
   "V.SetBuildTree(bool)\nC++: virtual void SetBuildTree(bool _arg)\n\nIndicate whether to build the sphere tree. Computing the sphere\nwill take some time on the first computation but if the input\ndoes not change, the computation of all further slice will be\nmuch faster. Default is on.\n"},
  {"GetBuildTree", PyvtkPlaneCutter_GetBuildTree, METH_VARARGS,
   "V.GetBuildTree() -> bool\nC++: virtual bool GetBuildTree()\n\nIndicate whether to build the sphere tree. Computing the sphere\nwill take some time on the first computation but if the input\ndoes not change, the computation of all further slice will be\nmuch faster. Default is on.\n"},
  {"BuildTreeOn", PyvtkPlaneCutter_BuildTreeOn, METH_VARARGS,
   "V.BuildTreeOn()\nC++: virtual void BuildTreeOn()\n\nIndicate whether to build the sphere tree. Computing the sphere\nwill take some time on the first computation but if the input\ndoes not change, the computation of all further slice will be\nmuch faster. Default is on.\n"},
  {"BuildTreeOff", PyvtkPlaneCutter_BuildTreeOff, METH_VARARGS,
   "V.BuildTreeOff()\nC++: virtual void BuildTreeOff()\n\nIndicate whether to build the sphere tree. Computing the sphere\nwill take some time on the first computation but if the input\ndoes not change, the computation of all further slice will be\nmuch faster. Default is on.\n"},
  {"SetBuildHierarchy", PyvtkPlaneCutter_SetBuildHierarchy, METH_VARARGS,
   "V.SetBuildHierarchy(bool)\nC++: virtual void SetBuildHierarchy(bool _arg)\n\nIndicate whether to build tree hierarchy. Computing the tree\nhierarchy can take some time on the first computation but if the\ninput does not change, the computation of all further slice will\nbe faster. Default is on.\n"},
  {"GetBuildHierarchy", PyvtkPlaneCutter_GetBuildHierarchy, METH_VARARGS,
   "V.GetBuildHierarchy() -> bool\nC++: virtual bool GetBuildHierarchy()\n\nIndicate whether to build tree hierarchy. Computing the tree\nhierarchy can take some time on the first computation but if the\ninput does not change, the computation of all further slice will\nbe faster. Default is on.\n"},
  {"BuildHierarchyOn", PyvtkPlaneCutter_BuildHierarchyOn, METH_VARARGS,
   "V.BuildHierarchyOn()\nC++: virtual void BuildHierarchyOn()\n\nIndicate whether to build tree hierarchy. Computing the tree\nhierarchy can take some time on the first computation but if the\ninput does not change, the computation of all further slice will\nbe faster. Default is on.\n"},
  {"BuildHierarchyOff", PyvtkPlaneCutter_BuildHierarchyOff, METH_VARARGS,
   "V.BuildHierarchyOff()\nC++: virtual void BuildHierarchyOff()\n\nIndicate whether to build tree hierarchy. Computing the tree\nhierarchy can take some time on the first computation but if the\ninput does not change, the computation of all further slice will\nbe faster. Default is on.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPlaneCutter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersCorePython.vtkPlaneCutter", // tp_name
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
  PyvtkPlaneCutter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPlaneCutter_StaticNew()
{
  return vtkPlaneCutter::New();
}

PyObject *PyvtkPlaneCutter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPlaneCutter_Type, PyvtkPlaneCutter_Methods,
    "vtkPlaneCutter",
 &PyvtkPlaneCutter_StaticNew);

  PyTypeObject *pytype = &PyvtkPlaneCutter_Type;

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

void PyVTKAddFile_vtkPlaneCutter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPlaneCutter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPlaneCutter", o) != 0)
  {
    Py_DECREF(o);
  }

}

