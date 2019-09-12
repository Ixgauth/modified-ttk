// python wrapper for vtkSMBoundsDomain
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
#include "vtkSMBoundsDomain.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMBoundsDomain(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMBoundsDomain_ClassNew(); }

#ifndef DECLARED_PyvtkSMDoubleRangeDomain_ClassNew
extern "C" { PyObject *PyvtkSMDoubleRangeDomain_ClassNew(); }
#define DECLARED_PyvtkSMDoubleRangeDomain_ClassNew
#endif

static const char *PyvtkSMBoundsDomain_Doc =
  "vtkSMBoundsDomain - double range domain based on data set bounds\n\n"
  "Superclass: vtkSMDoubleRangeDomain\n\n"
  "vtkSMBoundsDomain extends vtkSMDoubleRangeDomain to add support to\n"
  "determine the valid range for the values based on the dataset bounds.\n"
  "There are severalModes which can be used to control how the range is\n"
  "computed based on the data bounds (defined by the\n"
  "vtkSMBoundsDomain::Modes enum).\n"
  "\\li NORMAL : this is the basic mode where the domain will have 3\n"
  "    ranges which\n"
  "are the min and max for the bounds along each of the coordinate axis.\n"
  "\\li MAGNITUDE: the domain has a single range set to (-magn/2.0,\n"
  "    +magn/2.0)\n"
  "where magn is the magnitude of the diagonal.\n"
  "\\li ORIENTED_MAGNITUDE:  same as MAGNITUDE, but instead of the\n"
  "    diagonal, a\n"
  "vector determined using two additional required properties with\n"
  "functions Normal, and Origin is used.\n"
  "\\li SCALED_EXTENT: the range is set to (0, maxbounds *\n"
  "    this->ScaleFactor)\n"
  "where maxbounds is the length of the longest axis for the bounding\n"
  "box.\n"
  "\\li ARRAY_SCALED_EXTENT: the range is set to (0, (arrayMagnitude /\n"
  "    maxbounds) *\n"
  "this->ScaleFactor) where maxbounds is the length of the longest axis\n"
  "for the bounding box. and arrayMagnitude the maximum magnitude of the\n"
  "array.\n"
  "\\li APPROXIMATE_CELL_LENGTH: approximation for cell length computed\n"
  "    using the\n"
  "\\li DATA_BOUNDS: this mode for a 6 tuple property that takes the data\n"
  "bounds. The range will have 6 ranges: (xmin,xmax), (xmin,xmax),\n"
  "(ymin,ymax), (ymin,ymax), (zmin,zmax), and (zmin,zmax). If\n"
  "default_mode is not specified, then \"min,max,min,max,min,max\" is\n"
  "assumed.\n"
  "\\li EXTENTS: this mode for a property that takes a value between 0\n"
  "    and (max-min) for\n"
  "each component.\n\n"
  "To determine the input data bounds, this domain depends on a required\n"
  "property with function Input. The data-information from the\n"
  "source-proxy set as the value for that property is used to determine\n"
  "the bounds.\n\n"
  "Supported XML attributes:\n"
  "\\li mode : used to specify the Mode. Value can be \"normal\",\n"
  "    \"magnitude\",\n"
  "\"oriented_magnitude\", \"scaled_extent\", \"array_scaled_extent\", or\n"
  "\"approximate_cell_length\", \"data_bounds\".\n"
  "\\li scale_factor : used in SCALED_EXTENT, ARRAY_SCALED_EXTENT and\n"
  "    APPROXIMATE_CELL_LENGTH\n"
  "mode. Value is a floating point number that is used as the scale\n"
  "factor.\n\n";

static PyTypeObject PyvtkSMBoundsDomain_Modes_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerCorePython.vtkSMBoundsDomain.Modes", // tp_name
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

PyObject *PyvtkSMBoundsDomain_Modes_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkSMBoundsDomain_Modes_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkSMBoundsDomain_Modes_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}

