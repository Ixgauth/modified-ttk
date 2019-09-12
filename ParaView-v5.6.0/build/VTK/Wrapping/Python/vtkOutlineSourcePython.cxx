// python wrapper for vtkOutlineSource
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
#include "vtkOutlineSource.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkOutlineSource(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkOutlineSource_ClassNew(); }

#ifndef DECLARED_PyvtkPolyDataAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPolyDataAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPolyDataAlgorithm_ClassNew
#endif

static const char *PyvtkOutlineSource_Doc =
  "vtkOutlineSource - create wireframe outline around bounding box\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkOutlineSource creates a wireframe outline around a user-specified\n"
  "bounding box.  The outline may be created aligned with the {x,y,z}\n"
  "axis - in which case it is defined by the 6 bounds\n"
  "{xmin,xmax,ymin,ymax,zmin,zmax} via SetBounds(). Alternatively, the\n"
  "box may be arbitrarily aligned, in which case it should be set via\n"
  "the SetCorners() member.\n\n";


static PyObject *
PyvtkOutlineSource_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkOutlineSource::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOutlineSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutlineSource *op = static_cast<vtkOutlineSource *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkOutlineSource::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOutlineSource_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkOutlineSource *tempr = vtkOutlineSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOutlineSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutlineSource *op = static_cast<vtkOutlineSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkOutlineSource *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkOutlineSource::NewInstance());

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
PyvtkOutlineSource_SetBoxType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBoxType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutlineSource *op = static_cast<vtkOutlineSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBoxType(temp0);
    }
    else
    {
      op->vtkOutlineSource::SetBoxType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOutlineSource_GetBoxType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBoxType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutlineSource *op = static_cast<vtkOutlineSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBoxType() :
      op->vtkOutlineSource::GetBoxType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOutlineSource_SetBoxTypeToAxisAligned(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBoxTypeToAxisAligned");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutlineSource *op = static_cast<vtkOutlineSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetBoxTypeToAxisAligned();
    }
    else
    {
      op->vtkOutlineSource::SetBoxTypeToAxisAligned();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOutlineSource_SetBoxTypeToOriented(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBoxTypeToOriented");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutlineSource *op = static_cast<vtkOutlineSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetBoxTypeToOriented();
    }
    else
    {
      op->vtkOutlineSource::SetBoxTypeToOriented();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOutlineSource_SetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutlineSource *op = static_cast<vtkOutlineSource *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
  {
    if (ap.IsBound())
    {
      op->SetBounds(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkOutlineSource::SetBounds(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkOutlineSource_SetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutlineSource *op = static_cast<vtkOutlineSource *>(vp);

  const size_t size0 = 6;
  double temp0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetBounds(temp0);
    }
    else
    {
      op->vtkOutlineSource::SetBounds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkOutlineSource_SetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkOutlineSource_SetBounds_s1(self, args);
    case 1:
      return PyvtkOutlineSource_SetBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetBounds");
  return nullptr;
}



static PyObject *
PyvtkOutlineSource_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutlineSource *op = static_cast<vtkOutlineSource *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkOutlineSource::GetBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkOutlineSource_SetCorners(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCorners");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutlineSource *op = static_cast<vtkOutlineSource *>(vp);

  const size_t size0 = 24;
  double temp0[24];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetCorners(temp0);
    }
    else
    {
      op->vtkOutlineSource::SetCorners(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOutlineSource_GetCorners(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCorners");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutlineSource *op = static_cast<vtkOutlineSource *>(vp);

  size_t sizer = 24;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetCorners() :
      op->vtkOutlineSource::GetCorners());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkOutlineSource_SetGenerateFaces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateFaces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutlineSource *op = static_cast<vtkOutlineSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateFaces(temp0);
    }
    else
    {
      op->vtkOutlineSource::SetGenerateFaces(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOutlineSource_GenerateFacesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateFacesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutlineSource *op = static_cast<vtkOutlineSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateFacesOn();
    }
    else
    {
      op->vtkOutlineSource::GenerateFacesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOutlineSource_GenerateFacesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateFacesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutlineSource *op = static_cast<vtkOutlineSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateFacesOff();
    }
    else
    {
      op->vtkOutlineSource::GenerateFacesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOutlineSource_GetGenerateFaces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateFaces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutlineSource *op = static_cast<vtkOutlineSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGenerateFaces() :
      op->vtkOutlineSource::GetGenerateFaces());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOutlineSource_SetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutlineSource *op = static_cast<vtkOutlineSource *>(vp);

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
      op->vtkOutlineSource::SetOutputPointsPrecision(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOutlineSource_GetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutlineSource *op = static_cast<vtkOutlineSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecision() :
      op->vtkOutlineSource::GetOutputPointsPrecision());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkOutlineSource_Methods[] = {
  {"IsTypeOf", PyvtkOutlineSource_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkOutlineSource_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkOutlineSource_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkOutlineSource\nC++: static vtkOutlineSource *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkOutlineSource_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkOutlineSource\nC++: vtkOutlineSource *NewInstance()\n\n"},
  {"SetBoxType", PyvtkOutlineSource_SetBoxType, METH_VARARGS,
   "V.SetBoxType(int)\nC++: virtual void SetBoxType(int _arg)\n\nSet box type to AxisAligned (default) or Oriented. Use the method\nSetBounds() with AxisAligned mode, and SetCorners() with Oriented\nmode.\n"},
  {"GetBoxType", PyvtkOutlineSource_GetBoxType, METH_VARARGS,
   "V.GetBoxType() -> int\nC++: virtual int GetBoxType()\n\nSet box type to AxisAligned (default) or Oriented. Use the method\nSetBounds() with AxisAligned mode, and SetCorners() with Oriented\nmode.\n"},
  {"SetBoxTypeToAxisAligned", PyvtkOutlineSource_SetBoxTypeToAxisAligned, METH_VARARGS,
   "V.SetBoxTypeToAxisAligned()\nC++: void SetBoxTypeToAxisAligned()\n\nSet box type to AxisAligned (default) or Oriented. Use the method\nSetBounds() with AxisAligned mode, and SetCorners() with Oriented\nmode.\n"},
  {"SetBoxTypeToOriented", PyvtkOutlineSource_SetBoxTypeToOriented, METH_VARARGS,
   "V.SetBoxTypeToOriented()\nC++: void SetBoxTypeToOriented()\n\nSet box type to AxisAligned (default) or Oriented. Use the method\nSetBounds() with AxisAligned mode, and SetCorners() with Oriented\nmode.\n"},
  {"SetBounds", PyvtkOutlineSource_SetBounds, METH_VARARGS,
   "V.SetBounds(float, float, float, float, float, float)\nC++: void SetBounds(double, double, double, double, double,\n    double)\nV.SetBounds((float, float, float, float, float, float))\nC++: void SetBounds(double a[6])\n\n"},
  {"GetBounds", PyvtkOutlineSource_GetBounds, METH_VARARGS,
   "V.GetBounds() -> (float, float, float, float, float, float)\nC++: double *GetBounds()\n\nSpecify the bounds of the box to be used in Axis Aligned mode.\n"},
  {"SetCorners", PyvtkOutlineSource_SetCorners, METH_VARARGS,
   "V.SetCorners((float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float, float, float, float, float, float, float, float))\nC++: void SetCorners(double a[24])\n\nSpecify the corners of the outline when in Oriented mode, the\nvalues are supplied as 8*3 double values The correct corner\nordering is using {x,y,z} convention for the unit cube as\nfollows:\n{0,0,0},{1,0,0},{0,1,0},{1,1,0},{0,0,1},{1,0,1},{0,1,1},{1,1,1}.\n"},
  {"GetCorners", PyvtkOutlineSource_GetCorners, METH_VARARGS,
   "V.GetCorners() -> (float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float, float, float, float, float, float, float, float,\n    float)\nC++: double *GetCorners()\n\nSpecify the corners of the outline when in Oriented mode, the\nvalues are supplied as 8*3 double values The correct corner\nordering is using {x,y,z} convention for the unit cube as\nfollows:\n{0,0,0},{1,0,0},{0,1,0},{1,1,0},{0,0,1},{1,0,1},{0,1,1},{1,1,1}.\n"},
  {"SetGenerateFaces", PyvtkOutlineSource_SetGenerateFaces, METH_VARARGS,
   "V.SetGenerateFaces(int)\nC++: virtual void SetGenerateFaces(vtkTypeBool _arg)\n\nGenerate solid faces for the box. This is off by default.\n"},
  {"GenerateFacesOn", PyvtkOutlineSource_GenerateFacesOn, METH_VARARGS,
   "V.GenerateFacesOn()\nC++: virtual void GenerateFacesOn()\n\nGenerate solid faces for the box. This is off by default.\n"},
  {"GenerateFacesOff", PyvtkOutlineSource_GenerateFacesOff, METH_VARARGS,
   "V.GenerateFacesOff()\nC++: virtual void GenerateFacesOff()\n\nGenerate solid faces for the box. This is off by default.\n"},
  {"GetGenerateFaces", PyvtkOutlineSource_GetGenerateFaces, METH_VARARGS,
   "V.GetGenerateFaces() -> int\nC++: virtual vtkTypeBool GetGenerateFaces()\n\nGenerate solid faces for the box. This is off by default.\n"},
  {"SetOutputPointsPrecision", PyvtkOutlineSource_SetOutputPointsPrecision, METH_VARARGS,
   "V.SetOutputPointsPrecision(int)\nC++: virtual void SetOutputPointsPrecision(int _arg)\n\nSet/get the desired precision for the output points.\nvtkAlgorithm::SINGLE_PRECISION - Output single-precision floating\npoint. vtkAlgorithm::DOUBLE_PRECISION - Output double-precision\nfloating point.\n"},
  {"GetOutputPointsPrecision", PyvtkOutlineSource_GetOutputPointsPrecision, METH_VARARGS,
   "V.GetOutputPointsPrecision() -> int\nC++: virtual int GetOutputPointsPrecision()\n\nSet/get the desired precision for the output points.\nvtkAlgorithm::SINGLE_PRECISION - Output single-precision floating\npoint. vtkAlgorithm::DOUBLE_PRECISION - Output double-precision\nfloating point.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkOutlineSource_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersSourcesPython.vtkOutlineSource", // tp_name
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
  PyvtkOutlineSource_Doc, // tp_doc
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

static vtkObjectBase *PyvtkOutlineSource_StaticNew()
{
  return vtkOutlineSource::New();
}

PyObject *PyvtkOutlineSource_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkOutlineSource_Type, PyvtkOutlineSource_Methods,
    "vtkOutlineSource",
 &PyvtkOutlineSource_StaticNew);

  PyTypeObject *pytype = &PyvtkOutlineSource_Type;

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

void PyVTKAddFile_vtkOutlineSource(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkOutlineSource_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkOutlineSource", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 2; c++)
  {
    static const struct { const char *name; int value; }
      constants[2] = {
        { "VTK_BOX_TYPE_AXIS_ALIGNED", 0 },
        { "VTK_BOX_TYPE_ORIENTED", 1 },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

