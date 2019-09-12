// python wrapper for vtkPointsProjectedHull
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
#include "vtkPointsProjectedHull.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPointsProjectedHull(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPointsProjectedHull_ClassNew(); }

#ifndef DECLARED_PyvtkPoints_ClassNew
extern "C" { PyObject *PyvtkPoints_ClassNew(); }
#define DECLARED_PyvtkPoints_ClassNew
#endif

static const char *PyvtkPointsProjectedHull_Doc =
  "vtkPointsProjectedHull - the convex hull of the orthogonal\n   projection of the vtkPoints in the 3 coordinate directions\n\n"
  "Superclass: vtkPoints\n\n"
  "a subclass of vtkPoints, it maintains the counter clockwise\n"
  "   convex hull of the points (projected orthogonally in the\n"
  "   three coordinate directions) and has a method to\n"
  "   test for intersection of that hull with an axis aligned\n"
  "   rectangle.  This is used for intersection tests of 3D volumes.\n\n";


static PyObject *
PyvtkPointsProjectedHull_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPointsProjectedHull::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointsProjectedHull_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointsProjectedHull *op = static_cast<vtkPointsProjectedHull *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPointsProjectedHull::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointsProjectedHull_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPointsProjectedHull *tempr = vtkPointsProjectedHull::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointsProjectedHull_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointsProjectedHull *op = static_cast<vtkPointsProjectedHull *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPointsProjectedHull *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPointsProjectedHull::NewInstance());

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
PyvtkPointsProjectedHull_RectangleIntersectionX_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RectangleIntersectionX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointsProjectedHull *op = static_cast<vtkPointsProjectedHull *>(vp);

  vtkPoints *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPoints"))
  {
    int tempr = (ap.IsBound() ?
      op->RectangleIntersectionX(temp0) :
      op->vtkPointsProjectedHull::RectangleIntersectionX(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPointsProjectedHull_RectangleIntersectionX_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RectangleIntersectionX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointsProjectedHull *op = static_cast<vtkPointsProjectedHull *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    int tempr = (ap.IsBound() ?
      op->RectangleIntersectionX(temp0, temp1, temp2, temp3) :
      op->vtkPointsProjectedHull::RectangleIntersectionX(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPointsProjectedHull_RectangleIntersectionX(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkPointsProjectedHull_RectangleIntersectionX_s1(self, args);
    case 4:
      return PyvtkPointsProjectedHull_RectangleIntersectionX_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "RectangleIntersectionX");
  return nullptr;
}



static PyObject *
PyvtkPointsProjectedHull_RectangleIntersectionY_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RectangleIntersectionY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointsProjectedHull *op = static_cast<vtkPointsProjectedHull *>(vp);

  vtkPoints *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPoints"))
  {
    int tempr = (ap.IsBound() ?
      op->RectangleIntersectionY(temp0) :
      op->vtkPointsProjectedHull::RectangleIntersectionY(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPointsProjectedHull_RectangleIntersectionY_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RectangleIntersectionY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointsProjectedHull *op = static_cast<vtkPointsProjectedHull *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    int tempr = (ap.IsBound() ?
      op->RectangleIntersectionY(temp0, temp1, temp2, temp3) :
      op->vtkPointsProjectedHull::RectangleIntersectionY(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPointsProjectedHull_RectangleIntersectionY(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkPointsProjectedHull_RectangleIntersectionY_s1(self, args);
    case 4:
      return PyvtkPointsProjectedHull_RectangleIntersectionY_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "RectangleIntersectionY");
  return nullptr;
}



static PyObject *
PyvtkPointsProjectedHull_RectangleIntersectionZ_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RectangleIntersectionZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointsProjectedHull *op = static_cast<vtkPointsProjectedHull *>(vp);

  vtkPoints *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPoints"))
  {
    int tempr = (ap.IsBound() ?
      op->RectangleIntersectionZ(temp0) :
      op->vtkPointsProjectedHull::RectangleIntersectionZ(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPointsProjectedHull_RectangleIntersectionZ_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RectangleIntersectionZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointsProjectedHull *op = static_cast<vtkPointsProjectedHull *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    int tempr = (ap.IsBound() ?
      op->RectangleIntersectionZ(temp0, temp1, temp2, temp3) :
      op->vtkPointsProjectedHull::RectangleIntersectionZ(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPointsProjectedHull_RectangleIntersectionZ(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkPointsProjectedHull_RectangleIntersectionZ_s1(self, args);
    case 4:
      return PyvtkPointsProjectedHull_RectangleIntersectionZ_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "RectangleIntersectionZ");
  return nullptr;
}



static PyObject *
PyvtkPointsProjectedHull_GetCCWHullX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCCWHullX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointsProjectedHull *op = static_cast<vtkPointsProjectedHull *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
  {
    ap.Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->GetCCWHullX(temp0, temp1) :
      op->vtkPointsProjectedHull::GetCCWHullX(temp0, temp1));

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointsProjectedHull_GetCCWHullY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCCWHullY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointsProjectedHull *op = static_cast<vtkPointsProjectedHull *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
  {
    ap.Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->GetCCWHullY(temp0, temp1) :
      op->vtkPointsProjectedHull::GetCCWHullY(temp0, temp1));

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointsProjectedHull_GetCCWHullZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCCWHullZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointsProjectedHull *op = static_cast<vtkPointsProjectedHull *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
  {
    ap.Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->GetCCWHullZ(temp0, temp1) :
      op->vtkPointsProjectedHull::GetCCWHullZ(temp0, temp1));

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointsProjectedHull_GetSizeCCWHullX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSizeCCWHullX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointsProjectedHull *op = static_cast<vtkPointsProjectedHull *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSizeCCWHullX() :
      op->vtkPointsProjectedHull::GetSizeCCWHullX());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointsProjectedHull_GetSizeCCWHullY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSizeCCWHullY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointsProjectedHull *op = static_cast<vtkPointsProjectedHull *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSizeCCWHullY() :
      op->vtkPointsProjectedHull::GetSizeCCWHullY());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointsProjectedHull_GetSizeCCWHullZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSizeCCWHullZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointsProjectedHull *op = static_cast<vtkPointsProjectedHull *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSizeCCWHullZ() :
      op->vtkPointsProjectedHull::GetSizeCCWHullZ());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointsProjectedHull_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointsProjectedHull *op = static_cast<vtkPointsProjectedHull *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Initialize();
    }
    else
    {
      op->vtkPointsProjectedHull::Initialize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointsProjectedHull_Reset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointsProjectedHull *op = static_cast<vtkPointsProjectedHull *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Reset();
    }
    else
    {
      op->vtkPointsProjectedHull::Reset();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointsProjectedHull_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointsProjectedHull *op = static_cast<vtkPointsProjectedHull *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Update();
    }
    else
    {
      op->vtkPointsProjectedHull::Update();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPointsProjectedHull_Methods[] = {
  {"IsTypeOf", PyvtkPointsProjectedHull_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPointsProjectedHull_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPointsProjectedHull_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPointsProjectedHull\nC++: static vtkPointsProjectedHull *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPointsProjectedHull_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPointsProjectedHull\nC++: vtkPointsProjectedHull *NewInstance()\n\n"},
  {"RectangleIntersectionX", PyvtkPointsProjectedHull_RectangleIntersectionX, METH_VARARGS,
   "V.RectangleIntersectionX(vtkPoints) -> int\nC++: int RectangleIntersectionX(vtkPoints *R)\nV.RectangleIntersectionX(float, float, float, float) -> int\nC++: int RectangleIntersectionX(double ymin, double ymax,\n    double zmin, double zmax)\n\ndetermine whether the resulting rectangle intersects the convex\nhull of the projection of the points along that axis.\n"},
  {"RectangleIntersectionY", PyvtkPointsProjectedHull_RectangleIntersectionY, METH_VARARGS,
   "V.RectangleIntersectionY(vtkPoints) -> int\nC++: int RectangleIntersectionY(vtkPoints *R)\nV.RectangleIntersectionY(float, float, float, float) -> int\nC++: int RectangleIntersectionY(double zmin, double zmax,\n    double xmin, double xmax)\n\nof the parallel projection along the Y axis of the points\n"},
  {"RectangleIntersectionZ", PyvtkPointsProjectedHull_RectangleIntersectionZ, METH_VARARGS,
   "V.RectangleIntersectionZ(vtkPoints) -> int\nC++: int RectangleIntersectionZ(vtkPoints *R)\nV.RectangleIntersectionZ(float, float, float, float) -> int\nC++: int RectangleIntersectionZ(double xmin, double xmax,\n    double ymin, double ymax)\n\nof the parallel projection along the Z axis of the points\n"},
  {"GetCCWHullX", PyvtkPointsProjectedHull_GetCCWHullX, METH_VARARGS,
   "V.GetCCWHullX([float, ...], int) -> int\nC++: int GetCCWHullX(double *pts, int len)\n\n"},
  {"GetCCWHullY", PyvtkPointsProjectedHull_GetCCWHullY, METH_VARARGS,
   "V.GetCCWHullY([float, ...], int) -> int\nC++: int GetCCWHullY(double *pts, int len)\n\n"},
  {"GetCCWHullZ", PyvtkPointsProjectedHull_GetCCWHullZ, METH_VARARGS,
   "V.GetCCWHullZ([float, ...], int) -> int\nC++: int GetCCWHullZ(double *pts, int len)\n\n"},
  {"GetSizeCCWHullX", PyvtkPointsProjectedHull_GetSizeCCWHullX, METH_VARARGS,
   "V.GetSizeCCWHullX() -> int\nC++: int GetSizeCCWHullX()\n\nReturns the number of points in the convex hull of the projection\nof the points down the positive x-axis\n"},
  {"GetSizeCCWHullY", PyvtkPointsProjectedHull_GetSizeCCWHullY, METH_VARARGS,
   "V.GetSizeCCWHullY() -> int\nC++: int GetSizeCCWHullY()\n\nReturns the number of points in the convex hull of the projection\nof the points down the positive y-axis\n"},
  {"GetSizeCCWHullZ", PyvtkPointsProjectedHull_GetSizeCCWHullZ, METH_VARARGS,
   "V.GetSizeCCWHullZ() -> int\nC++: int GetSizeCCWHullZ()\n\nReturns the number of points in the convex hull of the projection\nof the points down the positive z-axis\n"},
  {"Initialize", PyvtkPointsProjectedHull_Initialize, METH_VARARGS,
   "V.Initialize()\nC++: void Initialize() override;\n\nReturn object to instantiated state.\n"},
  {"Reset", PyvtkPointsProjectedHull_Reset, METH_VARARGS,
   "V.Reset()\nC++: void Reset() override;\n\nMake object look empty but do not delete memory.\n"},
  {"Update", PyvtkPointsProjectedHull_Update, METH_VARARGS,
   "V.Update()\nC++: void Update()\n\nForces recalculation of convex hulls, use this if you delete/add\npoints\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPointsProjectedHull_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonDataModelPython.vtkPointsProjectedHull", // tp_name
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
  PyvtkPointsProjectedHull_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPointsProjectedHull_StaticNew()
{
  return vtkPointsProjectedHull::New();
}

PyObject *PyvtkPointsProjectedHull_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPointsProjectedHull_Type, PyvtkPointsProjectedHull_Methods,
    "vtkPointsProjectedHull",
 &PyvtkPointsProjectedHull_StaticNew);

  PyTypeObject *pytype = &PyvtkPointsProjectedHull_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPoints_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPointsProjectedHull(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPointsProjectedHull_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPointsProjectedHull", o) != 0)
  {
    Py_DECREF(o);
  }

}

