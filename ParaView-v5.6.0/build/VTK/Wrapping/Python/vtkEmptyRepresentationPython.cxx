// python wrapper for vtkEmptyRepresentation
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
#include "vtkEmptyRepresentation.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkEmptyRepresentation(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkEmptyRepresentation_ClassNew(); }

#ifndef DECLARED_PyvtkDataRepresentation_ClassNew
extern "C" { PyObject *PyvtkDataRepresentation_ClassNew(); }
#define DECLARED_PyvtkDataRepresentation_ClassNew
#endif

static const char *PyvtkEmptyRepresentation_Doc =
  "vtkEmptyRepresentation - \n\n"
  "Superclass: vtkDataRepresentation\n\n"
;


static PyObject *
PyvtkEmptyRepresentation_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkEmptyRepresentation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEmptyRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEmptyRepresentation *op = static_cast<vtkEmptyRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkEmptyRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEmptyRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkEmptyRepresentation *tempr = vtkEmptyRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEmptyRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEmptyRepresentation *op = static_cast<vtkEmptyRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkEmptyRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkEmptyRepresentation::NewInstance());

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
PyvtkEmptyRepresentation_GetInternalAnnotationOutputPort_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInternalAnnotationOutputPort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEmptyRepresentation *op = static_cast<vtkEmptyRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAlgorithmOutput *tempr = (ap.IsBound() ?
      op->GetInternalAnnotationOutputPort() :
      op->vtkEmptyRepresentation::GetInternalAnnotationOutputPort());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkEmptyRepresentation_GetInternalAnnotationOutputPort_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInternalAnnotationOutputPort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEmptyRepresentation *op = static_cast<vtkEmptyRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkAlgorithmOutput *tempr = (ap.IsBound() ?
      op->GetInternalAnnotationOutputPort(temp0) :
      op->vtkEmptyRepresentation::GetInternalAnnotationOutputPort(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkEmptyRepresentation_GetInternalAnnotationOutputPort_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInternalAnnotationOutputPort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEmptyRepresentation *op = static_cast<vtkEmptyRepresentation *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkAlgorithmOutput *tempr = (ap.IsBound() ?
      op->GetInternalAnnotationOutputPort(temp0, temp1) :
      op->vtkEmptyRepresentation::GetInternalAnnotationOutputPort(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkEmptyRepresentation_GetInternalAnnotationOutputPort(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkEmptyRepresentation_GetInternalAnnotationOutputPort_s1(self, args);
    case 1:
      return PyvtkEmptyRepresentation_GetInternalAnnotationOutputPort_s2(self, args);
    case 2:
      return PyvtkEmptyRepresentation_GetInternalAnnotationOutputPort_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetInternalAnnotationOutputPort");
  return nullptr;
}


static PyMethodDef PyvtkEmptyRepresentation_Methods[] = {
  {"IsTypeOf", PyvtkEmptyRepresentation_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkEmptyRepresentation_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkEmptyRepresentation_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkEmptyRepresentation\nC++: static vtkEmptyRepresentation *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkEmptyRepresentation_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkEmptyRepresentation\nC++: vtkEmptyRepresentation *NewInstance()\n\n"},
  {"GetInternalAnnotationOutputPort", PyvtkEmptyRepresentation_GetInternalAnnotationOutputPort, METH_VARARGS,
   "V.GetInternalAnnotationOutputPort() -> vtkAlgorithmOutput\nC++: vtkAlgorithmOutput *GetInternalAnnotationOutputPort()\n    override;\nV.GetInternalAnnotationOutputPort(int) -> vtkAlgorithmOutput\nC++: vtkAlgorithmOutput *GetInternalAnnotationOutputPort(int port)\n     override;\nV.GetInternalAnnotationOutputPort(int, int) -> vtkAlgorithmOutput\nC++: vtkAlgorithmOutput *GetInternalAnnotationOutputPort(int port,\n     int conn) override;\n\nSince this representation has no inputs, override superclass\nimplementation with one that ignores \"port\" and \"conn\" and still\nallows it to have an annotation output.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkEmptyRepresentation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkViewsCorePython.vtkEmptyRepresentation", // tp_name
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
  PyvtkEmptyRepresentation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkEmptyRepresentation_StaticNew()
{
  return vtkEmptyRepresentation::New();
}

PyObject *PyvtkEmptyRepresentation_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkEmptyRepresentation_Type, PyvtkEmptyRepresentation_Methods,
    "vtkEmptyRepresentation",
 &PyvtkEmptyRepresentation_StaticNew);

  PyTypeObject *pytype = &PyvtkEmptyRepresentation_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkDataRepresentation_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkEmptyRepresentation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkEmptyRepresentation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkEmptyRepresentation", o) != 0)
  {
    Py_DECREF(o);
  }

}

