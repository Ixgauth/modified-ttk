// python wrapper for vtkDataSetSurfaceFilter
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
#include "vtkDataSetSurfaceFilter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkDataSetSurfaceFilter(PyObject *); }

static const char *PyvtkFastGeomQuadStruct_Doc =
  "vtkFastGeomQuadStruct - no description provided.\n\n"

  "vtkFastGeomQuadStruct()\n"
  "vtkFastGeomQuadStruct(const &vtkFastGeomQuadStruct)\n";

static PyMethodDef PyvtkFastGeomQuadStruct_Methods[] = {
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkFastGeomQuadStruct_vtkFastGeomQuadStruct_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkFastGeomQuadStruct");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkFastGeomQuadStruct *op = new vtkFastGeomQuadStruct();

    result = PyVTKSpecialObject_New("vtkFastGeomQuadStruct", op);
  }

  return result;
}

static PyObject *
PyvtkFastGeomQuadStruct_vtkFastGeomQuadStruct_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkFastGeomQuadStruct");

  vtkFastGeomQuadStruct *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkFastGeomQuadStruct"))
  {
    vtkFastGeomQuadStruct *op = new vtkFastGeomQuadStruct(*temp0);

    result = PyVTKSpecialObject_New("vtkFastGeomQuadStruct", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkFastGeomQuadStruct_vtkFastGeomQuadStruct_Methods[] = {
  {nullptr, PyvtkFastGeomQuadStruct_vtkFastGeomQuadStruct_s2, METH_VARARGS,
   "@W vtkFastGeomQuadStruct"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkFastGeomQuadStruct_vtkFastGeomQuadStruct(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkFastGeomQuadStruct_vtkFastGeomQuadStruct_s1(self, args);
    case 1:
      return PyvtkFastGeomQuadStruct_vtkFastGeomQuadStruct_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkFastGeomQuadStruct");
  return nullptr;
}


static PyObject *
PyvtkFastGeomQuadStruct_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkFastGeomQuadStruct_vtkFastGeomQuadStruct(nullptr, args);
}

static void PyvtkFastGeomQuadStruct_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkFastGeomQuadStruct *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkFastGeomQuadStruct_Hash(PyObject *self)
{
#if PY_VERSION_HEX >= 0x020600B2
  return PyObject_HashNotImplemented(self);
#else
  char text[256];
  sprintf(text, "unhashable type: '%s'", Py_TYPE(self)->tp_name);
  PyErr_SetString(PyExc_TypeError, text);
  return -1;
#endif
}

static PyTypeObject PyvtkFastGeomQuadStruct_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersGeometryPython.vtkFastGeomQuadStruct", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkFastGeomQuadStruct_Delete, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkFastGeomQuadStruct_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkFastGeomQuadStruct_Doc, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  nullptr, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  PyvtkFastGeomQuadStruct_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkFastGeomQuadStruct_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkFastGeomQuadStruct(*static_cast<const vtkFastGeomQuadStruct*>(obj));
  }
  return 0;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkFastGeomQuadStruct_TypeNew(); }

PyObject *PyvtkFastGeomQuadStruct_TypeNew()
{
  PyVTKSpecialType_Add(
    &PyvtkFastGeomQuadStruct_Type,
    PyvtkFastGeomQuadStruct_Methods,
    PyvtkFastGeomQuadStruct_vtkFastGeomQuadStruct_Methods,
    &PyvtkFastGeomQuadStruct_CCopy);

  PyTypeObject *pytype = &PyvtkFastGeomQuadStruct_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkDataSetSurfaceFilter_ClassNew(); }

#ifndef DECLARED_PyvtkPolyDataAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPolyDataAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPolyDataAlgorithm_ClassNew
#endif

static const char *PyvtkDataSetSurfaceFilter_Doc =
  "vtkDataSetSurfaceFilter - Extracts outer (polygonal) surface.\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkDataSetSurfaceFilter is a faster version of vtkGeometry filter,\n"
  "but it does not have an option to select bounds.  It may use more\n"
  "memory than vtkGeometryFilter.  It only has one option: whether to\n"
  "use triangle strips when the input type is structured.\n\n"
  "@sa\n"
  "vtkGeometryFilter vtkStructuredGridGeometryFilter.\n\n";


static PyObject *
PyvtkDataSetSurfaceFilter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDataSetSurfaceFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetSurfaceFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetSurfaceFilter *op = static_cast<vtkDataSetSurfaceFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDataSetSurfaceFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetSurfaceFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDataSetSurfaceFilter *tempr = vtkDataSetSurfaceFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetSurfaceFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetSurfaceFilter *op = static_cast<vtkDataSetSurfaceFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataSetSurfaceFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDataSetSurfaceFilter::NewInstance());

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
PyvtkDataSetSurfaceFilter_SetUseStrips(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseStrips");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetSurfaceFilter *op = static_cast<vtkDataSetSurfaceFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseStrips(temp0);
    }
    else
    {
      op->vtkDataSetSurfaceFilter::SetUseStrips(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetSurfaceFilter_GetUseStrips(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseStrips");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetSurfaceFilter *op = static_cast<vtkDataSetSurfaceFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUseStrips() :
      op->vtkDataSetSurfaceFilter::GetUseStrips());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetSurfaceFilter_UseStripsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseStripsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetSurfaceFilter *op = static_cast<vtkDataSetSurfaceFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseStripsOn();
    }
    else
    {
      op->vtkDataSetSurfaceFilter::UseStripsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetSurfaceFilter_UseStripsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseStripsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetSurfaceFilter *op = static_cast<vtkDataSetSurfaceFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseStripsOff();
    }
    else
    {
      op->vtkDataSetSurfaceFilter::UseStripsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetSurfaceFilter_SetPieceInvariant(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPieceInvariant");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetSurfaceFilter *op = static_cast<vtkDataSetSurfaceFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPieceInvariant(temp0);
    }
    else
    {
      op->vtkDataSetSurfaceFilter::SetPieceInvariant(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetSurfaceFilter_GetPieceInvariant(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPieceInvariant");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetSurfaceFilter *op = static_cast<vtkDataSetSurfaceFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPieceInvariant() :
      op->vtkDataSetSurfaceFilter::GetPieceInvariant());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetSurfaceFilter_SetPassThroughCellIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPassThroughCellIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetSurfaceFilter *op = static_cast<vtkDataSetSurfaceFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPassThroughCellIds(temp0);
    }
    else
    {
      op->vtkDataSetSurfaceFilter::SetPassThroughCellIds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetSurfaceFilter_GetPassThroughCellIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPassThroughCellIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetSurfaceFilter *op = static_cast<vtkDataSetSurfaceFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPassThroughCellIds() :
      op->vtkDataSetSurfaceFilter::GetPassThroughCellIds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetSurfaceFilter_PassThroughCellIdsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassThroughCellIdsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetSurfaceFilter *op = static_cast<vtkDataSetSurfaceFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassThroughCellIdsOn();
    }
    else
    {
      op->vtkDataSetSurfaceFilter::PassThroughCellIdsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetSurfaceFilter_PassThroughCellIdsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassThroughCellIdsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetSurfaceFilter *op = static_cast<vtkDataSetSurfaceFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassThroughCellIdsOff();
    }
    else
    {
      op->vtkDataSetSurfaceFilter::PassThroughCellIdsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetSurfaceFilter_SetPassThroughPointIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPassThroughPointIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetSurfaceFilter *op = static_cast<vtkDataSetSurfaceFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPassThroughPointIds(temp0);
    }
    else
    {
      op->vtkDataSetSurfaceFilter::SetPassThroughPointIds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetSurfaceFilter_GetPassThroughPointIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPassThroughPointIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetSurfaceFilter *op = static_cast<vtkDataSetSurfaceFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPassThroughPointIds() :
      op->vtkDataSetSurfaceFilter::GetPassThroughPointIds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetSurfaceFilter_PassThroughPointIdsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassThroughPointIdsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetSurfaceFilter *op = static_cast<vtkDataSetSurfaceFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassThroughPointIdsOn();
    }
    else
    {
      op->vtkDataSetSurfaceFilter::PassThroughPointIdsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetSurfaceFilter_PassThroughPointIdsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassThroughPointIdsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetSurfaceFilter *op = static_cast<vtkDataSetSurfaceFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassThroughPointIdsOff();
    }
    else
    {
      op->vtkDataSetSurfaceFilter::PassThroughPointIdsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetSurfaceFilter_SetOriginalCellIdsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOriginalCellIdsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetSurfaceFilter *op = static_cast<vtkDataSetSurfaceFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOriginalCellIdsName(temp0);
    }
    else
    {
      op->vtkDataSetSurfaceFilter::SetOriginalCellIdsName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetSurfaceFilter_GetOriginalCellIdsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOriginalCellIdsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetSurfaceFilter *op = static_cast<vtkDataSetSurfaceFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetOriginalCellIdsName() :
      op->vtkDataSetSurfaceFilter::GetOriginalCellIdsName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetSurfaceFilter_SetOriginalPointIdsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOriginalPointIdsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetSurfaceFilter *op = static_cast<vtkDataSetSurfaceFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOriginalPointIdsName(temp0);
    }
    else
    {
      op->vtkDataSetSurfaceFilter::SetOriginalPointIdsName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetSurfaceFilter_GetOriginalPointIdsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOriginalPointIdsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetSurfaceFilter *op = static_cast<vtkDataSetSurfaceFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetOriginalPointIdsName() :
      op->vtkDataSetSurfaceFilter::GetOriginalPointIdsName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetSurfaceFilter_SetNonlinearSubdivisionLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNonlinearSubdivisionLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetSurfaceFilter *op = static_cast<vtkDataSetSurfaceFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNonlinearSubdivisionLevel(temp0);
    }
    else
    {
      op->vtkDataSetSurfaceFilter::SetNonlinearSubdivisionLevel(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetSurfaceFilter_GetNonlinearSubdivisionLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNonlinearSubdivisionLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetSurfaceFilter *op = static_cast<vtkDataSetSurfaceFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNonlinearSubdivisionLevel() :
      op->vtkDataSetSurfaceFilter::GetNonlinearSubdivisionLevel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetSurfaceFilter_StructuredExecute_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StructuredExecute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetSurfaceFilter *op = static_cast<vtkDataSetSurfaceFilter *>(vp);

  vtkDataSet *temp0 = nullptr;
  vtkPolyData *temp1 = nullptr;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<vtkIdType> store2(2*size2);
  vtkIdType *temp2 = store2.Data();
  vtkIdType *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<vtkIdType> store3(2*size3);
  vtkIdType *temp3 = store3.Data();
  vtkIdType *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkDataSet") &&
      ap.GetVTKObject(temp1, "vtkPolyData") &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3))
  {
    ap.Save(temp2, save2, size2);
    ap.Save(temp3, save3, size3);

    int tempr = (ap.IsBound() ?
      op->StructuredExecute(temp0, temp1, temp2, temp3) :
      op->vtkDataSetSurfaceFilter::StructuredExecute(temp0, temp1, temp2, temp3));

    if (ap.HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (ap.HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDataSetSurfaceFilter_StructuredExecute_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StructuredExecute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetSurfaceFilter *op = static_cast<vtkDataSetSurfaceFilter *>(vp);

  vtkDataSet *temp0 = nullptr;
  vtkPolyData *temp1 = nullptr;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<int> store2(2*size2);
  int *temp2 = store2.Data();
  int *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<int> store3(2*size3);
  int *temp3 = store3.Data();
  int *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkDataSet") &&
      ap.GetVTKObject(temp1, "vtkPolyData") &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3))
  {
    ap.Save(temp2, save2, size2);
    ap.Save(temp3, save3, size3);

    int tempr = (ap.IsBound() ?
      op->StructuredExecute(temp0, temp1, temp2, temp3) :
      op->vtkDataSetSurfaceFilter::StructuredExecute(temp0, temp1, temp2, temp3));

    if (ap.HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (ap.HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkDataSetSurfaceFilter_StructuredExecute_Methods[] = {
  {nullptr, PyvtkDataSetSurfaceFilter_StructuredExecute_s1, METH_VARARGS,
   "@VVPP *vtkDataSet *vtkPolyData *k *k"},
  {nullptr, PyvtkDataSetSurfaceFilter_StructuredExecute_s2, METH_VARARGS,
   "@VVPP *vtkDataSet *vtkPolyData *i *i"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkDataSetSurfaceFilter_StructuredExecute(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkDataSetSurfaceFilter_StructuredExecute_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "StructuredExecute");
  return nullptr;
}



static PyObject *
PyvtkDataSetSurfaceFilter_UnstructuredGridExecute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnstructuredGridExecute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetSurfaceFilter *op = static_cast<vtkDataSetSurfaceFilter *>(vp);

  vtkDataSet *temp0 = nullptr;
  vtkPolyData *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataSet") &&
      ap.GetVTKObject(temp1, "vtkPolyData"))
  {
    int tempr = (ap.IsBound() ?
      op->UnstructuredGridExecute(temp0, temp1) :
      op->vtkDataSetSurfaceFilter::UnstructuredGridExecute(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetSurfaceFilter_DataSetExecute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DataSetExecute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetSurfaceFilter *op = static_cast<vtkDataSetSurfaceFilter *>(vp);

  vtkDataSet *temp0 = nullptr;
  vtkPolyData *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataSet") &&
      ap.GetVTKObject(temp1, "vtkPolyData"))
  {
    int tempr = (ap.IsBound() ?
      op->DataSetExecute(temp0, temp1) :
      op->vtkDataSetSurfaceFilter::DataSetExecute(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetSurfaceFilter_StructuredWithBlankingExecute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StructuredWithBlankingExecute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetSurfaceFilter *op = static_cast<vtkDataSetSurfaceFilter *>(vp);

  vtkStructuredGrid *temp0 = nullptr;
  vtkPolyData *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkStructuredGrid") &&
      ap.GetVTKObject(temp1, "vtkPolyData"))
  {
    int tempr = (ap.IsBound() ?
      op->StructuredWithBlankingExecute(temp0, temp1) :
      op->vtkDataSetSurfaceFilter::StructuredWithBlankingExecute(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetSurfaceFilter_UniformGridExecute_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UniformGridExecute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetSurfaceFilter *op = static_cast<vtkDataSetSurfaceFilter *>(vp);

  vtkDataSet *temp0 = nullptr;
  vtkPolyData *temp1 = nullptr;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<vtkIdType> store2(2*size2);
  vtkIdType *temp2 = store2.Data();
  vtkIdType *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<vtkIdType> store3(2*size3);
  vtkIdType *temp3 = store3.Data();
  vtkIdType *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  const size_t size4 = 6;
  bool temp4[6];
  bool save4[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetVTKObject(temp0, "vtkDataSet") &&
      ap.GetVTKObject(temp1, "vtkPolyData") &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4))
  {
    ap.Save(temp2, save2, size2);
    ap.Save(temp3, save3, size3);
    ap.Save(temp4, save4, size4);

    int tempr = (ap.IsBound() ?
      op->UniformGridExecute(temp0, temp1, temp2, temp3, temp4) :
      op->vtkDataSetSurfaceFilter::UniformGridExecute(temp0, temp1, temp2, temp3, temp4));

    if (ap.HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (ap.HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (ap.HasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(4, temp4, size4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDataSetSurfaceFilter_UniformGridExecute_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UniformGridExecute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetSurfaceFilter *op = static_cast<vtkDataSetSurfaceFilter *>(vp);

  vtkDataSet *temp0 = nullptr;
  vtkPolyData *temp1 = nullptr;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<int> store2(2*size2);
  int *temp2 = store2.Data();
  int *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<int> store3(2*size3);
  int *temp3 = store3.Data();
  int *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  const size_t size4 = 6;
  bool temp4[6];
  bool save4[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetVTKObject(temp0, "vtkDataSet") &&
      ap.GetVTKObject(temp1, "vtkPolyData") &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4))
  {
    ap.Save(temp2, save2, size2);
    ap.Save(temp3, save3, size3);
    ap.Save(temp4, save4, size4);

    int tempr = (ap.IsBound() ?
      op->UniformGridExecute(temp0, temp1, temp2, temp3, temp4) :
      op->vtkDataSetSurfaceFilter::UniformGridExecute(temp0, temp1, temp2, temp3, temp4));

    if (ap.HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (ap.HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (ap.HasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(4, temp4, size4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkDataSetSurfaceFilter_UniformGridExecute_Methods[] = {
  {nullptr, PyvtkDataSetSurfaceFilter_UniformGridExecute_s1, METH_VARARGS,
   "@VVPPP *vtkDataSet *vtkPolyData *k *k *q"},
  {nullptr, PyvtkDataSetSurfaceFilter_UniformGridExecute_s2, METH_VARARGS,
   "@VVPPP *vtkDataSet *vtkPolyData *i *i *q"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkDataSetSurfaceFilter_UniformGridExecute(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkDataSetSurfaceFilter_UniformGridExecute_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 5:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "UniformGridExecute");
  return nullptr;
}


static PyMethodDef PyvtkDataSetSurfaceFilter_Methods[] = {
  {"IsTypeOf", PyvtkDataSetSurfaceFilter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkDataSetSurfaceFilter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkDataSetSurfaceFilter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkDataSetSurfaceFilter\nC++: static vtkDataSetSurfaceFilter *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkDataSetSurfaceFilter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkDataSetSurfaceFilter\nC++: vtkDataSetSurfaceFilter *NewInstance()\n\n"},
  {"SetUseStrips", PyvtkDataSetSurfaceFilter_SetUseStrips, METH_VARARGS,
   "V.SetUseStrips(int)\nC++: virtual void SetUseStrips(vtkTypeBool _arg)\n\nWhen input is structured data, this flag will generate faces with\ntriangle strips.  This should render faster and use less memory,\nbut no cell data is copied.  By default, UseStrips is Off.\n"},
  {"GetUseStrips", PyvtkDataSetSurfaceFilter_GetUseStrips, METH_VARARGS,
   "V.GetUseStrips() -> int\nC++: virtual vtkTypeBool GetUseStrips()\n\nWhen input is structured data, this flag will generate faces with\ntriangle strips.  This should render faster and use less memory,\nbut no cell data is copied.  By default, UseStrips is Off.\n"},
  {"UseStripsOn", PyvtkDataSetSurfaceFilter_UseStripsOn, METH_VARARGS,
   "V.UseStripsOn()\nC++: virtual void UseStripsOn()\n\nWhen input is structured data, this flag will generate faces with\ntriangle strips.  This should render faster and use less memory,\nbut no cell data is copied.  By default, UseStrips is Off.\n"},
  {"UseStripsOff", PyvtkDataSetSurfaceFilter_UseStripsOff, METH_VARARGS,
   "V.UseStripsOff()\nC++: virtual void UseStripsOff()\n\nWhen input is structured data, this flag will generate faces with\ntriangle strips.  This should render faster and use less memory,\nbut no cell data is copied.  By default, UseStrips is Off.\n"},
  {"SetPieceInvariant", PyvtkDataSetSurfaceFilter_SetPieceInvariant, METH_VARARGS,
   "V.SetPieceInvariant(int)\nC++: virtual void SetPieceInvariant(int _arg)\n\nIf PieceInvariant is true, vtkDataSetSurfaceFilter requests 1\nghost level from input in order to remove internal surface that\nare between processes. False by default.\n"},
  {"GetPieceInvariant", PyvtkDataSetSurfaceFilter_GetPieceInvariant, METH_VARARGS,
   "V.GetPieceInvariant() -> int\nC++: virtual int GetPieceInvariant()\n\nIf PieceInvariant is true, vtkDataSetSurfaceFilter requests 1\nghost level from input in order to remove internal surface that\nare between processes. False by default.\n"},
  {"SetPassThroughCellIds", PyvtkDataSetSurfaceFilter_SetPassThroughCellIds, METH_VARARGS,
   "V.SetPassThroughCellIds(int)\nC++: virtual void SetPassThroughCellIds(vtkTypeBool _arg)\n\nIf on, the output polygonal dataset will have a celldata array\nthat holds the cell index of the original 3D cell that produced\neach output cell. This is useful for cell picking. The default is\noff to conserve memory. Note that PassThroughCellIds will be\nignored if UseStrips is on, since in that case each tringle strip\ncan represent more than on of the input cells.\n"},
  {"GetPassThroughCellIds", PyvtkDataSetSurfaceFilter_GetPassThroughCellIds, METH_VARARGS,
   "V.GetPassThroughCellIds() -> int\nC++: virtual vtkTypeBool GetPassThroughCellIds()\n\nIf on, the output polygonal dataset will have a celldata array\nthat holds the cell index of the original 3D cell that produced\neach output cell. This is useful for cell picking. The default is\noff to conserve memory. Note that PassThroughCellIds will be\nignored if UseStrips is on, since in that case each tringle strip\ncan represent more than on of the input cells.\n"},
  {"PassThroughCellIdsOn", PyvtkDataSetSurfaceFilter_PassThroughCellIdsOn, METH_VARARGS,
   "V.PassThroughCellIdsOn()\nC++: virtual void PassThroughCellIdsOn()\n\nIf on, the output polygonal dataset will have a celldata array\nthat holds the cell index of the original 3D cell that produced\neach output cell. This is useful for cell picking. The default is\noff to conserve memory. Note that PassThroughCellIds will be\nignored if UseStrips is on, since in that case each tringle strip\ncan represent more than on of the input cells.\n"},
  {"PassThroughCellIdsOff", PyvtkDataSetSurfaceFilter_PassThroughCellIdsOff, METH_VARARGS,
   "V.PassThroughCellIdsOff()\nC++: virtual void PassThroughCellIdsOff()\n\nIf on, the output polygonal dataset will have a celldata array\nthat holds the cell index of the original 3D cell that produced\neach output cell. This is useful for cell picking. The default is\noff to conserve memory. Note that PassThroughCellIds will be\nignored if UseStrips is on, since in that case each tringle strip\ncan represent more than on of the input cells.\n"},
  {"SetPassThroughPointIds", PyvtkDataSetSurfaceFilter_SetPassThroughPointIds, METH_VARARGS,
   "V.SetPassThroughPointIds(int)\nC++: virtual void SetPassThroughPointIds(vtkTypeBool _arg)\n\nIf on, the output polygonal dataset will have a celldata array\nthat holds the cell index of the original 3D cell that produced\neach output cell. This is useful for cell picking. The default is\noff to conserve memory. Note that PassThroughCellIds will be\nignored if UseStrips is on, since in that case each tringle strip\ncan represent more than on of the input cells.\n"},
  {"GetPassThroughPointIds", PyvtkDataSetSurfaceFilter_GetPassThroughPointIds, METH_VARARGS,
   "V.GetPassThroughPointIds() -> int\nC++: virtual vtkTypeBool GetPassThroughPointIds()\n\nIf on, the output polygonal dataset will have a celldata array\nthat holds the cell index of the original 3D cell that produced\neach output cell. This is useful for cell picking. The default is\noff to conserve memory. Note that PassThroughCellIds will be\nignored if UseStrips is on, since in that case each tringle strip\ncan represent more than on of the input cells.\n"},
  {"PassThroughPointIdsOn", PyvtkDataSetSurfaceFilter_PassThroughPointIdsOn, METH_VARARGS,
   "V.PassThroughPointIdsOn()\nC++: virtual void PassThroughPointIdsOn()\n\nIf on, the output polygonal dataset will have a celldata array\nthat holds the cell index of the original 3D cell that produced\neach output cell. This is useful for cell picking. The default is\noff to conserve memory. Note that PassThroughCellIds will be\nignored if UseStrips is on, since in that case each tringle strip\ncan represent more than on of the input cells.\n"},
  {"PassThroughPointIdsOff", PyvtkDataSetSurfaceFilter_PassThroughPointIdsOff, METH_VARARGS,
   "V.PassThroughPointIdsOff()\nC++: virtual void PassThroughPointIdsOff()\n\nIf on, the output polygonal dataset will have a celldata array\nthat holds the cell index of the original 3D cell that produced\neach output cell. This is useful for cell picking. The default is\noff to conserve memory. Note that PassThroughCellIds will be\nignored if UseStrips is on, since in that case each tringle strip\ncan represent more than on of the input cells.\n"},
  {"SetOriginalCellIdsName", PyvtkDataSetSurfaceFilter_SetOriginalCellIdsName, METH_VARARGS,
   "V.SetOriginalCellIdsName(string)\nC++: virtual void SetOriginalCellIdsName(const char *_arg)\n\nIf PassThroughCellIds or PassThroughPointIds is on, then these\nivars control the name given to the field in which the ids are\nwritten into.  If set to nullptr, then vtkOriginalCellIds or\nvtkOriginalPointIds (the default) is used, respectively.\n"},
  {"GetOriginalCellIdsName", PyvtkDataSetSurfaceFilter_GetOriginalCellIdsName, METH_VARARGS,
   "V.GetOriginalCellIdsName() -> string\nC++: virtual const char *GetOriginalCellIdsName()\n\nIf PassThroughCellIds or PassThroughPointIds is on, then these\nivars control the name given to the field in which the ids are\nwritten into.  If set to nullptr, then vtkOriginalCellIds or\nvtkOriginalPointIds (the default) is used, respectively.\n"},
  {"SetOriginalPointIdsName", PyvtkDataSetSurfaceFilter_SetOriginalPointIdsName, METH_VARARGS,
   "V.SetOriginalPointIdsName(string)\nC++: virtual void SetOriginalPointIdsName(const char *_arg)\n\nIf PassThroughCellIds or PassThroughPointIds is on, then these\nivars control the name given to the field in which the ids are\nwritten into.  If set to nullptr, then vtkOriginalCellIds or\nvtkOriginalPointIds (the default) is used, respectively.\n"},
  {"GetOriginalPointIdsName", PyvtkDataSetSurfaceFilter_GetOriginalPointIdsName, METH_VARARGS,
   "V.GetOriginalPointIdsName() -> string\nC++: virtual const char *GetOriginalPointIdsName()\n\nIf PassThroughCellIds or PassThroughPointIds is on, then these\nivars control the name given to the field in which the ids are\nwritten into.  If set to nullptr, then vtkOriginalCellIds or\nvtkOriginalPointIds (the default) is used, respectively.\n"},
  {"SetNonlinearSubdivisionLevel", PyvtkDataSetSurfaceFilter_SetNonlinearSubdivisionLevel, METH_VARARGS,
   "V.SetNonlinearSubdivisionLevel(int)\nC++: virtual void SetNonlinearSubdivisionLevel(int _arg)\n\nIf the input is an unstructured grid with nonlinear faces, this\nparameter determines how many times the face is subdivided into\nlinear faces.  If 0, the output is the equivalent of its linear\ncounterpart (and the midpoints determining the nonlinear\ninterpolation are discarded).  If 1 (the default), the nonlinear\nface is triangulated based on the midpoints.  If greater than 1,\nthe triangulated pieces are recursively subdivided to reach the\ndesired subdivision.  Setting the value to greater than 1 may\ncause some point data to not be passed even if no nonlinear faces\nexist.  This option has no effect if the input is not an\nunstructured grid.\n"},
  {"GetNonlinearSubdivisionLevel", PyvtkDataSetSurfaceFilter_GetNonlinearSubdivisionLevel, METH_VARARGS,
   "V.GetNonlinearSubdivisionLevel() -> int\nC++: virtual int GetNonlinearSubdivisionLevel()\n\nIf the input is an unstructured grid with nonlinear faces, this\nparameter determines how many times the face is subdivided into\nlinear faces.  If 0, the output is the equivalent of its linear\ncounterpart (and the midpoints determining the nonlinear\ninterpolation are discarded).  If 1 (the default), the nonlinear\nface is triangulated based on the midpoints.  If greater than 1,\nthe triangulated pieces are recursively subdivided to reach the\ndesired subdivision.  Setting the value to greater than 1 may\ncause some point data to not be passed even if no nonlinear faces\nexist.  This option has no effect if the input is not an\nunstructured grid.\n"},
  {"StructuredExecute", PyvtkDataSetSurfaceFilter_StructuredExecute, METH_VARARGS,
   "V.StructuredExecute(vtkDataSet, vtkPolyData, [int, ...], [int,\n    ...]) -> int\nC++: virtual int StructuredExecute(vtkDataSet *input,\n    vtkPolyData *output, vtkIdType *ext, vtkIdType *wholeExt)\nV.StructuredExecute(vtkDataSet, vtkPolyData, [int, ...], [int,\n    ...]) -> int\nC++: virtual int StructuredExecute(vtkDataSet *input,\n    vtkPolyData *output, int *ext32, int *wholeExt32)\n\nDirect access methods that can be used to use the this class as\nan algorithm without using it as a filter.\n"},
  {"UnstructuredGridExecute", PyvtkDataSetSurfaceFilter_UnstructuredGridExecute, METH_VARARGS,
   "V.UnstructuredGridExecute(vtkDataSet, vtkPolyData) -> int\nC++: virtual int UnstructuredGridExecute(vtkDataSet *input,\n    vtkPolyData *output)\n\nDirect access methods that can be used to use the this class as\nan algorithm without using it as a filter.\n"},
  {"DataSetExecute", PyvtkDataSetSurfaceFilter_DataSetExecute, METH_VARARGS,
   "V.DataSetExecute(vtkDataSet, vtkPolyData) -> int\nC++: virtual int DataSetExecute(vtkDataSet *input,\n    vtkPolyData *output)\n\nDirect access methods that can be used to use the this class as\nan algorithm without using it as a filter.\n"},
  {"StructuredWithBlankingExecute", PyvtkDataSetSurfaceFilter_StructuredWithBlankingExecute, METH_VARARGS,
   "V.StructuredWithBlankingExecute(vtkStructuredGrid, vtkPolyData)\n    -> int\nC++: virtual int StructuredWithBlankingExecute(\n    vtkStructuredGrid *input, vtkPolyData *output)\n\nDirect access methods that can be used to use the this class as\nan algorithm without using it as a filter.\n"},
  {"UniformGridExecute", PyvtkDataSetSurfaceFilter_UniformGridExecute, METH_VARARGS,
   "V.UniformGridExecute(vtkDataSet, vtkPolyData, [int, ...], [int,\n    ...], [bool, bool, bool, bool, bool, bool]) -> int\nC++: virtual int UniformGridExecute(vtkDataSet *input,\n    vtkPolyData *output, vtkIdType *ext, vtkIdType *wholeExt,\n    bool extractface[6])\nV.UniformGridExecute(vtkDataSet, vtkPolyData, [int, ...], [int,\n    ...], [bool, bool, bool, bool, bool, bool]) -> int\nC++: virtual int UniformGridExecute(vtkDataSet *input,\n    vtkPolyData *output, int *ext32, int *wholeExt32,\n    bool extractface[6])\n\nDirect access methods that can be used to use the this class as\nan algorithm without using it as a filter.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkDataSetSurfaceFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersGeometryPython.vtkDataSetSurfaceFilter", // tp_name
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
  PyvtkDataSetSurfaceFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkDataSetSurfaceFilter_StaticNew()
{
  return vtkDataSetSurfaceFilter::New();
}

PyObject *PyvtkDataSetSurfaceFilter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkDataSetSurfaceFilter_Type, PyvtkDataSetSurfaceFilter_Methods,
    "vtkDataSetSurfaceFilter",
 &PyvtkDataSetSurfaceFilter_StaticNew);

  PyTypeObject *pytype = &PyvtkDataSetSurfaceFilter_Type;

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

void PyVTKAddFile_vtkDataSetSurfaceFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkFastGeomQuadStruct_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkFastGeomQuadStruct", o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkDataSetSurfaceFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkDataSetSurfaceFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

