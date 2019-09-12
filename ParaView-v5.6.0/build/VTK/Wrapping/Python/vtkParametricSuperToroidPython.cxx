// python wrapper for vtkParametricSuperToroid
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
#include "vtkParametricSuperToroid.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkParametricSuperToroid(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkParametricSuperToroid_ClassNew(); }

#ifndef DECLARED_PyvtkParametricFunction_ClassNew
extern "C" { PyObject *PyvtkParametricFunction_ClassNew(); }
#define DECLARED_PyvtkParametricFunction_ClassNew
#endif

static const char *PyvtkParametricSuperToroid_Doc =
  "vtkParametricSuperToroid - Generate a supertoroid.\n\n"
  "Superclass: vtkParametricFunction\n\n"
  "vtkParametricSuperToroid generates a supertoroid.  Essentially a\n"
  "supertoroid is a torus with the sine and cosine terms raised to a\n"
  "power. A supertoroid is a versatile primitive that is controlled by\n"
  "four parameters r0, r1, n1 and n2. r0, r1 determine the type of torus\n"
  "whilst the value of n1 determines the shape of the torus ring and n2\n"
  "determines the shape of the cross section of the ring. It is the\n"
  "different values of these powers which give rise to a family of 3D\n"
  "shapes that are all basically toroidal in shape.\n\n"
  "For further information about this surface, please consult the\n"
  "technical description \"Parametric surfaces\" in\n"
  "http://www.vtk.org/publications in the \"VTK Technical Documents\"\n"
  "section in the VTk.org web pages.\n\n"
  "Also see: http://paulbourke.net/geometry/torus/#super.\n\n"
  "@warning\n"
  "Care needs to be taken specifying the bounds correctly. You may need\n"
  "to carefully adjust MinimumU, MinimumV, MaximumU, MaximumV.\n\n"
  "@par Thanks: Andrew Maclean andrew.amaclean@gmail.com for creating\n"
  "and contributing the class.\n\n";


