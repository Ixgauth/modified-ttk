// python wrapper for vtkPlatonicSolidSource
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
#include "vtkPlatonicSolidSource.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPlatonicSolidSource(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPlatonicSolidSource_ClassNew(); }

#ifndef DECLARED_PyvtkPolyDataAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPolyDataAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPolyDataAlgorithm_ClassNew
#endif

static const char *PyvtkPlatonicSolidSource_Doc =
  "vtkPlatonicSolidSource - produce polygonal Platonic solids\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkPlatonicSolidSource can generate each of the five Platonic solids:\n"
  "tetrahedron, cube, octahedron, icosahedron, and dodecahedron. Each of\n"
  "the solids is placed inside a sphere centered at the origin with\n"
  "radius 1.0. To use this class, simply specify the solid to create.\n"
  "Note that this source object creates cell scalars that are (integral\n"
  "value) face numbers.\n\n";


static PyObject *
PyvtkPlatonicSolidSource_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPlatonicSolidSource::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlatonicSolidSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlatonicSolidSource *op = static_cast<vtkPlatonicSolidSource *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPlatonicSolidSource::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlatonicSolidSource_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPlatonicSolidSource *tempr = vtkPlatonicSolidSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlatonicSolidSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlatonicSolidSource *op = static_cast<vtkPlatonicSolidSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPlatonicSolidSource *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPlatonicSolidSource::NewInstance());

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
PyvtkPlatonicSolidSource_SetSolidType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSolidType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlatonicSolidSource *op = static_cast<vtkPlatonicSolidSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSolidType(temp0);
    }
    else
    {
      op->vtkPlatonicSolidSource::SetSolidType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlatonicSolidSource_GetSolidTypeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSolidTypeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlatonicSolidSource *op = static_cast<vtkPlatonicSolidSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSolidTypeMinValue() :
      op->vtkPlatonicSolidSource::GetSolidTypeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlatonicSolidSource_GetSolidTypeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSolidTypeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlatonicSolidSource *op = static_cast<vtkPlatonicSolidSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSolidTypeMaxValue() :
      op->vtkPlatonicSolidSource::GetSolidTypeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlatonicSolidSource_GetSolidType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSolidType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlatonicSolidSource *op = static_cast<vtkPlatonicSolidSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSolidType() :
      op->vtkPlatonicSolidSource::GetSolidType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlatonicSolidSource_SetSolidTypeToTetrahedron(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSolidTypeToTetrahedron");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlatonicSolidSource *op = static_cast<vtkPlatonicSolidSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetSolidTypeToTetrahedron();
    }
    else
    {
      op->vtkPlatonicSolidSource::SetSolidTypeToTetrahedron();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlatonicSolidSource_SetSolidTypeToCube(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSolidTypeToCube");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlatonicSolidSource *op = static_cast<vtkPlatonicSolidSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetSolidTypeToCube();
    }
    else
    {
      op->vtkPlatonicSolidSource::SetSolidTypeToCube();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlatonicSolidSource_SetSolidTypeToOctahedron(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSolidTypeToOctahedron");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlatonicSolidSource *op = static_cast<vtkPlatonicSolidSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetSolidTypeToOctahedron();
    }
    else
    {
      op->vtkPlatonicSolidSource::SetSolidTypeToOctahedron();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlatonicSolidSource_SetSolidTypeToIcosahedron(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSolidTypeToIcosahedron");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlatonicSolidSource *op = static_cast<vtkPlatonicSolidSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetSolidTypeToIcosahedron();
    }
    else
    {
      op->vtkPlatonicSolidSource::SetSolidTypeToIcosahedron();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlatonicSolidSource_SetSolidTypeToDodecahedron(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSolidTypeToDodecahedron");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlatonicSolidSource *op = static_cast<vtkPlatonicSolidSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetSolidTypeToDodecahedron();
    }
    else
    {
      op->vtkPlatonicSolidSource::SetSolidTypeToDodecahedron();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlatonicSolidSource_SetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlatonicSolidSource *op = static_cast<vtkPlatonicSolidSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOutputPointsPrecision(temp0);
    }
    else
    {
      op->vtkPlatonicSolidSource::SetOutputPointsPrecision(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlatonicSolidSource_GetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlatonicSolidSource *op = static_cast<vtkPlatonicSolidSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecision() :
      op->vtkPlatonicSolidSource::GetOutputPointsPrecision());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPlatonicSolidSource_Methods[] = {
  {"IsTypeOf", PyvtkPlatonicSolidSource_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPlatonicSolidSource_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPlatonicSolidSource_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPlatonicSolidSource\nC++: static vtkPlatonicSolidSource *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPlatonicSolidSource_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPlatonicSolidSource\nC++: vtkPlatonicSolidSource *NewInstance()\n\n"},
  {"SetSolidType", PyvtkPlatonicSolidSource_SetSolidType, METH_VARARGS,
   "V.SetSolidType(int)\nC++: virtual void SetSolidType(int _arg)\n\nSpecify the type of PlatonicSolid solid to create.\n"},
  {"GetSolidTypeMinValue", PyvtkPlatonicSolidSource_GetSolidTypeMinValue, METH_VARARGS,
   "V.GetSolidTypeMinValue() -> int\nC++: virtual int GetSolidTypeMinValue()\n\nSpecify the type of PlatonicSolid solid to create.\n"},
  {"GetSolidTypeMaxValue", PyvtkPlatonicSolidSource_GetSolidTypeMaxValue, METH_VARARGS,
   "V.GetSolidTypeMaxValue() -> int\nC++: virtual int GetSolidTypeMaxValue()\n\nSpecify the type of PlatonicSolid solid to create.\n"},
  {"GetSolidType", PyvtkPlatonicSolidSource_GetSolidType, METH_VARARGS,
   "V.GetSolidType() -> int\nC++: virtual int GetSolidType()\n\nSpecify the type of PlatonicSolid solid to create.\n"},
  {"SetSolidTypeToTetrahedron", PyvtkPlatonicSolidSource_SetSolidTypeToTetrahedron, METH_VARARGS,
   "V.SetSolidTypeToTetrahedron()\nC++: void SetSolidTypeToTetrahedron()\n\nSpecify the type of PlatonicSolid solid to create.\n"},
  {"SetSolidTypeToCube", PyvtkPlatonicSolidSource_SetSolidTypeToCube, METH_VARARGS,
   "V.SetSolidTypeToCube()\nC++: void SetSolidTypeToCube()\n\nSpecify the type of PlatonicSolid solid to create.\n"},
  {"SetSolidTypeToOctahedron", PyvtkPlatonicSolidSource_SetSolidTypeToOctahedron, METH_VARARGS,
   "V.SetSolidTypeToOctahedron()\nC++: void SetSolidTypeToOctahedron()\n\nSpecify the type of PlatonicSolid solid to create.\n"},
  {"SetSolidTypeToIcosahedron", PyvtkPlatonicSolidSource_SetSolidTypeToIcosahedron, METH_VARARGS,
   "V.SetSolidTypeToIcosahedron()\nC++: void SetSolidTypeToIcosahedron()\n\nSpecify the type of PlatonicSolid solid to create.\n"},
  {"SetSolidTypeToDodecahedron", PyvtkPlatonicSolidSource_SetSolidTypeToDodecahedron, METH_VARARGS,
   "V.SetSolidTypeToDodecahedron()\nC++: void SetSolidTypeToDodecahedron()\n\nSpecify the type of PlatonicSolid solid to create.\n"},
  {"SetOutputPointsPrecision", PyvtkPlatonicSolidSource_SetOutputPointsPrecision, METH_VARARGS,
   "V.SetOutputPointsPrecision(int)\nC++: virtual void SetOutputPointsPrecision(int _arg)\n\nSet/get the desired precision for the output points.\nvtkAlgorithm::SINGLE_PRECISION - Output single-precision floating\npoint. vtkAlgorithm::DOUBLE_PRECISION - Output double-precision\nfloating point.\n"},
  {"GetOutputPointsPrecision", PyvtkPlatonicSolidSource_GetOutputPointsPrecision, METH_VARARGS,
   "V.GetOutputPointsPrecision() -> int\nC++: virtual int GetOutputPointsPrecision()\n\nSet/get the desired precision for the output points.\nvtkAlgorithm::SINGLE_PRECISION - Output single-precision floating\npoint. vtkAlgorithm::DOUBLE_PRECISION - Output double-precision\nfloating point.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPlatonicSolidSource_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersSourcesPython.vtkPlatonicSolidSource", // tp_name
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
  PyvtkPlatonicSolidSource_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPlatonicSolidSource_StaticNew()
{
  return vtkPlatonicSolidSource::New();
}

PyObject *PyvtkPlatonicSolidSource_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPlatonicSolidSource_Type, PyvtkPlatonicSolidSource_Methods,
    "vtkPlatonicSolidSource",
 &PyvtkPlatonicSolidSource_StaticNew);

  PyTypeObject *pytype = &PyvtkPlatonicSolidSource_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPolyDataAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPlatonicSolidSource(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPlatonicSolidSource_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPlatonicSolidSource", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 5; c++)
  {
    static const struct { const char *name; int value; }
      constants[5] = {
        { "VTK_SOLID_TETRAHEDRON", 0 },
        { "VTK_SOLID_CUBE", 1 },
        { "VTK_SOLID_OCTAHEDRON", 2 },
        { "VTK_SOLID_ICOSAHEDRON", 3 },
        { "VTK_SOLID_DODECAHEDRON", 4 },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

