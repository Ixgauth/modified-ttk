// python wrapper for vtkSelectionConverter
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
#include "vtkSelectionConverter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSelectionConverter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSelectionConverter_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkSelectionConverter_Doc =
  "vtkSelectionConverter - converts one selection type to another\n\n"
  "Superclass: vtkObject\n\n"
  "vtkSelectionConverter can be used to convert from one selection type\n"
  "to another. Currently, it only supports conversion from a 'surface'\n"
  "geometry selection to a 'volume' selection. It does this by looking\n"
  "for a pedigree array called vtkOriginalCellIds that says what 3D cell\n"
  "produced each selected 2D surface cell. The input selection must have\n"
  "SOURCE_ID() and ORIGINAL_SOURCE_ID() properties set. The SOURCE_ID()\n"
  "corresponds to the geometry filter whereas the ORIGINAL_SOURCE_ID()\n"
  "corresponds to the input of the geometry filter. The output selection\n"
  "will have SOURCE_ID() corresponding to the input of the geometry\n"
  "filter (what was ORIGINAL_SOURCE_ID()).\n"
  "@sa\n"
  "vtkSelection\n\n";


static PyObject *
PyvtkSelectionConverter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSelectionConverter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionConverter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionConverter *op = static_cast<vtkSelectionConverter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSelectionConverter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionConverter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSelectionConverter *tempr = vtkSelectionConverter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionConverter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionConverter *op = static_cast<vtkSelectionConverter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSelectionConverter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSelectionConverter::NewInstance());

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
PyvtkSelectionConverter_Convert(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Convert");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionConverter *op = static_cast<vtkSelectionConverter *>(vp);

  vtkSelection *temp0 = nullptr;
  vtkSelection *temp1 = nullptr;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkSelection") &&
      ap.GetVTKObject(temp1, "vtkSelection") &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->Convert(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSelectionConverter::Convert(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSelectionConverter_Methods[] = {
  {"IsTypeOf", PyvtkSelectionConverter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSelectionConverter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSelectionConverter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSelectionConverter\nC++: static vtkSelectionConverter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSelectionConverter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSelectionConverter\nC++: vtkSelectionConverter *NewInstance()\n\n"},
  {"Convert", PyvtkSelectionConverter_Convert, METH_VARARGS,
   "V.Convert(vtkSelection, vtkSelection, int)\nC++: void Convert(vtkSelection *input, vtkSelection *output,\n    int global_ids)\n\nConvert input selection and store it in output. Currently, the\ninput selection must be a geometry selection and the output is a\nvolume selection. If global_ids is set, then the selection is\nconverted to global ids selection.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSelectionConverter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsRenderingPython.vtkSelectionConverter", // tp_name
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
  PyvtkSelectionConverter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSelectionConverter_StaticNew()
{
  return vtkSelectionConverter::New();
}

PyObject *PyvtkSelectionConverter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSelectionConverter_Type, PyvtkSelectionConverter_Methods,
    "vtkSelectionConverter",
 &PyvtkSelectionConverter_StaticNew);

  PyTypeObject *pytype = &PyvtkSelectionConverter_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkObject_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSelectionConverter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSelectionConverter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSelectionConverter", o) != 0)
  {
    Py_DECREF(o);
  }

}

