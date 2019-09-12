// python wrapper for vtkSurfaceLICComposite
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
#include "vtkPixelExtent.h"
#include "vtkTextureObject.h"
#include "vtkSurfaceLICComposite.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSurfaceLICComposite(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSurfaceLICComposite_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkSurfaceLICComposite_Doc =
  "vtkSurfaceLICComposite - This class decomposes the image space and\nshuffles image space data onto the new decomposition with the\nnecessary guard cells to prevent artifacts at the decomposition\nboundaries.\n\n"
  "Superclass: vtkObject\n\n"
  "After the image LIC is computed on the new decomposition this class\n"
  "will un-shuffle the computed LIC back onto the original decomposition\n\n";


static PyObject *
PyvtkSurfaceLICComposite_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSurfaceLICComposite::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICComposite_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICComposite *op = static_cast<vtkSurfaceLICComposite *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSurfaceLICComposite::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICComposite_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSurfaceLICComposite *tempr = vtkSurfaceLICComposite::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICComposite_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICComposite *op = static_cast<vtkSurfaceLICComposite *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSurfaceLICComposite *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSurfaceLICComposite::NewInstance());

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
PyvtkSurfaceLICComposite_SetStrategy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStrategy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICComposite *op = static_cast<vtkSurfaceLICComposite *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetStrategy(temp0);
    }
    else
    {
      op->vtkSurfaceLICComposite::SetStrategy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICComposite_GetStrategy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStrategy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICComposite *op = static_cast<vtkSurfaceLICComposite *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetStrategy() :
      op->vtkSurfaceLICComposite::GetStrategy());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICComposite_GetNumberOfCompositeExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCompositeExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICComposite *op = static_cast<vtkSurfaceLICComposite *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfCompositeExtents() :
      op->vtkSurfaceLICComposite::GetNumberOfCompositeExtents());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICComposite_GetGuardExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGuardExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICComposite *op = static_cast<vtkSurfaceLICComposite *>(vp);

  int temp0 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    const vtkPixelExtent *tempr = (ap.IsBound() ?
      &op->GetGuardExtent(temp0) :
      &op->vtkSurfaceLICComposite::GetGuardExtent(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(tempr, "vtkPixelExtent");
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICComposite_GetDisjointGuardExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisjointGuardExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICComposite *op = static_cast<vtkSurfaceLICComposite *>(vp);

  int temp0 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    const vtkPixelExtent *tempr = (ap.IsBound() ?
      &op->GetDisjointGuardExtent(temp0) :
      &op->vtkSurfaceLICComposite::GetDisjointGuardExtent(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(tempr, "vtkPixelExtent");
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICComposite_GetCompositeExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCompositeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICComposite *op = static_cast<vtkSurfaceLICComposite *>(vp);

  int temp0 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    const vtkPixelExtent *tempr = (ap.IsBound() ?
      &op->GetCompositeExtent(temp0) :
      &op->vtkSurfaceLICComposite::GetCompositeExtent(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(tempr, "vtkPixelExtent");
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICComposite_GetDataSetExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataSetExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICComposite *op = static_cast<vtkSurfaceLICComposite *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const vtkPixelExtent *tempr = (ap.IsBound() ?
      &op->GetDataSetExtent() :
      &op->vtkSurfaceLICComposite::GetDataSetExtent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(tempr, "vtkPixelExtent");
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICComposite_GetWindowExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWindowExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICComposite *op = static_cast<vtkSurfaceLICComposite *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const vtkPixelExtent *tempr = (ap.IsBound() ?
      &op->GetWindowExtent() :
      &op->vtkSurfaceLICComposite::GetWindowExtent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(tempr, "vtkPixelExtent");
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICComposite_InitializeCompositeExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitializeCompositeExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICComposite *op = static_cast<vtkSurfaceLICComposite *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<float> store0(2*size0);
  float *temp0 = store0.Data();
  float *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->InitializeCompositeExtents(temp0) :
      op->vtkSurfaceLICComposite::InitializeCompositeExtents(temp0));

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICComposite_SetContext(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetContext");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICComposite *op = static_cast<vtkSurfaceLICComposite *>(vp);

  vtkOpenGLRenderWindow *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkOpenGLRenderWindow"))
  {
    if (ap.IsBound())
    {
      op->SetContext(temp0);
    }
    else
    {
      op->vtkSurfaceLICComposite::SetContext(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICComposite_GetContext(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContext");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICComposite *op = static_cast<vtkSurfaceLICComposite *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkOpenGLRenderWindow *tempr = (ap.IsBound() ?
      op->GetContext() :
      op->vtkSurfaceLICComposite::GetContext());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICComposite_RestoreDefaultCommunicator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RestoreDefaultCommunicator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICComposite *op = static_cast<vtkSurfaceLICComposite *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RestoreDefaultCommunicator();
    }
    else
    {
      op->vtkSurfaceLICComposite::RestoreDefaultCommunicator();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICComposite_BuildProgram(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildProgram");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICComposite *op = static_cast<vtkSurfaceLICComposite *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<float> store0(2*size0);
  float *temp0 = store0.Data();
  float *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->BuildProgram(temp0) :
      op->vtkSurfaceLICComposite::BuildProgram(temp0));

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSurfaceLICComposite_Methods[] = {
  {"IsTypeOf", PyvtkSurfaceLICComposite_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSurfaceLICComposite_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSurfaceLICComposite_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSurfaceLICComposite\nC++: static vtkSurfaceLICComposite *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSurfaceLICComposite_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSurfaceLICComposite\nC++: vtkSurfaceLICComposite *NewInstance()\n\n"},
  {"SetStrategy", PyvtkSurfaceLICComposite_SetStrategy, METH_VARARGS,
   "V.SetStrategy(int)\nC++: void SetStrategy(int val)\n\n"},
  {"GetStrategy", PyvtkSurfaceLICComposite_GetStrategy, METH_VARARGS,
   "V.GetStrategy() -> int\nC++: int GetStrategy()\n\n"},
  {"GetNumberOfCompositeExtents", PyvtkSurfaceLICComposite_GetNumberOfCompositeExtents, METH_VARARGS,
   "V.GetNumberOfCompositeExtents() -> int\nC++: int GetNumberOfCompositeExtents()\n\nGet the number of new extents assigned to this rank after the\ndecomposition.\n"},
  {"GetGuardExtent", PyvtkSurfaceLICComposite_GetGuardExtent, METH_VARARGS,
   "V.GetGuardExtent(int) -> vtkPixelExtent\nC++: const vtkPixelExtent &GetGuardExtent(int i=0)\n\nGet the extent of the domain over which to compute the LIC. This\ncan be querried only after the Composite takes place.\n"},
  {"GetDisjointGuardExtent", PyvtkSurfaceLICComposite_GetDisjointGuardExtent, METH_VARARGS,
   "V.GetDisjointGuardExtent(int) -> vtkPixelExtent\nC++: const vtkPixelExtent &GetDisjointGuardExtent(int i=0)\n\nGet the extent of the domain over which to compute the LIC. This\ncan be querried only after the Composite takes place.\n"},
  {"GetCompositeExtent", PyvtkSurfaceLICComposite_GetCompositeExtent, METH_VARARGS,
   "V.GetCompositeExtent(int) -> vtkPixelExtent\nC++: const vtkPixelExtent &GetCompositeExtent(int i=0)\n\nGet the extent of the domain over which to compute the LIC. This\ncan be querried only after the Composite takes place.\n"},
  {"GetDataSetExtent", PyvtkSurfaceLICComposite_GetDataSetExtent, METH_VARARGS,
   "V.GetDataSetExtent() -> vtkPixelExtent\nC++: const vtkPixelExtent &GetDataSetExtent()\n\nGet the whole dataset extent (all blocks).\n"},
  {"GetWindowExtent", PyvtkSurfaceLICComposite_GetWindowExtent, METH_VARARGS,
   "V.GetWindowExtent() -> vtkPixelExtent\nC++: const vtkPixelExtent &GetWindowExtent()\n\nGet the whole window extent.\n"},
  {"InitializeCompositeExtents", PyvtkSurfaceLICComposite_InitializeCompositeExtents, METH_VARARGS,
   "V.InitializeCompositeExtents([float, ...]) -> int\nC++: int InitializeCompositeExtents(float *vectors)\n\nSet up for a serial run, makes the decomp disjoint and adds\nrequisite guard pixles.\n"},
  {"SetContext", PyvtkSurfaceLICComposite_SetContext, METH_VARARGS,
   "V.SetContext(vtkOpenGLRenderWindow)\nC++: virtual void SetContext(vtkOpenGLRenderWindow *)\n\nSet the rendering context. Must set prior to use. Reference is\nnot held, so caller must ensure the renderer is not destroyed\nduring use.\n"},
  {"GetContext", PyvtkSurfaceLICComposite_GetContext, METH_VARARGS,
   "V.GetContext() -> vtkOpenGLRenderWindow\nC++: virtual vtkOpenGLRenderWindow *GetContext()\n\n"},
  {"RestoreDefaultCommunicator", PyvtkSurfaceLICComposite_RestoreDefaultCommunicator, METH_VARARGS,
   "V.RestoreDefaultCommunicator()\nC++: virtual void RestoreDefaultCommunicator()\n\nSet the communicator to the default communicator\n"},
  {"BuildProgram", PyvtkSurfaceLICComposite_BuildProgram, METH_VARARGS,
   "V.BuildProgram([float, ...]) -> int\nC++: virtual int BuildProgram(float *)\n\nBuild programs to move data to the new decomp In parallel THIS IS\nA COLLECTIVE OPERATION\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSurfaceLICComposite_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingLICOpenGL2Python.vtkSurfaceLICComposite", // tp_name
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
  PyvtkSurfaceLICComposite_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSurfaceLICComposite_StaticNew()
{
  return vtkSurfaceLICComposite::New();
}

PyObject *PyvtkSurfaceLICComposite_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSurfaceLICComposite_Type, PyvtkSurfaceLICComposite_Methods,
    "vtkSurfaceLICComposite",
 &PyvtkSurfaceLICComposite_StaticNew);

  PyTypeObject *pytype = &PyvtkSurfaceLICComposite_Type;

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

  for (int c = 0; c < 4; c++)
  {
    static const struct { const char *name; int value; }
      constants[4] = {
        { "COMPOSITE_INPLACE", vtkSurfaceLICComposite::COMPOSITE_INPLACE },
        { "COMPOSITE_INPLACE_DISJOINT", vtkSurfaceLICComposite::COMPOSITE_INPLACE_DISJOINT },
        { "COMPOSITE_BALANCED", vtkSurfaceLICComposite::COMPOSITE_BALANCED },
        { "COMPOSITE_AUTO", vtkSurfaceLICComposite::COMPOSITE_AUTO },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSurfaceLICComposite(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSurfaceLICComposite_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSurfaceLICComposite", o) != 0)
  {
    Py_DECREF(o);
  }

}

