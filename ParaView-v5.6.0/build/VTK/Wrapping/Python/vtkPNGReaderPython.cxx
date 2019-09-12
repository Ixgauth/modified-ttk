// python wrapper for vtkPNGReader
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
#include "vtkPNGReader.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPNGReader(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPNGReader_ClassNew(); }

#ifndef DECLARED_PyvtkImageReader2_ClassNew
extern "C" { PyObject *PyvtkImageReader2_ClassNew(); }
#define DECLARED_PyvtkImageReader2_ClassNew
#endif

static const char *PyvtkPNGReader_Doc =
  "vtkPNGReader - read PNG files\n\n"
  "Superclass: vtkImageReader2\n\n"
  "vtkPNGReader is a source object that reads PNG files. It should be\n"
  "able to read most any PNG file\n\n"
  "@sa\n"
  "vtkPNGWriter\n\n";


static PyObject *
PyvtkPNGReader_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPNGReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPNGReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPNGReader *op = static_cast<vtkPNGReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPNGReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPNGReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPNGReader *tempr = vtkPNGReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPNGReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPNGReader *op = static_cast<vtkPNGReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPNGReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPNGReader::NewInstance());

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
PyvtkPNGReader_CanReadFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanReadFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPNGReader *op = static_cast<vtkPNGReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->CanReadFile(temp0) :
      op->vtkPNGReader::CanReadFile(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPNGReader_GetFileExtensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileExtensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPNGReader *op = static_cast<vtkPNGReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetFileExtensions() :
      op->vtkPNGReader::GetFileExtensions());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPNGReader_GetDescriptiveName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDescriptiveName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPNGReader *op = static_cast<vtkPNGReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetDescriptiveName() :
      op->vtkPNGReader::GetDescriptiveName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPNGReader_GetTextChunks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextChunks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPNGReader *op = static_cast<vtkPNGReader *>(vp);

  const char *temp0 = nullptr;
  const size_t size1 = 2;
  int temp1[2];
  int save1[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->GetTextChunks(temp0, temp1);
    }
    else
    {
      op->vtkPNGReader::GetTextChunks(temp0, temp1);
    }

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPNGReader_GetTextKey(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextKey");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPNGReader *op = static_cast<vtkPNGReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetTextKey(temp0) :
      op->vtkPNGReader::GetTextKey(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPNGReader_GetTextValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPNGReader *op = static_cast<vtkPNGReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetTextValue(temp0) :
      op->vtkPNGReader::GetTextValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPNGReader_GetNumberOfTextChunks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTextChunks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPNGReader *op = static_cast<vtkPNGReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    size_t tempr = (ap.IsBound() ?
      op->GetNumberOfTextChunks() :
      op->vtkPNGReader::GetNumberOfTextChunks());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPNGReader_SetReadSpacingFromFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReadSpacingFromFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPNGReader *op = static_cast<vtkPNGReader *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetReadSpacingFromFile(temp0);
    }
    else
    {
      op->vtkPNGReader::SetReadSpacingFromFile(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPNGReader_GetReadSpacingFromFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReadSpacingFromFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPNGReader *op = static_cast<vtkPNGReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetReadSpacingFromFile() :
      op->vtkPNGReader::GetReadSpacingFromFile());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPNGReader_ReadSpacingFromFileOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadSpacingFromFileOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPNGReader *op = static_cast<vtkPNGReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReadSpacingFromFileOn();
    }
    else
    {
      op->vtkPNGReader::ReadSpacingFromFileOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPNGReader_ReadSpacingFromFileOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadSpacingFromFileOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPNGReader *op = static_cast<vtkPNGReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReadSpacingFromFileOff();
    }
    else
    {
      op->vtkPNGReader::ReadSpacingFromFileOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPNGReader_Methods[] = {
  {"IsTypeOf", PyvtkPNGReader_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPNGReader_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPNGReader_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPNGReader\nC++: static vtkPNGReader *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPNGReader_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPNGReader\nC++: vtkPNGReader *NewInstance()\n\n"},
  {"CanReadFile", PyvtkPNGReader_CanReadFile, METH_VARARGS,
   "V.CanReadFile(string) -> int\nC++: int CanReadFile(const char *fname) override;\n\nIs the given file a PNG file?\n"},
  {"GetFileExtensions", PyvtkPNGReader_GetFileExtensions, METH_VARARGS,
   "V.GetFileExtensions() -> string\nC++: const char *GetFileExtensions() override;\n\nGet the file extensions for this format. Returns a string with a\nspace separated list of extensions in the format .extension\n"},
  {"GetDescriptiveName", PyvtkPNGReader_GetDescriptiveName, METH_VARARGS,
   "V.GetDescriptiveName() -> string\nC++: const char *GetDescriptiveName() override;\n\nReturn a descriptive name for the file format that might be\nuseful in a GUI.\n"},
  {"GetTextChunks", PyvtkPNGReader_GetTextChunks, METH_VARARGS,
   "V.GetTextChunks(string, [int, int])\nC++: void GetTextChunks(const char *key, int beginEndIndex[2])\n\nGiven a 'key' for the text chunks, fills in 'beginEndIndex' with\nthe begin and end indexes. Values are stored between [begin, end)\nindexes.\n"},
  {"GetTextKey", PyvtkPNGReader_GetTextKey, METH_VARARGS,
   "V.GetTextKey(int) -> string\nC++: const char *GetTextKey(int index)\n\nReturns the text key stored at 'index'.\n"},
  {"GetTextValue", PyvtkPNGReader_GetTextValue, METH_VARARGS,
   "V.GetTextValue(int) -> string\nC++: const char *GetTextValue(int index)\n\nReturns the text value stored at 'index'. A range of indexes that\nstore values for a certain key can be obtained by calling\nGetTextChunks.\n"},
  {"GetNumberOfTextChunks", PyvtkPNGReader_GetNumberOfTextChunks, METH_VARARGS,
   "V.GetNumberOfTextChunks() -> int\nC++: size_t GetNumberOfTextChunks()\n\nReturn the number of text chunks in the PNG file. Note that we\ndon't process compressed or international text entries\n"},
  {"SetReadSpacingFromFile", PyvtkPNGReader_SetReadSpacingFromFile, METH_VARARGS,
   "V.SetReadSpacingFromFile(bool)\nC++: virtual void SetReadSpacingFromFile(bool _arg)\n\nSet/Get if data spacing should be calculated from the PNG file.\nUse default spacing if the PNG file don't have valid pixel per\nmeter parameters. Default is false.\n"},
  {"GetReadSpacingFromFile", PyvtkPNGReader_GetReadSpacingFromFile, METH_VARARGS,
   "V.GetReadSpacingFromFile() -> bool\nC++: virtual bool GetReadSpacingFromFile()\n\nSet/Get if data spacing should be calculated from the PNG file.\nUse default spacing if the PNG file don't have valid pixel per\nmeter parameters. Default is false.\n"},
  {"ReadSpacingFromFileOn", PyvtkPNGReader_ReadSpacingFromFileOn, METH_VARARGS,
   "V.ReadSpacingFromFileOn()\nC++: virtual void ReadSpacingFromFileOn()\n\nSet/Get if data spacing should be calculated from the PNG file.\nUse default spacing if the PNG file don't have valid pixel per\nmeter parameters. Default is false.\n"},
  {"ReadSpacingFromFileOff", PyvtkPNGReader_ReadSpacingFromFileOff, METH_VARARGS,
   "V.ReadSpacingFromFileOff()\nC++: virtual void ReadSpacingFromFileOff()\n\nSet/Get if data spacing should be calculated from the PNG file.\nUse default spacing if the PNG file don't have valid pixel per\nmeter parameters. Default is false.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPNGReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOImagePython.vtkPNGReader", // tp_name
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
  PyvtkPNGReader_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPNGReader_StaticNew()
{
  return vtkPNGReader::New();
}

PyObject *PyvtkPNGReader_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPNGReader_Type, PyvtkPNGReader_Methods,
    "vtkPNGReader",
 &PyvtkPNGReader_StaticNew);

  PyTypeObject *pytype = &PyvtkPNGReader_Type;

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

void PyVTKAddFile_vtkPNGReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPNGReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPNGReader", o) != 0)
  {
    Py_DECREF(o);
  }

}

