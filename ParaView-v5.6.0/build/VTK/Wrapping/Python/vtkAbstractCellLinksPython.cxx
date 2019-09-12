// python wrapper for vtkAbstractCellLinks
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
#include "vtkAbstractCellLinks.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkAbstractCellLinks(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkAbstractCellLinks_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkAbstractCellLinks_Doc =
  "vtkAbstractCellLinks - an abstract base class for classes that build\ntopological links from points to cells\n\n"
  "Superclass: vtkObject\n\n"
  "vtkAbstractCellLinks is a family of supplemental objects to\n"
  "vtkCellArray and vtkCellTypes, enabling fast access from points to\n"
  "the cells using the points. vtkAbstractCellLinks is an array of\n"
  "links, each link representing a list of cell ids using a particular\n"
  "point. The information provided by this object can be used to\n"
  "determine neighbors and construct other local topological\n"
  "information.\n\n"
  "@sa\n"
  "vtkCellLinks vtkStaticCellLinks vtkStaticCellLinksTemplate\n\n";


static PyObject *
PyvtkAbstractCellLinks_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkAbstractCellLinks::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractCellLinks_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellLinks *op = static_cast<vtkAbstractCellLinks *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAbstractCellLinks::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractCellLinks_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkAbstractCellLinks *tempr = vtkAbstractCellLinks::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractCellLinks_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellLinks *op = static_cast<vtkAbstractCellLinks *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractCellLinks *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAbstractCellLinks::NewInstance());

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
PyvtkAbstractCellLinks_BuildLinks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildLinks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellLinks *op = static_cast<vtkAbstractCellLinks *>(vp);

  vtkDataSet *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataSet"))
  {
    op->BuildLinks(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractCellLinks_GetIdType(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetIdType");

  vtkIdType temp0;
  vtkIdType temp1;
  vtkCellArray *temp2 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkCellArray"))
  {
    int tempr = vtkAbstractCellLinks::GetIdType(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkAbstractCellLinks_Methods[] = {
  {"IsTypeOf", PyvtkAbstractCellLinks_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard type and print methods.\n"},
  {"IsA", PyvtkAbstractCellLinks_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard type and print methods.\n"},
  {"SafeDownCast", PyvtkAbstractCellLinks_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkAbstractCellLinks\nC++: static vtkAbstractCellLinks *SafeDownCast(vtkObjectBase *o)\n\nStandard type and print methods.\n"},
  {"NewInstance", PyvtkAbstractCellLinks_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkAbstractCellLinks\nC++: vtkAbstractCellLinks *NewInstance()\n\nStandard type and print methods.\n"},
  {"BuildLinks", PyvtkAbstractCellLinks_BuildLinks, METH_VARARGS,
   "V.BuildLinks(vtkDataSet)\nC++: virtual void BuildLinks(vtkDataSet *data)\n\nBuild the link list array. All subclasses must implement this\nmethod.\n"},
  {"GetIdType", PyvtkAbstractCellLinks_GetIdType, METH_VARARGS,
   "V.GetIdType(int, int, vtkCellArray) -> int\nC++: static int GetIdType(vtkIdType maxPtId, vtkIdType maxCellId,\n    vtkCellArray *ca)\n\nBased on the input (i.e., number of points, number of cells, and\nlength of connectivity array) this helper method returns the\nintegral type to use when instantiating cell link-related classes\nin order to properly represent the data.  The return value is one\nof the types (VTK_ID_TYPE,VTK_INT,VTK_SHORT) defined in the file\nvtkType.h. Subclasses may choose to instantiate themselves with\ndifferent integral types for performance and/or memory reasons.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkAbstractCellLinks_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonDataModelPython.vtkAbstractCellLinks", // tp_name
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
  PyvtkAbstractCellLinks_Doc, // tp_doc
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

PyObject *PyvtkAbstractCellLinks_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkAbstractCellLinks_Type, PyvtkAbstractCellLinks_Methods,
    "vtkAbstractCellLinks",
 nullptr);

  PyTypeObject *pytype = &PyvtkAbstractCellLinks_Type;

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

void PyVTKAddFile_vtkAbstractCellLinks(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkAbstractCellLinks_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkAbstractCellLinks", o) != 0)
  {
    Py_DECREF(o);
  }

}

