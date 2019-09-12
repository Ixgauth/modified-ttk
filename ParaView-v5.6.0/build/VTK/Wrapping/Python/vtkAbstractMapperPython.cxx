// python wrapper for vtkAbstractMapper
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
#include "vtkAbstractMapper.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkAbstractMapper(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkAbstractMapper_ClassNew(); }

#ifndef DECLARED_PyvtkAlgorithm_ClassNew
extern "C" { PyObject *PyvtkAlgorithm_ClassNew(); }
#define DECLARED_PyvtkAlgorithm_ClassNew
#endif

static const char *PyvtkAbstractMapper_Doc =
  "vtkAbstractMapper - abstract class specifies interface to map data\n\n"
  "Superclass: vtkAlgorithm\n\n"
  "vtkAbstractMapper is an abstract class to specify interface between\n"
  "data and graphics primitives or software rendering techniques.\n"
  "Subclasses of vtkAbstractMapper can be used for rendering 2D data,\n"
  "geometry, or volumetric data.\n\n"
  "@sa\n"
  "vtkAbstractMapper3D vtkMapper vtkPolyDataMapper vtkVolumeMapper\n\n";


static PyObject *
PyvtkAbstractMapper_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkAbstractMapper::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractMapper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractMapper *op = static_cast<vtkAbstractMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAbstractMapper::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractMapper_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkAbstractMapper *tempr = vtkAbstractMapper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractMapper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractMapper *op = static_cast<vtkAbstractMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractMapper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAbstractMapper::NewInstance());

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
PyvtkAbstractMapper_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractMapper *op = static_cast<vtkAbstractMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkAbstractMapper::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractMapper_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractMapper *op = static_cast<vtkAbstractMapper *>(vp);

  vtkWindow *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkWindow"))
  {
    if (ap.IsBound())
    {
      op->ReleaseGraphicsResources(temp0);
    }
    else
    {
      op->vtkAbstractMapper::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractMapper_GetTimeToDraw(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeToDraw");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractMapper *op = static_cast<vtkAbstractMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTimeToDraw() :
      op->vtkAbstractMapper::GetTimeToDraw());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractMapper_AddClippingPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddClippingPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractMapper *op = static_cast<vtkAbstractMapper *>(vp);

  vtkPlane *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPlane"))
  {
    if (ap.IsBound())
    {
      op->AddClippingPlane(temp0);
    }
    else
    {
      op->vtkAbstractMapper::AddClippingPlane(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractMapper_RemoveClippingPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveClippingPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractMapper *op = static_cast<vtkAbstractMapper *>(vp);

  vtkPlane *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPlane"))
  {
    if (ap.IsBound())
    {
      op->RemoveClippingPlane(temp0);
    }
    else
    {
      op->vtkAbstractMapper::RemoveClippingPlane(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractMapper_RemoveAllClippingPlanes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllClippingPlanes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractMapper *op = static_cast<vtkAbstractMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllClippingPlanes();
    }
    else
    {
      op->vtkAbstractMapper::RemoveAllClippingPlanes();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractMapper_SetClippingPlanes_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClippingPlanes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractMapper *op = static_cast<vtkAbstractMapper *>(vp);

  vtkPlaneCollection *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPlaneCollection"))
  {
    if (ap.IsBound())
    {
      op->SetClippingPlanes(temp0);
    }
    else
    {
      op->vtkAbstractMapper::SetClippingPlanes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAbstractMapper_SetClippingPlanes_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClippingPlanes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractMapper *op = static_cast<vtkAbstractMapper *>(vp);

  vtkPlanes *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPlanes"))
  {
    if (ap.IsBound())
    {
      op->SetClippingPlanes(temp0);
    }
    else
    {
      op->vtkAbstractMapper::SetClippingPlanes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkAbstractMapper_SetClippingPlanes_Methods[] = {
  {nullptr, PyvtkAbstractMapper_SetClippingPlanes_s1, METH_VARARGS,
   "@V *vtkPlaneCollection"},
  {nullptr, PyvtkAbstractMapper_SetClippingPlanes_s2, METH_VARARGS,
   "@V *vtkPlanes"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkAbstractMapper_SetClippingPlanes(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkAbstractMapper_SetClippingPlanes_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetClippingPlanes");
  return nullptr;
}



static PyObject *
PyvtkAbstractMapper_GetClippingPlanes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClippingPlanes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractMapper *op = static_cast<vtkAbstractMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPlaneCollection *tempr = (ap.IsBound() ?
      op->GetClippingPlanes() :
      op->vtkAbstractMapper::GetClippingPlanes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractMapper_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractMapper *op = static_cast<vtkAbstractMapper *>(vp);

  vtkAbstractMapper *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractMapper"))
  {
    if (ap.IsBound())
    {
      op->ShallowCopy(temp0);
    }
    else
    {
      op->vtkAbstractMapper::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractMapper_GetScalars(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetScalars");

  vtkDataSet *temp0 = nullptr;
  int temp1;
  int temp2;
  int temp3;
  const char *temp4 = nullptr;
  int temp5;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(6) &&
      ap.GetVTKObject(temp0, "vtkDataSet") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
  {
    vtkDataArray *tempr = vtkAbstractMapper::GetScalars(temp0, temp1, temp2, temp3, temp4, temp5);

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(5, temp5);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractMapper_GetAbstractScalars(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetAbstractScalars");

  vtkDataSet *temp0 = nullptr;
  int temp1;
  int temp2;
  int temp3;
  const char *temp4 = nullptr;
  int temp5;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(6) &&
      ap.GetVTKObject(temp0, "vtkDataSet") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
  {
    vtkAbstractArray *tempr = vtkAbstractMapper::GetAbstractScalars(temp0, temp1, temp2, temp3, temp4, temp5);

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(5, temp5);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractMapper_GetNumberOfClippingPlanes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfClippingPlanes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractMapper *op = static_cast<vtkAbstractMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfClippingPlanes() :
      op->vtkAbstractMapper::GetNumberOfClippingPlanes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkAbstractMapper_Methods[] = {
  {"IsTypeOf", PyvtkAbstractMapper_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkAbstractMapper_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkAbstractMapper_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkAbstractMapper\nC++: static vtkAbstractMapper *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkAbstractMapper_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkAbstractMapper\nC++: vtkAbstractMapper *NewInstance()\n\n"},
  {"GetMTime", PyvtkAbstractMapper_GetMTime, METH_VARARGS,
   "V.GetMTime() -> int\nC++: vtkMTimeType GetMTime() override;\n\nOverride Modifiedtime as we have added Clipping planes\n"},
  {"ReleaseGraphicsResources", PyvtkAbstractMapper_ReleaseGraphicsResources, METH_VARARGS,
   "V.ReleaseGraphicsResources(vtkWindow)\nC++: virtual void ReleaseGraphicsResources(vtkWindow *)\n\nRelease any graphics resources that are being consumed by this\nmapper. The parameter window could be used to determine which\ngraphic resources to release.\n"},
  {"GetTimeToDraw", PyvtkAbstractMapper_GetTimeToDraw, METH_VARARGS,
   "V.GetTimeToDraw() -> float\nC++: virtual double GetTimeToDraw()\n\nGet the time required to draw the geometry last time it was\nrendered\n"},
  {"AddClippingPlane", PyvtkAbstractMapper_AddClippingPlane, METH_VARARGS,
   "V.AddClippingPlane(vtkPlane)\nC++: void AddClippingPlane(vtkPlane *plane)\n\nSpecify clipping planes to be applied when the data is mapped (at\nmost 6 clipping planes can be specified).\n"},
  {"RemoveClippingPlane", PyvtkAbstractMapper_RemoveClippingPlane, METH_VARARGS,
   "V.RemoveClippingPlane(vtkPlane)\nC++: void RemoveClippingPlane(vtkPlane *plane)\n\nSpecify clipping planes to be applied when the data is mapped (at\nmost 6 clipping planes can be specified).\n"},
  {"RemoveAllClippingPlanes", PyvtkAbstractMapper_RemoveAllClippingPlanes, METH_VARARGS,
   "V.RemoveAllClippingPlanes()\nC++: void RemoveAllClippingPlanes()\n\nSpecify clipping planes to be applied when the data is mapped (at\nmost 6 clipping planes can be specified).\n"},
  {"SetClippingPlanes", PyvtkAbstractMapper_SetClippingPlanes, METH_VARARGS,
   "V.SetClippingPlanes(vtkPlaneCollection)\nC++: virtual void SetClippingPlanes(vtkPlaneCollection *)\nV.SetClippingPlanes(vtkPlanes)\nC++: void SetClippingPlanes(vtkPlanes *planes)\n\nGet/Set the vtkPlaneCollection which specifies the clipping\nplanes.\n"},
  {"GetClippingPlanes", PyvtkAbstractMapper_GetClippingPlanes, METH_VARARGS,
   "V.GetClippingPlanes() -> vtkPlaneCollection\nC++: virtual vtkPlaneCollection *GetClippingPlanes()\n\nGet/Set the vtkPlaneCollection which specifies the clipping\nplanes.\n"},
  {"ShallowCopy", PyvtkAbstractMapper_ShallowCopy, METH_VARARGS,
   "V.ShallowCopy(vtkAbstractMapper)\nC++: void ShallowCopy(vtkAbstractMapper *m)\n\nMake a shallow copy of this mapper.\n"},
  {"GetScalars", PyvtkAbstractMapper_GetScalars, METH_VARARGS,
   "V.GetScalars(vtkDataSet, int, int, int, string, int)\n    -> vtkDataArray\nC++: static vtkDataArray *GetScalars(vtkDataSet *input,\n    int scalarMode, int arrayAccessMode, int arrayId,\n    const char *arrayName, int &cellFlag)\n\nInternal helper function for getting the active scalars. The\nscalar mode indicates where the scalars come from.  The cellFlag\nis a return value that is set when the scalars actually are cell\nscalars. (0 for point scalars, 1 for cell scalars, 2 for field\nscalars) The arrayAccessMode is used to indicate how to retrieve\nthe scalars from field data, per id or per name (if the\nscalarMode indicates that).\n"},
  {"GetAbstractScalars", PyvtkAbstractMapper_GetAbstractScalars, METH_VARARGS,
   "V.GetAbstractScalars(vtkDataSet, int, int, int, string, int)\n    -> vtkAbstractArray\nC++: static vtkAbstractArray *GetAbstractScalars(\n    vtkDataSet *input, int scalarMode, int arrayAccessMode,\n    int arrayId, const char *arrayName, int &cellFlag)\n\nInternal helper function for getting the active scalars as an\nabstract array. The scalar mode indicates where the scalars come\nfrom.  The cellFlag is a return value that is set when the\nscalars actually are cell scalars.  (0 for point scalars, 1 for\ncell scalars, 2 for field scalars) The arrayAccessMode is used to\nindicate how to retrieve the scalars from field data, per id or\nper name (if the scalarMode indicates that).\n"},
  {"GetNumberOfClippingPlanes", PyvtkAbstractMapper_GetNumberOfClippingPlanes, METH_VARARGS,
   "V.GetNumberOfClippingPlanes() -> int\nC++: int GetNumberOfClippingPlanes()\n\nGet the number of clipping planes.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkAbstractMapper_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingCorePython.vtkAbstractMapper", // tp_name
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
  PyvtkAbstractMapper_Doc, // tp_doc
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

PyObject *PyvtkAbstractMapper_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkAbstractMapper_Type, PyvtkAbstractMapper_Methods,
    "vtkAbstractMapper",
 nullptr);

  PyTypeObject *pytype = &PyvtkAbstractMapper_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkAbstractMapper(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkAbstractMapper_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkAbstractMapper", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 8; c++)
  {
    static const struct { const char *name; int value; }
      constants[8] = {
        { "VTK_SCALAR_MODE_DEFAULT", 0 },
        { "VTK_SCALAR_MODE_USE_POINT_DATA", 1 },
        { "VTK_SCALAR_MODE_USE_CELL_DATA", 2 },
        { "VTK_SCALAR_MODE_USE_POINT_FIELD_DATA", 3 },
        { "VTK_SCALAR_MODE_USE_CELL_FIELD_DATA", 4 },
        { "VTK_SCALAR_MODE_USE_FIELD_DATA", 5 },
        { "VTK_GET_ARRAY_BY_ID", 0 },
        { "VTK_GET_ARRAY_BY_NAME", 1 },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

