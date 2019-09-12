// python wrapper for vtkOpenGLQuadHelper
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkOpenGLQuadHelper.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkOpenGLQuadHelper(PyObject *); }

static const char *PyvtkOpenGLQuadHelper_Doc =
  "vtkOpenGLQuadHelper - Class to make rendering a full screen quad\neasier\n\n"
  "vtkOpenGLQuadHelper is designed to be used by classes in VTK that\n"
  "need to render a quad to the screen with a shader program. This\n"
  "happens often with render passes or other advanced rendering\n"
  "techniques.\n\n"
  "Note that when releasing graphics resources instances of this class\n"
  "should be destroyed. A common use pattern is to conditionally create\n"
  "the instance where used and delete it in ReleaseGraphicsResources and\n"
  "the destructor.\n\n"
  "Example usage:if (!this->QuadHelper)\n"
  "{\n"
  "  this->QuadHelper = vtkOpenGLQualHelper(renWin, vs, fs, gs);\n"
  "}\n"
  "renWin->GetShaderCache()->ReadyShaderProgram(this->QuadHelper->Program\n"
  ");\n"
  "aTexture->Activate();\n"
  "this->QuadHelper->Program->SetUniformi(\"aTexture\",\n"
  "aTexture->GetTextureUnit());\n"
  "this->QuadHelper->Render();\n"
  "aTexture->Deactivate();\n\n"
  "@sa vtkOpenGLRenderUtilities\n\n"
  "vtkOpenGLQuadHelper(vtkOpenGLRenderWindow *, const char *vs,\n    const char *fs, const char *gs)\n";


static PyObject *
PyvtkOpenGLQuadHelper_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkOpenGLQuadHelper *op = static_cast<vtkOpenGLQuadHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    op->Render();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkOpenGLQuadHelper_Methods[] = {
  {"Render", PyvtkOpenGLQuadHelper_Render, METH_VARARGS,
   "V.Render()\nC++: void Render()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkOpenGLQuadHelper_vtkOpenGLQuadHelper(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkOpenGLQuadHelper");

  vtkOpenGLRenderWindow *temp0 = nullptr;
  const char *temp1 = nullptr;
  const char *temp2 = nullptr;
  const char *temp3 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkOpenGLRenderWindow") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    vtkOpenGLQuadHelper *op = new vtkOpenGLQuadHelper(temp0, temp1, temp2, temp3);

    result = PyVTKSpecialObject_New("vtkOpenGLQuadHelper", op);
  }

  return result;
}

static PyMethodDef PyvtkOpenGLQuadHelper_vtkOpenGLQuadHelper_Methods[] = {
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkOpenGLQuadHelper_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkOpenGLQuadHelper_vtkOpenGLQuadHelper(nullptr, args);
}

static void PyvtkOpenGLQuadHelper_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkOpenGLQuadHelper *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkOpenGLQuadHelper_Hash(PyObject *self)
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

static PyTypeObject PyvtkOpenGLQuadHelper_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingOpenGL2Python.vtkOpenGLQuadHelper", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkOpenGLQuadHelper_Delete, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkOpenGLQuadHelper_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkOpenGLQuadHelper_Doc, // tp_doc
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
  PyvtkOpenGLQuadHelper_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkOpenGLQuadHelper_TypeNew(); }

PyObject *PyvtkOpenGLQuadHelper_TypeNew()
{
  PyVTKSpecialType_Add(
    &PyvtkOpenGLQuadHelper_Type,
    PyvtkOpenGLQuadHelper_Methods,
    PyvtkOpenGLQuadHelper_vtkOpenGLQuadHelper_Methods,
    nullptr);

  PyTypeObject *pytype = &PyvtkOpenGLQuadHelper_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkOpenGLQuadHelper(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkOpenGLQuadHelper_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkOpenGLQuadHelper", o) != 0)
  {
    Py_DECREF(o);
  }

}

