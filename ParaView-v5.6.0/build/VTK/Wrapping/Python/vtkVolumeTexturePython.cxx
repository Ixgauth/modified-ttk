// python wrapper for vtkVolumeTexture
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
#include "vtkTuple.h"
#include "vtkVolumeTexture.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkVolumeTexture(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkVolumeTexture_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkVolumeTexture_Doc =
  "vtkVolumeTexture - Creates and manages the volume texture rendered by\nvtkOpenGLGPUVolumeRayCastMapper.\n\n"
  "Superclass: vtkObject\n\n"
  "Wraps a vtkTextureObject for which it selects the appropriate format\n"
  "(depending on the input vtkDataArray type, number of components,\n"
  "etc.) and loads input data. The class maintains a set of members of\n"
  "interest to the parent mapper, such as:\n\n"
  "* Active vtkDataArray scalar range.\n"
  "* Volume's scale and bias (pixel transfer functions).\n"
  "* HandleLargeDataType flag.\n"
  "* Texture to data transformations.\n"
  "* Block extents\n"
  "* Block loaded bounds\n\n"
  "This class supports streaming the volume data in separate blocks to\n"
  "make it fit in graphics memory (sometimes referred to as bricking).\n"
  "The data is split into a user-defined number of blocks in such a way\n"
  "that a single sub-block (brick) fits completely into GPU memory.  A\n"
  "stride is passed to OpenGL so that it can access the underlying\n"
  "vtkDataArray adequately for each of the blocks to be streamed into\n"
  "GPU memory (back-to-front for correct composition).\n\n"
  "Streaming the volume as separate texture bricks certainly imposes a\n"
  "performance trade-off but acts as a graphics memory expansion scheme\n"
  "for devices that would not be able to render higher resoulution\n"
  "volumes otherwise.\n\n"
  "@warning There are certain caveats when texture streaming is enabled,\n"
  "given\n"
  "the locality constraint that rendering a single block imposes.\n\n"
  "- Quality might suffer near the block seams with ShadeOn() (gradient\n"
  "  computation at the boundaries needs adjustment).\n\n"
  "- Not all of the features supported by the mapper currently work\n"
  "  correctly. This is a list of known issues:\n"
  "-# Blending modes such as average and additive might compute a\n"
  "   different value near the edges.\n\n"
  "- Future work will extend the API to be able to compute an ideal\n"
  "  number of partitions and extents based on the platform\n"
  "  capabilities.\n\n"
  "@warning This is an internal class of\n"
  "    vtkOpenGLGPUVolumeRayCastMapper. It\n"
  "assumes there is an active OpenGL context in methods involving GL\n"
  "calls (MakeCurrent() is expected to be called in the mapper\n"
  "beforehand).\n\n";


