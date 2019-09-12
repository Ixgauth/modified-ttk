// python wrapper for vtkSTLReader
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
#include "vtkSTLReader.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSTLReader(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSTLReader_ClassNew(); }

#ifndef DECLARED_PyvtkAbstractPolyDataReader_ClassNew
extern "C" { PyObject *PyvtkAbstractPolyDataReader_ClassNew(); }
#define DECLARED_PyvtkAbstractPolyDataReader_ClassNew
#endif

static const char *PyvtkSTLReader_Doc =
  "vtkSTLReader - read ASCII or binary stereo lithography files\n\n"
  "Superclass: vtkAbstractPolyDataReader\n\n"
  "vtkSTLReader is a source object that reads ASCII or binary stereo\n"
  "lithography files (.stl files). The FileName must be specified to\n"
  "vtkSTLReader. The object automatically detects whether the file is\n"
  "ASCII or binary.\n\n"
  ".stl files are quite inefficient since they duplicate vertex\n"
  "definitions. By setting the Merging boolean you can control whether\n"
  "the point data is merged after reading. Merging is performed by\n"
  "default, however, merging requires a large amount of temporary\n"
  "storage since a 3D hash table must be constructed.\n\n"
  "@warning\n"
  "Binary files written on one system may not be readable on other\n"
  "systems. vtkSTLWriter uses VAX or PC byte ordering and swaps bytes on\n"
  "other systems.\n\n";


