// python wrapper for vtkPVGridAxes3DRepresentation
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
#include "vtkPVGridAxes3DRepresentation.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPVGridAxes3DRepresentation(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPVGridAxes3DRepresentation_ClassNew(); }

#ifndef DECLARED_PyvtkPVDataRepresentation_ClassNew
extern "C" { PyObject *PyvtkPVDataRepresentation_ClassNew(); }
#define DECLARED_PyvtkPVDataRepresentation_ClassNew
#endif

static const char *PyvtkPVGridAxes3DRepresentation_Doc =
  "vtkPVGridAxes3DRepresentation - Representation for\nvtkPVGridAxis3DActor.\n\n"
  "Superclass: vtkPVDataRepresentation\n\n"
;


static PyObject *
PyvtkPVGridAxes3DRepresentation_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPVGridAxes3DRepresentation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVGridAxes3DRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGridAxes3DRepresentation *op = static_cast<vtkPVGridAxes3DRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVGridAxes3DRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVGridAxes3DRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPVGridAxes3DRepresentation *tempr = vtkPVGridAxes3DRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVGridAxes3DRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGridAxes3DRepresentation *op = static_cast<vtkPVGridAxes3DRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVGridAxes3DRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVGridAxes3DRepresentation::NewInstance());

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
PyvtkPVGridAxes3DRepresentation_SetGridAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGridAxes3DRepresentation *op = static_cast<vtkPVGridAxes3DRepresentation *>(vp);

  vtkPVGridAxes3DActor *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVGridAxes3DActor"))
  {
    if (ap.IsBound())
    {
      op->SetGridAxes(temp0);
    }
    else
    {
      op->vtkPVGridAxes3DRepresentation::SetGridAxes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVGridAxes3DRepresentation_GetGridAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGridAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGridAxes3DRepresentation *op = static_cast<vtkPVGridAxes3DRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVGridAxes3DActor *tempr = (ap.IsBound() ?
      op->GetGridAxes() :
      op->vtkPVGridAxes3DRepresentation::GetGridAxes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVGridAxes3DRepresentation_MarkModified(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MarkModified");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGridAxes3DRepresentation *op = static_cast<vtkPVGridAxes3DRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MarkModified();
    }
    else
    {
      op->vtkPVGridAxes3DRepresentation::MarkModified();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVGridAxes3DRepresentation_SetVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGridAxes3DRepresentation *op = static_cast<vtkPVGridAxes3DRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVisibility(temp0);
    }
    else
    {
      op->vtkPVGridAxes3DRepresentation::SetVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVGridAxes3DRepresentation_SetGridAxesVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridAxesVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGridAxes3DRepresentation *op = static_cast<vtkPVGridAxes3DRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGridAxesVisibility(temp0);
    }
    else
    {
      op->vtkPVGridAxes3DRepresentation::SetGridAxesVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVGridAxes3DRepresentation_SetPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGridAxes3DRepresentation *op = static_cast<vtkPVGridAxes3DRepresentation *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetPosition(temp0);
    }
    else
    {
      op->vtkPVGridAxes3DRepresentation::SetPosition(temp0);
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
PyvtkPVGridAxes3DRepresentation_SetPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGridAxes3DRepresentation *op = static_cast<vtkPVGridAxes3DRepresentation *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetPosition(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPVGridAxes3DRepresentation::SetPosition(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPVGridAxes3DRepresentation_SetPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkPVGridAxes3DRepresentation_SetPosition_s1(self, args);
    case 3:
      return PyvtkPVGridAxes3DRepresentation_SetPosition_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPosition");
  return nullptr;
}



static PyObject *
PyvtkPVGridAxes3DRepresentation_SetScale_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGridAxes3DRepresentation *op = static_cast<vtkPVGridAxes3DRepresentation *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetScale(temp0);
    }
    else
    {
      op->vtkPVGridAxes3DRepresentation::SetScale(temp0);
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
PyvtkPVGridAxes3DRepresentation_SetScale_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGridAxes3DRepresentation *op = static_cast<vtkPVGridAxes3DRepresentation *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetScale(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPVGridAxes3DRepresentation::SetScale(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPVGridAxes3DRepresentation_SetScale(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkPVGridAxes3DRepresentation_SetScale_s1(self, args);
    case 3:
      return PyvtkPVGridAxes3DRepresentation_SetScale_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetScale");
  return nullptr;
}



static PyObject *
PyvtkPVGridAxes3DRepresentation_ProcessViewRequest(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessViewRequest");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGridAxes3DRepresentation *op = static_cast<vtkPVGridAxes3DRepresentation *>(vp);

  vtkInformationRequestKey *temp0 = nullptr;
  vtkInformation *temp1 = nullptr;
  vtkInformation *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkInformationRequestKey") &&
      ap.GetVTKObject(temp1, "vtkInformation") &&
      ap.GetVTKObject(temp2, "vtkInformation"))
  {
    int tempr = (ap.IsBound() ?
      op->ProcessViewRequest(temp0, temp1, temp2) :
      op->vtkPVGridAxes3DRepresentation::ProcessViewRequest(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPVGridAxes3DRepresentation_Methods[] = {
  {"IsTypeOf", PyvtkPVGridAxes3DRepresentation_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPVGridAxes3DRepresentation_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPVGridAxes3DRepresentation_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPVGridAxes3DRepresentation\nC++: static vtkPVGridAxes3DRepresentation *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPVGridAxes3DRepresentation_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPVGridAxes3DRepresentation\nC++: vtkPVGridAxes3DRepresentation *NewInstance()\n\n"},
  {"SetGridAxes", PyvtkPVGridAxes3DRepresentation_SetGridAxes, METH_VARARGS,
   "V.SetGridAxes(vtkPVGridAxes3DActor)\nC++: void SetGridAxes(vtkPVGridAxes3DActor *gridAxes)\n\n"},
  {"GetGridAxes", PyvtkPVGridAxes3DRepresentation_GetGridAxes, METH_VARARGS,
   "V.GetGridAxes() -> vtkPVGridAxes3DActor\nC++: virtual vtkPVGridAxes3DActor *GetGridAxes()\n\n"},
  {"MarkModified", PyvtkPVGridAxes3DRepresentation_MarkModified, METH_VARARGS,
   "V.MarkModified()\nC++: void MarkModified() override;\n\nThis is one of the most important functions. In VTK pipelines,\nit's very easy for the pipeline to decide when it needs to\nre-execute. vtkAlgorithm::Update() can go up the entire pipeline\nto see if any filters MTime changed (among other things) and if\nso, it can re-execute the pipeline. However in case of\nrepresentations, the real input connection may only be present on\nthe data-server nodes. In that case the\nvtkPVDataRepresentation::RequestData() will only get called on\nthe data-server nodes. That means that representations won't be\nable to any data-delivery in RequestData(). We'd need some other\nmechanisms to synchronize data-delivery among processes. To avoid\nthat conundrum, the vtkSMRepresentationProxy calls MarkModified()\non all processes whenever any filter in the pipeline is modified.\nIn this method, the vtkPVDataRepresentation subclasses should\nensure that they mark all delivery related filters dirty in their\nRequestData to ensure they execute then next time they are\nupdated. The vtkPVDataRepresentation also uses a special\nexecutive which avoids updating the representation unless\nMarkModified() was called since the last Update(), thus acting as\na update-suppressor.\n"},
  {"SetVisibility", PyvtkPVGridAxes3DRepresentation_SetVisibility, METH_VARARGS,
   "V.SetVisibility(bool)\nC++: void SetVisibility(bool) override;\n\nGet/Set the visibility for this representation. When the\nvisibility of representation of false, all view passes are\nignored.\n"},
  {"SetGridAxesVisibility", PyvtkPVGridAxes3DRepresentation_SetGridAxesVisibility, METH_VARARGS,
   "V.SetGridAxesVisibility(bool)\nC++: void SetGridAxesVisibility(bool)\n\n"},
  {"SetPosition", PyvtkPVGridAxes3DRepresentation_SetPosition, METH_VARARGS,
   "V.SetPosition([float, float, float])\nC++: void SetPosition(double pos[3])\nV.SetPosition(float, float, float)\nC++: void SetPosition(double x, double y, double z)\n\n"},
  {"SetScale", PyvtkPVGridAxes3DRepresentation_SetScale, METH_VARARGS,
   "V.SetScale([float, float, float])\nC++: void SetScale(double scale[3])\nV.SetScale(float, float, float)\nC++: void SetScale(double x, double y, double z)\n\n"},
  {"ProcessViewRequest", PyvtkPVGridAxes3DRepresentation_ProcessViewRequest, METH_VARARGS,
   "V.ProcessViewRequest(vtkInformationRequestKey, vtkInformation,\n    vtkInformation) -> int\nC++: int ProcessViewRequest(\n    vtkInformationRequestKey *request_type,\n    vtkInformation *inInfo, vtkInformation *outInfo) override;\n\nvtkAlgorithm::ProcessRequest() equivalent for rendering passes.\nThis is typically called by the vtkView to request meta-data from\nthe representations or ask them to perform certain tasks e.g.\nPrepareForRendering. Overridden to skip processing when\nvisibility if off.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPVGridAxes3DRepresentation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVClientServerCoreRenderingPython.vtkPVGridAxes3DRepresentation", // tp_name
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
  PyvtkPVGridAxes3DRepresentation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPVGridAxes3DRepresentation_StaticNew()
{
  return vtkPVGridAxes3DRepresentation::New();
}

PyObject *PyvtkPVGridAxes3DRepresentation_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPVGridAxes3DRepresentation_Type, PyvtkPVGridAxes3DRepresentation_Methods,
    "vtkPVGridAxes3DRepresentation",
 &PyvtkPVGridAxes3DRepresentation_StaticNew);

  PyTypeObject *pytype = &PyvtkPVGridAxes3DRepresentation_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPVDataRepresentation_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPVGridAxes3DRepresentation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPVGridAxes3DRepresentation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPVGridAxes3DRepresentation", o) != 0)
  {
    Py_DECREF(o);
  }

}

