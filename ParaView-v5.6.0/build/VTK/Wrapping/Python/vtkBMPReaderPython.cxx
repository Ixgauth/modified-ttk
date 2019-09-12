// python wrapper for vtkBMPReader
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
#include "vtkBMPReader.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkBMPReader(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkBMPReader_ClassNew(); }

#ifndef DECLARED_PyvtkImageReader_ClassNew
extern "C" { PyObject *PyvtkImageReader_ClassNew(); }
#define DECLARED_PyvtkImageReader_ClassNew
#endif

static const char *PyvtkBMPReader_Doc =
  "vtkBMPReader - read Windows BMP files\n\n"
  "Superclass: vtkImageReader\n\n"
  "vtkBMPReader is a source object that reads Windows BMP files. This\n"
  "includes indexed and 24bit bitmaps Usually, all BMPs are converted to\n"
  "24bit RGB, but BMPs may be output as 8bit images with a LookupTable\n"
  "if the Allow8BitBMP flag is set.\n\n"
  "BMPReader creates structured point datasets. The dimension of the\n"
  "dataset depends upon the number of files read. Reading a single file\n"
  "results in a 2D image, while reading more than one file results in a\n"
  "3D volume.\n\n"
  "To read a volume, files must be of the form \"FileName.<number>\"\n"
  "(e.g., foo.bmp.0, foo.bmp.1, ...). You must also specify the image\n"
  "range. This range specifies the beginning and ending files to read\n"
  "(range can be any pair of non-negative numbers).\n\n"
  "The default behavior is to read a single file. In this case, the form\n"
  "of the file is simply \"FileName\" (e.g., foo.bmp).\n\n"
  "@sa\n"
  "vtkBMPWriter\n\n";


