// python wrapper for vtkParametricSuperEllipsoid
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
#include "vtkParametricSuperEllipsoid.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkParametricSuperEllipsoid(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkParametricSuperEllipsoid_ClassNew(); }

#ifndef DECLARED_PyvtkParametricFunction_ClassNew
extern "C" { PyObject *PyvtkParametricFunction_ClassNew(); }
#define DECLARED_PyvtkParametricFunction_ClassNew
#endif

static const char *PyvtkParametricSuperEllipsoid_Doc =
  "vtkParametricSuperEllipsoid - Generate a superellipsoid.\n\n"
  "Superclass: vtkParametricFunction\n\n"
  "vtkParametricSuperEllipsoid generates a superellipsoid.  A\n"
  "superellipsoid is a versatile primitive that is controlled by two\n"
  "parameters n1 and n2. As special cases it can represent a sphere,\n"
  "square box, and closed cylindrical can.\n\n"
  "For further information about this surface, please consult the\n"
  "technical description \"Parametric surfaces\" in\n"
  "http://www.vtk.org/publications in the \"VTK Technical Documents\"\n"
  "section in the VTk.org web pages.\n\n"
  "Also see: http://paulbourke.net/geometry/superellipse/\n\n"
  "@warning\n"
  "Care needs to be taken specifying the bounds correctly. You may need\n"
  "to carefully adjust MinimumU, MinimumV, MaximumU, MaximumV.\n\n"
  "@par Thanks: Andrew Maclean andrew.amaclean@gmail.com for creating\n"
  "and contributing the class.\n\n";


static PyObject *
PyvtkParametricSuperEllipsoid_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkParametricSuperEllipsoid::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricSuperEllipsoid_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricSuperEllipsoid *op = static_cast<vtkParametricSuperEllipsoid *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkParametricSuperEllipsoid::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricSuperEllipsoid_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkParametricSuperEllipsoid *tempr = vtkParametricSuperEllipsoid::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricSuperEllipsoid_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricSuperEllipsoid *op = static_cast<vtkParametricSuperEllipsoid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkParametricSuperEllipsoid *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkParametricSuperEllipsoid::NewInstance());

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
PyvtkParametricSuperEllipsoid_GetDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricSuperEllipsoid *op = static_cast<vtkParametricSuperEllipsoid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDimension() :
      op->vtkParametricSuperEllipsoid::GetDimension());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricSuperEllipsoid_SetXRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricSuperEllipsoid *op = static_cast<vtkParametricSuperEllipsoid *>(vp);

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
      op->vtkParametricSuperEllipsoid::SetXRadius(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricSuperEllipsoid_GetXRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricSuperEllipsoid *op = static_cast<vtkParametricSuperEllipsoid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetXRadius() :
      op->vtkParametricSuperEllipsoid::GetXRadius());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricSuperEllipsoid_SetYRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricSuperEllipsoid *op = static_cast<vtkParametricSuperEllipsoid *>(vp);

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
      op->vtkParametricSuperEllipsoid::SetYRadius(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricSuperEllipsoid_GetYRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricSuperEllipsoid *op = static_cast<vtkParametricSuperEllipsoid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetYRadius() :
      op->vtkParametricSuperEllipsoid::GetYRadius());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricSuperEllipsoid_SetZRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricSuperEllipsoid *op = static_cast<vtkParametricSuperEllipsoid *>(vp);

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
      op->vtkParametricSuperEllipsoid::SetZRadius(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricSuperEllipsoid_GetZRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricSuperEllipsoid *op = static_cast<vtkParametricSuperEllipsoid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetZRadius() :
      op->vtkParametricSuperEllipsoid::GetZRadius());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricSuperEllipsoid_SetN1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetN1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricSuperEllipsoid *op = static_cast<vtkParametricSuperEllipsoid *>(vp);

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
      op->vtkParametricSuperEllipsoid::SetN1(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricSuperEllipsoid_GetN1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetN1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricSuperEllipsoid *op = static_cast<vtkParametricSuperEllipsoid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetN1() :
      op->vtkParametricSuperEllipsoid::GetN1());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricSuperEllipsoid_SetN2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetN2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricSuperEllipsoid *op = static_cast<vtkParametricSuperEllipsoid *>(vp);

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
      op->vtkParametricSuperEllipsoid::SetN2(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricSuperEllipsoid_GetN2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetN2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricSuperEllipsoid *op = static_cast<vtkParametricSuperEllipsoid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetN2() :
      op->vtkParametricSuperEllipsoid::GetN2());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricSuperEllipsoid_Evaluate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Evaluate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricSuperEllipsoid *op = static_cast<vtkParametricSuperEllipsoid *>(vp);

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
      op->vtkParametricSuperEllipsoid::Evaluate(temp0, temp1, temp2);
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
PyvtkParametricSuperEllipsoid_EvaluateScalar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateScalar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricSuperEllipsoid *op = static_cast<vtkParametricSuperEllipsoid *>(vp);

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
      op->vtkParametricSuperEllipsoid::EvaluateScalar(temp0, temp1, temp2));

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

