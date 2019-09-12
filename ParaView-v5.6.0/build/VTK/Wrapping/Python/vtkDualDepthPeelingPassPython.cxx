// python wrapper for vtkDualDepthPeelingPass
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
#include "vtkDualDepthPeelingPass.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkDualDepthPeelingPass(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkDualDepthPeelingPass_ClassNew(); }

#ifndef DECLARED_PyvtkDepthPeelingPass_ClassNew
extern "C" { PyObject *PyvtkDepthPeelingPass_ClassNew(); }
#define DECLARED_PyvtkDepthPeelingPass_ClassNew
#endif

static const char *PyvtkDualDepthPeelingPass_Doc =
  "vtkDualDepthPeelingPass - Implements the dual depth peeling algorithm.\n\n"
  "Superclass: vtkDepthPeelingPass\n\n"
  "Dual depth peeling is an augmentatation of the standard depth peeling\n"
  "algorithm that peels two layers (front and back) for each render\n"
  "pass. The technique is described in \"Order independent transparency\n"
  "with dual depth peeling\" (February 2008) by L. Bavoil, K. Myers.\n\n"
  "This algorithm has been extended to also peel volumetric data along\n"
  "with translucent geometry. To use this feature, set VolumetricPass to\n"
  "an appropriate RenderPass (usually vtkVolumetricPass).\n\n"
  "The pass occurs in several stages:\n\n"
  "1. Copy the current (opaque geometry) depth buffer into a texture.\n"
  "2. Initialize the min-max depth buffer from the opaque depth texture\n"
  "   and the translucent geometry.\n"
  "3. Peel the nearest and farthest fragments: 3a. Blend fragments that\n"
  "   match the nearest depth of the min-max depth buffer into the front\n"
  "buffer. 3b. Write the far depth fragments into a temporary buffer.\n"
  "   3c. Extract the next set of min/max depth values for the next\n"
  "   peel. 3d. Blend the temporary far fragment texture (3b) into an\n"
  "   accumulation texture. 3e. Go back to 3a and repeat until the\n"
  "   maximum number of peels is met, or the desired occlusion ratio is\n"
  "   satisfied.\n"
  "4. If the occlusion ratio != 0 (i.e. we hit the maximum number of\n"
  "   peels before finishing), alpha blend the remaining fragments\n"
  "   in-between the near and far accumulation textures.\n"
  "5. Blend all accumulation buffers over the opaque color buffer to\n"
  "   produce the final image.\n\n";


