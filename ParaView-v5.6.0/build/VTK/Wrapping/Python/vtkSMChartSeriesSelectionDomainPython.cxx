// python wrapper for vtkSMChartSeriesSelectionDomain
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
#include "vtkSMChartSeriesSelectionDomain.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMChartSeriesSelectionDomain(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMChartSeriesSelectionDomain_ClassNew(); }

#ifndef DECLARED_PyvtkSMStringListDomain_ClassNew
extern "C" { PyObject *PyvtkSMStringListDomain_ClassNew(); }
#define DECLARED_PyvtkSMStringListDomain_ClassNew
#endif

static const char *PyvtkSMChartSeriesSelectionDomain_Doc =
  "vtkSMChartSeriesSelectionDomain - extends vtkSMChartSeriesListDomain\nto add logic to better handle default values suitable for\nseries-parameter type properties such as SeriesVisibility,\nSeriesLabel, etc.\n\n"
  "Superclass: vtkSMStringListDomain\n\n"
  "vtkSMChartSeriesSelectionDomain extends vtkSMChartSeriesListDomain to\n"
  "add logic to better handle default values suitable for\n"
  "series-parameter type properties such as SeriesVisibility,\n"
  "SeriesLabel, etc.\n\n"
  "This domain also supports an experimental feature (we can generalize\n"
  "this to vtkSMDomain is found useful in other places). Generally, a\n"
  "vtkSMProperty never changes unless the application/user updates it.\n"
  "However for things like series parameters, it is useful if the\n"
  "property is updated to handle changed/newly added series consistently\n"
  "in the Qt application and the Python. To support that, this domain\n"
  "resets the property value to default every time the domain changes\n"
  "preserving status for existing series i.e. it won't affect the state\n"
  "for any series that already set on the property. Thus, it's not a\n"
  "true \"reset\", but more like \"update\".\n\n"
  "Supported XML attributes\n"
  "\\li hide_partial_arrays : when set to 1, partial arrays will not be\n"
  "    shown in\n"
  "the domain (default).\n\n";

static PyTypeObject PyvtkSMChartSeriesSelectionDomain_DefaultModes_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerRenderingPython.vtkSMChartSeriesSelectionDomain.DefaultModes", // tp_name
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

