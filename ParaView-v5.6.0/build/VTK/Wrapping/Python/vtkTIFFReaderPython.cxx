// python wrapper for vtkTIFFReader
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
#include "vtkTIFFReader.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkTIFFReader(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkTIFFReader_ClassNew(); }

#ifndef DECLARED_PyvtkImageReader2_ClassNew
extern "C" { PyObject *PyvtkImageReader2_ClassNew(); }
#define DECLARED_PyvtkImageReader2_ClassNew
#endif

static const char *PyvtkTIFFReader_Doc =
  "vtkTIFFReader - read TIFF files\n\n"
  "Superclass: vtkImageReader2\n\n"
  "vtkTIFFReader is a source object that reads TIFF files. It should be\n"
  "able to read almost any TIFF file\n\n"
  "@sa\n"
  "vtkTIFFWriter\n\n";


static PyObject *
PyvtkTIFFReader_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTIFFReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTIFFReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTIFFReader *op = static_cast<vtkTIFFReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTIFFReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTIFFReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTIFFReader *tempr = vtkTIFFReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTIFFReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTIFFReader *op = static_cast<vtkTIFFReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTIFFReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTIFFReader::NewInstance());

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
PyvtkTIFFReader_CanReadFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanReadFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTIFFReader *op = static_cast<vtkTIFFReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->CanReadFile(temp0) :
      op->vtkTIFFReader::CanReadFile(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTIFFReader_GetFileExtensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileExtensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTIFFReader *op = static_cast<vtkTIFFReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetFileExtensions() :
      op->vtkTIFFReader::GetFileExtensions());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTIFFReader_GetDescriptiveName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDescriptiveName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTIFFReader *op = static_cast<vtkTIFFReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetDescriptiveName() :
      op->vtkTIFFReader::GetDescriptiveName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTIFFReader_SetOrientationType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientationType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTIFFReader *op = static_cast<vtkTIFFReader *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOrientationType(temp0);
    }
    else
    {
      op->vtkTIFFReader::SetOrientationType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTIFFReader_GetOrientationType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrientationType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTIFFReader *op = static_cast<vtkTIFFReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetOrientationType() :
      op->vtkTIFFReader::GetOrientationType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTIFFReader_GetOrientationTypeSpecifiedFlag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrientationTypeSpecifiedFlag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTIFFReader *op = static_cast<vtkTIFFReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetOrientationTypeSpecifiedFlag() :
      op->vtkTIFFReader::GetOrientationTypeSpecifiedFlag());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTIFFReader_SetOriginSpecifiedFlag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOriginSpecifiedFlag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTIFFReader *op = static_cast<vtkTIFFReader *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOriginSpecifiedFlag(temp0);
    }
    else
    {
      op->vtkTIFFReader::SetOriginSpecifiedFlag(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTIFFReader_GetOriginSpecifiedFlag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOriginSpecifiedFlag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTIFFReader *op = static_cast<vtkTIFFReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetOriginSpecifiedFlag() :
      op->vtkTIFFReader::GetOriginSpecifiedFlag());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTIFFReader_OriginSpecifiedFlagOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OriginSpecifiedFlagOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTIFFReader *op = static_cast<vtkTIFFReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OriginSpecifiedFlagOn();
    }
    else
    {
      op->vtkTIFFReader::OriginSpecifiedFlagOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTIFFReader_OriginSpecifiedFlagOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OriginSpecifiedFlagOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTIFFReader *op = static_cast<vtkTIFFReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OriginSpecifiedFlagOff();
    }
    else
    {
      op->vtkTIFFReader::OriginSpecifiedFlagOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTIFFReader_SetSpacingSpecifiedFlag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSpacingSpecifiedFlag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTIFFReader *op = static_cast<vtkTIFFReader *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSpacingSpecifiedFlag(temp0);
    }
    else
    {
      op->vtkTIFFReader::SetSpacingSpecifiedFlag(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTIFFReader_GetSpacingSpecifiedFlag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSpacingSpecifiedFlag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTIFFReader *op = static_cast<vtkTIFFReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetSpacingSpecifiedFlag() :
      op->vtkTIFFReader::GetSpacingSpecifiedFlag());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTIFFReader_SpacingSpecifiedFlagOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SpacingSpecifiedFlagOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTIFFReader *op = static_cast<vtkTIFFReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SpacingSpecifiedFlagOn();
    }
    else
    {
      op->vtkTIFFReader::SpacingSpecifiedFlagOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTIFFReader_SpacingSpecifiedFlagOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SpacingSpecifiedFlagOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTIFFReader *op = static_cast<vtkTIFFReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SpacingSpecifiedFlagOff();
    }
    else
    {
      op->vtkTIFFReader::SpacingSpecifiedFlagOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkTIFFReader_Methods[] = {
  {"IsTypeOf", PyvtkTIFFReader_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkTIFFReader_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkTIFFReader_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkTIFFReader\nC++: static vtkTIFFReader *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkTIFFReader_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkTIFFReader\nC++: vtkTIFFReader *NewInstance()\n\n"},
  {"CanReadFile", PyvtkTIFFReader_CanReadFile, METH_VARARGS,
   "V.CanReadFile(string) -> int\nC++: int CanReadFile(const char *fname) override;\n\nIs the given file name a tiff file?\n"},
  {"GetFileExtensions", PyvtkTIFFReader_GetFileExtensions, METH_VARARGS,
   "V.GetFileExtensions() -> string\nC++: const char *GetFileExtensions() override;\n\nGet the file extensions for this format. Returns a string with a\nspace separated list of extensions in the format .extension\n"},
  {"GetDescriptiveName", PyvtkTIFFReader_GetDescriptiveName, METH_VARARGS,
   "V.GetDescriptiveName() -> string\nC++: const char *GetDescriptiveName() override;\n\nReturn a descriptive name for the file format that might be\nuseful in a GUI.\n"},
  {"SetOrientationType", PyvtkTIFFReader_SetOrientationType, METH_VARARGS,
   "V.SetOrientationType(int)\nC++: void SetOrientationType(unsigned int orientationType)\n\nSet orientation type ORIENTATION_TOPLEFT         1       (row 0\ntop, col 0 lhs) ORIENTATION_TOPRIGHT        2       (row 0 top,\ncol 0 rhs) ORIENTATION_BOTRIGHT        3       (row 0 bottom, col\n0 rhs) ORIENTATION_BOTLEFT         4       (row 0 bottom, col 0\nlhs) ORIENTATION_LEFTTOP         5       (row 0 lhs, col 0 top)\nORIENTATION_RIGHTTOP        6       (row 0 rhs, col 0 top)\nORIENTATION_RIGHTBOT        7       (row 0 rhs, col 0 bottom)\nORIENTATION_LEFTBOT         8       (row 0 lhs, col 0 bottom)\nUser need to explicitly include vtk_tiff.h header to have access\nto those #define\n"},
  {"GetOrientationType", PyvtkTIFFReader_GetOrientationType, METH_VARARGS,
   "V.GetOrientationType() -> int\nC++: virtual unsigned int GetOrientationType()\n\n"},
  {"GetOrientationTypeSpecifiedFlag", PyvtkTIFFReader_GetOrientationTypeSpecifiedFlag, METH_VARARGS,
   "V.GetOrientationTypeSpecifiedFlag() -> bool\nC++: virtual bool GetOrientationTypeSpecifiedFlag()\n\nGet method to check if orientation type is specified.\n"},
  {"SetOriginSpecifiedFlag", PyvtkTIFFReader_SetOriginSpecifiedFlag, METH_VARARGS,
   "V.SetOriginSpecifiedFlag(bool)\nC++: virtual void SetOriginSpecifiedFlag(bool _arg)\n\nSet/get methods to see if manual origin has been set.\n"},
  {"GetOriginSpecifiedFlag", PyvtkTIFFReader_GetOriginSpecifiedFlag, METH_VARARGS,
   "V.GetOriginSpecifiedFlag() -> bool\nC++: virtual bool GetOriginSpecifiedFlag()\n\nSet/get methods to see if manual origin has been set.\n"},
  {"OriginSpecifiedFlagOn", PyvtkTIFFReader_OriginSpecifiedFlagOn, METH_VARARGS,
   "V.OriginSpecifiedFlagOn()\nC++: virtual void OriginSpecifiedFlagOn()\n\nSet/get methods to see if manual origin has been set.\n"},
  {"OriginSpecifiedFlagOff", PyvtkTIFFReader_OriginSpecifiedFlagOff, METH_VARARGS,
   "V.OriginSpecifiedFlagOff()\nC++: virtual void OriginSpecifiedFlagOff()\n\nSet/get methods to see if manual origin has been set.\n"},
  {"SetSpacingSpecifiedFlag", PyvtkTIFFReader_SetSpacingSpecifiedFlag, METH_VARARGS,
   "V.SetSpacingSpecifiedFlag(bool)\nC++: virtual void SetSpacingSpecifiedFlag(bool _arg)\n\nSet/get if the spacing flag has been specified.\n"},
  {"GetSpacingSpecifiedFlag", PyvtkTIFFReader_GetSpacingSpecifiedFlag, METH_VARARGS,
   "V.GetSpacingSpecifiedFlag() -> bool\nC++: virtual bool GetSpacingSpecifiedFlag()\n\nSet/get if the spacing flag has been specified.\n"},
  {"SpacingSpecifiedFlagOn", PyvtkTIFFReader_SpacingSpecifiedFlagOn, METH_VARARGS,
   "V.SpacingSpecifiedFlagOn()\nC++: virtual void SpacingSpecifiedFlagOn()\n\nSet/get if the spacing flag has been specified.\n"},
  {"SpacingSpecifiedFlagOff", PyvtkTIFFReader_SpacingSpecifiedFlagOff, METH_VARARGS,
   "V.SpacingSpecifiedFlagOff()\nC++: virtual void SpacingSpecifiedFlagOff()\n\nSet/get if the spacing flag has been specified.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkTIFFReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOImagePython.vtkTIFFReader", // tp_name
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
  PyvtkTIFFReader_Doc, // tp_doc
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

static vtkObjectBase *PyvtkTIFFReader_StaticNew()
{
  return vtkTIFFReader::New();
}

PyObject *PyvtkTIFFReader_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkTIFFReader_Type, PyvtkTIFFReader_Methods,
    "vtkTIFFReader",
 &PyvtkTIFFReader_StaticNew);

  PyTypeObject *pytype = &PyvtkTIFFReader_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkImageReader2_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkTIFFReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkTIFFReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkTIFFReader", o) != 0)
  {
    Py_DECREF(o);
  }

}

