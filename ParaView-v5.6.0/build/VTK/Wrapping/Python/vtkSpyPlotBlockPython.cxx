// python wrapper for vtkSpyPlotBlock
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkDataArray.h"
#include "vtkFloatArray.h"
#include "vtkBoundingBox.h"
#include "vtkSpyPlotBlock.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSpyPlotBlock(PyObject *); }

static const char *PyvtkSpyPlotBlock_Doc =
  "vtkSpyPlotBlock - Represents a SpyPlot Block Grid\n\n"
  "vtkSpyPlotBlock is a regular hexahedral grid stored in a SpyPlot\n"
  "file. The grid can be part of an Adaptive Mesh Refinement (AMR)\n"
  "dataset or part The class was extracted from vtkSpyPlotUniReader and\n"
  "expanded upon by transisitioning functionality from\n"
  "vtkSpyPlotUniReader and adding it to this class.  Note that this\n"
  "helper class is not derived from vtkObject and can be allocated on\n"
  "the static\n\n"
  "vtkSpyPlotBlock()\n"
  "vtkSpyPlotBlock(const &vtkSpyPlotBlock)\n";


static PyObject *
PyvtkSpyPlotBlock_GetLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLevel");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkSpyPlotBlock *op = static_cast<vtkSpyPlotBlock *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = op->GetLevel();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpyPlotBlock_GetDimensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimensions");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkSpyPlotBlock *op = static_cast<vtkSpyPlotBlock *>(vp);

  const size_t size0 = 3;
  int temp0[3];
  int save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    op->GetDimensions(temp0);

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpyPlotBlock_GetDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimension");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkSpyPlotBlock *op = static_cast<vtkSpyPlotBlock *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = op->GetDimension(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpyPlotBlock_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkSpyPlotBlock *op = static_cast<vtkSpyPlotBlock *>(vp);

  const size_t size0 = 6;
  double temp0[6];
  double save0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    op->GetBounds(temp0);

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpyPlotBlock_GetSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSpacing");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkSpyPlotBlock *op = static_cast<vtkSpyPlotBlock *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    op->GetSpacing(temp0);

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpyPlotBlock_GetVectors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectors");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkSpyPlotBlock *op = static_cast<vtkSpyPlotBlock *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkFloatArray *tempr = op->GetVectors(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpyPlotBlock_GetExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtents");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkSpyPlotBlock *op = static_cast<vtkSpyPlotBlock *>(vp);

  const size_t size0 = 6;
  int temp0[6];
  int save0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    op->GetExtents(temp0);

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpyPlotBlock_IsAllocated(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsAllocated");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkSpyPlotBlock *op = static_cast<vtkSpyPlotBlock *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = op->IsAllocated();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpyPlotBlock_IsFixed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsFixed");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkSpyPlotBlock *op = static_cast<vtkSpyPlotBlock *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = op->IsFixed();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpyPlotBlock_IsActive(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsActive");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkSpyPlotBlock *op = static_cast<vtkSpyPlotBlock *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = op->IsActive();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpyPlotBlock_IsAMR(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsAMR");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkSpyPlotBlock *op = static_cast<vtkSpyPlotBlock *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = op->IsAMR();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpyPlotBlock_MarkedAsFixed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MarkedAsFixed");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkSpyPlotBlock *op = static_cast<vtkSpyPlotBlock *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    op->MarkedAsFixed();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpyPlotBlock_GetRealBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRealBounds");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkSpyPlotBlock *op = static_cast<vtkSpyPlotBlock *>(vp);

  const size_t size0 = 6;
  double temp0[6];
  double save0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    op->GetRealBounds(temp0);

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpyPlotBlock_GetAMRInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAMRInformation");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkSpyPlotBlock *op = static_cast<vtkSpyPlotBlock *>(vp);

  vtkBoundingBox *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<int> store1(2*size1);
  int *temp1 = store1.Data();
  int *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  const size_t size2 = 3;
  double temp2[3];
  double save2[3];
  const size_t size3 = 3;
  double temp3[3];
  double save3[3];
  const size_t size4 = 6;
  int temp4[6];
  int save4[6];
  const size_t size5 = 6;
  int temp5[6];
  int save5[6];
  const size_t size6 = 3;
  int temp6[3];
  int save6[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(7) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkBoundingBox") &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetArray(temp5, size5) &&
      ap.GetArray(temp6, size6))
  {
    ap.Save(temp1, save1, size1);
    ap.Save(temp2, save2, size2);
    ap.Save(temp3, save3, size3);
    ap.Save(temp4, save4, size4);
    ap.Save(temp5, save5, size5);
    ap.Save(temp6, save6, size6);

    int tempr = op->GetAMRInformation(*temp0, temp1, temp2, temp3, temp4, temp5, temp6);

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

    if (ap.HasChanged(temp5, save5, size5) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(5, temp5, size5);
    }

    if (ap.HasChanged(temp6, save6, size6) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(6, temp6, size6);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkSpyPlotBlock_SetGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGeometry");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkSpyPlotBlock *op = static_cast<vtkSpyPlotBlock *>(vp);

  int temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<unsigned char> store1(size1);
  unsigned char *temp1 = store1.Data();
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2))
  {
    int tempr = op->SetGeometry(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpyPlotBlock_GetTotalSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTotalSize");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkSpyPlotBlock *op = static_cast<vtkSpyPlotBlock *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = op->GetTotalSize();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpyPlotBlock_SetDebug(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDebug");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkSpyPlotBlock *op = static_cast<vtkSpyPlotBlock *>(vp);

  unsigned char temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->SetDebug(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpyPlotBlock_GetDebug(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDebug");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkSpyPlotBlock *op = static_cast<vtkSpyPlotBlock *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned char tempr = op->GetDebug();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpyPlotBlock_SetCoordinateSystem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCoordinateSystem");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkSpyPlotBlock *op = static_cast<vtkSpyPlotBlock *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->SetCoordinateSystem(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSpyPlotBlock_Methods[] = {
  {"GetLevel", PyvtkSpyPlotBlock_GetLevel, METH_VARARGS,
   "V.GetLevel() -> int\nC++: int GetLevel()\n\n\n"},
  {"GetDimensions", PyvtkSpyPlotBlock_GetDimensions, METH_VARARGS,
   "V.GetDimensions([int, int, int])\nC++: void GetDimensions(int dims[3])\n\n\n"},
  {"GetDimension", PyvtkSpyPlotBlock_GetDimension, METH_VARARGS,
   "V.GetDimension(int) -> int\nC++: int GetDimension(int i)\n\n\n"},
  {"GetBounds", PyvtkSpyPlotBlock_GetBounds, METH_VARARGS,
   "V.GetBounds([float, float, float, float, float, float])\nC++: void GetBounds(double bounds[6])\n\n\n"},
  {"GetSpacing", PyvtkSpyPlotBlock_GetSpacing, METH_VARARGS,
   "V.GetSpacing([float, float, float])\nC++: void GetSpacing(double spacing[3])\n\n\n"},
  {"GetVectors", PyvtkSpyPlotBlock_GetVectors, METH_VARARGS,
   "V.GetVectors(int) -> vtkFloatArray\nC++: vtkFloatArray *GetVectors(int i)\n\n\n"},
  {"GetExtents", PyvtkSpyPlotBlock_GetExtents, METH_VARARGS,
   "V.GetExtents([int, int, int, int, int, int])\nC++: void GetExtents(int extents[6])\n\n\n"},
  {"IsAllocated", PyvtkSpyPlotBlock_IsAllocated, METH_VARARGS,
   "V.IsAllocated() -> int\nC++: int IsAllocated()\n\n\n"},
  {"IsFixed", PyvtkSpyPlotBlock_IsFixed, METH_VARARGS,
   "V.IsFixed() -> int\nC++: int IsFixed()\n\n\n"},
  {"IsActive", PyvtkSpyPlotBlock_IsActive, METH_VARARGS,
   "V.IsActive() -> int\nC++: int IsActive()\n\n\n"},
  {"IsAMR", PyvtkSpyPlotBlock_IsAMR, METH_VARARGS,
   "V.IsAMR() -> int\nC++: int IsAMR()\n\n\n"},
  {"MarkedAsFixed", PyvtkSpyPlotBlock_MarkedAsFixed, METH_VARARGS,
   "V.MarkedAsFixed()\nC++: void MarkedAsFixed()\n\n\n"},
  {"GetRealBounds", PyvtkSpyPlotBlock_GetRealBounds, METH_VARARGS,
   "V.GetRealBounds([float, float, float, float, float, float])\nC++: void GetRealBounds(double realBounds[6])\n\n\n"},
  {"GetAMRInformation", PyvtkSpyPlotBlock_GetAMRInformation, METH_VARARGS,
   "V.GetAMRInformation(vtkBoundingBox, [int, ...], [float, float,\n    float], [float, float, float], [int, int, int, int, int, int],\n     [int, int, int, int, int, int], [int, int, int]) -> int\nC++: int GetAMRInformation(const vtkBoundingBox &globalBounds,\n    int *level, double spacing[3], double origin[3],\n    int extents[6], int realExtents[6], int realDimensions[3])\n\n\n"},
  {"SetGeometry", PyvtkSpyPlotBlock_SetGeometry, METH_VARARGS,
   "V.SetGeometry(int, (int, ...), int) -> int\nC++: int SetGeometry(int dir, const unsigned char *encodedInfo,\n    int infoSize)\n\n"},
  {"GetTotalSize", PyvtkSpyPlotBlock_GetTotalSize, METH_VARARGS,
   "V.GetTotalSize() -> int\nC++: int GetTotalSize()\n\n"},
  {"SetDebug", PyvtkSpyPlotBlock_SetDebug, METH_VARARGS,
   "V.SetDebug(int)\nC++: void SetDebug(unsigned char i)\n\n"},
  {"GetDebug", PyvtkSpyPlotBlock_GetDebug, METH_VARARGS,
   "V.GetDebug() -> int\nC++: unsigned char GetDebug()\n\n"},
  {"SetCoordinateSystem", PyvtkSpyPlotBlock_SetCoordinateSystem, METH_VARARGS,
   "V.SetCoordinateSystem(int)\nC++: void SetCoordinateSystem(const int &coordinateSystem)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkSpyPlotBlock_vtkSpyPlotBlock_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkSpyPlotBlock");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkSpyPlotBlock *op = new vtkSpyPlotBlock();

    result = PyVTKSpecialObject_New("vtkSpyPlotBlock", op);
  }

  return result;
}

static PyObject *
PyvtkSpyPlotBlock_vtkSpyPlotBlock_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkSpyPlotBlock");

  vtkSpyPlotBlock *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkSpyPlotBlock"))
  {
    vtkSpyPlotBlock *op = new vtkSpyPlotBlock(*temp0);

    result = PyVTKSpecialObject_New("vtkSpyPlotBlock", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkSpyPlotBlock_vtkSpyPlotBlock_Methods[] = {
  {nullptr, PyvtkSpyPlotBlock_vtkSpyPlotBlock_s2, METH_VARARGS,
   "@W vtkSpyPlotBlock"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSpyPlotBlock_vtkSpyPlotBlock(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkSpyPlotBlock_vtkSpyPlotBlock_s1(self, args);
    case 1:
      return PyvtkSpyPlotBlock_vtkSpyPlotBlock_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkSpyPlotBlock");
  return nullptr;
}


static PyObject *
PyvtkSpyPlotBlock_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkSpyPlotBlock_vtkSpyPlotBlock(nullptr, args);
}

static void PyvtkSpyPlotBlock_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkSpyPlotBlock *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkSpyPlotBlock_Hash(PyObject *self)
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

static PyTypeObject PyvtkSpyPlotBlock_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsDefaultPython.vtkSpyPlotBlock", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkSpyPlotBlock_Delete, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkSpyPlotBlock_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkSpyPlotBlock_Doc, // tp_doc
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
  PyvtkSpyPlotBlock_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkSpyPlotBlock_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkSpyPlotBlock(*static_cast<const vtkSpyPlotBlock*>(obj));
  }
  return 0;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSpyPlotBlock_TypeNew(); }

PyObject *PyvtkSpyPlotBlock_TypeNew()
{
  PyVTKSpecialType_Add(
    &PyvtkSpyPlotBlock_Type,
    PyvtkSpyPlotBlock_Methods,
    PyvtkSpyPlotBlock_vtkSpyPlotBlock_Methods,
    &PyvtkSpyPlotBlock_CCopy);

  PyTypeObject *pytype = &PyvtkSpyPlotBlock_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSpyPlotBlock(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSpyPlotBlock_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkSpyPlotBlock", o) != 0)
  {
    Py_DECREF(o);
  }

}

