// python wrapper for vtkAbstractMapper3D
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
#include "vtkAbstractMapper3D.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkAbstractMapper3D(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkAbstractMapper3D_ClassNew(); }

#ifndef DECLARED_PyvtkAbstractMapper_ClassNew
extern "C" { PyObject *PyvtkAbstractMapper_ClassNew(); }
#define DECLARED_PyvtkAbstractMapper_ClassNew
#endif

static const char *PyvtkAbstractMapper3D_Doc =
  "vtkAbstractMapper3D - abstract class specifies interface to map 3D\ndata\n\n"
  "Superclass: vtkAbstractMapper\n\n"
  "vtkAbstractMapper3D is an abstract class to specify interface between\n"
  "3D data and graphics primitives or software rendering techniques.\n"
  "Subclasses of vtkAbstractMapper3D can be used for rendering geometry\n"
  "or rendering volumetric data.\n\n"
  "This class also defines an API to support hardware clipping planes\n"
  "(at most six planes can be defined). It also provides geometric data\n"
  "about the input data it maps, such as the bounding box and center.\n\n"
  "@sa\n"
  "vtkAbstractMapper vtkMapper vtkPolyDataMapper vtkVolumeMapper\n\n";


static PyObject *
PyvtkAbstractMapper3D_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkAbstractMapper3D::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractMapper3D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractMapper3D *op = static_cast<vtkAbstractMapper3D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAbstractMapper3D::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractMapper3D_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkAbstractMapper3D *tempr = vtkAbstractMapper3D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractMapper3D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractMapper3D *op = static_cast<vtkAbstractMapper3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractMapper3D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAbstractMapper3D::NewInstance());

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
PyvtkAbstractMapper3D_GetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractMapper3D *op = static_cast<vtkAbstractMapper3D *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    double *tempr = op->GetBounds();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkAbstractMapper3D_GetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractMapper3D *op = static_cast<vtkAbstractMapper3D *>(vp);

  const size_t size0 = 6;
  double temp0[6];
  double save0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetBounds(temp0);
    }
    else
    {
      op->vtkAbstractMapper3D::GetBounds(temp0);
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
PyvtkAbstractMapper3D_GetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkAbstractMapper3D_GetBounds_s1(self, args);
    case 1:
      return PyvtkAbstractMapper3D_GetBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetBounds");
  return nullptr;
}



