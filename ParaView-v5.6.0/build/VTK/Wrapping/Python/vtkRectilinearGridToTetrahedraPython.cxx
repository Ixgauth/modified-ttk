// python wrapper for vtkRectilinearGridToTetrahedra
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
#include "vtkRectilinearGridToTetrahedra.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkRectilinearGridToTetrahedra(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkRectilinearGridToTetrahedra_ClassNew(); }

#ifndef DECLARED_PyvtkUnstructuredGridAlgorithm_ClassNew
extern "C" { PyObject *PyvtkUnstructuredGridAlgorithm_ClassNew(); }
#define DECLARED_PyvtkUnstructuredGridAlgorithm_ClassNew
#endif

static const char *PyvtkRectilinearGridToTetrahedra_Doc =
  "vtkRectilinearGridToTetrahedra - create a Tetrahedral mesh from a\nRectilinearGrid\n\n"
  "Superclass: vtkUnstructuredGridAlgorithm\n\n"
  "vtkRectilinearGridToTetrahedra forms a mesh of Tetrahedra from a\n"
  "vtkRectilinearGrid.  The tetrahedra can be 5 per cell, 6 per cell, or\n"
  "a mixture of 5 or 12 per cell. The resulting mesh is consistent,\n"
  "meaning that there are no edge crossings and that each tetrahedron\n"
  "face is shared by two tetrahedra, except those tetrahedra on the\n"
  "boundary. All tetrahedra are right handed.\n\n"
  "Note that 12 tetrahedra per cell means adding a point in the center\n"
  "of the cell.\n\n"
  "In order to subdivide some cells into 5 and some cells into 12\n"
  "tetrahedra: SetTetraPerCellTo5And12(); Set the Scalars of the Input\n"
  "RectilinearGrid to be 5 or 12 depending on what you want per cell of\n"
  "the RectilinearGrid.\n\n"
  "If you set RememberVoxelId, the scalars of the tetrahedron will be\n"
  "set to the Id of the Cell in the RectilinearGrid from which the\n"
  "tetrahedron came.\n\n"
  "@par Thanks:\n"
  "   This class was developed by Samson J. Timoner of the\n"
  "   MIT Artificial Intelligence Laboratory\n\n"
  "@sa\n"
  "   vtkDelaunay3D\n\n";