PyObject *PyvtkSMChartSeriesSelectionDomain_DefaultModes_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkSMChartSeriesSelectionDomain_DefaultModes_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkSMChartSeriesSelectionDomain_DefaultModes_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkSMChartSeriesSelectionDomain_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMChartSeriesSelectionDomain::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMChartSeriesSelectionDomain_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMChartSeriesSelectionDomain *op = static_cast<vtkSMChartSeriesSelectionDomain *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMChartSeriesSelectionDomain::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMChartSeriesSelectionDomain_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMChartSeriesSelectionDomain *tempr = vtkSMChartSeriesSelectionDomain::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMChartSeriesSelectionDomain_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMChartSeriesSelectionDomain *op = static_cast<vtkSMChartSeriesSelectionDomain *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMChartSeriesSelectionDomain *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMChartSeriesSelectionDomain::NewInstance());

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
PyvtkSMChartSeriesSelectionDomain_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMChartSeriesSelectionDomain *op = static_cast<vtkSMChartSeriesSelectionDomain *>(vp);

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
      op->vtkSMChartSeriesSelectionDomain::Update(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMChartSeriesSelectionDomain_SetDefaultValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDefaultValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMChartSeriesSelectionDomain *op = static_cast<vtkSMChartSeriesSelectionDomain *>(vp);

  vtkSMProperty *temp0 = nullptr;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMProperty") &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->SetDefaultValues(temp0, temp1) :
      op->vtkSMChartSeriesSelectionDomain::SetDefaultValues(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMChartSeriesSelectionDomain_GetDefaultMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMChartSeriesSelectionDomain *op = static_cast<vtkSMChartSeriesSelectionDomain *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDefaultMode() :
      op->vtkSMChartSeriesSelectionDomain::GetDefaultMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMChartSeriesSelectionDomain_AddSeriesVisibilityDefault(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "AddSeriesVisibilityDefault");

  const char *temp0 = nullptr;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkSMChartSeriesSelectionDomain::AddSeriesVisibilityDefault(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMChartSeriesSelectionDomain_SetLoadNoChartVariables(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetLoadNoChartVariables");

  bool temp0 = false;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkSMChartSeriesSelectionDomain::SetLoadNoChartVariables(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMChartSeriesSelectionDomain_GetLoadNoChartVariables(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetLoadNoChartVariables");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    bool tempr = vtkSMChartSeriesSelectionDomain::GetLoadNoChartVariables();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMChartSeriesSelectionDomain_SetDefaultValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDefaultValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMChartSeriesSelectionDomain *op = static_cast<vtkSMChartSeriesSelectionDomain *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDefaultValue(temp0);
    }
    else
    {
      op->vtkSMChartSeriesSelectionDomain::SetDefaultValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSMChartSeriesSelectionDomain_Methods[] = {
  {"IsTypeOf", PyvtkSMChartSeriesSelectionDomain_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMChartSeriesSelectionDomain_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMChartSeriesSelectionDomain_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSMChartSeriesSelectionDomain\nC++: static vtkSMChartSeriesSelectionDomain *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMChartSeriesSelectionDomain_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSMChartSeriesSelectionDomain\nC++: vtkSMChartSeriesSelectionDomain *NewInstance()\n\n"},
  {"Update", PyvtkSMChartSeriesSelectionDomain_Update, METH_VARARGS,
   "V.Update(vtkSMProperty)\nC++: void Update(vtkSMProperty *) override;\n\nUpdate self checking the \"unchecked\" values of all required\nproperties.\n"},
  {"SetDefaultValues", PyvtkSMChartSeriesSelectionDomain_SetDefaultValues, METH_VARARGS,
   "V.SetDefaultValues(vtkSMProperty, bool) -> int\nC++: int SetDefaultValues(vtkSMProperty *,\n    bool use_unchecked_values) override;\n\nSet the property's default value based on the domain. How the\nvalue is determined using the range is controlled by DefaultMode.\n"},
  {"GetDefaultMode", PyvtkSMChartSeriesSelectionDomain_GetDefaultMode, METH_VARARGS,
   "V.GetDefaultMode() -> int\nC++: virtual int GetDefaultMode()\n\nGet the default-mode that controls how SetDefaultValues()\nbehaves.\n"},
  {"AddSeriesVisibilityDefault", PyvtkSMChartSeriesSelectionDomain_AddSeriesVisibilityDefault, METH_VARARGS,
   "V.AddSeriesVisibilityDefault(string, bool)\nC++: static void AddSeriesVisibilityDefault(const char *regex,\n    bool value)\n\nAdd/Remove series names to hide by default. These are regular\nexpressions.\n"},
  {"SetLoadNoChartVariables", PyvtkSMChartSeriesSelectionDomain_SetLoadNoChartVariables, METH_VARARGS,
   "V.SetLoadNoChartVariables(bool)\nC++: static void SetLoadNoChartVariables(bool choice)\n\nGlobal flag to toggle between (a) the default behavior and (b)\nsetting default visibility to off.\n"},
  {"GetLoadNoChartVariables", PyvtkSMChartSeriesSelectionDomain_GetLoadNoChartVariables, METH_VARARGS,
   "V.GetLoadNoChartVariables() -> bool\nC++: static bool GetLoadNoChartVariables()\n\n"},
  {"SetDefaultValue", PyvtkSMChartSeriesSelectionDomain_SetDefaultValue, METH_VARARGS,
   "V.SetDefaultValue(string)\nC++: virtual void SetDefaultValue(const char *_arg)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMChartSeriesSelectionDomain_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerRenderingPython.vtkSMChartSeriesSelectionDomain", // tp_name
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
  PyvtkSMChartSeriesSelectionDomain_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSMChartSeriesSelectionDomain_StaticNew()
{
  return vtkSMChartSeriesSelectionDomain::New();
}

PyObject *PyvtkSMChartSeriesSelectionDomain_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMChartSeriesSelectionDomain_Type, PyvtkSMChartSeriesSelectionDomain_Methods,
    "vtkSMChartSeriesSelectionDomain",
 &PyvtkSMChartSeriesSelectionDomain_StaticNew);

  PyTypeObject *pytype = &PyvtkSMChartSeriesSelectionDomain_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkSMStringListDomain_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkSMChartSeriesSelectionDomain_DefaultModes_Type);
  PyvtkSMChartSeriesSelectionDomain_DefaultModes_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkSMChartSeriesSelectionDomain_DefaultModes_Type);

  o = (PyObject *)&PyvtkSMChartSeriesSelectionDomain_DefaultModes_Type;
  if (PyDict_SetItemString(d, "DefaultModes", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 5; c++)
  {
    typedef vtkSMChartSeriesSelectionDomain::DefaultModes cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[5] = {
        { "UNDEFINED", vtkSMChartSeriesSelectionDomain::UNDEFINED },
        { "VISIBILITY", vtkSMChartSeriesSelectionDomain::VISIBILITY },
        { "LABEL", vtkSMChartSeriesSelectionDomain::LABEL },
        { "COLOR", vtkSMChartSeriesSelectionDomain::COLOR },
        { "VALUE", vtkSMChartSeriesSelectionDomain::VALUE },
      };

    o = PyvtkSMChartSeriesSelectionDomain_DefaultModes_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSMChartSeriesSelectionDomain(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMChartSeriesSelectionDomain_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMChartSeriesSelectionDomain", o) != 0)
  {
    Py_DECREF(o);
  }

}

