// python wrapper for vtkShaderProgram
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
#include "vtkShaderProgram.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkShaderProgram(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkShaderProgram_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkShaderProgram_Doc =
  "vtkShaderProgram - a glsl shader program\n\n"
  "Superclass: vtkObject\n\n"
  "This class contains the vertex, fragment, geometry shaders that\n"
  "combine to make a shader program\n\n";

static PyTypeObject PyvtkShaderProgram_NormalizeOption_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingOpenGL2Python.vtkShaderProgram.NormalizeOption", // tp_name
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

PyObject *PyvtkShaderProgram_NormalizeOption_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkShaderProgram_NormalizeOption_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkShaderProgram_NormalizeOption_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}

static PyTypeObject PyvtkShaderProgram_UniformGroups_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingOpenGL2Python.vtkShaderProgram.UniformGroups", // tp_name
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

PyObject *PyvtkShaderProgram_UniformGroups_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkShaderProgram_UniformGroups_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkShaderProgram_UniformGroups_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkShaderProgram_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkShaderProgram::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkShaderProgram_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShaderProgram *op = static_cast<vtkShaderProgram *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkShaderProgram::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkShaderProgram_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkShaderProgram *tempr = vtkShaderProgram::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkShaderProgram_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShaderProgram *op = static_cast<vtkShaderProgram *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkShaderProgram *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkShaderProgram::NewInstance());

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
PyvtkShaderProgram_GetVertexShader(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVertexShader");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShaderProgram *op = static_cast<vtkShaderProgram *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkShader *tempr = (ap.IsBound() ?
      op->GetVertexShader() :
      op->vtkShaderProgram::GetVertexShader());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkShaderProgram_SetVertexShader(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVertexShader");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShaderProgram *op = static_cast<vtkShaderProgram *>(vp);

  vtkShader *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkShader"))
  {
    if (ap.IsBound())
    {
      op->SetVertexShader(temp0);
    }
    else
    {
      op->vtkShaderProgram::SetVertexShader(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkShaderProgram_GetFragmentShader(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFragmentShader");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShaderProgram *op = static_cast<vtkShaderProgram *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkShader *tempr = (ap.IsBound() ?
      op->GetFragmentShader() :
      op->vtkShaderProgram::GetFragmentShader());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkShaderProgram_SetFragmentShader(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFragmentShader");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShaderProgram *op = static_cast<vtkShaderProgram *>(vp);

  vtkShader *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkShader"))
  {
    if (ap.IsBound())
    {
      op->SetFragmentShader(temp0);
    }
    else
    {
      op->vtkShaderProgram::SetFragmentShader(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkShaderProgram_GetGeometryShader(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGeometryShader");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShaderProgram *op = static_cast<vtkShaderProgram *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkShader *tempr = (ap.IsBound() ?
      op->GetGeometryShader() :
      op->vtkShaderProgram::GetGeometryShader());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkShaderProgram_SetGeometryShader(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGeometryShader");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShaderProgram *op = static_cast<vtkShaderProgram *>(vp);

  vtkShader *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkShader"))
  {
    if (ap.IsBound())
    {
      op->SetGeometryShader(temp0);
    }
    else
    {
      op->vtkShaderProgram::SetGeometryShader(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkShaderProgram_GetTransformFeedback(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransformFeedback");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShaderProgram *op = static_cast<vtkShaderProgram *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTransformFeedback *tempr = (ap.IsBound() ?
      op->GetTransformFeedback() :
      op->vtkShaderProgram::GetTransformFeedback());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkShaderProgram_SetTransformFeedback(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTransformFeedback");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShaderProgram *op = static_cast<vtkShaderProgram *>(vp);

  vtkTransformFeedback *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTransformFeedback"))
  {
    if (ap.IsBound())
    {
      op->SetTransformFeedback(temp0);
    }
    else
    {
      op->vtkShaderProgram::SetTransformFeedback(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkShaderProgram_GetCompiled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCompiled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShaderProgram *op = static_cast<vtkShaderProgram *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetCompiled() :
      op->vtkShaderProgram::GetCompiled());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkShaderProgram_SetCompiled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCompiled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShaderProgram *op = static_cast<vtkShaderProgram *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCompiled(temp0);
    }
    else
    {
      op->vtkShaderProgram::SetCompiled(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkShaderProgram_CompiledOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CompiledOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShaderProgram *op = static_cast<vtkShaderProgram *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CompiledOn();
    }
    else
    {
      op->vtkShaderProgram::CompiledOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkShaderProgram_CompiledOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CompiledOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShaderProgram *op = static_cast<vtkShaderProgram *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CompiledOff();
    }
    else
    {
      op->vtkShaderProgram::CompiledOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkShaderProgram_GetMD5Hash(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMD5Hash");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShaderProgram *op = static_cast<vtkShaderProgram *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetMD5Hash() :
      op->vtkShaderProgram::GetMD5Hash());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkShaderProgram_SetMD5Hash(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMD5Hash");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShaderProgram *op = static_cast<vtkShaderProgram *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMD5Hash(temp0);
    }
    else
    {
      op->vtkShaderProgram::SetMD5Hash(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkShaderProgram_isBound(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "isBound");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShaderProgram *op = static_cast<vtkShaderProgram *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->isBound() :
      op->vtkShaderProgram::isBound());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkShaderProgram_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShaderProgram *op = static_cast<vtkShaderProgram *>(vp);

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
      op->vtkShaderProgram::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkShaderProgram_GetHandle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHandle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShaderProgram *op = static_cast<vtkShaderProgram *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetHandle() :
      op->vtkShaderProgram::GetHandle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkShaderProgram_GetError(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetError");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShaderProgram *op = static_cast<vtkShaderProgram *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetError() :
      op->vtkShaderProgram::GetError());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkShaderProgram_EnableAttributeArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableAttributeArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShaderProgram *op = static_cast<vtkShaderProgram *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->EnableAttributeArray(temp0) :
      op->vtkShaderProgram::EnableAttributeArray(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkShaderProgram_DisableAttributeArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisableAttributeArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShaderProgram *op = static_cast<vtkShaderProgram *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->DisableAttributeArray(temp0) :
      op->vtkShaderProgram::DisableAttributeArray(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkShaderProgram_UseAttributeArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseAttributeArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShaderProgram *op = static_cast<vtkShaderProgram *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  size_t temp2;
  int temp3;
  int temp4;
  typedef vtkShaderProgram::NormalizeOption temp5_type;
  temp5_type temp5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetEnumValue(temp5, "vtkShaderProgram.NormalizeOption"))
  {
    bool tempr = (ap.IsBound() ?
      op->UseAttributeArray(temp0, temp1, temp2, temp3, temp4, temp5) :
      op->vtkShaderProgram::UseAttributeArray(temp0, temp1, temp2, temp3, temp4, temp5));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkShaderProgram_SetUniformi(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUniformi");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShaderProgram *op = static_cast<vtkShaderProgram *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    bool tempr = (ap.IsBound() ?
      op->SetUniformi(temp0, temp1) :
      op->vtkShaderProgram::SetUniformi(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkShaderProgram_SetUniformf(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUniformf");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShaderProgram *op = static_cast<vtkShaderProgram *>(vp);

  const char *temp0 = nullptr;
  float temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    bool tempr = (ap.IsBound() ?
      op->SetUniformf(temp0, temp1) :
      op->vtkShaderProgram::SetUniformf(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkShaderProgram_SetUniform2i(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUniform2i");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShaderProgram *op = static_cast<vtkShaderProgram *>(vp);

  const char *temp0 = nullptr;
  const size_t size1 = 2;
  int temp1[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    bool tempr = (ap.IsBound() ?
      op->SetUniform2i(temp0, temp1) :
      op->vtkShaderProgram::SetUniform2i(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkShaderProgram_SetUniform2f(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUniform2f");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShaderProgram *op = static_cast<vtkShaderProgram *>(vp);

  const char *temp0 = nullptr;
  const size_t size1 = 2;
  float temp1[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    bool tempr = (ap.IsBound() ?
      op->SetUniform2f(temp0, temp1) :
      op->vtkShaderProgram::SetUniform2f(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkShaderProgram_SetUniform3f(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUniform3f");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShaderProgram *op = static_cast<vtkShaderProgram *>(vp);

  const char *temp0 = nullptr;
  const size_t size1 = 3;
  double temp1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    bool tempr = (ap.IsBound() ?
      op->SetUniform3f(temp0, temp1) :
      op->vtkShaderProgram::SetUniform3f(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkShaderProgram_SetUniform4f(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUniform4f");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShaderProgram *op = static_cast<vtkShaderProgram *>(vp);

  const char *temp0 = nullptr;
  const size_t size1 = 4;
  float temp1[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    bool tempr = (ap.IsBound() ?
      op->SetUniform4f(temp0, temp1) :
      op->vtkShaderProgram::SetUniform4f(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkShaderProgram_SetUniform3uc(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUniform3uc");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShaderProgram *op = static_cast<vtkShaderProgram *>(vp);

  const char *temp0 = nullptr;
  const size_t size1 = 3;
  unsigned char temp1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    bool tempr = (ap.IsBound() ?
      op->SetUniform3uc(temp0, temp1) :
      op->vtkShaderProgram::SetUniform3uc(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkShaderProgram_SetUniform4uc(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUniform4uc");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShaderProgram *op = static_cast<vtkShaderProgram *>(vp);

  const char *temp0 = nullptr;
  const size_t size1 = 4;
  unsigned char temp1[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    bool tempr = (ap.IsBound() ?
      op->SetUniform4uc(temp0, temp1) :
      op->vtkShaderProgram::SetUniform4uc(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkShaderProgram_SetUniformMatrix_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUniformMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShaderProgram *op = static_cast<vtkShaderProgram *>(vp);

  const char *temp0 = nullptr;
  vtkMatrix3x3 *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkMatrix3x3"))
  {
    bool tempr = (ap.IsBound() ?
      op->SetUniformMatrix(temp0, temp1) :
      op->vtkShaderProgram::SetUniformMatrix(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkShaderProgram_SetUniformMatrix_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUniformMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShaderProgram *op = static_cast<vtkShaderProgram *>(vp);

  const char *temp0 = nullptr;
  vtkMatrix4x4 *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkMatrix4x4"))
  {
    bool tempr = (ap.IsBound() ?
      op->SetUniformMatrix(temp0, temp1) :
      op->vtkShaderProgram::SetUniformMatrix(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkShaderProgram_SetUniformMatrix_Methods[] = {
  {nullptr, PyvtkShaderProgram_SetUniformMatrix_s1, METH_VARARGS,
   "@zV *vtkMatrix3x3"},
  {nullptr, PyvtkShaderProgram_SetUniformMatrix_s2, METH_VARARGS,
   "@zV *vtkMatrix4x4"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkShaderProgram_SetUniformMatrix(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkShaderProgram_SetUniformMatrix_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetUniformMatrix");
  return nullptr;
}



static PyObject *
PyvtkShaderProgram_SetUniformMatrix3x3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUniformMatrix3x3");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShaderProgram *op = static_cast<vtkShaderProgram *>(vp);

  const char *temp0 = nullptr;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<float> store1(2*size1);
  float *temp1 = store1.Data();
  float *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    bool tempr = (ap.IsBound() ?
      op->SetUniformMatrix3x3(temp0, temp1) :
      op->vtkShaderProgram::SetUniformMatrix3x3(temp0, temp1));

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkShaderProgram_SetUniformMatrix4x4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUniformMatrix4x4");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShaderProgram *op = static_cast<vtkShaderProgram *>(vp);

  const char *temp0 = nullptr;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<float> store1(2*size1);
  float *temp1 = store1.Data();
  float *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    bool tempr = (ap.IsBound() ?
      op->SetUniformMatrix4x4(temp0, temp1) :
      op->vtkShaderProgram::SetUniformMatrix4x4(temp0, temp1));

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkShaderProgram_SetUniform1iv(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUniform1iv");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShaderProgram *op = static_cast<vtkShaderProgram *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<int> store2(size2);
  int *temp2 = store2.Data();
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2))
  {
    bool tempr = (ap.IsBound() ?
      op->SetUniform1iv(temp0, temp1, temp2) :
      op->vtkShaderProgram::SetUniform1iv(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkShaderProgram_SetUniform1fv(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUniform1fv");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShaderProgram *op = static_cast<vtkShaderProgram *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<float> store2(size2);
  float *temp2 = store2.Data();
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2))
  {
    bool tempr = (ap.IsBound() ?
      op->SetUniform1fv(temp0, temp1, temp2) :
      op->vtkShaderProgram::SetUniform1fv(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkShaderProgram_SetUniformMatrix4x4v(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUniformMatrix4x4v");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShaderProgram *op = static_cast<vtkShaderProgram *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<float> store2(2*size2);
  float *temp2 = store2.Data();
  float *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2))
  {
    ap.Save(temp2, save2, size2);

    bool tempr = (ap.IsBound() ?
      op->SetUniformMatrix4x4v(temp0, temp1, temp2) :
      op->vtkShaderProgram::SetUniformMatrix4x4v(temp0, temp1, temp2));

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
PyvtkShaderProgram_SetNumberOfOutputs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfOutputs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShaderProgram *op = static_cast<vtkShaderProgram *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfOutputs(temp0);
    }
    else
    {
      op->vtkShaderProgram::SetNumberOfOutputs(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkShaderProgram_Substitute_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Substitute");

  std::string temp0;
  std::string temp1;
  std::string temp2;
  bool temp3 = true;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3, 4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
  {
    bool tempr = vtkShaderProgram::Substitute(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(0, temp0);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkShaderProgram_Substitute_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Substitute");

  vtkShader *temp0 = nullptr;
  std::string temp1;
  std::string temp2;
  bool temp3 = true;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3, 4) &&
      ap.GetVTKObject(temp0, "vtkShader") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
  {
    bool tempr = vtkShaderProgram::Substitute(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkShaderProgram_Substitute_Methods[] = {
  {nullptr, PyvtkShaderProgram_Substitute_s1, METH_VARARGS | METH_STATIC,
   "sss|q"},
  {nullptr, PyvtkShaderProgram_Substitute_s2, METH_VARARGS | METH_STATIC,
   "Vss|q *vtkShader"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkShaderProgram_Substitute(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkShaderProgram_Substitute_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 3:
    case 4:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Substitute");
  return nullptr;
}



static PyObject *
PyvtkShaderProgram_IsUniformUsed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsUniformUsed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShaderProgram *op = static_cast<vtkShaderProgram *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsUniformUsed(temp0) :
      op->vtkShaderProgram::IsUniformUsed(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkShaderProgram_IsAttributeUsed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsAttributeUsed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShaderProgram *op = static_cast<vtkShaderProgram *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsAttributeUsed(temp0) :
      op->vtkShaderProgram::IsAttributeUsed(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkShaderProgram_SetFileNamePrefixForDebugging(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileNamePrefixForDebugging");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShaderProgram *op = static_cast<vtkShaderProgram *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFileNamePrefixForDebugging(temp0);
    }
    else
    {
      op->vtkShaderProgram::SetFileNamePrefixForDebugging(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkShaderProgram_GetFileNamePrefixForDebugging(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileNamePrefixForDebugging");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShaderProgram *op = static_cast<vtkShaderProgram *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFileNamePrefixForDebugging() :
      op->vtkShaderProgram::GetFileNamePrefixForDebugging());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkShaderProgram_SetUniformGroupUpdateTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUniformGroupUpdateTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShaderProgram *op = static_cast<vtkShaderProgram *>(vp);

  int temp0;
  unsigned long temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetUniformGroupUpdateTime(temp0, temp1);
    }
    else
    {
      op->vtkShaderProgram::SetUniformGroupUpdateTime(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkShaderProgram_GetUniformGroupUpdateTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUniformGroupUpdateTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShaderProgram *op = static_cast<vtkShaderProgram *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetUniformGroupUpdateTime(temp0) :
      op->vtkShaderProgram::GetUniformGroupUpdateTime(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkShaderProgram_FindUniform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindUniform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShaderProgram *op = static_cast<vtkShaderProgram *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->FindUniform(temp0) :
      op->vtkShaderProgram::FindUniform(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkShaderProgram_FindAttributeArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindAttributeArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShaderProgram *op = static_cast<vtkShaderProgram *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->FindAttributeArray(temp0) :
      op->vtkShaderProgram::FindAttributeArray(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkShaderProgram_Methods[] = {
  {"IsTypeOf", PyvtkShaderProgram_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkShaderProgram_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkShaderProgram_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkShaderProgram\nC++: static vtkShaderProgram *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkShaderProgram_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkShaderProgram\nC++: vtkShaderProgram *NewInstance()\n\n"},
  {"GetVertexShader", PyvtkShaderProgram_GetVertexShader, METH_VARARGS,
   "V.GetVertexShader() -> vtkShader\nC++: virtual vtkShader *GetVertexShader()\n\nGet the vertex shader for this program\n"},
  {"SetVertexShader", PyvtkShaderProgram_SetVertexShader, METH_VARARGS,
   "V.SetVertexShader(vtkShader)\nC++: void SetVertexShader(vtkShader *)\n\nGet the vertex shader for this program\n"},
  {"GetFragmentShader", PyvtkShaderProgram_GetFragmentShader, METH_VARARGS,
   "V.GetFragmentShader() -> vtkShader\nC++: virtual vtkShader *GetFragmentShader()\n\nGet the fragment shader for this program\n"},
  {"SetFragmentShader", PyvtkShaderProgram_SetFragmentShader, METH_VARARGS,
   "V.SetFragmentShader(vtkShader)\nC++: void SetFragmentShader(vtkShader *)\n\nGet the fragment shader for this program\n"},
  {"GetGeometryShader", PyvtkShaderProgram_GetGeometryShader, METH_VARARGS,
   "V.GetGeometryShader() -> vtkShader\nC++: virtual vtkShader *GetGeometryShader()\n\nGet the geometry shader for this program\n"},
  {"SetGeometryShader", PyvtkShaderProgram_SetGeometryShader, METH_VARARGS,
   "V.SetGeometryShader(vtkShader)\nC++: void SetGeometryShader(vtkShader *)\n\nGet the geometry shader for this program\n"},
  {"GetTransformFeedback", PyvtkShaderProgram_GetTransformFeedback, METH_VARARGS,
   "V.GetTransformFeedback() -> vtkTransformFeedback\nC++: virtual vtkTransformFeedback *GetTransformFeedback()\n\nGet/Set a TransformFeedbackCapture object on this shader program.\n"},
  {"SetTransformFeedback", PyvtkShaderProgram_SetTransformFeedback, METH_VARARGS,
   "V.SetTransformFeedback(vtkTransformFeedback)\nC++: void SetTransformFeedback(vtkTransformFeedback *tfc)\n\nGet/Set a TransformFeedbackCapture object on this shader program.\n"},
  {"GetCompiled", PyvtkShaderProgram_GetCompiled, METH_VARARGS,
   "V.GetCompiled() -> bool\nC++: virtual bool GetCompiled()\n\nSet/Get flag for if this program is compiled\n"},
  {"SetCompiled", PyvtkShaderProgram_SetCompiled, METH_VARARGS,
   "V.SetCompiled(bool)\nC++: virtual void SetCompiled(bool _arg)\n\nSet/Get flag for if this program is compiled\n"},
  {"CompiledOn", PyvtkShaderProgram_CompiledOn, METH_VARARGS,
   "V.CompiledOn()\nC++: virtual void CompiledOn()\n\nSet/Get flag for if this program is compiled\n"},
  {"CompiledOff", PyvtkShaderProgram_CompiledOff, METH_VARARGS,
   "V.CompiledOff()\nC++: virtual void CompiledOff()\n\nSet/Get flag for if this program is compiled\n"},
  {"GetMD5Hash", PyvtkShaderProgram_GetMD5Hash, METH_VARARGS,
   "V.GetMD5Hash() -> string\nC++: std::string GetMD5Hash()\n\nSet/Get the md5 hash of this program\n"},
  {"SetMD5Hash", PyvtkShaderProgram_SetMD5Hash, METH_VARARGS,
   "V.SetMD5Hash(string)\nC++: void SetMD5Hash(const std::string &hash)\n\n"},
  {"isBound", PyvtkShaderProgram_isBound, METH_VARARGS,
   "V.isBound() -> bool\nC++: bool isBound()\n\nCheck if the program is currently bound, or not.\n@return True if the program is bound, false otherwise.\n"},
  {"ReleaseGraphicsResources", PyvtkShaderProgram_ReleaseGraphicsResources, METH_VARARGS,
   "V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *win)\n\nrelease any graphics resources this class is using.\n"},
  {"GetHandle", PyvtkShaderProgram_GetHandle, METH_VARARGS,
   "V.GetHandle() -> int\nC++: int GetHandle()\n\nGet the handle of the shader program.\n"},
  {"GetError", PyvtkShaderProgram_GetError, METH_VARARGS,
   "V.GetError() -> string\nC++: std::string GetError()\n\nGet the error message (empty if none) for the shader program.\n"},
  {"EnableAttributeArray", PyvtkShaderProgram_EnableAttributeArray, METH_VARARGS,
   "V.EnableAttributeArray(string) -> bool\nC++: bool EnableAttributeArray(const char *name)\n\nEnable the named attribute array. Return false if the attribute\narray is not contained in the linked shader program.\n"},
  {"DisableAttributeArray", PyvtkShaderProgram_DisableAttributeArray, METH_VARARGS,
   "V.DisableAttributeArray(string) -> bool\nC++: bool DisableAttributeArray(const char *name)\n\nDisable the named attribute array. Return false if the attribute\narray is not contained in the linked shader program.\n"},
  {"UseAttributeArray", PyvtkShaderProgram_UseAttributeArray, METH_VARARGS,
   "V.UseAttributeArray(string, int, int, int, int, NormalizeOption)\n    -> bool\nC++: bool UseAttributeArray(const char *name, int offset,\n    size_t stride, int elementType, int elementTupleSize,\n    NormalizeOption normalize)\n\nUse the named attribute array with the bound BufferObject.\n@param name of the attribute (as seen in the shader program).\n@param offset into the bound BufferObject.\n@param stride The stride of the element access (i.e. the size of\n    each\nelement in the currently bound BufferObject). 0 may be used to\nindicate tightly packed data.\n@param elementType Tag identifying the memory representation of\n    the\nelement.\n@param elementTupleSize The number of elements per vertex (e.g. a\n3D\nposition attribute would be 3).\n@param normalize Indicates the range used by the attribute data.\nSee NormalizeOption for more information.\n@return false if the attribute array does not exist.\n"},
  {"SetUniformi", PyvtkShaderProgram_SetUniformi, METH_VARARGS,
   "V.SetUniformi(string, int) -> bool\nC++: bool SetUniformi(const char *name, int v)\n\nSet the name uniform value to int v.\n"},
  {"SetUniformf", PyvtkShaderProgram_SetUniformf, METH_VARARGS,
   "V.SetUniformf(string, float) -> bool\nC++: bool SetUniformf(const char *name, float v)\n\n"},
  {"SetUniform2i", PyvtkShaderProgram_SetUniform2i, METH_VARARGS,
   "V.SetUniform2i(string, (int, int)) -> bool\nC++: bool SetUniform2i(const char *name, const int v[2])\n\n"},
  {"SetUniform2f", PyvtkShaderProgram_SetUniform2f, METH_VARARGS,
   "V.SetUniform2f(string, (float, float)) -> bool\nC++: bool SetUniform2f(const char *name, const float v[2])\n\n"},
  {"SetUniform3f", PyvtkShaderProgram_SetUniform3f, METH_VARARGS,
   "V.SetUniform3f(string, (float, float, float)) -> bool\nC++: bool SetUniform3f(const char *name, const double v[3])\n\n"},
  {"SetUniform4f", PyvtkShaderProgram_SetUniform4f, METH_VARARGS,
   "V.SetUniform4f(string, (float, float, float, float)) -> bool\nC++: bool SetUniform4f(const char *name, const float v[4])\n\n"},
  {"SetUniform3uc", PyvtkShaderProgram_SetUniform3uc, METH_VARARGS,
   "V.SetUniform3uc(string, (int, int, int)) -> bool\nC++: bool SetUniform3uc(const char *name,\n    const unsigned char v[3])\n\n"},
  {"SetUniform4uc", PyvtkShaderProgram_SetUniform4uc, METH_VARARGS,
   "V.SetUniform4uc(string, (int, int, int, int)) -> bool\nC++: bool SetUniform4uc(const char *name,\n    const unsigned char v[4])\n\n"},
  {"SetUniformMatrix", PyvtkShaderProgram_SetUniformMatrix, METH_VARARGS,
   "V.SetUniformMatrix(string, vtkMatrix3x3) -> bool\nC++: bool SetUniformMatrix(const char *name, vtkMatrix3x3 *v)\nV.SetUniformMatrix(string, vtkMatrix4x4) -> bool\nC++: bool SetUniformMatrix(const char *name, vtkMatrix4x4 *v)\n\n"},
  {"SetUniformMatrix3x3", PyvtkShaderProgram_SetUniformMatrix3x3, METH_VARARGS,
   "V.SetUniformMatrix3x3(string, [float, ...]) -> bool\nC++: bool SetUniformMatrix3x3(const char *name, float *v)\n\n"},
  {"SetUniformMatrix4x4", PyvtkShaderProgram_SetUniformMatrix4x4, METH_VARARGS,
   "V.SetUniformMatrix4x4(string, [float, ...]) -> bool\nC++: bool SetUniformMatrix4x4(const char *name, float *v)\n\n"},
  {"SetUniform1iv", PyvtkShaderProgram_SetUniform1iv, METH_VARARGS,
   "V.SetUniform1iv(string, int, (int, ...)) -> bool\nC++: bool SetUniform1iv(const char *name, const int count,\n    const int *f)\n\nSet the name uniform array to f with count elements\n"},
  {"SetUniform1fv", PyvtkShaderProgram_SetUniform1fv, METH_VARARGS,
   "V.SetUniform1fv(string, int, (float, ...)) -> bool\nC++: bool SetUniform1fv(const char *name, const int count,\n    const float *f)\n\n"},
  {"SetUniformMatrix4x4v", PyvtkShaderProgram_SetUniformMatrix4x4v, METH_VARARGS,
   "V.SetUniformMatrix4x4v(string, int, [float, ...]) -> bool\nC++: bool SetUniformMatrix4x4v(const char *name, const int count,\n    float *v)\n\n"},
  {"SetNumberOfOutputs", PyvtkShaderProgram_SetNumberOfOutputs, METH_VARARGS,
   "V.SetNumberOfOutputs(int)\nC++: virtual void SetNumberOfOutputs(unsigned int _arg)\n\n"},
  {"Substitute", PyvtkShaderProgram_Substitute, METH_VARARGS,
   "V.Substitute(string, string, string, bool) -> bool\nC++: static bool Substitute(std::string &source,\n    const std::string &search, const std::string &replace,\n    bool all=true)\nV.Substitute(vtkShader, string, string, bool) -> bool\nC++: static bool Substitute(vtkShader *shader,\n    const std::string &search, const std::string &replace,\n    bool all=true)\n\nperform in place string substitutions, indicate if a substitution\nwas done this is useful for building up shader strings which\ntypically involve lots of string substitutions.\n\n\\param[in] shader  The source shader object to perform\n    substitutions on\n\\param[in] search  The string to search for\n\\param[in] replace The string replacement\n\\param[in] all     Whether to replace all matches or just the\n    first one\n\\return    A boolean indicating whether the replacement was\n    successful\n"},
  {"IsUniformUsed", PyvtkShaderProgram_IsUniformUsed, METH_VARARGS,
   "V.IsUniformUsed(string) -> bool\nC++: bool IsUniformUsed(const char *)\n\nmethods to inquire as to what uniforms/attributes are used by\nthis shader.  This can save some compute time if the uniforms or\nattributes are expensive to compute\n"},
  {"IsAttributeUsed", PyvtkShaderProgram_IsAttributeUsed, METH_VARARGS,
   "V.IsAttributeUsed(string) -> bool\nC++: bool IsAttributeUsed(const char *name)\n\nReturn true if the compiled and linked shader has an attribute\nmatching @a name.\n"},
  {"SetFileNamePrefixForDebugging", PyvtkShaderProgram_SetFileNamePrefixForDebugging, METH_VARARGS,
   "V.SetFileNamePrefixForDebugging(string)\nC++: virtual void SetFileNamePrefixForDebugging(const char *_arg)\n\nWhen developing shaders, it's often convenient to tweak the\nshader and re-render incrementally. This provides a mechanism to\ndo the same. To debug any shader program, set\n`FileNamePrefixForDebugging` to a file path e.g.\n`/tmp/myshaders`. Subsequently, when `Bind()` is called on the\nshader program, it will check for files named `VS.glsl`,\n`GS.glsl` and `FS.glsl` for vertex shader, geometry shader and\nfragment shader codes respectively. If a file doesn't exist, then\nit dumps out the current code to that file. If the file exists,\nthen the shader is recompiled to use the contents of that file.\nThus, after the files have been dumped in the first render, you\ncan open the files in a text editor and update as needed. On\nfollowing render, the modified contexts from the file will be\nused.\n\nThis is only intended for debugging during development and should\nnot be used in production.\n"},
  {"GetFileNamePrefixForDebugging", PyvtkShaderProgram_GetFileNamePrefixForDebugging, METH_VARARGS,
   "V.GetFileNamePrefixForDebugging() -> string\nC++: virtual char *GetFileNamePrefixForDebugging()\n\nWhen developing shaders, it's often convenient to tweak the\nshader and re-render incrementally. This provides a mechanism to\ndo the same. To debug any shader program, set\n`FileNamePrefixForDebugging` to a file path e.g.\n`/tmp/myshaders`. Subsequently, when `Bind()` is called on the\nshader program, it will check for files named `VS.glsl`,\n`GS.glsl` and `FS.glsl` for vertex shader, geometry shader and\nfragment shader codes respectively. If a file doesn't exist, then\nit dumps out the current code to that file. If the file exists,\nthen the shader is recompiled to use the contents of that file.\nThus, after the files have been dumped in the first render, you\ncan open the files in a text editor and update as needed. On\nfollowing render, the modified contexts from the file will be\nused.\n\nThis is only intended for debugging during development and should\nnot be used in production.\n"},
  {"SetUniformGroupUpdateTime", PyvtkShaderProgram_SetUniformGroupUpdateTime, METH_VARARGS,
   "V.SetUniformGroupUpdateTime(int, int)\nC++: void SetUniformGroupUpdateTime(int, vtkMTimeType tm)\n\nSet/Get times that can be used to track when a set of uniforms\nwas last updated. This can be used to reduce redundent\nSetUniformCalls\n"},
  {"GetUniformGroupUpdateTime", PyvtkShaderProgram_GetUniformGroupUpdateTime, METH_VARARGS,
   "V.GetUniformGroupUpdateTime(int) -> int\nC++: vtkMTimeType GetUniformGroupUpdateTime(int)\n\nSet/Get times that can be used to track when a set of uniforms\nwas last updated. This can be used to reduce redundent\nSetUniformCalls\n"},
  {"FindUniform", PyvtkShaderProgram_FindUniform, METH_VARARGS,
   "V.FindUniform(string) -> int\nC++: int FindUniform(const char *name)\n\n"},
  {"FindAttributeArray", PyvtkShaderProgram_FindAttributeArray, METH_VARARGS,
   "V.FindAttributeArray(string) -> int\nC++: int FindAttributeArray(const char *name)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkShaderProgram_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingOpenGL2Python.vtkShaderProgram", // tp_name
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
  PyvtkShaderProgram_Doc, // tp_doc
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

static vtkObjectBase *PyvtkShaderProgram_StaticNew()
{
  return vtkShaderProgram::New();
}

PyObject *PyvtkShaderProgram_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkShaderProgram_Type, PyvtkShaderProgram_Methods,
    "vtkShaderProgram",
 &PyvtkShaderProgram_StaticNew);

  PyTypeObject *pytype = &PyvtkShaderProgram_Type;

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

  PyType_Ready(&PyvtkShaderProgram_NormalizeOption_Type);
  PyvtkShaderProgram_NormalizeOption_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkShaderProgram_NormalizeOption_Type);

  o = (PyObject *)&PyvtkShaderProgram_NormalizeOption_Type;
  if (PyDict_SetItemString(d, "NormalizeOption", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkShaderProgram_UniformGroups_Type);
  PyvtkShaderProgram_UniformGroups_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkShaderProgram_UniformGroups_Type);

  o = (PyObject *)&PyvtkShaderProgram_UniformGroups_Type;
  if (PyDict_SetItemString(d, "UniformGroups", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 2; c++)
  {
    typedef vtkShaderProgram::NormalizeOption cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[2] = {
        { "Normalize", vtkShaderProgram::Normalize },
        { "NoNormalize", vtkShaderProgram::NoNormalize },
      };

    o = PyvtkShaderProgram_NormalizeOption_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 3; c++)
  {
    typedef vtkShaderProgram::UniformGroups cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[3] = {
        { "CameraGroup", vtkShaderProgram::CameraGroup },
        { "LightingGroup", vtkShaderProgram::LightingGroup },
        { "UserGroup", vtkShaderProgram::UserGroup },
      };

    o = PyvtkShaderProgram_UniformGroups_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkShaderProgram(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkShaderProgram_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkShaderProgram", o) != 0)
  {
    Py_DECREF(o);
  }

}

