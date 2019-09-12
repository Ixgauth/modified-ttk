// python wrapper for vtkSMMultiSliceViewProxy
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
#include "vtkSMMultiSliceViewProxy.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMMultiSliceViewProxy(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMMultiSliceViewProxy_ClassNew(); }

#ifndef DECLARED_PyvtkSMRenderViewProxy_ClassNew
extern "C" { PyObject *PyvtkSMRenderViewProxy_ClassNew(); }
#define DECLARED_PyvtkSMRenderViewProxy_ClassNew
#endif

static const char *PyvtkSMMultiSliceViewProxy_Doc =
  "vtkSMMultiSliceViewProxy - Custom RenderViewProxy to override\nCreateDefaultRepresentation method so only the Multi-Slice\nrepresentation will be available to the user\n\n"
  "Superclass: vtkSMRenderViewProxy\n\n"
;


static PyObject *
PyvtkSMMultiSliceViewProxy_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMMultiSliceViewProxy::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMMultiSliceViewProxy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMMultiSliceViewProxy *op = static_cast<vtkSMMultiSliceViewProxy *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMMultiSliceViewProxy::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMMultiSliceViewProxy_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMMultiSliceViewProxy *tempr = vtkSMMultiSliceViewProxy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMMultiSliceViewProxy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMMultiSliceViewProxy *op = static_cast<vtkSMMultiSliceViewProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMMultiSliceViewProxy *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMMultiSliceViewProxy::NewInstance());

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
PyvtkSMMultiSliceViewProxy_IsSelectVisiblePointsAvailable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsSelectVisiblePointsAvailable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMMultiSliceViewProxy *op = static_cast<vtkSMMultiSliceViewProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->IsSelectVisiblePointsAvailable() :
      op->vtkSMMultiSliceViewProxy::IsSelectVisiblePointsAvailable());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMMultiSliceViewProxy_CreateDefaultRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMMultiSliceViewProxy *op = static_cast<vtkSMMultiSliceViewProxy *>(vp);

  vtkSMProxy *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      ap.GetValue(temp1))
  {
    vtkSMRepresentationProxy *tempr = (ap.IsBound() ?
      op->CreateDefaultRepresentation(temp0, temp1) :
      op->vtkSMMultiSliceViewProxy::CreateDefaultRepresentation(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMMultiSliceViewProxy_GetRepresentationType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRepresentationType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMMultiSliceViewProxy *op = static_cast<vtkSMMultiSliceViewProxy *>(vp);

  vtkSMSourceProxy *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMSourceProxy") &&
      ap.GetValue(temp1))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetRepresentationType(temp0, temp1) :
      op->vtkSMMultiSliceViewProxy::GetRepresentationType(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMMultiSliceViewProxy_GetDataBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMMultiSliceViewProxy *op = static_cast<vtkSMMultiSliceViewProxy *>(vp);

  const size_t size0 = 6;
  double temp0[6];
  double save0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetDataBounds(temp0);
    }
    else
    {
      op->vtkSMMultiSliceViewProxy::GetDataBounds(temp0);
    }

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSMMultiSliceViewProxy_GetDataBounds_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetDataBounds");

  vtkSMSourceProxy *temp0 = nullptr;
  int temp1;
  const size_t size2 = 6;
  double temp2[6];
  double save2[6];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkSMSourceProxy") &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2))
  {
    ap.Save(temp2, save2, size2);

    bool tempr = vtkSMMultiSliceViewProxy::GetDataBounds(temp0, temp1, temp2);

    if (ap.HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMMultiSliceViewProxy_GetDataBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 1:
      return PyvtkSMMultiSliceViewProxy_GetDataBounds_s1(self, args);
    case 3:
      return PyvtkSMMultiSliceViewProxy_GetDataBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetDataBounds");
  return nullptr;
}



static PyObject *
PyvtkSMMultiSliceViewProxy_ForceRepresentationType(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ForceRepresentationType");

  vtkSMProxy *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      ap.GetValue(temp1))
  {
    vtkSMMultiSliceViewProxy::ForceRepresentationType(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSMMultiSliceViewProxy_Methods[] = {
  {"IsTypeOf", PyvtkSMMultiSliceViewProxy_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMMultiSliceViewProxy_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMMultiSliceViewProxy_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSMMultiSliceViewProxy\nC++: static vtkSMMultiSliceViewProxy *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMMultiSliceViewProxy_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSMMultiSliceViewProxy\nC++: vtkSMMultiSliceViewProxy *NewInstance()\n\n"},
  {"IsSelectVisiblePointsAvailable", PyvtkSMMultiSliceViewProxy_IsSelectVisiblePointsAvailable, METH_VARARGS,
   "V.IsSelectVisiblePointsAvailable() -> string\nC++: const char *IsSelectVisiblePointsAvailable() override;\n\nSimilar to IsSelectionAvailable(), however, on failure returns\nthe error message otherwise 0.\n"},
  {"CreateDefaultRepresentation", PyvtkSMMultiSliceViewProxy_CreateDefaultRepresentation, METH_VARARGS,
   "V.CreateDefaultRepresentation(vtkSMProxy, int)\n    -> vtkSMRepresentationProxy\nC++: vtkSMRepresentationProxy *CreateDefaultRepresentation(\n    vtkSMProxy *proxy, int outputPort) override;\n\nOverridden to set initial default slices when a representation is\ncreated. Not sure that's the best way to do this, but leaving the\nlogic unchanged in this pass.\n"},
  {"GetRepresentationType", PyvtkSMMultiSliceViewProxy_GetRepresentationType, METH_VARARGS,
   "V.GetRepresentationType(vtkSMSourceProxy, int) -> string\nC++: const char *GetRepresentationType(vtkSMSourceProxy *producer,\n     int outputPort) override;\n\nOverridden to forward the call to the internal root view proxy.\n"},
  {"GetDataBounds", PyvtkSMMultiSliceViewProxy_GetDataBounds, METH_VARARGS,
   "V.GetDataBounds([float, float, float, float, float, float])\nC++: void GetDataBounds(double bounds[6])\nV.GetDataBounds(vtkSMSourceProxy, int, [float, float, float,\n    float, float, float]) -> bool\nC++: static bool GetDataBounds(vtkSMSourceProxy *source,\n    int opport, double bounds[6])\n\nFetchs data bounds from the client-side object. We simply fetch\nthe client-side data bounds since vtkPVMultiSliceView ensures\nthat they are synced among all ranks in Update().\n"},
  {"ForceRepresentationType", PyvtkSMMultiSliceViewProxy_ForceRepresentationType, METH_VARARGS,
   "V.ForceRepresentationType(vtkSMProxy, string)\nC++: static void ForceRepresentationType(vtkSMProxy *reprProxy,\n    const char *type)\n\nHACK: method to force representation type to \"Slices\".\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMMultiSliceViewProxy_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerRenderingPython.vtkSMMultiSliceViewProxy", // tp_name
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
  PyvtkSMMultiSliceViewProxy_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSMMultiSliceViewProxy_StaticNew()
{
  return vtkSMMultiSliceViewProxy::New();
}

PyObject *PyvtkSMMultiSliceViewProxy_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMMultiSliceViewProxy_Type, PyvtkSMMultiSliceViewProxy_Methods,
    "vtkSMMultiSliceViewProxy",
 &PyvtkSMMultiSliceViewProxy_StaticNew);

  PyTypeObject *pytype = &PyvtkSMMultiSliceViewProxy_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkSMRenderViewProxy_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSMMultiSliceViewProxy(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMMultiSliceViewProxy_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMMultiSliceViewProxy", o) != 0)
  {
    Py_DECREF(o);
  }

}

