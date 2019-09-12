// python wrapper for vtkMoleculeToAtomBallFilter
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
#include "vtkMoleculeToAtomBallFilter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMoleculeToAtomBallFilter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkMoleculeToAtomBallFilter_ClassNew(); }

#ifndef DECLARED_PyvtkMoleculeToPolyDataFilter_ClassNew
extern "C" { PyObject *PyvtkMoleculeToPolyDataFilter_ClassNew(); }
#define DECLARED_PyvtkMoleculeToPolyDataFilter_ClassNew
#endif

static const char *PyvtkMoleculeToAtomBallFilter_Doc =
  "vtkMoleculeToAtomBallFilter - Generate polydata with spheres\nrepresenting atoms\n\n"
  "Superclass: vtkMoleculeToPolyDataFilter\n\n"
  "This filter is used to generate one sphere for each atom in the input\n"
  "vtkMolecule. Each sphere is centered at the atom center and can be\n"
  "scaled using either covalent or van der Waals radii. The point\n"
  "scalars of the output vtkPolyData contains the atomic number of the\n"
  "appropriate atom for color mapping.\n\n"
  "ote Consider using the faster, simpler vtkMoleculeMapper class,\n"
  "rather than generating polydata manually via these filters.\n\n"
  "@sa\n"
  "vtkMoleculeMapper vtkMoleculeToBondStickFilter\n\n";


static PyObject *
PyvtkMoleculeToAtomBallFilter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMoleculeToAtomBallFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeToAtomBallFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeToAtomBallFilter *op = static_cast<vtkMoleculeToAtomBallFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMoleculeToAtomBallFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeToAtomBallFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMoleculeToAtomBallFilter *tempr = vtkMoleculeToAtomBallFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeToAtomBallFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeToAtomBallFilter *op = static_cast<vtkMoleculeToAtomBallFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMoleculeToAtomBallFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMoleculeToAtomBallFilter::NewInstance());

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
PyvtkMoleculeToAtomBallFilter_GetRadiusSource(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadiusSource");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeToAtomBallFilter *op = static_cast<vtkMoleculeToAtomBallFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRadiusSource() :
      op->vtkMoleculeToAtomBallFilter::GetRadiusSource());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeToAtomBallFilter_SetRadiusSource(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRadiusSource");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeToAtomBallFilter *op = static_cast<vtkMoleculeToAtomBallFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRadiusSource(temp0);
    }
    else
    {
      op->vtkMoleculeToAtomBallFilter::SetRadiusSource(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeToAtomBallFilter_GetResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeToAtomBallFilter *op = static_cast<vtkMoleculeToAtomBallFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetResolution() :
      op->vtkMoleculeToAtomBallFilter::GetResolution());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeToAtomBallFilter_SetResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeToAtomBallFilter *op = static_cast<vtkMoleculeToAtomBallFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetResolution(temp0);
    }
    else
    {
      op->vtkMoleculeToAtomBallFilter::SetResolution(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeToAtomBallFilter_GetRadiusScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadiusScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeToAtomBallFilter *op = static_cast<vtkMoleculeToAtomBallFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRadiusScale() :
      op->vtkMoleculeToAtomBallFilter::GetRadiusScale());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeToAtomBallFilter_SetRadiusScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRadiusScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeToAtomBallFilter *op = static_cast<vtkMoleculeToAtomBallFilter *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRadiusScale(temp0);
    }
    else
    {
      op->vtkMoleculeToAtomBallFilter::SetRadiusScale(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkMoleculeToAtomBallFilter_Methods[] = {
  {"IsTypeOf", PyvtkMoleculeToAtomBallFilter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMoleculeToAtomBallFilter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMoleculeToAtomBallFilter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkMoleculeToAtomBallFilter\nC++: static vtkMoleculeToAtomBallFilter *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMoleculeToAtomBallFilter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkMoleculeToAtomBallFilter\nC++: vtkMoleculeToAtomBallFilter *NewInstance()\n\n"},
  {"GetRadiusSource", PyvtkMoleculeToAtomBallFilter_GetRadiusSource, METH_VARARGS,
   "V.GetRadiusSource() -> int\nC++: virtual int GetRadiusSource()\n\n"},
  {"SetRadiusSource", PyvtkMoleculeToAtomBallFilter_SetRadiusSource, METH_VARARGS,
   "V.SetRadiusSource(int)\nC++: virtual void SetRadiusSource(int _arg)\n\n"},
  {"GetResolution", PyvtkMoleculeToAtomBallFilter_GetResolution, METH_VARARGS,
   "V.GetResolution() -> int\nC++: virtual int GetResolution()\n\n"},
  {"SetResolution", PyvtkMoleculeToAtomBallFilter_SetResolution, METH_VARARGS,
   "V.SetResolution(int)\nC++: virtual void SetResolution(int _arg)\n\n"},
  {"GetRadiusScale", PyvtkMoleculeToAtomBallFilter_GetRadiusScale, METH_VARARGS,
   "V.GetRadiusScale() -> float\nC++: virtual double GetRadiusScale()\n\n"},
  {"SetRadiusScale", PyvtkMoleculeToAtomBallFilter_SetRadiusScale, METH_VARARGS,
   "V.SetRadiusScale(float)\nC++: virtual void SetRadiusScale(double _arg)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkMoleculeToAtomBallFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkDomainsChemistryPython.vtkMoleculeToAtomBallFilter", // tp_name
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
  PyvtkMoleculeToAtomBallFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMoleculeToAtomBallFilter_StaticNew()
{
  return vtkMoleculeToAtomBallFilter::New();
}

PyObject *PyvtkMoleculeToAtomBallFilter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkMoleculeToAtomBallFilter_Type, PyvtkMoleculeToAtomBallFilter_Methods,
    "vtkMoleculeToAtomBallFilter",
 &PyvtkMoleculeToAtomBallFilter_StaticNew);

  PyTypeObject *pytype = &PyvtkMoleculeToAtomBallFilter_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkMoleculeToPolyDataFilter_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 3; c++)
  {
    static const struct { const char *name; int value; }
      constants[3] = {
        { "CovalentRadius", vtkMoleculeToAtomBallFilter::CovalentRadius },
        { "VDWRadius", vtkMoleculeToAtomBallFilter::VDWRadius },
        { "UnitRadius", vtkMoleculeToAtomBallFilter::UnitRadius },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMoleculeToAtomBallFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMoleculeToAtomBallFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMoleculeToAtomBallFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

