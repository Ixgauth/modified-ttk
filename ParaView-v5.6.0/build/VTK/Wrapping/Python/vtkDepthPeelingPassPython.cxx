// python wrapper for vtkDepthPeelingPass
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
#include "vtkDepthPeelingPass.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkDepthPeelingPass(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkDepthPeelingPass_ClassNew(); }

#ifndef DECLARED_PyvtkOpenGLRenderPass_ClassNew
extern "C" { PyObject *PyvtkOpenGLRenderPass_ClassNew(); }
#define DECLARED_PyvtkOpenGLRenderPass_ClassNew
#endif

static const char *PyvtkDepthPeelingPass_Doc =
  "vtkDepthPeelingPass - Implement Depth Peeling for use within a\nframebuffer pass\n\n"
  "Superclass: vtkOpenGLRenderPass\n\n"
  "Note that this implementation is used as a fallback for drivers that\n"
  "don't support floating point textures. Most renderings will use the\n"
  "subclass vtkDualDepthPeelingPass instead.\n\n"
  "Render the translucent polygonal geometry of a scene without sorting\n"
  "polygons in the view direction.\n\n"
  "This pass expects an initialized depth buffer and color buffer.\n"
  "Initialized buffers means they have been cleared with farest z-value\n"
  "and background color/gradient/transparent color. An opaque pass may\n"
  "have been performed right after the initialization.\n\n"
  "The depth peeling algorithm works by rendering the translucent\n"
  "polygonal geometry multiple times (once for each peel). The actually\n"
  "rendering of the translucent polygonal geometry is performed by its\n"
  "delegate TranslucentPass. This delegate is therefore used multiple\n"
  "times.\n\n"
  "Its delegate is usually set to a vtkTranslucentPass.\n\n"
  "This implementation makes use of textures and is suitable for ES3 For\n"
  "ES3 it must be embedded within a pass that makes use of framebuffers\n"
  "so that the required OpaqueZTexture and OpaqueRGBATexture can be\n"
  "passed from the outer framebuffer pass. For OpenGL ES3 be aware the\n"
  "occlusion ratio test is not supported. The maximum number of peels is\n"
  "used instead so set it to a reasonable value. For many scenes a value\n"
  "of 4 or 5 will work well.\n\n"
  "@sa\n"
  "vtkRenderPass, vtkTranslucentPass, vtkFramebufferPass\n\n";


