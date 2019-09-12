// python wrapper for vtkAnnotationLayers
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
#include "vtkAnnotationLayers.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkAnnotationLayers(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkAnnotationLayers_ClassNew(); }

#ifndef DECLARED_PyvtkDataObject_ClassNew
extern "C" { PyObject *PyvtkDataObject_ClassNew(); }
#define DECLARED_PyvtkDataObject_ClassNew
#endif

static const char *PyvtkAnnotationLayers_Doc =
  "vtkAnnotationLayers - Stores a ordered collection of annotation sets\n\n"
  "Superclass: vtkDataObject\n\n"
  "vtkAnnotationLayers stores a vector of annotation layers. Each layer\n"
  "may contain any number of vtkAnnotation objects. The ordering of the\n"
  "layers introduces a prioritization of annotations. Annotations in\n"
  "higher layers may obscure annotations in lower layers.\n\n";


static PyObject *
PyvtkAnnotationLayers_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkAnnotationLayers::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAnnotationLayers_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotationLayers *op = static_cast<vtkAnnotationLayers *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAnnotationLayers::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAnnotationLayers_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkAnnotationLayers *tempr = vtkAnnotationLayers::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAnnotationLayers_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotationLayers *op = static_cast<vtkAnnotationLayers *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAnnotationLayers *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAnnotationLayers::NewInstance());

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
PyvtkAnnotationLayers_SetCurrentAnnotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCurrentAnnotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotationLayers *op = static_cast<vtkAnnotationLayers *>(vp);

  vtkAnnotation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAnnotation"))
  {
    if (ap.IsBound())
    {
      op->SetCurrentAnnotation(temp0);
    }
    else
    {
      op->vtkAnnotationLayers::SetCurrentAnnotation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAnnotationLayers_GetCurrentAnnotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentAnnotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotationLayers *op = static_cast<vtkAnnotationLayers *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAnnotation *tempr = (ap.IsBound() ?
      op->GetCurrentAnnotation() :
      op->vtkAnnotationLayers::GetCurrentAnnotation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAnnotationLayers_SetCurrentSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCurrentSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotationLayers *op = static_cast<vtkAnnotationLayers *>(vp);

  vtkSelection *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSelection"))
  {
    if (ap.IsBound())
    {
      op->SetCurrentSelection(temp0);
    }
    else
    {
      op->vtkAnnotationLayers::SetCurrentSelection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAnnotationLayers_GetCurrentSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotationLayers *op = static_cast<vtkAnnotationLayers *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSelection *tempr = (ap.IsBound() ?
      op->GetCurrentSelection() :
      op->vtkAnnotationLayers::GetCurrentSelection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAnnotationLayers_GetNumberOfAnnotations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfAnnotations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotationLayers *op = static_cast<vtkAnnotationLayers *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfAnnotations() :
      op->vtkAnnotationLayers::GetNumberOfAnnotations());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAnnotationLayers_GetAnnotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnnotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotationLayers *op = static_cast<vtkAnnotationLayers *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkAnnotation *tempr = (ap.IsBound() ?
      op->GetAnnotation(temp0) :
      op->vtkAnnotationLayers::GetAnnotation(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAnnotationLayers_AddAnnotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddAnnotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotationLayers *op = static_cast<vtkAnnotationLayers *>(vp);

  vtkAnnotation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAnnotation"))
  {
    if (ap.IsBound())
    {
      op->AddAnnotation(temp0);
    }
    else
    {
      op->vtkAnnotationLayers::AddAnnotation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAnnotationLayers_RemoveAnnotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAnnotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotationLayers *op = static_cast<vtkAnnotationLayers *>(vp);

  vtkAnnotation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAnnotation"))
  {
    if (ap.IsBound())
    {
      op->RemoveAnnotation(temp0);
    }
    else
    {
      op->vtkAnnotationLayers::RemoveAnnotation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAnnotationLayers_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotationLayers *op = static_cast<vtkAnnotationLayers *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Initialize();
    }
    else
    {
      op->vtkAnnotationLayers::Initialize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAnnotationLayers_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotationLayers *op = static_cast<vtkAnnotationLayers *>(vp);

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
      op->vtkAnnotationLayers::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAnnotationLayers_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotationLayers *op = static_cast<vtkAnnotationLayers *>(vp);

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
      op->vtkAnnotationLayers::DeepCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAnnotationLayers_GetData_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
  {
    vtkAnnotationLayers *tempr = vtkAnnotationLayers::GetData(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkAnnotationLayers_GetData_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformationVector *temp0 = nullptr;
  int temp1 = 0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkInformationVector") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    vtkAnnotationLayers *tempr = vtkAnnotationLayers::GetData(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkAnnotationLayers_GetData_Methods[] = {
  {nullptr, PyvtkAnnotationLayers_GetData_s1, METH_VARARGS | METH_STATIC,
   "V *vtkInformation"},
  {nullptr, PyvtkAnnotationLayers_GetData_s2, METH_VARARGS | METH_STATIC,
   "V|i *vtkInformationVector"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkAnnotationLayers_GetData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkAnnotationLayers_GetData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 2:
      return PyvtkAnnotationLayers_GetData_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetData");
  return nullptr;
}



static PyObject *
PyvtkAnnotationLayers_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotationLayers *op = static_cast<vtkAnnotationLayers *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkAnnotationLayers::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkAnnotationLayers_Methods[] = {
  {"IsTypeOf", PyvtkAnnotationLayers_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkAnnotationLayers_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkAnnotationLayers_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkAnnotationLayers\nC++: static vtkAnnotationLayers *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkAnnotationLayers_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkAnnotationLayers\nC++: vtkAnnotationLayers *NewInstance()\n\n"},
  {"SetCurrentAnnotation", PyvtkAnnotationLayers_SetCurrentAnnotation, METH_VARARGS,
   "V.SetCurrentAnnotation(vtkAnnotation)\nC++: virtual void SetCurrentAnnotation(vtkAnnotation *ann)\n\nThe current annotation associated with this annotation link.\n"},
  {"GetCurrentAnnotation", PyvtkAnnotationLayers_GetCurrentAnnotation, METH_VARARGS,
   "V.GetCurrentAnnotation() -> vtkAnnotation\nC++: virtual vtkAnnotation *GetCurrentAnnotation()\n\nThe current annotation associated with this annotation link.\n"},
  {"SetCurrentSelection", PyvtkAnnotationLayers_SetCurrentSelection, METH_VARARGS,
   "V.SetCurrentSelection(vtkSelection)\nC++: virtual void SetCurrentSelection(vtkSelection *sel)\n\nThe current selection associated with this annotation link. This\nis simply the selection contained in the current annotation.\n"},
  {"GetCurrentSelection", PyvtkAnnotationLayers_GetCurrentSelection, METH_VARARGS,
   "V.GetCurrentSelection() -> vtkSelection\nC++: virtual vtkSelection *GetCurrentSelection()\n\nThe current selection associated with this annotation link. This\nis simply the selection contained in the current annotation.\n"},
  {"GetNumberOfAnnotations", PyvtkAnnotationLayers_GetNumberOfAnnotations, METH_VARARGS,
   "V.GetNumberOfAnnotations() -> int\nC++: unsigned int GetNumberOfAnnotations()\n\nThe number of annotations in a specific layer.\n"},
  {"GetAnnotation", PyvtkAnnotationLayers_GetAnnotation, METH_VARARGS,
   "V.GetAnnotation(int) -> vtkAnnotation\nC++: vtkAnnotation *GetAnnotation(unsigned int idx)\n\nRetrieve an annotation from a layer.\n"},
  {"AddAnnotation", PyvtkAnnotationLayers_AddAnnotation, METH_VARARGS,
   "V.AddAnnotation(vtkAnnotation)\nC++: void AddAnnotation(vtkAnnotation *ann)\n\nAdd an annotation to a layer.\n"},
  {"RemoveAnnotation", PyvtkAnnotationLayers_RemoveAnnotation, METH_VARARGS,
   "V.RemoveAnnotation(vtkAnnotation)\nC++: void RemoveAnnotation(vtkAnnotation *ann)\n\nRemove an annotation from a layer.\n"},
  {"Initialize", PyvtkAnnotationLayers_Initialize, METH_VARARGS,
   "V.Initialize()\nC++: void Initialize() override;\n\nInitialize the data structure to an empty state.\n"},
  {"ShallowCopy", PyvtkAnnotationLayers_ShallowCopy, METH_VARARGS,
   "V.ShallowCopy(vtkDataObject)\nC++: void ShallowCopy(vtkDataObject *other) override;\n\nCopy data from another data object into this one which references\nthe same member annotations.\n"},
  {"DeepCopy", PyvtkAnnotationLayers_DeepCopy, METH_VARARGS,
   "V.DeepCopy(vtkDataObject)\nC++: void DeepCopy(vtkDataObject *other) override;\n\nCopy data from another data object into this one, performing a\ndeep copy of member annotations.\n"},
  {"GetData", PyvtkAnnotationLayers_GetData, METH_VARARGS,
   "V.GetData(vtkInformation) -> vtkAnnotationLayers\nC++: static vtkAnnotationLayers *GetData(vtkInformation *info)\nV.GetData(vtkInformationVector, int) -> vtkAnnotationLayers\nC++: static vtkAnnotationLayers *GetData(vtkInformationVector *v,\n    int i=0)\n\nRetrieve a vtkAnnotationLayers stored inside an information\nobject.\n"},
  {"GetMTime", PyvtkAnnotationLayers_GetMTime, METH_VARARGS,
   "V.GetMTime() -> int\nC++: vtkMTimeType GetMTime() override;\n\nThe modified time for this object.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkAnnotationLayers_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonDataModelPython.vtkAnnotationLayers", // tp_name
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
  PyvtkAnnotationLayers_Doc, // tp_doc
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

static vtkObjectBase *PyvtkAnnotationLayers_StaticNew()
{
  return vtkAnnotationLayers::New();
}

PyObject *PyvtkAnnotationLayers_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkAnnotationLayers_Type, PyvtkAnnotationLayers_Methods,
    "vtkAnnotationLayers",
 &PyvtkAnnotationLayers_StaticNew);

  PyTypeObject *pytype = &PyvtkAnnotationLayers_Type;

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

void PyVTKAddFile_vtkAnnotationLayers(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkAnnotationLayers_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkAnnotationLayers", o) != 0)
  {
    Py_DECREF(o);
  }

}

