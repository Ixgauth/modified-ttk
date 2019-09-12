// python wrapper for vtkValuePass
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
#include "vtkValuePass.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkValuePass(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkValuePass_ClassNew(); }

#ifndef DECLARED_PyvtkOpenGLRenderPass_ClassNew
extern "C" { PyObject *PyvtkOpenGLRenderPass_ClassNew(); }
#define DECLARED_PyvtkOpenGLRenderPass_ClassNew
#endif

static const char *PyvtkValuePass_Doc =
  "vtkValuePass - Renders geometry using the values of a field array as\nfragment colors.\n\n"
  "Superclass: vtkOpenGLRenderPass\n\n"
  "The output can be used for deferred color mapping. It supports using\n"
  "arrays of either point or cell data. The target array can be selected\n"
  "by setting an array name/id and a component number. Only opaque\n"
  "geometry is supported.\n\n"
  "There are two rendering modes available:\n\n"
  "* INVERTIBLE_LUT  Encodes array values as RGB data and renders the\n"
  "  result to the default framebuffer.  It uses a texture as a color\n"
  "  LUT to map the values to RGB data. Texture size constraints limit\n"
  "  its precision (currently 12-bit). The implementation of this mode\n"
  "  is in vtkInternalsInvertible.\n\n"
  "* FLOATING_POINT  Renders actual array values as floating point data\n"
  "  to an internal RGBA32F framebuffer.  This class binds and unbinds\n"
  "  the framebuffer on each render pass. Resources are allocated on\n"
  "  demand. When rendering point data values are uploaded to the GPU as\n"
  "vertex attributes. When rendering cell data values are uploaded as a\n"
  "  texture buffer. Custom vertex and fragment shaders are defined in\n"
  "  order to adjust its behavior for either type of data.\n\n"
  "@sa\n"
  "vtkRenderPass vtkOpenGLRenderPass\n\n";

static PyTypeObject PyvtkValuePass_Mode_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingOpenGL2Python.vtkValuePass.Mode", // tp_name
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

