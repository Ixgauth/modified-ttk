// python wrapper for vtkmLevelOfDetail
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
#include "vtkmLevelOfDetail.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkmLevelOfDetail(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkmLevelOfDetail_ClassNew(); }

#ifndef DECLARED_PyvtkPolyDataAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPolyDataAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPolyDataAlgorithm_ClassNew
#endif

static const char *PyvtkmLevelOfDetail_Doc =
  "vtkmLevelOfDetail - reduce the number of triangles in a mesh\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkmLevelOfDetail is a filter to reduce the number of triangles in a\n"
  "triangle mesh, forming a good approximation to the original geometry.\n"
  "The input to vtkmLevelOfDetail is a vtkPolyData or vtkUnstrcutredGrid\n"
  "object, and only triangles are treated. If you desire to decimate\n"
  "polygonal meshes, first triangulate the polygons with\n"
  "vtkTriangleFilter object.\n\n"
  "The general approach of the algorithm is to cluster vertices in a\n"
  "uniform binning of space, accumulating to an average point within\n"
  "each bin. In more detail, the algorithm first gets the bounds of the\n"
  "input poly data. It then breaks this bounding volume into a\n"
  "user-specified number of spatial bins.  It then reads each triangle\n"
  "from the input and hashes its vertices into these bins. Then, if 2 or\n"
  "more vertices of the triangle fall in the same bin, the triangle is\n"
  "dicarded.  If the triangle is not discarded, it adds the triangle to\n"
  "the list of output triangles as a list of vertex identifiers.  (There\n"
  "is one vertex id per bin.)  After all the triangles have been read,\n"
  "the representative vertex for each bin is computed.  This determines\n"
  "the spatial location of the vertices of each of the triangles in the\n"
  "output.\n\n"
  "To use this filter, specify the divisions defining the spatial\n"
  "subdivision in the x, y, and z directions. Compared to algorithms\n"
  "such as vtkQuadricClustering, a significantly higher bin count is\n"
  "recommended as it doesn't increase the computation or memory of the\n"
  "algorithm and will produce significantly better results.\n\n";


