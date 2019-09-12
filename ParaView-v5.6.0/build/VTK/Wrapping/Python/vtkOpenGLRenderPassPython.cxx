// python wrapper for vtkOpenGLRenderPass
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
#include "vtkOpenGLRenderPass.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkOpenGLRenderPass(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkOpenGLRenderPass_ClassNew(); }

#ifndef DECLARED_PyvtkRenderPass_ClassNew
extern "C" { PyObject *PyvtkRenderPass_ClassNew(); }
#define DECLARED_PyvtkRenderPass_ClassNew
#endif

static const char *PyvtkOpenGLRenderPass_Doc =
  "vtkOpenGLRenderPass - Abstract render pass with shader modifications.\n\n"
  "Superclass: vtkRenderPass\n\n"
  "Allows a render pass to update shader code using a new virtual API.\n\n";


static PyObject *
PyvtkOpenGLRenderPass_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkOpenGLRenderPass::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderPass_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderPass *op = static_cast<vtkOpenGLRenderPass *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkOpenGLRenderPass::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderPass_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkOpenGLRenderPass *tempr = vtkOpenGLRenderPass::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderPass_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderPass *op = static_cast<vtkOpenGLRenderPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkOpenGLRenderPass *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkOpenGLRenderPass::NewInstance());

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
PyvtkOpenGLRenderPass_PreReplaceShaderValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PreReplaceShaderValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderPass *op = static_cast<vtkOpenGLRenderPass *>(vp);

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
      op->vtkOpenGLRenderPass::PreReplaceShaderValues(temp0, temp1, temp2, temp3, temp4));

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
PyvtkOpenGLRenderPass_PostReplaceShaderValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PostReplaceShaderValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderPass *op = static_cast<vtkOpenGLRenderPass *>(vp);

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
      op->vtkOpenGLRenderPass::PostReplaceShaderValues(temp0, temp1, temp2, temp3, temp4));

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
PyvtkOpenGLRenderPass_SetShaderParameters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShaderParameters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderPass *op = static_cast<vtkOpenGLRenderPass *>(vp);

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
      op->vtkOpenGLRenderPass::SetShaderParameters(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderPass_GetShaderStageMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShaderStageMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderPass *op = static_cast<vtkOpenGLRenderPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetShaderStageMTime() :
      op->vtkOpenGLRenderPass::GetShaderStageMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderPass_RenderPasses(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "RenderPasses");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationObjectBaseVectorKey *tempr = vtkOpenGLRenderPass::RenderPasses();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderPass_SetActiveDrawBuffers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActiveDrawBuffers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderPass *op = static_cast<vtkOpenGLRenderPass *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetActiveDrawBuffers(temp0);
    }
    else
    {
      op->vtkOpenGLRenderPass::SetActiveDrawBuffers(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderPass_GetActiveDrawBuffers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActiveDrawBuffers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderPass *op = static_cast<vtkOpenGLRenderPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetActiveDrawBuffers() :
      op->vtkOpenGLRenderPass::GetActiveDrawBuffers());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkOpenGLRenderPass_Methods[] = {
  {"IsTypeOf", PyvtkOpenGLRenderPass_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkOpenGLRenderPass_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkOpenGLRenderPass_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkOpenGLRenderPass\nC++: static vtkOpenGLRenderPass *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkOpenGLRenderPass_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkOpenGLRenderPass\nC++: vtkOpenGLRenderPass *NewInstance()\n\n"},
  {"PreReplaceShaderValues", PyvtkOpenGLRenderPass_PreReplaceShaderValues, METH_VARARGS,
   "V.PreReplaceShaderValues(string, string, string,\n    vtkAbstractMapper, vtkProp) -> bool\nC++: virtual bool PreReplaceShaderValues(\n    std::string &vertexShader, std::string &geometryShader,\n    std::string &fragmentShader, vtkAbstractMapper *mapper,\n    vtkProp *prop)\n\nUse vtkShaderProgram::Substitute to replace //VTK::XXX:YYY\ndeclarations in the shader sources. Gets called before other\nmapper shader replacements Return false on error.\n"},
  {"PostReplaceShaderValues", PyvtkOpenGLRenderPass_PostReplaceShaderValues, METH_VARARGS,
   "V.PostReplaceShaderValues(string, string, string,\n    vtkAbstractMapper, vtkProp) -> bool\nC++: virtual bool PostReplaceShaderValues(\n    std::string &vertexShader, std::string &geometryShader,\n    std::string &fragmentShader, vtkAbstractMapper *mapper,\n    vtkProp *prop)\n\nUse vtkShaderProgram::Substitute to replace //VTK::XXX:YYY\ndeclarations in the shader sources. Gets called after other\nmapper shader replacements. Return false on error.\n"},
  {"SetShaderParameters", PyvtkOpenGLRenderPass_SetShaderParameters, METH_VARARGS,
   "V.SetShaderParameters(vtkShaderProgram, vtkAbstractMapper,\n    vtkProp, vtkOpenGLVertexArrayObject) -> bool\nC++: virtual bool SetShaderParameters(vtkShaderProgram *program,\n    vtkAbstractMapper *mapper, vtkProp *prop,\n    vtkOpenGLVertexArrayObject *VAO=nullptr)\n\nUpdate the uniforms of the shader program. Return false on error.\n"},
  {"GetShaderStageMTime", PyvtkOpenGLRenderPass_GetShaderStageMTime, METH_VARARGS,
   "V.GetShaderStageMTime() -> int\nC++: virtual vtkMTimeType GetShaderStageMTime()\n\nFor multi-stage render passes that need to change shader code\nduring a single pass, use this method to notify a mapper that the\nshader needs to be rebuilt (rather than reuse the last cached\nshader. This method should return the last time that the shader\nstage changed, or 0 if the shader is single-stage.\n"},
  {"RenderPasses", PyvtkOpenGLRenderPass_RenderPasses, METH_VARARGS,
   "V.RenderPasses() -> vtkInformationObjectBaseVectorKey\nC++: static vtkInformationObjectBaseVectorKey *RenderPasses()\n\nKey containing information about the current pass.\n"},
  {"SetActiveDrawBuffers", PyvtkOpenGLRenderPass_SetActiveDrawBuffers, METH_VARARGS,
   "V.SetActiveDrawBuffers(int)\nC++: virtual void SetActiveDrawBuffers(unsigned int _arg)\n\nNumber of active draw buffers.\n"},
  {"GetActiveDrawBuffers", PyvtkOpenGLRenderPass_GetActiveDrawBuffers, METH_VARARGS,
   "V.GetActiveDrawBuffers() -> int\nC++: virtual unsigned int GetActiveDrawBuffers()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkOpenGLRenderPass_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingOpenGL2Python.vtkOpenGLRenderPass", // tp_name
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
  PyvtkOpenGLRenderPass_Doc, // tp_doc
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

PyObject *PyvtkOpenGLRenderPass_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkOpenGLRenderPass_Type, PyvtkOpenGLRenderPass_Methods,
    "vtkOpenGLRenderPass",
 nullptr);

  PyTypeObject *pytype = &PyvtkOpenGLRenderPass_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkRenderPass_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkOpenGLRenderPass(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkOpenGLRenderPass_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkOpenGLRenderPass", o) != 0)
  {
    Py_DECREF(o);
  }

}

