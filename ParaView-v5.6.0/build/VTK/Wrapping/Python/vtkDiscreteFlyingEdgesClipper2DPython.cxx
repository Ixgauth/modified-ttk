// python wrapper for vtkDiscreteFlyingEdgesClipper2D
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
#include "vtkDiscreteFlyingEdgesClipper2D.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkDiscreteFlyingEdgesClipper2D(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkDiscreteFlyingEdgesClipper2D_ClassNew(); }

#ifndef DECLARED_PyvtkPolyDataAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPolyDataAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPolyDataAlgorithm_ClassNew
#endif

static const char *PyvtkDiscreteFlyingEdgesClipper2D_Doc =
  "vtkDiscreteFlyingEdgesClipper2D - generate filled regions from\nsegmented 2D image data\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkDiscreteFlyingEdgesClipper2D creates filled polygons from a label\n"
  "map (e.g., segmented image) using a variation of the flying edges\n"
  "algorithm adapted for 2D clipping. The input is a 2D image where each\n"
  "pixel is labeled (integer labels are preferred to real values), and\n"
  "the output data is polygonal data representing labeled regions. (Note\n"
  "that on output each region [corresponding to a different contour\n"
  "value] may share points on a shared boundary.)\n\n"
  "While this filter is similar to a contouring operation, label maps do\n"
  "not provide continuous function values meaning that usual\n"
  "interpolation along edges is not possible. Instead, when the edge\n"
  "endpoints are labeled in differing regions, the edge is split at its\n"
  "midpoint. In addition, besides producing intersection points at the\n"
  "mid-point of edges, the filter may also generate points interior to\n"
  "the pixel cells. For example, if the four vertices of a pixel cell\n"
  "are labeled with different regions, then an interior point is created\n"
  "and four rectangular \"regions\" are produced.\n\n"
  "Note that one nice feature of this filter is that algorithm execution\n"
  "occurs only one time no matter the number of contour values. In many\n"
  "contouring-like algorithms, each separate contour value requires an\n"
  "additional algorithm execution with a new contour value. So in this\n"
  "filter large numbers of contour values do not significantly affect\n"
  "overall speed.\n\n"
  "@warning This filter is specialized to 2D images.\n\n"
  "@warning\n"
  "This class has been threaded with vtkSMPTools. Using TBB or other\n"
  "non-sequential type (set in the CMake variable\n"
  "VTK_SMP_IMPLEMENTATION_TYPE) may improve performance significantly.\n\n"
  "@sa\n"
  "vtkDiscreteFlyingEdges2D vtkDiscreteMarchingCubes\n"
  "vtkContourLoopExtraction vtkFlyingEdges2D vtkFlyingEdges3D\n\n";


