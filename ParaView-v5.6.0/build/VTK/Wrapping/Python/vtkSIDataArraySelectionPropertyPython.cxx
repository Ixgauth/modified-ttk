// python wrapper for vtkSIDataArraySelectionProperty
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
#include "vtkSIDataArraySelectionProperty.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSIDataArraySelectionProperty(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSIDataArraySelectionProperty_ClassNew(); }

#ifndef DECLARED_PyvtkSIProperty_ClassNew
extern "C" { PyObject *PyvtkSIProperty_ClassNew(); }
#define DECLARED_PyvtkSIProperty_ClassNew
#endif

static const char *PyvtkSIDataArraySelectionProperty_Doc =
  "vtkSIDataArraySelectionProperty - supports API using\nvtkDataArraySelection.\n\n"
  "Superclass: vtkSIProperty\n\n"
  "vtkSIDataArraySelectionProperty can be used to get/set array\n"
  "selection status parameters on a VTK object using\n"
  "vtkDataArraySelection. Readers typically offer API to get information\n"
  "about data array available as well as enable/disable arrays to read\n"
  "using a vtkDataArraySelection instance e.g.\n"
  "`vtkXMLReader::GetPointDataArraySelection`. This si-property can be\n"
  "used on vtkSMStringVectorProperty instances that use such an API on\n"
  "the reader to both get array selection status as well as set them.\n\n"
  "This offers a convenient replacement for vtkSIArraySelectionProperty\n"
  "which requires a quirky API on the VTK class to get/set similar\n"
  "information and is recommended over vtkSIArraySelectionProperty in\n"
  "new code.\n\n"
  "To use vtkSIDataArraySelectionProperty, simply add this as the\n"
  "`si_class` on the properties for getting and setting array selection\n"
  "with `command` set to the method name that returns a mutable\n"
  "vtkDataArraySelection instance.\n\n"
  "e.g.{xml}\n"
  "  <SourceProxy name=\"AMReXParticlesReader\"\n"
  "class=\"vtkAMReXParticlesReader\">\n"
  "    ...\n"
  "    <!-- this is the property to get the status -->\n"
  "    <StringVectorProperty name=\"PointArrayInfo\"\n"
  "      command=\"GetPointDataArraySelection\"\n"
  "      number_of_elements_per_command=\"2\"\n"
  "      information_only=\"1\"\n"
  "      si_class=\"vtkSIDataArraySelectionProperty\" />\n\n\n"
  "    <!-- this is the property to set he status -->\n"
  "    <StringVectorProperty name=\"PointArrayStatus\"\n"
  "      command=\"GetPointDataArraySelection\"\n"
  "      information_property=\"PointArrayInfo\"\n"
  "      number_of_elements_per_command=\"2\"\n"
  "      element_types=\"2 0\"\n"
  "      repeat_command=\"1\"\n"
  "      si_class=\"vtkSIDataArraySelectionProperty\">\n"
  "      <ArraySelectionDomain name=\"array_list\">\n"
  "        \n"
  "          <Property function=\"ArrayList\" name=\"PointArrayInfo\" />\n"
  "        \n"
  "      \n"
  "      Select the point arrays to read load.\n"
  "    \n"
  "    ...\n"
  " \n\n";


static PyObject *
PyvtkSIDataArraySelectionProperty_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSIDataArraySelectionProperty::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSIDataArraySelectionProperty_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIDataArraySelectionProperty *op = static_cast<vtkSIDataArraySelectionProperty *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSIDataArraySelectionProperty::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSIDataArraySelectionProperty_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSIDataArraySelectionProperty *tempr = vtkSIDataArraySelectionProperty::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSIDataArraySelectionProperty_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIDataArraySelectionProperty *op = static_cast<vtkSIDataArraySelectionProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSIDataArraySelectionProperty *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSIDataArraySelectionProperty::NewInstance());

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

static PyMethodDef PyvtkSIDataArraySelectionProperty_Methods[] = {
  {"IsTypeOf", PyvtkSIDataArraySelectionProperty_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSIDataArraySelectionProperty_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSIDataArraySelectionProperty_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSIDataArraySelectionProperty\nC++: static vtkSIDataArraySelectionProperty *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSIDataArraySelectionProperty_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSIDataArraySelectionProperty\nC++: vtkSIDataArraySelectionProperty *NewInstance()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSIDataArraySelectionProperty_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerImplementationCorePython.vtkSIDataArraySelectionProperty", // tp_name
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
  PyvtkSIDataArraySelectionProperty_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSIDataArraySelectionProperty_StaticNew()
{
  return vtkSIDataArraySelectionProperty::New();
}

PyObject *PyvtkSIDataArraySelectionProperty_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSIDataArraySelectionProperty_Type, PyvtkSIDataArraySelectionProperty_Methods,
    "vtkSIDataArraySelectionProperty",
 &PyvtkSIDataArraySelectionProperty_StaticNew);

  PyTypeObject *pytype = &PyvtkSIDataArraySelectionProperty_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkSIProperty_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSIDataArraySelectionProperty(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSIDataArraySelectionProperty_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSIDataArraySelectionProperty", o) != 0)
  {
    Py_DECREF(o);
  }

}

