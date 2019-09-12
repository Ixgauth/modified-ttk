// python wrapper for vtkGeometryRepresentationWithFaces
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
#include "vtkGeometryRepresentationWithFaces.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkGeometryRepresentationWithFaces(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkGeometryRepresentationWithFaces_ClassNew(); }

#ifndef DECLARED_PyvtkGeometryRepresentation_ClassNew
extern "C" { PyObject *PyvtkGeometryRepresentation_ClassNew(); }
#define DECLARED_PyvtkGeometryRepresentation_ClassNew
#endif

static const char *PyvtkGeometryRepresentationWithFaces_Doc =
  "vtkGeometryRepresentationWithFaces -\nvtkGeometryRepresentationWithFaces extends vtkGeometryRepresentation\nto add support for rendering back and front faces separately (with\ndifferent visibility and properties).\n\n"
  "Superclass: vtkGeometryRepresentation\n\n"
;

static PyTypeObject PyvtkGeometryRepresentationWithFaces_RepresentationTypesEx_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVClientServerCoreRenderingPython.vtkGeometryRepresentationWithFaces.RepresentationTypesEx", // tp_name
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

PyObject *PyvtkGeometryRepresentationWithFaces_RepresentationTypesEx_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkGeometryRepresentationWithFaces_RepresentationTypesEx_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkGeometryRepresentationWithFaces_RepresentationTypesEx_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkGeometryRepresentationWithFaces_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkGeometryRepresentationWithFaces::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryRepresentationWithFaces_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentationWithFaces *op = static_cast<vtkGeometryRepresentationWithFaces *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGeometryRepresentationWithFaces::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryRepresentationWithFaces_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkGeometryRepresentationWithFaces *tempr = vtkGeometryRepresentationWithFaces::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryRepresentationWithFaces_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentationWithFaces *op = static_cast<vtkGeometryRepresentationWithFaces *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkGeometryRepresentationWithFaces *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGeometryRepresentationWithFaces::NewInstance());

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
PyvtkGeometryRepresentationWithFaces_ProcessViewRequest(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessViewRequest");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentationWithFaces *op = static_cast<vtkGeometryRepresentationWithFaces *>(vp);

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
      op->vtkGeometryRepresentationWithFaces::ProcessViewRequest(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryRepresentationWithFaces_SetVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentationWithFaces *op = static_cast<vtkGeometryRepresentationWithFaces *>(vp);

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
      op->vtkGeometryRepresentationWithFaces::SetVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryRepresentationWithFaces_SetBackfaceRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackfaceRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentationWithFaces *op = static_cast<vtkGeometryRepresentationWithFaces *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBackfaceRepresentation(temp0);
    }
    else
    {
      op->vtkGeometryRepresentationWithFaces::SetBackfaceRepresentation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryRepresentationWithFaces_GetBackfaceRepresentationMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBackfaceRepresentationMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentationWithFaces *op = static_cast<vtkGeometryRepresentationWithFaces *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBackfaceRepresentationMinValue() :
      op->vtkGeometryRepresentationWithFaces::GetBackfaceRepresentationMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryRepresentationWithFaces_GetBackfaceRepresentationMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBackfaceRepresentationMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentationWithFaces *op = static_cast<vtkGeometryRepresentationWithFaces *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBackfaceRepresentationMaxValue() :
      op->vtkGeometryRepresentationWithFaces::GetBackfaceRepresentationMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryRepresentationWithFaces_GetBackfaceRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBackfaceRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentationWithFaces *op = static_cast<vtkGeometryRepresentationWithFaces *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBackfaceRepresentation() :
      op->vtkGeometryRepresentationWithFaces::GetBackfaceRepresentation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryRepresentationWithFaces_SetBackfaceAmbientColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackfaceAmbientColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentationWithFaces *op = static_cast<vtkGeometryRepresentationWithFaces *>(vp);

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
      op->SetBackfaceAmbientColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkGeometryRepresentationWithFaces::SetBackfaceAmbientColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryRepresentationWithFaces_SetBackfaceDiffuseColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackfaceDiffuseColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentationWithFaces *op = static_cast<vtkGeometryRepresentationWithFaces *>(vp);

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
      op->SetBackfaceDiffuseColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkGeometryRepresentationWithFaces::SetBackfaceDiffuseColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryRepresentationWithFaces_SetBackfaceOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackfaceOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentationWithFaces *op = static_cast<vtkGeometryRepresentationWithFaces *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBackfaceOpacity(temp0);
    }
    else
    {
      op->vtkGeometryRepresentationWithFaces::SetBackfaceOpacity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkGeometryRepresentationWithFaces_Methods[] = {
  {"IsTypeOf", PyvtkGeometryRepresentationWithFaces_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkGeometryRepresentationWithFaces_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkGeometryRepresentationWithFaces_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase)\n    -> vtkGeometryRepresentationWithFaces\nC++: static vtkGeometryRepresentationWithFaces *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkGeometryRepresentationWithFaces_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkGeometryRepresentationWithFaces\nC++: vtkGeometryRepresentationWithFaces *NewInstance()\n\n"},
  {"ProcessViewRequest", PyvtkGeometryRepresentationWithFaces_ProcessViewRequest, METH_VARARGS,
   "V.ProcessViewRequest(vtkInformationRequestKey, vtkInformation,\n    vtkInformation) -> int\nC++: int ProcessViewRequest(\n    vtkInformationRequestKey *request_type,\n    vtkInformation *inInfo, vtkInformation *outInfo) override;\n\nvtkAlgorithm::ProcessRequest() equivalent for rendering passes.\nThis is typically called by the vtkView to request meta-data from\nthe representations or ask them to perform certain tasks e.g.\nPrepareForRendering.\n"},
  {"SetVisibility", PyvtkGeometryRepresentationWithFaces_SetVisibility, METH_VARARGS,
   "V.SetVisibility(bool)\nC++: void SetVisibility(bool val) override;\n\nGet/Set the visibility for this representation. When the\nvisibility of representation of false, all view passes are\nignored.\n"},
  {"SetBackfaceRepresentation", PyvtkGeometryRepresentationWithFaces_SetBackfaceRepresentation, METH_VARARGS,
   "V.SetBackfaceRepresentation(int)\nC++: virtual void SetBackfaceRepresentation(int _arg)\n\nSet the backface representation.\n"},
  {"GetBackfaceRepresentationMinValue", PyvtkGeometryRepresentationWithFaces_GetBackfaceRepresentationMinValue, METH_VARARGS,
   "V.GetBackfaceRepresentationMinValue() -> int\nC++: virtual int GetBackfaceRepresentationMinValue()\n\nSet the backface representation.\n"},
  {"GetBackfaceRepresentationMaxValue", PyvtkGeometryRepresentationWithFaces_GetBackfaceRepresentationMaxValue, METH_VARARGS,
   "V.GetBackfaceRepresentationMaxValue() -> int\nC++: virtual int GetBackfaceRepresentationMaxValue()\n\nSet the backface representation.\n"},
  {"GetBackfaceRepresentation", PyvtkGeometryRepresentationWithFaces_GetBackfaceRepresentation, METH_VARARGS,
   "V.GetBackfaceRepresentation() -> int\nC++: virtual int GetBackfaceRepresentation()\n\nSet the backface representation.\n"},
  {"SetBackfaceAmbientColor", PyvtkGeometryRepresentationWithFaces_SetBackfaceAmbientColor, METH_VARARGS,
   "V.SetBackfaceAmbientColor(float, float, float)\nC++: void SetBackfaceAmbientColor(double r, double g, double b)\n\n"},
  {"SetBackfaceDiffuseColor", PyvtkGeometryRepresentationWithFaces_SetBackfaceDiffuseColor, METH_VARARGS,
   "V.SetBackfaceDiffuseColor(float, float, float)\nC++: void SetBackfaceDiffuseColor(double r, double g, double b)\n\n"},
  {"SetBackfaceOpacity", PyvtkGeometryRepresentationWithFaces_SetBackfaceOpacity, METH_VARARGS,
   "V.SetBackfaceOpacity(float)\nC++: void SetBackfaceOpacity(double val)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkGeometryRepresentationWithFaces_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVClientServerCoreRenderingPython.vtkGeometryRepresentationWithFaces", // tp_name
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
  PyvtkGeometryRepresentationWithFaces_Doc, // tp_doc
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

static vtkObjectBase *PyvtkGeometryRepresentationWithFaces_StaticNew()
{
  return vtkGeometryRepresentationWithFaces::New();
}

PyObject *PyvtkGeometryRepresentationWithFaces_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkGeometryRepresentationWithFaces_Type, PyvtkGeometryRepresentationWithFaces_Methods,
    "vtkGeometryRepresentationWithFaces",
 &PyvtkGeometryRepresentationWithFaces_StaticNew);

  PyTypeObject *pytype = &PyvtkGeometryRepresentationWithFaces_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkGeometryRepresentation_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkGeometryRepresentationWithFaces_RepresentationTypesEx_Type);
  PyvtkGeometryRepresentationWithFaces_RepresentationTypesEx_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkGeometryRepresentationWithFaces_RepresentationTypesEx_Type);

  o = (PyObject *)&PyvtkGeometryRepresentationWithFaces_RepresentationTypesEx_Type;
  if (PyDict_SetItemString(d, "RepresentationTypesEx", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 3; c++)
  {
    typedef vtkGeometryRepresentationWithFaces::RepresentationTypesEx cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[3] = {
        { "FOLLOW_FRONTFACE", vtkGeometryRepresentationWithFaces::FOLLOW_FRONTFACE },
        { "CULL_BACKFACE", vtkGeometryRepresentationWithFaces::CULL_BACKFACE },
        { "CULL_FRONTFACE", vtkGeometryRepresentationWithFaces::CULL_FRONTFACE },
      };

    o = PyvtkGeometryRepresentationWithFaces_RepresentationTypesEx_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkGeometryRepresentationWithFaces(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkGeometryRepresentationWithFaces_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkGeometryRepresentationWithFaces", o) != 0)
  {
    Py_DECREF(o);
  }

}

