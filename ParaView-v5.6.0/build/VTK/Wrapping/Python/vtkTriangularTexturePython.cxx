// python wrapper for vtkTriangularTexture
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
#include "vtkTriangularTexture.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkTriangularTexture(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkTriangularTexture_ClassNew(); }

#ifndef DECLARED_PyvtkImageAlgorithm_ClassNew
extern "C" { PyObject *PyvtkImageAlgorithm_ClassNew(); }
#define DECLARED_PyvtkImageAlgorithm_ClassNew
#endif

static const char *PyvtkTriangularTexture_Doc =
  "vtkTriangularTexture - generate 2D triangular texture map\n\n"
  "Superclass: vtkImageAlgorithm\n\n"
  "vtkTriangularTexture is a filter that generates a 2D texture map\n"
  "based on the paper \"Opacity-modulating Triangular Textures for Irregular\n"
  "Surfaces,\" by Penny Rheingans, IEEE Visualization '96, pp. 219-225.\n"
  "The textures assume texture coordinates of (0,0), (1.0) and (.5,\n"
  "sqrt(3)/2). The sequence of texture values is the same along each\n"
  "edge of the triangular texture map. So, the assignment order of\n"
  "texture coordinates is arbitrary.\n\n"
  "@sa\n"
  "vtkTriangularTCoords\n\n";