static PyObject *
PyvtkVolumeTexture_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkVolumeTexture::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeTexture_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeTexture *op = static_cast<vtkVolumeTexture *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkVolumeTexture::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeTexture_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkVolumeTexture *tempr = vtkVolumeTexture::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeTexture_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeTexture *op = static_cast<vtkVolumeTexture *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkVolumeTexture *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkVolumeTexture::NewInstance());

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
PyvtkVolumeTexture_SetPartitions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPartitions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeTexture *op = static_cast<vtkVolumeTexture *>(vp);

  int temp0;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetPartitions(temp0, temp1, temp2);
    }
    else
    {
      op->vtkVolumeTexture::SetPartitions(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeTexture_GetPartitions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPartitions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeTexture *op = static_cast<vtkVolumeTexture *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const vtkTuple<int, 3> *tempr = (ap.IsBound() ?
      &op->GetPartitions() :
      &op->vtkVolumeTexture::GetPartitions());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(tempr, "vtkTuple_IiLi3EE");
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeTexture_LoadVolume(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LoadVolume");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeTexture *op = static_cast<vtkVolumeTexture *>(vp);

  vtkRenderer *temp0 = nullptr;
  vtkImageData *temp1 = nullptr;
  vtkDataArray *temp2 = nullptr;
  int temp3;
  int temp4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkImageData") &&
      ap.GetVTKObject(temp2, "vtkDataArray") &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    bool tempr = (ap.IsBound() ?
      op->LoadVolume(temp0, temp1, temp2, temp3, temp4) :
      op->vtkVolumeTexture::LoadVolume(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeTexture_UpdateVolume(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateVolume");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeTexture *op = static_cast<vtkVolumeTexture *>(vp);

  vtkVolumeProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkVolumeProperty"))
  {
    if (ap.IsBound())
    {
      op->UpdateVolume(temp0);
    }
    else
    {
      op->vtkVolumeTexture::UpdateVolume(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeTexture_SortBlocksBackToFront(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SortBlocksBackToFront");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeTexture *op = static_cast<vtkVolumeTexture *>(vp);

  vtkRenderer *temp0 = nullptr;
  vtkMatrix4x4 *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkMatrix4x4"))
  {
    if (ap.IsBound())
    {
      op->SortBlocksBackToFront(temp0, temp1);
    }
    else
    {
      op->vtkVolumeTexture::SortBlocksBackToFront(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeTexture_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeTexture *op = static_cast<vtkVolumeTexture *>(vp);

  vtkWindow *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkWindow"))
  {
    if (ap.IsBound())
    {
      op->ReleaseGraphicsResources(temp0);
    }
    else
    {
      op->vtkVolumeTexture::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeTexture_GetScaleAndBias(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetScaleAndBias");

  int temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<float> store1(2*size1);
  float *temp1 = store1.Data();
  float *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  float temp2;
  float temp3;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    ap.Save(temp1, save1, size1);

    vtkVolumeTexture::GetScaleAndBias(temp0, temp1, temp2, temp3);

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(2, temp2);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(3, temp3);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeTexture_GetLoadedScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLoadedScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeTexture *op = static_cast<vtkVolumeTexture *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArray *tempr = (ap.IsBound() ?
      op->GetLoadedScalars() :
      op->vtkVolumeTexture::GetLoadedScalars());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkVolumeTexture_Methods[] = {
  {"IsTypeOf", PyvtkVolumeTexture_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkVolumeTexture_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkVolumeTexture_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkVolumeTexture\nC++: static vtkVolumeTexture *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkVolumeTexture_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkVolumeTexture\nC++: vtkVolumeTexture *NewInstance()\n\n"},
  {"SetPartitions", PyvtkVolumeTexture_SetPartitions, METH_VARARGS,
   "V.SetPartitions(int, int, int)\nC++: void SetPartitions(int const x, int const y, int const z)\n\nSet a number of blocks per axis.\n"},
  {"GetPartitions", PyvtkVolumeTexture_GetPartitions, METH_VARARGS,
   "V.GetPartitions() -> vtkTuple_IiLi3EE\nC++: const Size3 &GetPartitions()\n\n"},
  {"LoadVolume", PyvtkVolumeTexture_LoadVolume, METH_VARARGS,
   "V.LoadVolume(vtkRenderer, vtkImageData, vtkDataArray, int, int)\n    -> bool\nC++: bool LoadVolume(vtkRenderer *ren, vtkImageData *data,\n    vtkDataArray *scalars, int const isCell,\n    int const interpolation)\n\nLoads the data array into the texture in the case only a single\nblock is is defined. Does not load when the input data is divided\nin multiple blocks (in which case they will be loaded into GPU\nmemory by GetNextBlock()). Requires an active OpenGL context.\n"},
  {"UpdateVolume", PyvtkVolumeTexture_UpdateVolume, METH_VARARGS,
   "V.UpdateVolume(vtkVolumeProperty)\nC++: void UpdateVolume(vtkVolumeProperty *property)\n\nIt currently only calls SetInterpolation internally. Requires an\nactive OpenGL context.\n"},
  {"SortBlocksBackToFront", PyvtkVolumeTexture_SortBlocksBackToFront, METH_VARARGS,
   "V.SortBlocksBackToFront(vtkRenderer, vtkMatrix4x4)\nC++: void SortBlocksBackToFront(vtkRenderer *ren,\n    vtkMatrix4x4 *volumeMat)\n\nIf streaming the data array as separate blocks, sort them back to\nfront. This method does nothing if there is a single block.\n"},
  {"ReleaseGraphicsResources", PyvtkVolumeTexture_ReleaseGraphicsResources, METH_VARARGS,
   "V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *win)\n\nClean-up acquired graphics resources.\n"},
  {"GetScaleAndBias", PyvtkVolumeTexture_GetScaleAndBias, METH_VARARGS,
   "V.GetScaleAndBias(int, [float, ...], float, float)\nC++: static void GetScaleAndBias(const int scalarType,\n    float *scalarRange, float &scale, float &bias)\n\nGet the scale and bias values given a VTK scalar type and a\nfinite range. The scale and bias values computed using this\nmethod can be useful for custom shader code. For example, when\nlooking up color values through the transfer function texture,\nthe scalar value must be scaled and offset.\n"},
  {"GetLoadedScalars", PyvtkVolumeTexture_GetLoadedScalars, METH_VARARGS,
   "V.GetLoadedScalars() -> vtkDataArray\nC++: vtkDataArray *GetLoadedScalars()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkVolumeTexture_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingVolumeOpenGL2Python.vtkVolumeTexture", // tp_name
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
  PyvtkVolumeTexture_Doc, // tp_doc
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

static vtkObjectBase *PyvtkVolumeTexture_StaticNew()
{
  return vtkVolumeTexture::New();
}

PyObject *PyvtkVolumeTexture_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkVolumeTexture_Type, PyvtkVolumeTexture_Methods,
    "vtkVolumeTexture",
 &PyvtkVolumeTexture_StaticNew);

  PyTypeObject *pytype = &PyvtkVolumeTexture_Type;

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

void PyVTKAddFile_vtkVolumeTexture(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkVolumeTexture_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkVolumeTexture", o) != 0)
  {
    Py_DECREF(o);
  }

}

