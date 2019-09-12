// python wrapper for vtkOpenGLState
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkOpenGLState.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkOpenGLState(PyObject *); }

static const char *PyvtkOpenGLState_Doc =
  "vtkOpenGLState - OpenGL state storage\n\n"
  "vtkOpenGLState is a class designed to keep track of the state of an\n"
  "OpenGL context. Applications using VTK have so much ontrol over the\n"
  "rendering process that is can be difficult in VTK code to know if the\n"
  "OpenGL state is correct for your code. The two traditional solutions\n"
  "have been to set everything yourself and to save and restore OpenGL\n"
  "state that you change. The former makes your code work, the latter\n"
  "hels prevent your code from breaking something else. The problem is\n"
  "that the former results in tons of redundent OpenGL calls and the\n"
  "later is done by querying the OpenGL state which can cause a pipeline\n"
  "sync/stall which is very slow.\n\n"
  "To address these issues this class stores OpenGL state for commonly\n"
  "used functions. Requests made to change state to the current state\n"
  "become no-ops. Queries of state can be done by querying the state\n"
  "stored in this class without impacting the OpenGL driver.\n\n"
  "To fascilitate saving state and restoring it this class contains a\n"
  "number of nested classes named Scopedthat store the state of that\n"
  "glFunction and when they go out of scope they restore it. This is\n"
  "useful when you want to change the OpenGL state and then\n"
  "automatically restore it when done. They can be used as follows\n\n"
  "{\n"
  "  vtkOpenGLState *ostate = renWin->GetState();\n"
  "  vtkOpenGLState::ScopedglDepthMask dmsaved(ostate);\n"
  "  // the prior state is now saved\n"
  "  ...\n"
  "  ostate->glDepthMask(GL_TRUE);  // maybe change the state\n"
  "  ... etc } // prior state will be restored here as it goes out of\n"
  "scope\n\n"
  "You must use this class to make stat changing OpenGL class otherwise\n"
  "the results will be undefined.\n\n"
  "For convenience some OpenGL calls that do not impact state are also\n"
  "provided.\n\n"
  "vtkOpenGLState()\n"
  "vtkOpenGLState(const &vtkOpenGLState)\n";


