// python wrapper for vtkVRMLSource
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
#include "vtkVRMLSource.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkVRMLSource(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkVRMLSource_ClassNew(); }

#ifndef DECLARED_PyvtkMultiBlockDataSetAlgorithm_ClassNew
extern "C" { PyObject *PyvtkMultiBlockDataSetAlgorithm_ClassNew(); }
#define DECLARED_PyvtkMultiBlockDataSetAlgorithm_ClassNew
#endif

static const char *PyvtkVRMLSource_Doc =
  "vtkVRMLSource - Converts importer to a source.\n\n"
  "Superclass: vtkMultiBlockDataSetAlgorithm\n\n"
  "Since paraview can only use vtkSources, I am wrapping the VRML\n"
  "importer as a source.  I will loose lights, texture maps and colors,\n\n";


static PyObject *
PyvtkVRMLSource_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkVRMLSource::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVRMLSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVRMLSource *op = static_cast<vtkVRMLSource *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkVRMLSource::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVRMLSource_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkVRMLSource *tempr = vtkVRMLSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVRMLSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVRMLSource *op = static_cast<vtkVRMLSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkVRMLSource *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkVRMLSource::NewInstance());

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
PyvtkVRMLSource_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVRMLSource *op = static_cast<vtkVRMLSource *>(vp);

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
      op->vtkVRMLSource::SetFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVRMLSource_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVRMLSource *op = static_cast<vtkVRMLSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkVRMLSource::GetFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVRMLSource_SetColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVRMLSource *op = static_cast<vtkVRMLSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetColor(temp0);
    }
    else
    {
      op->vtkVRMLSource::SetColor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVRMLSource_GetColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVRMLSource *op = static_cast<vtkVRMLSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetColor() :
      op->vtkVRMLSource::GetColor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVRMLSource_ColorOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ColorOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVRMLSource *op = static_cast<vtkVRMLSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ColorOn();
    }
    else
    {
      op->vtkVRMLSource::ColorOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVRMLSource_ColorOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ColorOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVRMLSource *op = static_cast<vtkVRMLSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ColorOff();
    }
    else
    {
      op->vtkVRMLSource::ColorOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVRMLSource_SetAppend(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAppend");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVRMLSource *op = static_cast<vtkVRMLSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAppend(temp0);
    }
    else
    {
      op->vtkVRMLSource::SetAppend(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVRMLSource_GetAppend(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAppend");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVRMLSource *op = static_cast<vtkVRMLSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAppend() :
      op->vtkVRMLSource::GetAppend());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVRMLSource_AppendOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AppendOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVRMLSource *op = static_cast<vtkVRMLSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AppendOn();
    }
    else
    {
      op->vtkVRMLSource::AppendOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVRMLSource_AppendOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AppendOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVRMLSource *op = static_cast<vtkVRMLSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AppendOff();
    }
    else
    {
      op->vtkVRMLSource::AppendOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVRMLSource_CanReadFile(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "CanReadFile");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkVRMLSource::CanReadFile(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkVRMLSource_Methods[] = {
  {"IsTypeOf", PyvtkVRMLSource_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkVRMLSource_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkVRMLSource_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkVRMLSource\nC++: static vtkVRMLSource *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkVRMLSource_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkVRMLSource\nC++: vtkVRMLSource *NewInstance()\n\n"},
  {"SetFileName", PyvtkVRMLSource_SetFileName, METH_VARARGS,
   "V.SetFileName(string)\nC++: virtual void SetFileName(const char *_arg)\n\nVRML file name.  Set\n"},
  {"GetFileName", PyvtkVRMLSource_GetFileName, METH_VARARGS,
   "V.GetFileName() -> string\nC++: virtual char *GetFileName()\n\nVRML file name.  Set\n"},
  {"SetColor", PyvtkVRMLSource_SetColor, METH_VARARGS,
   "V.SetColor(int)\nC++: virtual void SetColor(int _arg)\n\nDecided whether to generate color arrays or not.\n"},
  {"GetColor", PyvtkVRMLSource_GetColor, METH_VARARGS,
   "V.GetColor() -> int\nC++: virtual int GetColor()\n\nDecided whether to generate color arrays or not.\n"},
  {"ColorOn", PyvtkVRMLSource_ColorOn, METH_VARARGS,
   "V.ColorOn()\nC++: virtual void ColorOn()\n\nDecided whether to generate color arrays or not.\n"},
  {"ColorOff", PyvtkVRMLSource_ColorOff, METH_VARARGS,
   "V.ColorOff()\nC++: virtual void ColorOff()\n\nDecided whether to generate color arrays or not.\n"},
  {"SetAppend", PyvtkVRMLSource_SetAppend, METH_VARARGS,
   "V.SetAppend(int)\nC++: virtual void SetAppend(int _arg)\n\nThis method allows all parts to be put into a single output. By\ndefault this flag is on.\n"},
  {"GetAppend", PyvtkVRMLSource_GetAppend, METH_VARARGS,
   "V.GetAppend() -> int\nC++: virtual int GetAppend()\n\nThis method allows all parts to be put into a single output. By\ndefault this flag is on.\n"},
  {"AppendOn", PyvtkVRMLSource_AppendOn, METH_VARARGS,
   "V.AppendOn()\nC++: virtual void AppendOn()\n\nThis method allows all parts to be put into a single output. By\ndefault this flag is on.\n"},
  {"AppendOff", PyvtkVRMLSource_AppendOff, METH_VARARGS,
   "V.AppendOff()\nC++: virtual void AppendOff()\n\nThis method allows all parts to be put into a single output. By\ndefault this flag is on.\n"},
  {"CanReadFile", PyvtkVRMLSource_CanReadFile, METH_VARARGS,
   "V.CanReadFile(string) -> int\nC++: static int CanReadFile(const char *filename)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkVRMLSource_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsDefaultPython.vtkVRMLSource", // tp_name
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
  PyvtkVRMLSource_Doc, // tp_doc
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

static vtkObjectBase *PyvtkVRMLSource_StaticNew()
{
  return vtkVRMLSource::New();
}

PyObject *PyvtkVRMLSource_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkVRMLSource_Type, PyvtkVRMLSource_Methods,
    "vtkVRMLSource",
 &PyvtkVRMLSource_StaticNew);

  PyTypeObject *pytype = &PyvtkVRMLSource_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkMultiBlockDataSetAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkVRMLSource(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkVRMLSource_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkVRMLSource", o) != 0)
  {
    Py_DECREF(o);
  }

}

