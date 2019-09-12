// python wrapper for vtkCompressCompositer
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
#include "vtkCompressCompositer.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCompressCompositer(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkCompressCompositer_ClassNew(); }

#ifndef DECLARED_PyvtkCompositer_ClassNew
extern "C" { PyObject *PyvtkCompositer_ClassNew(); }
#define DECLARED_PyvtkCompositer_ClassNew
#endif

static const char *PyvtkCompressCompositer_Doc =
  "vtkCompressCompositer - Implements compressed tree based compositing.\n\n"
  "Superclass: vtkCompositer\n\n"
  "vtkCompressCompositer operates in multiple processes.  Each\n"
  "compositer has a render window.  They use vtkMultiProcessController\n"
  "to communicate the color and depth buffer to process 0's render\n"
  "window. It will not handle transparency.  Compositing is run length\n"
  "encoding of background pixels.\n\n"
  "SECTION See Also vtkCompositeManager.\n\n";


static PyObject *
PyvtkCompressCompositer_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCompressCompositer::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompressCompositer_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompressCompositer *op = static_cast<vtkCompressCompositer *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCompressCompositer::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompressCompositer_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCompressCompositer *tempr = vtkCompressCompositer::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompressCompositer_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompressCompositer *op = static_cast<vtkCompressCompositer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCompressCompositer *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCompressCompositer::NewInstance());

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
PyvtkCompressCompositer_CompositeBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CompositeBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompressCompositer *op = static_cast<vtkCompressCompositer *>(vp);

  vtkDataArray *temp0 = nullptr;
  vtkFloatArray *temp1 = nullptr;
  vtkDataArray *temp2 = nullptr;
  vtkFloatArray *temp3 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetVTKObject(temp1, "vtkFloatArray") &&
      ap.GetVTKObject(temp2, "vtkDataArray") &&
      ap.GetVTKObject(temp3, "vtkFloatArray"))
  {
    if (ap.IsBound())
    {
      op->CompositeBuffer(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkCompressCompositer::CompositeBuffer(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompressCompositer_Compress(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Compress");

  vtkFloatArray *temp0 = nullptr;
  vtkDataArray *temp1 = nullptr;
  vtkFloatArray *temp2 = nullptr;
  vtkDataArray *temp3 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkFloatArray") &&
      ap.GetVTKObject(temp1, "vtkDataArray") &&
      ap.GetVTKObject(temp2, "vtkFloatArray") &&
      ap.GetVTKObject(temp3, "vtkDataArray"))
  {
    vtkCompressCompositer::Compress(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompressCompositer_Uncompress(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Uncompress");

  vtkFloatArray *temp0 = nullptr;
  vtkDataArray *temp1 = nullptr;
  vtkFloatArray *temp2 = nullptr;
  vtkDataArray *temp3 = nullptr;
  int temp4;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(5) &&
      ap.GetVTKObject(temp0, "vtkFloatArray") &&
      ap.GetVTKObject(temp1, "vtkDataArray") &&
      ap.GetVTKObject(temp2, "vtkFloatArray") &&
      ap.GetVTKObject(temp3, "vtkDataArray") &&
      ap.GetValue(temp4))
  {
    vtkCompressCompositer::Uncompress(temp0, temp1, temp2, temp3, temp4);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompressCompositer_CompositeImagePair(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "CompositeImagePair");

  vtkFloatArray *temp0 = nullptr;
  vtkDataArray *temp1 = nullptr;
  vtkFloatArray *temp2 = nullptr;
  vtkDataArray *temp3 = nullptr;
  vtkFloatArray *temp4 = nullptr;
  vtkDataArray *temp5 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(6) &&
      ap.GetVTKObject(temp0, "vtkFloatArray") &&
      ap.GetVTKObject(temp1, "vtkDataArray") &&
      ap.GetVTKObject(temp2, "vtkFloatArray") &&
      ap.GetVTKObject(temp3, "vtkDataArray") &&
      ap.GetVTKObject(temp4, "vtkFloatArray") &&
      ap.GetVTKObject(temp5, "vtkDataArray"))
  {
    vtkCompressCompositer::CompositeImagePair(temp0, temp1, temp2, temp3, temp4, temp5);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkCompressCompositer_Methods[] = {
  {"IsTypeOf", PyvtkCompressCompositer_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCompressCompositer_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCompressCompositer_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkCompressCompositer\nC++: static vtkCompressCompositer *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCompressCompositer_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkCompressCompositer\nC++: vtkCompressCompositer *NewInstance()\n\n"},
  {"CompositeBuffer", PyvtkCompressCompositer_CompositeBuffer, METH_VARARGS,
   "V.CompositeBuffer(vtkDataArray, vtkFloatArray, vtkDataArray,\n    vtkFloatArray)\nC++: void CompositeBuffer(vtkDataArray *pBuf, vtkFloatArray *zBuf,\n     vtkDataArray *pTmp, vtkFloatArray *zTmp) override;\n\nThis method gets called on every process.  The final image gets\nput into pBuf and zBuf.\n"},
  {"Compress", PyvtkCompressCompositer_Compress, METH_VARARGS,
   "V.Compress(vtkFloatArray, vtkDataArray, vtkFloatArray,\n    vtkDataArray)\nC++: static void Compress(vtkFloatArray *zIn, vtkDataArray *pIn,\n    vtkFloatArray *zOut, vtkDataArray *pOut)\n\nI am granting access to these methods and making them static So I\ncan create a TileDisplayCompositer which uses compression.\n"},
  {"Uncompress", PyvtkCompressCompositer_Uncompress, METH_VARARGS,
   "V.Uncompress(vtkFloatArray, vtkDataArray, vtkFloatArray,\n    vtkDataArray, int)\nC++: static void Uncompress(vtkFloatArray *zIn, vtkDataArray *pIn,\n     vtkFloatArray *zOut, vtkDataArray *pOut, int finalLength)\n\n"},
  {"CompositeImagePair", PyvtkCompressCompositer_CompositeImagePair, METH_VARARGS,
   "V.CompositeImagePair(vtkFloatArray, vtkDataArray, vtkFloatArray,\n    vtkDataArray, vtkFloatArray, vtkDataArray)\nC++: static void CompositeImagePair(vtkFloatArray *localZ,\n    vtkDataArray *localP, vtkFloatArray *remoteZ,\n    vtkDataArray *remoteP, vtkFloatArray *outZ,\n    vtkDataArray *outP)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkCompressCompositer_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingParallelPython.vtkCompressCompositer", // tp_name
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
  PyvtkCompressCompositer_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCompressCompositer_StaticNew()
{
  return vtkCompressCompositer::New();
}

PyObject *PyvtkCompressCompositer_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkCompressCompositer_Type, PyvtkCompressCompositer_Methods,
    "vtkCompressCompositer",
 &PyvtkCompressCompositer_StaticNew);

  PyTypeObject *pytype = &PyvtkCompressCompositer_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkCompositer_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCompressCompositer(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCompressCompositer_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCompressCompositer", o) != 0)
  {
    Py_DECREF(o);
  }

}