static PyMethodDef PyvtkParametricSuperEllipsoid_Methods[] = {
  {"IsTypeOf", PyvtkParametricSuperEllipsoid_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkParametricSuperEllipsoid_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkParametricSuperEllipsoid_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkParametricSuperEllipsoid\nC++: static vtkParametricSuperEllipsoid *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkParametricSuperEllipsoid_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkParametricSuperEllipsoid\nC++: vtkParametricSuperEllipsoid *NewInstance()\n\n"},
  {"GetDimension", PyvtkParametricSuperEllipsoid_GetDimension, METH_VARARGS,
   "V.GetDimension() -> int\nC++: int GetDimension() override;\n\nReturn the parametric dimension of the class.\n"},
  {"SetXRadius", PyvtkParametricSuperEllipsoid_SetXRadius, METH_VARARGS,
   "V.SetXRadius(float)\nC++: virtual void SetXRadius(double _arg)\n\nSet/Get the scaling factor for the x-axis. Default is 1.\n"},
  {"GetXRadius", PyvtkParametricSuperEllipsoid_GetXRadius, METH_VARARGS,
   "V.GetXRadius() -> float\nC++: virtual double GetXRadius()\n\nSet/Get the scaling factor for the x-axis. Default is 1.\n"},
  {"SetYRadius", PyvtkParametricSuperEllipsoid_SetYRadius, METH_VARARGS,
   "V.SetYRadius(float)\nC++: virtual void SetYRadius(double _arg)\n\nSet/Get the scaling factor for the y-axis. Default is 1.\n"},
  {"GetYRadius", PyvtkParametricSuperEllipsoid_GetYRadius, METH_VARARGS,
   "V.GetYRadius() -> float\nC++: virtual double GetYRadius()\n\nSet/Get the scaling factor for the y-axis. Default is 1.\n"},
  {"SetZRadius", PyvtkParametricSuperEllipsoid_SetZRadius, METH_VARARGS,
   "V.SetZRadius(float)\nC++: virtual void SetZRadius(double _arg)\n\nSet/Get the scaling factor for the z-axis. Default is 1.\n"},
  {"GetZRadius", PyvtkParametricSuperEllipsoid_GetZRadius, METH_VARARGS,
   "V.GetZRadius() -> float\nC++: virtual double GetZRadius()\n\nSet/Get the scaling factor for the z-axis. Default is 1.\n"},
  {"SetN1", PyvtkParametricSuperEllipsoid_SetN1, METH_VARARGS,
   "V.SetN1(float)\nC++: virtual void SetN1(double _arg)\n\nSet/Get the \"squareness\" parameter in the z axis.  Default is 1.\n"},
  {"GetN1", PyvtkParametricSuperEllipsoid_GetN1, METH_VARARGS,
   "V.GetN1() -> float\nC++: virtual double GetN1()\n\nSet/Get the \"squareness\" parameter in the z axis.  Default is 1.\n"},
  {"SetN2", PyvtkParametricSuperEllipsoid_SetN2, METH_VARARGS,
   "V.SetN2(float)\nC++: virtual void SetN2(double _arg)\n\nSet/Get the \"squareness\" parameter in the x-y plane. Default is\n1.\n"},
  {"GetN2", PyvtkParametricSuperEllipsoid_GetN2, METH_VARARGS,
   "V.GetN2() -> float\nC++: virtual double GetN2()\n\nSet/Get the \"squareness\" parameter in the x-y plane. Default is\n1.\n"},
  {"Evaluate", PyvtkParametricSuperEllipsoid_Evaluate, METH_VARARGS,
   "V.Evaluate([float, float, float], [float, float, float], [float,\n    float, float, float, float, float, float, float, float])\nC++: void Evaluate(double uvw[3], double Pt[3], double Duvw[9])\n    override;\n\nA superellipsoid.\n\n* This function performs the mapping $f(u,v) \\rightarrow (x,y,x)\n  $, returning it\n* as Pt. It also returns the partial derivatives Du and Dv.\n* $Pt = (x, y, z), Du = (dx/du, dy/du, dz/du), Dv = (dx/dv,\n  dy/dv, dz/dv) $ .\n* Then the normal is $N = Du X Dv $ .\n"},
  {"EvaluateScalar", PyvtkParametricSuperEllipsoid_EvaluateScalar, METH_VARARGS,
   "V.EvaluateScalar([float, float, float], [float, float, float],\n    [float, float, float, float, float, float, float, float,\n    float]) -> float\nC++: double EvaluateScalar(double uvw[3], double Pt[3],\n    double Duvw[9]) override;\n\nCalculate a user defined scalar using one or all of uvw, Pt,\nDuvw.\n\n* uvw are the parameters with Pt being the cartesian point,\n* Duvw are the derivatives of this point with respect to u, v and\nw.\n* Pt, Duvw are obtained from Evaluate().\n\n* This function is only called if the ScalarMode has the value\n* vtkParametricFunctionSource::SCALAR_FUNCTION_DEFINED\n\n* If the user does not need to calculate a scalar, then the\n* instantiated function should return zero.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkParametricSuperEllipsoid_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonComputationalGeometryPython.vtkParametricSuperEllipsoid", // tp_name
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
  PyvtkParametricSuperEllipsoid_Doc, // tp_doc
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

static vtkObjectBase *PyvtkParametricSuperEllipsoid_StaticNew()
{
  return vtkParametricSuperEllipsoid::New();
}

PyObject *PyvtkParametricSuperEllipsoid_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkParametricSuperEllipsoid_Type, PyvtkParametricSuperEllipsoid_Methods,
    "vtkParametricSuperEllipsoid",
 &PyvtkParametricSuperEllipsoid_StaticNew);

  PyTypeObject *pytype = &PyvtkParametricSuperEllipsoid_Type;

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

void PyVTKAddFile_vtkParametricSuperEllipsoid(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkParametricSuperEllipsoid_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkParametricSuperEllipsoid", o) != 0)
  {
    Py_DECREF(o);
  }

}

