// python wrapper for vtkGenericMovieWriter
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
#include "vtkGenericMovieWriter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkGenericMovieWriter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkGenericMovieWriter_ClassNew(); }

#ifndef DECLARED_PyvtkImageAlgorithm_ClassNew
extern "C" { PyObject *PyvtkImageAlgorithm_ClassNew(); }
#define DECLARED_PyvtkImageAlgorithm_ClassNew
#endif

static const char *PyvtkGenericMovieWriter_Doc =
  "vtkGenericMovieWriter - an abstract movie writer class.\n\n"
  "Superclass: vtkImageAlgorithm\n\n"
  "vtkGenericMovieWriter is the abstract base class for several movie\n"
  "writers. The input type is a vtkImageData. The Start() method will\n"
  "open and create the file, the Write() method will output a frame to\n"
  "the file (i.e. the contents of the vtkImageData), End() will finalize\n"
  "and close the file.\n"
  "@sa\n"
  "vtkAVIWriter\n\n";

static PyTypeObject PyvtkGenericMovieWriter_MovieWriterErrorIds_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOMoviePython.vtkGenericMovieWriter.MovieWriterErrorIds", // tp_name
  sizeof(PyIntObject), // tp_basicsize
  0, // tp_itemsize
  nullptr, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  nullptr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  nullptr, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  nullptr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  nullptr, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  &PyInt_Type, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  nullptr, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

PyObject *PyvtkGenericMovieWriter_MovieWriterErrorIds_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkGenericMovieWriter_MovieWriterErrorIds_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkGenericMovieWriter_MovieWriterErrorIds_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkGenericMovieWriter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkGenericMovieWriter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericMovieWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericMovieWriter *op = static_cast<vtkGenericMovieWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGenericMovieWriter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericMovieWriter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkGenericMovieWriter *tempr = vtkGenericMovieWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericMovieWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericMovieWriter *op = static_cast<vtkGenericMovieWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkGenericMovieWriter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGenericMovieWriter::NewInstance());

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
PyvtkGenericMovieWriter_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericMovieWriter *op = static_cast<vtkGenericMovieWriter *>(vp);

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
      op->vtkGenericMovieWriter::SetFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericMovieWriter_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericMovieWriter *op = static_cast<vtkGenericMovieWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkGenericMovieWriter::GetFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericMovieWriter_Start(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Start");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericMovieWriter *op = static_cast<vtkGenericMovieWriter *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    op->Start();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericMovieWriter_Write(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Write");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericMovieWriter *op = static_cast<vtkGenericMovieWriter *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    op->Write();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericMovieWriter_End(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "End");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericMovieWriter *op = static_cast<vtkGenericMovieWriter *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    op->End();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericMovieWriter_GetError(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetError");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericMovieWriter *op = static_cast<vtkGenericMovieWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetError() :
      op->vtkGenericMovieWriter::GetError());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericMovieWriter_GetStringFromErrorCode(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetStringFromErrorCode");

  unsigned long temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = vtkGenericMovieWriter::GetStringFromErrorCode(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkGenericMovieWriter_Methods[] = {
  {"IsTypeOf", PyvtkGenericMovieWriter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkGenericMovieWriter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkGenericMovieWriter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkGenericMovieWriter\nC++: static vtkGenericMovieWriter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkGenericMovieWriter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkGenericMovieWriter\nC++: vtkGenericMovieWriter *NewInstance()\n\n"},
  {"SetFileName", PyvtkGenericMovieWriter_SetFileName, METH_VARARGS,
   "V.SetFileName(string)\nC++: virtual void SetFileName(const char *_arg)\n\nSpecify file name of avi file.\n"},
  {"GetFileName", PyvtkGenericMovieWriter_GetFileName, METH_VARARGS,
   "V.GetFileName() -> string\nC++: virtual char *GetFileName()\n\nSpecify file name of avi file.\n"},
  {"Start", PyvtkGenericMovieWriter_Start, METH_VARARGS,
   "V.Start()\nC++: virtual void Start()\n\nThese methods start writing an Movie file, write a frame to the\nfile and then end the writing process.\n"},
  {"Write", PyvtkGenericMovieWriter_Write, METH_VARARGS,
   "V.Write()\nC++: virtual void Write()\n\nThese methods start writing an Movie file, write a frame to the\nfile and then end the writing process.\n"},
  {"End", PyvtkGenericMovieWriter_End, METH_VARARGS,
   "V.End()\nC++: virtual void End()\n\nThese methods start writing an Movie file, write a frame to the\nfile and then end the writing process.\n"},
  {"GetError", PyvtkGenericMovieWriter_GetError, METH_VARARGS,
   "V.GetError() -> int\nC++: virtual int GetError()\n\nWas there an error on the last write performed?\n"},
  {"GetStringFromErrorCode", PyvtkGenericMovieWriter_GetStringFromErrorCode, METH_VARARGS,
   "V.GetStringFromErrorCode(int) -> string\nC++: static const char *GetStringFromErrorCode(\n    unsigned long event)\n\nConverts vtkErrorCodes and vtkGenericMovieWriter errors to\nstrings.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkGenericMovieWriter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOMoviePython.vtkGenericMovieWriter", // tp_name
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
  PyvtkGenericMovieWriter_Doc, // tp_doc
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

PyObject *PyvtkGenericMovieWriter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkGenericMovieWriter_Type, PyvtkGenericMovieWriter_Methods,
    "vtkGenericMovieWriter",
 nullptr);

  PyTypeObject *pytype = &PyvtkGenericMovieWriter_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkImageAlgorithm_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkGenericMovieWriter_MovieWriterErrorIds_Type);
  PyvtkGenericMovieWriter_MovieWriterErrorIds_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkGenericMovieWriter_MovieWriterErrorIds_Type);

  o = (PyObject *)&PyvtkGenericMovieWriter_MovieWriterErrorIds_Type;
  if (PyDict_SetItemString(d, "MovieWriterErrorIds", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 6; c++)
  {
    typedef vtkGenericMovieWriter::MovieWriterErrorIds cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[6] = {
        { "UserError", vtkGenericMovieWriter::UserError },
        { "InitError", vtkGenericMovieWriter::InitError },
        { "NoInputError", vtkGenericMovieWriter::NoInputError },
        { "CanNotCompress", vtkGenericMovieWriter::CanNotCompress },
        { "CanNotFormat", vtkGenericMovieWriter::CanNotFormat },
        { "ChangedResolutionError", vtkGenericMovieWriter::ChangedResolutionError },
      };

    o = PyvtkGenericMovieWriter_MovieWriterErrorIds_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkGenericMovieWriter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkGenericMovieWriter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkGenericMovieWriter", o) != 0)
  {
    Py_DECREF(o);
  }

}

