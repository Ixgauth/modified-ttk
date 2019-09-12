// python wrapper for vtkTessellatedBoxSource
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
#include "vtkTessellatedBoxSource.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkTessellatedBoxSource(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkTessellatedBoxSource_ClassNew(); }

#ifndef DECLARED_PyvtkPolyDataAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPolyDataAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPolyDataAlgorithm_ClassNew
#endif

static const char *PyvtkTessellatedBoxSource_Doc =
  "vtkTessellatedBoxSource - Create a polygonal representation of a box\nwith a given level of subdivision.\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkTessellatedBoxSource creates a axis-aligned box defined by its\n"
  "bounds and a level of subdivision. Connectivity is strong: points of\n"
  "the vertices and inside the edges are shared between faces. In other\n"
  "words, faces are connected. Each face looks like a grid of quads,\n"
  "each quad is composed of 2 triangles. Given a level of subdivision `l', each edge has\n"
  "`l'+2 points, `l' of them are internal edge points, the 2 other ones\n"
  "are the vertices. Each face has a total of (`l'+2)*(`l'+2) points, 4\n"
  "of them are vertices, 4*`l' are internal edge points, it remains\n"
  "`l'^2 internal face points.\n\n"
  "This source only generate geometry, no DataArrays like normals or\n"
  "texture coordinates.\n\n";


static PyObject *
PyvtkTessellatedBoxSource_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTessellatedBoxSource::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTessellatedBoxSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTessellatedBoxSource *op = static_cast<vtkTessellatedBoxSource *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTessellatedBoxSource::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTessellatedBoxSource_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTessellatedBoxSource *tempr = vtkTessellatedBoxSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTessellatedBoxSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTessellatedBoxSource *op = static_cast<vtkTessellatedBoxSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTessellatedBoxSource *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTessellatedBoxSource::NewInstance());

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
PyvtkTessellatedBoxSource_SetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTessellatedBoxSource *op = static_cast<vtkTessellatedBoxSource *>(vp);

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
      op->vtkTessellatedBoxSource::SetBounds(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTessellatedBoxSource_SetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTessellatedBoxSource *op = static_cast<vtkTessellatedBoxSource *>(vp);

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
      op->vtkTessellatedBoxSource::SetBounds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTessellatedBoxSource_SetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkTessellatedBoxSource_SetBounds_s1(self, args);
    case 1:
      return PyvtkTessellatedBoxSource_SetBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetBounds");
  return nullptr;
}