static PyObject *
PyvtkTriangularTexture_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTriangularTexture::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTriangularTexture_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTriangularTexture *op = static_cast<vtkTriangularTexture *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTriangularTexture::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTriangularTexture_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTriangularTexture *tempr = vtkTriangularTexture::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTriangularTexture_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTriangularTexture *op = static_cast<vtkTriangularTexture *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTriangularTexture *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTriangularTexture::NewInstance());

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
PyvtkTriangularTexture_SetScaleFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTriangularTexture *op = static_cast<vtkTriangularTexture *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScaleFactor(temp0);
    }
    else
    {
      op->vtkTriangularTexture::SetScaleFactor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTriangularTexture_GetScaleFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaleFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTriangularTexture *op = static_cast<vtkTriangularTexture *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetScaleFactor() :
      op->vtkTriangularTexture::GetScaleFactor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTriangularTexture_SetXSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTriangularTexture *op = static_cast<vtkTriangularTexture *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetXSize(temp0);
    }
    else
    {
      op->vtkTriangularTexture::SetXSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTriangularTexture_GetXSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTriangularTexture *op = static_cast<vtkTriangularTexture *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetXSize() :
      op->vtkTriangularTexture::GetXSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTriangularTexture_SetYSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTriangularTexture *op = static_cast<vtkTriangularTexture *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetYSize(temp0);
    }
    else
    {
      op->vtkTriangularTexture::SetYSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTriangularTexture_GetYSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTriangularTexture *op = static_cast<vtkTriangularTexture *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetYSize() :
      op->vtkTriangularTexture::GetYSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTriangularTexture_SetTexturePattern(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTexturePattern");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTriangularTexture *op = static_cast<vtkTriangularTexture *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTexturePattern(temp0);
    }
    else
    {
      op->vtkTriangularTexture::SetTexturePattern(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTriangularTexture_GetTexturePatternMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTexturePatternMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTriangularTexture *op = static_cast<vtkTriangularTexture *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTexturePatternMinValue() :
      op->vtkTriangularTexture::GetTexturePatternMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTriangularTexture_GetTexturePatternMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTexturePatternMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTriangularTexture *op = static_cast<vtkTriangularTexture *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTexturePatternMaxValue() :
      op->vtkTriangularTexture::GetTexturePatternMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTriangularTexture_GetTexturePattern(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTexturePattern");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTriangularTexture *op = static_cast<vtkTriangularTexture *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTexturePattern() :
      op->vtkTriangularTexture::GetTexturePattern());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkTriangularTexture_Methods[] = {
  {"IsTypeOf", PyvtkTriangularTexture_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkTriangularTexture_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkTriangularTexture_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkTriangularTexture\nC++: static vtkTriangularTexture *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkTriangularTexture_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkTriangularTexture\nC++: vtkTriangularTexture *NewInstance()\n\n"},
  {"SetScaleFactor", PyvtkTriangularTexture_SetScaleFactor, METH_VARARGS,
   "V.SetScaleFactor(float)\nC++: virtual void SetScaleFactor(double _arg)\n\nSet a Scale Factor.\n"},
  {"GetScaleFactor", PyvtkTriangularTexture_GetScaleFactor, METH_VARARGS,
   "V.GetScaleFactor() -> float\nC++: virtual double GetScaleFactor()\n\nSet a Scale Factor.\n"},
  {"SetXSize", PyvtkTriangularTexture_SetXSize, METH_VARARGS,
   "V.SetXSize(int)\nC++: virtual void SetXSize(int _arg)\n\nSet the X texture map dimension. Default is 64.\n"},
  {"GetXSize", PyvtkTriangularTexture_GetXSize, METH_VARARGS,
   "V.GetXSize() -> int\nC++: virtual int GetXSize()\n\nSet the X texture map dimension. Default is 64.\n"},
  {"SetYSize", PyvtkTriangularTexture_SetYSize, METH_VARARGS,
   "V.SetYSize(int)\nC++: virtual void SetYSize(int _arg)\n\nSet the Y texture map dimension. Default is 64.\n"},
  {"GetYSize", PyvtkTriangularTexture_GetYSize, METH_VARARGS,
   "V.GetYSize() -> int\nC++: virtual int GetYSize()\n\nSet the Y texture map dimension. Default is 64.\n"},
  {"SetTexturePattern", PyvtkTriangularTexture_SetTexturePattern, METH_VARARGS,
   "V.SetTexturePattern(int)\nC++: virtual void SetTexturePattern(int _arg)\n\nSet the texture pattern. 1 = opaque at centroid (default) 2 =\nopaque at vertices 3 = opaque in rings around vertices\n"},
  {"GetTexturePatternMinValue", PyvtkTriangularTexture_GetTexturePatternMinValue, METH_VARARGS,
   "V.GetTexturePatternMinValue() -> int\nC++: virtual int GetTexturePatternMinValue()\n\nSet the texture pattern. 1 = opaque at centroid (default) 2 =\nopaque at vertices 3 = opaque in rings around vertices\n"},
  {"GetTexturePatternMaxValue", PyvtkTriangularTexture_GetTexturePatternMaxValue, METH_VARARGS,
   "V.GetTexturePatternMaxValue() -> int\nC++: virtual int GetTexturePatternMaxValue()\n\nSet the texture pattern. 1 = opaque at centroid (default) 2 =\nopaque at vertices 3 = opaque in rings around vertices\n"},
  {"GetTexturePattern", PyvtkTriangularTexture_GetTexturePattern, METH_VARARGS,
   "V.GetTexturePattern() -> int\nC++: virtual int GetTexturePattern()\n\nSet the texture pattern. 1 = opaque at centroid (default) 2 =\nopaque at vertices 3 = opaque in rings around vertices\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkTriangularTexture_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkImagingHybridPython.vtkTriangularTexture", // tp_name
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
  PyvtkTriangularTexture_Doc, // tp_doc
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

static vtkObjectBase *PyvtkTriangularTexture_StaticNew()
{
  return vtkTriangularTexture::New();
}

PyObject *PyvtkTriangularTexture_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkTriangularTexture_Type, PyvtkTriangularTexture_Methods,
    "vtkTriangularTexture",
 &PyvtkTriangularTexture_StaticNew);

  PyTypeObject *pytype = &PyvtkTriangularTexture_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkImageAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkTriangularTexture(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkTriangularTexture_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkTriangularTexture", o) != 0)
  {
    Py_DECREF(o);
  }

}

