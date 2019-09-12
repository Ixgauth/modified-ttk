// python wrapper for vtkRenderState
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkProp.h"
#include "vtkRenderState.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkRenderState(PyObject *); }

static const char *PyvtkRenderState_Doc =
  "vtkRenderState - Context in which a vtkRenderPass will render.\n\n"
  "vtkRenderState is a ligthweight effective class which gather\n"
  "information used by a vtkRenderPass to perform its\n"
  "execution.@attention Get methods are const to enforce that a\n"
  "renderpass cannot modify the RenderPass object. It works in\n"
  "conjunction with vtkRenderPass::Render where the argument\n"
  "vtkRenderState is const.\n"
  "@sa\n"
  "vtkRenderPass vtkRenderer vtkFrameBufferObject vtkProp\n\n"
  "vtkRenderState(vtkRenderer *renderer)\n";


static PyObject *
PyvtkRenderState_IsValid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsValid");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkRenderState *op = static_cast<vtkRenderState *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = op->IsValid();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderState_GetRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderer");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkRenderState *op = static_cast<vtkRenderState *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderer *tempr = op->GetRenderer();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderState_GetFrameBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFrameBuffer");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkRenderState *op = static_cast<vtkRenderState *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkFrameBufferObjectBase *tempr = op->GetFrameBuffer();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderState_SetFrameBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFrameBuffer");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkRenderState *op = static_cast<vtkRenderState *>(vp);

  vtkFrameBufferObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkFrameBufferObjectBase"))
  {
    op->SetFrameBuffer(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderState_GetWindowSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWindowSize");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkRenderState *op = static_cast<vtkRenderState *>(vp);

  const size_t size0 = 2;
  int temp0[2];
  int save0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    op->GetWindowSize(temp0);

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
PyvtkRenderState_GetPropArrayCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPropArrayCount");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkRenderState *op = static_cast<vtkRenderState *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = op->GetPropArrayCount();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderState_GetRequiredKeys(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRequiredKeys");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkRenderState *op = static_cast<vtkRenderState *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkInformation *tempr = op->GetRequiredKeys();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderState_SetRequiredKeys(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRequiredKeys");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkRenderState *op = static_cast<vtkRenderState *>(vp);

  vtkInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
  {
    op->SetRequiredKeys(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkRenderState_Methods[] = {
  {"IsValid", PyvtkRenderState_IsValid, METH_VARARGS,
   "V.IsValid() -> bool\nC++: bool IsValid()\n\nTells if the RenderState is a valid one (Renderer is not null).\n"},
  {"GetRenderer", PyvtkRenderState_GetRenderer, METH_VARARGS,
   "V.GetRenderer() -> vtkRenderer\nC++: vtkRenderer *GetRenderer()\n\nReturn the Renderer. This is the renderer in which the render\npass is performed. It gives access to the RenderWindow, to the\nprops.\n\\post result_exists: result!=0\n"},
  {"GetFrameBuffer", PyvtkRenderState_GetFrameBuffer, METH_VARARGS,
   "V.GetFrameBuffer() -> vtkFrameBufferObjectBase\nC++: vtkFrameBufferObjectBase *GetFrameBuffer()\n\nReturn the FrameBuffer. This is the framebuffer in use. NULL\nmeans it is the FrameBuffer provided by the RenderWindow (it can\nactually be an FBO in case the RenderWindow is in off screen\nmode).\n"},
  {"SetFrameBuffer", PyvtkRenderState_SetFrameBuffer, METH_VARARGS,
   "V.SetFrameBuffer(vtkFrameBufferObjectBase)\nC++: void SetFrameBuffer(vtkFrameBufferObjectBase *fbo)\n\nSet the FrameBuffer. See GetFrameBuffer().\n\\post is_set: GetFrameBuffer()==fbo\n"},
  {"GetWindowSize", PyvtkRenderState_GetWindowSize, METH_VARARGS,
   "V.GetWindowSize([int, int])\nC++: void GetWindowSize(int size[2])\n\nGet the window size of the state.\n"},
  {"GetPropArrayCount", PyvtkRenderState_GetPropArrayCount, METH_VARARGS,
   "V.GetPropArrayCount() -> int\nC++: int GetPropArrayCount()\n\nReturn the size of the array of filtered props. See\nSetPropArrayAndCount().\n\\post positive_result: result>=0\n"},
  {"GetRequiredKeys", PyvtkRenderState_GetRequiredKeys, METH_VARARGS,
   "V.GetRequiredKeys() -> vtkInformation\nC++: vtkInformation *GetRequiredKeys()\n\nReturn the required property keys for the props. It tells that\nthe current render pass it supposed to render only props that\nhave all the RequiredKeys in their property keys.\n"},
  {"SetRequiredKeys", PyvtkRenderState_SetRequiredKeys, METH_VARARGS,
   "V.SetRequiredKeys(vtkInformation)\nC++: void SetRequiredKeys(vtkInformation *keys)\n\nSet the required property keys for the props. See\nGetRequiredKeys().\n\\post is_set: GetRequiredKeys()==keys\n"},
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkRenderState_vtkRenderState(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkRenderState");

  vtkRenderer *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
  {
    vtkRenderState *op = new vtkRenderState(temp0);

    result = PyVTKSpecialObject_New("vtkRenderState", op);
  }

  return result;
}

static PyMethodDef PyvtkRenderState_vtkRenderState_Methods[] = {
  {nullptr, PyvtkRenderState_vtkRenderState, METH_VARARGS,
   "@V *vtkRenderer"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkRenderState_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkRenderState_vtkRenderState(nullptr, args);
}

static void PyvtkRenderState_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkRenderState *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkRenderState_Hash(PyObject *self)
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

static PyTypeObject PyvtkRenderState_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingCorePython.vtkRenderState", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkRenderState_Delete, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkRenderState_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkRenderState_Doc, // tp_doc
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
  PyvtkRenderState_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkRenderState_TypeNew(); }

PyObject *PyvtkRenderState_TypeNew()
{
  PyVTKSpecialType_Add(
    &PyvtkRenderState_Type,
    PyvtkRenderState_Methods,
    PyvtkRenderState_vtkRenderState_Methods,
    nullptr);

  PyTypeObject *pytype = &PyvtkRenderState_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkRenderState(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkRenderState_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkRenderState", o) != 0)
  {
    Py_DECREF(o);
  }

}

