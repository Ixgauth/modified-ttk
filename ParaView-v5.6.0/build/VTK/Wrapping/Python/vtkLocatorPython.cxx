// python wrapper for vtkLocator
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
#include "vtkLocator.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkLocator(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkLocator_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkLocator_Doc =
  "vtkLocator - abstract base class for objects that accelerate spatial\nsearches\n\n"
  "Superclass: vtkObject\n\n"
  "vtkLocator is an abstract base class for spatial search objects, or\n"
  "locators. The principle behind locators is that they divide 3-space\n"
  "into small regions (or \"buckets\") that can be quickly found in\n"
  "response to queries about point location, line intersection, or\n"
  "object-object intersection.\n\n"
  "The purpose of this base class is to provide data members and methods\n"
  "shared by all locators. The GenerateRepresentation() is one such\n"
  "interesting method.  This method works in conjunction with\n"
  "vtkLocatorFilter to create polygonal representations for the locator.\n"
  "For example, if the locator is an OBB tree (i.e., vtkOBBTree.h), then\n"
  "the representation is a set of one or more oriented bounding boxes,\n"
  "depending upon the specified level.\n\n"
  "Locators typically work as follows. One or more \"entities\", such as\n"
  "points or cells, are inserted into the locator structure. These\n"
  "entities are associated with one or more buckets. Then, when\n"
  "performing geometric operations, the operations are performed first\n"
  "on the buckets, and then if the operation tests positive, then on the\n"
  "entities in the bucket. For example, during collision tests, the\n"
  "locators are collided first to identify intersecting buckets. If an\n"
  "intersection is found, more expensive operations are then carried out\n"
  "on the entities in the bucket.\n\n"
  "To obtain good performance, locators are often organized in a tree\n"
  "structure.  In such a structure, there are frequently multiple\n"
  "\"levels\" corresponding to different nodes in the tree. So the word\n"
  "level (in the context of the locator) can be used to specify a\n"
  "particular representation in the tree.  For example, in an octree\n"
  "(which is a tree with 8 children), level 0 is the bounding box, or\n"
  "root octant, and level 1 consists of its eight children.\n\n"
  "@warning\n"
  "There is a concept of static and incremental locators. Static\n"
  "locators are constructed one time, and then support appropriate\n"
  "queries. Incremental locators may have data inserted into them over\n"
  "time (e.g., adding new points during the process of isocontouring).\n\n"
  "@sa\n"
  "vtkPointLocator vtkCellLocator vtkOBBTree vtkMergePoints\n\n";


