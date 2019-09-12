// python wrapper for vtkDirectionEncoder
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
#include "vtkDirectionEncoder.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkDirectionEncoder(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkDirectionEncoder_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkDirectionEncoder_Doc =
  "vtkDirectionEncoder - encode a direction into a one or two byte value\n\n"
  "Superclass: vtkObject\n\n"
  "Given a direction, encode it into an integer value. This value should\n"
  "be less than 65536, which is the maximum number of encoded directions\n"
  "supported by this superclass. A direction encoded is used to encode\n"
  "normals in a volume for use during volume rendering, and the amount\n"
  "of space that is allocated per normal is 2 bytes. This is an abstract\n"
  "superclass - see the subclasses for specific implementation details.\n\n"
  "@sa\n"
  "vtkRecursiveSphereDirectionEncoder\n\n";


static PyObject *
PyvtkDirectionEncoder_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDirectionEncoder::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDirectionEncoder_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDirectionEncoder *op = static_cast<vtkDirectionEncoder *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDirectionEncoder::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDirectionEncoder_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDirectionEncoder *tempr = vtkDirectionEncoder::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDirectionEncoder_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDirectionEncoder *op = static_cast<vtkDirectionEncoder *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDirectionEncoder *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDirectionEncoder::NewInstance());

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
PyvtkDirectionEncoder_GetEncodedDirection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEncodedDirection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDirectionEncoder *op = static_cast<vtkDirectionEncoder *>(vp);

  const size_t size0 = 3;
  float temp0[3];
  float save0[3];
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    int tempr = op->GetEncodedDirection(temp0);

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
PyvtkDirectionEncoder_GetDecodedGradient(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDecodedGradient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDirectionEncoder *op = static_cast<vtkDirectionEncoder *>(vp);

  int temp0;
  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    float *tempr = op->GetDecodedGradient(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkDirectionEncoder_GetNumberOfEncodedDirections(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfEncodedDirections");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDirectionEncoder *op = static_cast<vtkDirectionEncoder *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    int tempr = op->GetNumberOfEncodedDirections();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDirectionEncoder_GetDecodedGradientTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDecodedGradientTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDirectionEncoder *op = static_cast<vtkDirectionEncoder *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    float *tempr = op->GetDecodedGradientTable();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkDirectionEncoder_Methods[] = {
  {"IsTypeOf", PyvtkDirectionEncoder_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nGet the name of this class\n"},
  {"IsA", PyvtkDirectionEncoder_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nGet the name of this class\n"},
  {"SafeDownCast", PyvtkDirectionEncoder_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkDirectionEncoder\nC++: static vtkDirectionEncoder *SafeDownCast(vtkObjectBase *o)\n\nGet the name of this class\n"},
  {"NewInstance", PyvtkDirectionEncoder_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkDirectionEncoder\nC++: vtkDirectionEncoder *NewInstance()\n\nGet the name of this class\n"},
  {"GetEncodedDirection", PyvtkDirectionEncoder_GetEncodedDirection, METH_VARARGS,
   "V.GetEncodedDirection([float, float, float]) -> int\nC++: virtual int GetEncodedDirection(float n[3])\n\nGiven a normal vector n, return the encoded direction\n"},
  {"GetDecodedGradient", PyvtkDirectionEncoder_GetDecodedGradient, METH_VARARGS,
   "V.GetDecodedGradient(int) -> (float, float, float)\nC++: virtual float *GetDecodedGradient(int value)\n\n/ Given an encoded value, return a pointer to the normal vector\n"},
  {"GetNumberOfEncodedDirections", PyvtkDirectionEncoder_GetNumberOfEncodedDirections, METH_VARARGS,
   "V.GetNumberOfEncodedDirections() -> int\nC++: virtual int GetNumberOfEncodedDirections(void)\n\nReturn the number of encoded directions\n"},
  {"GetDecodedGradientTable", PyvtkDirectionEncoder_GetDecodedGradientTable, METH_VARARGS,
   "V.GetDecodedGradientTable() -> (float, ...)\nC++: virtual float *GetDecodedGradientTable(void)\n\nGet the decoded gradient table. There are\nthis->GetNumberOfEncodedDirections() entries in the table, each\ncontaining a normal (direction) vector. This is a flat structure\n- 3 times the number of directions floats in an array.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkDirectionEncoder_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingVolumePython.vtkDirectionEncoder", // tp_name
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
  PyvtkDirectionEncoder_Doc, // tp_doc
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

PyObject *PyvtkDirectionEncoder_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkDirectionEncoder_Type, PyvtkDirectionEncoder_Methods,
    "vtkDirectionEncoder",
 nullptr);

  PyTypeObject *pytype = &PyvtkDirectionEncoder_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkObject_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkDirectionEncoder(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkDirectionEncoder_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkDirectionEncoder", o) != 0)
  {
    Py_DECREF(o);
  }

}