static PyObject *
PyvtkParametricSuperToroid_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkParametricSuperToroid::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricSuperToroid_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricSuperToroid *op = static_cast<vtkParametricSuperToroid *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkParametricSuperToroid::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricSuperToroid_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkParametricSuperToroid *tempr = vtkParametricSuperToroid::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricSuperToroid_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricSuperToroid *op = static_cast<vtkParametricSuperToroid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkParametricSuperToroid *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkParametricSuperToroid::NewInstance());

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
PyvtkParametricSuperToroid_GetDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricSuperToroid *op = static_cast<vtkParametricSuperToroid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDimension() :
      op->vtkParametricSuperToroid::GetDimension());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricSuperToroid_SetRingRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRingRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricSuperToroid *op = static_cast<vtkParametricSuperToroid *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRingRadius(temp0);
    }
    else
    {
      op->vtkParametricSuperToroid::SetRingRadius(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricSuperToroid_GetRingRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRingRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricSuperToroid *op = static_cast<vtkParametricSuperToroid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRingRadius() :
      op->vtkParametricSuperToroid::GetRingRadius());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricSuperToroid_SetCrossSectionRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCrossSectionRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricSuperToroid *op = static_cast<vtkParametricSuperToroid *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCrossSectionRadius(temp0);
    }
    else
    {
      op->vtkParametricSuperToroid::SetCrossSectionRadius(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricSuperToroid_GetCrossSectionRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCrossSectionRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricSuperToroid *op = static_cast<vtkParametricSuperToroid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetCrossSectionRadius() :
      op->vtkParametricSuperToroid::GetCrossSectionRadius());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricSuperToroid_SetXRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricSuperToroid *op = static_cast<vtkParametricSuperToroid *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetXRadius(temp0);
    }
    else
    {
      op->vtkParametricSuperToroid::SetXRadius(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricSuperToroid_GetXRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricSuperToroid *op = static_cast<vtkParametricSuperToroid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetXRadius() :
      op->vtkParametricSuperToroid::GetXRadius());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricSuperToroid_SetYRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricSuperToroid *op = static_cast<vtkParametricSuperToroid *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetYRadius(temp0);
    }
    else
    {
      op->vtkParametricSuperToroid::SetYRadius(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricSuperToroid_GetYRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricSuperToroid *op = static_cast<vtkParametricSuperToroid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetYRadius() :
      op->vtkParametricSuperToroid::GetYRadius());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricSuperToroid_SetZRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricSuperToroid *op = static_cast<vtkParametricSuperToroid *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetZRadius(temp0);
    }
    else
    {
      op->vtkParametricSuperToroid::SetZRadius(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricSuperToroid_GetZRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricSuperToroid *op = static_cast<vtkParametricSuperToroid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetZRadius() :
      op->vtkParametricSuperToroid::GetZRadius());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricSuperToroid_SetN1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetN1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricSuperToroid *op = static_cast<vtkParametricSuperToroid *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetN1(temp0);
    }
    else
    {
      op->vtkParametricSuperToroid::SetN1(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricSuperToroid_GetN1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetN1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricSuperToroid *op = static_cast<vtkParametricSuperToroid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetN1() :
      op->vtkParametricSuperToroid::GetN1());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricSuperToroid_SetN2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetN2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricSuperToroid *op = static_cast<vtkParametricSuperToroid *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetN2(temp0);
    }
    else
    {
      op->vtkParametricSuperToroid::SetN2(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricSuperToroid_GetN2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetN2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricSuperToroid *op = static_cast<vtkParametricSuperToroid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetN2() :
      op->vtkParametricSuperToroid::GetN2());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricSuperToroid_Evaluate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Evaluate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricSuperToroid *op = static_cast<vtkParametricSuperToroid *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  const size_t size2 = 9;
  double temp2[9];
  double save2[9];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
  {
    ap.Save(temp0, save0, size0);
    ap.Save(temp1, save1, size1);
    ap.Save(temp2, save2, size2);

    if (ap.IsBound())
    {
      op->Evaluate(temp0, temp1, temp2);
    }
    else
    {
      op->vtkParametricSuperToroid::Evaluate(temp0, temp1, temp2);
    }

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (ap.HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricSuperToroid_EvaluateScalar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateScalar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricSuperToroid *op = static_cast<vtkParametricSuperToroid *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  const size_t size2 = 9;
  double temp2[9];
  double save2[9];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
  {
    ap.Save(temp0, save0, size0);
    ap.Save(temp1, save1, size1);
    ap.Save(temp2, save2, size2);

    double tempr = (ap.IsBound() ?
      op->EvaluateScalar(temp0, temp1, temp2) :
      op->vtkParametricSuperToroid::EvaluateScalar(temp0, temp1, temp2));

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (ap.HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkParametricSuperToroid_Methods[] = {
  {"IsTypeOf", PyvtkParametricSuperToroid_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkParametricSuperToroid_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkParametricSuperToroid_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkParametricSuperToroid\nC++: static vtkParametricSuperToroid *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkParametricSuperToroid_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkParametricSuperToroid\nC++: vtkParametricSuperToroid *NewInstance()\n\n"},
  {"GetDimension", PyvtkParametricSuperToroid_GetDimension, METH_VARARGS,
   "V.GetDimension() -> int\nC++: int GetDimension() override;\n\nReturn the parametric dimension of the class.\n"},
  {"SetRingRadius", PyvtkParametricSuperToroid_SetRingRadius, METH_VARARGS,
   "V.SetRingRadius(float)\nC++: virtual void SetRingRadius(double _arg)\n\nSet/Get the radius from the center to the middle of the ring of\nthe supertoroid. Default is 1.\n"},
  {"GetRingRadius", PyvtkParametricSuperToroid_GetRingRadius, METH_VARARGS,
   "V.GetRingRadius() -> float\nC++: virtual double GetRingRadius()\n\nSet/Get the radius from the center to the middle of the ring of\nthe supertoroid. Default is 1.\n"},
  {"SetCrossSectionRadius", PyvtkParametricSuperToroid_SetCrossSectionRadius, METH_VARARGS,
   "V.SetCrossSectionRadius(float)\nC++: virtual void SetCrossSectionRadius(double _arg)\n\nSet/Get the radius of the cross section of ring of the\nsupertoroid. Default = 0.5.\n"},
  {"GetCrossSectionRadius", PyvtkParametricSuperToroid_GetCrossSectionRadius, METH_VARARGS,
   "V.GetCrossSectionRadius() -> float\nC++: virtual double GetCrossSectionRadius()\n\nSet/Get the radius of the cross section of ring of the\nsupertoroid. Default = 0.5.\n"},
  {"SetXRadius", PyvtkParametricSuperToroid_SetXRadius, METH_VARARGS,
   "V.SetXRadius(float)\nC++: virtual void SetXRadius(double _arg)\n\nSet/Get the scaling factor for the x-axis. Default is 1.\n"},
  {"GetXRadius", PyvtkParametricSuperToroid_GetXRadius, METH_VARARGS,
   "V.GetXRadius() -> float\nC++: virtual double GetXRadius()\n\nSet/Get the scaling factor for the x-axis. Default is 1.\n"},
  {"SetYRadius", PyvtkParametricSuperToroid_SetYRadius, METH_VARARGS,
   "V.SetYRadius(float)\nC++: virtual void SetYRadius(double _arg)\n\nSet/Get the scaling factor for the y-axis. Default is 1.\n"},
  {"GetYRadius", PyvtkParametricSuperToroid_GetYRadius, METH_VARARGS,
   "V.GetYRadius() -> float\nC++: virtual double GetYRadius()\n\nSet/Get the scaling factor for the y-axis. Default is 1.\n"},
  {"SetZRadius", PyvtkParametricSuperToroid_SetZRadius, METH_VARARGS,
   "V.SetZRadius(float)\nC++: virtual void SetZRadius(double _arg)\n\nSet/Get the scaling factor for the z-axis. Default is 1.\n"},
  {"GetZRadius", PyvtkParametricSuperToroid_GetZRadius, METH_VARARGS,
   "V.GetZRadius() -> float\nC++: virtual double GetZRadius()\n\nSet/Get the scaling factor for the z-axis. Default is 1.\n"},
  {"SetN1", PyvtkParametricSuperToroid_SetN1, METH_VARARGS,
   "V.SetN1(float)\nC++: virtual void SetN1(double _arg)\n\nSet/Get the shape of the torus ring.  Default is 1.\n"},
  {"GetN1", PyvtkParametricSuperToroid_GetN1, METH_VARARGS,
   "V.GetN1() -> float\nC++: virtual double GetN1()\n\nSet/Get the shape of the torus ring.  Default is 1.\n"},
  {"SetN2", PyvtkParametricSuperToroid_SetN2, METH_VARARGS,
   "V.SetN2(float)\nC++: virtual void SetN2(double _arg)\n\nSet/Get the shape of the cross section of the ring. Default is 1.\n"},
  {"GetN2", PyvtkParametricSuperToroid_GetN2, METH_VARARGS,
   "V.GetN2() -> float\nC++: virtual double GetN2()\n\nSet/Get the shape of the cross section of the ring. Default is 1.\n"},
  {"Evaluate", PyvtkParametricSuperToroid_Evaluate, METH_VARARGS,
   "V.Evaluate([float, float, float], [float, float, float], [float,\n    float, float, float, float, float, float, float, float])\nC++: void Evaluate(double uvw[3], double Pt[3], double Duvw[9])\n    override;\n\nA supertoroid.\n\n* This function performs the mapping $f(u,v) \\rightarrow (x,y,x)\n  $, returning it\n* as Pt. It also returns the partial derivatives Du and Dv.\n* $Pt = (x, y, z), Du = (dx/du, dy/du, dz/du), Dv = (dx/dv,\n  dy/dv, dz/dv) $ .\n* Then the normal is $N = Du X Dv $ .\n"},
  {"EvaluateScalar", PyvtkParametricSuperToroid_EvaluateScalar, METH_VARARGS,
   "V.EvaluateScalar([float, float, float], [float, float, float],\n    [float, float, float, float, float, float, float, float,\n    float]) -> float\nC++: double EvaluateScalar(double uvw[3], double Pt[3],\n    double Duvw[9]) override;\n\nCalculate a user defined scalar using one or all of uvw, Pt,\nDuvw.\n\n* uvw are the parameters with Pt being the cartesian point,\n* Duvw are the derivatives of this point with respect to u, v and\nw.\n* Pt, Duvw are obtained from Evaluate().\n\n* This function is only called if the ScalarMode has the value\n* vtkParametricFunctionSource::SCALAR_FUNCTION_DEFINED\n\n* If the user does not need to calculate a scalar, then the\n* instantiated function should return zero.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkParametricSuperToroid_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonComputationalGeometryPython.vtkParametricSuperToroid", // tp_name
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
  PyvtkParametricSuperToroid_Doc, // tp_doc
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

static vtkObjectBase *PyvtkParametricSuperToroid_StaticNew()
{
  return vtkParametricSuperToroid::New();
}

PyObject *PyvtkParametricSuperToroid_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkParametricSuperToroid_Type, PyvtkParametricSuperToroid_Methods,
    "vtkParametricSuperToroid",
 &PyvtkParametricSuperToroid_StaticNew);

  PyTypeObject *pytype = &PyvtkParametricSuperToroid_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkParametricFunction_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkParametricSuperToroid(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkParametricSuperToroid_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkParametricSuperToroid", o) != 0)
  {
    Py_DECREF(o);
  }

}

