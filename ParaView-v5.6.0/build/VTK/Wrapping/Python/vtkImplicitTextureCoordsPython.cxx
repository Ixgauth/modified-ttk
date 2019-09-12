// python wrapper for vtkImplicitTextureCoords
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
#include "vtkImplicitTextureCoords.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImplicitTextureCoords(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkImplicitTextureCoords_ClassNew(); }

#ifndef DECLARED_PyvtkDataSetAlgorithm_ClassNew
extern "C" { PyObject *PyvtkDataSetAlgorithm_ClassNew(); }
#define DECLARED_PyvtkDataSetAlgorithm_ClassNew
#endif

static const char *PyvtkImplicitTextureCoords_Doc =
  "vtkImplicitTextureCoords - generate 1D, 2D, or 3D texture coordinates\nbased on implicit function(s)\n\n"
  "Superclass: vtkDataSetAlgorithm\n\n"
  "vtkImplicitTextureCoords is a filter to generate 1D, 2D, or 3D\n"
  "texture coordinates from one, two, or three implicit functions,\n"
  "respectively. In combinations with a vtkBooleanTexture map (or\n"
  "another texture map of your own creation), the texture coordinates\n"
  "can be used to highlight (via color or intensity) or cut (via\n"
  "transparency) dataset geometry without any complex geometric\n"
  "processing. (Note: the texture coordinates are referred to as r-s-t\n"
  "coordinates.)\n\n"
  "The texture coordinates are automatically normalized to lie between\n"
  "(0,1). Thus, no matter what the implicit functions evaluate to, the\n"
  "resulting texture coordinates lie between (0,1), with the zero\n"
  "implicit function value mapped to the 0.5 texture coordinates value.\n"
  "Depending upon the maximum negative/positive implicit function\n"
  "values, the full (0,1) range may not be occupied (i.e., the\n"
  "positive/negative ranges are mapped using the same scale factor).\n\n"
  "A boolean variable InvertTexture is available to flip the texture\n"
  "coordinates around 0.5 (value 1.0 becomes 0.0, 0.25->0.75). This is\n"
  "equivalent to flipping the texture map (but a whole lot easier).\n\n"
  "@warning\n"
  "You can use the transformation capabilities of vtkImplicitFunction to\n"
  "orient, translate, and scale the implicit functions. Also, the\n"
  "dimension of the texture coordinates is implicitly defined by the\n"
  "number of implicit functions defined.\n\n"
  "@sa\n"
  "vtkImplicitFunction vtkTexture vtkBooleanTexture vtkTransformTexture\n\n";


