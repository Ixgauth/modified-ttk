// python wrapper for vtkSynchronizedTemplatesCutter3D
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
#include "vtkSynchronizedTemplatesCutter3D.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSynchronizedTemplatesCutter3D(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSynchronizedTemplatesCutter3D_ClassNew(); }

#ifndef DECLARED_PyvtkSynchronizedTemplates3D_ClassNew
extern "C" { PyObject *PyvtkSynchronizedTemplates3D_ClassNew(); }
#define DECLARED_PyvtkSynchronizedTemplates3D_ClassNew
#endif

static const char *PyvtkSynchronizedTemplatesCutter3D_Doc =
  "vtkSynchronizedTemplatesCutter3D - generate cut surface from\nstructured points\n\n"
  "Superclass: vtkSynchronizedTemplates3D\n\n"
  "vtkSynchronizedTemplatesCutter3D is an implementation of the\n"
  "synchronized template algorithm. Note that vtkCutFilter will\n"
  "automatically use this class when appropriate.\n\n"
  "@sa\n"
  "vtkContourFilter vtkSynchronizedTemplates3D\n\n";


static PyObject *
PyvtkSynchronizedTemplatesCutter3D_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSynchronizedTemplatesCutter3D::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSynchronizedTemplatesCutter3D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedTemplatesCutter3D *op = static_cast<vtkSynchronizedTemplatesCutter3D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSynchronizedTemplatesCutter3D::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSynchronizedTemplatesCutter3D_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSynchronizedTemplatesCutter3D *tempr = vtkSynchronizedTemplatesCutter3D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSynchronizedTemplatesCutter3D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedTemplatesCutter3D *op = static_cast<vtkSynchronizedTemplatesCutter3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSynchronizedTemplatesCutter3D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSynchronizedTemplatesCutter3D::NewInstance());

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
PyvtkSynchronizedTemplatesCutter3D_ThreadedExecute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ThreadedExecute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedTemplatesCutter3D *op = static_cast<vtkSynchronizedTemplatesCutter3D *>(vp);

  vtkImageData *temp0 = nullptr;
  vtkInformation *temp1 = nullptr;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkImageData") &&
      ap.GetVTKObject(temp1, "vtkInformation") &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->ThreadedExecute(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSynchronizedTemplatesCutter3D::ThreadedExecute(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSynchronizedTemplatesCutter3D_SetCutFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCutFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedTemplatesCutter3D *op = static_cast<vtkSynchronizedTemplatesCutter3D *>(vp);

  vtkImplicitFunction *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImplicitFunction"))
  {
    if (ap.IsBound())
    {
      op->SetCutFunction(temp0);
    }
    else
    {
      op->vtkSynchronizedTemplatesCutter3D::SetCutFunction(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSynchronizedTemplatesCutter3D_GetCutFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCutFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedTemplatesCutter3D *op = static_cast<vtkSynchronizedTemplatesCutter3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImplicitFunction *tempr = (ap.IsBound() ?
      op->GetCutFunction() :
      op->vtkSynchronizedTemplatesCutter3D::GetCutFunction());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSynchronizedTemplatesCutter3D_SetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedTemplatesCutter3D *op = static_cast<vtkSynchronizedTemplatesCutter3D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOutputPointsPrecision(temp0);
    }
    else
    {
      op->vtkSynchronizedTemplatesCutter3D::SetOutputPointsPrecision(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSynchronizedTemplatesCutter3D_GetOutputPointsPrecisionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecisionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedTemplatesCutter3D *op = static_cast<vtkSynchronizedTemplatesCutter3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecisionMinValue() :
      op->vtkSynchronizedTemplatesCutter3D::GetOutputPointsPrecisionMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSynchronizedTemplatesCutter3D_GetOutputPointsPrecisionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecisionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedTemplatesCutter3D *op = static_cast<vtkSynchronizedTemplatesCutter3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecisionMaxValue() :
      op->vtkSynchronizedTemplatesCutter3D::GetOutputPointsPrecisionMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSynchronizedTemplatesCutter3D_GetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedTemplatesCutter3D *op = static_cast<vtkSynchronizedTemplatesCutter3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecision() :
      op->vtkSynchronizedTemplatesCutter3D::GetOutputPointsPrecision());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSynchronizedTemplatesCutter3D_Methods[] = {
  {"IsTypeOf", PyvtkSynchronizedTemplatesCutter3D_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSynchronizedTemplatesCutter3D_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSynchronizedTemplatesCutter3D_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSynchronizedTemplatesCutter3D\nC++: static vtkSynchronizedTemplatesCutter3D *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSynchronizedTemplatesCutter3D_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSynchronizedTemplatesCutter3D\nC++: vtkSynchronizedTemplatesCutter3D *NewInstance()\n\n"},
  {"ThreadedExecute", PyvtkSynchronizedTemplatesCutter3D_ThreadedExecute, METH_VARARGS,
   "V.ThreadedExecute(vtkImageData, vtkInformation, int)\nC++: void ThreadedExecute(vtkImageData *data,\n    vtkInformation *outInfo, int)\n\nNeeded by templated functions.\n"},
  {"SetCutFunction", PyvtkSynchronizedTemplatesCutter3D_SetCutFunction, METH_VARARGS,
   "V.SetCutFunction(vtkImplicitFunction)\nC++: virtual void SetCutFunction(vtkImplicitFunction *)\n\nSpecify the implicit function to perform the cutting.\n"},
  {"GetCutFunction", PyvtkSynchronizedTemplatesCutter3D_GetCutFunction, METH_VARARGS,
   "V.GetCutFunction() -> vtkImplicitFunction\nC++: virtual vtkImplicitFunction *GetCutFunction()\n\nSpecify the implicit function to perform the cutting.\n"},
  {"SetOutputPointsPrecision", PyvtkSynchronizedTemplatesCutter3D_SetOutputPointsPrecision, METH_VARARGS,
   "V.SetOutputPointsPrecision(int)\nC++: virtual void SetOutputPointsPrecision(int _arg)\n\nSet/get the desired precision for the output types. See the\ndocumentation for the vtkAlgorithm::DesiredOutputPrecision enum\nfor an explanation of the available precision settings.\n"},
  {"GetOutputPointsPrecisionMinValue", PyvtkSynchronizedTemplatesCutter3D_GetOutputPointsPrecisionMinValue, METH_VARARGS,
   "V.GetOutputPointsPrecisionMinValue() -> int\nC++: virtual int GetOutputPointsPrecisionMinValue()\n\nSet/get the desired precision for the output types. See the\ndocumentation for the vtkAlgorithm::DesiredOutputPrecision enum\nfor an explanation of the available precision settings.\n"},
  {"GetOutputPointsPrecisionMaxValue", PyvtkSynchronizedTemplatesCutter3D_GetOutputPointsPrecisionMaxValue, METH_VARARGS,
   "V.GetOutputPointsPrecisionMaxValue() -> int\nC++: virtual int GetOutputPointsPrecisionMaxValue()\n\nSet/get the desired precision for the output types. See the\ndocumentation for the vtkAlgorithm::DesiredOutputPrecision enum\nfor an explanation of the available precision settings.\n"},
  {"GetOutputPointsPrecision", PyvtkSynchronizedTemplatesCutter3D_GetOutputPointsPrecision, METH_VARARGS,
   "V.GetOutputPointsPrecision() -> int\nC++: virtual int GetOutputPointsPrecision()\n\nSet/get the desired precision for the output types. See the\ndocumentation for the vtkAlgorithm::DesiredOutputPrecision enum\nfor an explanation of the available precision settings.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSynchronizedTemplatesCutter3D_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersCorePython.vtkSynchronizedTemplatesCutter3D", // tp_name
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
  PyvtkSynchronizedTemplatesCutter3D_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSynchronizedTemplatesCutter3D_StaticNew()
{
  return vtkSynchronizedTemplatesCutter3D::New();
}

PyObject *PyvtkSynchronizedTemplatesCutter3D_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSynchronizedTemplatesCutter3D_Type, PyvtkSynchronizedTemplatesCutter3D_Methods,
    "vtkSynchronizedTemplatesCutter3D",
 &PyvtkSynchronizedTemplatesCutter3D_StaticNew);

  PyTypeObject *pytype = &PyvtkSynchronizedTemplatesCutter3D_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkSynchronizedTemplates3D_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSynchronizedTemplatesCutter3D(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSynchronizedTemplatesCutter3D_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSynchronizedTemplatesCutter3D", o) != 0)
  {
    Py_DECREF(o);
  }

}

