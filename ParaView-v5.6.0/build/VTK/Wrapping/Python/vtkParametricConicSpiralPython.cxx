// python wrapper for vtkParametricConicSpiral
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
#include "vtkParametricConicSpiral.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkParametricConicSpiral(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkParametricConicSpiral_ClassNew(); }

#ifndef DECLARED_PyvtkParametricFunction_ClassNew
extern "C" { PyObject *PyvtkParametricFunction_ClassNew(); }
#define DECLARED_PyvtkParametricFunction_ClassNew
#endif

static const char *PyvtkParametricConicSpiral_Doc =
  "vtkParametricConicSpiral - Generate conic spiral surfaces that\nresemble sea-shells.\n\n"
  "Superclass: vtkParametricFunction\n\n"
  "vtkParametricConicSpiral generates conic spiral surfaces. These can\n"
  "resemble sea shells, or may look like a torus \"eating\" its own tail.\n\n"
  "For further information about this surface, please consult the\n"
  "technical description \"Parametric surfaces\" in\n"
  "http://www.vtk.org/publications in the \"VTK Technical Documents\"\n"
  "section in the VTk.org web pages.\n\n"
  "@par Thanks: Andrew Maclean andrew.amaclean@gmail.com for creating\n"
  "and contributing the class.\n\n";