static PyTypeObject PyvtkSMBoundsDomain_Axes_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerCorePython.vtkSMBoundsDomain.Axes", // tp_name
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

PyObject *PyvtkSMBoundsDomain_Axes_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkSMBoundsDomain_Axes_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkSMBoundsDomain_Axes_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkSMBoundsDomain_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMBoundsDomain::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMBoundsDomain_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMBoundsDomain *op = static_cast<vtkSMBoundsDomain *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMBoundsDomain::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMBoundsDomain_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMBoundsDomain *tempr = vtkSMBoundsDomain::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMBoundsDomain_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMBoundsDomain *op = static_cast<vtkSMBoundsDomain *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMBoundsDomain *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMBoundsDomain::NewInstance());

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
PyvtkSMBoundsDomain_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMBoundsDomain *op = static_cast<vtkSMBoundsDomain *>(vp);

  vtkSMProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProperty"))
  {
    if (ap.IsBound())
    {
      op->Update(temp0);
    }
    else
    {
      op->vtkSMBoundsDomain::Update(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMBoundsDomain_SetMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMBoundsDomain *op = static_cast<vtkSMBoundsDomain *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMode(temp0);
    }
    else
    {
      op->vtkSMBoundsDomain::SetMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMBoundsDomain_GetModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMBoundsDomain *op = static_cast<vtkSMBoundsDomain *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetModeMinValue() :
      op->vtkSMBoundsDomain::GetModeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMBoundsDomain_GetModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMBoundsDomain *op = static_cast<vtkSMBoundsDomain *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetModeMaxValue() :
      op->vtkSMBoundsDomain::GetModeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMBoundsDomain_GetMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMBoundsDomain *op = static_cast<vtkSMBoundsDomain *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMode() :
      op->vtkSMBoundsDomain::GetMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMBoundsDomain_GetScaleFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaleFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMBoundsDomain *op = static_cast<vtkSMBoundsDomain *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetScaleFactor() :
      op->vtkSMBoundsDomain::GetScaleFactor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMBoundsDomain_GetAxisFlags(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisFlags");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMBoundsDomain *op = static_cast<vtkSMBoundsDomain *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAxisFlags() :
      op->vtkSMBoundsDomain::GetAxisFlags());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMBoundsDomain_SetDefaultValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDefaultValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMBoundsDomain *op = static_cast<vtkSMBoundsDomain *>(vp);

  vtkSMProperty *temp0 = nullptr;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMProperty") &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->SetDefaultValues(temp0, temp1) :
      op->vtkSMBoundsDomain::SetDefaultValues(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSMBoundsDomain_Methods[] = {
  {"IsTypeOf", PyvtkSMBoundsDomain_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMBoundsDomain_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMBoundsDomain_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSMBoundsDomain\nC++: static vtkSMBoundsDomain *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMBoundsDomain_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSMBoundsDomain\nC++: vtkSMBoundsDomain *NewInstance()\n\n"},
  {"Update", PyvtkSMBoundsDomain_Update, METH_VARARGS,
   "V.Update(vtkSMProperty)\nC++: void Update(vtkSMProperty *) override;\n\nUpdate self checking the \"unchecked\" values of all required\nproperties. Overwritten by sub-classes.\n"},
  {"SetMode", PyvtkSMBoundsDomain_SetMode, METH_VARARGS,
   "V.SetMode(int)\nC++: virtual void SetMode(int _arg)\n\n"},
  {"GetModeMinValue", PyvtkSMBoundsDomain_GetModeMinValue, METH_VARARGS,
   "V.GetModeMinValue() -> int\nC++: virtual int GetModeMinValue()\n\n"},
  {"GetModeMaxValue", PyvtkSMBoundsDomain_GetModeMaxValue, METH_VARARGS,
   "V.GetModeMaxValue() -> int\nC++: virtual int GetModeMaxValue()\n\n"},
  {"GetMode", PyvtkSMBoundsDomain_GetMode, METH_VARARGS,
   "V.GetMode() -> int\nC++: virtual int GetMode()\n\n"},
  {"GetScaleFactor", PyvtkSMBoundsDomain_GetScaleFactor, METH_VARARGS,
   "V.GetScaleFactor() -> float\nC++: virtual double GetScaleFactor()\n\n"},
  {"GetAxisFlags", PyvtkSMBoundsDomain_GetAxisFlags, METH_VARARGS,
   "V.GetAxisFlags() -> int\nC++: virtual int GetAxisFlags()\n\n"},
  {"SetDefaultValues", PyvtkSMBoundsDomain_SetDefaultValues, METH_VARARGS,
   "V.SetDefaultValues(vtkSMProperty, bool) -> int\nC++: int SetDefaultValues(vtkSMProperty *property,\n    bool use_unchecked_values) override;\n\nOverridden to handle APPROXIMATE_CELL_LENGTH.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMBoundsDomain_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerCorePython.vtkSMBoundsDomain", // tp_name
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
  PyvtkSMBoundsDomain_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSMBoundsDomain_StaticNew()
{
  return vtkSMBoundsDomain::New();
}

PyObject *PyvtkSMBoundsDomain_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMBoundsDomain_Type, PyvtkSMBoundsDomain_Methods,
    "vtkSMBoundsDomain",
 &PyvtkSMBoundsDomain_StaticNew);

  PyTypeObject *pytype = &PyvtkSMBoundsDomain_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkSMDoubleRangeDomain_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkSMBoundsDomain_Modes_Type);
  PyvtkSMBoundsDomain_Modes_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkSMBoundsDomain_Modes_Type);

  o = (PyObject *)&PyvtkSMBoundsDomain_Modes_Type;
  if (PyDict_SetItemString(d, "Modes", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkSMBoundsDomain_Axes_Type);
  PyvtkSMBoundsDomain_Axes_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkSMBoundsDomain_Axes_Type);

  o = (PyObject *)&PyvtkSMBoundsDomain_Axes_Type;
  if (PyDict_SetItemString(d, "Axes", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 8; c++)
  {
    typedef vtkSMBoundsDomain::Modes cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[8] = {
        { "NORMAL", vtkSMBoundsDomain::NORMAL },
        { "MAGNITUDE", vtkSMBoundsDomain::MAGNITUDE },
        { "ORIENTED_MAGNITUDE", vtkSMBoundsDomain::ORIENTED_MAGNITUDE },
        { "SCALED_EXTENT", vtkSMBoundsDomain::SCALED_EXTENT },
        { "ARRAY_SCALED_EXTENT", vtkSMBoundsDomain::ARRAY_SCALED_EXTENT },
        { "APPROXIMATE_CELL_LENGTH", vtkSMBoundsDomain::APPROXIMATE_CELL_LENGTH },
        { "DATA_BOUNDS", vtkSMBoundsDomain::DATA_BOUNDS },
        { "EXTENTS", vtkSMBoundsDomain::EXTENTS },
      };

    o = PyvtkSMBoundsDomain_Modes_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 7; c++)
  {
    typedef vtkSMBoundsDomain::Axes cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[7] = {
        { "X_AXIS", vtkSMBoundsDomain::X_AXIS },
        { "Y_AXIS", vtkSMBoundsDomain::Y_AXIS },
        { "Z_AXIS", vtkSMBoundsDomain::Z_AXIS },
        { "X_AND_Y_AXES", vtkSMBoundsDomain::X_AND_Y_AXES },
        { "Y_AND_Z_AXES", vtkSMBoundsDomain::Y_AND_Z_AXES },
        { "X_AND_Z_AXES", vtkSMBoundsDomain::X_AND_Z_AXES },
        { "X_Y_AND_Z_AXES", vtkSMBoundsDomain::X_Y_AND_Z_AXES },
      };

    o = PyvtkSMBoundsDomain_Axes_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSMBoundsDomain(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMBoundsDomain_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMBoundsDomain", o) != 0)
  {
    Py_DECREF(o);
  }

}

