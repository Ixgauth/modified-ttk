// python wrapper for vtkRecursiveSphereDirectionEncoder
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
#include "vtkRecursiveSphereDirectionEncoder.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkRecursiveSphereDirectionEncoder(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkRecursiveSphereDirectionEncoder_ClassNew(); }

#ifndef DECLARED_PyvtkDirectionEncoder_ClassNew
extern "C" { PyObject *PyvtkDirectionEncoder_ClassNew(); }
#define DECLARED_PyvtkDirectionEncoder_ClassNew
#endif

static const char *PyvtkRecursiveSphereDirectionEncoder_Doc =
  "vtkRecursiveSphereDirectionEncoder - A direction encoder based on the\nrecursive subdivision of an octahedron\n\n"
  "Superclass: vtkDirectionEncoder\n\n"
  "vtkRecursiveSphereDirectionEncoder is a direction encoder which uses\n"
  "the vertices of a recursive subdivision of an octahedron (with the\n"
  "vertices pushed out onto the surface of an enclosing sphere) to\n"
  "encode directions into a two byte value.\n\n"
  "@sa\n"
  "vtkDirectionEncoder\n\n";


static PyObject *
PyvtkRecursiveSphereDirectionEncoder_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkRecursiveSphereDirectionEncoder::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRecursiveSphereDirectionEncoder_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRecursiveSphereDirectionEncoder *op = static_cast<vtkRecursiveSphereDirectionEncoder *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkRecursiveSphereDirectionEncoder::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRecursiveSphereDirectionEncoder_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkRecursiveSphereDirectionEncoder *tempr = vtkRecursiveSphereDirectionEncoder::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRecursiveSphereDirectionEncoder_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRecursiveSphereDirectionEncoder *op = static_cast<vtkRecursiveSphereDirectionEncoder *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRecursiveSphereDirectionEncoder *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkRecursiveSphereDirectionEncoder::NewInstance());

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
PyvtkRecursiveSphereDirectionEncoder_GetEncodedDirection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEncodedDirection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRecursiveSphereDirectionEncoder *op = static_cast<vtkRecursiveSphereDirectionEncoder *>(vp);

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
      op->vtkRecursiveSphereDirectionEncoder::GetEncodedDirection(temp0));

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
PyvtkRecursiveSphereDirectionEncoder_GetDecodedGradient(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDecodedGradient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRecursiveSphereDirectionEncoder *op = static_cast<vtkRecursiveSphereDirectionEncoder *>(vp);

  int temp0;
  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    float *tempr = (ap.IsBound() ?
      op->GetDecodedGradient(temp0) :
      op->vtkRecursiveSphereDirectionEncoder::GetDecodedGradient(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkRecursiveSphereDirectionEncoder_GetNumberOfEncodedDirections(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfEncodedDirections");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRecursiveSphereDirectionEncoder *op = static_cast<vtkRecursiveSphereDirectionEncoder *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfEncodedDirections() :
      op->vtkRecursiveSphereDirectionEncoder::GetNumberOfEncodedDirections());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRecursiveSphereDirectionEncoder_GetDecodedGradientTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDecodedGradientTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRecursiveSphereDirectionEncoder *op = static_cast<vtkRecursiveSphereDirectionEncoder *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float *tempr = (ap.IsBound() ?
      op->GetDecodedGradientTable() :
      op->vtkRecursiveSphereDirectionEncoder::GetDecodedGradientTable());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRecursiveSphereDirectionEncoder_SetRecursionDepth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRecursionDepth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRecursiveSphereDirectionEncoder *op = static_cast<vtkRecursiveSphereDirectionEncoder *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRecursionDepth(temp0);
    }
    else
    {
      op->vtkRecursiveSphereDirectionEncoder::SetRecursionDepth(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRecursiveSphereDirectionEncoder_GetRecursionDepthMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRecursionDepthMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRecursiveSphereDirectionEncoder *op = static_cast<vtkRecursiveSphereDirectionEncoder *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRecursionDepthMinValue() :
      op->vtkRecursiveSphereDirectionEncoder::GetRecursionDepthMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRecursiveSphereDirectionEncoder_GetRecursionDepthMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRecursionDepthMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRecursiveSphereDirectionEncoder *op = static_cast<vtkRecursiveSphereDirectionEncoder *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRecursionDepthMaxValue() :
      op->vtkRecursiveSphereDirectionEncoder::GetRecursionDepthMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRecursiveSphereDirectionEncoder_GetRecursionDepth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRecursionDepth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRecursiveSphereDirectionEncoder *op = static_cast<vtkRecursiveSphereDirectionEncoder *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRecursionDepth() :
      op->vtkRecursiveSphereDirectionEncoder::GetRecursionDepth());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkRecursiveSphereDirectionEncoder_Methods[] = {
  {"IsTypeOf", PyvtkRecursiveSphereDirectionEncoder_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nGet the name of this class\n"},
  {"IsA", PyvtkRecursiveSphereDirectionEncoder_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nGet the name of this class\n"},
  {"SafeDownCast", PyvtkRecursiveSphereDirectionEncoder_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase)\n    -> vtkRecursiveSphereDirectionEncoder\nC++: static vtkRecursiveSphereDirectionEncoder *SafeDownCast(\n    vtkObjectBase *o)\n\nGet the name of this class\n"},
  {"NewInstance", PyvtkRecursiveSphereDirectionEncoder_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkRecursiveSphereDirectionEncoder\nC++: vtkRecursiveSphereDirectionEncoder *NewInstance()\n\nGet the name of this class\n"},
  {"GetEncodedDirection", PyvtkRecursiveSphereDirectionEncoder_GetEncodedDirection, METH_VARARGS,
   "V.GetEncodedDirection([float, float, float]) -> int\nC++: int GetEncodedDirection(float n[3]) override;\n\nGiven a normal vector n, return the encoded direction\n"},
  {"GetDecodedGradient", PyvtkRecursiveSphereDirectionEncoder_GetDecodedGradient, METH_VARARGS,
   "V.GetDecodedGradient(int) -> (float, float, float)\nC++: float *GetDecodedGradient(int value) override;\n\n/ Given an encoded value, return a pointer to the normal vector\n"},
  {"GetNumberOfEncodedDirections", PyvtkRecursiveSphereDirectionEncoder_GetNumberOfEncodedDirections, METH_VARARGS,
   "V.GetNumberOfEncodedDirections() -> int\nC++: int GetNumberOfEncodedDirections(void) override;\n\nReturn the number of encoded directions\n"},
  {"GetDecodedGradientTable", PyvtkRecursiveSphereDirectionEncoder_GetDecodedGradientTable, METH_VARARGS,
   "V.GetDecodedGradientTable() -> (float, ...)\nC++: float *GetDecodedGradientTable(void) override;\n\nGet the decoded gradient table. There are\nthis->GetNumberOfEncodedDirections() entries in the table, each\ncontaining a normal (direction) vector. This is a flat structure\n- 3 times the number of directions floats in an array.\n"},
  {"SetRecursionDepth", PyvtkRecursiveSphereDirectionEncoder_SetRecursionDepth, METH_VARARGS,
   "V.SetRecursionDepth(int)\nC++: virtual void SetRecursionDepth(int _arg)\n\nSet / Get the recursion depth for the subdivision. This indicates\nhow many time one triangle on the initial 8-sided sphere model is\nreplaced by four triangles formed by connecting triangle edge\nmidpoints. A recursion level of 0 yields 8 triangles with 6\nunique vertices. The normals are the vectors from the sphere\ncenter through the vertices. The number of directions will be 11\nsince the four normals with 0 z values will be duplicated in the\ntable - once with +0 values and the other time with -0 values,\nand an addition index will be used to represent the (0,0,0)\nnormal. If we instead choose a recursion level of 6 (the maximum\nthat can fit within 2 bytes) the number of directions is 16643,\nwith 16386 unique directions and a zero normal.\n"},
  {"GetRecursionDepthMinValue", PyvtkRecursiveSphereDirectionEncoder_GetRecursionDepthMinValue, METH_VARARGS,
   "V.GetRecursionDepthMinValue() -> int\nC++: virtual int GetRecursionDepthMinValue()\n\nSet / Get the recursion depth for the subdivision. This indicates\nhow many time one triangle on the initial 8-sided sphere model is\nreplaced by four triangles formed by connecting triangle edge\nmidpoints. A recursion level of 0 yields 8 triangles with 6\nunique vertices. The normals are the vectors from the sphere\ncenter through the vertices. The number of directions will be 11\nsince the four normals with 0 z values will be duplicated in the\ntable - once with +0 values and the other time with -0 values,\nand an addition index will be used to represent the (0,0,0)\nnormal. If we instead choose a recursion level of 6 (the maximum\nthat can fit within 2 bytes) the number of directions is 16643,\nwith 16386 unique directions and a zero normal.\n"},
  {"GetRecursionDepthMaxValue", PyvtkRecursiveSphereDirectionEncoder_GetRecursionDepthMaxValue, METH_VARARGS,
   "V.GetRecursionDepthMaxValue() -> int\nC++: virtual int GetRecursionDepthMaxValue()\n\nSet / Get the recursion depth for the subdivision. This indicates\nhow many time one triangle on the initial 8-sided sphere model is\nreplaced by four triangles formed by connecting triangle edge\nmidpoints. A recursion level of 0 yields 8 triangles with 6\nunique vertices. The normals are the vectors from the sphere\ncenter through the vertices. The number of directions will be 11\nsince the four normals with 0 z values will be duplicated in the\ntable - once with +0 values and the other time with -0 values,\nand an addition index will be used to represent the (0,0,0)\nnormal. If we instead choose a recursion level of 6 (the maximum\nthat can fit within 2 bytes) the number of directions is 16643,\nwith 16386 unique directions and a zero normal.\n"},
  {"GetRecursionDepth", PyvtkRecursiveSphereDirectionEncoder_GetRecursionDepth, METH_VARARGS,
   "V.GetRecursionDepth() -> int\nC++: virtual int GetRecursionDepth()\n\nSet / Get the recursion depth for the subdivision. This indicates\nhow many time one triangle on the initial 8-sided sphere model is\nreplaced by four triangles formed by connecting triangle edge\nmidpoints. A recursion level of 0 yields 8 triangles with 6\nunique vertices. The normals are the vectors from the sphere\ncenter through the vertices. The number of directions will be 11\nsince the four normals with 0 z values will be duplicated in the\ntable - once with +0 values and the other time with -0 values,\nand an addition index will be used to represent the (0,0,0)\nnormal. If we instead choose a recursion level of 6 (the maximum\nthat can fit within 2 bytes) the number of directions is 16643,\nwith 16386 unique directions and a zero normal.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkRecursiveSphereDirectionEncoder_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingVolumePython.vtkRecursiveSphereDirectionEncoder", // tp_name
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
  PyvtkRecursiveSphereDirectionEncoder_Doc, // tp_doc
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

static vtkObjectBase *PyvtkRecursiveSphereDirectionEncoder_StaticNew()
{
  return vtkRecursiveSphereDirectionEncoder::New();
}

PyObject *PyvtkRecursiveSphereDirectionEncoder_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkRecursiveSphereDirectionEncoder_Type, PyvtkRecursiveSphereDirectionEncoder_Methods,
    "vtkRecursiveSphereDirectionEncoder",
 &PyvtkRecursiveSphereDirectionEncoder_StaticNew);

  PyTypeObject *pytype = &PyvtkRecursiveSphereDirectionEncoder_Type;

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

void PyVTKAddFile_vtkRecursiveSphereDirectionEncoder(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkRecursiveSphereDirectionEncoder_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkRecursiveSphereDirectionEncoder", o) != 0)
  {
    Py_DECREF(o);
  }

}

