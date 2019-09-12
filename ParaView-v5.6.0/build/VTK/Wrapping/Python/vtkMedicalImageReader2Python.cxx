// python wrapper for vtkMedicalImageReader2
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
#include "vtkMedicalImageReader2.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMedicalImageReader2(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkMedicalImageReader2_ClassNew(); }

#ifndef DECLARED_PyvtkImageReader2_ClassNew
extern "C" { PyObject *PyvtkImageReader2_ClassNew(); }
#define DECLARED_PyvtkImageReader2_ClassNew
#endif

static const char *PyvtkMedicalImageReader2_Doc =
  "vtkMedicalImageReader2 - vtkImageReader2 with medical meta data.\n\n"
  "Superclass: vtkImageReader2\n\n"
  "vtkMedicalImageReader2 is a parent class for medical image readers.\n"
  "It provides a place to store patient information that may be stored\n"
  "in the image header.\n"
  "@sa\n"
  "vtkImageReader2 vtkGESignaReader vtkMedicalImageProperties\n\n";


static PyObject *
PyvtkMedicalImageReader2_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMedicalImageReader2::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMedicalImageReader2_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageReader2 *op = static_cast<vtkMedicalImageReader2 *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMedicalImageReader2::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMedicalImageReader2_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMedicalImageReader2 *tempr = vtkMedicalImageReader2::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMedicalImageReader2_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageReader2 *op = static_cast<vtkMedicalImageReader2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMedicalImageReader2 *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMedicalImageReader2::NewInstance());

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
PyvtkMedicalImageReader2_GetMedicalImageProperties(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMedicalImageProperties");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageReader2 *op = static_cast<vtkMedicalImageReader2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMedicalImageProperties *tempr = (ap.IsBound() ?
      op->GetMedicalImageProperties() :
      op->vtkMedicalImageReader2::GetMedicalImageProperties());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMedicalImageReader2_SetPatientName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPatientName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageReader2 *op = static_cast<vtkMedicalImageReader2 *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPatientName(temp0);
    }
    else
    {
      op->vtkMedicalImageReader2::SetPatientName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMedicalImageReader2_GetPatientName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPatientName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageReader2 *op = static_cast<vtkMedicalImageReader2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetPatientName() :
      op->vtkMedicalImageReader2::GetPatientName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMedicalImageReader2_SetPatientID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPatientID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageReader2 *op = static_cast<vtkMedicalImageReader2 *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPatientID(temp0);
    }
    else
    {
      op->vtkMedicalImageReader2::SetPatientID(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMedicalImageReader2_GetPatientID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPatientID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageReader2 *op = static_cast<vtkMedicalImageReader2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetPatientID() :
      op->vtkMedicalImageReader2::GetPatientID());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMedicalImageReader2_SetDate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageReader2 *op = static_cast<vtkMedicalImageReader2 *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDate(temp0);
    }
    else
    {
      op->vtkMedicalImageReader2::SetDate(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMedicalImageReader2_GetDate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageReader2 *op = static_cast<vtkMedicalImageReader2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetDate() :
      op->vtkMedicalImageReader2::GetDate());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMedicalImageReader2_SetSeries(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSeries");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageReader2 *op = static_cast<vtkMedicalImageReader2 *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSeries(temp0);
    }
    else
    {
      op->vtkMedicalImageReader2::SetSeries(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMedicalImageReader2_GetSeries(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSeries");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageReader2 *op = static_cast<vtkMedicalImageReader2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetSeries() :
      op->vtkMedicalImageReader2::GetSeries());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMedicalImageReader2_SetStudy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStudy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageReader2 *op = static_cast<vtkMedicalImageReader2 *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetStudy(temp0);
    }
    else
    {
      op->vtkMedicalImageReader2::SetStudy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMedicalImageReader2_GetStudy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStudy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageReader2 *op = static_cast<vtkMedicalImageReader2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetStudy() :
      op->vtkMedicalImageReader2::GetStudy());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMedicalImageReader2_SetImageNumber(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImageNumber");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageReader2 *op = static_cast<vtkMedicalImageReader2 *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetImageNumber(temp0);
    }
    else
    {
      op->vtkMedicalImageReader2::SetImageNumber(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMedicalImageReader2_GetImageNumber(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageNumber");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageReader2 *op = static_cast<vtkMedicalImageReader2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetImageNumber() :
      op->vtkMedicalImageReader2::GetImageNumber());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMedicalImageReader2_SetModality(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetModality");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageReader2 *op = static_cast<vtkMedicalImageReader2 *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetModality(temp0);
    }
    else
    {
      op->vtkMedicalImageReader2::SetModality(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMedicalImageReader2_GetModality(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetModality");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageReader2 *op = static_cast<vtkMedicalImageReader2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetModality() :
      op->vtkMedicalImageReader2::GetModality());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMedicalImageReader2_Methods[] = {
  {"IsTypeOf", PyvtkMedicalImageReader2_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMedicalImageReader2_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMedicalImageReader2_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkMedicalImageReader2\nC++: static vtkMedicalImageReader2 *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMedicalImageReader2_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkMedicalImageReader2\nC++: vtkMedicalImageReader2 *NewInstance()\n\n"},
  {"GetMedicalImageProperties", PyvtkMedicalImageReader2_GetMedicalImageProperties, METH_VARARGS,
   "V.GetMedicalImageProperties() -> vtkMedicalImageProperties\nC++: virtual vtkMedicalImageProperties *GetMedicalImageProperties(\n    )\n\nGet the medical image properties object\n"},
  {"SetPatientName", PyvtkMedicalImageReader2_SetPatientName, METH_VARARGS,
   "V.SetPatientName(string)\nC++: virtual void SetPatientName(const char *)\n\nFor backward compatibility, propagate calls to the\nMedicalImageProperties object.\n"},
  {"GetPatientName", PyvtkMedicalImageReader2_GetPatientName, METH_VARARGS,
   "V.GetPatientName() -> string\nC++: virtual const char *GetPatientName()\n\nFor backward compatibility, propagate calls to the\nMedicalImageProperties object.\n"},
  {"SetPatientID", PyvtkMedicalImageReader2_SetPatientID, METH_VARARGS,
   "V.SetPatientID(string)\nC++: virtual void SetPatientID(const char *)\n\nFor backward compatibility, propagate calls to the\nMedicalImageProperties object.\n"},
  {"GetPatientID", PyvtkMedicalImageReader2_GetPatientID, METH_VARARGS,
   "V.GetPatientID() -> string\nC++: virtual const char *GetPatientID()\n\nFor backward compatibility, propagate calls to the\nMedicalImageProperties object.\n"},
  {"SetDate", PyvtkMedicalImageReader2_SetDate, METH_VARARGS,
   "V.SetDate(string)\nC++: virtual void SetDate(const char *)\n\nFor backward compatibility, propagate calls to the\nMedicalImageProperties object.\n"},
  {"GetDate", PyvtkMedicalImageReader2_GetDate, METH_VARARGS,
   "V.GetDate() -> string\nC++: virtual const char *GetDate()\n\nFor backward compatibility, propagate calls to the\nMedicalImageProperties object.\n"},
  {"SetSeries", PyvtkMedicalImageReader2_SetSeries, METH_VARARGS,
   "V.SetSeries(string)\nC++: virtual void SetSeries(const char *)\n\nFor backward compatibility, propagate calls to the\nMedicalImageProperties object.\n"},
  {"GetSeries", PyvtkMedicalImageReader2_GetSeries, METH_VARARGS,
   "V.GetSeries() -> string\nC++: virtual const char *GetSeries()\n\nFor backward compatibility, propagate calls to the\nMedicalImageProperties object.\n"},
  {"SetStudy", PyvtkMedicalImageReader2_SetStudy, METH_VARARGS,
   "V.SetStudy(string)\nC++: virtual void SetStudy(const char *)\n\nFor backward compatibility, propagate calls to the\nMedicalImageProperties object.\n"},
  {"GetStudy", PyvtkMedicalImageReader2_GetStudy, METH_VARARGS,
   "V.GetStudy() -> string\nC++: virtual const char *GetStudy()\n\nFor backward compatibility, propagate calls to the\nMedicalImageProperties object.\n"},
  {"SetImageNumber", PyvtkMedicalImageReader2_SetImageNumber, METH_VARARGS,
   "V.SetImageNumber(string)\nC++: virtual void SetImageNumber(const char *)\n\nFor backward compatibility, propagate calls to the\nMedicalImageProperties object.\n"},
  {"GetImageNumber", PyvtkMedicalImageReader2_GetImageNumber, METH_VARARGS,
   "V.GetImageNumber() -> string\nC++: virtual const char *GetImageNumber()\n\nFor backward compatibility, propagate calls to the\nMedicalImageProperties object.\n"},
  {"SetModality", PyvtkMedicalImageReader2_SetModality, METH_VARARGS,
   "V.SetModality(string)\nC++: virtual void SetModality(const char *)\n\nFor backward compatibility, propagate calls to the\nMedicalImageProperties object.\n"},
  {"GetModality", PyvtkMedicalImageReader2_GetModality, METH_VARARGS,
   "V.GetModality() -> string\nC++: virtual const char *GetModality()\n\nFor backward compatibility, propagate calls to the\nMedicalImageProperties object.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkMedicalImageReader2_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOImagePython.vtkMedicalImageReader2", // tp_name
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
  PyvtkMedicalImageReader2_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMedicalImageReader2_StaticNew()
{
  return vtkMedicalImageReader2::New();
}

PyObject *PyvtkMedicalImageReader2_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkMedicalImageReader2_Type, PyvtkMedicalImageReader2_Methods,
    "vtkMedicalImageReader2",
 &PyvtkMedicalImageReader2_StaticNew);

  PyTypeObject *pytype = &PyvtkMedicalImageReader2_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkImageReader2_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMedicalImageReader2(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMedicalImageReader2_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMedicalImageReader2", o) != 0)
  {
    Py_DECREF(o);
  }

}