static PyObject *
PyvtkDepthPeelingPass_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDepthPeelingPass::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDepthPeelingPass_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDepthPeelingPass *op = static_cast<vtkDepthPeelingPass *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDepthPeelingPass::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDepthPeelingPass_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDepthPeelingPass *tempr = vtkDepthPeelingPass::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDepthPeelingPass_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDepthPeelingPass *op = static_cast<vtkDepthPeelingPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDepthPeelingPass *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDepthPeelingPass::NewInstance());

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
PyvtkDepthPeelingPass_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDepthPeelingPass *op = static_cast<vtkDepthPeelingPass *>(vp);

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
      op->vtkDepthPeelingPass::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDepthPeelingPass_GetTranslucentPass(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTranslucentPass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDepthPeelingPass *op = static_cast<vtkDepthPeelingPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderPass *tempr = (ap.IsBound() ?
      op->GetTranslucentPass() :
      op->vtkDepthPeelingPass::GetTranslucentPass());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDepthPeelingPass_SetTranslucentPass(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTranslucentPass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDepthPeelingPass *op = static_cast<vtkDepthPeelingPass *>(vp);

  vtkRenderPass *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderPass"))
  {
    if (ap.IsBound())
    {
      op->SetTranslucentPass(temp0);
    }
    else
    {
      op->vtkDepthPeelingPass::SetTranslucentPass(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDepthPeelingPass_SetOcclusionRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOcclusionRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDepthPeelingPass *op = static_cast<vtkDepthPeelingPass *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOcclusionRatio(temp0);
    }
    else
    {
      op->vtkDepthPeelingPass::SetOcclusionRatio(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDepthPeelingPass_GetOcclusionRatioMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOcclusionRatioMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDepthPeelingPass *op = static_cast<vtkDepthPeelingPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetOcclusionRatioMinValue() :
      op->vtkDepthPeelingPass::GetOcclusionRatioMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDepthPeelingPass_GetOcclusionRatioMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOcclusionRatioMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDepthPeelingPass *op = static_cast<vtkDepthPeelingPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetOcclusionRatioMaxValue() :
      op->vtkDepthPeelingPass::GetOcclusionRatioMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDepthPeelingPass_GetOcclusionRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOcclusionRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDepthPeelingPass *op = static_cast<vtkDepthPeelingPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetOcclusionRatio() :
      op->vtkDepthPeelingPass::GetOcclusionRatio());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDepthPeelingPass_SetMaximumNumberOfPeels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumNumberOfPeels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDepthPeelingPass *op = static_cast<vtkDepthPeelingPass *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaximumNumberOfPeels(temp0);
    }
    else
    {
      op->vtkDepthPeelingPass::SetMaximumNumberOfPeels(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDepthPeelingPass_GetMaximumNumberOfPeels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfPeels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDepthPeelingPass *op = static_cast<vtkDepthPeelingPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaximumNumberOfPeels() :
      op->vtkDepthPeelingPass::GetMaximumNumberOfPeels());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDepthPeelingPass_PostReplaceShaderValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PostReplaceShaderValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDepthPeelingPass *op = static_cast<vtkDepthPeelingPass *>(vp);

  std::string temp0;
  std::string temp1;
  std::string temp2;
  vtkAbstractMapper *temp3 = nullptr;
  vtkProp *temp4 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetVTKObject(temp3, "vtkAbstractMapper") &&
      ap.GetVTKObject(temp4, "vtkProp"))
  {
    bool tempr = (ap.IsBound() ?
      op->PostReplaceShaderValues(temp0, temp1, temp2, temp3, temp4) :
      op->vtkDepthPeelingPass::PostReplaceShaderValues(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(0, temp0);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(2, temp2);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDepthPeelingPass_SetShaderParameters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShaderParameters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDepthPeelingPass *op = static_cast<vtkDepthPeelingPass *>(vp);

  vtkShaderProgram *temp0 = nullptr;
  vtkAbstractMapper *temp1 = nullptr;
  vtkProp *temp2 = nullptr;
  vtkOpenGLVertexArrayObject *temp3 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3, 4) &&
      ap.GetVTKObject(temp0, "vtkShaderProgram") &&
      ap.GetVTKObject(temp1, "vtkAbstractMapper") &&
      ap.GetVTKObject(temp2, "vtkProp") &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp3, "vtkOpenGLVertexArrayObject")))
  {
    bool tempr = (ap.IsBound() ?
      op->SetShaderParameters(temp0, temp1, temp2, temp3) :
      op->vtkDepthPeelingPass::SetShaderParameters(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDepthPeelingPass_SetOpaqueZTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOpaqueZTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDepthPeelingPass *op = static_cast<vtkDepthPeelingPass *>(vp);

  vtkTextureObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextureObject"))
  {
    if (ap.IsBound())
    {
      op->SetOpaqueZTexture(temp0);
    }
    else
    {
      op->vtkDepthPeelingPass::SetOpaqueZTexture(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDepthPeelingPass_SetOpaqueRGBATexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOpaqueRGBATexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDepthPeelingPass *op = static_cast<vtkDepthPeelingPass *>(vp);

  vtkTextureObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextureObject"))
  {
    if (ap.IsBound())
    {
      op->SetOpaqueRGBATexture(temp0);
    }
    else
    {
      op->vtkDepthPeelingPass::SetOpaqueRGBATexture(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDepthPeelingPass_SetDepthFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDepthFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDepthPeelingPass *op = static_cast<vtkDepthPeelingPass *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDepthFormat(temp0);
    }
    else
    {
      op->vtkDepthPeelingPass::SetDepthFormat(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkDepthPeelingPass_Methods[] = {
  {"IsTypeOf", PyvtkDepthPeelingPass_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkDepthPeelingPass_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkDepthPeelingPass_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkDepthPeelingPass\nC++: static vtkDepthPeelingPass *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkDepthPeelingPass_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkDepthPeelingPass\nC++: vtkDepthPeelingPass *NewInstance()\n\n"},
  {"ReleaseGraphicsResources", PyvtkDepthPeelingPass_ReleaseGraphicsResources, METH_VARARGS,
   "V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *w) override;\n\nRelease graphics resources and ask components to release their\nown resources.\n\\pre w_exists: w!=0\n"},
  {"GetTranslucentPass", PyvtkDepthPeelingPass_GetTranslucentPass, METH_VARARGS,
   "V.GetTranslucentPass() -> vtkRenderPass\nC++: virtual vtkRenderPass *GetTranslucentPass()\n\nDelegate for rendering the translucent polygonal geometry. If it\nis NULL, nothing will be rendered and a warning will be emitted.\nIt is usually set to a vtkTranslucentPass. Initial value is a\nNULL pointer.\n"},
  {"SetTranslucentPass", PyvtkDepthPeelingPass_SetTranslucentPass, METH_VARARGS,
   "V.SetTranslucentPass(vtkRenderPass)\nC++: virtual void SetTranslucentPass(\n    vtkRenderPass *translucentPass)\n\nDelegate for rendering the translucent polygonal geometry. If it\nis NULL, nothing will be rendered and a warning will be emitted.\nIt is usually set to a vtkTranslucentPass. Initial value is a\nNULL pointer.\n"},
  {"SetOcclusionRatio", PyvtkDepthPeelingPass_SetOcclusionRatio, METH_VARARGS,
   "V.SetOcclusionRatio(float)\nC++: virtual void SetOcclusionRatio(double _arg)\n\nIn case of use of depth peeling technique for rendering\ntranslucent material, define the threshold under which the\nalgorithm stops to iterate over peel layers. This is the ratio of\nthe number of pixels that have been touched by the last layer\nover the total number of pixels of the viewport area. Initial\nvalue is 0.0, meaning rendering have to be exact. Greater values\nmay speed-up the rendering with small impact on the quality.\n"},
  {"GetOcclusionRatioMinValue", PyvtkDepthPeelingPass_GetOcclusionRatioMinValue, METH_VARARGS,
   "V.GetOcclusionRatioMinValue() -> float\nC++: virtual double GetOcclusionRatioMinValue()\n\nIn case of use of depth peeling technique for rendering\ntranslucent material, define the threshold under which the\nalgorithm stops to iterate over peel layers. This is the ratio of\nthe number of pixels that have been touched by the last layer\nover the total number of pixels of the viewport area. Initial\nvalue is 0.0, meaning rendering have to be exact. Greater values\nmay speed-up the rendering with small impact on the quality.\n"},
  {"GetOcclusionRatioMaxValue", PyvtkDepthPeelingPass_GetOcclusionRatioMaxValue, METH_VARARGS,
   "V.GetOcclusionRatioMaxValue() -> float\nC++: virtual double GetOcclusionRatioMaxValue()\n\nIn case of use of depth peeling technique for rendering\ntranslucent material, define the threshold under which the\nalgorithm stops to iterate over peel layers. This is the ratio of\nthe number of pixels that have been touched by the last layer\nover the total number of pixels of the viewport area. Initial\nvalue is 0.0, meaning rendering have to be exact. Greater values\nmay speed-up the rendering with small impact on the quality.\n"},
  {"GetOcclusionRatio", PyvtkDepthPeelingPass_GetOcclusionRatio, METH_VARARGS,
   "V.GetOcclusionRatio() -> float\nC++: virtual double GetOcclusionRatio()\n\nIn case of use of depth peeling technique for rendering\ntranslucent material, define the threshold under which the\nalgorithm stops to iterate over peel layers. This is the ratio of\nthe number of pixels that have been touched by the last layer\nover the total number of pixels of the viewport area. Initial\nvalue is 0.0, meaning rendering have to be exact. Greater values\nmay speed-up the rendering with small impact on the quality.\n"},
  {"SetMaximumNumberOfPeels", PyvtkDepthPeelingPass_SetMaximumNumberOfPeels, METH_VARARGS,
   "V.SetMaximumNumberOfPeels(int)\nC++: virtual void SetMaximumNumberOfPeels(int _arg)\n\nIn case of depth peeling, define the maximum number of peeling\nlayers. Initial value is 4. A special value of 0 means no maximum\nlimit. It has to be a positive value.\n"},
  {"GetMaximumNumberOfPeels", PyvtkDepthPeelingPass_GetMaximumNumberOfPeels, METH_VARARGS,
   "V.GetMaximumNumberOfPeels() -> int\nC++: virtual int GetMaximumNumberOfPeels()\n\nIn case of depth peeling, define the maximum number of peeling\nlayers. Initial value is 4. A special value of 0 means no maximum\nlimit. It has to be a positive value.\n"},
  {"PostReplaceShaderValues", PyvtkDepthPeelingPass_PostReplaceShaderValues, METH_VARARGS,
   "V.PostReplaceShaderValues(string, string, string,\n    vtkAbstractMapper, vtkProp) -> bool\nC++: bool PostReplaceShaderValues(std::string &vertexShader,\n    std::string &geometryShader, std::string &fragmentShader,\n    vtkAbstractMapper *mapper, vtkProp *prop) override;\n\nUse vtkShaderProgram::Substitute to replace //VTK::XXX:YYY\ndeclarations in the shader sources. Gets called after other\nmapper shader replacements. Return false on error.\n"},
  {"SetShaderParameters", PyvtkDepthPeelingPass_SetShaderParameters, METH_VARARGS,
   "V.SetShaderParameters(vtkShaderProgram, vtkAbstractMapper,\n    vtkProp, vtkOpenGLVertexArrayObject) -> bool\nC++: bool SetShaderParameters(vtkShaderProgram *program,\n    vtkAbstractMapper *mapper, vtkProp *prop,\n    vtkOpenGLVertexArrayObject *VAO=nullptr) override;\n\nUpdate the uniforms of the shader program. Return false on error.\n"},
  {"SetOpaqueZTexture", PyvtkDepthPeelingPass_SetOpaqueZTexture, METH_VARARGS,
   "V.SetOpaqueZTexture(vtkTextureObject)\nC++: void SetOpaqueZTexture(vtkTextureObject *)\n\n"},
  {"SetOpaqueRGBATexture", PyvtkDepthPeelingPass_SetOpaqueRGBATexture, METH_VARARGS,
   "V.SetOpaqueRGBATexture(vtkTextureObject)\nC++: void SetOpaqueRGBATexture(vtkTextureObject *)\n\n"},
  {"SetDepthFormat", PyvtkDepthPeelingPass_SetDepthFormat, METH_VARARGS,
   "V.SetDepthFormat(int)\nC++: virtual void SetDepthFormat(int _arg)\n\nSet the format to use for the depth texture e.g.\nvtkTextureObject::Float32\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkDepthPeelingPass_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingOpenGL2Python.vtkDepthPeelingPass", // tp_name
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
  PyvtkDepthPeelingPass_Doc, // tp_doc
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

static vtkObjectBase *PyvtkDepthPeelingPass_StaticNew()
{
  return vtkDepthPeelingPass::New();
}

PyObject *PyvtkDepthPeelingPass_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkDepthPeelingPass_Type, PyvtkDepthPeelingPass_Methods,
    "vtkDepthPeelingPass",
 &PyvtkDepthPeelingPass_StaticNew);

  PyTypeObject *pytype = &PyvtkDepthPeelingPass_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkOpenGLRenderPass_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkDepthPeelingPass(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkDepthPeelingPass_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkDepthPeelingPass", o) != 0)
  {
    Py_DECREF(o);
  }

}