static PyObject *
PyvtkOpenGLState_vtkglClearColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "vtkglClearColor");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkOpenGLState *op = static_cast<vtkOpenGLState *>(vp);

  float temp0;
  float temp1;
  float temp2;
  float temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    op->vtkglClearColor(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLState_vtkglClearDepth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "vtkglClearDepth");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkOpenGLState *op = static_cast<vtkOpenGLState *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->vtkglClearDepth(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLState_vtkglDepthFunc(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "vtkglDepthFunc");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkOpenGLState *op = static_cast<vtkOpenGLState *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->vtkglDepthFunc(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLState_vtkglDepthMask(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "vtkglDepthMask");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkOpenGLState *op = static_cast<vtkOpenGLState *>(vp);

  unsigned char temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->vtkglDepthMask(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLState_vtkglColorMask(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "vtkglColorMask");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkOpenGLState *op = static_cast<vtkOpenGLState *>(vp);

  unsigned char temp0;
  unsigned char temp1;
  unsigned char temp2;
  unsigned char temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    op->vtkglColorMask(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLState_vtkglViewport(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "vtkglViewport");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkOpenGLState *op = static_cast<vtkOpenGLState *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    op->vtkglViewport(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLState_vtkglScissor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "vtkglScissor");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkOpenGLState *op = static_cast<vtkOpenGLState *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    op->vtkglScissor(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLState_vtkglEnable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "vtkglEnable");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkOpenGLState *op = static_cast<vtkOpenGLState *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->vtkglEnable(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLState_vtkglDisable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "vtkglDisable");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkOpenGLState *op = static_cast<vtkOpenGLState *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->vtkglDisable(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLState_vtkglBlendFunc(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "vtkglBlendFunc");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkOpenGLState *op = static_cast<vtkOpenGLState *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    op->vtkglBlendFunc(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLState_vtkglBlendFuncSeparate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "vtkglBlendFuncSeparate");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkOpenGLState *op = static_cast<vtkOpenGLState *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  unsigned int temp2;
  unsigned int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    op->vtkglBlendFuncSeparate(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLState_vtkglBlendEquation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "vtkglBlendEquation");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkOpenGLState *op = static_cast<vtkOpenGLState *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->vtkglBlendEquation(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLState_vtkglBlendEquationSeparate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "vtkglBlendEquationSeparate");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkOpenGLState *op = static_cast<vtkOpenGLState *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    op->vtkglBlendEquationSeparate(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLState_vtkglCullFace(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "vtkglCullFace");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkOpenGLState *op = static_cast<vtkOpenGLState *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->vtkglCullFace(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLState_ResetGlClearColorState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetGlClearColorState");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkOpenGLState *op = static_cast<vtkOpenGLState *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    op->ResetGlClearColorState();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLState_ResetGlClearDepthState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetGlClearDepthState");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkOpenGLState *op = static_cast<vtkOpenGLState *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    op->ResetGlClearDepthState();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLState_ResetGlDepthFuncState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetGlDepthFuncState");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkOpenGLState *op = static_cast<vtkOpenGLState *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    op->ResetGlDepthFuncState();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLState_ResetGlDepthMaskState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetGlDepthMaskState");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkOpenGLState *op = static_cast<vtkOpenGLState *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    op->ResetGlDepthMaskState();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLState_ResetGlColorMaskState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetGlColorMaskState");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkOpenGLState *op = static_cast<vtkOpenGLState *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    op->ResetGlColorMaskState();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLState_ResetGlViewportState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetGlViewportState");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkOpenGLState *op = static_cast<vtkOpenGLState *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    op->ResetGlViewportState();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLState_ResetGlScissorState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetGlScissorState");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkOpenGLState *op = static_cast<vtkOpenGLState *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    op->ResetGlScissorState();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLState_ResetGlBlendFuncState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetGlBlendFuncState");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkOpenGLState *op = static_cast<vtkOpenGLState *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    op->ResetGlBlendFuncState();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLState_ResetGlBlendEquationState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetGlBlendEquationState");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkOpenGLState *op = static_cast<vtkOpenGLState *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    op->ResetGlBlendEquationState();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLState_ResetGlCullFaceState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetGlCullFaceState");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkOpenGLState *op = static_cast<vtkOpenGLState *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    op->ResetGlCullFaceState();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLState_vtkglClear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "vtkglClear");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkOpenGLState *op = static_cast<vtkOpenGLState *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->vtkglClear(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLState_vtkglGetBooleanv(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "vtkglGetBooleanv");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkOpenGLState *op = static_cast<vtkOpenGLState *>(vp);

  unsigned int temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<unsigned char> store1(2*size1);
  unsigned char *temp1 = store1.Data();
  unsigned char *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    op->vtkglGetBooleanv(temp0, temp1);

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLState_vtkglGetIntegerv(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "vtkglGetIntegerv");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkOpenGLState *op = static_cast<vtkOpenGLState *>(vp);

  unsigned int temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<int> store1(2*size1);
  int *temp1 = store1.Data();
  int *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    op->vtkglGetIntegerv(temp0, temp1);

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLState_vtkglGetDoublev(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "vtkglGetDoublev");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkOpenGLState *op = static_cast<vtkOpenGLState *>(vp);

  unsigned int temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    op->vtkglGetDoublev(temp0, temp1);

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLState_vtkglGetFloatv(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "vtkglGetFloatv");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkOpenGLState *op = static_cast<vtkOpenGLState *>(vp);

  unsigned int temp0;
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

    op->vtkglGetFloatv(temp0, temp1);

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLState_GetBlendFuncState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlendFuncState");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkOpenGLState *op = static_cast<vtkOpenGLState *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<int> store0(2*size0);
  int *temp0 = store0.Data();
  int *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    op->GetBlendFuncState(temp0);

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLState_GetEnumState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnumState");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkOpenGLState *op = static_cast<vtkOpenGLState *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = op->GetEnumState(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLState_SetEnumState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnumState");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkOpenGLState *op = static_cast<vtkOpenGLState *>(vp);

  unsigned int temp0;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    op->SetEnumState(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLState_ResetEnumState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetEnumState");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkOpenGLState *op = static_cast<vtkOpenGLState *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->ResetEnumState(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLState_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkOpenGLState *op = static_cast<vtkOpenGLState *>(vp);

  vtkOpenGLRenderWindow *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkOpenGLRenderWindow"))
  {
    op->Initialize(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkOpenGLState_Methods[] = {
  {"vtkglClearColor", PyvtkOpenGLState_vtkglClearColor, METH_VARARGS,
   "V.vtkglClearColor(float, float, float, float)\nC++: void vtkglClearColor(float red, float green, float blue,\n    float alpha)\n\n"},
  {"vtkglClearDepth", PyvtkOpenGLState_vtkglClearDepth, METH_VARARGS,
   "V.vtkglClearDepth(float)\nC++: void vtkglClearDepth(double depth)\n\n"},
  {"vtkglDepthFunc", PyvtkOpenGLState_vtkglDepthFunc, METH_VARARGS,
   "V.vtkglDepthFunc(int)\nC++: void vtkglDepthFunc(unsigned int val)\n\n"},
  {"vtkglDepthMask", PyvtkOpenGLState_vtkglDepthMask, METH_VARARGS,
   "V.vtkglDepthMask(int)\nC++: void vtkglDepthMask(unsigned char flag)\n\n"},
  {"vtkglColorMask", PyvtkOpenGLState_vtkglColorMask, METH_VARARGS,
   "V.vtkglColorMask(int, int, int, int)\nC++: void vtkglColorMask(unsigned char r, unsigned char g,\n    unsigned char b, unsigned char a)\n\n"},
  {"vtkglViewport", PyvtkOpenGLState_vtkglViewport, METH_VARARGS,
   "V.vtkglViewport(int, int, int, int)\nC++: void vtkglViewport(int x, int y, int width, int height)\n\n"},
  {"vtkglScissor", PyvtkOpenGLState_vtkglScissor, METH_VARARGS,
   "V.vtkglScissor(int, int, int, int)\nC++: void vtkglScissor(int x, int y, int width, int height)\n\n"},
  {"vtkglEnable", PyvtkOpenGLState_vtkglEnable, METH_VARARGS,
   "V.vtkglEnable(int)\nC++: void vtkglEnable(unsigned int cap)\n\n"},
  {"vtkglDisable", PyvtkOpenGLState_vtkglDisable, METH_VARARGS,
   "V.vtkglDisable(int)\nC++: void vtkglDisable(unsigned int cap)\n\n"},
  {"vtkglBlendFunc", PyvtkOpenGLState_vtkglBlendFunc, METH_VARARGS,
   "V.vtkglBlendFunc(int, int)\nC++: void vtkglBlendFunc(unsigned int sfactor,\n    unsigned int dfactor)\n\n"},
  {"vtkglBlendFuncSeparate", PyvtkOpenGLState_vtkglBlendFuncSeparate, METH_VARARGS,
   "V.vtkglBlendFuncSeparate(int, int, int, int)\nC++: void vtkglBlendFuncSeparate(unsigned int sfactorRGB,\n    unsigned int dfactorRGB, unsigned int sfactorAlpha,\n    unsigned int dfactorAlpha)\n\n"},
  {"vtkglBlendEquation", PyvtkOpenGLState_vtkglBlendEquation, METH_VARARGS,
   "V.vtkglBlendEquation(int)\nC++: void vtkglBlendEquation(unsigned int val)\n\n"},
  {"vtkglBlendEquationSeparate", PyvtkOpenGLState_vtkglBlendEquationSeparate, METH_VARARGS,
   "V.vtkglBlendEquationSeparate(int, int)\nC++: void vtkglBlendEquationSeparate(unsigned int col,\n    unsigned int alpha)\n\n"},
  {"vtkglCullFace", PyvtkOpenGLState_vtkglCullFace, METH_VARARGS,
   "V.vtkglCullFace(int)\nC++: void vtkglCullFace(unsigned int val)\n\n"},
  {"ResetGlClearColorState", PyvtkOpenGLState_ResetGlClearColorState, METH_VARARGS,
   "V.ResetGlClearColorState()\nC++: void ResetGlClearColorState()\n\n"},
  {"ResetGlClearDepthState", PyvtkOpenGLState_ResetGlClearDepthState, METH_VARARGS,
   "V.ResetGlClearDepthState()\nC++: void ResetGlClearDepthState()\n\n"},
  {"ResetGlDepthFuncState", PyvtkOpenGLState_ResetGlDepthFuncState, METH_VARARGS,
   "V.ResetGlDepthFuncState()\nC++: void ResetGlDepthFuncState()\n\n"},
  {"ResetGlDepthMaskState", PyvtkOpenGLState_ResetGlDepthMaskState, METH_VARARGS,
   "V.ResetGlDepthMaskState()\nC++: void ResetGlDepthMaskState()\n\n"},
  {"ResetGlColorMaskState", PyvtkOpenGLState_ResetGlColorMaskState, METH_VARARGS,
   "V.ResetGlColorMaskState()\nC++: void ResetGlColorMaskState()\n\n"},
  {"ResetGlViewportState", PyvtkOpenGLState_ResetGlViewportState, METH_VARARGS,
   "V.ResetGlViewportState()\nC++: void ResetGlViewportState()\n\n"},
  {"ResetGlScissorState", PyvtkOpenGLState_ResetGlScissorState, METH_VARARGS,
   "V.ResetGlScissorState()\nC++: void ResetGlScissorState()\n\n"},
  {"ResetGlBlendFuncState", PyvtkOpenGLState_ResetGlBlendFuncState, METH_VARARGS,
   "V.ResetGlBlendFuncState()\nC++: void ResetGlBlendFuncState()\n\n"},
  {"ResetGlBlendEquationState", PyvtkOpenGLState_ResetGlBlendEquationState, METH_VARARGS,
   "V.ResetGlBlendEquationState()\nC++: void ResetGlBlendEquationState()\n\n"},
  {"ResetGlCullFaceState", PyvtkOpenGLState_ResetGlCullFaceState, METH_VARARGS,
   "V.ResetGlCullFaceState()\nC++: void ResetGlCullFaceState()\n\n"},
  {"vtkglClear", PyvtkOpenGLState_vtkglClear, METH_VARARGS,
   "V.vtkglClear(int)\nC++: void vtkglClear(unsigned int mask)\n\n"},
  {"vtkglGetBooleanv", PyvtkOpenGLState_vtkglGetBooleanv, METH_VARARGS,
   "V.vtkglGetBooleanv(int, [int, ...])\nC++: void vtkglGetBooleanv(unsigned int pname,\n    unsigned char *params)\n\n"},
  {"vtkglGetIntegerv", PyvtkOpenGLState_vtkglGetIntegerv, METH_VARARGS,
   "V.vtkglGetIntegerv(int, [int, ...])\nC++: void vtkglGetIntegerv(unsigned int pname, int *params)\n\n"},
  {"vtkglGetDoublev", PyvtkOpenGLState_vtkglGetDoublev, METH_VARARGS,
   "V.vtkglGetDoublev(int, [float, ...])\nC++: void vtkglGetDoublev(unsigned int pname, double *params)\n\n"},
  {"vtkglGetFloatv", PyvtkOpenGLState_vtkglGetFloatv, METH_VARARGS,
   "V.vtkglGetFloatv(int, [float, ...])\nC++: void vtkglGetFloatv(unsigned int pname, float *params)\n\n"},
  {"GetBlendFuncState", PyvtkOpenGLState_GetBlendFuncState, METH_VARARGS,
   "V.GetBlendFuncState([int, ...])\nC++: void GetBlendFuncState(int *)\n\n"},
  {"GetEnumState", PyvtkOpenGLState_GetEnumState, METH_VARARGS,
   "V.GetEnumState(int) -> bool\nC++: bool GetEnumState(unsigned int name)\n\n"},
  {"SetEnumState", PyvtkOpenGLState_SetEnumState, METH_VARARGS,
   "V.SetEnumState(int, bool)\nC++: void SetEnumState(unsigned int name, bool value)\n\n"},
  {"ResetEnumState", PyvtkOpenGLState_ResetEnumState, METH_VARARGS,
   "V.ResetEnumState(int)\nC++: void ResetEnumState(unsigned int name)\n\nconvenience method to reset an enum state from current openGL\ncontext\n"},
  {"Initialize", PyvtkOpenGLState_Initialize, METH_VARARGS,
   "V.Initialize(vtkOpenGLRenderWindow)\nC++: void Initialize(vtkOpenGLRenderWindow *)\n\nInitialize OpenGL context using current state\n"},
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkOpenGLState_vtkOpenGLState_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkOpenGLState");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkOpenGLState *op = new vtkOpenGLState();

    result = PyVTKSpecialObject_New("vtkOpenGLState", op);
  }

  return result;
}

static PyObject *
PyvtkOpenGLState_vtkOpenGLState_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkOpenGLState");

  vtkOpenGLState *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkOpenGLState"))
  {
    vtkOpenGLState *op = new vtkOpenGLState(*temp0);

    result = PyVTKSpecialObject_New("vtkOpenGLState", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkOpenGLState_vtkOpenGLState_Methods[] = {
  {nullptr, PyvtkOpenGLState_vtkOpenGLState_s2, METH_VARARGS,
   "@W vtkOpenGLState"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkOpenGLState_vtkOpenGLState(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkOpenGLState_vtkOpenGLState_s1(self, args);
    case 1:
      return PyvtkOpenGLState_vtkOpenGLState_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkOpenGLState");
  return nullptr;
}


static PyObject *
PyvtkOpenGLState_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkOpenGLState_vtkOpenGLState(nullptr, args);
}

static void PyvtkOpenGLState_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkOpenGLState *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkOpenGLState_Hash(PyObject *self)
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

static PyTypeObject PyvtkOpenGLState_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingOpenGL2Python.vtkOpenGLState", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkOpenGLState_Delete, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkOpenGLState_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkOpenGLState_Doc, // tp_doc
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
  PyvtkOpenGLState_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkOpenGLState_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkOpenGLState(*static_cast<const vtkOpenGLState*>(obj));
  }
  return 0;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkOpenGLState_TypeNew(); }

PyObject *PyvtkOpenGLState_TypeNew()
{
  PyVTKSpecialType_Add(
    &PyvtkOpenGLState_Type,
    PyvtkOpenGLState_Methods,
    PyvtkOpenGLState_vtkOpenGLState_Methods,
    &PyvtkOpenGLState_CCopy);

  PyTypeObject *pytype = &PyvtkOpenGLState_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkOpenGLState(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkOpenGLState_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkOpenGLState", o) != 0)
  {
    Py_DECREF(o);
  }

}