PyObject *PyvtkValuePass_Mode_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkValuePass_Mode_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkValuePass_Mode_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkValuePass_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkValuePass::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkValuePass_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkValuePass *op = static_cast<vtkValuePass *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkValuePass::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkValuePass_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkValuePass *tempr = vtkValuePass::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkValuePass_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkValuePass *op = static_cast<vtkValuePass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkValuePass *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkValuePass::NewInstance());

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
PyvtkValuePass_SetRenderingMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderingMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkValuePass *op = static_cast<vtkValuePass *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRenderingMode(temp0);
    }
    else
    {
      op->vtkValuePass::SetRenderingMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkValuePass_GetRenderingMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderingMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkValuePass *op = static_cast<vtkValuePass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRenderingMode() :
      op->vtkValuePass::GetRenderingMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkValuePass_SetInputArrayToProcess_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputArrayToProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkValuePass *op = static_cast<vtkValuePass *>(vp);

  int temp0;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetInputArrayToProcess(temp0, temp1);
    }
    else
    {
      op->vtkValuePass::SetInputArrayToProcess(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkValuePass_SetInputArrayToProcess_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputArrayToProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkValuePass *op = static_cast<vtkValuePass *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetInputArrayToProcess(temp0, temp1);
    }
    else
    {
      op->vtkValuePass::SetInputArrayToProcess(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkValuePass_SetInputArrayToProcess_Methods[] = {
  {nullptr, PyvtkValuePass_SetInputArrayToProcess_s1, METH_VARARGS,
   "@iz"},
  {nullptr, PyvtkValuePass_SetInputArrayToProcess_s2, METH_VARARGS,
   "@ii"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkValuePass_SetInputArrayToProcess(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkValuePass_SetInputArrayToProcess_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetInputArrayToProcess");
  return nullptr;
}



static PyObject *
PyvtkValuePass_SetInputComponentToProcess(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputComponentToProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkValuePass *op = static_cast<vtkValuePass *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInputComponentToProcess(temp0);
    }
    else
    {
      op->vtkValuePass::SetInputComponentToProcess(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkValuePass_SetScalarRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkValuePass *op = static_cast<vtkValuePass *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetScalarRange(temp0, temp1);
    }
    else
    {
      op->vtkValuePass::SetScalarRange(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkValuePass_GetFloatImageDataArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFloatImageDataArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkValuePass *op = static_cast<vtkValuePass *>(vp);

  vtkRenderer *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
  {
    vtkFloatArray *tempr = (ap.IsBound() ?
      op->GetFloatImageDataArray(temp0) :
      op->vtkValuePass::GetFloatImageDataArray(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkValuePass_GetFloatImageData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFloatImageData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkValuePass *op = static_cast<vtkValuePass *>(vp);

  int temp0;
  int temp1;
  int temp2;
  void  *temp3 = nullptr;
  Py_buffer pbuf3 = VTK_PYBUFFER_INITIALIZER;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetBuffer(temp3, &pbuf3))
  {
    if (ap.IsBound())
    {
      op->GetFloatImageData(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkValuePass::GetFloatImageData(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

#if PY_VERSION_HEX >= 0x02060000
  if (pbuf3.obj != 0)
  {
    PyBuffer_Release(&pbuf3);
  }
#endif
  return result;
}


static PyObject *
PyvtkValuePass_GetFloatImageExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFloatImageExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkValuePass *op = static_cast<vtkValuePass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetFloatImageExtents() :
      op->vtkValuePass::GetFloatImageExtents());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkValuePass_IsFloatingPointModeSupported(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsFloatingPointModeSupported");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkValuePass *op = static_cast<vtkValuePass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsFloatingPointModeSupported() :
      op->vtkValuePass::IsFloatingPointModeSupported());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkValuePass_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkValuePass *op = static_cast<vtkValuePass *>(vp);

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
      op->vtkValuePass::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkValuePass_ColorToValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ColorToValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkValuePass *op = static_cast<vtkValuePass *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<unsigned char> store0(size0);
  unsigned char *temp0 = store0.Data();
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->ColorToValue(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkValuePass::ColorToValue(temp0, temp1, temp2, temp3);
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

static PyMethodDef PyvtkValuePass_Methods[] = {
  {"IsTypeOf", PyvtkValuePass_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkValuePass_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkValuePass_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkValuePass\nC++: static vtkValuePass *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkValuePass_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkValuePass\nC++: vtkValuePass *NewInstance()\n\n"},
  {"SetRenderingMode", PyvtkValuePass_SetRenderingMode, METH_VARARGS,
   "V.SetRenderingMode(int)\nC++: virtual void SetRenderingMode(int _arg)\n\n"},
  {"GetRenderingMode", PyvtkValuePass_GetRenderingMode, METH_VARARGS,
   "V.GetRenderingMode() -> int\nC++: virtual int GetRenderingMode()\n\n"},
  {"SetInputArrayToProcess", PyvtkValuePass_SetInputArrayToProcess, METH_VARARGS,
   "V.SetInputArrayToProcess(int, string)\nC++: void SetInputArrayToProcess(int fieldAssociation,\n    const char *name)\nV.SetInputArrayToProcess(int, int)\nC++: void SetInputArrayToProcess(int fieldAssociation,\n    int fieldId)\n\n"},
  {"SetInputComponentToProcess", PyvtkValuePass_SetInputComponentToProcess, METH_VARARGS,
   "V.SetInputComponentToProcess(int)\nC++: void SetInputComponentToProcess(int component)\n\n"},
  {"SetScalarRange", PyvtkValuePass_SetScalarRange, METH_VARARGS,
   "V.SetScalarRange(float, float)\nC++: void SetScalarRange(double min, double max)\n\n"},
  {"GetFloatImageDataArray", PyvtkValuePass_GetFloatImageDataArray, METH_VARARGS,
   "V.GetFloatImageDataArray(vtkRenderer) -> vtkFloatArray\nC++: vtkFloatArray *GetFloatImageDataArray(vtkRenderer *ren)\n\nInterface to get the rendered image in FLOATING_POINT mode. \nReturns a single component array containing the rendered values.\n\\warning The returned array is owned by this class.\n"},
  {"GetFloatImageData", PyvtkValuePass_GetFloatImageData, METH_VARARGS,
   "V.GetFloatImageData(int, int, int, void)\nC++: void GetFloatImageData(int const format, int const width,\n    int const height, void *data)\n\nInterface to get the rendered image in FLOATING_POINT mode.  Low\nlevel API, a format for the internal glReadPixels call can be\nspecified. 'data' is expected to be allocated and cleaned-up by\nthe caller.\n"},
  {"GetFloatImageExtents", PyvtkValuePass_GetFloatImageExtents, METH_VARARGS,
   "V.GetFloatImageExtents() -> (int, ...)\nC++: int *GetFloatImageExtents()\n\nInterface to get the rendered image in FLOATING_POINT mode. \nImage extents of the value array.\n"},
  {"IsFloatingPointModeSupported", PyvtkValuePass_IsFloatingPointModeSupported, METH_VARARGS,
   "V.IsFloatingPointModeSupported() -> bool\nC++: bool IsFloatingPointModeSupported()\n\nCheck for extension support.\n"},
  {"ReleaseGraphicsResources", PyvtkValuePass_ReleaseGraphicsResources, METH_VARARGS,
   "V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *win) override;\n\nRelease graphics resources and ask components to release their\nown resources. Default implementation is empty.\n\\pre w_exists: w!=0\n"},
  {"ColorToValue", PyvtkValuePass_ColorToValue, METH_VARARGS,
   "V.ColorToValue((int, ...), float, float, float)\nC++: void ColorToValue(unsigned char const *color,\n    double const min, double const scale, double &value)\n\nConvert an RGB triplet to a floating point value. This method is\nexposed as a convenience function for testing (TestValuePass2).\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkValuePass_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingOpenGL2Python.vtkValuePass", // tp_name
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
  PyvtkValuePass_Doc, // tp_doc
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

static vtkObjectBase *PyvtkValuePass_StaticNew()
{
  return vtkValuePass::New();
}

PyObject *PyvtkValuePass_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkValuePass_Type, PyvtkValuePass_Methods,
    "vtkValuePass",
 &PyvtkValuePass_StaticNew);

  PyTypeObject *pytype = &PyvtkValuePass_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkOpenGLRenderPass_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkValuePass_Mode_Type);
  PyvtkValuePass_Mode_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkValuePass_Mode_Type);

  o = (PyObject *)&PyvtkValuePass_Mode_Type;
  if (PyDict_SetItemString(d, "Mode", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 2; c++)
  {
    typedef vtkValuePass::Mode cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[2] = {
        { "INVERTIBLE_LUT", vtkValuePass::INVERTIBLE_LUT },
        { "FLOATING_POINT", vtkValuePass::FLOATING_POINT },
      };

    o = PyvtkValuePass_Mode_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkValuePass(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkValuePass_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkValuePass", o) != 0)
  {
    Py_DECREF(o);
  }

}

