// python wrapper for vtkAnnotation
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
#include "vtkAnnotation.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkAnnotation(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkAnnotation_ClassNew(); }

#ifndef DECLARED_PyvtkDataObject_ClassNew
extern "C" { PyObject *PyvtkDataObject_ClassNew(); }
#define DECLARED_PyvtkDataObject_ClassNew
#endif

static const char *PyvtkAnnotation_Doc =
  "vtkAnnotation - Stores a collection of annotation artifacts.\n\n"
  "Superclass: vtkDataObject\n\n"
  "vtkAnnotation is a collection of annotation properties along with an\n"
  "associated selection indicating the portion of data the annotation\n"
  "refers to.\n\n"
  "@par Thanks: Timothy M. Shead (tshead@sandia.gov) at Sandia National\n"
  "Laboratories contributed code to this class.\n\n";


static PyObject *
PyvtkAnnotation_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkAnnotation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAnnotation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotation *op = static_cast<vtkAnnotation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAnnotation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAnnotation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkAnnotation *tempr = vtkAnnotation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAnnotation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotation *op = static_cast<vtkAnnotation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAnnotation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAnnotation::NewInstance());

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
PyvtkAnnotation_GetSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotation *op = static_cast<vtkAnnotation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSelection *tempr = (ap.IsBound() ?
      op->GetSelection() :
      op->vtkAnnotation::GetSelection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAnnotation_SetSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotation *op = static_cast<vtkAnnotation *>(vp);

  vtkSelection *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSelection"))
  {
    if (ap.IsBound())
    {
      op->SetSelection(temp0);
    }
    else
    {
      op->vtkAnnotation::SetSelection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAnnotation_GetData_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
  {
    vtkAnnotation *tempr = vtkAnnotation::GetData(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkAnnotation_GetData_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformationVector *temp0 = nullptr;
  int temp1 = 0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkInformationVector") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    vtkAnnotation *tempr = vtkAnnotation::GetData(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkAnnotation_GetData_Methods[] = {
  {nullptr, PyvtkAnnotation_GetData_s1, METH_VARARGS | METH_STATIC,
   "V *vtkInformation"},
  {nullptr, PyvtkAnnotation_GetData_s2, METH_VARARGS | METH_STATIC,
   "V|i *vtkInformationVector"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkAnnotation_GetData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkAnnotation_GetData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 2:
      return PyvtkAnnotation_GetData_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetData");
  return nullptr;
}



static PyObject *
PyvtkAnnotation_LABEL(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "LABEL");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationStringKey *tempr = vtkAnnotation::LABEL();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAnnotation_COLOR(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "COLOR");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationDoubleVectorKey *tempr = vtkAnnotation::COLOR();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAnnotation_OPACITY(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "OPACITY");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationDoubleKey *tempr = vtkAnnotation::OPACITY();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAnnotation_ICON_INDEX(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ICON_INDEX");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationIntegerKey *tempr = vtkAnnotation::ICON_INDEX();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAnnotation_ENABLE(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ENABLE");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationIntegerKey *tempr = vtkAnnotation::ENABLE();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAnnotation_HIDE(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "HIDE");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationIntegerKey *tempr = vtkAnnotation::HIDE();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAnnotation_DATA(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "DATA");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationDataObjectKey *tempr = vtkAnnotation::DATA();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAnnotation_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotation *op = static_cast<vtkAnnotation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Initialize();
    }
    else
    {
      op->vtkAnnotation::Initialize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAnnotation_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotation *op = static_cast<vtkAnnotation *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->ShallowCopy(temp0);
    }
    else
    {
      op->vtkAnnotation::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAnnotation_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotation *op = static_cast<vtkAnnotation *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->DeepCopy(temp0);
    }
    else
    {
      op->vtkAnnotation::DeepCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAnnotation_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotation *op = static_cast<vtkAnnotation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkAnnotation::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkAnnotation_Methods[] = {
  {"IsTypeOf", PyvtkAnnotation_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkAnnotation_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkAnnotation_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkAnnotation\nC++: static vtkAnnotation *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkAnnotation_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkAnnotation\nC++: vtkAnnotation *NewInstance()\n\n"},
  {"GetSelection", PyvtkAnnotation_GetSelection, METH_VARARGS,
   "V.GetSelection() -> vtkSelection\nC++: virtual vtkSelection *GetSelection()\n\nThe selection to which this set of annotations will apply.\n"},
  {"SetSelection", PyvtkAnnotation_SetSelection, METH_VARARGS,
   "V.SetSelection(vtkSelection)\nC++: virtual void SetSelection(vtkSelection *selection)\n\nThe selection to which this set of annotations will apply.\n"},
  {"GetData", PyvtkAnnotation_GetData, METH_VARARGS,
   "V.GetData(vtkInformation) -> vtkAnnotation\nC++: static vtkAnnotation *GetData(vtkInformation *info)\nV.GetData(vtkInformationVector, int) -> vtkAnnotation\nC++: static vtkAnnotation *GetData(vtkInformationVector *v,\n    int i=0)\n\nRetrieve a vtkAnnotation stored inside an information object.\n"},
  {"LABEL", PyvtkAnnotation_LABEL, METH_VARARGS,
   "V.LABEL() -> vtkInformationStringKey\nC++: static vtkInformationStringKey *LABEL()\n\nThe label for this annotation.\n"},
  {"COLOR", PyvtkAnnotation_COLOR, METH_VARARGS,
   "V.COLOR() -> vtkInformationDoubleVectorKey\nC++: static vtkInformationDoubleVectorKey *COLOR()\n\nThe color for this annotation. This is stored as an RGB triple\nwith values between 0 and 1.\n"},
  {"OPACITY", PyvtkAnnotation_OPACITY, METH_VARARGS,
   "V.OPACITY() -> vtkInformationDoubleKey\nC++: static vtkInformationDoubleKey *OPACITY()\n\nThe color for this annotation. This is stored as a value between\n0 and 1.\n"},
  {"ICON_INDEX", PyvtkAnnotation_ICON_INDEX, METH_VARARGS,
   "V.ICON_INDEX() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *ICON_INDEX()\n\nAn icon index for this annotation.\n"},
  {"ENABLE", PyvtkAnnotation_ENABLE, METH_VARARGS,
   "V.ENABLE() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *ENABLE()\n\nWhether or not this annotation is enabled. A value of 1 means\nenabled, 0 disabled.\n"},
  {"HIDE", PyvtkAnnotation_HIDE, METH_VARARGS,
   "V.HIDE() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *HIDE()\n\nWhether or not this annotation is visible.\n"},
  {"DATA", PyvtkAnnotation_DATA, METH_VARARGS,
   "V.DATA() -> vtkInformationDataObjectKey\nC++: static vtkInformationDataObjectKey *DATA()\n\nAssociate a vtkDataObject with this annotation\n"},
  {"Initialize", PyvtkAnnotation_Initialize, METH_VARARGS,
   "V.Initialize()\nC++: void Initialize() override;\n\nInitialize the annotation to an empty state.\n"},
  {"ShallowCopy", PyvtkAnnotation_ShallowCopy, METH_VARARGS,
   "V.ShallowCopy(vtkDataObject)\nC++: void ShallowCopy(vtkDataObject *other) override;\n\nMake this annotation have the same properties and have the same\nselection of another annotation.\n"},
  {"DeepCopy", PyvtkAnnotation_DeepCopy, METH_VARARGS,
   "V.DeepCopy(vtkDataObject)\nC++: void DeepCopy(vtkDataObject *other) override;\n\nMake this annotation have the same properties and have a copy of\nthe selection of another annotation.\n"},
  {"GetMTime", PyvtkAnnotation_GetMTime, METH_VARARGS,
   "V.GetMTime() -> int\nC++: vtkMTimeType GetMTime() override;\n\nGet the modified time of this object.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkAnnotation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonDataModelPython.vtkAnnotation", // tp_name
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
  PyvtkAnnotation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkAnnotation_StaticNew()
{
  return vtkAnnotation::New();
}

PyObject *PyvtkAnnotation_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkAnnotation_Type, PyvtkAnnotation_Methods,
    "vtkAnnotation",
 &PyvtkAnnotation_StaticNew);

  PyTypeObject *pytype = &PyvtkAnnotation_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkDataObject_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkAnnotation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkAnnotation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkAnnotation", o) != 0)
  {
    Py_DECREF(o);
  }

}

