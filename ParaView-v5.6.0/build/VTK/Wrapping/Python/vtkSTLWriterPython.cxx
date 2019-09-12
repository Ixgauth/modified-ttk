// python wrapper for vtkSTLWriter
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
#include "vtkSTLWriter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSTLWriter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSTLWriter_ClassNew(); }

#ifndef DECLARED_PyvtkWriter_ClassNew
extern "C" { PyObject *PyvtkWriter_ClassNew(); }
#define DECLARED_PyvtkWriter_ClassNew
#endif

static const char *PyvtkSTLWriter_Doc =
  "vtkSTLWriter - write stereo lithography files\n\n"
  "Superclass: vtkWriter\n\n"
  "vtkSTLWriter writes stereo lithography (.stl) files in either ASCII\n"
  "or binary form. Stereo lithography files contain only triangles.\n"
  "Since VTK 8.1, this writer converts non-triangle polygons into\n"
  "triangles, so there is no longer a need to use vtkTriangleFilter\n"
  "prior to using this writer if the input contains polygons with more\n"
  "than three vertices.\n\n"
  "@warning\n"
  "Binary files written on one system may not be readable on other\n"
  "systems. vtkSTLWriter uses VAX or PC byte ordering and swaps bytes on\n"
  "other systems.\n\n";


static PyObject *
PyvtkSTLWriter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSTLWriter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSTLWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSTLWriter *op = static_cast<vtkSTLWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSTLWriter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSTLWriter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSTLWriter *tempr = vtkSTLWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSTLWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSTLWriter *op = static_cast<vtkSTLWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSTLWriter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSTLWriter::NewInstance());

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
PyvtkSTLWriter_GetInput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSTLWriter *op = static_cast<vtkSTLWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetInput() :
      op->vtkSTLWriter::GetInput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSTLWriter_GetInput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSTLWriter *op = static_cast<vtkSTLWriter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetInput(temp0) :
      op->vtkSTLWriter::GetInput(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSTLWriter_GetInput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkSTLWriter_GetInput_s1(self, args);
    case 1:
      return PyvtkSTLWriter_GetInput_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetInput");
  return nullptr;
}



