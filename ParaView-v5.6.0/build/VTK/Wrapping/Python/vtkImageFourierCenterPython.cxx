// python wrapper for vtkImageFourierCenter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkImageFourierCenter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImageFourierCenter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkImageFourierCenter_ClassNew(); }

#ifndef DECLARED_PyvtkImageDecomposeFilter_ClassNew
extern "C" { PyObject *PyvtkImageDecomposeFilter_ClassNew(); }
#define DECLARED_PyvtkImageDecomposeFilter_ClassNew
#endif

static const char *PyvtkImageFourierCenter_Doc =
  "vtkImageFourierCenter - Shifts constant frequency to center for\ndisplay.\n\n"
  "Superclass: vtkImageDecomposeFilter\n\n"
  "Is used for dispaying images in frequency space.  FFT converts\n"
  "spatial images into frequency space, but puts the zero frequency at\n"
  "the origin. This filter shifts the zero frequency to the center of\n"
  "the image. Input and output are assumed to be doubles.\n\n";


static PyObject *
PyvtkImageFourierCenter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImageFourierCenter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageFourierCenter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageFourierCenter *op = static_cast<vtkImageFourierCenter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageFourierCenter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageFourierCenter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImageFourierCenter *tempr = vtkImageFourierCenter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageFourierCenter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageFourierCenter *op = static_cast<vtkImageFourierCenter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageFourierCenter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageFourierCenter::NewInstance());

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

static PyMethodDef PyvtkImageFourierCenter_Methods[] = {
  {"IsTypeOf", PyvtkImageFourierCenter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nConstruct an instance of vtkImageDecomposeFilter filter with\ndefault dimensionality 3.\n"},
  {"IsA", PyvtkImageFourierCenter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nConstruct an instance of vtkImageDecomposeFilter filter with\ndefault dimensionality 3.\n"},
  {"SafeDownCast", PyvtkImageFourierCenter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkImageFourierCenter\nC++: static vtkImageFourierCenter *SafeDownCast(vtkObjectBase *o)\n\nConstruct an instance of vtkImageDecomposeFilter filter with\ndefault dimensionality 3.\n"},
  {"NewInstance", PyvtkImageFourierCenter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkImageFourierCenter\nC++: vtkImageFourierCenter *NewInstance()\n\nConstruct an instance of vtkImageDecomposeFilter filter with\ndefault dimensionality 3.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkImageFourierCenter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkImagingFourierPython.vtkImageFourierCenter", // tp_name
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
  PyvtkImageFourierCenter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImageFourierCenter_StaticNew()
{
  return vtkImageFourierCenter::New();
}

PyObject *PyvtkImageFourierCenter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkImageFourierCenter_Type, PyvtkImageFourierCenter_Methods,
    "vtkImageFourierCenter",
 &PyvtkImageFourierCenter_StaticNew);

  PyTypeObject *pytype = &PyvtkImageFourierCenter_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkImageDecomposeFilter_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkImageFourierCenter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImageFourierCenter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImageFourierCenter", o) != 0)
  {
    Py_DECREF(o);
  }

}

