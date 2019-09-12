// python wrapper for vtkTextRenderer
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
#include "vtkStdString.h"
#include "vtkUnicodeString.h"
#include "vtkTextRenderer.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkTextRenderer(PyObject *); }

static const char *PyvtkTextRendererCleanup_Doc =
  "vtkTextRendererCleanup - no description provided.\n\n"

  "vtkTextRendererCleanup()\n";

static PyMethodDef PyvtkTextRendererCleanup_Methods[] = {
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkTextRendererCleanup_vtkTextRendererCleanup(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkTextRendererCleanup");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkTextRendererCleanup *op = new vtkTextRendererCleanup();

    result = PyVTKSpecialObject_New("vtkTextRendererCleanup", op);
  }

  return result;
}

static PyMethodDef PyvtkTextRendererCleanup_vtkTextRendererCleanup_Methods[] = {
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkTextRendererCleanup_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkTextRendererCleanup_vtkTextRendererCleanup(nullptr, args);
}

static void PyvtkTextRendererCleanup_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkTextRendererCleanup *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkTextRendererCleanup_Hash(PyObject *self)
{
#if PY_VERSION_HEX >= 0x020600B2
  return PyObject_HashNotImplemented(self);
#else
  char text[256];
  sprintf(text, "unhashable type: '%s'", Py_TYPE(self)->tp_name);
  PyErr_SetString(PyExc_TypeError, text);
  return -1;
#endif
}

static PyTypeObject PyvtkTextRendererCleanup_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingCorePython.vtkTextRendererCleanup", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkTextRendererCleanup_Delete, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkTextRendererCleanup_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkTextRendererCleanup_Doc, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  nullptr, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  PyvtkTextRendererCleanup_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkTextRendererCleanup_TypeNew(); }