static PyObject *
PyvtkDualDepthPeelingPass_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDualDepthPeelingPass::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDualDepthPeelingPass_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDualDepthPeelingPass *op = static_cast<vtkDualDepthPeelingPass *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDualDepthPeelingPass::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDualDepthPeelingPass_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDualDepthPeelingPass *tempr = vtkDualDepthPeelingPass::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDualDepthPeelingPass_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDualDepthPeelingPass *op = static_cast<vtkDualDepthPeelingPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDualDepthPeelingPass *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDualDepthPeelingPass::NewInstance());

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
PyvtkDualDepthPeelingPass_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDualDepthPeelingPass *op = static_cast<vtkDualDepthPeelingPass *>(vp);

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
      op->vtkDualDepthPeelingPass::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDualDepthPeelingPass_GetVolumetricPass(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVolumetricPass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDualDepthPeelingPass *op = static_cast<vtkDualDepthPeelingPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderPass *tempr = (ap.IsBound() ?
      op->GetVolumetricPass() :
      op->vtkDualDepthPeelingPass::GetVolumetricPass());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDualDepthPeelingPass_SetVolumetricPass(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVolumetricPass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDualDepthPeelingPass *op = static_cast<vtkDualDepthPeelingPass *>(vp);

  vtkRenderPass *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderPass"))
  {
    if (ap.IsBound())
    {
      op->SetVolumetricPass(temp0);
    }
    else
    {
      op->vtkDualDepthPeelingPass::SetVolumetricPass(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDualDepthPeelingPass_PreReplaceShaderValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PreReplaceShaderValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDualDepthPeelingPass *op = static_cast<vtkDualDepthPeelingPass *>(vp);

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
      op->PreReplaceShaderValues(temp0, temp1, temp2, temp3, temp4) :
      op->vtkDualDepthPeelingPass::PreReplaceShaderValues(temp0, temp1, temp2, temp3, temp4));

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
PyvtkDualDepthPeelingPass_PostReplaceShaderValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PostReplaceShaderValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDualDepthPeelingPass *op = static_cast<vtkDualDepthPeelingPass *>(vp);

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
      op->vtkDualDepthPeelingPass::PostReplaceShaderValues(temp0, temp1, temp2, temp3, temp4));

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
PyvtkDualDepthPeelingPass_SetShaderParameters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShaderParameters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDualDepthPeelingPass *op = static_cast<vtkDualDepthPeelingPass *>(vp);

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
      op->vtkDualDepthPeelingPass::SetShaderParameters(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDualDepthPeelingPass_GetShaderStageMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShaderStageMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDualDepthPeelingPass *op = static_cast<vtkDualDepthPeelingPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetShaderStageMTime() :
      op->vtkDualDepthPeelingPass::GetShaderStageMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkDualDepthPeelingPass_Methods[] = {
  {"IsTypeOf", PyvtkDualDepthPeelingPass_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkDualDepthPeelingPass_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkDualDepthPeelingPass_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkDualDepthPeelingPass\nC++: static vtkDualDepthPeelingPass *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkDualDepthPeelingPass_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkDualDepthPeelingPass\nC++: vtkDualDepthPeelingPass *NewInstance()\n\n"},
  {"ReleaseGraphicsResources", PyvtkDualDepthPeelingPass_ReleaseGraphicsResources, METH_VARARGS,
   "V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *w) override;\n\nRelease graphics resources and ask components to release their\nown resources.\n\\pre w_exists: w!=0\n"},
  {"GetVolumetricPass", PyvtkDualDepthPeelingPass_GetVolumetricPass, METH_VARARGS,
   "V.GetVolumetricPass() -> vtkRenderPass\nC++: virtual vtkRenderPass *GetVolumetricPass()\n\nDelegate for rendering the volumetric geometry, if needed. It is\nusually set to a vtkVolumetricPass. Initial value is a NULL\npointer.\n"},
  {"SetVolumetricPass", PyvtkDualDepthPeelingPass_SetVolumetricPass, METH_VARARGS,
   "V.SetVolumetricPass(vtkRenderPass)\nC++: virtual void SetVolumetricPass(vtkRenderPass *volumetricPass)\n\nDelegate for rendering the volumetric geometry, if needed. It is\nusually set to a vtkVolumetricPass. Initial value is a NULL\npointer.\n"},
  {"PreReplaceShaderValues", PyvtkDualDepthPeelingPass_PreReplaceShaderValues, METH_VARARGS,
   "V.PreReplaceShaderValues(string, string, string,\n    vtkAbstractMapper, vtkProp) -> bool\nC++: bool PreReplaceShaderValues(std::string &vertexShader,\n    std::string &geometryShader, std::string &fragmentShader,\n    vtkAbstractMapper *mapper, vtkProp *prop) override;\n\nUse vtkShaderProgram::Substitute to replace //VTK::XXX:YYY\ndeclarations in the shader sources. Gets called before other\nmapper shader replacements Return false on error.\n"},
  {"PostReplaceShaderValues", PyvtkDualDepthPeelingPass_PostReplaceShaderValues, METH_VARARGS,
   "V.PostReplaceShaderValues(string, string, string,\n    vtkAbstractMapper, vtkProp) -> bool\nC++: bool PostReplaceShaderValues(std::string &vertexShader,\n    std::string &geometryShader, std::string &fragmentShader,\n    vtkAbstractMapper *mapper, vtkProp *prop) override;\n\nUse vtkShaderProgram::Substitute to replace //VTK::XXX:YYY\ndeclarations in the shader sources. Gets called after other\nmapper shader replacements. Return false on error.\n"},
  {"SetShaderParameters", PyvtkDualDepthPeelingPass_SetShaderParameters, METH_VARARGS,
   "V.SetShaderParameters(vtkShaderProgram, vtkAbstractMapper,\n    vtkProp, vtkOpenGLVertexArrayObject) -> bool\nC++: bool SetShaderParameters(vtkShaderProgram *program,\n    vtkAbstractMapper *mapper, vtkProp *prop,\n    vtkOpenGLVertexArrayObject *VAO=nullptr) override;\n\nUpdate the uniforms of the shader program. Return false on error.\n"},
  {"GetShaderStageMTime", PyvtkDualDepthPeelingPass_GetShaderStageMTime, METH_VARARGS,
   "V.GetShaderStageMTime() -> int\nC++: vtkMTimeType GetShaderStageMTime() override;\n\nFor multi-stage render passes that need to change shader code\nduring a single pass, use this method to notify a mapper that the\nshader needs to be rebuilt (rather than reuse the last cached\nshader. This method should return the last time that the shader\nstage changed, or 0 if the shader is single-stage.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkDualDepthPeelingPass_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingOpenGL2Python.vtkDualDepthPeelingPass", // tp_name
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
  PyvtkDualDepthPeelingPass_Doc, // tp_doc
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

static vtkObjectBase *PyvtkDualDepthPeelingPass_StaticNew()
{
  return vtkDualDepthPeelingPass::New();
}

PyObject *PyvtkDualDepthPeelingPass_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkDualDepthPeelingPass_Type, PyvtkDualDepthPeelingPass_Methods,
    "vtkDualDepthPeelingPass",
 &PyvtkDualDepthPeelingPass_StaticNew);

  PyTypeObject *pytype = &PyvtkDualDepthPeelingPass_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkDepthPeelingPass_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkDualDepthPeelingPass(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkDualDepthPeelingPass_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkDualDepthPeelingPass", o) != 0)
  {
    Py_DECREF(o);
  }

}

