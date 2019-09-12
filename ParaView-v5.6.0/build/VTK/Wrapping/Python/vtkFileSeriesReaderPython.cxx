// python wrapper for vtkFileSeriesReader
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
#include "vtkInformationVector.h"
#include "vtkFileSeriesReader.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkFileSeriesReader(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkFileSeriesReader_ClassNew(); }

#ifndef DECLARED_PyvtkMetaReader_ClassNew
extern "C" { PyObject *PyvtkMetaReader_ClassNew(); }
#define DECLARED_PyvtkMetaReader_ClassNew
#endif

static const char *PyvtkFileSeriesReader_Doc =
  "vtkFileSeriesReader - meta-reader to read file series\n\n"
  "Superclass: vtkMetaReader\n\n"
  "vtkFileSeriesReader is a meta-reader that can work with various\n"
  "readers to load file series. To the pipeline, it looks like a reader\n"
  "that supports time. It updates the file name to the internal reader\n"
  "whenever a different time step is requested.\n\n"
  "If the reader already supports time, then this meta-filter will\n"
  "multiplex the time.  It will union together all the times and forward\n"
  "time requests to the file with the correct time.  Overlaps are\n"
  "handled by requesting data from the file with the upper range the\n"
  "farthest in the future.\n\n"
  "There are three ways to specify a series of files.  The first way is\n"
  "by adding the filenames one at a time with the AddFileName method.\n\n"
  "* The second way is\n"
  "* by providing (with the AddFileName method) a meta file that\n"
  "  specifies a list of\n"
  "* files. This format allows the user to specify a time value in\n"
  "  addition to a\n"
  "* filename for each step. The format is as follows:\n"
  "* \n"
  " * {\n"
  " * \"file-series-version\" : \"version\",\n"
  " * \"files\" : [\n"
  " * { \"name\" : \"filename1\", \"time\" : timeValue1 },\n"
  " * { \"name\" : \"filename2\", \"time\" : timeValue2 },\n"
  " * ...\n"
  " * ]\n"
  " * }\n"
  " * \n"
  "* Here is an example:\n"
  "* \n"
  " * {\n"
  " * \"file-series-version\" : \"1.0\",\n"
  " * \"files\" : [\n"
  " * { \"name\" : \"foo1.vtk\", \"time\" : 0 },\n"
  " * { \"name\" : \"foo2.vtk\", \"time\" : 5.5 },\n"
  " * { \"name\" : \"foo3.vtk\", \"time\" : 11.2 }]\n"
  " * }\n"
  " * \n"
  "*\n"
  "* The current version is 1.0.\n"
  "*\n"
  "* The third way is by providing a single meta file which is a simple\n"
  "  text file\n"
  "* that lists a file per line.  The files can be relative to the meta\n"
  "  file. This\n"
  "* method is useful when the actual reader points to a set of files\n"
  "  itself.  The\n"
  "* UseMetaFile enables this method of specifying the files. The\n"
  "  filename is set\n"
  "* with SetMetaFileName in this case. Do not use the AddFileName()\n"
  "  method when\n"
  "* using SetMetaFileName() as names set with AddFileName() will be\n"
  "  ignored.\n"
  "*\n\n";


