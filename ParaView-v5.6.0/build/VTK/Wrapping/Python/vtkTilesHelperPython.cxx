// python wrapper for vtkTilesHelper
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
#include "vtkTilesHelper.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkTilesHelper(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkTilesHelper_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkTilesHelper_Doc =
  "vtkTilesHelper - this is a helper class that handles viewport\ncomputations when rendering for tile-displays.\n\n"
  "Superclass: vtkObject\n\n"
  "This assumes that all tiles have the same pixel-size.\n\n";


static PyObject *
PyvtkTilesHelper_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTilesHelper::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTilesHelper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTilesHelper *op = static_cast<vtkTilesHelper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTilesHelper::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTilesHelper_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTilesHelper *tempr = vtkTilesHelper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTilesHelper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTilesHelper *op = static_cast<vtkTilesHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTilesHelper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTilesHelper::NewInstance());

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
PyvtkTilesHelper_SetTileDimensions_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTileDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTilesHelper *op = static_cast<vtkTilesHelper *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetTileDimensions(temp0, temp1);
    }
    else
    {
      op->vtkTilesHelper::SetTileDimensions(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTilesHelper_SetTileDimensions_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTileDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTilesHelper *op = static_cast<vtkTilesHelper *>(vp);

  const size_t size0 = 2;
  int temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetTileDimensions(temp0);
    }
    else
    {
      op->vtkTilesHelper::SetTileDimensions(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTilesHelper_SetTileDimensions(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkTilesHelper_SetTileDimensions_s1(self, args);
    case 1:
      return PyvtkTilesHelper_SetTileDimensions_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetTileDimensions");
  return nullptr;
}



static PyObject *
PyvtkTilesHelper_GetTileDimensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTileDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTilesHelper *op = static_cast<vtkTilesHelper *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetTileDimensions() :
      op->vtkTilesHelper::GetTileDimensions());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkTilesHelper_SetTileMullions_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTileMullions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTilesHelper *op = static_cast<vtkTilesHelper *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetTileMullions(temp0, temp1);
    }
    else
    {
      op->vtkTilesHelper::SetTileMullions(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTilesHelper_SetTileMullions_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTileMullions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTilesHelper *op = static_cast<vtkTilesHelper *>(vp);

  const size_t size0 = 2;
  int temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetTileMullions(temp0);
    }
    else
    {
      op->vtkTilesHelper::SetTileMullions(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTilesHelper_SetTileMullions(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkTilesHelper_SetTileMullions_s1(self, args);
    case 1:
      return PyvtkTilesHelper_SetTileMullions_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetTileMullions");
  return nullptr;
}



static PyObject *
PyvtkTilesHelper_GetTileMullions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTileMullions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTilesHelper *op = static_cast<vtkTilesHelper *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetTileMullions() :
      op->vtkTilesHelper::GetTileMullions());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkTilesHelper_SetTileWindowSize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTileWindowSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTilesHelper *op = static_cast<vtkTilesHelper *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetTileWindowSize(temp0, temp1);
    }
    else
    {
      op->vtkTilesHelper::SetTileWindowSize(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTilesHelper_SetTileWindowSize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTileWindowSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTilesHelper *op = static_cast<vtkTilesHelper *>(vp);

  const size_t size0 = 2;
  int temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetTileWindowSize(temp0);
    }
    else
    {
      op->vtkTilesHelper::SetTileWindowSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTilesHelper_SetTileWindowSize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkTilesHelper_SetTileWindowSize_s1(self, args);
    case 1:
      return PyvtkTilesHelper_SetTileWindowSize_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetTileWindowSize");
  return nullptr;
}



static PyObject *
PyvtkTilesHelper_GetTileWindowSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTileWindowSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTilesHelper *op = static_cast<vtkTilesHelper *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetTileWindowSize() :
      op->vtkTilesHelper::GetTileWindowSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkTilesHelper_GetTileViewport(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTileViewport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTilesHelper *op = static_cast<vtkTilesHelper *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(size0);
  double *temp0 = store0.Data();
  int temp1;
  const size_t size2 = 4;
  int temp2[4];
  int save2[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2))
  {
    ap.Save(temp2, save2, size2);

    bool tempr = (ap.IsBound() ?
      op->GetTileViewport(temp0, temp1, temp2) :
      op->vtkTilesHelper::GetTileViewport(temp0, temp1, temp2));

    if (ap.HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTilesHelper_GetNormalizedTileViewport(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormalizedTileViewport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTilesHelper *op = static_cast<vtkTilesHelper *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(size0);
  double *temp0 = store0.Data();
  int temp1;
  const size_t size2 = 4;
  double temp2[4];
  double save2[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2))
  {
    ap.Save(temp2, save2, size2);

    bool tempr = (ap.IsBound() ?
      op->GetNormalizedTileViewport(temp0, temp1, temp2) :
      op->vtkTilesHelper::GetNormalizedTileViewport(temp0, temp1, temp2));

    if (ap.HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTilesHelper_GetPhysicalViewport(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPhysicalViewport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTilesHelper *op = static_cast<vtkTilesHelper *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(size0);
  double *temp0 = store0.Data();
  int temp1;
  const size_t size2 = 4;
  double temp2[4];
  double save2[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2))
  {
    ap.Save(temp2, save2, size2);

    bool tempr = (ap.IsBound() ?
      op->GetPhysicalViewport(temp0, temp1, temp2) :
      op->vtkTilesHelper::GetPhysicalViewport(temp0, temp1, temp2));

    if (ap.HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTilesHelper_GetTileIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTileIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTilesHelper *op = static_cast<vtkTilesHelper *>(vp);

  int temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<int> store1(2*size1);
  int *temp1 = store1.Data();
  int *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<int> store2(2*size2);
  int *temp2 = store2.Data();
  int *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
  {
    ap.Save(temp1, save1, size1);
    ap.Save(temp2, save2, size2);

    if (ap.IsBound())
    {
      op->GetTileIndex(temp0, temp1, temp2);
    }
    else
    {
      op->vtkTilesHelper::GetTileIndex(temp0, temp1, temp2);
    }

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (ap.HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkTilesHelper_Methods[] = {
  {"IsTypeOf", PyvtkTilesHelper_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkTilesHelper_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkTilesHelper_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkTilesHelper\nC++: static vtkTilesHelper *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkTilesHelper_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkTilesHelper\nC++: vtkTilesHelper *NewInstance()\n\n"},
  {"SetTileDimensions", PyvtkTilesHelper_SetTileDimensions, METH_VARARGS,
   "V.SetTileDimensions(int, int)\nC++: void SetTileDimensions(int, int)\nV.SetTileDimensions((int, int))\nC++: void SetTileDimensions(int a[2])\n\n"},
  {"GetTileDimensions", PyvtkTilesHelper_GetTileDimensions, METH_VARARGS,
   "V.GetTileDimensions() -> (int, int)\nC++: int *GetTileDimensions()\n\n"},
  {"SetTileMullions", PyvtkTilesHelper_SetTileMullions, METH_VARARGS,
   "V.SetTileMullions(int, int)\nC++: void SetTileMullions(int, int)\nV.SetTileMullions((int, int))\nC++: void SetTileMullions(int a[2])\n\n"},
  {"GetTileMullions", PyvtkTilesHelper_GetTileMullions, METH_VARARGS,
   "V.GetTileMullions() -> (int, int)\nC++: int *GetTileMullions()\n\n"},
  {"SetTileWindowSize", PyvtkTilesHelper_SetTileWindowSize, METH_VARARGS,
   "V.SetTileWindowSize(int, int)\nC++: void SetTileWindowSize(int, int)\nV.SetTileWindowSize((int, int))\nC++: void SetTileWindowSize(int a[2])\n\n"},
  {"GetTileWindowSize", PyvtkTilesHelper_GetTileWindowSize, METH_VARARGS,
   "V.GetTileWindowSize() -> (int, int)\nC++: int *GetTileWindowSize()\n\n"},
  {"GetTileViewport", PyvtkTilesHelper_GetTileViewport, METH_VARARGS,
   "V.GetTileViewport((float, ...), int, [int, int, int, int]) -> bool\nC++: bool GetTileViewport(const double *viewport, int rank,\n    int out_tile_viewport[4])\n\nReturns (x-origin, y-origin, x-max, y-max) in pixels for a tile\nwith givenrank. viewport is in normalized display coordinates\ni.e. in range [0, 1] indicating the viewport covered by the\ncurrent renderer on the whole i.e. treating all tiles as one\nlarge display if TileDimensions > (1, 1). Returns false to\nindicate the result hasn't been computed.\n"},
  {"GetNormalizedTileViewport", PyvtkTilesHelper_GetNormalizedTileViewport, METH_VARARGS,
   "V.GetNormalizedTileViewport((float, ...), int, [float, float,\n    float, float]) -> bool\nC++: bool GetNormalizedTileViewport(const double *viewport,\n    int rank, double out_tile_viewport[4])\n\nSame as GetTileViewport() except that the returns values are in\nnormalized-display coordinates instead of display coordinates.\nReturns false to indicate the result hasn't been computed.\n"},
  {"GetPhysicalViewport", PyvtkTilesHelper_GetPhysicalViewport, METH_VARARGS,
   "V.GetPhysicalViewport((float, ...), int, [float, float, float,\n    float]) -> bool\nC++: bool GetPhysicalViewport(const double *global_viewport,\n    int rank, double out_phyiscal_viewport[4])\n\nGiven a global-viewport for a renderer, returns the physical\nviewport on the rank indicated. Returns false to indicate the\nresult hasn't been computed.\n"},
  {"GetTileIndex", PyvtkTilesHelper_GetTileIndex, METH_VARARGS,
   "V.GetTileIndex(int, [int, ...], [int, ...])\nC++: void GetTileIndex(int rank, int *tileX, int *tileY)\n\nGiven the rank, returns the tile location.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkTilesHelper_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsRenderingPython.vtkTilesHelper", // tp_name
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
  PyvtkTilesHelper_Doc, // tp_doc
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

static vtkObjectBase *PyvtkTilesHelper_StaticNew()
{
  return vtkTilesHelper::New();
}

PyObject *PyvtkTilesHelper_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkTilesHelper_Type, PyvtkTilesHelper_Methods,
    "vtkTilesHelper",
 &PyvtkTilesHelper_StaticNew);

  PyTypeObject *pytype = &PyvtkTilesHelper_Type;

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

void PyVTKAddFile_vtkTilesHelper(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkTilesHelper_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkTilesHelper", o) != 0)
  {
    Py_DECREF(o);
  }

}