static PyObject *
PyvtkAbstractMapper3D_GetCenter_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractMapper3D *op = static_cast<vtkAbstractMapper3D *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetCenter() :
      op->vtkAbstractMapper3D::GetCenter());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkAbstractMapper3D_GetCenter_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractMapper3D *op = static_cast<vtkAbstractMapper3D *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetCenter(temp0);
    }
    else
    {
      op->vtkAbstractMapper3D::GetCenter(temp0);
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
PyvtkAbstractMapper3D_GetCenter(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkAbstractMapper3D_GetCenter_s1(self, args);
    case 1:
      return PyvtkAbstractMapper3D_GetCenter_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetCenter");
  return nullptr;
}



static PyObject *
PyvtkAbstractMapper3D_GetLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractMapper3D *op = static_cast<vtkAbstractMapper3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLength() :
      op->vtkAbstractMapper3D::GetLength());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractMapper3D_IsARayCastMapper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsARayCastMapper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractMapper3D *op = static_cast<vtkAbstractMapper3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->IsARayCastMapper() :
      op->vtkAbstractMapper3D::IsARayCastMapper());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractMapper3D_IsARenderIntoImageMapper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsARenderIntoImageMapper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractMapper3D *op = static_cast<vtkAbstractMapper3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->IsARenderIntoImageMapper() :
      op->vtkAbstractMapper3D::IsARenderIntoImageMapper());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractMapper3D_GetClippingPlaneInDataCoords(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClippingPlaneInDataCoords");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractMapper3D *op = static_cast<vtkAbstractMapper3D *>(vp);

  vtkMatrix4x4 *temp0 = nullptr;
  int temp1;
  const size_t size2 = 4;
  double temp2[4];
  double save2[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4") &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2))
  {
    ap.Save(temp2, save2, size2);

    if (ap.IsBound())
    {
      op->GetClippingPlaneInDataCoords(temp0, temp1, temp2);
    }
    else
    {
      op->vtkAbstractMapper3D::GetClippingPlaneInDataCoords(temp0, temp1, temp2);
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

static PyMethodDef PyvtkAbstractMapper3D_Methods[] = {
  {"IsTypeOf", PyvtkAbstractMapper3D_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkAbstractMapper3D_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkAbstractMapper3D_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkAbstractMapper3D\nC++: static vtkAbstractMapper3D *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkAbstractMapper3D_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkAbstractMapper3D\nC++: vtkAbstractMapper3D *NewInstance()\n\n"},
  {"GetBounds", PyvtkAbstractMapper3D_GetBounds, METH_VARARGS,
   "V.GetBounds() -> (float, float, float, float, float, float)\nC++: virtual double *GetBounds()\nV.GetBounds([float, float, float, float, float, float])\nC++: virtual void GetBounds(double bounds[6])\n\nReturn bounding box (array of six doubles) of data expressed as\n(xmin,xmax, ymin,ymax, zmin,zmax). Update this->Bounds as a side\neffect.\n"},
  {"GetCenter", PyvtkAbstractMapper3D_GetCenter, METH_VARARGS,
   "V.GetCenter() -> (float, float, float)\nC++: double *GetCenter()\nV.GetCenter([float, float, float])\nC++: void GetCenter(double center[3])\n\nReturn the Center of this mapper's data.\n"},
  {"GetLength", PyvtkAbstractMapper3D_GetLength, METH_VARARGS,
   "V.GetLength() -> float\nC++: double GetLength()\n\nReturn the diagonal length of this mappers bounding box.\n"},
  {"IsARayCastMapper", PyvtkAbstractMapper3D_IsARayCastMapper, METH_VARARGS,
   "V.IsARayCastMapper() -> int\nC++: virtual int IsARayCastMapper()\n\nIs this a ray cast mapper? A subclass would return 1 if the ray\ncaster is needed to generate an image from this mapper.\n"},
  {"IsARenderIntoImageMapper", PyvtkAbstractMapper3D_IsARenderIntoImageMapper, METH_VARARGS,
   "V.IsARenderIntoImageMapper() -> int\nC++: virtual int IsARenderIntoImageMapper()\n\nIs this a \"render into image\" mapper? A subclass would return 1\nif the mapper produces an image by rendering into a software\nimage buffer.\n"},
  {"GetClippingPlaneInDataCoords", PyvtkAbstractMapper3D_GetClippingPlaneInDataCoords, METH_VARARGS,
   "V.GetClippingPlaneInDataCoords(vtkMatrix4x4, int, [float, float,\n    float, float])\nC++: void GetClippingPlaneInDataCoords(vtkMatrix4x4 *propMatrix,\n    int i, double planeEquation[4])\n\nGet the ith clipping plane as a homogeneous plane equation. Use\nGetNumberOfClippingPlanes to get the number of planes.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkAbstractMapper3D_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingCorePython.vtkAbstractMapper3D", // tp_name
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
  PyvtkAbstractMapper3D_Doc, // tp_doc
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

PyObject *PyvtkAbstractMapper3D_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkAbstractMapper3D_Type, PyvtkAbstractMapper3D_Methods,
    "vtkAbstractMapper3D",
 nullptr);

  PyTypeObject *pytype = &PyvtkAbstractMapper3D_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkAbstractMapper_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkAbstractMapper3D(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkAbstractMapper3D_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkAbstractMapper3D", o) != 0)
  {
    Py_DECREF(o);
  }

}

