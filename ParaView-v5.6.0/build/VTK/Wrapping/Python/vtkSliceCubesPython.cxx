// python wrapper for vtkSliceCubes
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
#include "vtkSliceCubes.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSliceCubes(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSliceCubes_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkSliceCubes_Doc =
  "vtkSliceCubes - generate isosurface(s) from volume four slices at a\ntime\n\n"
  "Superclass: vtkObject\n\n"
  "vtkSliceCubes is a special version of the marching cubes filter.\n"
  "Instead of ingesting an entire volume at once it processes only four\n"
  "slices at a time. This way, it can generate isosurfaces from huge\n"
  "volumes. Also, the output of this object is written to a marching\n"
  "cubes triangle file. That way, output triangles do not need to be\n"
  "held in memory.\n\n"
  "To use vtkSliceCubes you must specify an instance of vtkVolumeReader\n"
  "to read the data. Set this object up with the proper file prefix,\n"
  "image range, data origin, data dimensions, header size, data mask,\n"
  "and swap bytes flag. The vtkSliceCubes object will then take over and\n"
  "read slices as necessary. You also will need to specify the name of\n"
  "an output marching cubes triangle file.\n\n"
  "@warning\n"
  "This process object is both a source and mapper (i.e., it reads and\n"
  "writes data to a file). This is different than the other marching\n"
  "cubes objects (and most process objects in the system). It's\n"
  "specialized to handle very large data.\n\n"
  "@warning\n"
  "This object only extracts a single isosurface. This compares with the\n"
  "other contouring objects in vtk that generate multiple surfaces.\n\n"
  "@warning\n"
  "To read the output file use vtkMCubesReader.\n\n"
  "@sa\n"
  "vtkMarchingCubes vtkContourFilter vtkMCubesReader vtkDividingCubes\n"
  "vtkVolumeReader\n\n";


static PyObject *
PyvtkSliceCubes_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSliceCubes::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSliceCubes_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliceCubes *op = static_cast<vtkSliceCubes *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSliceCubes::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSliceCubes_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSliceCubes *tempr = vtkSliceCubes::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSliceCubes_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliceCubes *op = static_cast<vtkSliceCubes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSliceCubes *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSliceCubes::NewInstance());

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
PyvtkSliceCubes_Write(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Write");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliceCubes *op = static_cast<vtkSliceCubes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Write();
    }
    else
    {
      op->vtkSliceCubes::Write();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSliceCubes_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliceCubes *op = static_cast<vtkSliceCubes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Update();
    }
    else
    {
      op->vtkSliceCubes::Update();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSliceCubes_SetReader(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReader");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliceCubes *op = static_cast<vtkSliceCubes *>(vp);

  vtkVolumeReader *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkVolumeReader"))
  {
    if (ap.IsBound())
    {
      op->SetReader(temp0);
    }
    else
    {
      op->vtkSliceCubes::SetReader(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSliceCubes_GetReader(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReader");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliceCubes *op = static_cast<vtkSliceCubes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkVolumeReader *tempr = (ap.IsBound() ?
      op->GetReader() :
      op->vtkSliceCubes::GetReader());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSliceCubes_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliceCubes *op = static_cast<vtkSliceCubes *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFileName(temp0);
    }
    else
    {
      op->vtkSliceCubes::SetFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSliceCubes_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliceCubes *op = static_cast<vtkSliceCubes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkSliceCubes::GetFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSliceCubes_SetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliceCubes *op = static_cast<vtkSliceCubes *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetValue(temp0);
    }
    else
    {
      op->vtkSliceCubes::SetValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSliceCubes_GetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliceCubes *op = static_cast<vtkSliceCubes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetValue() :
      op->vtkSliceCubes::GetValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSliceCubes_SetLimitsFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLimitsFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliceCubes *op = static_cast<vtkSliceCubes *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLimitsFileName(temp0);
    }
    else
    {
      op->vtkSliceCubes::SetLimitsFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSliceCubes_GetLimitsFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLimitsFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliceCubes *op = static_cast<vtkSliceCubes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetLimitsFileName() :
      op->vtkSliceCubes::GetLimitsFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSliceCubes_Methods[] = {
  {"IsTypeOf", PyvtkSliceCubes_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSliceCubes_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSliceCubes_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSliceCubes\nC++: static vtkSliceCubes *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSliceCubes_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSliceCubes\nC++: vtkSliceCubes *NewInstance()\n\n"},
  {"Write", PyvtkSliceCubes_Write, METH_VARARGS,
   "V.Write()\nC++: void Write()\n\n"},
  {"Update", PyvtkSliceCubes_Update, METH_VARARGS,
   "V.Update()\nC++: void Update()\n\n"},
  {"SetReader", PyvtkSliceCubes_SetReader, METH_VARARGS,
   "V.SetReader(vtkVolumeReader)\nC++: virtual void SetReader(vtkVolumeReader *)\n\nSet/get object to read slices.\n"},
  {"GetReader", PyvtkSliceCubes_GetReader, METH_VARARGS,
   "V.GetReader() -> vtkVolumeReader\nC++: virtual vtkVolumeReader *GetReader()\n\nSet/get object to read slices.\n"},
  {"SetFileName", PyvtkSliceCubes_SetFileName, METH_VARARGS,
   "V.SetFileName(string)\nC++: virtual void SetFileName(const char *_arg)\n\nSpecify file name of marching cubes output file.\n"},
  {"GetFileName", PyvtkSliceCubes_GetFileName, METH_VARARGS,
   "V.GetFileName() -> string\nC++: virtual char *GetFileName()\n\nSpecify file name of marching cubes output file.\n"},
  {"SetValue", PyvtkSliceCubes_SetValue, METH_VARARGS,
   "V.SetValue(float)\nC++: virtual void SetValue(double _arg)\n\nSet/get isosurface contour value.\n"},
  {"GetValue", PyvtkSliceCubes_GetValue, METH_VARARGS,
   "V.GetValue() -> float\nC++: virtual double GetValue()\n\nSet/get isosurface contour value.\n"},
  {"SetLimitsFileName", PyvtkSliceCubes_SetLimitsFileName, METH_VARARGS,
   "V.SetLimitsFileName(string)\nC++: virtual void SetLimitsFileName(const char *_arg)\n\nSpecify file name of marching cubes limits file. The limits file\nspeeds up subsequent reading of output triangle file.\n"},
  {"GetLimitsFileName", PyvtkSliceCubes_GetLimitsFileName, METH_VARARGS,
   "V.GetLimitsFileName() -> string\nC++: virtual char *GetLimitsFileName()\n\nSpecify file name of marching cubes limits file. The limits file\nspeeds up subsequent reading of output triangle file.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSliceCubes_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkImagingHybridPython.vtkSliceCubes", // tp_name
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
  PyvtkSliceCubes_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSliceCubes_StaticNew()
{
  return vtkSliceCubes::New();
}

PyObject *PyvtkSliceCubes_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSliceCubes_Type, PyvtkSliceCubes_Methods,
    "vtkSliceCubes",
 &PyvtkSliceCubes_StaticNew);

  PyTypeObject *pytype = &PyvtkSliceCubes_Type;

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

void PyVTKAddFile_vtkSliceCubes(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSliceCubes_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSliceCubes", o) != 0)
  {
    Py_DECREF(o);
  }

}

