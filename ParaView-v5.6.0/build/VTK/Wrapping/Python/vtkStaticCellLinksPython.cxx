// python wrapper for vtkStaticCellLinks
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
#include "vtkStaticCellLinks.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkStaticCellLinks(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkStaticCellLinks_ClassNew(); }

#ifndef DECLARED_PyvtkAbstractCellLinks_ClassNew
extern "C" { PyObject *PyvtkAbstractCellLinks_ClassNew(); }
#define DECLARED_PyvtkAbstractCellLinks_ClassNew
#endif

static const char *PyvtkStaticCellLinks_Doc =
  "vtkStaticCellLinks - object represents upward pointers from points to\nlist of cells using each point\n\n"
  "Superclass: vtkAbstractCellLinks\n\n"
  "vtkStaticCellLinks is a supplemental object to vtkCellArray and\n"
  "vtkCellTypes, enabling access from points to the cells using the\n"
  "points. vtkStaticCellLinks is an array of links, each link represents\n"
  "a list of cell ids using a particular point. The information provided\n"
  "by this object can be used to determine neighbors and construct other\n"
  "local topological information. This class is a faster implementation\n"
  "of vtkCellLinks. However, it cannot be incrementally constructed; it\n"
  "is meant to be constructed once (statically) and must be rebuilt if\n"
  "the cells change.\n\n"
  "@warning\n"
  "This is a drop-in replacement for vtkCellLinks using static link\n"
  "construction. It uses the templated vtkStaticCellLinksTemplate class,\n"
  "instantiating vtkStaticCellLinksTemplate with a vtkIdType template\n"
  "parameter. Note that for best performance, the\n"
  "vtkStaticCellLinksTemplate class may be used directly, instantiating\n"
  "it with the appropriate id type. This class is also wrappable and can\n"
  "be used from an interpreted language such as Python.\n\n"
  "@sa\n"
  "vtkCellLinks vtkStaticCellLinksTemplate\n\n";


static PyObject *
PyvtkStaticCellLinks_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkStaticCellLinks::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCellLinks_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCellLinks *op = static_cast<vtkStaticCellLinks *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkStaticCellLinks::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCellLinks_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkStaticCellLinks *tempr = vtkStaticCellLinks::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCellLinks_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCellLinks *op = static_cast<vtkStaticCellLinks *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStaticCellLinks *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkStaticCellLinks::NewInstance());

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
PyvtkStaticCellLinks_BuildLinks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildLinks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCellLinks *op = static_cast<vtkStaticCellLinks *>(vp);

  vtkDataSet *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataSet"))
  {
    if (ap.IsBound())
    {
      op->BuildLinks(temp0);
    }
    else
    {
      op->vtkStaticCellLinks::BuildLinks(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCellLinks_GetNumberOfCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCellLinks *op = static_cast<vtkStaticCellLinks *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfCells(temp0) :
      op->vtkStaticCellLinks::GetNumberOfCells(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCellLinks_GetNcells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNcells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCellLinks *op = static_cast<vtkStaticCellLinks *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    unsigned short tempr = (ap.IsBound() ?
      op->GetNcells(temp0) :
      op->vtkStaticCellLinks::GetNcells(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCellLinks_GetCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCellLinks *op = static_cast<vtkStaticCellLinks *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const vtkIdType *tempr = (ap.IsBound() ?
      op->GetCells(temp0) :
      op->vtkStaticCellLinks::GetCells(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCellLinks_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCellLinks *op = static_cast<vtkStaticCellLinks *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Initialize();
    }
    else
    {
      op->vtkStaticCellLinks::Initialize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkStaticCellLinks_Methods[] = {
  {"IsTypeOf", PyvtkStaticCellLinks_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard methods for instantiation, type manipulation and\nprinting.\n"},
  {"IsA", PyvtkStaticCellLinks_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard methods for instantiation, type manipulation and\nprinting.\n"},
  {"SafeDownCast", PyvtkStaticCellLinks_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkStaticCellLinks\nC++: static vtkStaticCellLinks *SafeDownCast(vtkObjectBase *o)\n\nStandard methods for instantiation, type manipulation and\nprinting.\n"},
  {"NewInstance", PyvtkStaticCellLinks_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkStaticCellLinks\nC++: vtkStaticCellLinks *NewInstance()\n\nStandard methods for instantiation, type manipulation and\nprinting.\n"},
  {"BuildLinks", PyvtkStaticCellLinks_BuildLinks, METH_VARARGS,
   "V.BuildLinks(vtkDataSet)\nC++: void BuildLinks(vtkDataSet *ds) override;\n\nBuild the link list array. Satisfy the superclass API.\n"},
  {"GetNumberOfCells", PyvtkStaticCellLinks_GetNumberOfCells, METH_VARARGS,
   "V.GetNumberOfCells(int) -> int\nC++: vtkIdType GetNumberOfCells(vtkIdType ptId)\n\nGet the number of cells using the point specified by ptId.\n"},
  {"GetNcells", PyvtkStaticCellLinks_GetNcells, METH_VARARGS,
   "V.GetNcells(int) -> int\nC++: unsigned short GetNcells(vtkIdType ptId)\n\nGet the number of cells using the point specified by ptId. This\nis an alias for GetNumberOfCells(); consistent with the\nvtkCellLinks API.\n"},
  {"GetCells", PyvtkStaticCellLinks_GetCells, METH_VARARGS,
   "V.GetCells(int) -> (int, ...)\nC++: const vtkIdType *GetCells(vtkIdType ptId)\n\nReturn a list of cell ids using the specified point.\n"},
  {"Initialize", PyvtkStaticCellLinks_Initialize, METH_VARARGS,
   "V.Initialize()\nC++: void Initialize()\n\nMake sure any previously created links are cleaned up.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkStaticCellLinks_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonDataModelPython.vtkStaticCellLinks", // tp_name
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
  PyvtkStaticCellLinks_Doc, // tp_doc
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

static vtkObjectBase *PyvtkStaticCellLinks_StaticNew()
{
  return vtkStaticCellLinks::New();
}

PyObject *PyvtkStaticCellLinks_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkStaticCellLinks_Type, PyvtkStaticCellLinks_Methods,
    "vtkStaticCellLinks",
 &PyvtkStaticCellLinks_StaticNew);

  PyTypeObject *pytype = &PyvtkStaticCellLinks_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkAbstractCellLinks_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkStaticCellLinks(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkStaticCellLinks_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkStaticCellLinks", o) != 0)
  {
    Py_DECREF(o);
  }

}