static PyObject *
PyvtkSTLWriter_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSTLWriter *op = static_cast<vtkSTLWriter *>(vp);

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
      op->vtkSTLWriter::SetFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSTLWriter_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSTLWriter *op = static_cast<vtkSTLWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkSTLWriter::GetFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSTLWriter_SetHeader(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHeader");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSTLWriter *op = static_cast<vtkSTLWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHeader(temp0);
    }
    else
    {
      op->vtkSTLWriter::SetHeader(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSTLWriter_GetHeader(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHeader");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSTLWriter *op = static_cast<vtkSTLWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetHeader() :
      op->vtkSTLWriter::GetHeader());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSTLWriter_SetBinaryHeader(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBinaryHeader");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSTLWriter *op = static_cast<vtkSTLWriter *>(vp);

  vtkUnsignedCharArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkUnsignedCharArray"))
  {
    if (ap.IsBound())
    {
      op->SetBinaryHeader(temp0);
    }
    else
    {
      op->vtkSTLWriter::SetBinaryHeader(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSTLWriter_GetBinaryHeader(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBinaryHeader");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSTLWriter *op = static_cast<vtkSTLWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkUnsignedCharArray *tempr = (ap.IsBound() ?
      op->GetBinaryHeader() :
      op->vtkSTLWriter::GetBinaryHeader());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSTLWriter_SetFileType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSTLWriter *op = static_cast<vtkSTLWriter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFileType(temp0);
    }
    else
    {
      op->vtkSTLWriter::SetFileType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSTLWriter_GetFileTypeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileTypeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSTLWriter *op = static_cast<vtkSTLWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFileTypeMinValue() :
      op->vtkSTLWriter::GetFileTypeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSTLWriter_GetFileTypeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileTypeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSTLWriter *op = static_cast<vtkSTLWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFileTypeMaxValue() :
      op->vtkSTLWriter::GetFileTypeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSTLWriter_GetFileType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSTLWriter *op = static_cast<vtkSTLWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFileType() :
      op->vtkSTLWriter::GetFileType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSTLWriter_SetFileTypeToASCII(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileTypeToASCII");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSTLWriter *op = static_cast<vtkSTLWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetFileTypeToASCII();
    }
    else
    {
      op->vtkSTLWriter::SetFileTypeToASCII();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSTLWriter_SetFileTypeToBinary(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileTypeToBinary");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSTLWriter *op = static_cast<vtkSTLWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetFileTypeToBinary();
    }
    else
    {
      op->vtkSTLWriter::SetFileTypeToBinary();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSTLWriter_Methods[] = {
  {"IsTypeOf", PyvtkSTLWriter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSTLWriter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSTLWriter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSTLWriter\nC++: static vtkSTLWriter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSTLWriter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSTLWriter\nC++: vtkSTLWriter *NewInstance()\n\n"},
  {"GetInput", PyvtkSTLWriter_GetInput, METH_VARARGS,
   "V.GetInput() -> vtkPolyData\nC++: vtkPolyData *GetInput()\nV.GetInput(int) -> vtkPolyData\nC++: vtkPolyData *GetInput(int port)\n\nGet the input to this writer.\n"},
  {"SetFileName", PyvtkSTLWriter_SetFileName, METH_VARARGS,
   "V.SetFileName(string)\nC++: virtual void SetFileName(const char *_arg)\n\nSpecify file name of vtk polygon data file to write.\n"},
  {"GetFileName", PyvtkSTLWriter_GetFileName, METH_VARARGS,
   "V.GetFileName() -> string\nC++: virtual char *GetFileName()\n\nSpecify file name of vtk polygon data file to write.\n"},
  {"SetHeader", PyvtkSTLWriter_SetHeader, METH_VARARGS,
   "V.SetHeader(string)\nC++: virtual void SetHeader(const char *_arg)\n\nSet the header for the file as text. The header cannot contain\n0x00 characters.\n\\sa SetBinaryHeader()\n"},
  {"GetHeader", PyvtkSTLWriter_GetHeader, METH_VARARGS,
   "V.GetHeader() -> string\nC++: virtual char *GetHeader()\n\nSet the header for the file as text. The header cannot contain\n0x00 characters.\n\\sa SetBinaryHeader()\n"},
  {"SetBinaryHeader", PyvtkSTLWriter_SetBinaryHeader, METH_VARARGS,
   "V.SetBinaryHeader(vtkUnsignedCharArray)\nC++: virtual void SetBinaryHeader(\n    vtkUnsignedCharArray *binaryHeader)\n\nSet binary header for the file. Binary header is only used when\nwriting binary type files. If both Header and BinaryHeader are\nspecified then BinaryHeader is used. Maximum length of binary\nheader is 80 bytes, any content over this limit is ignored.\n"},
  {"GetBinaryHeader", PyvtkSTLWriter_GetBinaryHeader, METH_VARARGS,
   "V.GetBinaryHeader() -> vtkUnsignedCharArray\nC++: virtual vtkUnsignedCharArray *GetBinaryHeader()\n\nSet binary header for the file. Binary header is only used when\nwriting binary type files. If both Header and BinaryHeader are\nspecified then BinaryHeader is used. Maximum length of binary\nheader is 80 bytes, any content over this limit is ignored.\n"},
  {"SetFileType", PyvtkSTLWriter_SetFileType, METH_VARARGS,
   "V.SetFileType(int)\nC++: virtual void SetFileType(int _arg)\n\nSpecify file type (ASCII or BINARY) for vtk data file.\n"},
  {"GetFileTypeMinValue", PyvtkSTLWriter_GetFileTypeMinValue, METH_VARARGS,
   "V.GetFileTypeMinValue() -> int\nC++: virtual int GetFileTypeMinValue()\n\nSpecify file type (ASCII or BINARY) for vtk data file.\n"},
  {"GetFileTypeMaxValue", PyvtkSTLWriter_GetFileTypeMaxValue, METH_VARARGS,
   "V.GetFileTypeMaxValue() -> int\nC++: virtual int GetFileTypeMaxValue()\n\nSpecify file type (ASCII or BINARY) for vtk data file.\n"},
  {"GetFileType", PyvtkSTLWriter_GetFileType, METH_VARARGS,
   "V.GetFileType() -> int\nC++: virtual int GetFileType()\n\nSpecify file type (ASCII or BINARY) for vtk data file.\n"},
  {"SetFileTypeToASCII", PyvtkSTLWriter_SetFileTypeToASCII, METH_VARARGS,
   "V.SetFileTypeToASCII()\nC++: void SetFileTypeToASCII()\n\nSpecify file type (ASCII or BINARY) for vtk data file.\n"},
  {"SetFileTypeToBinary", PyvtkSTLWriter_SetFileTypeToBinary, METH_VARARGS,
   "V.SetFileTypeToBinary()\nC++: void SetFileTypeToBinary()\n\nSpecify file type (ASCII or BINARY) for vtk data file.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSTLWriter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOGeometryPython.vtkSTLWriter", // tp_name
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
  PyvtkSTLWriter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSTLWriter_StaticNew()
{
  return vtkSTLWriter::New();
}

PyObject *PyvtkSTLWriter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSTLWriter_Type, PyvtkSTLWriter_Methods,
    "vtkSTLWriter",
 &PyvtkSTLWriter_StaticNew);

  PyTypeObject *pytype = &PyvtkSTLWriter_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkWriter_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSTLWriter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSTLWriter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSTLWriter", o) != 0)
  {
    Py_DECREF(o);
  }

}