static PyObject *
PyvtkFileSeriesReader_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkFileSeriesReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFileSeriesReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFileSeriesReader *op = static_cast<vtkFileSeriesReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkFileSeriesReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFileSeriesReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkFileSeriesReader *tempr = vtkFileSeriesReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFileSeriesReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFileSeriesReader *op = static_cast<vtkFileSeriesReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkFileSeriesReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkFileSeriesReader::NewInstance());

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
PyvtkFileSeriesReader_CanReadFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanReadFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFileSeriesReader *op = static_cast<vtkFileSeriesReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->CanReadFile(temp0) :
      op->vtkFileSeriesReader::CanReadFile(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFileSeriesReader_AddFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFileSeriesReader *op = static_cast<vtkFileSeriesReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->AddFileName(temp0);
    }
    else
    {
      op->vtkFileSeriesReader::AddFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFileSeriesReader_RemoveAllFileNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllFileNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFileSeriesReader *op = static_cast<vtkFileSeriesReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllFileNames();
    }
    else
    {
      op->vtkFileSeriesReader::RemoveAllFileNames();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFileSeriesReader_GetNumberOfFileNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfFileNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFileSeriesReader *op = static_cast<vtkFileSeriesReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfFileNames() :
      op->vtkFileSeriesReader::GetNumberOfFileNames());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFileSeriesReader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFileSeriesReader *op = static_cast<vtkFileSeriesReader *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetFileName(temp0) :
      op->vtkFileSeriesReader::GetFileName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFileSeriesReader_GetCurrentFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFileSeriesReader *op = static_cast<vtkFileSeriesReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetCurrentFileName() :
      op->vtkFileSeriesReader::GetCurrentFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFileSeriesReader_GetUseMetaFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseMetaFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFileSeriesReader *op = static_cast<vtkFileSeriesReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUseMetaFile() :
      op->vtkFileSeriesReader::GetUseMetaFile());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFileSeriesReader_SetUseMetaFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseMetaFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFileSeriesReader *op = static_cast<vtkFileSeriesReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseMetaFile(temp0);
    }
    else
    {
      op->vtkFileSeriesReader::SetUseMetaFile(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFileSeriesReader_UseMetaFileOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseMetaFileOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFileSeriesReader *op = static_cast<vtkFileSeriesReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseMetaFileOn();
    }
    else
    {
      op->vtkFileSeriesReader::UseMetaFileOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFileSeriesReader_UseMetaFileOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseMetaFileOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFileSeriesReader *op = static_cast<vtkFileSeriesReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseMetaFileOff();
    }
    else
    {
      op->vtkFileSeriesReader::UseMetaFileOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFileSeriesReader_GetIgnoreReaderTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIgnoreReaderTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFileSeriesReader *op = static_cast<vtkFileSeriesReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetIgnoreReaderTime() :
      op->vtkFileSeriesReader::GetIgnoreReaderTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFileSeriesReader_SetIgnoreReaderTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIgnoreReaderTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFileSeriesReader *op = static_cast<vtkFileSeriesReader *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetIgnoreReaderTime(temp0);
    }
    else
    {
      op->vtkFileSeriesReader::SetIgnoreReaderTime(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFileSeriesReader_IgnoreReaderTimeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IgnoreReaderTimeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFileSeriesReader *op = static_cast<vtkFileSeriesReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->IgnoreReaderTimeOn();
    }
    else
    {
      op->vtkFileSeriesReader::IgnoreReaderTimeOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFileSeriesReader_IgnoreReaderTimeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IgnoreReaderTimeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFileSeriesReader *op = static_cast<vtkFileSeriesReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->IgnoreReaderTimeOff();
    }
    else
    {
      op->vtkFileSeriesReader::IgnoreReaderTimeOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkFileSeriesReader_Methods[] = {
  {"IsTypeOf", PyvtkFileSeriesReader_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkFileSeriesReader_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkFileSeriesReader_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkFileSeriesReader\nC++: static vtkFileSeriesReader *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkFileSeriesReader_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkFileSeriesReader\nC++: vtkFileSeriesReader *NewInstance()\n\n"},
  {"CanReadFile", PyvtkFileSeriesReader_CanReadFile, METH_VARARGS,
   "V.CanReadFile(string) -> int\nC++: virtual int CanReadFile(const char *filename)\n\nCanReadFile is forwarded to the internal reader if it supports\nit.\n"},
  {"AddFileName", PyvtkFileSeriesReader_AddFileName, METH_VARARGS,
   "V.AddFileName(string)\nC++: virtual void AddFileName(const char *fname)\n\nAdds names of files to be read. The files are read in the order\nthey are added.\n"},
  {"RemoveAllFileNames", PyvtkFileSeriesReader_RemoveAllFileNames, METH_VARARGS,
   "V.RemoveAllFileNames()\nC++: virtual void RemoveAllFileNames()\n\nRemove all file names.\n"},
  {"GetNumberOfFileNames", PyvtkFileSeriesReader_GetNumberOfFileNames, METH_VARARGS,
   "V.GetNumberOfFileNames() -> int\nC++: virtual unsigned int GetNumberOfFileNames()\n\nReturns the number of file names added by AddFileName.\n"},
  {"GetFileName", PyvtkFileSeriesReader_GetFileName, METH_VARARGS,
   "V.GetFileName(int) -> string\nC++: virtual const char *GetFileName(unsigned int idx)\n\nReturns the name of a file with index idx.\n"},
  {"GetCurrentFileName", PyvtkFileSeriesReader_GetCurrentFileName, METH_VARARGS,
   "V.GetCurrentFileName() -> string\nC++: const char *GetCurrentFileName()\n\n"},
  {"GetUseMetaFile", PyvtkFileSeriesReader_GetUseMetaFile, METH_VARARGS,
   "V.GetUseMetaFile() -> int\nC++: virtual int GetUseMetaFile()\n\nIf true, then use the meta file.  False by default.\n"},
  {"SetUseMetaFile", PyvtkFileSeriesReader_SetUseMetaFile, METH_VARARGS,
   "V.SetUseMetaFile(int)\nC++: virtual void SetUseMetaFile(int _arg)\n\nIf true, then use the meta file.  False by default.\n"},
  {"UseMetaFileOn", PyvtkFileSeriesReader_UseMetaFileOn, METH_VARARGS,
   "V.UseMetaFileOn()\nC++: virtual void UseMetaFileOn()\n\nIf true, then use the meta file.  False by default.\n"},
  {"UseMetaFileOff", PyvtkFileSeriesReader_UseMetaFileOff, METH_VARARGS,
   "V.UseMetaFileOff()\nC++: virtual void UseMetaFileOff()\n\nIf true, then use the meta file.  False by default.\n"},
  {"GetIgnoreReaderTime", PyvtkFileSeriesReader_GetIgnoreReaderTime, METH_VARARGS,
   "V.GetIgnoreReaderTime() -> bool\nC++: virtual bool GetIgnoreReaderTime()\n\nIf true, then treat file series like it does not contain any time\nstep values. False by default.\n"},
  {"SetIgnoreReaderTime", PyvtkFileSeriesReader_SetIgnoreReaderTime, METH_VARARGS,
   "V.SetIgnoreReaderTime(bool)\nC++: virtual void SetIgnoreReaderTime(bool _arg)\n\nIf true, then treat file series like it does not contain any time\nstep values. False by default.\n"},
  {"IgnoreReaderTimeOn", PyvtkFileSeriesReader_IgnoreReaderTimeOn, METH_VARARGS,
   "V.IgnoreReaderTimeOn()\nC++: virtual void IgnoreReaderTimeOn()\n\nIf true, then treat file series like it does not contain any time\nstep values. False by default.\n"},
  {"IgnoreReaderTimeOff", PyvtkFileSeriesReader_IgnoreReaderTimeOff, METH_VARARGS,
   "V.IgnoreReaderTimeOff()\nC++: virtual void IgnoreReaderTimeOff()\n\nIf true, then treat file series like it does not contain any time\nstep values. False by default.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkFileSeriesReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsCorePython.vtkFileSeriesReader", // tp_name
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
  PyvtkFileSeriesReader_Doc, // tp_doc
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

static vtkObjectBase *PyvtkFileSeriesReader_StaticNew()
{
  return vtkFileSeriesReader::New();
}

PyObject *PyvtkFileSeriesReader_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkFileSeriesReader_Type, PyvtkFileSeriesReader_Methods,
    "vtkFileSeriesReader",
 &PyvtkFileSeriesReader_StaticNew);

  PyTypeObject *pytype = &PyvtkFileSeriesReader_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkMetaReader_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkFileSeriesReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkFileSeriesReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkFileSeriesReader", o) != 0)
  {
    Py_DECREF(o);
  }

}