static PyObject *
PyvtkSTLReader_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSTLReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSTLReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSTLReader *op = static_cast<vtkSTLReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSTLReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSTLReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSTLReader *tempr = vtkSTLReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSTLReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSTLReader *op = static_cast<vtkSTLReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSTLReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSTLReader::NewInstance());

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
PyvtkSTLReader_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSTLReader *op = static_cast<vtkSTLReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkSTLReader::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSTLReader_SetMerging(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMerging");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSTLReader *op = static_cast<vtkSTLReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMerging(temp0);
    }
    else
    {
      op->vtkSTLReader::SetMerging(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSTLReader_GetMerging(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMerging");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSTLReader *op = static_cast<vtkSTLReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMerging() :
      op->vtkSTLReader::GetMerging());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSTLReader_MergingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MergingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSTLReader *op = static_cast<vtkSTLReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MergingOn();
    }
    else
    {
      op->vtkSTLReader::MergingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSTLReader_MergingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MergingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSTLReader *op = static_cast<vtkSTLReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MergingOff();
    }
    else
    {
      op->vtkSTLReader::MergingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSTLReader_SetScalarTags(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarTags");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSTLReader *op = static_cast<vtkSTLReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScalarTags(temp0);
    }
    else
    {
      op->vtkSTLReader::SetScalarTags(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSTLReader_GetScalarTags(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarTags");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSTLReader *op = static_cast<vtkSTLReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetScalarTags() :
      op->vtkSTLReader::GetScalarTags());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSTLReader_ScalarTagsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScalarTagsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSTLReader *op = static_cast<vtkSTLReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ScalarTagsOn();
    }
    else
    {
      op->vtkSTLReader::ScalarTagsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSTLReader_ScalarTagsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScalarTagsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSTLReader *op = static_cast<vtkSTLReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ScalarTagsOff();
    }
    else
    {
      op->vtkSTLReader::ScalarTagsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSTLReader_SetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSTLReader *op = static_cast<vtkSTLReader *>(vp);

  vtkIncrementalPointLocator *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkIncrementalPointLocator"))
  {
    if (ap.IsBound())
    {
      op->SetLocator(temp0);
    }
    else
    {
      op->vtkSTLReader::SetLocator(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSTLReader_GetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSTLReader *op = static_cast<vtkSTLReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIncrementalPointLocator *tempr = (ap.IsBound() ?
      op->GetLocator() :
      op->vtkSTLReader::GetLocator());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSTLReader_GetHeader(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHeader");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSTLReader *op = static_cast<vtkSTLReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetHeader() :
      op->vtkSTLReader::GetHeader());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSTLReader_GetBinaryHeader(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBinaryHeader");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSTLReader *op = static_cast<vtkSTLReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkUnsignedCharArray *tempr = (ap.IsBound() ?
      op->GetBinaryHeader() :
      op->vtkSTLReader::GetBinaryHeader());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSTLReader_Methods[] = {
  {"IsTypeOf", PyvtkSTLReader_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSTLReader_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSTLReader_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSTLReader\nC++: static vtkSTLReader *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSTLReader_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSTLReader\nC++: vtkSTLReader *NewInstance()\n\n"},
  {"GetMTime", PyvtkSTLReader_GetMTime, METH_VARARGS,
   "V.GetMTime() -> int\nC++: vtkMTimeType GetMTime() override;\n\nOverload standard modified time function. If locator is modified,\nthen this object is modified as well.\n"},
  {"SetMerging", PyvtkSTLReader_SetMerging, METH_VARARGS,
   "V.SetMerging(int)\nC++: virtual void SetMerging(vtkTypeBool _arg)\n\nTurn on/off merging of points/triangles.\n"},
  {"GetMerging", PyvtkSTLReader_GetMerging, METH_VARARGS,
   "V.GetMerging() -> int\nC++: virtual vtkTypeBool GetMerging()\n\nTurn on/off merging of points/triangles.\n"},
  {"MergingOn", PyvtkSTLReader_MergingOn, METH_VARARGS,
   "V.MergingOn()\nC++: virtual void MergingOn()\n\nTurn on/off merging of points/triangles.\n"},
  {"MergingOff", PyvtkSTLReader_MergingOff, METH_VARARGS,
   "V.MergingOff()\nC++: virtual void MergingOff()\n\nTurn on/off merging of points/triangles.\n"},
  {"SetScalarTags", PyvtkSTLReader_SetScalarTags, METH_VARARGS,
   "V.SetScalarTags(int)\nC++: virtual void SetScalarTags(vtkTypeBool _arg)\n\nTurn on/off tagging of solids with scalars.\n"},
  {"GetScalarTags", PyvtkSTLReader_GetScalarTags, METH_VARARGS,
   "V.GetScalarTags() -> int\nC++: virtual vtkTypeBool GetScalarTags()\n\nTurn on/off tagging of solids with scalars.\n"},
  {"ScalarTagsOn", PyvtkSTLReader_ScalarTagsOn, METH_VARARGS,
   "V.ScalarTagsOn()\nC++: virtual void ScalarTagsOn()\n\nTurn on/off tagging of solids with scalars.\n"},
  {"ScalarTagsOff", PyvtkSTLReader_ScalarTagsOff, METH_VARARGS,
   "V.ScalarTagsOff()\nC++: virtual void ScalarTagsOff()\n\nTurn on/off tagging of solids with scalars.\n"},
  {"SetLocator", PyvtkSTLReader_SetLocator, METH_VARARGS,
   "V.SetLocator(vtkIncrementalPointLocator)\nC++: void SetLocator(vtkIncrementalPointLocator *locator)\n\nSpecify a spatial locator for merging points. By default an\ninstance of vtkMergePoints is used.\n"},
  {"GetLocator", PyvtkSTLReader_GetLocator, METH_VARARGS,
   "V.GetLocator() -> vtkIncrementalPointLocator\nC++: virtual vtkIncrementalPointLocator *GetLocator()\n\nSpecify a spatial locator for merging points. By default an\ninstance of vtkMergePoints is used.\n"},
  {"GetHeader", PyvtkSTLReader_GetHeader, METH_VARARGS,
   "V.GetHeader() -> string\nC++: virtual char *GetHeader()\n\nGet header string. If an ASCII STL file contains multiple solids\nthen headers are separated by newline character. If a binary STL\nfile is read, the first zero-terminated string is stored in this\nheader, the full header is available by using GetBinaryHeader().\n\\sa GetBinaryHeader()\n"},
  {"GetBinaryHeader", PyvtkSTLReader_GetBinaryHeader, METH_VARARGS,
   "V.GetBinaryHeader() -> vtkUnsignedCharArray\nC++: virtual vtkUnsignedCharArray *GetBinaryHeader()\n\nGet binary file header string. If ASCII STL file is read then\nBinaryHeader is not set, and the header can be retrieved\nusing.GetHeader() instead.\n\\sa GetHeader()\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSTLReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOGeometryPython.vtkSTLReader", // tp_name
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
  PyvtkSTLReader_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSTLReader_StaticNew()
{
  return vtkSTLReader::New();
}

PyObject *PyvtkSTLReader_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSTLReader_Type, PyvtkSTLReader_Methods,
    "vtkSTLReader",
 &PyvtkSTLReader_StaticNew);

  PyTypeObject *pytype = &PyvtkSTLReader_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkAbstractPolyDataReader_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSTLReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSTLReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSTLReader", o) != 0)
  {
    Py_DECREF(o);
  }

}

