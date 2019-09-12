// python wrapper for vtkImageDivergence
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkImageDivergence.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImageDivergence(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkImageDivergence_ClassNew(); }

#ifndef DECLARED_PyvtkThreadedImageAlgorithm_ClassNew
extern "C" { PyObject *PyvtkThreadedImageAlgorithm_ClassNew(); }
#define DECLARED_PyvtkThreadedImageAlgorithm_ClassNew
#endif

static const char *PyvtkImageDivergence_Doc =
  "vtkImageDivergence - Divergence of a vector field.\n\n"
  "Superclass: vtkThreadedImageAlgorithm\n\n"
  "vtkImageDivergence takes a 3D vector field and creates a scalar field\n"
  "which which represents the rate of change of the vector field. The\n"
  "definition of Divergence: Given V = P(x,y,z), Q(x,y,z), R(x,y,z),\n"
  "Divergence = dP/dx + dQ/dy + dR/dz.\n\n";


static PyObject *
PyvtkImageDivergence_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImageDivergence::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageDivergence_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDivergence *op = static_cast<vtkImageDivergence *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageDivergence::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageDivergence_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImageDivergence *tempr = vtkImageDivergence::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageDivergence_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDivergence *op = static_cast<vtkImageDivergence *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageDivergence *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageDivergence::NewInstance());

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

static PyMethodDef PyvtkImageDivergence_Methods[] = {
  {"IsTypeOf", PyvtkImageDivergence_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImageDivergence_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImageDivergence_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkImageDivergence\nC++: static vtkImageDivergence *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImageDivergence_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkImageDivergence\nC++: vtkImageDivergence *NewInstance()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkImageDivergence_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkImagingMathPython.vtkImageDivergence", // tp_name
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
  PyvtkImageDivergence_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImageDivergence_StaticNew()
{
  return vtkImageDivergence::New();
}

PyObject *PyvtkImageDivergence_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkImageDivergence_Type, PyvtkImageDivergence_Methods,
    "vtkImageDivergence",
 &PyvtkImageDivergence_StaticNew);

  PyTypeObject *pytype = &PyvtkImageDivergence_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkThreadedImageAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkImageDivergence(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImageDivergence_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImageDivergence", o) != 0)
  {
    Py_DECREF(o);
  }

}

