// python wrapper for vtkScalarsToTextureFilter
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
#include "vtkScalarsToTextureFilter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkScalarsToTextureFilter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkScalarsToTextureFilter_ClassNew(); }

#ifndef DECLARED_PyvtkPolyDataAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPolyDataAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPolyDataAlgorithm_ClassNew
#endif

static const char *PyvtkScalarsToTextureFilter_Doc =
  "vtkScalarsToTextureFilter - generate texture coordinates and a\ntexture image based on a scalar field\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "This filter computes texture coordinates and a 2D texture image based\n"
  "on a polydata, a color transfer function and an array. The output\n"
  "port 0 will contain the input polydata with computed texture\n"
  "coordinates. The output port 1 will contain the texture. The computed\n"
  "texture coordinates is based on vtkTextureMapToPlane which computes\n"
  "them using 3D positions projected on the best fitting plane.\n"
  "@sa vtkTextureMapToPlane vtkResampleToImage\n\n";


static PyObject *
PyvtkScalarsToTextureFilter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkScalarsToTextureFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarsToTextureFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToTextureFilter *op = static_cast<vtkScalarsToTextureFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkScalarsToTextureFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarsToTextureFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkScalarsToTextureFilter *tempr = vtkScalarsToTextureFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarsToTextureFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToTextureFilter *op = static_cast<vtkScalarsToTextureFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkScalarsToTextureFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkScalarsToTextureFilter::NewInstance());

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
PyvtkScalarsToTextureFilter_SetTransferFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTransferFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToTextureFilter *op = static_cast<vtkScalarsToTextureFilter *>(vp);

  vtkScalarsToColors *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkScalarsToColors"))
  {
    if (ap.IsBound())
    {
      op->SetTransferFunction(temp0);
    }
    else
    {
      op->vtkScalarsToTextureFilter::SetTransferFunction(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarsToTextureFilter_GetTransferFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransferFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToTextureFilter *op = static_cast<vtkScalarsToTextureFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkScalarsToColors *tempr = (ap.IsBound() ?
      op->GetTransferFunction() :
      op->vtkScalarsToTextureFilter::GetTransferFunction());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarsToTextureFilter_GetUseTransferFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseTransferFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToTextureFilter *op = static_cast<vtkScalarsToTextureFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseTransferFunction() :
      op->vtkScalarsToTextureFilter::GetUseTransferFunction());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarsToTextureFilter_SetUseTransferFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseTransferFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToTextureFilter *op = static_cast<vtkScalarsToTextureFilter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseTransferFunction(temp0);
    }
    else
    {
      op->vtkScalarsToTextureFilter::SetUseTransferFunction(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarsToTextureFilter_UseTransferFunctionOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseTransferFunctionOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToTextureFilter *op = static_cast<vtkScalarsToTextureFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseTransferFunctionOn();
    }
    else
    {
      op->vtkScalarsToTextureFilter::UseTransferFunctionOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarsToTextureFilter_UseTransferFunctionOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseTransferFunctionOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToTextureFilter *op = static_cast<vtkScalarsToTextureFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseTransferFunctionOff();
    }
    else
    {
      op->vtkScalarsToTextureFilter::UseTransferFunctionOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarsToTextureFilter_SetTextureDimensions_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextureDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToTextureFilter *op = static_cast<vtkScalarsToTextureFilter *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetTextureDimensions(temp0, temp1);
    }
    else
    {
      op->vtkScalarsToTextureFilter::SetTextureDimensions(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkScalarsToTextureFilter_SetTextureDimensions_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextureDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToTextureFilter *op = static_cast<vtkScalarsToTextureFilter *>(vp);

  const size_t size0 = 2;
  int temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetTextureDimensions(temp0);
    }
    else
    {
      op->vtkScalarsToTextureFilter::SetTextureDimensions(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkScalarsToTextureFilter_SetTextureDimensions(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkScalarsToTextureFilter_SetTextureDimensions_s1(self, args);
    case 1:
      return PyvtkScalarsToTextureFilter_SetTextureDimensions_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetTextureDimensions");
  return nullptr;
}



static PyObject *
PyvtkScalarsToTextureFilter_GetTextureDimensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextureDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToTextureFilter *op = static_cast<vtkScalarsToTextureFilter *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetTextureDimensions() :
      op->vtkScalarsToTextureFilter::GetTextureDimensions());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyMethodDef PyvtkScalarsToTextureFilter_Methods[] = {
  {"IsTypeOf", PyvtkScalarsToTextureFilter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkScalarsToTextureFilter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkScalarsToTextureFilter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkScalarsToTextureFilter\nC++: static vtkScalarsToTextureFilter *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkScalarsToTextureFilter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkScalarsToTextureFilter\nC++: vtkScalarsToTextureFilter *NewInstance()\n\n"},
  {"SetTransferFunction", PyvtkScalarsToTextureFilter_SetTransferFunction, METH_VARARGS,
   "V.SetTransferFunction(vtkScalarsToColors)\nC++: void SetTransferFunction(vtkScalarsToColors *stc)\n\nSet/Get a color transfer function. This transfer function will be\nused to determine the pixel colors of the texture. If not\nspecified, the filter use a default one (blue/white/red) based on\nthe range of the input array.\n"},
  {"GetTransferFunction", PyvtkScalarsToTextureFilter_GetTransferFunction, METH_VARARGS,
   "V.GetTransferFunction() -> vtkScalarsToColors\nC++: vtkScalarsToColors *GetTransferFunction()\n\nSet/Get a color transfer function. This transfer function will be\nused to determine the pixel colors of the texture. If not\nspecified, the filter use a default one (blue/white/red) based on\nthe range of the input array.\n"},
  {"GetUseTransferFunction", PyvtkScalarsToTextureFilter_GetUseTransferFunction, METH_VARARGS,
   "V.GetUseTransferFunction() -> bool\nC++: virtual bool GetUseTransferFunction()\n\nSpecify if a new point array containing RGBA values have to be\ncomputed by the specified color transfer function.\n"},
  {"SetUseTransferFunction", PyvtkScalarsToTextureFilter_SetUseTransferFunction, METH_VARARGS,
   "V.SetUseTransferFunction(bool)\nC++: virtual void SetUseTransferFunction(bool _arg)\n\nSpecify if a new point array containing RGBA values have to be\ncomputed by the specified color transfer function.\n"},
  {"UseTransferFunctionOn", PyvtkScalarsToTextureFilter_UseTransferFunctionOn, METH_VARARGS,
   "V.UseTransferFunctionOn()\nC++: virtual void UseTransferFunctionOn()\n\nSpecify if a new point array containing RGBA values have to be\ncomputed by the specified color transfer function.\n"},
  {"UseTransferFunctionOff", PyvtkScalarsToTextureFilter_UseTransferFunctionOff, METH_VARARGS,
   "V.UseTransferFunctionOff()\nC++: virtual void UseTransferFunctionOff()\n\nSpecify if a new point array containing RGBA values have to be\ncomputed by the specified color transfer function.\n"},
  {"SetTextureDimensions", PyvtkScalarsToTextureFilter_SetTextureDimensions, METH_VARARGS,
   "V.SetTextureDimensions(int, int)\nC++: void SetTextureDimensions(int, int)\nV.SetTextureDimensions((int, int))\nC++: void SetTextureDimensions(int a[2])\n\n"},
  {"GetTextureDimensions", PyvtkScalarsToTextureFilter_GetTextureDimensions, METH_VARARGS,
   "V.GetTextureDimensions() -> (int, int)\nC++: int *GetTextureDimensions()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkScalarsToTextureFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersTexturePython.vtkScalarsToTextureFilter", // tp_name
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
  PyvtkScalarsToTextureFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkScalarsToTextureFilter_StaticNew()
{
  return vtkScalarsToTextureFilter::New();
}

PyObject *PyvtkScalarsToTextureFilter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkScalarsToTextureFilter_Type, PyvtkScalarsToTextureFilter_Methods,
    "vtkScalarsToTextureFilter",
 &PyvtkScalarsToTextureFilter_StaticNew);

  PyTypeObject *pytype = &PyvtkScalarsToTextureFilter_Type;

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

void PyVTKAddFile_vtkScalarsToTextureFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkScalarsToTextureFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkScalarsToTextureFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

