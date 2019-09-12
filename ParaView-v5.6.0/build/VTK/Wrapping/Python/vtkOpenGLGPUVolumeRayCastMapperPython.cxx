// python wrapper for vtkOpenGLGPUVolumeRayCastMapper
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
#include "vtkOpenGLGPUVolumeRayCastMapper.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkOpenGLGPUVolumeRayCastMapper(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkOpenGLGPUVolumeRayCastMapper_ClassNew(); }

#ifndef DECLARED_PyvtkGPUVolumeRayCastMapper_ClassNew
extern "C" { PyObject *PyvtkGPUVolumeRayCastMapper_ClassNew(); }
#define DECLARED_PyvtkGPUVolumeRayCastMapper_ClassNew
#endif

static const char *PyvtkOpenGLGPUVolumeRayCastMapper_Doc =
  "vtkOpenGLGPUVolumeRayCastMapper - OpenGL implementation of volume\nrendering through ray-casting.\n\n"
  "Superclass: vtkGPUVolumeRayCastMapper\n\n"
  "@section multi Multiple Inputs\n\n"
  "* When multiple inputs are rendered simultaneously, it is possible to\n"
  "* composite overlapping areas correctly. Inputs are connected\n"
  "  directly to\n"
  "* the mapper and their parameters (transfer functions,\n"
  "  transformations, etc.)\n"
  "* are specified through standard vtkVolume instances. These vtkVolume\n"
  "* instances are to be registered in a special vtkProp3D,\n"
  "  vtkMultiVolume.\n"
  "*\n"
  "* Structures related to a particular active input are stored in a\n"
  "  helper\n"
  "* class (vtkVolumeInputHelper) and helper structures are kept in a\n"
  "* port-referenced map (VolumeInputMap). The order of the inputs in\n"
  "  the\n"
  "* map is important as it defines the order in which parameters are\n"
  "* bound to uniform variables (transformation matrices, bias, scale\n"
  "  and every\n"
  "* other required rendering parameter).\n"
  "*\n"
  "* A separate code path is used when rendering multiple-inputs in\n"
  "  order to\n"
  "* facilitate the co-existance of these two modes (single/multiple),\n"
  "  due to\n"
  "* current feature incompatibilities with multiple inputs (e.g.\n"
  "  texture-streaming,\n"
  "* cropping, etc.).\n"
  "*\n"
  "*\n\n"
  "ote A limited set of the mapper features are currently supported for\n"
  "* multiple inputs:\n"
  "*\n"
  "* - Blending\n"
  "*   - Composite (front-to-back)\n"
  "*\n"
  "* - Transfer functions (defined separately for per input)\n"
  "*   - 1D color\n"
  "*   - 1D scalar opacity\n"
  "*   - 1D gradient magnitude opacity\n"
  "*   - 2D scalar-gradient magnitude\n"
  "*\n"
  "* - Point and cell data\n"
  "*   - With the limitation that all of the inputs are assumed to share\n"
  "the same\n"
  "*     name/id.\n"
  "*\n"
  "* @sa vtkGPUVolumeRayCastMapper vtkVolumeInputHelper vtkVolumeTexture\n"
  "* vtkMultiVolume\n"
  "*\n\n";

static PyTypeObject PyvtkOpenGLGPUVolumeRayCastMapper_Passes_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingVolumeOpenGL2Python.vtkOpenGLGPUVolumeRayCastMapper.Passes", // tp_name
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

