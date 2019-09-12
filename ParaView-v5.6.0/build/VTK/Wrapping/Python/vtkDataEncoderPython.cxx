// python wrapper for vtkDataEncoder
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
#include "vtkImageData.h"
#include "vtkDataEncoder.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkDataEncoder(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkDataEncoder_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkDataEncoder_Doc =
  "vtkDataEncoder - class used to compress/encode images using threads.\n\n"
  "Superclass: vtkObject\n\n"
  "vtkDataEncoder is used to compress and encode images using threads.\n"
  "Multiple images can be pushed into the encoder for compression and\n"
  "encoding. We use a vtkTypeUInt32 as the key to identify different\n"
  "image pipes. The images in each pipe will be processed in parallel\n"
  "threads. The latest compressed and encoded image can be accessed\n"
  "using GetLatestOutput().\n\n"
  "vtkDataEncoder uses a thread-pool to do the compression and encoding\n"
  "in parallel.  Note that images may not come out of the vtkDataEncoder\n"
  "in the same order as they are pushed in, if an image pushed in at\n"
  "N-th location takes longer to compress and encode than that pushed in\n"
  "at N+1-th location or if it was pushed in before the N-th location\n"
  "was even taken up for encoding by the a thread in the thread pool.\n\n";


static PyObject *
PyvtkDataEncoder_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDataEncoder::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataEncoder_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataEncoder *op = static_cast<vtkDataEncoder *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDataEncoder::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataEncoder_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDataEncoder *tempr = vtkDataEncoder::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataEncoder_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataEncoder *op = static_cast<vtkDataEncoder *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataEncoder *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDataEncoder::NewInstance());

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
PyvtkDataEncoder_SetMaxThreads(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxThreads");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataEncoder *op = static_cast<vtkDataEncoder *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaxThreads(temp0);
    }
    else
    {
      op->vtkDataEncoder::SetMaxThreads(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataEncoder_GetMaxThreads(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxThreads");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataEncoder *op = static_cast<vtkDataEncoder *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetMaxThreads() :
      op->vtkDataEncoder::GetMaxThreads());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataEncoder_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataEncoder *op = static_cast<vtkDataEncoder *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Initialize();
    }
    else
    {
      op->vtkDataEncoder::Initialize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataEncoder_Flush(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Flush");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataEncoder *op = static_cast<vtkDataEncoder *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->Flush(temp0);
    }
    else
    {
      op->vtkDataEncoder::Flush(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataEncoder_EncodeAsBase64Png(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EncodeAsBase64Png");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataEncoder *op = static_cast<vtkDataEncoder *>(vp);

  vtkImageData *temp0 = nullptr;
  int temp1 = 5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkImageData") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    const char *tempr = (ap.IsBound() ?
      op->EncodeAsBase64Png(temp0, temp1) :
      op->vtkDataEncoder::EncodeAsBase64Png(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataEncoder_EncodeAsBase64Jpg(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EncodeAsBase64Jpg");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataEncoder *op = static_cast<vtkDataEncoder *>(vp);

  vtkImageData *temp0 = nullptr;
  int temp1 = 50;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkImageData") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    const char *tempr = (ap.IsBound() ?
      op->EncodeAsBase64Jpg(temp0, temp1) :
      op->vtkDataEncoder::EncodeAsBase64Jpg(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataEncoder_Finalize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Finalize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataEncoder *op = static_cast<vtkDataEncoder *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Finalize();
    }
    else
    {
      op->vtkDataEncoder::Finalize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkDataEncoder_Methods[] = {
  {"IsTypeOf", PyvtkDataEncoder_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkDataEncoder_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkDataEncoder_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkDataEncoder\nC++: static vtkDataEncoder *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkDataEncoder_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkDataEncoder\nC++: vtkDataEncoder *NewInstance()\n\n"},
  {"SetMaxThreads", PyvtkDataEncoder_SetMaxThreads, METH_VARARGS,
   "V.SetMaxThreads(int)\nC++: void SetMaxThreads(vtkTypeUInt32)\n\nDefine the number of worker threads to use. Initialize() needs to\nbe called after changing the thread count.\n"},
  {"GetMaxThreads", PyvtkDataEncoder_GetMaxThreads, METH_VARARGS,
   "V.GetMaxThreads() -> int\nC++: virtual vtkTypeUInt32 GetMaxThreads()\n\n"},
  {"Initialize", PyvtkDataEncoder_Initialize, METH_VARARGS,
   "V.Initialize()\nC++: void Initialize()\n\nRe-initializes the encoder. This will abort any on going encoding\nthreads and clear internal data-structures.\n"},
  {"Flush", PyvtkDataEncoder_Flush, METH_VARARGS,
   "V.Flush(int)\nC++: void Flush(vtkTypeUInt32 key)\n\nFlushes the encoding pipe and blocks till the most recently\npushed image for the particular key has been processed. This call\nwill block. Once this method returns, caller can use\nGetLatestOutput(key) to access the processed output.\n"},
  {"EncodeAsBase64Png", PyvtkDataEncoder_EncodeAsBase64Png, METH_VARARGS,
   "V.EncodeAsBase64Png(vtkImageData, int) -> string\nC++: const char *EncodeAsBase64Png(vtkImageData *img,\n    int compressionLevel=5)\n\nTake an image data and synchronously convert it to a base-64\nencoded png.\n"},
  {"EncodeAsBase64Jpg", PyvtkDataEncoder_EncodeAsBase64Jpg, METH_VARARGS,
   "V.EncodeAsBase64Jpg(vtkImageData, int) -> string\nC++: const char *EncodeAsBase64Jpg(vtkImageData *img,\n    int quality=50)\n\nTake an image data and synchronously convert it to a base-64\nencoded jpg.\n"},
  {"Finalize", PyvtkDataEncoder_Finalize, METH_VARARGS,
   "V.Finalize()\nC++: void Finalize()\n\nThis method will wait for any running thread to terminate.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkDataEncoder_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkWebCorePython.vtkDataEncoder", // tp_name
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
  PyvtkDataEncoder_Doc, // tp_doc
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

static vtkObjectBase *PyvtkDataEncoder_StaticNew()
{
  return vtkDataEncoder::New();
}

PyObject *PyvtkDataEncoder_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkDataEncoder_Type, PyvtkDataEncoder_Methods,
    "vtkDataEncoder",
 &PyvtkDataEncoder_StaticNew);

  PyTypeObject *pytype = &PyvtkDataEncoder_Type;

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

void PyVTKAddFile_vtkDataEncoder(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkDataEncoder_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkDataEncoder", o) != 0)
  {
    Py_DECREF(o);
  }

}