static PyObject *
PyvtkLocator_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkLocator::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLocator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLocator *op = static_cast<vtkLocator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkLocator::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLocator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkLocator *tempr = vtkLocator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLocator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLocator *op = static_cast<vtkLocator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkLocator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkLocator::NewInstance());

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
PyvtkLocator_SetDataSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLocator *op = static_cast<vtkLocator *>(vp);

  vtkDataSet *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataSet"))
  {
    if (ap.IsBound())
    {
      op->SetDataSet(temp0);
    }
    else
    {
      op->vtkLocator::SetDataSet(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLocator_GetDataSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLocator *op = static_cast<vtkLocator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataSet *tempr = (ap.IsBound() ?
      op->GetDataSet() :
      op->vtkLocator::GetDataSet());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLocator_SetMaxLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLocator *op = static_cast<vtkLocator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaxLevel(temp0);
    }
    else
    {
      op->vtkLocator::SetMaxLevel(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLocator_GetMaxLevelMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxLevelMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLocator *op = static_cast<vtkLocator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaxLevelMinValue() :
      op->vtkLocator::GetMaxLevelMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLocator_GetMaxLevelMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxLevelMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLocator *op = static_cast<vtkLocator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaxLevelMaxValue() :
      op->vtkLocator::GetMaxLevelMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLocator_GetMaxLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLocator *op = static_cast<vtkLocator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaxLevel() :
      op->vtkLocator::GetMaxLevel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLocator_GetLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLocator *op = static_cast<vtkLocator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLevel() :
      op->vtkLocator::GetLevel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLocator_SetAutomatic(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAutomatic");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLocator *op = static_cast<vtkLocator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAutomatic(temp0);
    }
    else
    {
      op->vtkLocator::SetAutomatic(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLocator_GetAutomatic(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutomatic");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLocator *op = static_cast<vtkLocator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAutomatic() :
      op->vtkLocator::GetAutomatic());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLocator_AutomaticOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutomaticOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLocator *op = static_cast<vtkLocator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AutomaticOn();
    }
    else
    {
      op->vtkLocator::AutomaticOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLocator_AutomaticOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutomaticOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLocator *op = static_cast<vtkLocator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AutomaticOff();
    }
    else
    {
      op->vtkLocator::AutomaticOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLocator_SetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLocator *op = static_cast<vtkLocator *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTolerance(temp0);
    }
    else
    {
      op->vtkLocator::SetTolerance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLocator_GetToleranceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetToleranceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLocator *op = static_cast<vtkLocator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetToleranceMinValue() :
      op->vtkLocator::GetToleranceMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLocator_GetToleranceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetToleranceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLocator *op = static_cast<vtkLocator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetToleranceMaxValue() :
      op->vtkLocator::GetToleranceMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLocator_GetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLocator *op = static_cast<vtkLocator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTolerance() :
      op->vtkLocator::GetTolerance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLocator_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLocator *op = static_cast<vtkLocator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Update();
    }
    else
    {
      op->vtkLocator::Update();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLocator_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLocator *op = static_cast<vtkLocator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Initialize();
    }
    else
    {
      op->vtkLocator::Initialize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLocator_BuildLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLocator *op = static_cast<vtkLocator *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    op->BuildLocator();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLocator_FreeSearchStructure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FreeSearchStructure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLocator *op = static_cast<vtkLocator *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    op->FreeSearchStructure();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLocator_GenerateRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLocator *op = static_cast<vtkLocator *>(vp);

  int temp0;
  vtkPolyData *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkPolyData"))
  {
    op->GenerateRepresentation(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLocator_GetBuildTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBuildTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLocator *op = static_cast<vtkLocator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetBuildTime() :
      op->vtkLocator::GetBuildTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkLocator_Methods[] = {
  {"IsTypeOf", PyvtkLocator_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard type and print methods.\n"},
  {"IsA", PyvtkLocator_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard type and print methods.\n"},
  {"SafeDownCast", PyvtkLocator_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkLocator\nC++: static vtkLocator *SafeDownCast(vtkObjectBase *o)\n\nStandard type and print methods.\n"},
  {"NewInstance", PyvtkLocator_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkLocator\nC++: vtkLocator *NewInstance()\n\nStandard type and print methods.\n"},
  {"SetDataSet", PyvtkLocator_SetDataSet, METH_VARARGS,
   "V.SetDataSet(vtkDataSet)\nC++: virtual void SetDataSet(vtkDataSet *)\n\nBuild the locator from the points/cells defining this dataset.\n"},
  {"GetDataSet", PyvtkLocator_GetDataSet, METH_VARARGS,
   "V.GetDataSet() -> vtkDataSet\nC++: virtual vtkDataSet *GetDataSet()\n\nBuild the locator from the points/cells defining this dataset.\n"},
  {"SetMaxLevel", PyvtkLocator_SetMaxLevel, METH_VARARGS,
   "V.SetMaxLevel(int)\nC++: virtual void SetMaxLevel(int _arg)\n\nSet the maximum allowable level for the tree. If the Automatic\nivar is off, this will be the target depth of the locator.\nInitial value is 8.\n"},
  {"GetMaxLevelMinValue", PyvtkLocator_GetMaxLevelMinValue, METH_VARARGS,
   "V.GetMaxLevelMinValue() -> int\nC++: virtual int GetMaxLevelMinValue()\n\nSet the maximum allowable level for the tree. If the Automatic\nivar is off, this will be the target depth of the locator.\nInitial value is 8.\n"},
  {"GetMaxLevelMaxValue", PyvtkLocator_GetMaxLevelMaxValue, METH_VARARGS,
   "V.GetMaxLevelMaxValue() -> int\nC++: virtual int GetMaxLevelMaxValue()\n\nSet the maximum allowable level for the tree. If the Automatic\nivar is off, this will be the target depth of the locator.\nInitial value is 8.\n"},
  {"GetMaxLevel", PyvtkLocator_GetMaxLevel, METH_VARARGS,
   "V.GetMaxLevel() -> int\nC++: virtual int GetMaxLevel()\n\nSet the maximum allowable level for the tree. If the Automatic\nivar is off, this will be the target depth of the locator.\nInitial value is 8.\n"},
  {"GetLevel", PyvtkLocator_GetLevel, METH_VARARGS,
   "V.GetLevel() -> int\nC++: virtual int GetLevel()\n\nGet the level of the locator (determined automatically if\nAutomatic is true). The value of this ivar may change each time\nthe locator is built. Initial value is 8.\n"},
  {"SetAutomatic", PyvtkLocator_SetAutomatic, METH_VARARGS,
   "V.SetAutomatic(int)\nC++: virtual void SetAutomatic(vtkTypeBool _arg)\n\nBoolean controls whether locator depth/resolution of locator is\ncomputed automatically from average number of entities in bucket.\nIf not set, there will be an explicit method to control the\nconstruction of the locator (found in the subclass).\n"},
  {"GetAutomatic", PyvtkLocator_GetAutomatic, METH_VARARGS,
   "V.GetAutomatic() -> int\nC++: virtual vtkTypeBool GetAutomatic()\n\nBoolean controls whether locator depth/resolution of locator is\ncomputed automatically from average number of entities in bucket.\nIf not set, there will be an explicit method to control the\nconstruction of the locator (found in the subclass).\n"},
  {"AutomaticOn", PyvtkLocator_AutomaticOn, METH_VARARGS,
   "V.AutomaticOn()\nC++: virtual void AutomaticOn()\n\nBoolean controls whether locator depth/resolution of locator is\ncomputed automatically from average number of entities in bucket.\nIf not set, there will be an explicit method to control the\nconstruction of the locator (found in the subclass).\n"},
  {"AutomaticOff", PyvtkLocator_AutomaticOff, METH_VARARGS,
   "V.AutomaticOff()\nC++: virtual void AutomaticOff()\n\nBoolean controls whether locator depth/resolution of locator is\ncomputed automatically from average number of entities in bucket.\nIf not set, there will be an explicit method to control the\nconstruction of the locator (found in the subclass).\n"},
  {"SetTolerance", PyvtkLocator_SetTolerance, METH_VARARGS,
   "V.SetTolerance(float)\nC++: virtual void SetTolerance(double _arg)\n\nSpecify absolute tolerance (in world coordinates) for performing\ngeometric operations.\n"},
  {"GetToleranceMinValue", PyvtkLocator_GetToleranceMinValue, METH_VARARGS,
   "V.GetToleranceMinValue() -> float\nC++: virtual double GetToleranceMinValue()\n\nSpecify absolute tolerance (in world coordinates) for performing\ngeometric operations.\n"},
  {"GetToleranceMaxValue", PyvtkLocator_GetToleranceMaxValue, METH_VARARGS,
   "V.GetToleranceMaxValue() -> float\nC++: virtual double GetToleranceMaxValue()\n\nSpecify absolute tolerance (in world coordinates) for performing\ngeometric operations.\n"},
  {"GetTolerance", PyvtkLocator_GetTolerance, METH_VARARGS,
   "V.GetTolerance() -> float\nC++: virtual double GetTolerance()\n\nSpecify absolute tolerance (in world coordinates) for performing\ngeometric operations.\n"},
  {"Update", PyvtkLocator_Update, METH_VARARGS,
   "V.Update()\nC++: virtual void Update()\n\nCause the locator to rebuild itself if it or its input dataset\nhas changed.\n"},
  {"Initialize", PyvtkLocator_Initialize, METH_VARARGS,
   "V.Initialize()\nC++: virtual void Initialize()\n\nInitialize locator. Frees memory and resets object as\nappropriate.\n"},
  {"BuildLocator", PyvtkLocator_BuildLocator, METH_VARARGS,
   "V.BuildLocator()\nC++: virtual void BuildLocator()\n\nBuild the locator from the input dataset.\n"},
  {"FreeSearchStructure", PyvtkLocator_FreeSearchStructure, METH_VARARGS,
   "V.FreeSearchStructure()\nC++: virtual void FreeSearchStructure()\n\nFree the memory required for the spatial data structure.\n"},
  {"GenerateRepresentation", PyvtkLocator_GenerateRepresentation, METH_VARARGS,
   "V.GenerateRepresentation(int, vtkPolyData)\nC++: virtual void GenerateRepresentation(int level,\n    vtkPolyData *pd)\n\nMethod to build a representation at a particular level. Note that\nthe method GetLevel() returns the maximum number of levels\navailable for the tree. You must provide a vtkPolyData object\ninto which to place the data.\n"},
  {"GetBuildTime", PyvtkLocator_GetBuildTime, METH_VARARGS,
   "V.GetBuildTime() -> int\nC++: virtual vtkMTimeType GetBuildTime()\n\nReturn the time of the last data structure build.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkLocator_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonDataModelPython.vtkLocator", // tp_name
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
  PyvtkLocator_Doc, // tp_doc
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

PyObject *PyvtkLocator_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkLocator_Type, PyvtkLocator_Methods,
    "vtkLocator",
 nullptr);

  PyTypeObject *pytype = &PyvtkLocator_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkObject_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkLocator(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkLocator_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkLocator", o) != 0)
  {
    Py_DECREF(o);
  }

}