PyObject *PyvtkOpenGLGPUVolumeRayCastMapper_Passes_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkOpenGLGPUVolumeRayCastMapper_Passes_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkOpenGLGPUVolumeRayCastMapper_Passes_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkOpenGLGPUVolumeRayCastMapper_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkOpenGLGPUVolumeRayCastMapper::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLGPUVolumeRayCastMapper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLGPUVolumeRayCastMapper *op = static_cast<vtkOpenGLGPUVolumeRayCastMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkOpenGLGPUVolumeRayCastMapper::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLGPUVolumeRayCastMapper_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkOpenGLGPUVolumeRayCastMapper *tempr = vtkOpenGLGPUVolumeRayCastMapper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLGPUVolumeRayCastMapper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLGPUVolumeRayCastMapper *op = static_cast<vtkOpenGLGPUVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkOpenGLGPUVolumeRayCastMapper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkOpenGLGPUVolumeRayCastMapper::NewInstance());

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
PyvtkOpenGLGPUVolumeRayCastMapper_GetDepthTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDepthTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLGPUVolumeRayCastMapper *op = static_cast<vtkOpenGLGPUVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTextureObject *tempr = (ap.IsBound() ?
      op->GetDepthTexture() :
      op->vtkOpenGLGPUVolumeRayCastMapper::GetDepthTexture());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLGPUVolumeRayCastMapper_GetColorTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLGPUVolumeRayCastMapper *op = static_cast<vtkOpenGLGPUVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTextureObject *tempr = (ap.IsBound() ?
      op->GetColorTexture() :
      op->vtkOpenGLGPUVolumeRayCastMapper::GetColorTexture());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLGPUVolumeRayCastMapper_GetDepthImage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDepthImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLGPUVolumeRayCastMapper *op = static_cast<vtkOpenGLGPUVolumeRayCastMapper *>(vp);

  vtkImageData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageData"))
  {
    if (ap.IsBound())
    {
      op->GetDepthImage(temp0);
    }
    else
    {
      op->vtkOpenGLGPUVolumeRayCastMapper::GetDepthImage(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLGPUVolumeRayCastMapper_GetColorImage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLGPUVolumeRayCastMapper *op = static_cast<vtkOpenGLGPUVolumeRayCastMapper *>(vp);

  vtkImageData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageData"))
  {
    if (ap.IsBound())
    {
      op->GetColorImage(temp0);
    }
    else
    {
      op->vtkOpenGLGPUVolumeRayCastMapper::GetColorImage(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLGPUVolumeRayCastMapper_GetCurrentPass(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentPass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLGPUVolumeRayCastMapper *op = static_cast<vtkOpenGLGPUVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCurrentPass() :
      op->vtkOpenGLGPUVolumeRayCastMapper::GetCurrentPass());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLGPUVolumeRayCastMapper_SetSharedDepthTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSharedDepthTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLGPUVolumeRayCastMapper *op = static_cast<vtkOpenGLGPUVolumeRayCastMapper *>(vp);

  vtkTextureObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextureObject"))
  {
    if (ap.IsBound())
    {
      op->SetSharedDepthTexture(temp0);
    }
    else
    {
      op->vtkOpenGLGPUVolumeRayCastMapper::SetSharedDepthTexture(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLGPUVolumeRayCastMapper_SetPartitions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPartitions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLGPUVolumeRayCastMapper *op = static_cast<vtkOpenGLGPUVolumeRayCastMapper *>(vp);

  unsigned short temp0;
  unsigned short temp1;
  unsigned short temp2;
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
      op->vtkOpenGLGPUVolumeRayCastMapper::SetPartitions(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLGPUVolumeRayCastMapper_PreLoadData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PreLoadData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLGPUVolumeRayCastMapper *op = static_cast<vtkOpenGLGPUVolumeRayCastMapper *>(vp);

  vtkRenderer *temp0 = nullptr;
  vtkVolume *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkVolume"))
  {
    bool tempr = (ap.IsBound() ?
      op->PreLoadData(temp0, temp1) :
      op->vtkOpenGLGPUVolumeRayCastMapper::PreLoadData(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLGPUVolumeRayCastMapper_AddShaderReplacement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddShaderReplacement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLGPUVolumeRayCastMapper *op = static_cast<vtkOpenGLGPUVolumeRayCastMapper *>(vp);

  vtkShader::Type temp0;
  std::string temp1;
  bool temp2 = false;
  std::string temp3;
  bool temp4 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetEnumValue(temp0, "vtkShader.Type") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    if (ap.IsBound())
    {
      op->AddShaderReplacement(temp0, temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkOpenGLGPUVolumeRayCastMapper::AddShaderReplacement(temp0, temp1, temp2, temp3, temp4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLGPUVolumeRayCastMapper_ClearShaderReplacement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearShaderReplacement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLGPUVolumeRayCastMapper *op = static_cast<vtkOpenGLGPUVolumeRayCastMapper *>(vp);

  vtkShader::Type temp0;
  std::string temp1;
  bool temp2 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetEnumValue(temp0, "vtkShader.Type") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->ClearShaderReplacement(temp0, temp1, temp2);
    }
    else
    {
      op->vtkOpenGLGPUVolumeRayCastMapper::ClearShaderReplacement(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLGPUVolumeRayCastMapper_ClearAllShaderReplacements_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearAllShaderReplacements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLGPUVolumeRayCastMapper *op = static_cast<vtkOpenGLGPUVolumeRayCastMapper *>(vp);

  vtkShader::Type temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetEnumValue(temp0, "vtkShader.Type"))
  {
    if (ap.IsBound())
    {
      op->ClearAllShaderReplacements(temp0);
    }
    else
    {
      op->vtkOpenGLGPUVolumeRayCastMapper::ClearAllShaderReplacements(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkOpenGLGPUVolumeRayCastMapper_ClearAllShaderReplacements_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearAllShaderReplacements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLGPUVolumeRayCastMapper *op = static_cast<vtkOpenGLGPUVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearAllShaderReplacements();
    }
    else
    {
      op->vtkOpenGLGPUVolumeRayCastMapper::ClearAllShaderReplacements();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkOpenGLGPUVolumeRayCastMapper_ClearAllShaderReplacements(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkOpenGLGPUVolumeRayCastMapper_ClearAllShaderReplacements_s1(self, args);
    case 0:
      return PyvtkOpenGLGPUVolumeRayCastMapper_ClearAllShaderReplacements_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "ClearAllShaderReplacements");
  return nullptr;
}



static PyObject *
PyvtkOpenGLGPUVolumeRayCastMapper_SetVertexShaderCode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVertexShaderCode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLGPUVolumeRayCastMapper *op = static_cast<vtkOpenGLGPUVolumeRayCastMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVertexShaderCode(temp0);
    }
    else
    {
      op->vtkOpenGLGPUVolumeRayCastMapper::SetVertexShaderCode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLGPUVolumeRayCastMapper_GetVertexShaderCode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVertexShaderCode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLGPUVolumeRayCastMapper *op = static_cast<vtkOpenGLGPUVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetVertexShaderCode() :
      op->vtkOpenGLGPUVolumeRayCastMapper::GetVertexShaderCode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLGPUVolumeRayCastMapper_SetFragmentShaderCode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFragmentShaderCode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLGPUVolumeRayCastMapper *op = static_cast<vtkOpenGLGPUVolumeRayCastMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFragmentShaderCode(temp0);
    }
    else
    {
      op->vtkOpenGLGPUVolumeRayCastMapper::SetFragmentShaderCode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLGPUVolumeRayCastMapper_GetFragmentShaderCode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFragmentShaderCode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLGPUVolumeRayCastMapper *op = static_cast<vtkOpenGLGPUVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFragmentShaderCode() :
      op->vtkOpenGLGPUVolumeRayCastMapper::GetFragmentShaderCode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLGPUVolumeRayCastMapper_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLGPUVolumeRayCastMapper *op = static_cast<vtkOpenGLGPUVolumeRayCastMapper *>(vp);

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
      op->vtkOpenGLGPUVolumeRayCastMapper::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkOpenGLGPUVolumeRayCastMapper_Methods[] = {
  {"IsTypeOf", PyvtkOpenGLGPUVolumeRayCastMapper_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkOpenGLGPUVolumeRayCastMapper_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkOpenGLGPUVolumeRayCastMapper_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkOpenGLGPUVolumeRayCastMapper\nC++: static vtkOpenGLGPUVolumeRayCastMapper *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkOpenGLGPUVolumeRayCastMapper_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkOpenGLGPUVolumeRayCastMapper\nC++: vtkOpenGLGPUVolumeRayCastMapper *NewInstance()\n\n"},
  {"GetDepthTexture", PyvtkOpenGLGPUVolumeRayCastMapper_GetDepthTexture, METH_VARARGS,
   "V.GetDepthTexture() -> vtkTextureObject\nC++: vtkTextureObject *GetDepthTexture()\n\nLow level API to enable access to depth texture in\nRenderToTexture mode. It will return either nullptr if\nRenderToImage was never turned on or texture captured the last\ntime RenderToImage was on.\n"},
  {"GetColorTexture", PyvtkOpenGLGPUVolumeRayCastMapper_GetColorTexture, METH_VARARGS,
   "V.GetColorTexture() -> vtkTextureObject\nC++: vtkTextureObject *GetColorTexture()\n\nLow level API to enable access to color texture in\nRenderToTexture mode. It will return either nullptr if\nRenderToImage was never turned on or texture captured the last\ntime RenderToImage was on.\n"},
  {"GetDepthImage", PyvtkOpenGLGPUVolumeRayCastMapper_GetDepthImage, METH_VARARGS,
   "V.GetDepthImage(vtkImageData)\nC++: void GetDepthImage(vtkImageData *im) override;\n\nLow level API to export the depth texture as vtkImageData in\nRenderToImage mode.\n"},
  {"GetColorImage", PyvtkOpenGLGPUVolumeRayCastMapper_GetColorImage, METH_VARARGS,
   "V.GetColorImage(vtkImageData)\nC++: void GetColorImage(vtkImageData *im) override;\n\nLow level API to export the color texture as vtkImageData in\nRenderToImage mode.\n"},
  {"GetCurrentPass", PyvtkOpenGLGPUVolumeRayCastMapper_GetCurrentPass, METH_VARARGS,
   "V.GetCurrentPass() -> int\nC++: virtual int GetCurrentPass()\n\nMapper can have multiple passes and internally it will set the\nstate. The state can not be set externally explicitly but can be\nset indirectly depending on the options set by the user.\n"},
  {"SetSharedDepthTexture", PyvtkOpenGLGPUVolumeRayCastMapper_SetSharedDepthTexture, METH_VARARGS,
   "V.SetSharedDepthTexture(vtkTextureObject)\nC++: void SetSharedDepthTexture(vtkTextureObject *nt)\n\n"},
  {"SetPartitions", PyvtkOpenGLGPUVolumeRayCastMapper_SetPartitions, METH_VARARGS,
   "V.SetPartitions(int, int, int)\nC++: void SetPartitions(unsigned short x, unsigned short y,\n    unsigned short z)\n\nSet a fixed number of partitions in which to split the volume\nduring rendring. This will force by-block rendering without\ntrying to compute an optimum number of partitions.\n"},
  {"PreLoadData", PyvtkOpenGLGPUVolumeRayCastMapper_PreLoadData, METH_VARARGS,
   "V.PreLoadData(vtkRenderer, vtkVolume) -> bool\nC++: bool PreLoadData(vtkRenderer *ren, vtkVolume *vol)\n\nLoad the volume texture into GPU memory.  Actual loading occurs\nin vtkVolumeTexture::LoadVolume.  The mapper by default loads\ndata lazily (at render time), so it is most commonly not\nnecessary to call this function.  This method is only exposed in\norder to support on-site loading which is useful in cases where\nthe user needs to know a-priori whether loading will succeed or\nnot.\n"},
  {"AddShaderReplacement", PyvtkOpenGLGPUVolumeRayCastMapper_AddShaderReplacement, METH_VARARGS,
   "V.AddShaderReplacement(vtkShader.Type, string, bool, string, bool)\nC++: void AddShaderReplacement(vtkShader::Type shaderType,\n    const std::string &originalValue, bool replaceFirst,\n    const std::string &replacementValue, bool replaceAll)\n\nThis function enables you to apply your own substitutions to the\nshader creation process. The shader code in this class is created\nby applying a bunch of string replacements to a shader template.\nUsing this function you can apply your own string replacements to\nadd features you desire.\n"},
  {"ClearShaderReplacement", PyvtkOpenGLGPUVolumeRayCastMapper_ClearShaderReplacement, METH_VARARGS,
   "V.ClearShaderReplacement(vtkShader.Type, string, bool)\nC++: void ClearShaderReplacement(vtkShader::Type shaderType,\n    const std::string &originalValue, bool replaceFirst)\n\nThis function enables you to apply your own substitutions to the\nshader creation process. The shader code in this class is created\nby applying a bunch of string replacements to a shader template.\nUsing this function you can apply your own string replacements to\nadd features you desire.\n"},
  {"ClearAllShaderReplacements", PyvtkOpenGLGPUVolumeRayCastMapper_ClearAllShaderReplacements, METH_VARARGS,
   "V.ClearAllShaderReplacements(vtkShader.Type)\nC++: void ClearAllShaderReplacements(vtkShader::Type shaderType)\nV.ClearAllShaderReplacements()\nC++: void ClearAllShaderReplacements()\n\nThis function enables you to apply your own substitutions to the\nshader creation process. The shader code in this class is created\nby applying a bunch of string replacements to a shader template.\nUsing this function you can apply your own string replacements to\nadd features you desire.\n"},
  {"SetVertexShaderCode", PyvtkOpenGLGPUVolumeRayCastMapper_SetVertexShaderCode, METH_VARARGS,
   "V.SetVertexShaderCode(string)\nC++: virtual void SetVertexShaderCode(const char *_arg)\n\nAllow the program to set the shader codes used directly instead\nof using the built in templates. Be aware, if set, this template\nwill be used for all cases, primitive types, picking etc.\n"},
  {"GetVertexShaderCode", PyvtkOpenGLGPUVolumeRayCastMapper_GetVertexShaderCode, METH_VARARGS,
   "V.GetVertexShaderCode() -> string\nC++: virtual char *GetVertexShaderCode()\n\nAllow the program to set the shader codes used directly instead\nof using the built in templates. Be aware, if set, this template\nwill be used for all cases, primitive types, picking etc.\n"},
  {"SetFragmentShaderCode", PyvtkOpenGLGPUVolumeRayCastMapper_SetFragmentShaderCode, METH_VARARGS,
   "V.SetFragmentShaderCode(string)\nC++: virtual void SetFragmentShaderCode(const char *_arg)\n\nAllow the program to set the shader codes used directly instead\nof using the built in templates. Be aware, if set, this template\nwill be used for all cases, primitive types, picking etc.\n"},
  {"GetFragmentShaderCode", PyvtkOpenGLGPUVolumeRayCastMapper_GetFragmentShaderCode, METH_VARARGS,
   "V.GetFragmentShaderCode() -> string\nC++: virtual char *GetFragmentShaderCode()\n\nAllow the program to set the shader codes used directly instead\nof using the built in templates. Be aware, if set, this template\nwill be used for all cases, primitive types, picking etc.\n"},
  {"ReleaseGraphicsResources", PyvtkOpenGLGPUVolumeRayCastMapper_ReleaseGraphicsResources, METH_VARARGS,
   "V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *window) override;\n\nDelete OpenGL objects.\n\\post done: this->OpenGLObjectsCreated==0\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkOpenGLGPUVolumeRayCastMapper_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingVolumeOpenGL2Python.vtkOpenGLGPUVolumeRayCastMapper", // tp_name
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
  PyvtkOpenGLGPUVolumeRayCastMapper_Doc, // tp_doc
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

static vtkObjectBase *PyvtkOpenGLGPUVolumeRayCastMapper_StaticNew()
{
  return vtkOpenGLGPUVolumeRayCastMapper::New();
}

PyObject *PyvtkOpenGLGPUVolumeRayCastMapper_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkOpenGLGPUVolumeRayCastMapper_Type, PyvtkOpenGLGPUVolumeRayCastMapper_Methods,
    "vtkOpenGLGPUVolumeRayCastMapper",
 &PyvtkOpenGLGPUVolumeRayCastMapper_StaticNew);

  PyTypeObject *pytype = &PyvtkOpenGLGPUVolumeRayCastMapper_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkGPUVolumeRayCastMapper_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkOpenGLGPUVolumeRayCastMapper_Passes_Type);
  PyvtkOpenGLGPUVolumeRayCastMapper_Passes_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkOpenGLGPUVolumeRayCastMapper_Passes_Type);

  o = (PyObject *)&PyvtkOpenGLGPUVolumeRayCastMapper_Passes_Type;
  if (PyDict_SetItemString(d, "Passes", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 2; c++)
  {
    typedef vtkOpenGLGPUVolumeRayCastMapper::Passes cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[2] = {
        { "RenderPass", vtkOpenGLGPUVolumeRayCastMapper::RenderPass },
        { "DepthPass", vtkOpenGLGPUVolumeRayCastMapper::DepthPass },
      };

    o = PyvtkOpenGLGPUVolumeRayCastMapper_Passes_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkOpenGLGPUVolumeRayCastMapper(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkOpenGLGPUVolumeRayCastMapper_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkOpenGLGPUVolumeRayCastMapper", o) != 0)
  {
    Py_DECREF(o);
  }

}

