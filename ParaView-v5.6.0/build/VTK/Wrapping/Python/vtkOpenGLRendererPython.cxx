// python wrapper for vtkOpenGLRenderer
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
#include "vtkOpenGLRenderer.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkOpenGLRenderer(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkOpenGLRenderer_ClassNew(); }

#ifndef DECLARED_PyvtkRenderer_ClassNew
extern "C" { PyObject *PyvtkRenderer_ClassNew(); }
#define DECLARED_PyvtkRenderer_ClassNew
#endif

static const char *PyvtkOpenGLRenderer_Doc =
  "vtkOpenGLRenderer - OpenGL renderer\n\n"
  "Superclass: vtkRenderer\n\n"
  "vtkOpenGLRenderer is a concrete implementation of the abstract class\n"
  "vtkRenderer. vtkOpenGLRenderer interfaces to the OpenGL graphics\n"
  "library.\n\n";

static PyTypeObject PyvtkOpenGLRenderer_LightingComplexityEnum_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingOpenGL2Python.vtkOpenGLRenderer.LightingComplexityEnum", // tp_name
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

PyObject *PyvtkOpenGLRenderer_LightingComplexityEnum_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkOpenGLRenderer_LightingComplexityEnum_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkOpenGLRenderer_LightingComplexityEnum_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkOpenGLRenderer_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkOpenGLRenderer::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderer_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderer *op = static_cast<vtkOpenGLRenderer *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkOpenGLRenderer::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderer_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkOpenGLRenderer *tempr = vtkOpenGLRenderer::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderer_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderer *op = static_cast<vtkOpenGLRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkOpenGLRenderer *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkOpenGLRenderer::NewInstance());

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
PyvtkOpenGLRenderer_DeviceRender(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeviceRender");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderer *op = static_cast<vtkOpenGLRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DeviceRender();
    }
    else
    {
      op->vtkOpenGLRenderer::DeviceRender();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderer_DeviceRenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeviceRenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderer *op = static_cast<vtkOpenGLRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DeviceRenderOpaqueGeometry();
    }
    else
    {
      op->vtkOpenGLRenderer::DeviceRenderOpaqueGeometry();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderer_DeviceRenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeviceRenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderer *op = static_cast<vtkOpenGLRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DeviceRenderTranslucentPolygonalGeometry();
    }
    else
    {
      op->vtkOpenGLRenderer::DeviceRenderTranslucentPolygonalGeometry();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderer_Clear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Clear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderer *op = static_cast<vtkOpenGLRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Clear();
    }
    else
    {
      op->vtkOpenGLRenderer::Clear();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderer_UpdateLights(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateLights");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderer *op = static_cast<vtkOpenGLRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->UpdateLights() :
      op->vtkOpenGLRenderer::UpdateLights());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderer_GetDepthPeelingHigherLayer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDepthPeelingHigherLayer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderer *op = static_cast<vtkOpenGLRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDepthPeelingHigherLayer() :
      op->vtkOpenGLRenderer::GetDepthPeelingHigherLayer());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderer_HaveApplePrimitiveIdBug(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HaveApplePrimitiveIdBug");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderer *op = static_cast<vtkOpenGLRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HaveApplePrimitiveIdBug() :
      op->vtkOpenGLRenderer::HaveApplePrimitiveIdBug());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderer_HaveAppleQueryAllocationBug(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "HaveAppleQueryAllocationBug");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    bool tempr = vtkOpenGLRenderer::HaveAppleQueryAllocationBug();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderer_IsDualDepthPeelingSupported(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsDualDepthPeelingSupported");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderer *op = static_cast<vtkOpenGLRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsDualDepthPeelingSupported() :
      op->vtkOpenGLRenderer::IsDualDepthPeelingSupported());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderer_GetLightingUniforms(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLightingUniforms");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderer *op = static_cast<vtkOpenGLRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetLightingUniforms() :
      op->vtkOpenGLRenderer::GetLightingUniforms());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderer_UpdateLightingUniforms(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateLightingUniforms");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderer *op = static_cast<vtkOpenGLRenderer *>(vp);

  vtkShaderProgram *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkShaderProgram"))
  {
    if (ap.IsBound())
    {
      op->UpdateLightingUniforms(temp0);
    }
    else
    {
      op->vtkOpenGLRenderer::UpdateLightingUniforms(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderer_GetLightingComplexity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLightingComplexity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderer *op = static_cast<vtkOpenGLRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLightingComplexity() :
      op->vtkOpenGLRenderer::GetLightingComplexity());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderer_GetLightingCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLightingCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderer *op = static_cast<vtkOpenGLRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLightingCount() :
      op->vtkOpenGLRenderer::GetLightingCount());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkOpenGLRenderer_Methods[] = {
  {"IsTypeOf", PyvtkOpenGLRenderer_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkOpenGLRenderer_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkOpenGLRenderer_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkOpenGLRenderer\nC++: static vtkOpenGLRenderer *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkOpenGLRenderer_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkOpenGLRenderer\nC++: vtkOpenGLRenderer *NewInstance()\n\n"},
  {"DeviceRender", PyvtkOpenGLRenderer_DeviceRender, METH_VARARGS,
   "V.DeviceRender()\nC++: void DeviceRender(void) override;\n\nConcrete open gl render method.\n"},
  {"DeviceRenderOpaqueGeometry", PyvtkOpenGLRenderer_DeviceRenderOpaqueGeometry, METH_VARARGS,
   "V.DeviceRenderOpaqueGeometry()\nC++: void DeviceRenderOpaqueGeometry() override;\n\nOverridden to support hidden line removal.\n"},
  {"DeviceRenderTranslucentPolygonalGeometry", PyvtkOpenGLRenderer_DeviceRenderTranslucentPolygonalGeometry, METH_VARARGS,
   "V.DeviceRenderTranslucentPolygonalGeometry()\nC++: void DeviceRenderTranslucentPolygonalGeometry() override;\n\nRender translucent polygonal geometry. Default implementation\njust call UpdateTranslucentPolygonalGeometry(). Subclasses of\nvtkRenderer that can deal with depth peeling must override this\nmethod.\n"},
  {"Clear", PyvtkOpenGLRenderer_Clear, METH_VARARGS,
   "V.Clear()\nC++: void Clear(void) override;\n\nClear the image to the background color.\n"},
  {"UpdateLights", PyvtkOpenGLRenderer_UpdateLights, METH_VARARGS,
   "V.UpdateLights() -> int\nC++: int UpdateLights(void) override;\n\nAsk lights to load themselves into graphics pipeline.\n"},
  {"GetDepthPeelingHigherLayer", PyvtkOpenGLRenderer_GetDepthPeelingHigherLayer, METH_VARARGS,
   "V.GetDepthPeelingHigherLayer() -> int\nC++: int GetDepthPeelingHigherLayer()\n\nIs rendering at translucent geometry stage using depth peeling\nand rendering a layer other than the first one? (Boolean value)\nIf so, the uniform variables UseTexture and Texture can be set.\n(Used by vtkOpenGLProperty or vtkOpenGLTexture)\n"},
  {"HaveApplePrimitiveIdBug", PyvtkOpenGLRenderer_HaveApplePrimitiveIdBug, METH_VARARGS,
   "V.HaveApplePrimitiveIdBug() -> bool\nC++: bool HaveApplePrimitiveIdBug()\n\nIndicate if this system is subject to the Apple/AMD bug of not\nhaving a working glPrimitiveId <rdar://20747550>. The bug is\nfixed on macOS 10.11 and later, and this method will return false\nwhen the OS is new enough.\n"},
  {"HaveAppleQueryAllocationBug", PyvtkOpenGLRenderer_HaveAppleQueryAllocationBug, METH_VARARGS,
   "V.HaveAppleQueryAllocationBug() -> bool\nC++: static bool HaveAppleQueryAllocationBug()\n\nIndicate if this system is subject to the apple/NVIDIA bug that\ncauses crashes in the driver when too many query objects are\nallocated.\n"},
  {"IsDualDepthPeelingSupported", PyvtkOpenGLRenderer_IsDualDepthPeelingSupported, METH_VARARGS,
   "V.IsDualDepthPeelingSupported() -> bool\nC++: bool IsDualDepthPeelingSupported()\n\nDual depth peeling may be disabled for certain runtime\nconfigurations. This method returns true if\nvtkDualDepthPeelingPass will be used in place of\nvtkDepthPeelingPass.\n"},
  {"GetLightingUniforms", PyvtkOpenGLRenderer_GetLightingUniforms, METH_VARARGS,
   "V.GetLightingUniforms() -> string\nC++: const char *GetLightingUniforms()\n\n"},
  {"UpdateLightingUniforms", PyvtkOpenGLRenderer_UpdateLightingUniforms, METH_VARARGS,
   "V.UpdateLightingUniforms(vtkShaderProgram)\nC++: void UpdateLightingUniforms(vtkShaderProgram *prog)\n\n"},
  {"GetLightingComplexity", PyvtkOpenGLRenderer_GetLightingComplexity, METH_VARARGS,
   "V.GetLightingComplexity() -> int\nC++: virtual int GetLightingComplexity()\n\n"},
  {"GetLightingCount", PyvtkOpenGLRenderer_GetLightingCount, METH_VARARGS,
   "V.GetLightingCount() -> int\nC++: virtual int GetLightingCount()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkOpenGLRenderer_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingOpenGL2Python.vtkOpenGLRenderer", // tp_name
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
  PyvtkOpenGLRenderer_Doc, // tp_doc
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

static vtkObjectBase *PyvtkOpenGLRenderer_StaticNew()
{
  return vtkOpenGLRenderer::New();
}

PyObject *PyvtkOpenGLRenderer_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkOpenGLRenderer_Type, PyvtkOpenGLRenderer_Methods,
    "vtkOpenGLRenderer",
 &PyvtkOpenGLRenderer_StaticNew);

  PyTypeObject *pytype = &PyvtkOpenGLRenderer_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkRenderer_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkOpenGLRenderer_LightingComplexityEnum_Type);
  PyvtkOpenGLRenderer_LightingComplexityEnum_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkOpenGLRenderer_LightingComplexityEnum_Type);

  o = (PyObject *)&PyvtkOpenGLRenderer_LightingComplexityEnum_Type;
  if (PyDict_SetItemString(d, "LightingComplexityEnum", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 4; c++)
  {
    typedef vtkOpenGLRenderer::LightingComplexityEnum cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[4] = {
        { "NoLighting", vtkOpenGLRenderer::NoLighting },
        { "Headlight", vtkOpenGLRenderer::Headlight },
        { "Directional", vtkOpenGLRenderer::Directional },
        { "Positional", vtkOpenGLRenderer::Positional },
      };

    o = PyvtkOpenGLRenderer_LightingComplexityEnum_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkOpenGLRenderer(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkOpenGLRenderer_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkOpenGLRenderer", o) != 0)
  {
    Py_DECREF(o);
  }

}

