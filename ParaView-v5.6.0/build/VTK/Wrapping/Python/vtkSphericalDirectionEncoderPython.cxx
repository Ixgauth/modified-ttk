// python wrapper for vtkSphericalDirectionEncoder
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
#include "vtkSphericalDirectionEncoder.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSphericalDirectionEncoder(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSphericalDirectionEncoder_ClassNew(); }

#ifndef DECLARED_PyvtkDirectionEncoder_ClassNew
extern "C" { PyObject *PyvtkDirectionEncoder_ClassNew(); }
#define DECLARED_PyvtkDirectionEncoder_ClassNew
#endif

static const char *PyvtkSphericalDirectionEncoder_Doc =
  "vtkSphericalDirectionEncoder - A direction encoder based on spherical\ncoordinates\n\n"
  "Superclass: vtkDirectionEncoder\n\n"
  "vtkSphericalDirectionEncoder is a direction encoder which uses\n"
  "spherical coordinates for mapping (nx, ny, nz) into an azimuth,\n"
  "elevation pair.\n\n"
  "@sa\n"
  "vtkDirectionEncoder\n\n";


static PyObject *
PyvtkSphericalDirectionEncoder_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSphericalDirectionEncoder::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphericalDirectionEncoder_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphericalDirectionEncoder *op = static_cast<vtkSphericalDirectionEncoder *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSphericalDirectionEncoder::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphericalDirectionEncoder_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSphericalDirectionEncoder *tempr = vtkSphericalDirectionEncoder::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphericalDirectionEncoder_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphericalDirectionEncoder *op = static_cast<vtkSphericalDirectionEncoder *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSphericalDirectionEncoder *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSphericalDirectionEncoder::NewInstance());

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
PyvtkSphericalDirectionEncoder_GetEncodedDirection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEncodedDirection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphericalDirectionEncoder *op = static_cast<vtkSphericalDirectionEncoder *>(vp);

  const size_t size0 = 3;
  float temp0[3];
  float save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->GetEncodedDirection(temp0) :
      op->vtkSphericalDirectionEncoder::GetEncodedDirection(temp0));

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
PyvtkSphericalDirectionEncoder_GetDecodedGradient(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDecodedGradient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphericalDirectionEncoder *op = static_cast<vtkSphericalDirectionEncoder *>(vp);

  int temp0;
  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    float *tempr = (ap.IsBound() ?
      op->GetDecodedGradient(temp0) :
      op->vtkSphericalDirectionEncoder::GetDecodedGradient(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkSphericalDirectionEncoder_GetNumberOfEncodedDirections(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfEncodedDirections");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphericalDirectionEncoder *op = static_cast<vtkSphericalDirectionEncoder *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfEncodedDirections() :
      op->vtkSphericalDirectionEncoder::GetNumberOfEncodedDirections());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphericalDirectionEncoder_GetDecodedGradientTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDecodedGradientTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphericalDirectionEncoder *op = static_cast<vtkSphericalDirectionEncoder *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float *tempr = (ap.IsBound() ?
      op->GetDecodedGradientTable() :
      op->vtkSphericalDirectionEncoder::GetDecodedGradientTable());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSphericalDirectionEncoder_Methods[] = {
  {"IsTypeOf", PyvtkSphericalDirectionEncoder_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nGet the name of this class\n"},
  {"IsA", PyvtkSphericalDirectionEncoder_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nGet the name of this class\n"},
  {"SafeDownCast", PyvtkSphericalDirectionEncoder_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSphericalDirectionEncoder\nC++: static vtkSphericalDirectionEncoder *SafeDownCast(\n    vtkObjectBase *o)\n\nGet the name of this class\n"},
  {"NewInstance", PyvtkSphericalDirectionEncoder_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSphericalDirectionEncoder\nC++: vtkSphericalDirectionEncoder *NewInstance()\n\nGet the name of this class\n"},
  {"GetEncodedDirection", PyvtkSphericalDirectionEncoder_GetEncodedDirection, METH_VARARGS,
   "V.GetEncodedDirection([float, float, float]) -> int\nC++: int GetEncodedDirection(float n[3]) override;\n\nGiven a normal vector n, return the encoded direction\n"},
  {"GetDecodedGradient", PyvtkSphericalDirectionEncoder_GetDecodedGradient, METH_VARARGS,
   "V.GetDecodedGradient(int) -> (float, float, float)\nC++: float *GetDecodedGradient(int value) override;\n\n/ Given an encoded value, return a pointer to the normal vector\n"},
  {"GetNumberOfEncodedDirections", PyvtkSphericalDirectionEncoder_GetNumberOfEncodedDirections, METH_VARARGS,
   "V.GetNumberOfEncodedDirections() -> int\nC++: int GetNumberOfEncodedDirections(void) override;\n\nReturn the number of encoded directions\n"},
  {"GetDecodedGradientTable", PyvtkSphericalDirectionEncoder_GetDecodedGradientTable, METH_VARARGS,
   "V.GetDecodedGradientTable() -> (float, ...)\nC++: float *GetDecodedGradientTable(void) override;\n\nGet the decoded gradient table. There are\nthis->GetNumberOfEncodedDirections() entries in the table, each\ncontaining a normal (direction) vector. This is a flat structure\n- 3 times the number of directions floats in an array.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSphericalDirectionEncoder_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingVolumePython.vtkSphericalDirectionEncoder", // tp_name
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
  PyvtkSphericalDirectionEncoder_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSphericalDirectionEncoder_StaticNew()
{
  return vtkSphericalDirectionEncoder::New();
}

PyObject *PyvtkSphericalDirectionEncoder_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSphericalDirectionEncoder_Type, PyvtkSphericalDirectionEncoder_Methods,
    "vtkSphericalDirectionEncoder",
 &PyvtkSphericalDirectionEncoder_StaticNew);

  PyTypeObject *pytype = &PyvtkSphericalDirectionEncoder_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkDirectionEncoder_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSphericalDirectionEncoder(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSphericalDirectionEncoder_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSphericalDirectionEncoder", o) != 0)
  {
    Py_DECREF(o);
  }

}