static PyObject *
PyvtkDiscreteFlyingEdgesClipper2D_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDiscreteFlyingEdgesClipper2D::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDiscreteFlyingEdgesClipper2D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscreteFlyingEdgesClipper2D *op = static_cast<vtkDiscreteFlyingEdgesClipper2D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDiscreteFlyingEdgesClipper2D::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDiscreteFlyingEdgesClipper2D_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDiscreteFlyingEdgesClipper2D *tempr = vtkDiscreteFlyingEdgesClipper2D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDiscreteFlyingEdgesClipper2D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscreteFlyingEdgesClipper2D *op = static_cast<vtkDiscreteFlyingEdgesClipper2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDiscreteFlyingEdgesClipper2D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDiscreteFlyingEdgesClipper2D::NewInstance());

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
PyvtkDiscreteFlyingEdgesClipper2D_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscreteFlyingEdgesClipper2D *op = static_cast<vtkDiscreteFlyingEdgesClipper2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkDiscreteFlyingEdgesClipper2D::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDiscreteFlyingEdgesClipper2D_SetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscreteFlyingEdgesClipper2D *op = static_cast<vtkDiscreteFlyingEdgesClipper2D *>(vp);

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
      op->vtkDiscreteFlyingEdgesClipper2D::SetValue(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDiscreteFlyingEdgesClipper2D_GetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscreteFlyingEdgesClipper2D *op = static_cast<vtkDiscreteFlyingEdgesClipper2D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double tempr = (ap.IsBound() ?
      op->GetValue(temp0) :
      op->vtkDiscreteFlyingEdgesClipper2D::GetValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDiscreteFlyingEdgesClipper2D_GetValues_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscreteFlyingEdgesClipper2D *op = static_cast<vtkDiscreteFlyingEdgesClipper2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetValues() :
      op->vtkDiscreteFlyingEdgesClipper2D::GetValues());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDiscreteFlyingEdgesClipper2D_GetValues_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscreteFlyingEdgesClipper2D *op = static_cast<vtkDiscreteFlyingEdgesClipper2D *>(vp);

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
      op->vtkDiscreteFlyingEdgesClipper2D::GetValues(temp0);
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
PyvtkDiscreteFlyingEdgesClipper2D_GetValues(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkDiscreteFlyingEdgesClipper2D_GetValues_s1(self, args);
    case 1:
      return PyvtkDiscreteFlyingEdgesClipper2D_GetValues_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetValues");
  return nullptr;
}



static PyObject *
PyvtkDiscreteFlyingEdgesClipper2D_SetNumberOfContours(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfContours");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscreteFlyingEdgesClipper2D *op = static_cast<vtkDiscreteFlyingEdgesClipper2D *>(vp);

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
      op->vtkDiscreteFlyingEdgesClipper2D::SetNumberOfContours(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDiscreteFlyingEdgesClipper2D_GetNumberOfContours(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfContours");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscreteFlyingEdgesClipper2D *op = static_cast<vtkDiscreteFlyingEdgesClipper2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfContours() :
      op->vtkDiscreteFlyingEdgesClipper2D::GetNumberOfContours());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDiscreteFlyingEdgesClipper2D_GenerateValues_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscreteFlyingEdgesClipper2D *op = static_cast<vtkDiscreteFlyingEdgesClipper2D *>(vp);

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
      op->vtkDiscreteFlyingEdgesClipper2D::GenerateValues(temp0, temp1);
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
PyvtkDiscreteFlyingEdgesClipper2D_GenerateValues_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscreteFlyingEdgesClipper2D *op = static_cast<vtkDiscreteFlyingEdgesClipper2D *>(vp);

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
      op->vtkDiscreteFlyingEdgesClipper2D::GenerateValues(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDiscreteFlyingEdgesClipper2D_GenerateValues(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkDiscreteFlyingEdgesClipper2D_GenerateValues_s1(self, args);
    case 3:
      return PyvtkDiscreteFlyingEdgesClipper2D_GenerateValues_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GenerateValues");
  return nullptr;
}



static PyObject *
PyvtkDiscreteFlyingEdgesClipper2D_SetComputeScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscreteFlyingEdgesClipper2D *op = static_cast<vtkDiscreteFlyingEdgesClipper2D *>(vp);

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
      op->vtkDiscreteFlyingEdgesClipper2D::SetComputeScalars(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDiscreteFlyingEdgesClipper2D_GetComputeScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputeScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscreteFlyingEdgesClipper2D *op = static_cast<vtkDiscreteFlyingEdgesClipper2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetComputeScalars() :
      op->vtkDiscreteFlyingEdgesClipper2D::GetComputeScalars());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDiscreteFlyingEdgesClipper2D_ComputeScalarsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeScalarsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscreteFlyingEdgesClipper2D *op = static_cast<vtkDiscreteFlyingEdgesClipper2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeScalarsOn();
    }
    else
    {
      op->vtkDiscreteFlyingEdgesClipper2D::ComputeScalarsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDiscreteFlyingEdgesClipper2D_ComputeScalarsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeScalarsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscreteFlyingEdgesClipper2D *op = static_cast<vtkDiscreteFlyingEdgesClipper2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeScalarsOff();
    }
    else
    {
      op->vtkDiscreteFlyingEdgesClipper2D::ComputeScalarsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDiscreteFlyingEdgesClipper2D_SetArrayComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArrayComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscreteFlyingEdgesClipper2D *op = static_cast<vtkDiscreteFlyingEdgesClipper2D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetArrayComponent(temp0);
    }
    else
    {
      op->vtkDiscreteFlyingEdgesClipper2D::SetArrayComponent(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDiscreteFlyingEdgesClipper2D_GetArrayComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscreteFlyingEdgesClipper2D *op = static_cast<vtkDiscreteFlyingEdgesClipper2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetArrayComponent() :
      op->vtkDiscreteFlyingEdgesClipper2D::GetArrayComponent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkDiscreteFlyingEdgesClipper2D_Methods[] = {
  {"IsTypeOf", PyvtkDiscreteFlyingEdgesClipper2D_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard methods for instantiation, printing, and type\ninformation.\n"},
  {"IsA", PyvtkDiscreteFlyingEdgesClipper2D_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard methods for instantiation, printing, and type\ninformation.\n"},
  {"SafeDownCast", PyvtkDiscreteFlyingEdgesClipper2D_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkDiscreteFlyingEdgesClipper2D\nC++: static vtkDiscreteFlyingEdgesClipper2D *SafeDownCast(\n    vtkObjectBase *o)\n\nStandard methods for instantiation, printing, and type\ninformation.\n"},
  {"NewInstance", PyvtkDiscreteFlyingEdgesClipper2D_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkDiscreteFlyingEdgesClipper2D\nC++: vtkDiscreteFlyingEdgesClipper2D *NewInstance()\n\nStandard methods for instantiation, printing, and type\ninformation.\n"},
  {"GetMTime", PyvtkDiscreteFlyingEdgesClipper2D_GetMTime, METH_VARARGS,
   "V.GetMTime() -> int\nC++: vtkMTimeType GetMTime() override;\n\nThe modified time is a function of the contour values because we\ndelegate to vtkContourValues.\n"},
  {"SetValue", PyvtkDiscreteFlyingEdgesClipper2D_SetValue, METH_VARARGS,
   "V.SetValue(int, float)\nC++: void SetValue(int i, double value)\n\nSet a particular contour value at contour number i. The index i\nranges between 0 <= i <NumberOfContours. (Note: while contour\nvalues are expressed as doubles, the underlying scalar data may\nbe a different type. During execution the contour values are\nstatic cast to the type of the scalar values.)\n"},
  {"GetValue", PyvtkDiscreteFlyingEdgesClipper2D_GetValue, METH_VARARGS,
   "V.GetValue(int) -> float\nC++: double GetValue(int i)\n\nGet the ith contour value.\n"},
  {"GetValues", PyvtkDiscreteFlyingEdgesClipper2D_GetValues, METH_VARARGS,
   "V.GetValues() -> (float, ...)\nC++: double *GetValues()\nV.GetValues([float, ...])\nC++: void GetValues(double *contourValues)\n\nGet a pointer to an array of contour values. There will be\nGetNumberOfContours() values in the list.\n"},
  {"SetNumberOfContours", PyvtkDiscreteFlyingEdgesClipper2D_SetNumberOfContours, METH_VARARGS,
   "V.SetNumberOfContours(int)\nC++: void SetNumberOfContours(int number)\n\nSet the number of contours to place into the list. You only\nreally need to use this method to reduce list size. The method\nSetValue() will automatically increase list size as needed.\n"},
  {"GetNumberOfContours", PyvtkDiscreteFlyingEdgesClipper2D_GetNumberOfContours, METH_VARARGS,
   "V.GetNumberOfContours() -> int\nC++: int GetNumberOfContours()\n\nGet the number of contours in the list of contour values.\n"},
  {"GenerateValues", PyvtkDiscreteFlyingEdgesClipper2D_GenerateValues, METH_VARARGS,
   "V.GenerateValues(int, [float, float])\nC++: void GenerateValues(int numContours, double range[2])\nV.GenerateValues(int, float, float)\nC++: void GenerateValues(int numContours, double rangeStart,\n    double rangeEnd)\n\nGenerate numContours equally spaced contour values between the\nspecified range. Contour values will include min/max range\nvalues.\n"},
  {"SetComputeScalars", PyvtkDiscreteFlyingEdgesClipper2D_SetComputeScalars, METH_VARARGS,
   "V.SetComputeScalars(int)\nC++: virtual void SetComputeScalars(int _arg)\n\nOption to set the cell scalars of the output. The scalars will be\nthe contour values. By default this flag is on.\n"},
  {"GetComputeScalars", PyvtkDiscreteFlyingEdgesClipper2D_GetComputeScalars, METH_VARARGS,
   "V.GetComputeScalars() -> int\nC++: virtual int GetComputeScalars()\n\nOption to set the cell scalars of the output. The scalars will be\nthe contour values. By default this flag is on.\n"},
  {"ComputeScalarsOn", PyvtkDiscreteFlyingEdgesClipper2D_ComputeScalarsOn, METH_VARARGS,
   "V.ComputeScalarsOn()\nC++: virtual void ComputeScalarsOn()\n\nOption to set the cell scalars of the output. The scalars will be\nthe contour values. By default this flag is on.\n"},
  {"ComputeScalarsOff", PyvtkDiscreteFlyingEdgesClipper2D_ComputeScalarsOff, METH_VARARGS,
   "V.ComputeScalarsOff()\nC++: virtual void ComputeScalarsOff()\n\nOption to set the cell scalars of the output. The scalars will be\nthe contour values. By default this flag is on.\n"},
  {"SetArrayComponent", PyvtkDiscreteFlyingEdgesClipper2D_SetArrayComponent, METH_VARARGS,
   "V.SetArrayComponent(int)\nC++: virtual void SetArrayComponent(int _arg)\n\nSet/get which component of a multi-component scalar array to\ncontour on; defaults to 0.\n"},
  {"GetArrayComponent", PyvtkDiscreteFlyingEdgesClipper2D_GetArrayComponent, METH_VARARGS,
   "V.GetArrayComponent() -> int\nC++: virtual int GetArrayComponent()\n\nSet/get which component of a multi-component scalar array to\ncontour on; defaults to 0.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkDiscreteFlyingEdgesClipper2D_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersGeneralPython.vtkDiscreteFlyingEdgesClipper2D", // tp_name
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
  PyvtkDiscreteFlyingEdgesClipper2D_Doc, // tp_doc
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

static vtkObjectBase *PyvtkDiscreteFlyingEdgesClipper2D_StaticNew()
{
  return vtkDiscreteFlyingEdgesClipper2D::New();
}

PyObject *PyvtkDiscreteFlyingEdgesClipper2D_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkDiscreteFlyingEdgesClipper2D_Type, PyvtkDiscreteFlyingEdgesClipper2D_Methods,
    "vtkDiscreteFlyingEdgesClipper2D",
 &PyvtkDiscreteFlyingEdgesClipper2D_StaticNew);

  PyTypeObject *pytype = &PyvtkDiscreteFlyingEdgesClipper2D_Type;

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

void PyVTKAddFile_vtkDiscreteFlyingEdgesClipper2D(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkDiscreteFlyingEdgesClipper2D_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkDiscreteFlyingEdgesClipper2D", o) != 0)
  {
    Py_DECREF(o);
  }

}

