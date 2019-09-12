// python wrapper for vtkSurfaceVectors
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
#include "vtkSurfaceVectors.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSurfaceVectors(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSurfaceVectors_ClassNew(); }

#ifndef DECLARED_PyvtkDataSetAlgorithm_ClassNew
extern "C" { PyObject *PyvtkDataSetAlgorithm_ClassNew(); }
#define DECLARED_PyvtkDataSetAlgorithm_ClassNew
#endif

static const char *PyvtkSurfaceVectors_Doc =
  "vtkSurfaceVectors - Constrains vectors to surface.\n\n"
  "Superclass: vtkDataSetAlgorithm\n\n"
  "This filter works on point vectors.  It does not work on cell vectors\n"
  "yet. A normal is conputed for a point by averaging normals of\n"
  "surrounding 2D cells.  The vector is then constrained to be\n"
  "perpendicular to the normal.\n\n";

static PyTypeObject PyvtkSurfaceVectors_ConstraintMode_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsDefaultPython.vtkSurfaceVectors.ConstraintMode", // tp_name
  sizeof(PyIntObject), // tp_basicsize
  0, // tp_itemsize
  nullptr, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  nullptr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  nullptr, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  nullptr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  nullptr, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  &PyInt_Type, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  nullptr, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

PyObject *PyvtkSurfaceVectors_ConstraintMode_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkSurfaceVectors_ConstraintMode_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkSurfaceVectors_ConstraintMode_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkSurfaceVectors_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSurfaceVectors::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceVectors_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceVectors *op = static_cast<vtkSurfaceVectors *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSurfaceVectors::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceVectors_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSurfaceVectors *tempr = vtkSurfaceVectors::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceVectors_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceVectors *op = static_cast<vtkSurfaceVectors *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSurfaceVectors *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSurfaceVectors::NewInstance());

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
PyvtkSurfaceVectors_SetConstraintMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConstraintMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceVectors *op = static_cast<vtkSurfaceVectors *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetConstraintMode(temp0);
    }
    else
    {
      op->vtkSurfaceVectors::SetConstraintMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceVectors_GetConstraintMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConstraintMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceVectors *op = static_cast<vtkSurfaceVectors *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetConstraintMode() :
      op->vtkSurfaceVectors::GetConstraintMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceVectors_SetConstraintModeToParallel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConstraintModeToParallel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceVectors *op = static_cast<vtkSurfaceVectors *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetConstraintModeToParallel();
    }
    else
    {
      op->vtkSurfaceVectors::SetConstraintModeToParallel();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceVectors_SetConstraintModeToPerpendicular(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConstraintModeToPerpendicular");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceVectors *op = static_cast<vtkSurfaceVectors *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetConstraintModeToPerpendicular();
    }
    else
    {
      op->vtkSurfaceVectors::SetConstraintModeToPerpendicular();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceVectors_SetConstraintModeToPerpendicularScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConstraintModeToPerpendicularScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceVectors *op = static_cast<vtkSurfaceVectors *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetConstraintModeToPerpendicularScale();
    }
    else
    {
      op->vtkSurfaceVectors::SetConstraintModeToPerpendicularScale();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSurfaceVectors_Methods[] = {
  {"IsTypeOf", PyvtkSurfaceVectors_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSurfaceVectors_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSurfaceVectors_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSurfaceVectors\nC++: static vtkSurfaceVectors *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSurfaceVectors_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSurfaceVectors\nC++: vtkSurfaceVectors *NewInstance()\n\n"},
  {"SetConstraintMode", PyvtkSurfaceVectors_SetConstraintMode, METH_VARARGS,
   "V.SetConstraintMode(int)\nC++: virtual void SetConstraintMode(int _arg)\n\nThis mode determines whether this filter projects vectors to be\nperpendicular to surface or parallel to surface. It defaults to\nparallel.\n"},
  {"GetConstraintMode", PyvtkSurfaceVectors_GetConstraintMode, METH_VARARGS,
   "V.GetConstraintMode() -> int\nC++: virtual int GetConstraintMode()\n\nThis mode determines whether this filter projects vectors to be\nperpendicular to surface or parallel to surface. It defaults to\nparallel.\n"},
  {"SetConstraintModeToParallel", PyvtkSurfaceVectors_SetConstraintModeToParallel, METH_VARARGS,
   "V.SetConstraintModeToParallel()\nC++: void SetConstraintModeToParallel()\n\nThis mode determines whether this filter projects vectors to be\nperpendicular to surface or parallel to surface. It defaults to\nparallel.\n"},
  {"SetConstraintModeToPerpendicular", PyvtkSurfaceVectors_SetConstraintModeToPerpendicular, METH_VARARGS,
   "V.SetConstraintModeToPerpendicular()\nC++: void SetConstraintModeToPerpendicular()\n\nThis mode determines whether this filter projects vectors to be\nperpendicular to surface or parallel to surface. It defaults to\nparallel.\n"},
  {"SetConstraintModeToPerpendicularScale", PyvtkSurfaceVectors_SetConstraintModeToPerpendicularScale, METH_VARARGS,
   "V.SetConstraintModeToPerpendicularScale()\nC++: void SetConstraintModeToPerpendicularScale()\n\nThis mode determines whether this filter projects vectors to be\nperpendicular to surface or parallel to surface. It defaults to\nparallel.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSurfaceVectors_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsDefaultPython.vtkSurfaceVectors", // tp_name
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
  PyvtkSurfaceVectors_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSurfaceVectors_StaticNew()
{
  return vtkSurfaceVectors::New();
}

PyObject *PyvtkSurfaceVectors_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSurfaceVectors_Type, PyvtkSurfaceVectors_Methods,
    "vtkSurfaceVectors",
 &PyvtkSurfaceVectors_StaticNew);

  PyTypeObject *pytype = &PyvtkSurfaceVectors_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkDataSetAlgorithm_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkSurfaceVectors_ConstraintMode_Type);
  PyvtkSurfaceVectors_ConstraintMode_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkSurfaceVectors_ConstraintMode_Type);

  o = (PyObject *)&PyvtkSurfaceVectors_ConstraintMode_Type;
  if (PyDict_SetItemString(d, "ConstraintMode", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 3; c++)
  {
    static const struct { const char *name; int value; }
      constants[3] = {
        { "Parallel", vtkSurfaceVectors::Parallel },
        { "Perpendicular", vtkSurfaceVectors::Perpendicular },
        { "PerpendicularScale", vtkSurfaceVectors::PerpendicularScale },
      };

    o = PyvtkSurfaceVectors_ConstraintMode_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSurfaceVectors(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSurfaceVectors_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSurfaceVectors", o) != 0)
  {
    Py_DECREF(o);
  }

}

