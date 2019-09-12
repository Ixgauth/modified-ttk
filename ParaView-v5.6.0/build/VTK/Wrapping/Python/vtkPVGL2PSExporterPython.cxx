// python wrapper for vtkPVGL2PSExporter
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
#include "vtkPVGL2PSExporter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPVGL2PSExporter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPVGL2PSExporter_ClassNew(); }

#ifndef DECLARED_PyvtkOpenGLGL2PSExporter_ClassNew
extern "C" { PyObject *PyvtkOpenGLGL2PSExporter_ClassNew(); }
#define DECLARED_PyvtkOpenGLGL2PSExporter_ClassNew
#endif

static const char *PyvtkPVGL2PSExporter_Doc =
  "vtkPVGL2PSExporter - ParaView wrapper for vtkGL2PS exporter.\n\n"
  "Superclass: vtkOpenGLGL2PSExporter\n\n"
  "This is used to export ParaView renderings to a variety of vector\n"
  "graphics formats.\n\n";


static PyObject *
PyvtkPVGL2PSExporter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPVGL2PSExporter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVGL2PSExporter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGL2PSExporter *op = static_cast<vtkPVGL2PSExporter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVGL2PSExporter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVGL2PSExporter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPVGL2PSExporter *tempr = vtkPVGL2PSExporter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVGL2PSExporter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGL2PSExporter *op = static_cast<vtkPVGL2PSExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVGL2PSExporter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVGL2PSExporter::NewInstance());

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
PyvtkPVGL2PSExporter_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGL2PSExporter *op = static_cast<vtkPVGL2PSExporter *>(vp);

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
      op->vtkPVGL2PSExporter::SetFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVGL2PSExporter_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGL2PSExporter *op = static_cast<vtkPVGL2PSExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkPVGL2PSExporter::GetFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVGL2PSExporter_SetExcludeCubeAxesActorsFromRasterization(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExcludeCubeAxesActorsFromRasterization");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGL2PSExporter *op = static_cast<vtkPVGL2PSExporter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetExcludeCubeAxesActorsFromRasterization(temp0);
    }
    else
    {
      op->vtkPVGL2PSExporter::SetExcludeCubeAxesActorsFromRasterization(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVGL2PSExporter_GetExcludeCubeAxesActorsFromRasterization(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExcludeCubeAxesActorsFromRasterization");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGL2PSExporter *op = static_cast<vtkPVGL2PSExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetExcludeCubeAxesActorsFromRasterization() :
      op->vtkPVGL2PSExporter::GetExcludeCubeAxesActorsFromRasterization());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVGL2PSExporter_ExcludeCubeAxesActorsFromRasterizationOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExcludeCubeAxesActorsFromRasterizationOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGL2PSExporter *op = static_cast<vtkPVGL2PSExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ExcludeCubeAxesActorsFromRasterizationOn();
    }
    else
    {
      op->vtkPVGL2PSExporter::ExcludeCubeAxesActorsFromRasterizationOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVGL2PSExporter_ExcludeCubeAxesActorsFromRasterizationOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExcludeCubeAxesActorsFromRasterizationOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGL2PSExporter *op = static_cast<vtkPVGL2PSExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ExcludeCubeAxesActorsFromRasterizationOff();
    }
    else
    {
      op->vtkPVGL2PSExporter::ExcludeCubeAxesActorsFromRasterizationOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPVGL2PSExporter_Methods[] = {
  {"IsTypeOf", PyvtkPVGL2PSExporter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPVGL2PSExporter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPVGL2PSExporter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPVGL2PSExporter\nC++: static vtkPVGL2PSExporter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPVGL2PSExporter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPVGL2PSExporter\nC++: vtkPVGL2PSExporter *NewInstance()\n\n"},
  {"SetFileName", PyvtkPVGL2PSExporter_SetFileName, METH_VARARGS,
   "V.SetFileName(string)\nC++: virtual void SetFileName(const char *_arg)\n\nSet/Get the name of the output file.\n"},
  {"GetFileName", PyvtkPVGL2PSExporter_GetFileName, METH_VARARGS,
   "V.GetFileName() -> string\nC++: const char *GetFileName()\n\nSet/Get the name of the output file.\n"},
  {"SetExcludeCubeAxesActorsFromRasterization", PyvtkPVGL2PSExporter_SetExcludeCubeAxesActorsFromRasterization, METH_VARARGS,
   "V.SetExcludeCubeAxesActorsFromRasterization(int)\nC++: virtual void SetExcludeCubeAxesActorsFromRasterization(\n    int _arg)\n\nIf Write3DPropsAsRasterImage is true, add all instances of\nvtkCubeAxesActors to the RenderExclusions.\n"},
  {"GetExcludeCubeAxesActorsFromRasterization", PyvtkPVGL2PSExporter_GetExcludeCubeAxesActorsFromRasterization, METH_VARARGS,
   "V.GetExcludeCubeAxesActorsFromRasterization() -> int\nC++: virtual int GetExcludeCubeAxesActorsFromRasterization()\n\nIf Write3DPropsAsRasterImage is true, add all instances of\nvtkCubeAxesActors to the RenderExclusions.\n"},
  {"ExcludeCubeAxesActorsFromRasterizationOn", PyvtkPVGL2PSExporter_ExcludeCubeAxesActorsFromRasterizationOn, METH_VARARGS,
   "V.ExcludeCubeAxesActorsFromRasterizationOn()\nC++: virtual void ExcludeCubeAxesActorsFromRasterizationOn()\n\nIf Write3DPropsAsRasterImage is true, add all instances of\nvtkCubeAxesActors to the RenderExclusions.\n"},
  {"ExcludeCubeAxesActorsFromRasterizationOff", PyvtkPVGL2PSExporter_ExcludeCubeAxesActorsFromRasterizationOff, METH_VARARGS,
   "V.ExcludeCubeAxesActorsFromRasterizationOff()\nC++: virtual void ExcludeCubeAxesActorsFromRasterizationOff()\n\nIf Write3DPropsAsRasterImage is true, add all instances of\nvtkCubeAxesActors to the RenderExclusions.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPVGL2PSExporter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsRenderingPython.vtkPVGL2PSExporter", // tp_name
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
  PyvtkPVGL2PSExporter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPVGL2PSExporter_StaticNew()
{
  return vtkPVGL2PSExporter::New();
}

PyObject *PyvtkPVGL2PSExporter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPVGL2PSExporter_Type, PyvtkPVGL2PSExporter_Methods,
    "vtkPVGL2PSExporter",
 &PyvtkPVGL2PSExporter_StaticNew);

  PyTypeObject *pytype = &PyvtkPVGL2PSExporter_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkOpenGLGL2PSExporter_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPVGL2PSExporter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPVGL2PSExporter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPVGL2PSExporter", o) != 0)
  {
    Py_DECREF(o);
  }

}