static PyObject *
PyvtkBMPReader_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkBMPReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBMPReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBMPReader *op = static_cast<vtkBMPReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkBMPReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBMPReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkBMPReader *tempr = vtkBMPReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBMPReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBMPReader *op = static_cast<vtkBMPReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkBMPReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkBMPReader::NewInstance());

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
PyvtkBMPReader_GetDepth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDepth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBMPReader *op = static_cast<vtkBMPReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDepth() :
      op->vtkBMPReader::GetDepth());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBMPReader_CanReadFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanReadFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBMPReader *op = static_cast<vtkBMPReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->CanReadFile(temp0) :
      op->vtkBMPReader::CanReadFile(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBMPReader_GetFileExtensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileExtensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBMPReader *op = static_cast<vtkBMPReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetFileExtensions() :
      op->vtkBMPReader::GetFileExtensions());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBMPReader_GetDescriptiveName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDescriptiveName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBMPReader *op = static_cast<vtkBMPReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetDescriptiveName() :
      op->vtkBMPReader::GetDescriptiveName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBMPReader_SetAllow8BitBMP(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAllow8BitBMP");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBMPReader *op = static_cast<vtkBMPReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAllow8BitBMP(temp0);
    }
    else
    {
      op->vtkBMPReader::SetAllow8BitBMP(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBMPReader_GetAllow8BitBMP(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAllow8BitBMP");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBMPReader *op = static_cast<vtkBMPReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAllow8BitBMP() :
      op->vtkBMPReader::GetAllow8BitBMP());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBMPReader_Allow8BitBMPOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Allow8BitBMPOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBMPReader *op = static_cast<vtkBMPReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Allow8BitBMPOn();
    }
    else
    {
      op->vtkBMPReader::Allow8BitBMPOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBMPReader_Allow8BitBMPOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Allow8BitBMPOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBMPReader *op = static_cast<vtkBMPReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Allow8BitBMPOff();
    }
    else
    {
      op->vtkBMPReader::Allow8BitBMPOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBMPReader_GetLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBMPReader *op = static_cast<vtkBMPReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkLookupTable *tempr = (ap.IsBound() ?
      op->GetLookupTable() :
      op->vtkBMPReader::GetLookupTable());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBMPReader_GetColors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBMPReader *op = static_cast<vtkBMPReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned char *tempr = (ap.IsBound() ?
      op->GetColors() :
      op->vtkBMPReader::GetColors());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkBMPReader_Methods[] = {
  {"IsTypeOf", PyvtkBMPReader_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkBMPReader_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkBMPReader_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkBMPReader\nC++: static vtkBMPReader *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkBMPReader_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkBMPReader\nC++: vtkBMPReader *NewInstance()\n\n"},
  {"GetDepth", PyvtkBMPReader_GetDepth, METH_VARARGS,
   "V.GetDepth() -> int\nC++: virtual int GetDepth()\n\nReturns the depth of the BMP, either 8 or 24.\n"},
  {"CanReadFile", PyvtkBMPReader_CanReadFile, METH_VARARGS,
   "V.CanReadFile(string) -> int\nC++: int CanReadFile(const char *fname) override;\n\nIs the given file a BMP file?\n"},
  {"GetFileExtensions", PyvtkBMPReader_GetFileExtensions, METH_VARARGS,
   "V.GetFileExtensions() -> string\nC++: const char *GetFileExtensions() override;\n\nGet the file extensions for this format. Returns a string with a\nspace separated list of extensions in the format .extension\n"},
  {"GetDescriptiveName", PyvtkBMPReader_GetDescriptiveName, METH_VARARGS,
   "V.GetDescriptiveName() -> string\nC++: const char *GetDescriptiveName() override;\n\nReturn a descriptive name for the file format that might be\nuseful in a GUI.\n"},
  {"SetAllow8BitBMP", PyvtkBMPReader_SetAllow8BitBMP, METH_VARARGS,
   "V.SetAllow8BitBMP(int)\nC++: virtual void SetAllow8BitBMP(vtkTypeBool _arg)\n\nIf this flag is set and the BMP reader encounters an 8bit file,\nthe data will be kept as unsigned chars and a lookuptable will be\nexported\n"},
  {"GetAllow8BitBMP", PyvtkBMPReader_GetAllow8BitBMP, METH_VARARGS,
   "V.GetAllow8BitBMP() -> int\nC++: virtual vtkTypeBool GetAllow8BitBMP()\n\nIf this flag is set and the BMP reader encounters an 8bit file,\nthe data will be kept as unsigned chars and a lookuptable will be\nexported\n"},
  {"Allow8BitBMPOn", PyvtkBMPReader_Allow8BitBMPOn, METH_VARARGS,
   "V.Allow8BitBMPOn()\nC++: virtual void Allow8BitBMPOn()\n\nIf this flag is set and the BMP reader encounters an 8bit file,\nthe data will be kept as unsigned chars and a lookuptable will be\nexported\n"},
  {"Allow8BitBMPOff", PyvtkBMPReader_Allow8BitBMPOff, METH_VARARGS,
   "V.Allow8BitBMPOff()\nC++: virtual void Allow8BitBMPOff()\n\nIf this flag is set and the BMP reader encounters an 8bit file,\nthe data will be kept as unsigned chars and a lookuptable will be\nexported\n"},
  {"GetLookupTable", PyvtkBMPReader_GetLookupTable, METH_VARARGS,
   "V.GetLookupTable() -> vtkLookupTable\nC++: virtual vtkLookupTable *GetLookupTable()\n\n"},
  {"GetColors", PyvtkBMPReader_GetColors, METH_VARARGS,
   "V.GetColors() -> (int, ...)\nC++: virtual unsigned char *GetColors()\n\nReturns the color lut.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkBMPReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOImagePython.vtkBMPReader", // tp_name
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
  PyvtkBMPReader_Doc, // tp_doc
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

static vtkObjectBase *PyvtkBMPReader_StaticNew()
{
  return vtkBMPReader::New();
}

PyObject *PyvtkBMPReader_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkBMPReader_Type, PyvtkBMPReader_Methods,
    "vtkBMPReader",
 &PyvtkBMPReader_StaticNew);

  PyTypeObject *pytype = &PyvtkBMPReader_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkImageReader_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkBMPReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkBMPReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkBMPReader", o) != 0)
  {
    Py_DECREF(o);
  }

}

