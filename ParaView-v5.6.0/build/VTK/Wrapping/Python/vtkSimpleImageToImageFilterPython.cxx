// python wrapper for vtkSimpleImageToImageFilter
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
#include "vtkSimpleImageToImageFilter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSimpleImageToImageFilter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSimpleImageToImageFilter_ClassNew(); }

#ifndef DECLARED_PyvtkImageAlgorithm_ClassNew
extern "C" { PyObject *PyvtkImageAlgorithm_ClassNew(); }
#define DECLARED_PyvtkImageAlgorithm_ClassNew
#endif

static const char *PyvtkSimpleImageToImageFilter_Doc =
  "vtkSimpleImageToImageFilter - Generic image filter with one input.\n\n"
  "Superclass: vtkImageAlgorithm\n\n"
  "vtkSimpleImageToImageFilter is a filter which aims to avoid much of\n"
  "the complexity associated with vtkImageAlgorithm (i.e. support for\n"
  "pieces, multi-threaded operation). If you need to write a simple\n"
  "image-image filter which operates on the whole input, use this as the\n"
  "superclass. The subclass has to provide only an execute method which\n"
  "takes input and output as arguments. Memory allocation is handled in\n"
  "vtkSimpleImageToImageFilter. Also, you are guaranteed to have a valid\n"
  "input in the Execute(input, output) method. By default, this filter\n"
  "requests it's input's whole extent and copies the input's information\n"
  "(spacing, whole extent etc...) to the output. If the output's setup\n"
  "is different (for example, if it performs some sort of sub-sampling),\n"
  "ExecuteInformation has to be overwritten. As an example of how this\n"
  "can be done, you can look at vtkImageShrink3D::ExecuteInformation.\n"
  "For a complete example which uses templates to support generic data\n"
  "types, see vtkSimpleImageToImageFilter.\n\n"
  "@sa\n"
  "vtkImageAlgorithm vtkSimpleImageFilterExample\n\n";


static PyObject *
PyvtkSimpleImageToImageFilter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSimpleImageToImageFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSimpleImageToImageFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleImageToImageFilter *op = static_cast<vtkSimpleImageToImageFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSimpleImageToImageFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSimpleImageToImageFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSimpleImageToImageFilter *tempr = vtkSimpleImageToImageFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSimpleImageToImageFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleImageToImageFilter *op = static_cast<vtkSimpleImageToImageFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSimpleImageToImageFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSimpleImageToImageFilter::NewInstance());

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

static PyMethodDef PyvtkSimpleImageToImageFilter_Methods[] = {
  {"IsTypeOf", PyvtkSimpleImageToImageFilter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSimpleImageToImageFilter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSimpleImageToImageFilter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSimpleImageToImageFilter\nC++: static vtkSimpleImageToImageFilter *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSimpleImageToImageFilter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSimpleImageToImageFilter\nC++: vtkSimpleImageToImageFilter *NewInstance()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSimpleImageToImageFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonExecutionModelPython.vtkSimpleImageToImageFilter", // tp_name
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
  PyvtkSimpleImageToImageFilter_Doc, // tp_doc
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

PyObject *PyvtkSimpleImageToImageFilter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSimpleImageToImageFilter_Type, PyvtkSimpleImageToImageFilter_Methods,
    "vtkSimpleImageToImageFilter",
 nullptr);

  PyTypeObject *pytype = &PyvtkSimpleImageToImageFilter_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkImageAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSimpleImageToImageFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSimpleImageToImageFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSimpleImageToImageFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

