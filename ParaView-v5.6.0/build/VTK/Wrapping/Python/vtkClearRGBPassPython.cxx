// python wrapper for vtkClearRGBPass
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
#include "vtkClearRGBPass.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkClearRGBPass(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkClearRGBPass_ClassNew(); }

#ifndef DECLARED_PyvtkRenderPass_ClassNew
extern "C" { PyObject *PyvtkRenderPass_ClassNew(); }
#define DECLARED_PyvtkRenderPass_ClassNew
#endif

static const char *PyvtkClearRGBPass_Doc =
  "vtkClearRGBPass - Paint in the color buffer.\n\n"
  "Superclass: vtkRenderPass\n\n"
  "Clear the color buffer to the specified color.\n\n"
  "@sa\n"
  "vtkValuePasses\n\n";


static PyObject *
PyvtkClearRGBPass_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkClearRGBPass::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClearRGBPass_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClearRGBPass *op = static_cast<vtkClearRGBPass *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkClearRGBPass::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClearRGBPass_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkClearRGBPass *tempr = vtkClearRGBPass::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClearRGBPass_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClearRGBPass *op = static_cast<vtkClearRGBPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkClearRGBPass *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkClearRGBPass::NewInstance());

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
PyvtkClearRGBPass_SetBackground_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackground");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClearRGBPass *op = static_cast<vtkClearRGBPass *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetBackground(temp0, temp1, temp2);
    }
    else
    {
      op->vtkClearRGBPass::SetBackground(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkClearRGBPass_SetBackground_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackground");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClearRGBPass *op = static_cast<vtkClearRGBPass *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetBackground(temp0);
    }
    else
    {
      op->vtkClearRGBPass::SetBackground(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkClearRGBPass_SetBackground(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkClearRGBPass_SetBackground_s1(self, args);
    case 1:
      return PyvtkClearRGBPass_SetBackground_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetBackground");
  return nullptr;
}



static PyObject *
PyvtkClearRGBPass_GetBackground(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBackground");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClearRGBPass *op = static_cast<vtkClearRGBPass *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBackground() :
      op->vtkClearRGBPass::GetBackground());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyMethodDef PyvtkClearRGBPass_Methods[] = {
  {"IsTypeOf", PyvtkClearRGBPass_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkClearRGBPass_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkClearRGBPass_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkClearRGBPass\nC++: static vtkClearRGBPass *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkClearRGBPass_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkClearRGBPass\nC++: vtkClearRGBPass *NewInstance()\n\n"},
  {"SetBackground", PyvtkClearRGBPass_SetBackground, METH_VARARGS,
   "V.SetBackground(float, float, float)\nC++: void SetBackground(double, double, double)\nV.SetBackground((float, float, float))\nC++: void SetBackground(double a[3])\n\n"},
  {"GetBackground", PyvtkClearRGBPass_GetBackground, METH_VARARGS,
   "V.GetBackground() -> (float, float, float)\nC++: double *GetBackground()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkClearRGBPass_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingOpenGL2Python.vtkClearRGBPass", // tp_name
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
  PyvtkClearRGBPass_Doc, // tp_doc
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

static vtkObjectBase *PyvtkClearRGBPass_StaticNew()
{
  return vtkClearRGBPass::New();
}

PyObject *PyvtkClearRGBPass_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkClearRGBPass_Type, PyvtkClearRGBPass_Methods,
    "vtkClearRGBPass",
 &PyvtkClearRGBPass_StaticNew);

  PyTypeObject *pytype = &PyvtkClearRGBPass_Type;

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

void PyVTKAddFile_vtkClearRGBPass(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkClearRGBPass_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkClearRGBPass", o) != 0)
  {
    Py_DECREF(o);
  }

}