PyObject *PyvtkTextRendererCleanup_TypeNew()
{
  PyVTKSpecialType_Add(
    &PyvtkTextRendererCleanup_Type,
    PyvtkTextRendererCleanup_Methods,
    PyvtkTextRendererCleanup_vtkTextRendererCleanup_Methods,
    nullptr);

  PyTypeObject *pytype = &PyvtkTextRendererCleanup_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkTextRenderer_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkTextRenderer_Doc =
  "vtkTextRenderer - Interface for generating images and path data from\nstring data, using multiple backends.\n\n"
  "Superclass: vtkObject\n\n"
  "vtkTextRenderer produces images, bounding boxes, and vtkPath objects\n"
  "that represent text. The advantage of using this class is to easily\n"
  "integrate mathematical expressions into renderings by automatically\n"
  "switching between FreeType and MathText backends. If the input string\n"
  "contains at least two \"$\" symbols separated by text, the MathText\n"
  "backend will be used. If the string does not meet this criteria, or\n"
  "if no MathText implementation is available, the faster FreeType\n"
  "rendering facilities are used. Literal $ symbols can be used by\n"
  "escaping them with backslashes, \"\\$\" (or \"\\\\$\" if the string is set\n"
  "programmatically).\n\n"
  "For example, \"Acceleration ($\\\\frac{m}{s^2}$)\" will use MathText, but \"\\\\$500,\n"
  "\\\\$100\" will use FreeType.\n\n"
  "By default, the backend is set to Detect, which determines the\n"
  "backend based on the contents of the string. This can be changed by\n"
  "setting the DefaultBackend ivar.\n\n"
  "Note that this class is abstract -- link to the vtkRenderingFreetype\n"
  "module to get the default implementation.\n\n";

static PyTypeObject PyvtkTextRenderer_Backend_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingCorePython.vtkTextRenderer.Backend", // tp_name
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

PyObject *PyvtkTextRenderer_Backend_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkTextRenderer_Backend_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkTextRenderer_Backend_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkTextRenderer_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTextRenderer::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextRenderer_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextRenderer *op = static_cast<vtkTextRenderer *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTextRenderer::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextRenderer_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTextRenderer *tempr = vtkTextRenderer::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextRenderer_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextRenderer *op = static_cast<vtkTextRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTextRenderer *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTextRenderer::NewInstance());

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
PyvtkTextRenderer_GetInstance(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetInstance");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkTextRenderer *tempr = vtkTextRenderer::GetInstance();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextRenderer_SetDefaultBackend(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDefaultBackend");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextRenderer *op = static_cast<vtkTextRenderer *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDefaultBackend(temp0);
    }
    else
    {
      op->vtkTextRenderer::SetDefaultBackend(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextRenderer_GetDefaultBackend(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultBackend");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextRenderer *op = static_cast<vtkTextRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDefaultBackend() :
      op->vtkTextRenderer::GetDefaultBackend());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextRenderer_DetectBackend_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DetectBackend");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextRenderer *op = static_cast<vtkTextRenderer *>(vp);

  vtkStdString temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->DetectBackend(temp0) :
      op->vtkTextRenderer::DetectBackend(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkTextRenderer_DetectBackend_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DetectBackend");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextRenderer *op = static_cast<vtkTextRenderer *>(vp);

  vtkUnicodeString temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->DetectBackend(temp0) :
      op->vtkTextRenderer::DetectBackend(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkTextRenderer_DetectBackend_Methods[] = {
  {nullptr, PyvtkTextRenderer_DetectBackend_s1, METH_VARARGS,
   "@s"},
  {nullptr, PyvtkTextRenderer_DetectBackend_s2, METH_VARARGS,
   "@u"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkTextRenderer_DetectBackend(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTextRenderer_DetectBackend_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "DetectBackend");
  return nullptr;
}



static PyObject *
PyvtkTextRenderer_FreeTypeIsSupported(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FreeTypeIsSupported");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextRenderer *op = static_cast<vtkTextRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->FreeTypeIsSupported() :
      op->vtkTextRenderer::FreeTypeIsSupported());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextRenderer_MathTextIsSupported(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MathTextIsSupported");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextRenderer *op = static_cast<vtkTextRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->MathTextIsSupported() :
      op->vtkTextRenderer::MathTextIsSupported());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextRenderer_GetBoundingBox_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBoundingBox");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextRenderer *op = static_cast<vtkTextRenderer *>(vp);

  vtkTextProperty *temp0 = nullptr;
  vtkStdString temp1;
  const size_t size2 = 4;
  int temp2[4];
  int save2[4];
  int temp3;
  int temp4 = vtkTextRenderer::Default;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4, 5) &&
      ap.GetVTKObject(temp0, "vtkTextProperty") &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetValue(temp3) &&
      (ap.NoArgsLeft() || ap.GetValue(temp4)))
  {
    ap.Save(temp2, save2, size2);

    bool tempr = (ap.IsBound() ?
      op->GetBoundingBox(temp0, temp1, temp2, temp3, temp4) :
      op->vtkTextRenderer::GetBoundingBox(temp0, temp1, temp2, temp3, temp4));

    if (ap.HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkTextRenderer_GetBoundingBox_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBoundingBox");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextRenderer *op = static_cast<vtkTextRenderer *>(vp);

  vtkTextProperty *temp0 = nullptr;
  vtkUnicodeString temp1;
  const size_t size2 = 4;
  int temp2[4];
  int save2[4];
  int temp3;
  int temp4 = vtkTextRenderer::Default;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4, 5) &&
      ap.GetVTKObject(temp0, "vtkTextProperty") &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetValue(temp3) &&
      (ap.NoArgsLeft() || ap.GetValue(temp4)))
  {
    ap.Save(temp2, save2, size2);

    bool tempr = (ap.IsBound() ?
      op->GetBoundingBox(temp0, temp1, temp2, temp3, temp4) :
      op->vtkTextRenderer::GetBoundingBox(temp0, temp1, temp2, temp3, temp4));

    if (ap.HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkTextRenderer_GetBoundingBox_Methods[] = {
  {nullptr, PyvtkTextRenderer_GetBoundingBox_s1, METH_VARARGS,
   "@VsPi|i *vtkTextProperty *i"},
  {nullptr, PyvtkTextRenderer_GetBoundingBox_s2, METH_VARARGS,
   "@VuPi|i *vtkTextProperty *i"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkTextRenderer_GetBoundingBox(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTextRenderer_GetBoundingBox_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
    case 5:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetBoundingBox");
  return nullptr;
}



static PyObject *
PyvtkTextRenderer_RenderString_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextRenderer *op = static_cast<vtkTextRenderer *>(vp);

  vtkTextProperty *temp0 = nullptr;
  vtkStdString temp1;
  vtkImageData *temp2 = nullptr;
  const size_t size3 = 2;
  int temp3[2];
  int save3[2];
  int temp4;
  int temp5 = vtkTextRenderer::Default;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5, 6) &&
      ap.GetVTKObject(temp0, "vtkTextProperty") &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkImageData") &&
      ap.GetArray(temp3, size3) &&
      ap.GetValue(temp4) &&
      (ap.NoArgsLeft() || ap.GetValue(temp5)))
  {
    ap.Save(temp3, save3, size3);

    bool tempr = (ap.IsBound() ?
      op->RenderString(temp0, temp1, temp2, temp3, temp4, temp5) :
      op->vtkTextRenderer::RenderString(temp0, temp1, temp2, temp3, temp4, temp5));

    if (ap.HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkTextRenderer_RenderString_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextRenderer *op = static_cast<vtkTextRenderer *>(vp);

  vtkTextProperty *temp0 = nullptr;
  vtkUnicodeString temp1;
  vtkImageData *temp2 = nullptr;
  const size_t size3 = 2;
  int temp3[2];
  int save3[2];
  int temp4;
  int temp5 = vtkTextRenderer::Default;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5, 6) &&
      ap.GetVTKObject(temp0, "vtkTextProperty") &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkImageData") &&
      ap.GetArray(temp3, size3) &&
      ap.GetValue(temp4) &&
      (ap.NoArgsLeft() || ap.GetValue(temp5)))
  {
    ap.Save(temp3, save3, size3);

    bool tempr = (ap.IsBound() ?
      op->RenderString(temp0, temp1, temp2, temp3, temp4, temp5) :
      op->vtkTextRenderer::RenderString(temp0, temp1, temp2, temp3, temp4, temp5));

    if (ap.HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkTextRenderer_RenderString_Methods[] = {
  {nullptr, PyvtkTextRenderer_RenderString_s1, METH_VARARGS,
   "@VsVPi|i *vtkTextProperty *vtkImageData *i"},
  {nullptr, PyvtkTextRenderer_RenderString_s2, METH_VARARGS,
   "@VuVPi|i *vtkTextProperty *vtkImageData *i"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkTextRenderer_RenderString(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTextRenderer_RenderString_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 5:
    case 6:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "RenderString");
  return nullptr;
}



static PyObject *
PyvtkTextRenderer_GetConstrainedFontSize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConstrainedFontSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextRenderer *op = static_cast<vtkTextRenderer *>(vp);

  vtkStdString temp0;
  vtkTextProperty *temp1 = nullptr;
  int temp2;
  int temp3;
  int temp4;
  int temp5 = vtkTextRenderer::Default;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5, 6) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkTextProperty") &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      (ap.NoArgsLeft() || ap.GetValue(temp5)))
  {
    int tempr = (ap.IsBound() ?
      op->GetConstrainedFontSize(temp0, temp1, temp2, temp3, temp4, temp5) :
      op->vtkTextRenderer::GetConstrainedFontSize(temp0, temp1, temp2, temp3, temp4, temp5));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkTextRenderer_GetConstrainedFontSize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConstrainedFontSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextRenderer *op = static_cast<vtkTextRenderer *>(vp);

  vtkUnicodeString temp0;
  vtkTextProperty *temp1 = nullptr;
  int temp2;
  int temp3;
  int temp4;
  int temp5 = vtkTextRenderer::Default;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5, 6) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkTextProperty") &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      (ap.NoArgsLeft() || ap.GetValue(temp5)))
  {
    int tempr = (ap.IsBound() ?
      op->GetConstrainedFontSize(temp0, temp1, temp2, temp3, temp4, temp5) :
      op->vtkTextRenderer::GetConstrainedFontSize(temp0, temp1, temp2, temp3, temp4, temp5));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkTextRenderer_GetConstrainedFontSize_Methods[] = {
  {nullptr, PyvtkTextRenderer_GetConstrainedFontSize_s1, METH_VARARGS,
   "@sViii|i *vtkTextProperty"},
  {nullptr, PyvtkTextRenderer_GetConstrainedFontSize_s2, METH_VARARGS,
   "@uViii|i *vtkTextProperty"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkTextRenderer_GetConstrainedFontSize(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTextRenderer_GetConstrainedFontSize_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 5:
    case 6:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetConstrainedFontSize");
  return nullptr;
}



static PyObject *
PyvtkTextRenderer_StringToPath_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StringToPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextRenderer *op = static_cast<vtkTextRenderer *>(vp);

  vtkTextProperty *temp0 = nullptr;
  vtkStdString temp1;
  vtkPath *temp2 = nullptr;
  int temp3;
  int temp4 = vtkTextRenderer::Default;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4, 5) &&
      ap.GetVTKObject(temp0, "vtkTextProperty") &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkPath") &&
      ap.GetValue(temp3) &&
      (ap.NoArgsLeft() || ap.GetValue(temp4)))
  {
    bool tempr = (ap.IsBound() ?
      op->StringToPath(temp0, temp1, temp2, temp3, temp4) :
      op->vtkTextRenderer::StringToPath(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkTextRenderer_StringToPath_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StringToPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextRenderer *op = static_cast<vtkTextRenderer *>(vp);

  vtkTextProperty *temp0 = nullptr;
  vtkUnicodeString temp1;
  vtkPath *temp2 = nullptr;
  int temp3;
  int temp4 = vtkTextRenderer::Default;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4, 5) &&
      ap.GetVTKObject(temp0, "vtkTextProperty") &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkPath") &&
      ap.GetValue(temp3) &&
      (ap.NoArgsLeft() || ap.GetValue(temp4)))
  {
    bool tempr = (ap.IsBound() ?
      op->StringToPath(temp0, temp1, temp2, temp3, temp4) :
      op->vtkTextRenderer::StringToPath(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkTextRenderer_StringToPath_Methods[] = {
  {nullptr, PyvtkTextRenderer_StringToPath_s1, METH_VARARGS,
   "@VsVi|i *vtkTextProperty *vtkPath"},
  {nullptr, PyvtkTextRenderer_StringToPath_s2, METH_VARARGS,
   "@VuVi|i *vtkTextProperty *vtkPath"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkTextRenderer_StringToPath(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTextRenderer_StringToPath_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
    case 5:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "StringToPath");
  return nullptr;
}



static PyObject *
PyvtkTextRenderer_SetScaleToPowerOfTwo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleToPowerOfTwo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextRenderer *op = static_cast<vtkTextRenderer *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScaleToPowerOfTwo(temp0);
    }
    else
    {
      op->vtkTextRenderer::SetScaleToPowerOfTwo(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkTextRenderer_Methods[] = {
  {"IsTypeOf", PyvtkTextRenderer_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkTextRenderer_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkTextRenderer_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkTextRenderer\nC++: static vtkTextRenderer *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkTextRenderer_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkTextRenderer\nC++: vtkTextRenderer *NewInstance()\n\n"},
  {"GetInstance", PyvtkTextRenderer_GetInstance, METH_VARARGS,
   "V.GetInstance() -> vtkTextRenderer\nC++: static vtkTextRenderer *GetInstance()\n\nReturn the singleton instance with no reference counting. May\nreturn NULL if the object factory cannot find an override.\n"},
  {"SetDefaultBackend", PyvtkTextRenderer_SetDefaultBackend, METH_VARARGS,
   "V.SetDefaultBackend(int)\nC++: virtual void SetDefaultBackend(int _arg)\n\nThe backend to use when none is specified. Default: Detect\n"},
  {"GetDefaultBackend", PyvtkTextRenderer_GetDefaultBackend, METH_VARARGS,
   "V.GetDefaultBackend() -> int\nC++: virtual int GetDefaultBackend()\n\nThe backend to use when none is specified. Default: Detect\n"},
  {"DetectBackend", PyvtkTextRenderer_DetectBackend, METH_VARARGS,
   "V.DetectBackend(string) -> int\nC++: virtual int DetectBackend(const vtkStdString &str)\nV.DetectBackend(unicode) -> int\nC++: virtual int DetectBackend(const vtkUnicodeString &str)\n\nDetermine the appropriate back end needed to render the given\nstring.\n"},
  {"FreeTypeIsSupported", PyvtkTextRenderer_FreeTypeIsSupported, METH_VARARGS,
   "V.FreeTypeIsSupported() -> bool\nC++: virtual bool FreeTypeIsSupported()\n\nTest for availability of various backends\n"},
  {"MathTextIsSupported", PyvtkTextRenderer_MathTextIsSupported, METH_VARARGS,
   "V.MathTextIsSupported() -> bool\nC++: virtual bool MathTextIsSupported()\n\n"},
  {"GetBoundingBox", PyvtkTextRenderer_GetBoundingBox, METH_VARARGS,
   "V.GetBoundingBox(vtkTextProperty, string, [int, int, int, int],\n    int, int) -> bool\nC++: bool GetBoundingBox(vtkTextProperty *tprop,\n    const vtkStdString &str, int bbox[4], int dpi,\n    int backend=vtkTextRenderer::Default)\nV.GetBoundingBox(vtkTextProperty, unicode, [int, int, int, int],\n    int, int) -> bool\nC++: bool GetBoundingBox(vtkTextProperty *tprop,\n    const vtkUnicodeString &str, int bbox[4], int dpi,\n    int backend=vtkTextRenderer::Default)\n\nGiven a text property and a string, get the bounding box {xmin,\nxmax, ymin, ymax} of the rendered string in pixels. The origin of\nthe bounding box is the anchor point described by the horizontal\nand vertical justification text property variables. Return true\non success, false otherwise.\n"},
  {"RenderString", PyvtkTextRenderer_RenderString, METH_VARARGS,
   "V.RenderString(vtkTextProperty, string, vtkImageData, [int, int],\n    int, int) -> bool\nC++: bool RenderString(vtkTextProperty *tprop,\n    const vtkStdString &str, vtkImageData *data, int textDims[2],\n    int dpi, int backend=vtkTextRenderer::Default)\nV.RenderString(vtkTextProperty, unicode, vtkImageData, [int, int],\n     int, int) -> bool\nC++: bool RenderString(vtkTextProperty *tprop,\n    const vtkUnicodeString &str, vtkImageData *data,\n    int textDims[2], int dpi,\n    int backend=vtkTextRenderer::Default)\n\nGiven a text property and a string, this function initializes the\nvtkImageData *data and renders it in a vtkImageData. Return true\non success, false otherwise. If using the overload that specifies\n\"textDims\", the array will be overwritten with the pixel width\nand height defining a tight bounding box around the text in the\nimage, starting from the upper-right corner. This is used when\nrendering for a texture on graphics hardware that requires\ntexture image dimensions to be a power of two; textDims can be\nused to determine the texture coordinates needed to cleanly fit\nthe text on the target. The origin of the image's extents is\naligned with the anchor point described by the text property's\nvertical and horizontal justification options.\n"},
  {"GetConstrainedFontSize", PyvtkTextRenderer_GetConstrainedFontSize, METH_VARARGS,
   "V.GetConstrainedFontSize(string, vtkTextProperty, int, int, int,\n    int) -> int\nC++: int GetConstrainedFontSize(const vtkStdString &str,\n    vtkTextProperty *tprop, int targetWidth, int targetHeight,\n    int dpi, int backend=vtkTextRenderer::Default)\nV.GetConstrainedFontSize(unicode, vtkTextProperty, int, int, int,\n    int) -> int\nC++: int GetConstrainedFontSize(const vtkUnicodeString &str,\n    vtkTextProperty *tprop, int targetWidth, int targetHeight,\n    int dpi, int backend=vtkTextRenderer::Default)\n\nThis function returns the font size (in points) and sets the size\nin @a tprop that is required to fit the string in the target\nrectangle. The computed font size will be set in tprop as well.\nIf an error occurs, this function will return -1.\n"},
  {"StringToPath", PyvtkTextRenderer_StringToPath, METH_VARARGS,
   "V.StringToPath(vtkTextProperty, string, vtkPath, int, int) -> bool\nC++: bool StringToPath(vtkTextProperty *tprop,\n    const vtkStdString &str, vtkPath *path, int dpi,\n    int backend=vtkTextRenderer::Default)\nV.StringToPath(vtkTextProperty, unicode, vtkPath, int, int)\n    -> bool\nC++: bool StringToPath(vtkTextProperty *tprop,\n    const vtkUnicodeString &str, vtkPath *path, int dpi,\n    int backend=vtkTextRenderer::Default)\n\nGiven a text property and a string, this function populates the\nvtkPath path with the outline of the rendered string. The origin\nof the path coordinates is aligned with the anchor point\ndescribed by the text property's horizontal and vertical\njustification options. Return true on success, false otherwise.\n"},
  {"SetScaleToPowerOfTwo", PyvtkTextRenderer_SetScaleToPowerOfTwo, METH_VARARGS,
   "V.SetScaleToPowerOfTwo(bool)\nC++: void SetScaleToPowerOfTwo(bool scale)\n\nSet to true if the graphics implementation requires texture image\ndimensions to be a power of two. Default is true, but this member\nwill be set appropriately by\nvtkOpenGLRenderWindow::OpenGLInitContext when GL is inited.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkTextRenderer_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingCorePython.vtkTextRenderer", // tp_name
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
  PyvtkTextRenderer_Doc, // tp_doc
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

static vtkObjectBase *PyvtkTextRenderer_StaticNew()
{
  return vtkTextRenderer::New();
}

PyObject *PyvtkTextRenderer_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkTextRenderer_Type, PyvtkTextRenderer_Methods,
    "vtkTextRenderer",
 &PyvtkTextRenderer_StaticNew);

  PyTypeObject *pytype = &PyvtkTextRenderer_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkObject_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkTextRenderer_Backend_Type);
  PyvtkTextRenderer_Backend_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkTextRenderer_Backend_Type);

  o = (PyObject *)&PyvtkTextRenderer_Backend_Type;
  if (PyDict_SetItemString(d, "Backend", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 5; c++)
  {
    typedef vtkTextRenderer::Backend cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[5] = {
        { "Default", vtkTextRenderer::Default },
        { "Detect", vtkTextRenderer::Detect },
        { "FreeType", vtkTextRenderer::FreeType },
        { "MathText", vtkTextRenderer::MathText },
        { "UserBackend", vtkTextRenderer::UserBackend },
      };

    o = PyvtkTextRenderer_Backend_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkTextRenderer(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkTextRendererCleanup_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkTextRendererCleanup", o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkTextRenderer_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkTextRenderer", o) != 0)
  {
    Py_DECREF(o);
  }

}

