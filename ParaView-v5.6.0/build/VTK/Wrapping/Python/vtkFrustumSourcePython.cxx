// python wrapper for vtkFrustumSource
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
#include "vtkFrustumSource.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkFrustumSource(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkFrustumSource_ClassNew(); }

#ifndef DECLARED_PyvtkPolyDataAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPolyDataAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPolyDataAlgorithm_ClassNew
#endif

static const char *PyvtkFrustumSource_Doc =
  "vtkFrustumSource - create a polygonal representation of a frustum\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkFrustumSource creates a frustum defines by a set of planes. The\n"
  "frustum is represented with four-sided polygons. It is possible to\n"
  "specify extra lines to better visualize the field of view.\n\n"
  "@par Usage: Typical use consists of 3 steps:\n"
  "1. get the planes coefficients from a vtkCamera with\n"
  "   vtkCamera::GetFrustumPlanes()\n"
  "2. initialize the planes with vtkPlanes::SetFrustumPlanes() with the\n"
  "   planes coefficients\n"
  "3. pass the vtkPlanes to a vtkFrustumSource.\n\n";


static PyObject *
PyvtkFrustumSource_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkFrustumSource::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFrustumSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrustumSource *op = static_cast<vtkFrustumSource *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkFrustumSource::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFrustumSource_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkFrustumSource *tempr = vtkFrustumSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFrustumSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrustumSource *op = static_cast<vtkFrustumSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkFrustumSource *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkFrustumSource::NewInstance());

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
PyvtkFrustumSource_GetPlanes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlanes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrustumSource *op = static_cast<vtkFrustumSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPlanes *tempr = (ap.IsBound() ?
      op->GetPlanes() :
      op->vtkFrustumSource::GetPlanes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFrustumSource_SetPlanes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlanes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrustumSource *op = static_cast<vtkFrustumSource *>(vp);

  vtkPlanes *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPlanes"))
  {
    if (ap.IsBound())
    {
      op->SetPlanes(temp0);
    }
    else
    {
      op->vtkFrustumSource::SetPlanes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFrustumSource_GetShowLines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShowLines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrustumSource *op = static_cast<vtkFrustumSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetShowLines() :
      op->vtkFrustumSource::GetShowLines());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFrustumSource_SetShowLines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShowLines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrustumSource *op = static_cast<vtkFrustumSource *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetShowLines(temp0);
    }
    else
    {
      op->vtkFrustumSource::SetShowLines(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFrustumSource_ShowLinesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShowLinesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrustumSource *op = static_cast<vtkFrustumSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ShowLinesOn();
    }
    else
    {
      op->vtkFrustumSource::ShowLinesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFrustumSource_ShowLinesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShowLinesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrustumSource *op = static_cast<vtkFrustumSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ShowLinesOff();
    }
    else
    {
      op->vtkFrustumSource::ShowLinesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFrustumSource_GetLinesLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLinesLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrustumSource *op = static_cast<vtkFrustumSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLinesLength() :
      op->vtkFrustumSource::GetLinesLength());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFrustumSource_SetLinesLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLinesLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrustumSource *op = static_cast<vtkFrustumSource *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLinesLength(temp0);
    }
    else
    {
      op->vtkFrustumSource::SetLinesLength(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFrustumSource_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrustumSource *op = static_cast<vtkFrustumSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkFrustumSource::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFrustumSource_SetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrustumSource *op = static_cast<vtkFrustumSource *>(vp);

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
      op->vtkFrustumSource::SetOutputPointsPrecision(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFrustumSource_GetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrustumSource *op = static_cast<vtkFrustumSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecision() :
      op->vtkFrustumSource::GetOutputPointsPrecision());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkFrustumSource_Methods[] = {
  {"IsTypeOf", PyvtkFrustumSource_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkFrustumSource_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkFrustumSource_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkFrustumSource\nC++: static vtkFrustumSource *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkFrustumSource_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkFrustumSource\nC++: vtkFrustumSource *NewInstance()\n\n"},
  {"GetPlanes", PyvtkFrustumSource_GetPlanes, METH_VARARGS,
   "V.GetPlanes() -> vtkPlanes\nC++: virtual vtkPlanes *GetPlanes()\n\nReturn the 6 planes defining the frustum. Initial value is\nnullptr. The 6 planes are defined in this order:\nleft,right,bottom,top,far,near. If Planes==nullptr or if\nPlanes->GetNumberOfPlanes()!=6 when RequestData() is called, an\nerror message will be emitted and RequestData() will return right\naway.\n"},
  {"SetPlanes", PyvtkFrustumSource_SetPlanes, METH_VARARGS,
   "V.SetPlanes(vtkPlanes)\nC++: virtual void SetPlanes(vtkPlanes *planes)\n\nSet the 6 planes defining the frustum.\n"},
  {"GetShowLines", PyvtkFrustumSource_GetShowLines, METH_VARARGS,
   "V.GetShowLines() -> bool\nC++: virtual bool GetShowLines()\n\nTells if some extra lines will be generated. Initial value is\ntrue.\n"},
  {"SetShowLines", PyvtkFrustumSource_SetShowLines, METH_VARARGS,
   "V.SetShowLines(bool)\nC++: virtual void SetShowLines(bool _arg)\n\nTells if some extra lines will be generated. Initial value is\ntrue.\n"},
  {"ShowLinesOn", PyvtkFrustumSource_ShowLinesOn, METH_VARARGS,
   "V.ShowLinesOn()\nC++: virtual void ShowLinesOn()\n\nTells if some extra lines will be generated. Initial value is\ntrue.\n"},
  {"ShowLinesOff", PyvtkFrustumSource_ShowLinesOff, METH_VARARGS,
   "V.ShowLinesOff()\nC++: virtual void ShowLinesOff()\n\nTells if some extra lines will be generated. Initial value is\ntrue.\n"},
  {"GetLinesLength", PyvtkFrustumSource_GetLinesLength, METH_VARARGS,
   "V.GetLinesLength() -> float\nC++: virtual double GetLinesLength()\n\nLength of the extra lines. This a stricly positive value. Initial\nvalue is 1.0.\n"},
  {"SetLinesLength", PyvtkFrustumSource_SetLinesLength, METH_VARARGS,
   "V.SetLinesLength(float)\nC++: virtual void SetLinesLength(double _arg)\n\nLength of the extra lines. This a stricly positive value. Initial\nvalue is 1.0.\n"},
  {"GetMTime", PyvtkFrustumSource_GetMTime, METH_VARARGS,
   "V.GetMTime() -> int\nC++: vtkMTimeType GetMTime() override;\n\nModified GetMTime because of Planes.\n"},
  {"SetOutputPointsPrecision", PyvtkFrustumSource_SetOutputPointsPrecision, METH_VARARGS,
   "V.SetOutputPointsPrecision(int)\nC++: virtual void SetOutputPointsPrecision(int _arg)\n\nSet/get the desired precision for the output points.\nvtkAlgorithm::SINGLE_PRECISION - Output single-precision floating\npoint. vtkAlgorithm::DOUBLE_PRECISION - Output double-precision\nfloating point.\n"},
  {"GetOutputPointsPrecision", PyvtkFrustumSource_GetOutputPointsPrecision, METH_VARARGS,
   "V.GetOutputPointsPrecision() -> int\nC++: virtual int GetOutputPointsPrecision()\n\nSet/get the desired precision for the output points.\nvtkAlgorithm::SINGLE_PRECISION - Output single-precision floating\npoint. vtkAlgorithm::DOUBLE_PRECISION - Output double-precision\nfloating point.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkFrustumSource_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersSourcesPython.vtkFrustumSource", // tp_name
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
  PyvtkFrustumSource_Doc, // tp_doc
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

static vtkObjectBase *PyvtkFrustumSource_StaticNew()
{
  return vtkFrustumSource::New();
}

PyObject *PyvtkFrustumSource_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkFrustumSource_Type, PyvtkFrustumSource_Methods,
    "vtkFrustumSource",
 &PyvtkFrustumSource_StaticNew);

  PyTypeObject *pytype = &PyvtkFrustumSource_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPolyDataAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkFrustumSource(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkFrustumSource_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkFrustumSource", o) != 0)
  {
    Py_DECREF(o);
  }

}