static PyObject *
PyvtkImplicitTextureCoords_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImplicitTextureCoords::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitTextureCoords_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitTextureCoords *op = static_cast<vtkImplicitTextureCoords *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImplicitTextureCoords::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitTextureCoords_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImplicitTextureCoords *tempr = vtkImplicitTextureCoords::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitTextureCoords_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitTextureCoords *op = static_cast<vtkImplicitTextureCoords *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImplicitTextureCoords *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImplicitTextureCoords::NewInstance());

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
PyvtkImplicitTextureCoords_SetRFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitTextureCoords *op = static_cast<vtkImplicitTextureCoords *>(vp);

  vtkImplicitFunction *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImplicitFunction"))
  {
    if (ap.IsBound())
    {
      op->SetRFunction(temp0);
    }
    else
    {
      op->vtkImplicitTextureCoords::SetRFunction(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitTextureCoords_GetRFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitTextureCoords *op = static_cast<vtkImplicitTextureCoords *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImplicitFunction *tempr = (ap.IsBound() ?
      op->GetRFunction() :
      op->vtkImplicitTextureCoords::GetRFunction());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitTextureCoords_SetSFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitTextureCoords *op = static_cast<vtkImplicitTextureCoords *>(vp);

  vtkImplicitFunction *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImplicitFunction"))
  {
    if (ap.IsBound())
    {
      op->SetSFunction(temp0);
    }
    else
    {
      op->vtkImplicitTextureCoords::SetSFunction(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitTextureCoords_GetSFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitTextureCoords *op = static_cast<vtkImplicitTextureCoords *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImplicitFunction *tempr = (ap.IsBound() ?
      op->GetSFunction() :
      op->vtkImplicitTextureCoords::GetSFunction());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitTextureCoords_SetTFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitTextureCoords *op = static_cast<vtkImplicitTextureCoords *>(vp);

  vtkImplicitFunction *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImplicitFunction"))
  {
    if (ap.IsBound())
    {
      op->SetTFunction(temp0);
    }
    else
    {
      op->vtkImplicitTextureCoords::SetTFunction(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitTextureCoords_GetTFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitTextureCoords *op = static_cast<vtkImplicitTextureCoords *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImplicitFunction *tempr = (ap.IsBound() ?
      op->GetTFunction() :
      op->vtkImplicitTextureCoords::GetTFunction());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitTextureCoords_SetFlipTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFlipTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitTextureCoords *op = static_cast<vtkImplicitTextureCoords *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFlipTexture(temp0);
    }
    else
    {
      op->vtkImplicitTextureCoords::SetFlipTexture(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitTextureCoords_GetFlipTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFlipTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitTextureCoords *op = static_cast<vtkImplicitTextureCoords *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFlipTexture() :
      op->vtkImplicitTextureCoords::GetFlipTexture());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitTextureCoords_FlipTextureOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FlipTextureOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitTextureCoords *op = static_cast<vtkImplicitTextureCoords *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FlipTextureOn();
    }
    else
    {
      op->vtkImplicitTextureCoords::FlipTextureOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitTextureCoords_FlipTextureOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FlipTextureOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitTextureCoords *op = static_cast<vtkImplicitTextureCoords *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FlipTextureOff();
    }
    else
    {
      op->vtkImplicitTextureCoords::FlipTextureOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkImplicitTextureCoords_Methods[] = {
  {"IsTypeOf", PyvtkImplicitTextureCoords_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImplicitTextureCoords_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImplicitTextureCoords_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkImplicitTextureCoords\nC++: static vtkImplicitTextureCoords *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImplicitTextureCoords_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkImplicitTextureCoords\nC++: vtkImplicitTextureCoords *NewInstance()\n\n"},
  {"SetRFunction", PyvtkImplicitTextureCoords_SetRFunction, METH_VARARGS,
   "V.SetRFunction(vtkImplicitFunction)\nC++: virtual void SetRFunction(vtkImplicitFunction *)\n\nSpecify an implicit function to compute the r texture coordinate.\n"},
  {"GetRFunction", PyvtkImplicitTextureCoords_GetRFunction, METH_VARARGS,
   "V.GetRFunction() -> vtkImplicitFunction\nC++: virtual vtkImplicitFunction *GetRFunction()\n\nSpecify an implicit function to compute the r texture coordinate.\n"},
  {"SetSFunction", PyvtkImplicitTextureCoords_SetSFunction, METH_VARARGS,
   "V.SetSFunction(vtkImplicitFunction)\nC++: virtual void SetSFunction(vtkImplicitFunction *)\n\nSpecify an implicit function to compute the s texture coordinate.\n"},
  {"GetSFunction", PyvtkImplicitTextureCoords_GetSFunction, METH_VARARGS,
   "V.GetSFunction() -> vtkImplicitFunction\nC++: virtual vtkImplicitFunction *GetSFunction()\n\nSpecify an implicit function to compute the s texture coordinate.\n"},
  {"SetTFunction", PyvtkImplicitTextureCoords_SetTFunction, METH_VARARGS,
   "V.SetTFunction(vtkImplicitFunction)\nC++: virtual void SetTFunction(vtkImplicitFunction *)\n\nSpecify an implicit function to compute the t texture coordinate.\n"},
  {"GetTFunction", PyvtkImplicitTextureCoords_GetTFunction, METH_VARARGS,
   "V.GetTFunction() -> vtkImplicitFunction\nC++: virtual vtkImplicitFunction *GetTFunction()\n\nSpecify an implicit function to compute the t texture coordinate.\n"},
  {"SetFlipTexture", PyvtkImplicitTextureCoords_SetFlipTexture, METH_VARARGS,
   "V.SetFlipTexture(int)\nC++: virtual void SetFlipTexture(vtkTypeBool _arg)\n\nIf enabled, this will flip the sense of inside and outside the\nimplicit function (i.e., a rotation around the r-s-t=0.5 axis).\n"},
  {"GetFlipTexture", PyvtkImplicitTextureCoords_GetFlipTexture, METH_VARARGS,
   "V.GetFlipTexture() -> int\nC++: virtual vtkTypeBool GetFlipTexture()\n\nIf enabled, this will flip the sense of inside and outside the\nimplicit function (i.e., a rotation around the r-s-t=0.5 axis).\n"},
  {"FlipTextureOn", PyvtkImplicitTextureCoords_FlipTextureOn, METH_VARARGS,
   "V.FlipTextureOn()\nC++: virtual void FlipTextureOn()\n\nIf enabled, this will flip the sense of inside and outside the\nimplicit function (i.e., a rotation around the r-s-t=0.5 axis).\n"},
  {"FlipTextureOff", PyvtkImplicitTextureCoords_FlipTextureOff, METH_VARARGS,
   "V.FlipTextureOff()\nC++: virtual void FlipTextureOff()\n\nIf enabled, this will flip the sense of inside and outside the\nimplicit function (i.e., a rotation around the r-s-t=0.5 axis).\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkImplicitTextureCoords_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersTexturePython.vtkImplicitTextureCoords", // tp_name
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
  PyvtkImplicitTextureCoords_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImplicitTextureCoords_StaticNew()
{
  return vtkImplicitTextureCoords::New();
}

PyObject *PyvtkImplicitTextureCoords_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkImplicitTextureCoords_Type, PyvtkImplicitTextureCoords_Methods,
    "vtkImplicitTextureCoords",
 &PyvtkImplicitTextureCoords_StaticNew);

  PyTypeObject *pytype = &PyvtkImplicitTextureCoords_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkDataSetAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkImplicitTextureCoords(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImplicitTextureCoords_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImplicitTextureCoords", o) != 0)
  {
    Py_DECREF(o);
  }

}

