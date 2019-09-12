// python wrapper for vtkOpenGLPolyDataMapper
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
#include "vtkCellArray.h"
#include "vtkOpenGLPolyDataMapper.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkOpenGLPolyDataMapper(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkOpenGLPolyDataMapper_ClassNew(); }

#ifndef DECLARED_PyvtkPolyDataMapper_ClassNew
extern "C" { PyObject *PyvtkPolyDataMapper_ClassNew(); }
#define DECLARED_PyvtkPolyDataMapper_ClassNew
#endif

static const char *PyvtkOpenGLPolyDataMapper_Doc =
  "vtkOpenGLPolyDataMapper - PolyDataMapper using OpenGL to render.\n\n"
  "Superclass: vtkPolyDataMapper\n\n"
  "PolyDataMapper that uses a OpenGL to do the actual rendering.\n\n";

static PyTypeObject PyvtkOpenGLPolyDataMapper_PrimitiveTypes_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingOpenGL2Python.vtkOpenGLPolyDataMapper.PrimitiveTypes", // tp_name
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

PyObject *PyvtkOpenGLPolyDataMapper_PrimitiveTypes_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkOpenGLPolyDataMapper_PrimitiveTypes_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkOpenGLPolyDataMapper_PrimitiveTypes_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkOpenGLPolyDataMapper_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkOpenGLPolyDataMapper::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLPolyDataMapper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLPolyDataMapper *op = static_cast<vtkOpenGLPolyDataMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkOpenGLPolyDataMapper::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLPolyDataMapper_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkOpenGLPolyDataMapper *tempr = vtkOpenGLPolyDataMapper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLPolyDataMapper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLPolyDataMapper *op = static_cast<vtkOpenGLPolyDataMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkOpenGLPolyDataMapper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkOpenGLPolyDataMapper::NewInstance());

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
PyvtkOpenGLPolyDataMapper_RenderPiece(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderPiece");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLPolyDataMapper *op = static_cast<vtkOpenGLPolyDataMapper *>(vp);

  vtkRenderer *temp0 = nullptr;
  vtkActor *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkActor"))
  {
    if (ap.IsBound())
    {
      op->RenderPiece(temp0, temp1);
    }
    else
    {
      op->vtkOpenGLPolyDataMapper::RenderPiece(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLPolyDataMapper_RenderPieceStart(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderPieceStart");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLPolyDataMapper *op = static_cast<vtkOpenGLPolyDataMapper *>(vp);

  vtkRenderer *temp0 = nullptr;
  vtkActor *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkActor"))
  {
    if (ap.IsBound())
    {
      op->RenderPieceStart(temp0, temp1);
    }
    else
    {
      op->vtkOpenGLPolyDataMapper::RenderPieceStart(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLPolyDataMapper_RenderPieceDraw(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderPieceDraw");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLPolyDataMapper *op = static_cast<vtkOpenGLPolyDataMapper *>(vp);

  vtkRenderer *temp0 = nullptr;
  vtkActor *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkActor"))
  {
    if (ap.IsBound())
    {
      op->RenderPieceDraw(temp0, temp1);
    }
    else
    {
      op->vtkOpenGLPolyDataMapper::RenderPieceDraw(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLPolyDataMapper_RenderPieceFinish(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderPieceFinish");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLPolyDataMapper *op = static_cast<vtkOpenGLPolyDataMapper *>(vp);

  vtkRenderer *temp0 = nullptr;
  vtkActor *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkActor"))
  {
    if (ap.IsBound())
    {
      op->RenderPieceFinish(temp0, temp1);
    }
    else
    {
      op->vtkOpenGLPolyDataMapper::RenderPieceFinish(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLPolyDataMapper_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLPolyDataMapper *op = static_cast<vtkOpenGLPolyDataMapper *>(vp);

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
      op->vtkOpenGLPolyDataMapper::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLPolyDataMapper_GetPopulateSelectionSettings(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPopulateSelectionSettings");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLPolyDataMapper *op = static_cast<vtkOpenGLPolyDataMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPopulateSelectionSettings() :
      op->vtkOpenGLPolyDataMapper::GetPopulateSelectionSettings());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLPolyDataMapper_SetPopulateSelectionSettings(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPopulateSelectionSettings");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLPolyDataMapper *op = static_cast<vtkOpenGLPolyDataMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPopulateSelectionSettings(temp0);
    }
    else
    {
      op->vtkOpenGLPolyDataMapper::SetPopulateSelectionSettings(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLPolyDataMapper_GetSupportsSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSupportsSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLPolyDataMapper *op = static_cast<vtkOpenGLPolyDataMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetSupportsSelection() :
      op->vtkOpenGLPolyDataMapper::GetSupportsSelection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLPolyDataMapper_GetIsOpaque(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIsOpaque");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLPolyDataMapper *op = static_cast<vtkOpenGLPolyDataMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetIsOpaque() :
      op->vtkOpenGLPolyDataMapper::GetIsOpaque());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLPolyDataMapper_SetPointIdArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointIdArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLPolyDataMapper *op = static_cast<vtkOpenGLPolyDataMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPointIdArrayName(temp0);
    }
    else
    {
      op->vtkOpenGLPolyDataMapper::SetPointIdArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLPolyDataMapper_GetPointIdArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointIdArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLPolyDataMapper *op = static_cast<vtkOpenGLPolyDataMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetPointIdArrayName() :
      op->vtkOpenGLPolyDataMapper::GetPointIdArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLPolyDataMapper_SetCellIdArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellIdArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLPolyDataMapper *op = static_cast<vtkOpenGLPolyDataMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCellIdArrayName(temp0);
    }
    else
    {
      op->vtkOpenGLPolyDataMapper::SetCellIdArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLPolyDataMapper_GetCellIdArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellIdArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLPolyDataMapper *op = static_cast<vtkOpenGLPolyDataMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetCellIdArrayName() :
      op->vtkOpenGLPolyDataMapper::GetCellIdArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLPolyDataMapper_SetProcessIdArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProcessIdArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLPolyDataMapper *op = static_cast<vtkOpenGLPolyDataMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetProcessIdArrayName(temp0);
    }
    else
    {
      op->vtkOpenGLPolyDataMapper::SetProcessIdArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLPolyDataMapper_GetProcessIdArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProcessIdArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLPolyDataMapper *op = static_cast<vtkOpenGLPolyDataMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetProcessIdArrayName() :
      op->vtkOpenGLPolyDataMapper::GetProcessIdArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLPolyDataMapper_SetCompositeIdArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCompositeIdArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLPolyDataMapper *op = static_cast<vtkOpenGLPolyDataMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCompositeIdArrayName(temp0);
    }
    else
    {
      op->vtkOpenGLPolyDataMapper::SetCompositeIdArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLPolyDataMapper_GetCompositeIdArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCompositeIdArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLPolyDataMapper *op = static_cast<vtkOpenGLPolyDataMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetCompositeIdArrayName() :
      op->vtkOpenGLPolyDataMapper::GetCompositeIdArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLPolyDataMapper_AddShaderReplacement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddShaderReplacement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLPolyDataMapper *op = static_cast<vtkOpenGLPolyDataMapper *>(vp);

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
      op->vtkOpenGLPolyDataMapper::AddShaderReplacement(temp0, temp1, temp2, temp3, temp4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLPolyDataMapper_ClearShaderReplacement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearShaderReplacement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLPolyDataMapper *op = static_cast<vtkOpenGLPolyDataMapper *>(vp);

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
      op->vtkOpenGLPolyDataMapper::ClearShaderReplacement(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLPolyDataMapper_ClearAllShaderReplacements_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearAllShaderReplacements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLPolyDataMapper *op = static_cast<vtkOpenGLPolyDataMapper *>(vp);

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
      op->vtkOpenGLPolyDataMapper::ClearAllShaderReplacements(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkOpenGLPolyDataMapper_ClearAllShaderReplacements_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearAllShaderReplacements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLPolyDataMapper *op = static_cast<vtkOpenGLPolyDataMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearAllShaderReplacements();
    }
    else
    {
      op->vtkOpenGLPolyDataMapper::ClearAllShaderReplacements();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkOpenGLPolyDataMapper_ClearAllShaderReplacements(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkOpenGLPolyDataMapper_ClearAllShaderReplacements_s1(self, args);
    case 0:
      return PyvtkOpenGLPolyDataMapper_ClearAllShaderReplacements_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "ClearAllShaderReplacements");
  return nullptr;
}



static PyObject *
PyvtkOpenGLPolyDataMapper_SetVertexShaderCode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVertexShaderCode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLPolyDataMapper *op = static_cast<vtkOpenGLPolyDataMapper *>(vp);

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
      op->vtkOpenGLPolyDataMapper::SetVertexShaderCode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLPolyDataMapper_GetVertexShaderCode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVertexShaderCode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLPolyDataMapper *op = static_cast<vtkOpenGLPolyDataMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetVertexShaderCode() :
      op->vtkOpenGLPolyDataMapper::GetVertexShaderCode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLPolyDataMapper_SetFragmentShaderCode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFragmentShaderCode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLPolyDataMapper *op = static_cast<vtkOpenGLPolyDataMapper *>(vp);

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
      op->vtkOpenGLPolyDataMapper::SetFragmentShaderCode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLPolyDataMapper_GetFragmentShaderCode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFragmentShaderCode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLPolyDataMapper *op = static_cast<vtkOpenGLPolyDataMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFragmentShaderCode() :
      op->vtkOpenGLPolyDataMapper::GetFragmentShaderCode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLPolyDataMapper_SetGeometryShaderCode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGeometryShaderCode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLPolyDataMapper *op = static_cast<vtkOpenGLPolyDataMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGeometryShaderCode(temp0);
    }
    else
    {
      op->vtkOpenGLPolyDataMapper::SetGeometryShaderCode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLPolyDataMapper_GetGeometryShaderCode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGeometryShaderCode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLPolyDataMapper *op = static_cast<vtkOpenGLPolyDataMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetGeometryShaderCode() :
      op->vtkOpenGLPolyDataMapper::GetGeometryShaderCode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLPolyDataMapper_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLPolyDataMapper *op = static_cast<vtkOpenGLPolyDataMapper *>(vp);

  vtkAbstractMapper *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractMapper"))
  {
    if (ap.IsBound())
    {
      op->ShallowCopy(temp0);
    }
    else
    {
      op->vtkOpenGLPolyDataMapper::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLPolyDataMapper_ForceHaveAppleBugOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ForceHaveAppleBugOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLPolyDataMapper *op = static_cast<vtkOpenGLPolyDataMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ForceHaveAppleBugOff();
    }
    else
    {
      op->vtkOpenGLPolyDataMapper::ForceHaveAppleBugOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLPolyDataMapper_ForceHaveAppleBugOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ForceHaveAppleBugOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLPolyDataMapper *op = static_cast<vtkOpenGLPolyDataMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ForceHaveAppleBugOn();
    }
    else
    {
      op->vtkOpenGLPolyDataMapper::ForceHaveAppleBugOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLPolyDataMapper_GetHaveAppleBug(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHaveAppleBug");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLPolyDataMapper *op = static_cast<vtkOpenGLPolyDataMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetHaveAppleBug() :
      op->vtkOpenGLPolyDataMapper::GetHaveAppleBug());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLPolyDataMapper_GetVBOs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVBOs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLPolyDataMapper *op = static_cast<vtkOpenGLPolyDataMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkOpenGLVertexBufferObjectGroup *tempr = (ap.IsBound() ?
      op->GetVBOs() :
      op->vtkOpenGLPolyDataMapper::GetVBOs());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLPolyDataMapper_SetVBOShiftScaleMethod(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVBOShiftScaleMethod");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLPolyDataMapper *op = static_cast<vtkOpenGLPolyDataMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVBOShiftScaleMethod(temp0);
    }
    else
    {
      op->vtkOpenGLPolyDataMapper::SetVBOShiftScaleMethod(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLPolyDataMapper_MapDataArrayToVertexAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MapDataArrayToVertexAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLPolyDataMapper *op = static_cast<vtkOpenGLPolyDataMapper *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  int temp2;
  int temp3 = -1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3, 4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
  {
    if (ap.IsBound())
    {
      op->MapDataArrayToVertexAttribute(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkOpenGLPolyDataMapper::MapDataArrayToVertexAttribute(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLPolyDataMapper_MapDataArrayToMultiTextureAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MapDataArrayToMultiTextureAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLPolyDataMapper *op = static_cast<vtkOpenGLPolyDataMapper *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  int temp2;
  int temp3 = -1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3, 4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
  {
    if (ap.IsBound())
    {
      op->MapDataArrayToMultiTextureAttribute(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkOpenGLPolyDataMapper::MapDataArrayToMultiTextureAttribute(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLPolyDataMapper_RemoveVertexAttributeMapping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveVertexAttributeMapping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLPolyDataMapper *op = static_cast<vtkOpenGLPolyDataMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RemoveVertexAttributeMapping(temp0);
    }
    else
    {
      op->vtkOpenGLPolyDataMapper::RemoveVertexAttributeMapping(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLPolyDataMapper_RemoveAllVertexAttributeMappings(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllVertexAttributeMappings");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLPolyDataMapper *op = static_cast<vtkOpenGLPolyDataMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllVertexAttributeMappings();
    }
    else
    {
      op->vtkOpenGLPolyDataMapper::RemoveAllVertexAttributeMappings();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkOpenGLPolyDataMapper_Methods[] = {
  {"IsTypeOf", PyvtkOpenGLPolyDataMapper_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkOpenGLPolyDataMapper_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkOpenGLPolyDataMapper_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkOpenGLPolyDataMapper\nC++: static vtkOpenGLPolyDataMapper *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkOpenGLPolyDataMapper_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkOpenGLPolyDataMapper\nC++: vtkOpenGLPolyDataMapper *NewInstance()\n\n"},
  {"RenderPiece", PyvtkOpenGLPolyDataMapper_RenderPiece, METH_VARARGS,
   "V.RenderPiece(vtkRenderer, vtkActor)\nC++: void RenderPiece(vtkRenderer *ren, vtkActor *act) override;\n\nImplemented by sub classes. Actual rendering is done here.\n"},
  {"RenderPieceStart", PyvtkOpenGLPolyDataMapper_RenderPieceStart, METH_VARARGS,
   "V.RenderPieceStart(vtkRenderer, vtkActor)\nC++: virtual void RenderPieceStart(vtkRenderer *ren,\n    vtkActor *act)\n\nImplemented by sub classes. Actual rendering is done here.\n"},
  {"RenderPieceDraw", PyvtkOpenGLPolyDataMapper_RenderPieceDraw, METH_VARARGS,
   "V.RenderPieceDraw(vtkRenderer, vtkActor)\nC++: virtual void RenderPieceDraw(vtkRenderer *ren, vtkActor *act)\n\nImplemented by sub classes. Actual rendering is done here.\n"},
  {"RenderPieceFinish", PyvtkOpenGLPolyDataMapper_RenderPieceFinish, METH_VARARGS,
   "V.RenderPieceFinish(vtkRenderer, vtkActor)\nC++: virtual void RenderPieceFinish(vtkRenderer *ren,\n    vtkActor *act)\n\nImplemented by sub classes. Actual rendering is done here.\n"},
  {"ReleaseGraphicsResources", PyvtkOpenGLPolyDataMapper_ReleaseGraphicsResources, METH_VARARGS,
   "V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nRelease any graphics resources that are being consumed by this\nmapper. The parameter window could be used to determine which\ngraphic resources to release.\n"},
  {"GetPopulateSelectionSettings", PyvtkOpenGLPolyDataMapper_GetPopulateSelectionSettings, METH_VARARGS,
   "V.GetPopulateSelectionSettings() -> int\nC++: virtual int GetPopulateSelectionSettings()\n\n"},
  {"SetPopulateSelectionSettings", PyvtkOpenGLPolyDataMapper_SetPopulateSelectionSettings, METH_VARARGS,
   "V.SetPopulateSelectionSettings(int)\nC++: void SetPopulateSelectionSettings(int v)\n\n"},
  {"GetSupportsSelection", PyvtkOpenGLPolyDataMapper_GetSupportsSelection, METH_VARARGS,
   "V.GetSupportsSelection() -> bool\nC++: bool GetSupportsSelection() override;\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THIS METHOD OUTSIDE OF THE RENDERING PROCESS Used by\nvtkHardwareSelector to determine if the prop supports hardware\nselection.\n"},
  {"GetIsOpaque", PyvtkOpenGLPolyDataMapper_GetIsOpaque, METH_VARARGS,
   "V.GetIsOpaque() -> bool\nC++: bool GetIsOpaque() override;\n\nReturns if the mapper does not expect to have translucent\ngeometry. This may happen when using ScalarMode is set to not map\nscalars i.e. render the scalar array directly as colors and the\nscalar array has opacity i.e. alpha component. Note that even if\nthis method returns true, an actor may treat the geometry as\ntranslucent since a constant translucency is set on the property,\nfor example. Overridden to use the actual data and ScalarMode to\ndetermine if we have opaque geometry.\n"},
  {"SetPointIdArrayName", PyvtkOpenGLPolyDataMapper_SetPointIdArrayName, METH_VARARGS,
   "V.SetPointIdArrayName(string)\nC++: virtual void SetPointIdArrayName(const char *_arg)\n\nBy default, this class uses the dataset's point and cell ids\nduring rendering. However, one can override those by specifying\ncell and point data arrays to use instead. Currently, only\nvtkIdType array is supported. Set to NULL string (default) to use\nthe point ids instead.\n"},
  {"GetPointIdArrayName", PyvtkOpenGLPolyDataMapper_GetPointIdArrayName, METH_VARARGS,
   "V.GetPointIdArrayName() -> string\nC++: virtual char *GetPointIdArrayName()\n\nBy default, this class uses the dataset's point and cell ids\nduring rendering. However, one can override those by specifying\ncell and point data arrays to use instead. Currently, only\nvtkIdType array is supported. Set to NULL string (default) to use\nthe point ids instead.\n"},
  {"SetCellIdArrayName", PyvtkOpenGLPolyDataMapper_SetCellIdArrayName, METH_VARARGS,
   "V.SetCellIdArrayName(string)\nC++: virtual void SetCellIdArrayName(const char *_arg)\n\nBy default, this class uses the dataset's point and cell ids\nduring rendering. However, one can override those by specifying\ncell and point data arrays to use instead. Currently, only\nvtkIdType array is supported. Set to NULL string (default) to use\nthe point ids instead.\n"},
  {"GetCellIdArrayName", PyvtkOpenGLPolyDataMapper_GetCellIdArrayName, METH_VARARGS,
   "V.GetCellIdArrayName() -> string\nC++: virtual char *GetCellIdArrayName()\n\nBy default, this class uses the dataset's point and cell ids\nduring rendering. However, one can override those by specifying\ncell and point data arrays to use instead. Currently, only\nvtkIdType array is supported. Set to NULL string (default) to use\nthe point ids instead.\n"},
  {"SetProcessIdArrayName", PyvtkOpenGLPolyDataMapper_SetProcessIdArrayName, METH_VARARGS,
   "V.SetProcessIdArrayName(string)\nC++: virtual void SetProcessIdArrayName(const char *_arg)\n\nIf this class should override the process id using a data-array,\nset this variable to the name of the array to use. It must be a\npoint-array.\n"},
  {"GetProcessIdArrayName", PyvtkOpenGLPolyDataMapper_GetProcessIdArrayName, METH_VARARGS,
   "V.GetProcessIdArrayName() -> string\nC++: virtual char *GetProcessIdArrayName()\n\nIf this class should override the process id using a data-array,\nset this variable to the name of the array to use. It must be a\npoint-array.\n"},
  {"SetCompositeIdArrayName", PyvtkOpenGLPolyDataMapper_SetCompositeIdArrayName, METH_VARARGS,
   "V.SetCompositeIdArrayName(string)\nC++: virtual void SetCompositeIdArrayName(const char *_arg)\n\nGenerally, this class can render the composite id when iterating\nover composite datasets. However in some cases (as in AMR), the\nrendered structure may not correspond to the input data, in which\ncase we need to provide a cell array that can be used to render\nin the composite id in selection passes. Set to NULL (default) to\nnot override the composite id color set by vtkCompositePainter if\nany. The array *MUST* be a cell array and of type\nvtkUnsignedIntArray.\n"},
  {"GetCompositeIdArrayName", PyvtkOpenGLPolyDataMapper_GetCompositeIdArrayName, METH_VARARGS,
   "V.GetCompositeIdArrayName() -> string\nC++: virtual char *GetCompositeIdArrayName()\n\nGenerally, this class can render the composite id when iterating\nover composite datasets. However in some cases (as in AMR), the\nrendered structure may not correspond to the input data, in which\ncase we need to provide a cell array that can be used to render\nin the composite id in selection passes. Set to NULL (default) to\nnot override the composite id color set by vtkCompositePainter if\nany. The array *MUST* be a cell array and of type\nvtkUnsignedIntArray.\n"},
  {"AddShaderReplacement", PyvtkOpenGLPolyDataMapper_AddShaderReplacement, METH_VARARGS,
   "V.AddShaderReplacement(vtkShader.Type, string, bool, string, bool)\nC++: void AddShaderReplacement(vtkShader::Type shaderType,\n    const std::string &originalValue, bool replaceFirst,\n    const std::string &replacementValue, bool replaceAll)\n\nThis function enables you to apply your own substitutions to the\nshader creation process. The shader code in this class is created\nby applying a bunch of string replacements to a shader template.\nUsing this function you can apply your own string replacements to\nadd features you desire.\n"},
  {"ClearShaderReplacement", PyvtkOpenGLPolyDataMapper_ClearShaderReplacement, METH_VARARGS,
   "V.ClearShaderReplacement(vtkShader.Type, string, bool)\nC++: void ClearShaderReplacement(vtkShader::Type shaderType,\n    const std::string &originalValue, bool replaceFirst)\n\nThis function enables you to apply your own substitutions to the\nshader creation process. The shader code in this class is created\nby applying a bunch of string replacements to a shader template.\nUsing this function you can apply your own string replacements to\nadd features you desire.\n"},
  {"ClearAllShaderReplacements", PyvtkOpenGLPolyDataMapper_ClearAllShaderReplacements, METH_VARARGS,
   "V.ClearAllShaderReplacements(vtkShader.Type)\nC++: void ClearAllShaderReplacements(vtkShader::Type shaderType)\nV.ClearAllShaderReplacements()\nC++: void ClearAllShaderReplacements()\n\nThis function enables you to apply your own substitutions to the\nshader creation process. The shader code in this class is created\nby applying a bunch of string replacements to a shader template.\nUsing this function you can apply your own string replacements to\nadd features you desire.\n"},
  {"SetVertexShaderCode", PyvtkOpenGLPolyDataMapper_SetVertexShaderCode, METH_VARARGS,
   "V.SetVertexShaderCode(string)\nC++: virtual void SetVertexShaderCode(const char *_arg)\n\nAllow the program to set the shader codes used directly instead\nof using the built in templates. Be aware, if set, this template\nwill be used for all cases, primitive types, picking etc.\n"},
  {"GetVertexShaderCode", PyvtkOpenGLPolyDataMapper_GetVertexShaderCode, METH_VARARGS,
   "V.GetVertexShaderCode() -> string\nC++: virtual char *GetVertexShaderCode()\n\nAllow the program to set the shader codes used directly instead\nof using the built in templates. Be aware, if set, this template\nwill be used for all cases, primitive types, picking etc.\n"},
  {"SetFragmentShaderCode", PyvtkOpenGLPolyDataMapper_SetFragmentShaderCode, METH_VARARGS,
   "V.SetFragmentShaderCode(string)\nC++: virtual void SetFragmentShaderCode(const char *_arg)\n\nAllow the program to set the shader codes used directly instead\nof using the built in templates. Be aware, if set, this template\nwill be used for all cases, primitive types, picking etc.\n"},
  {"GetFragmentShaderCode", PyvtkOpenGLPolyDataMapper_GetFragmentShaderCode, METH_VARARGS,
   "V.GetFragmentShaderCode() -> string\nC++: virtual char *GetFragmentShaderCode()\n\nAllow the program to set the shader codes used directly instead\nof using the built in templates. Be aware, if set, this template\nwill be used for all cases, primitive types, picking etc.\n"},
  {"SetGeometryShaderCode", PyvtkOpenGLPolyDataMapper_SetGeometryShaderCode, METH_VARARGS,
   "V.SetGeometryShaderCode(string)\nC++: virtual void SetGeometryShaderCode(const char *_arg)\n\nAllow the program to set the shader codes used directly instead\nof using the built in templates. Be aware, if set, this template\nwill be used for all cases, primitive types, picking etc.\n"},
  {"GetGeometryShaderCode", PyvtkOpenGLPolyDataMapper_GetGeometryShaderCode, METH_VARARGS,
   "V.GetGeometryShaderCode() -> string\nC++: virtual char *GetGeometryShaderCode()\n\nAllow the program to set the shader codes used directly instead\nof using the built in templates. Be aware, if set, this template\nwill be used for all cases, primitive types, picking etc.\n"},
  {"ShallowCopy", PyvtkOpenGLPolyDataMapper_ShallowCopy, METH_VARARGS,
   "V.ShallowCopy(vtkAbstractMapper)\nC++: void ShallowCopy(vtkAbstractMapper *m)\n\nMake a shallow copy of this mapper.\n"},
  {"ForceHaveAppleBugOff", PyvtkOpenGLPolyDataMapper_ForceHaveAppleBugOff, METH_VARARGS,
   "V.ForceHaveAppleBugOff()\nC++: void ForceHaveAppleBugOff()\n\nOverride the normal test for the apple bug\n"},
  {"ForceHaveAppleBugOn", PyvtkOpenGLPolyDataMapper_ForceHaveAppleBugOn, METH_VARARGS,
   "V.ForceHaveAppleBugOn()\nC++: void ForceHaveAppleBugOn()\n\nOverride the normal test for the apple bug\n"},
  {"GetHaveAppleBug", PyvtkOpenGLPolyDataMapper_GetHaveAppleBug, METH_VARARGS,
   "V.GetHaveAppleBug() -> bool\nC++: bool GetHaveAppleBug()\n\nGet the value of HaveAppleBug\n"},
  {"GetVBOs", PyvtkOpenGLPolyDataMapper_GetVBOs, METH_VARARGS,
   "V.GetVBOs() -> vtkOpenGLVertexBufferObjectGroup\nC++: virtual vtkOpenGLVertexBufferObjectGroup *GetVBOs()\n\nReturn the mapper's vertex buffer objects.\n"},
  {"SetVBOShiftScaleMethod", PyvtkOpenGLPolyDataMapper_SetVBOShiftScaleMethod, METH_VARARGS,
   "V.SetVBOShiftScaleMethod(int)\nC++: void SetVBOShiftScaleMethod(int m)\n\nA convenience method for enabling/disabling\nthe VBO's shift+scale transform.\n"},
  {"MapDataArrayToVertexAttribute", PyvtkOpenGLPolyDataMapper_MapDataArrayToVertexAttribute, METH_VARARGS,
   "V.MapDataArrayToVertexAttribute(string, string, int, int)\nC++: void MapDataArrayToVertexAttribute(\n    const char *vertexAttributeName, const char *dataArrayName,\n    int fieldAssociation, int componentno=-1) override;\n\nSelect a data array from the point/cell data and map it to a\ngeneric vertex attribute. vertexAttributeName is the name of the\nvertex attribute. dataArrayName is the name of the data array.\nfieldAssociation indicates when the data array is a point data\narray or cell data array (vtkDataObject::FIELD_ASSOCIATION_POINTS\nor (vtkDataObject::FIELD_ASSOCIATION_CELLS). componentno\nindicates which component from the data array must be passed as\nthe attribute. If -1, then all components are passed.\n"},
  {"MapDataArrayToMultiTextureAttribute", PyvtkOpenGLPolyDataMapper_MapDataArrayToMultiTextureAttribute, METH_VARARGS,
   "V.MapDataArrayToMultiTextureAttribute(string, string, int, int)\nC++: void MapDataArrayToMultiTextureAttribute(const char *tname,\n    const char *dataArrayName, int fieldAssociation,\n    int componentno=-1) override;\n\n"},
  {"RemoveVertexAttributeMapping", PyvtkOpenGLPolyDataMapper_RemoveVertexAttributeMapping, METH_VARARGS,
   "V.RemoveVertexAttributeMapping(string)\nC++: void RemoveVertexAttributeMapping(\n    const char *vertexAttributeName) override;\n\nRemove a vertex attribute mapping.\n"},
  {"RemoveAllVertexAttributeMappings", PyvtkOpenGLPolyDataMapper_RemoveAllVertexAttributeMappings, METH_VARARGS,
   "V.RemoveAllVertexAttributeMappings()\nC++: void RemoveAllVertexAttributeMappings() override;\n\nRemove all vertex attributes.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkOpenGLPolyDataMapper_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingOpenGL2Python.vtkOpenGLPolyDataMapper", // tp_name
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
  PyvtkOpenGLPolyDataMapper_Doc, // tp_doc
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

static vtkObjectBase *PyvtkOpenGLPolyDataMapper_StaticNew()
{
  return vtkOpenGLPolyDataMapper::New();
}

PyObject *PyvtkOpenGLPolyDataMapper_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkOpenGLPolyDataMapper_Type, PyvtkOpenGLPolyDataMapper_Methods,
    "vtkOpenGLPolyDataMapper",
 &PyvtkOpenGLPolyDataMapper_StaticNew);

  PyTypeObject *pytype = &PyvtkOpenGLPolyDataMapper_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPolyDataMapper_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkOpenGLPolyDataMapper_PrimitiveTypes_Type);
  PyvtkOpenGLPolyDataMapper_PrimitiveTypes_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkOpenGLPolyDataMapper_PrimitiveTypes_Type);

  o = (PyObject *)&PyvtkOpenGLPolyDataMapper_PrimitiveTypes_Type;
  if (PyDict_SetItemString(d, "PrimitiveTypes", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 9; c++)
  {
    typedef vtkOpenGLPolyDataMapper::PrimitiveTypes cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[9] = {
        { "PrimitiveStart", vtkOpenGLPolyDataMapper::PrimitiveStart },
        { "PrimitivePoints", vtkOpenGLPolyDataMapper::PrimitivePoints },
        { "PrimitiveLines", vtkOpenGLPolyDataMapper::PrimitiveLines },
        { "PrimitiveTris", vtkOpenGLPolyDataMapper::PrimitiveTris },
        { "PrimitiveTriStrips", vtkOpenGLPolyDataMapper::PrimitiveTriStrips },
        { "PrimitiveTrisEdges", vtkOpenGLPolyDataMapper::PrimitiveTrisEdges },
        { "PrimitiveTriStripsEdges", vtkOpenGLPolyDataMapper::PrimitiveTriStripsEdges },
        { "PrimitiveVertices", vtkOpenGLPolyDataMapper::PrimitiveVertices },
        { "PrimitiveEnd", vtkOpenGLPolyDataMapper::PrimitiveEnd },
      };

    o = PyvtkOpenGLPolyDataMapper_PrimitiveTypes_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkOpenGLPolyDataMapper(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkOpenGLPolyDataMapper_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkOpenGLPolyDataMapper", o) != 0)
  {
    Py_DECREF(o);
  }

}