static PyObject *
PyvtkmLevelOfDetail_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkmLevelOfDetail::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkmLevelOfDetail_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkmLevelOfDetail *op = static_cast<vtkmLevelOfDetail *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkmLevelOfDetail::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkmLevelOfDetail_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkmLevelOfDetail *tempr = vtkmLevelOfDetail::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkmLevelOfDetail_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkmLevelOfDetail *op = static_cast<vtkmLevelOfDetail *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkmLevelOfDetail *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkmLevelOfDetail::NewInstance());

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
PyvtkmLevelOfDetail_SetNumberOfXDivisions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfXDivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkmLevelOfDetail *op = static_cast<vtkmLevelOfDetail *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfXDivisions(temp0);
    }
    else
    {
      op->vtkmLevelOfDetail::SetNumberOfXDivisions(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkmLevelOfDetail_SetNumberOfYDivisions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfYDivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkmLevelOfDetail *op = static_cast<vtkmLevelOfDetail *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfYDivisions(temp0);
    }
    else
    {
      op->vtkmLevelOfDetail::SetNumberOfYDivisions(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkmLevelOfDetail_SetNumberOfZDivisions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfZDivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkmLevelOfDetail *op = static_cast<vtkmLevelOfDetail *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfZDivisions(temp0);
    }
    else
    {
      op->vtkmLevelOfDetail::SetNumberOfZDivisions(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkmLevelOfDetail_GetNumberOfXDivisions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfXDivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkmLevelOfDetail *op = static_cast<vtkmLevelOfDetail *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfXDivisions() :
      op->vtkmLevelOfDetail::GetNumberOfXDivisions());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkmLevelOfDetail_GetNumberOfYDivisions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfYDivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkmLevelOfDetail *op = static_cast<vtkmLevelOfDetail *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfYDivisions() :
      op->vtkmLevelOfDetail::GetNumberOfYDivisions());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkmLevelOfDetail_GetNumberOfZDivisions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfZDivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkmLevelOfDetail *op = static_cast<vtkmLevelOfDetail *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfZDivisions() :
      op->vtkmLevelOfDetail::GetNumberOfZDivisions());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkmLevelOfDetail_SetNumberOfDivisions_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfDivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkmLevelOfDetail *op = static_cast<vtkmLevelOfDetail *>(vp);

  const size_t size0 = 3;
  int temp0[3];
  int save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetNumberOfDivisions(temp0);
    }
    else
    {
      op->vtkmLevelOfDetail::SetNumberOfDivisions(temp0);
    }

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
PyvtkmLevelOfDetail_SetNumberOfDivisions_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfDivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkmLevelOfDetail *op = static_cast<vtkmLevelOfDetail *>(vp);

  int temp0;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfDivisions(temp0, temp1, temp2);
    }
    else
    {
      op->vtkmLevelOfDetail::SetNumberOfDivisions(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkmLevelOfDetail_SetNumberOfDivisions(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkmLevelOfDetail_SetNumberOfDivisions_s1(self, args);
    case 3:
      return PyvtkmLevelOfDetail_SetNumberOfDivisions_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetNumberOfDivisions");
  return nullptr;
}



static PyObject *
PyvtkmLevelOfDetail_GetNumberOfDivisions_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfDivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkmLevelOfDetail *op = static_cast<vtkmLevelOfDetail *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const int *tempr = (ap.IsBound() ?
      op->GetNumberOfDivisions() :
      op->vtkmLevelOfDetail::GetNumberOfDivisions());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkmLevelOfDetail_GetNumberOfDivisions_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfDivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkmLevelOfDetail *op = static_cast<vtkmLevelOfDetail *>(vp);

  const size_t size0 = 3;
  int temp0[3];
  int save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetNumberOfDivisions(temp0);
    }
    else
    {
      op->vtkmLevelOfDetail::GetNumberOfDivisions(temp0);
    }

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
PyvtkmLevelOfDetail_GetNumberOfDivisions(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkmLevelOfDetail_GetNumberOfDivisions_s1(self, args);
    case 1:
      return PyvtkmLevelOfDetail_GetNumberOfDivisions_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetNumberOfDivisions");
  return nullptr;
}


static PyMethodDef PyvtkmLevelOfDetail_Methods[] = {
  {"IsTypeOf", PyvtkmLevelOfDetail_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkmLevelOfDetail_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkmLevelOfDetail_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkmLevelOfDetail\nC++: static vtkmLevelOfDetail *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkmLevelOfDetail_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkmLevelOfDetail\nC++: vtkmLevelOfDetail *NewInstance()\n\n"},
  {"SetNumberOfXDivisions", PyvtkmLevelOfDetail_SetNumberOfXDivisions, METH_VARARGS,
   "V.SetNumberOfXDivisions(int)\nC++: void SetNumberOfXDivisions(int num)\n\nSet/Get the number of divisions along an individual axis for the\nspatial bins. The number of spatial bins is\nNumberOfXDivisions*NumberOfYDivisions* NumberOfZDivisions.\n"},
  {"SetNumberOfYDivisions", PyvtkmLevelOfDetail_SetNumberOfYDivisions, METH_VARARGS,
   "V.SetNumberOfYDivisions(int)\nC++: void SetNumberOfYDivisions(int num)\n\nSet/Get the number of divisions along an individual axis for the\nspatial bins. The number of spatial bins is\nNumberOfXDivisions*NumberOfYDivisions* NumberOfZDivisions.\n"},
  {"SetNumberOfZDivisions", PyvtkmLevelOfDetail_SetNumberOfZDivisions, METH_VARARGS,
   "V.SetNumberOfZDivisions(int)\nC++: void SetNumberOfZDivisions(int num)\n\nSet/Get the number of divisions along an individual axis for the\nspatial bins. The number of spatial bins is\nNumberOfXDivisions*NumberOfYDivisions* NumberOfZDivisions.\n"},
  {"GetNumberOfXDivisions", PyvtkmLevelOfDetail_GetNumberOfXDivisions, METH_VARARGS,
   "V.GetNumberOfXDivisions() -> int\nC++: int GetNumberOfXDivisions()\n\nSet/Get the number of divisions along an individual axis for the\nspatial bins. The number of spatial bins is\nNumberOfXDivisions*NumberOfYDivisions* NumberOfZDivisions.\n"},
  {"GetNumberOfYDivisions", PyvtkmLevelOfDetail_GetNumberOfYDivisions, METH_VARARGS,
   "V.GetNumberOfYDivisions() -> int\nC++: int GetNumberOfYDivisions()\n\nSet/Get the number of divisions along an individual axis for the\nspatial bins. The number of spatial bins is\nNumberOfXDivisions*NumberOfYDivisions* NumberOfZDivisions.\n"},
  {"GetNumberOfZDivisions", PyvtkmLevelOfDetail_GetNumberOfZDivisions, METH_VARARGS,
   "V.GetNumberOfZDivisions() -> int\nC++: int GetNumberOfZDivisions()\n\nSet/Get the number of divisions along an individual axis for the\nspatial bins. The number of spatial bins is\nNumberOfXDivisions*NumberOfYDivisions* NumberOfZDivisions.\n"},
  {"SetNumberOfDivisions", PyvtkmLevelOfDetail_SetNumberOfDivisions, METH_VARARGS,
   "V.SetNumberOfDivisions([int, int, int])\nC++: void SetNumberOfDivisions(int div[3])\nV.SetNumberOfDivisions(int, int, int)\nC++: void SetNumberOfDivisions(int div0, int div1, int div2)\n\nSet/Get the number of divisions for each axis for the spatial\nbins. The number of spatial bins is\nNumberOfXDivisions*NumberOfYDivisions* NumberOfZDivisions.\n"},
  {"GetNumberOfDivisions", PyvtkmLevelOfDetail_GetNumberOfDivisions, METH_VARARGS,
   "V.GetNumberOfDivisions() -> (int, ...)\nC++: const int *GetNumberOfDivisions()\nV.GetNumberOfDivisions([int, int, int])\nC++: void GetNumberOfDivisions(int div[3])\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkmLevelOfDetail_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkAcceleratorsVTKmPython.vtkmLevelOfDetail", // tp_name
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
  PyvtkmLevelOfDetail_Doc, // tp_doc
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

static vtkObjectBase *PyvtkmLevelOfDetail_StaticNew()
{
  return vtkmLevelOfDetail::New();
}

PyObject *PyvtkmLevelOfDetail_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkmLevelOfDetail_Type, PyvtkmLevelOfDetail_Methods,
    "vtkmLevelOfDetail",
 &PyvtkmLevelOfDetail_StaticNew);

  PyTypeObject *pytype = &PyvtkmLevelOfDetail_Type;

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

void PyVTKAddFile_vtkmLevelOfDetail(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkmLevelOfDetail_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkmLevelOfDetail", o) != 0)
  {
    Py_DECREF(o);
  }

}