static PyObject *
PyvtkParametricConicSpiral_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkParametricConicSpiral::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricConicSpiral_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricConicSpiral *op = static_cast<vtkParametricConicSpiral *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkParametricConicSpiral::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricConicSpiral_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkParametricConicSpiral *tempr = vtkParametricConicSpiral::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricConicSpiral_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricConicSpiral *op = static_cast<vtkParametricConicSpiral *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkParametricConicSpiral *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkParametricConicSpiral::NewInstance());

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
PyvtkParametricConicSpiral_GetDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricConicSpiral *op = static_cast<vtkParametricConicSpiral *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDimension() :
      op->vtkParametricConicSpiral::GetDimension());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricConicSpiral_SetA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricConicSpiral *op = static_cast<vtkParametricConicSpiral *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetA(temp0);
    }
    else
    {
      op->vtkParametricConicSpiral::SetA(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricConicSpiral_GetA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricConicSpiral *op = static_cast<vtkParametricConicSpiral *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetA() :
      op->vtkParametricConicSpiral::GetA());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricConicSpiral_SetB(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetB");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricConicSpiral *op = static_cast<vtkParametricConicSpiral *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetB(temp0);
    }
    else
    {
      op->vtkParametricConicSpiral::SetB(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricConicSpiral_GetB(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetB");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricConicSpiral *op = static_cast<vtkParametricConicSpiral *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetB() :
      op->vtkParametricConicSpiral::GetB());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricConicSpiral_SetC(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetC");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricConicSpiral *op = static_cast<vtkParametricConicSpiral *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetC(temp0);
    }
    else
    {
      op->vtkParametricConicSpiral::SetC(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricConicSpiral_GetC(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetC");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricConicSpiral *op = static_cast<vtkParametricConicSpiral *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetC() :
      op->vtkParametricConicSpiral::GetC());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricConicSpiral_SetN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricConicSpiral *op = static_cast<vtkParametricConicSpiral *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetN(temp0);
    }
    else
    {
      op->vtkParametricConicSpiral::SetN(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricConicSpiral_GetN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricConicSpiral *op = static_cast<vtkParametricConicSpiral *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetN() :
      op->vtkParametricConicSpiral::GetN());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricConicSpiral_Evaluate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Evaluate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricConicSpiral *op = static_cast<vtkParametricConicSpiral *>(vp);

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
      op->vtkParametricConicSpiral::Evaluate(temp0, temp1, temp2);
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
PyvtkParametricConicSpiral_EvaluateScalar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateScalar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricConicSpiral *op = static_cast<vtkParametricConicSpiral *>(vp);

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
      op->vtkParametricConicSpiral::EvaluateScalar(temp0, temp1, temp2));

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

static PyMethodDef PyvtkParametricConicSpiral_Methods[] = {
  {"IsTypeOf", PyvtkParametricConicSpiral_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkParametricConicSpiral_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkParametricConicSpiral_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkParametricConicSpiral\nC++: static vtkParametricConicSpiral *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkParametricConicSpiral_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkParametricConicSpiral\nC++: vtkParametricConicSpiral *NewInstance()\n\n"},
  {"GetDimension", PyvtkParametricConicSpiral_GetDimension, METH_VARARGS,
   "V.GetDimension() -> int\nC++: int GetDimension() override;\n\nReturn the parametric dimension of the class.\n"},
  {"SetA", PyvtkParametricConicSpiral_SetA, METH_VARARGS,
   "V.SetA(float)\nC++: virtual void SetA(double _arg)\n\nSet/Get the scale factor. Default = 0.2\n"},
  {"GetA", PyvtkParametricConicSpiral_GetA, METH_VARARGS,
   "V.GetA() -> float\nC++: virtual double GetA()\n\nSet/Get the scale factor. Default = 0.2\n"},
  {"SetB", PyvtkParametricConicSpiral_SetB, METH_VARARGS,
   "V.SetB(float)\nC++: virtual void SetB(double _arg)\n\nSet/Get the A function coefficient. See the definition in\nParametric surfaces referred to above. Default is 1.\n"},
  {"GetB", PyvtkParametricConicSpiral_GetB, METH_VARARGS,
   "V.GetB() -> float\nC++: virtual double GetB()\n\nSet/Get the A function coefficient. See the definition in\nParametric surfaces referred to above. Default is 1.\n"},
  {"SetC", PyvtkParametricConicSpiral_SetC, METH_VARARGS,
   "V.SetC(float)\nC++: virtual void SetC(double _arg)\n\nSet/Get the B function coefficient. See the definition in\nParametric surfaces referred to above. Default is 0.1.\n"},
  {"GetC", PyvtkParametricConicSpiral_GetC, METH_VARARGS,
   "V.GetC() -> float\nC++: virtual double GetC()\n\nSet/Get the B function coefficient. See the definition in\nParametric surfaces referred to above. Default is 0.1.\n"},
  {"SetN", PyvtkParametricConicSpiral_SetN, METH_VARARGS,
   "V.SetN(float)\nC++: virtual void SetN(double _arg)\n\nSet/Get the C function coefficient. See the definition in\nParametric surfaces referred to above. Default is 2.\n"},
  {"GetN", PyvtkParametricConicSpiral_GetN, METH_VARARGS,
   "V.GetN() -> float\nC++: virtual double GetN()\n\nSet/Get the C function coefficient. See the definition in\nParametric surfaces referred to above. Default is 2.\n"},
  {"Evaluate", PyvtkParametricConicSpiral_Evaluate, METH_VARARGS,
   "V.Evaluate([float, float, float], [float, float, float], [float,\n    float, float, float, float, float, float, float, float])\nC++: void Evaluate(double uvw[3], double Pt[3], double Duvw[9])\n    override;\n\nA conic spiral surface.\n\n* This function performs the mapping $f(u,v) \\rightarrow (x,y,x)\n  $, returning it\n* as Pt. It also returns the partial derivatives Du and Dv.\n* $Pt = (x, y, z), Du = (dx/du, dy/du, dz/du), Dv = (dx/dv,\n  dy/dv, dz/dv) $ .\n* Then the normal is $N = Du X Dv $ .\n"},
  {"EvaluateScalar", PyvtkParametricConicSpiral_EvaluateScalar, METH_VARARGS,
   "V.EvaluateScalar([float, float, float], [float, float, float],\n    [float, float, float, float, float, float, float, float,\n    float]) -> float\nC++: double EvaluateScalar(double uvw[3], double Pt[3],\n    double Duvw[9]) override;\n\nCalculate a user defined scalar using one or all of uvw, Pt,\nDuvw.\n\n* uvw are the parameters with Pt being the cartesian point,\n* Duvw are the derivatives of this point with respect to u, v and\nw.\n* Pt, Duvw are obtained from Evaluate().\n\n* This function is only called if the ScalarMode has the value\n* vtkParametricFunctionSource::SCALAR_FUNCTION_DEFINED\n\n* If the user does not need to calculate a scalar, then the\n* instantiated function should return zero.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkParametricConicSpiral_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonComputationalGeometryPython.vtkParametricConicSpiral", // tp_name
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
  PyvtkParametricConicSpiral_Doc, // tp_doc
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

static vtkObjectBase *PyvtkParametricConicSpiral_StaticNew()
{
  return vtkParametricConicSpiral::New();
}

PyObject *PyvtkParametricConicSpiral_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkParametricConicSpiral_Type, PyvtkParametricConicSpiral_Methods,
    "vtkParametricConicSpiral",
 &PyvtkParametricConicSpiral_StaticNew);

  PyTypeObject *pytype = &PyvtkParametricConicSpiral_Type;

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

void PyVTKAddFile_vtkParametricConicSpiral(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkParametricConicSpiral_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkParametricConicSpiral", o) != 0)
  {
    Py_DECREF(o);
  }

}

