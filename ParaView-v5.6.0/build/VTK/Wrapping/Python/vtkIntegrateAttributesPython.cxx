// python wrapper for vtkIntegrateAttributes
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
#include "vtkIntegrateAttributes.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkIntegrateAttributes(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkIntegrateAttributes_ClassNew(); }

#ifndef DECLARED_PyvtkUnstructuredGridAlgorithm_ClassNew
extern "C" { PyObject *PyvtkUnstructuredGridAlgorithm_ClassNew(); }
#define DECLARED_PyvtkUnstructuredGridAlgorithm_ClassNew
#endif

static const char *PyvtkIntegrateAttributes_Doc =
  "vtkIntegrateAttributes - Integrates lines, surfaces and volume.\n\n"
  "Superclass: vtkUnstructuredGridAlgorithm\n\n"
  "Integrates all point and cell data attributes while computing length,\n"
  "area or volume.  Works for 1D, 2D or 3D.  Only one dimensionality at\n"
  "a time.  For volume, this filter ignores all but 3D cells.  It will\n"
  "not compute the volume contained in a closed surface. The output of\n"
  "this filter is a single point and vertex.  The attributes for this\n"
  "point and cell will contain the integration results for the\n"
  "corresponding input attributes.\n\n";

static PyTypeObject PyvtkIntegrateAttributes_CommunicationIds_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersParallelPython.vtkIntegrateAttributes.CommunicationIds", // tp_name
  sizeof(PyIntObject), // tp_basicsize
  0, // tp_itemsize
  nullptr, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  nullptr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  nullptr, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  nullptr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  nullptr, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  &PyInt_Type, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  nullptr, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

PyObject *PyvtkIntegrateAttributes_CommunicationIds_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkIntegrateAttributes_CommunicationIds_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkIntegrateAttributes_CommunicationIds_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkIntegrateAttributes_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkIntegrateAttributes::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIntegrateAttributes_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIntegrateAttributes *op = static_cast<vtkIntegrateAttributes *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkIntegrateAttributes::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIntegrateAttributes_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkIntegrateAttributes *tempr = vtkIntegrateAttributes::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIntegrateAttributes_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIntegrateAttributes *op = static_cast<vtkIntegrateAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIntegrateAttributes *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkIntegrateAttributes::NewInstance());

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
PyvtkIntegrateAttributes_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIntegrateAttributes *op = static_cast<vtkIntegrateAttributes *>(vp);

  vtkMultiProcessController *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMultiProcessController"))
  {
    if (ap.IsBound())
    {
      op->SetController(temp0);
    }
    else
    {
      op->vtkIntegrateAttributes::SetController(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIntegrateAttributes_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIntegrateAttributes *op = static_cast<vtkIntegrateAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetController() :
      op->vtkIntegrateAttributes::GetController());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIntegrateAttributes_SetDivideAllCellDataByVolume(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDivideAllCellDataByVolume");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIntegrateAttributes *op = static_cast<vtkIntegrateAttributes *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDivideAllCellDataByVolume(temp0);
    }
    else
    {
      op->vtkIntegrateAttributes::SetDivideAllCellDataByVolume(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIntegrateAttributes_GetDivideAllCellDataByVolume(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDivideAllCellDataByVolume");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIntegrateAttributes *op = static_cast<vtkIntegrateAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetDivideAllCellDataByVolume() :
      op->vtkIntegrateAttributes::GetDivideAllCellDataByVolume());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkIntegrateAttributes_Methods[] = {
  {"IsTypeOf", PyvtkIntegrateAttributes_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkIntegrateAttributes_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkIntegrateAttributes_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkIntegrateAttributes\nC++: static vtkIntegrateAttributes *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkIntegrateAttributes_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkIntegrateAttributes\nC++: vtkIntegrateAttributes *NewInstance()\n\n"},
  {"SetController", PyvtkIntegrateAttributes_SetController, METH_VARARGS,
   "V.SetController(vtkMultiProcessController)\nC++: void SetController(vtkMultiProcessController *controller)\n\nGet/Set the parallel controller to use. By default, set to.\n`vtkMultiProcessController::GlobalController`.\n"},
  {"GetController", PyvtkIntegrateAttributes_GetController, METH_VARARGS,
   "V.GetController() -> vtkMultiProcessController\nC++: virtual vtkMultiProcessController *GetController()\n\nGet/Set the parallel controller to use. By default, set to.\n`vtkMultiProcessController::GlobalController`.\n"},
  {"SetDivideAllCellDataByVolume", PyvtkIntegrateAttributes_SetDivideAllCellDataByVolume, METH_VARARGS,
   "V.SetDivideAllCellDataByVolume(bool)\nC++: virtual void SetDivideAllCellDataByVolume(bool _arg)\n\nIf set to true then the filter will divide all output cell data\narrays (the integrated values) by the computed volume/area of the\ndataset.  Defaults to false.\n"},
  {"GetDivideAllCellDataByVolume", PyvtkIntegrateAttributes_GetDivideAllCellDataByVolume, METH_VARARGS,
   "V.GetDivideAllCellDataByVolume() -> bool\nC++: virtual bool GetDivideAllCellDataByVolume()\n\nIf set to true then the filter will divide all output cell data\narrays (the integrated values) by the computed volume/area of the\ndataset.  Defaults to false.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkIntegrateAttributes_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersParallelPython.vtkIntegrateAttributes", // tp_name
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
  PyvtkIntegrateAttributes_Doc, // tp_doc
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

static vtkObjectBase *PyvtkIntegrateAttributes_StaticNew()
{
  return vtkIntegrateAttributes::New();
}

PyObject *PyvtkIntegrateAttributes_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkIntegrateAttributes_Type, PyvtkIntegrateAttributes_Methods,
    "vtkIntegrateAttributes",
 &PyvtkIntegrateAttributes_StaticNew);

  PyTypeObject *pytype = &PyvtkIntegrateAttributes_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkUnstructuredGridAlgorithm_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkIntegrateAttributes_CommunicationIds_Type);
  PyvtkIntegrateAttributes_CommunicationIds_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkIntegrateAttributes_CommunicationIds_Type);

  o = (PyObject *)&PyvtkIntegrateAttributes_CommunicationIds_Type;
  if (PyDict_SetItemString(d, "CommunicationIds", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 2; c++)
  {
    typedef vtkIntegrateAttributes::CommunicationIds cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[2] = {
        { "IntegrateAttrInfo", vtkIntegrateAttributes::IntegrateAttrInfo },
        { "IntegrateAttrData", vtkIntegrateAttributes::IntegrateAttrData },
      };

    o = PyvtkIntegrateAttributes_CommunicationIds_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkIntegrateAttributes(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkIntegrateAttributes_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkIntegrateAttributes", o) != 0)
  {
    Py_DECREF(o);
  }

}