static PyObject *
PyvtkTessellatedBoxSource_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTessellatedBoxSource *op = static_cast<vtkTessellatedBoxSource *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkTessellatedBoxSource::GetBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkTessellatedBoxSource_SetLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTessellatedBoxSource *op = static_cast<vtkTessellatedBoxSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLevel(temp0);
    }
    else
    {
      op->vtkTessellatedBoxSource::SetLevel(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTessellatedBoxSource_GetLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTessellatedBoxSource *op = static_cast<vtkTessellatedBoxSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLevel() :
      op->vtkTessellatedBoxSource::GetLevel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTessellatedBoxSource_SetDuplicateSharedPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDuplicateSharedPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTessellatedBoxSource *op = static_cast<vtkTessellatedBoxSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDuplicateSharedPoints(temp0);
    }
    else
    {
      op->vtkTessellatedBoxSource::SetDuplicateSharedPoints(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTessellatedBoxSource_GetDuplicateSharedPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDuplicateSharedPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTessellatedBoxSource *op = static_cast<vtkTessellatedBoxSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDuplicateSharedPoints() :
      op->vtkTessellatedBoxSource::GetDuplicateSharedPoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTessellatedBoxSource_DuplicateSharedPointsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DuplicateSharedPointsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTessellatedBoxSource *op = static_cast<vtkTessellatedBoxSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DuplicateSharedPointsOn();
    }
    else
    {
      op->vtkTessellatedBoxSource::DuplicateSharedPointsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTessellatedBoxSource_DuplicateSharedPointsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DuplicateSharedPointsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTessellatedBoxSource *op = static_cast<vtkTessellatedBoxSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DuplicateSharedPointsOff();
    }
    else
    {
      op->vtkTessellatedBoxSource::DuplicateSharedPointsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTessellatedBoxSource_SetQuads(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQuads");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTessellatedBoxSource *op = static_cast<vtkTessellatedBoxSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetQuads(temp0);
    }
    else
    {
      op->vtkTessellatedBoxSource::SetQuads(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTessellatedBoxSource_GetQuads(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetQuads");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTessellatedBoxSource *op = static_cast<vtkTessellatedBoxSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetQuads() :
      op->vtkTessellatedBoxSource::GetQuads());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTessellatedBoxSource_QuadsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "QuadsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTessellatedBoxSource *op = static_cast<vtkTessellatedBoxSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->QuadsOn();
    }
    else
    {
      op->vtkTessellatedBoxSource::QuadsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTessellatedBoxSource_QuadsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "QuadsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTessellatedBoxSource *op = static_cast<vtkTessellatedBoxSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->QuadsOff();
    }
    else
    {
      op->vtkTessellatedBoxSource::QuadsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTessellatedBoxSource_SetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTessellatedBoxSource *op = static_cast<vtkTessellatedBoxSource *>(vp);

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
      op->vtkTessellatedBoxSource::SetOutputPointsPrecision(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTessellatedBoxSource_GetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTessellatedBoxSource *op = static_cast<vtkTessellatedBoxSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecision() :
      op->vtkTessellatedBoxSource::GetOutputPointsPrecision());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkTessellatedBoxSource_Methods[] = {
  {"IsTypeOf", PyvtkTessellatedBoxSource_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkTessellatedBoxSource_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkTessellatedBoxSource_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkTessellatedBoxSource\nC++: static vtkTessellatedBoxSource *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkTessellatedBoxSource_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkTessellatedBoxSource\nC++: vtkTessellatedBoxSource *NewInstance()\n\n"},
  {"SetBounds", PyvtkTessellatedBoxSource_SetBounds, METH_VARARGS,
   "V.SetBounds(float, float, float, float, float, float)\nC++: void SetBounds(double, double, double, double, double,\n    double)\nV.SetBounds((float, float, float, float, float, float))\nC++: void SetBounds(double a[6])\n\n"},
  {"GetBounds", PyvtkTessellatedBoxSource_GetBounds, METH_VARARGS,
   "V.GetBounds() -> (float, float, float, float, float, float)\nC++: double *GetBounds()\n\n"},
  {"SetLevel", PyvtkTessellatedBoxSource_SetLevel, METH_VARARGS,
   "V.SetLevel(int)\nC++: virtual void SetLevel(int _arg)\n\nSet the level of subdivision of the faces.\n\\pre positive_level: level>=0\n"},
  {"GetLevel", PyvtkTessellatedBoxSource_GetLevel, METH_VARARGS,
   "V.GetLevel() -> int\nC++: virtual int GetLevel()\n\nLevel of subdivision of the faces. Initial value is 0.\n\\post positive_level: level>=0\n"},
  {"SetDuplicateSharedPoints", PyvtkTessellatedBoxSource_SetDuplicateSharedPoints, METH_VARARGS,
   "V.SetDuplicateSharedPoints(int)\nC++: virtual void SetDuplicateSharedPoints(vtkTypeBool _arg)\n\nFlag to tell the source to duplicate points shared between faces\n(vertices of the box and internal edge points). Initial value is\nfalse. Implementation note: duplicating points is an easier\nmethod to implement than a minimal number of points.\n"},
  {"GetDuplicateSharedPoints", PyvtkTessellatedBoxSource_GetDuplicateSharedPoints, METH_VARARGS,
   "V.GetDuplicateSharedPoints() -> int\nC++: virtual vtkTypeBool GetDuplicateSharedPoints()\n\nFlag to tell the source to duplicate points shared between faces\n(vertices of the box and internal edge points). Initial value is\nfalse. Implementation note: duplicating points is an easier\nmethod to implement than a minimal number of points.\n"},
  {"DuplicateSharedPointsOn", PyvtkTessellatedBoxSource_DuplicateSharedPointsOn, METH_VARARGS,
   "V.DuplicateSharedPointsOn()\nC++: virtual void DuplicateSharedPointsOn()\n\nFlag to tell the source to duplicate points shared between faces\n(vertices of the box and internal edge points). Initial value is\nfalse. Implementation note: duplicating points is an easier\nmethod to implement than a minimal number of points.\n"},
  {"DuplicateSharedPointsOff", PyvtkTessellatedBoxSource_DuplicateSharedPointsOff, METH_VARARGS,
   "V.DuplicateSharedPointsOff()\nC++: virtual void DuplicateSharedPointsOff()\n\nFlag to tell the source to duplicate points shared between faces\n(vertices of the box and internal edge points). Initial value is\nfalse. Implementation note: duplicating points is an easier\nmethod to implement than a minimal number of points.\n"},
  {"SetQuads", PyvtkTessellatedBoxSource_SetQuads, METH_VARARGS,
   "V.SetQuads(int)\nC++: virtual void SetQuads(vtkTypeBool _arg)\n\nFlag to tell the source to generate either a quad or two triangle\nfor a set of four points. Initial value is false (generate\ntriangles).\n"},
  {"GetQuads", PyvtkTessellatedBoxSource_GetQuads, METH_VARARGS,
   "V.GetQuads() -> int\nC++: virtual vtkTypeBool GetQuads()\n\nFlag to tell the source to generate either a quad or two triangle\nfor a set of four points. Initial value is false (generate\ntriangles).\n"},
  {"QuadsOn", PyvtkTessellatedBoxSource_QuadsOn, METH_VARARGS,
   "V.QuadsOn()\nC++: virtual void QuadsOn()\n\nFlag to tell the source to generate either a quad or two triangle\nfor a set of four points. Initial value is false (generate\ntriangles).\n"},
  {"QuadsOff", PyvtkTessellatedBoxSource_QuadsOff, METH_VARARGS,
   "V.QuadsOff()\nC++: virtual void QuadsOff()\n\nFlag to tell the source to generate either a quad or two triangle\nfor a set of four points. Initial value is false (generate\ntriangles).\n"},
  {"SetOutputPointsPrecision", PyvtkTessellatedBoxSource_SetOutputPointsPrecision, METH_VARARGS,
   "V.SetOutputPointsPrecision(int)\nC++: virtual void SetOutputPointsPrecision(int _arg)\n\nSet/get the desired precision for the output points.\nvtkAlgorithm::SINGLE_PRECISION - Output single-precision floating\npoint. vtkAlgorithm::DOUBLE_PRECISION - Output double-precision\nfloating point.\n"},
  {"GetOutputPointsPrecision", PyvtkTessellatedBoxSource_GetOutputPointsPrecision, METH_VARARGS,
   "V.GetOutputPointsPrecision() -> int\nC++: virtual int GetOutputPointsPrecision()\n\nSet/get the desired precision for the output points.\nvtkAlgorithm::SINGLE_PRECISION - Output single-precision floating\npoint. vtkAlgorithm::DOUBLE_PRECISION - Output double-precision\nfloating point.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkTessellatedBoxSource_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersSourcesPython.vtkTessellatedBoxSource", // tp_name
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
  PyvtkTessellatedBoxSource_Doc, // tp_doc
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

static vtkObjectBase *PyvtkTessellatedBoxSource_StaticNew()
{
  return vtkTessellatedBoxSource::New();
}

PyObject *PyvtkTessellatedBoxSource_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkTessellatedBoxSource_Type, PyvtkTessellatedBoxSource_Methods,
    "vtkTessellatedBoxSource",
 &PyvtkTessellatedBoxSource_StaticNew);

  PyTypeObject *pytype = &PyvtkTessellatedBoxSource_Type;

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

void PyVTKAddFile_vtkTessellatedBoxSource(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkTessellatedBoxSource_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkTessellatedBoxSource", o) != 0)
  {
    Py_DECREF(o);
  }

}

