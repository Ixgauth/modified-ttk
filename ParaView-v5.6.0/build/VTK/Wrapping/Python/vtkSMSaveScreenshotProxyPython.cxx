// python wrapper for vtkSMSaveScreenshotProxy
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
#include "vtkVector.h"
#include "vtkStdString.h"
#include "vtkSMSaveScreenshotProxy.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMSaveScreenshotProxy(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMSaveScreenshotProxy_ClassNew(); }

#ifndef DECLARED_PyvtkSMProxy_ClassNew
extern "C" { PyObject *PyvtkSMProxy_ClassNew(); }
#define DECLARED_PyvtkSMProxy_ClassNew
#endif

static const char *PyvtkSMSaveScreenshotProxy_Doc =
  "vtkSMSaveScreenshotProxy - proxy to help with saving screenshots for\nviews\n\n"
  "Superclass: vtkSMProxy\n\n"
  "vtkSMSaveScreenshotProxy is used to capture images from views or\n"
  "layouts. It encapsulates the logic to generate screen shot of any\n"
  "arbitrary size independent of the application window size.\n\n"
  "The properties on this proxy provide various options that user can\n"
  "configure when saving images/screenshots. Once those properties are\n"
  "setup, one calls `vtkSMSaveScreenshotProxy::WriteImage` or\n"
  "`vtkSMSaveScreenshotProxy::CaptureImage`.\n\n";