static PyObject *
PyvtkRectilinearGridToTetrahedra_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkRectilinearGridToTetrahedra::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRectilinearGridToTetrahedra_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGridToTetrahedra *op = static_cast<vtkRectilinearGridToTetrahedra *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkRectilinearGridToTetrahedra::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRectilinearGridToTetrahedra_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkRectilinearGridToTetrahedra *tempr = vtkRectilinearGridToTetrahedra::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRectilinearGridToTetrahedra_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGridToTetrahedra *op = static_cast<vtkRectilinearGridToTetrahedra *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRectilinearGridToTetrahedra *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkRectilinearGridToTetrahedra::NewInstance());

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
PyvtkRectilinearGridToTetrahedra_SetTetraPerCellTo5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTetraPerCellTo5");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGridToTetrahedra *op = static_cast<vtkRectilinearGridToTetrahedra *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTetraPerCellTo5();
    }
    else
    {
      op->vtkRectilinearGridToTetrahedra::SetTetraPerCellTo5();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRectilinearGridToTetrahedra_SetTetraPerCellTo6(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTetraPerCellTo6");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGridToTetrahedra *op = static_cast<vtkRectilinearGridToTetrahedra *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTetraPerCellTo6();
    }
    else
    {
      op->vtkRectilinearGridToTetrahedra::SetTetraPerCellTo6();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRectilinearGridToTetrahedra_SetTetraPerCellTo12(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTetraPerCellTo12");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGridToTetrahedra *op = static_cast<vtkRectilinearGridToTetrahedra *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTetraPerCellTo12();
    }
    else
    {
      op->vtkRectilinearGridToTetrahedra::SetTetraPerCellTo12();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRectilinearGridToTetrahedra_SetTetraPerCellTo5And12(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTetraPerCellTo5And12");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGridToTetrahedra *op = static_cast<vtkRectilinearGridToTetrahedra *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTetraPerCellTo5And12();
    }
    else
    {
      op->vtkRectilinearGridToTetrahedra::SetTetraPerCellTo5And12();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRectilinearGridToTetrahedra_SetTetraPerCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTetraPerCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGridToTetrahedra *op = static_cast<vtkRectilinearGridToTetrahedra *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTetraPerCell(temp0);
    }
    else
    {
      op->vtkRectilinearGridToTetrahedra::SetTetraPerCell(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRectilinearGridToTetrahedra_GetTetraPerCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTetraPerCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGridToTetrahedra *op = static_cast<vtkRectilinearGridToTetrahedra *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTetraPerCell() :
      op->vtkRectilinearGridToTetrahedra::GetTetraPerCell());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRectilinearGridToTetrahedra_SetRememberVoxelId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRememberVoxelId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGridToTetrahedra *op = static_cast<vtkRectilinearGridToTetrahedra *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRememberVoxelId(temp0);
    }
    else
    {
      op->vtkRectilinearGridToTetrahedra::SetRememberVoxelId(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRectilinearGridToTetrahedra_GetRememberVoxelId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRememberVoxelId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGridToTetrahedra *op = static_cast<vtkRectilinearGridToTetrahedra *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRememberVoxelId() :
      op->vtkRectilinearGridToTetrahedra::GetRememberVoxelId());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRectilinearGridToTetrahedra_RememberVoxelIdOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RememberVoxelIdOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGridToTetrahedra *op = static_cast<vtkRectilinearGridToTetrahedra *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RememberVoxelIdOn();
    }
    else
    {
      op->vtkRectilinearGridToTetrahedra::RememberVoxelIdOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRectilinearGridToTetrahedra_RememberVoxelIdOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RememberVoxelIdOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGridToTetrahedra *op = static_cast<vtkRectilinearGridToTetrahedra *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RememberVoxelIdOff();
    }
    else
    {
      op->vtkRectilinearGridToTetrahedra::RememberVoxelIdOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRectilinearGridToTetrahedra_SetInput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGridToTetrahedra *op = static_cast<vtkRectilinearGridToTetrahedra *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  const size_t size1 = 3;
  double temp1[3];
  double temp2 = 0.001;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    if (ap.IsBound())
    {
      op->SetInput(temp0, temp1, temp2);
    }
    else
    {
      op->vtkRectilinearGridToTetrahedra::SetInput(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkRectilinearGridToTetrahedra_SetInput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGridToTetrahedra *op = static_cast<vtkRectilinearGridToTetrahedra *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
  double temp6 = 0.001;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6, 7) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      (ap.NoArgsLeft() || ap.GetValue(temp6)))
  {
    if (ap.IsBound())
    {
      op->SetInput(temp0, temp1, temp2, temp3, temp4, temp5, temp6);
    }
    else
    {
      op->vtkRectilinearGridToTetrahedra::SetInput(temp0, temp1, temp2, temp3, temp4, temp5, temp6);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkRectilinearGridToTetrahedra_SetInput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
    case 3:
      return PyvtkRectilinearGridToTetrahedra_SetInput_s1(self, args);
    case 6:
    case 7:
      return PyvtkRectilinearGridToTetrahedra_SetInput_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetInput");
  return nullptr;
}


static PyMethodDef PyvtkRectilinearGridToTetrahedra_Methods[] = {
  {"IsTypeOf", PyvtkRectilinearGridToTetrahedra_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkRectilinearGridToTetrahedra_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkRectilinearGridToTetrahedra_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkRectilinearGridToTetrahedra\nC++: static vtkRectilinearGridToTetrahedra *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkRectilinearGridToTetrahedra_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkRectilinearGridToTetrahedra\nC++: vtkRectilinearGridToTetrahedra *NewInstance()\n\n"},
  {"SetTetraPerCellTo5", PyvtkRectilinearGridToTetrahedra_SetTetraPerCellTo5, METH_VARARGS,
   "V.SetTetraPerCellTo5()\nC++: void SetTetraPerCellTo5()\n\nSet the method to divide each cell (voxel) in the RectilinearGrid\ninto tetrahedra.\n"},
  {"SetTetraPerCellTo6", PyvtkRectilinearGridToTetrahedra_SetTetraPerCellTo6, METH_VARARGS,
   "V.SetTetraPerCellTo6()\nC++: void SetTetraPerCellTo6()\n\nSet the method to divide each cell (voxel) in the RectilinearGrid\ninto tetrahedra.\n"},
  {"SetTetraPerCellTo12", PyvtkRectilinearGridToTetrahedra_SetTetraPerCellTo12, METH_VARARGS,
   "V.SetTetraPerCellTo12()\nC++: void SetTetraPerCellTo12()\n\nSet the method to divide each cell (voxel) in the RectilinearGrid\ninto tetrahedra.\n"},
  {"SetTetraPerCellTo5And12", PyvtkRectilinearGridToTetrahedra_SetTetraPerCellTo5And12, METH_VARARGS,
   "V.SetTetraPerCellTo5And12()\nC++: void SetTetraPerCellTo5And12()\n\nSet the method to divide each cell (voxel) in the RectilinearGrid\ninto tetrahedra.\n"},
  {"SetTetraPerCell", PyvtkRectilinearGridToTetrahedra_SetTetraPerCell, METH_VARARGS,
   "V.SetTetraPerCell(int)\nC++: virtual void SetTetraPerCell(int _arg)\n\nSet the method to divide each cell (voxel) in the RectilinearGrid\ninto tetrahedra.\n"},
  {"GetTetraPerCell", PyvtkRectilinearGridToTetrahedra_GetTetraPerCell, METH_VARARGS,
   "V.GetTetraPerCell() -> int\nC++: virtual int GetTetraPerCell()\n\nSet the method to divide each cell (voxel) in the RectilinearGrid\ninto tetrahedra.\n"},
  {"SetRememberVoxelId", PyvtkRectilinearGridToTetrahedra_SetRememberVoxelId, METH_VARARGS,
   "V.SetRememberVoxelId(int)\nC++: virtual void SetRememberVoxelId(vtkTypeBool _arg)\n\nShould the tetrahedra have scalar data indicating which Voxel\nthey came from in the vtkRectilinearGrid?\n"},
  {"GetRememberVoxelId", PyvtkRectilinearGridToTetrahedra_GetRememberVoxelId, METH_VARARGS,
   "V.GetRememberVoxelId() -> int\nC++: virtual vtkTypeBool GetRememberVoxelId()\n\nShould the tetrahedra have scalar data indicating which Voxel\nthey came from in the vtkRectilinearGrid?\n"},
  {"RememberVoxelIdOn", PyvtkRectilinearGridToTetrahedra_RememberVoxelIdOn, METH_VARARGS,
   "V.RememberVoxelIdOn()\nC++: virtual void RememberVoxelIdOn()\n\nShould the tetrahedra have scalar data indicating which Voxel\nthey came from in the vtkRectilinearGrid?\n"},
  {"RememberVoxelIdOff", PyvtkRectilinearGridToTetrahedra_RememberVoxelIdOff, METH_VARARGS,
   "V.RememberVoxelIdOff()\nC++: virtual void RememberVoxelIdOff()\n\nShould the tetrahedra have scalar data indicating which Voxel\nthey came from in the vtkRectilinearGrid?\n"},
  {"SetInput", PyvtkRectilinearGridToTetrahedra_SetInput, METH_VARARGS,
   "V.SetInput((float, float, float), (float, float, float), float)\nC++: void SetInput(const double Extent[3],\n    const double Spacing[3], const double tol=0.001)\nV.SetInput(float, float, float, float, float, float, float)\nC++: void SetInput(const double ExtentX, const double ExtentY,\n    const double ExtentZ, const double SpacingX,\n    const double SpacingY, const double SpacingZ,\n    const double tol=0.001)\n\nThis function for convenience for creating a Rectilinear Grid If\nSpacing does not fit evenly into extent, the last cell will have\na different width (or height or depth). If Extent[i]/Spacing[i]\nis within tol of an integer, then assume the programmer meant an\ninteger for direction i.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkRectilinearGridToTetrahedra_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersGeneralPython.vtkRectilinearGridToTetrahedra", // tp_name
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
  PyvtkRectilinearGridToTetrahedra_Doc, // tp_doc
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

static vtkObjectBase *PyvtkRectilinearGridToTetrahedra_StaticNew()
{
  return vtkRectilinearGridToTetrahedra::New();
}

PyObject *PyvtkRectilinearGridToTetrahedra_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkRectilinearGridToTetrahedra_Type, PyvtkRectilinearGridToTetrahedra_Methods,
    "vtkRectilinearGridToTetrahedra",
 &PyvtkRectilinearGridToTetrahedra_StaticNew);

  PyTypeObject *pytype = &PyvtkRectilinearGridToTetrahedra_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkUnstructuredGridAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkRectilinearGridToTetrahedra(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkRectilinearGridToTetrahedra_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkRectilinearGridToTetrahedra", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 4; c++)
  {
    static const struct { const char *name; int value; }
      constants[4] = {
        { "VTK_VOXEL_TO_12_TET", 12 },
        { "VTK_VOXEL_TO_5_TET", 5 },
        { "VTK_VOXEL_TO_6_TET", 6 },
        { "VTK_VOXEL_TO_5_AND_12_TET", -1 },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

