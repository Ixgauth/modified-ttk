// python wrapper for vtkPVX3DExporter
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
#include "vtkPVX3DExporter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPVX3DExporter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPVX3DExporter_ClassNew(); }

#ifndef DECLARED_PyvtkX3DExporter_ClassNew
extern "C" { PyObject *PyvtkX3DExporter_ClassNew(); }
#define DECLARED_PyvtkX3DExporter_ClassNew
#endif

static const char *PyvtkPVX3DExporter_Doc =
  "vtkPVX3DExporter - ParaView-specific X3D exporter that handles export\nof color legends\n         in addition to the items exported by vtkX3DExporter.\n\n"
  "Superclass: vtkX3DExporter\n\n"
;


static PyObject *
PyvtkPVX3DExporter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPVX3DExporter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVX3DExporter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVX3DExporter *op = static_cast<vtkPVX3DExporter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVX3DExporter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVX3DExporter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPVX3DExporter *tempr = vtkPVX3DExporter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVX3DExporter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVX3DExporter *op = static_cast<vtkPVX3DExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVX3DExporter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVX3DExporter::NewInstance());

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
PyvtkPVX3DExporter_SetExportColorLegends(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExportColorLegends");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVX3DExporter *op = static_cast<vtkPVX3DExporter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetExportColorLegends(temp0);
    }
    else
    {
      op->vtkPVX3DExporter::SetExportColorLegends(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVX3DExporter_GetExportColorLegends(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExportColorLegends");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVX3DExporter *op = static_cast<vtkPVX3DExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetExportColorLegends() :
      op->vtkPVX3DExporter::GetExportColorLegends());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVX3DExporter_ExportColorLegendsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExportColorLegendsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVX3DExporter *op = static_cast<vtkPVX3DExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ExportColorLegendsOn();
    }
    else
    {
      op->vtkPVX3DExporter::ExportColorLegendsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVX3DExporter_ExportColorLegendsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExportColorLegendsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVX3DExporter *op = static_cast<vtkPVX3DExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ExportColorLegendsOff();
    }
    else
    {
      op->vtkPVX3DExporter::ExportColorLegendsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPVX3DExporter_Methods[] = {
  {"IsTypeOf", PyvtkPVX3DExporter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPVX3DExporter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPVX3DExporter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPVX3DExporter\nC++: static vtkPVX3DExporter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPVX3DExporter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPVX3DExporter\nC++: vtkPVX3DExporter *NewInstance()\n\n"},
  {"SetExportColorLegends", PyvtkPVX3DExporter_SetExportColorLegends, METH_VARARGS,
   "V.SetExportColorLegends(bool)\nC++: virtual void SetExportColorLegends(bool _arg)\n\nIndicates whether color legends should be exported.\n"},
  {"GetExportColorLegends", PyvtkPVX3DExporter_GetExportColorLegends, METH_VARARGS,
   "V.GetExportColorLegends() -> bool\nC++: virtual bool GetExportColorLegends()\n\n"},
  {"ExportColorLegendsOn", PyvtkPVX3DExporter_ExportColorLegendsOn, METH_VARARGS,
   "V.ExportColorLegendsOn()\nC++: virtual void ExportColorLegendsOn()\n\n"},
  {"ExportColorLegendsOff", PyvtkPVX3DExporter_ExportColorLegendsOff, METH_VARARGS,
   "V.ExportColorLegendsOff()\nC++: virtual void ExportColorLegendsOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPVX3DExporter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerDefaultPython.vtkPVX3DExporter", // tp_name
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
  PyvtkPVX3DExporter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPVX3DExporter_StaticNew()
{
  return vtkPVX3DExporter::New();
}

PyObject *PyvtkPVX3DExporter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPVX3DExporter_Type, PyvtkPVX3DExporter_Methods,
    "vtkPVX3DExporter",
 &PyvtkPVX3DExporter_StaticNew);

  PyTypeObject *pytype = &PyvtkPVX3DExporter_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkX3DExporter_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPVX3DExporter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPVX3DExporter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPVX3DExporter", o) != 0)
  {
    Py_DECREF(o);
  }

}

