// python wrapper for vtkPolygonalHandleRepresentation3D
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
#include "vtkPolygonalHandleRepresentation3D.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPolygonalHandleRepresentation3D(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPolygonalHandleRepresentation3D_ClassNew(); }

#ifndef DECLARED_PyvtkAbstractPolygonalHandleRepresentation3D_ClassNew
extern "C" { PyObject *PyvtkAbstractPolygonalHandleRepresentation3D_ClassNew(); }
#define DECLARED_PyvtkAbstractPolygonalHandleRepresentation3D_ClassNew
#endif

static const char *PyvtkPolygonalHandleRepresentation3D_Doc =
  "vtkPolygonalHandleRepresentation3D - represent a user defined handle\ngeometry in 3D space\n\n"
  "Superclass: vtkAbstractPolygonalHandleRepresentation3D\n\n"
  "This class serves as the geometrical representation of a\n"
  "vtkHandleWidget. The handle can be represented by an arbitrary\n"
  "polygonal data (vtkPolyData), set via SetHandle(vtkPolyData *). The\n"
  "actual position of the handle will be initially assumed to be\n"
  "(0,0,0). You can specify an offset from this position if desired.\n"
  "@sa\n"
  "vtkPointHandleRepresentation3D vtkHandleRepresentation\n"
  "vtkHandleWidget\n\n";


static PyObject *
PyvtkPolygonalHandleRepresentation3D_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPolygonalHandleRepresentation3D::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolygonalHandleRepresentation3D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygonalHandleRepresentation3D *op = static_cast<vtkPolygonalHandleRepresentation3D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPolygonalHandleRepresentation3D::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolygonalHandleRepresentation3D_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPolygonalHandleRepresentation3D *tempr = vtkPolygonalHandleRepresentation3D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolygonalHandleRepresentation3D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygonalHandleRepresentation3D *op = static_cast<vtkPolygonalHandleRepresentation3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPolygonalHandleRepresentation3D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPolygonalHandleRepresentation3D::NewInstance());

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
PyvtkPolygonalHandleRepresentation3D_SetWorldPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygonalHandleRepresentation3D *op = static_cast<vtkPolygonalHandleRepresentation3D *>(vp);

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
      op->SetWorldPosition(temp0);
    }
    else
    {
      op->vtkPolygonalHandleRepresentation3D::SetWorldPosition(temp0);
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
PyvtkPolygonalHandleRepresentation3D_SetOffset_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygonalHandleRepresentation3D *op = static_cast<vtkPolygonalHandleRepresentation3D *>(vp);

  double temp0;
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
      op->SetOffset(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPolygonalHandleRepresentation3D::SetOffset(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPolygonalHandleRepresentation3D_SetOffset_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygonalHandleRepresentation3D *op = static_cast<vtkPolygonalHandleRepresentation3D *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetOffset(temp0);
    }
    else
    {
      op->vtkPolygonalHandleRepresentation3D::SetOffset(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPolygonalHandleRepresentation3D_SetOffset(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkPolygonalHandleRepresentation3D_SetOffset_s1(self, args);
    case 1:
      return PyvtkPolygonalHandleRepresentation3D_SetOffset_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetOffset");
  return nullptr;
}



static PyObject *
PyvtkPolygonalHandleRepresentation3D_GetOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygonalHandleRepresentation3D *op = static_cast<vtkPolygonalHandleRepresentation3D *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetOffset() :
      op->vtkPolygonalHandleRepresentation3D::GetOffset());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyMethodDef PyvtkPolygonalHandleRepresentation3D_Methods[] = {
  {"IsTypeOf", PyvtkPolygonalHandleRepresentation3D_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard methods for instances of this class.\n"},
  {"IsA", PyvtkPolygonalHandleRepresentation3D_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard methods for instances of this class.\n"},
  {"SafeDownCast", PyvtkPolygonalHandleRepresentation3D_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase)\n    -> vtkPolygonalHandleRepresentation3D\nC++: static vtkPolygonalHandleRepresentation3D *SafeDownCast(\n    vtkObjectBase *o)\n\nStandard methods for instances of this class.\n"},
  {"NewInstance", PyvtkPolygonalHandleRepresentation3D_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPolygonalHandleRepresentation3D\nC++: vtkPolygonalHandleRepresentation3D *NewInstance()\n\nStandard methods for instances of this class.\n"},
  {"SetWorldPosition", PyvtkPolygonalHandleRepresentation3D_SetWorldPosition, METH_VARARGS,
   "V.SetWorldPosition([float, float, float])\nC++: void SetWorldPosition(double p[3]) override;\n\nSet the position of the point in world and display coordinates.\n"},
  {"SetOffset", PyvtkPolygonalHandleRepresentation3D_SetOffset, METH_VARARGS,
   "V.SetOffset(float, float, float)\nC++: void SetOffset(double, double, double)\nV.SetOffset((float, float, float))\nC++: void SetOffset(double a[3])\n\n"},
  {"GetOffset", PyvtkPolygonalHandleRepresentation3D_GetOffset, METH_VARARGS,
   "V.GetOffset() -> (float, float, float)\nC++: double *GetOffset()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPolygonalHandleRepresentation3D_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInteractionWidgetsPython.vtkPolygonalHandleRepresentation3D", // tp_name
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
  PyvtkPolygonalHandleRepresentation3D_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPolygonalHandleRepresentation3D_StaticNew()
{
  return vtkPolygonalHandleRepresentation3D::New();
}

PyObject *PyvtkPolygonalHandleRepresentation3D_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPolygonalHandleRepresentation3D_Type, PyvtkPolygonalHandleRepresentation3D_Methods,
    "vtkPolygonalHandleRepresentation3D",
 &PyvtkPolygonalHandleRepresentation3D_StaticNew);

  PyTypeObject *pytype = &PyvtkPolygonalHandleRepresentation3D_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkAbstractPolygonalHandleRepresentation3D_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPolygonalHandleRepresentation3D(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPolygonalHandleRepresentation3D_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPolygonalHandleRepresentation3D", o) != 0)
  {
    Py_DECREF(o);
  }

}