static PyObject *
PyvtkSMSaveScreenshotProxy_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMSaveScreenshotProxy::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMSaveScreenshotProxy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSaveScreenshotProxy *op = static_cast<vtkSMSaveScreenshotProxy *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMSaveScreenshotProxy::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMSaveScreenshotProxy_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMSaveScreenshotProxy *tempr = vtkSMSaveScreenshotProxy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMSaveScreenshotProxy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSaveScreenshotProxy *op = static_cast<vtkSMSaveScreenshotProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMSaveScreenshotProxy *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMSaveScreenshotProxy::NewInstance());

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
PyvtkSMSaveScreenshotProxy_WriteImage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSaveScreenshotProxy *op = static_cast<vtkSMSaveScreenshotProxy *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->WriteImage(temp0) :
      op->vtkSMSaveScreenshotProxy::WriteImage(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMSaveScreenshotProxy_UpdateDefaultsAndVisibilities(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateDefaultsAndVisibilities");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSaveScreenshotProxy *op = static_cast<vtkSMSaveScreenshotProxy *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->UpdateDefaultsAndVisibilities(temp0);
    }
    else
    {
      op->vtkSMSaveScreenshotProxy::UpdateDefaultsAndVisibilities(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMSaveScreenshotProxy_GetScaleFactorsAndSize(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetScaleFactorsAndSize");

  vtkVector2i *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  vtkVector2i *temp1 = nullptr;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<bool> store2(2*size2);
  bool *temp2 = store2.Data();
  bool *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2, 3) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector2i") &&
      ap.GetSpecialObject(temp1, "vtkVector2i") &&
      (ap.NoArgsLeft() || ap.GetArray(temp2, size2)))
  {
    ap.Save(temp2, save2, size2);

    vtkVector2i tempr = vtkSMSaveScreenshotProxy::GetScaleFactorsAndSize(*temp0, *temp1, temp2);

    if (ap.HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVector2i");
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkSMSaveScreenshotProxy_ComputeMagnification(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ComputeMagnification");

  vtkVector2i *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  vtkVector2i *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector2i") &&
      ap.GetSpecialObject(temp1, "vtkVector2i"))
  {
    int tempr = vtkSMSaveScreenshotProxy::ComputeMagnification(*temp0, *temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkSMSaveScreenshotProxy_GetFileFormatFilters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileFormatFilters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSaveScreenshotProxy *op = static_cast<vtkSMSaveScreenshotProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetFileFormatFilters() :
      op->vtkSMSaveScreenshotProxy::GetFileFormatFilters());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSMSaveScreenshotProxy_Methods[] = {
  {"IsTypeOf", PyvtkSMSaveScreenshotProxy_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMSaveScreenshotProxy_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMSaveScreenshotProxy_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSMSaveScreenshotProxy\nC++: static vtkSMSaveScreenshotProxy *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMSaveScreenshotProxy_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSMSaveScreenshotProxy\nC++: vtkSMSaveScreenshotProxy *NewInstance()\n\n"},
  {"WriteImage", PyvtkSMSaveScreenshotProxy_WriteImage, METH_VARARGS,
   "V.WriteImage(string) -> bool\nC++: virtual bool WriteImage(const char *filename)\n\nCapture image. The properties for this proxy provide all the\nnecessary information to capture the image.\n"},
  {"UpdateDefaultsAndVisibilities", PyvtkSMSaveScreenshotProxy_UpdateDefaultsAndVisibilities, METH_VARARGS,
   "V.UpdateDefaultsAndVisibilities(string)\nC++: virtual void UpdateDefaultsAndVisibilities(\n    const char *filename)\n\nUpdates default property values for saving the given file.\n"},
  {"GetScaleFactorsAndSize", PyvtkSMSaveScreenshotProxy_GetScaleFactorsAndSize, METH_VARARGS,
   "V.GetScaleFactorsAndSize(vtkVector2i, vtkVector2i, [bool, ...])\n    -> vtkVector2i\nC++: static vtkVector2i GetScaleFactorsAndSize(\n    const vtkVector2i &targetSize, vtkVector2i &size,\n    bool *approximate=nullptr)\n\nCompute scale factors and new size for target resolution. This\ndetermines integral scale factors (in X and Y) to get a box of\nsize of targetSize from a box of maximum size specified by size.\nIf approximate is non-null, then it is set to true when there no\nway to do that (e.g. one of the components of the targetSize is\nprime and doesn't match size).\n\nOn success, returns the scale factors and modifies size such that\nsize * scaleFactors == targetSize is possible. If not, size *\nscaleFactors < targetSize and approximate if non-null, is set to\ntrue.\n"},
  {"ComputeMagnification", PyvtkSMSaveScreenshotProxy_ComputeMagnification, METH_VARARGS,
   "V.ComputeMagnification(vtkVector2i, vtkVector2i) -> int\nC++: static int ComputeMagnification(\n    const vtkVector2i &targetSize, vtkVector2i &size)\n\nCompute a single magnification factor to reach targetSize using a\nbox that fits within size. This implementation is inaccurate and\nmay not give target resolution correctly. Hence\n`GetScaleFactorsAndSize` should be preferred. This method is\nuseful when the interest is in preserving the target aspect ratio\nas closely as possible than reaching the target size.\n"},
  {"GetFileFormatFilters", PyvtkSMSaveScreenshotProxy_GetFileFormatFilters, METH_VARARGS,
   "V.GetFileFormatFilters() -> string\nC++: std::string GetFileFormatFilters()\n\nConvenience method to derive a QFileDialog friendly format string\nfor extensions supported by this proxy.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMSaveScreenshotProxy_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerRenderingPython.vtkSMSaveScreenshotProxy", // tp_name
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
  PyvtkSMSaveScreenshotProxy_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSMSaveScreenshotProxy_StaticNew()
{
  return vtkSMSaveScreenshotProxy::New();
}

PyObject *PyvtkSMSaveScreenshotProxy_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMSaveScreenshotProxy_Type, PyvtkSMSaveScreenshotProxy_Methods,
    "vtkSMSaveScreenshotProxy",
 &PyvtkSMSaveScreenshotProxy_StaticNew);

  PyTypeObject *pytype = &PyvtkSMSaveScreenshotProxy_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkSMProxy_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSMSaveScreenshotProxy(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMSaveScreenshotProxy_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMSaveScreenshotProxy", o) != 0)
  {
    Py_DECREF(o);
  }

}

