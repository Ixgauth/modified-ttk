// python wrapper for vtkImageDataStreamer
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
#include "vtkInformationVector.h"
#include "vtkImageDataStreamer.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImageDataStreamer(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkImageDataStreamer_ClassNew(); }

#ifndef DECLARED_PyvtkImageAlgorithm_ClassNew
extern "C" { PyObject *PyvtkImageAlgorithm_ClassNew(); }
#define DECLARED_PyvtkImageAlgorithm_ClassNew
#endif

static const char *PyvtkImageDataStreamer_Doc =
  "vtkImageDataStreamer - Initiates streaming on image data.\n\n"
  "Superclass: vtkImageAlgorithm\n\n"
  "To satisfy a request, this filter calls update on its input many\n"
  "times with smaller update extents.  All processing up stream streams\n"
  "smaller pieces.\n\n";


static PyObject *
PyvtkImageDataStreamer_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImageDataStreamer::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageDataStreamer_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataStreamer *op = static_cast<vtkImageDataStreamer *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageDataStreamer::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageDataStreamer_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImageDataStreamer *tempr = vtkImageDataStreamer::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageDataStreamer_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataStreamer *op = static_cast<vtkImageDataStreamer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageDataStreamer *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageDataStreamer::NewInstance());

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
PyvtkImageDataStreamer_SetNumberOfStreamDivisions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfStreamDivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataStreamer *op = static_cast<vtkImageDataStreamer *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfStreamDivisions(temp0);
    }
    else
    {
      op->vtkImageDataStreamer::SetNumberOfStreamDivisions(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageDataStreamer_GetNumberOfStreamDivisions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfStreamDivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataStreamer *op = static_cast<vtkImageDataStreamer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfStreamDivisions() :
      op->vtkImageDataStreamer::GetNumberOfStreamDivisions());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageDataStreamer_SetExtentTranslator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtentTranslator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataStreamer *op = static_cast<vtkImageDataStreamer *>(vp);

  vtkExtentTranslator *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkExtentTranslator"))
  {
    if (ap.IsBound())
    {
      op->SetExtentTranslator(temp0);
    }
    else
    {
      op->vtkImageDataStreamer::SetExtentTranslator(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageDataStreamer_GetExtentTranslator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtentTranslator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataStreamer *op = static_cast<vtkImageDataStreamer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkExtentTranslator *tempr = (ap.IsBound() ?
      op->GetExtentTranslator() :
      op->vtkImageDataStreamer::GetExtentTranslator());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkImageDataStreamer_Methods[] = {
  {"IsTypeOf", PyvtkImageDataStreamer_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImageDataStreamer_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImageDataStreamer_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkImageDataStreamer\nC++: static vtkImageDataStreamer *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImageDataStreamer_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkImageDataStreamer\nC++: vtkImageDataStreamer *NewInstance()\n\n"},
  {"SetNumberOfStreamDivisions", PyvtkImageDataStreamer_SetNumberOfStreamDivisions, METH_VARARGS,
   "V.SetNumberOfStreamDivisions(int)\nC++: virtual void SetNumberOfStreamDivisions(int _arg)\n\nSet how many pieces to divide the input into. void\nSetNumberOfStreamDivisions(int num); int\nGetNumberOfStreamDivisions();\n"},
  {"GetNumberOfStreamDivisions", PyvtkImageDataStreamer_GetNumberOfStreamDivisions, METH_VARARGS,
   "V.GetNumberOfStreamDivisions() -> int\nC++: virtual int GetNumberOfStreamDivisions()\n\nSet how many pieces to divide the input into. void\nSetNumberOfStreamDivisions(int num); int\nGetNumberOfStreamDivisions();\n"},
  {"SetExtentTranslator", PyvtkImageDataStreamer_SetExtentTranslator, METH_VARARGS,
   "V.SetExtentTranslator(vtkExtentTranslator)\nC++: virtual void SetExtentTranslator(vtkExtentTranslator *)\n\nGet the extent translator that will be used to split the requests\n"},
  {"GetExtentTranslator", PyvtkImageDataStreamer_GetExtentTranslator, METH_VARARGS,
   "V.GetExtentTranslator() -> vtkExtentTranslator\nC++: virtual vtkExtentTranslator *GetExtentTranslator()\n\nGet the extent translator that will be used to split the requests\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkImageDataStreamer_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkImagingCorePython.vtkImageDataStreamer", // tp_name
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
  PyvtkImageDataStreamer_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImageDataStreamer_StaticNew()
{
  return vtkImageDataStreamer::New();
}

PyObject *PyvtkImageDataStreamer_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkImageDataStreamer_Type, PyvtkImageDataStreamer_Methods,
    "vtkImageDataStreamer",
 &PyvtkImageDataStreamer_StaticNew);

  PyTypeObject *pytype = &PyvtkImageDataStreamer_Type;

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

void PyVTKAddFile_vtkImageDataStreamer(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImageDataStreamer_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImageDataStreamer", o) != 0)
  {
    Py_DECREF(o);
  }

}

