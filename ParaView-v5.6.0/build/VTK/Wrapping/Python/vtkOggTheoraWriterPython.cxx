// python wrapper for vtkOggTheoraWriter
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
#include "vtkOggTheoraWriter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkOggTheoraWriter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkOggTheoraWriter_ClassNew(); }

#ifndef DECLARED_PyvtkGenericMovieWriter_ClassNew
extern "C" { PyObject *PyvtkGenericMovieWriter_ClassNew(); }
#define DECLARED_PyvtkGenericMovieWriter_ClassNew
#endif

static const char *PyvtkOggTheoraWriter_Doc =
  "vtkOggTheoraWriter - Uses the ogg and theora libraries to write video\nfiles.\n\n"
  "Superclass: vtkGenericMovieWriter\n\n"
  "vtkOggTheoraWriter is an adapter that allows VTK to use the ogg and\n"
  "theora libraries to write movie files.  This class creates .ogv files\n"
  "containing theora encoded video without audio.\n\n"
  "This implementation is based on vtkFFMPEGWriter and uses some code\n"
  "derived from the encoder example distributed with libtheora.\n\n";


static PyObject *
PyvtkOggTheoraWriter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkOggTheoraWriter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOggTheoraWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOggTheoraWriter *op = static_cast<vtkOggTheoraWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkOggTheoraWriter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOggTheoraWriter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkOggTheoraWriter *tempr = vtkOggTheoraWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOggTheoraWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOggTheoraWriter *op = static_cast<vtkOggTheoraWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkOggTheoraWriter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkOggTheoraWriter::NewInstance());

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
PyvtkOggTheoraWriter_Start(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Start");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOggTheoraWriter *op = static_cast<vtkOggTheoraWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Start();
    }
    else
    {
      op->vtkOggTheoraWriter::Start();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOggTheoraWriter_Write(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Write");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOggTheoraWriter *op = static_cast<vtkOggTheoraWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Write();
    }
    else
    {
      op->vtkOggTheoraWriter::Write();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOggTheoraWriter_End(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "End");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOggTheoraWriter *op = static_cast<vtkOggTheoraWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->End();
    }
    else
    {
      op->vtkOggTheoraWriter::End();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOggTheoraWriter_SetQuality(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQuality");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOggTheoraWriter *op = static_cast<vtkOggTheoraWriter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetQuality(temp0);
    }
    else
    {
      op->vtkOggTheoraWriter::SetQuality(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOggTheoraWriter_GetQualityMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetQualityMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOggTheoraWriter *op = static_cast<vtkOggTheoraWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetQualityMinValue() :
      op->vtkOggTheoraWriter::GetQualityMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOggTheoraWriter_GetQualityMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetQualityMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOggTheoraWriter *op = static_cast<vtkOggTheoraWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetQualityMaxValue() :
      op->vtkOggTheoraWriter::GetQualityMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOggTheoraWriter_GetQuality(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetQuality");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOggTheoraWriter *op = static_cast<vtkOggTheoraWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetQuality() :
      op->vtkOggTheoraWriter::GetQuality());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOggTheoraWriter_SetRate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOggTheoraWriter *op = static_cast<vtkOggTheoraWriter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRate(temp0);
    }
    else
    {
      op->vtkOggTheoraWriter::SetRate(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOggTheoraWriter_GetRateMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRateMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOggTheoraWriter *op = static_cast<vtkOggTheoraWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRateMinValue() :
      op->vtkOggTheoraWriter::GetRateMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOggTheoraWriter_GetRateMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRateMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOggTheoraWriter *op = static_cast<vtkOggTheoraWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRateMaxValue() :
      op->vtkOggTheoraWriter::GetRateMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOggTheoraWriter_GetRate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOggTheoraWriter *op = static_cast<vtkOggTheoraWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRate() :
      op->vtkOggTheoraWriter::GetRate());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOggTheoraWriter_SetSubsampling(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSubsampling");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOggTheoraWriter *op = static_cast<vtkOggTheoraWriter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSubsampling(temp0);
    }
    else
    {
      op->vtkOggTheoraWriter::SetSubsampling(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOggTheoraWriter_GetSubsampling(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSubsampling");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOggTheoraWriter *op = static_cast<vtkOggTheoraWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSubsampling() :
      op->vtkOggTheoraWriter::GetSubsampling());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOggTheoraWriter_SubsamplingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SubsamplingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOggTheoraWriter *op = static_cast<vtkOggTheoraWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SubsamplingOn();
    }
    else
    {
      op->vtkOggTheoraWriter::SubsamplingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOggTheoraWriter_SubsamplingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SubsamplingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOggTheoraWriter *op = static_cast<vtkOggTheoraWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SubsamplingOff();
    }
    else
    {
      op->vtkOggTheoraWriter::SubsamplingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkOggTheoraWriter_Methods[] = {
  {"IsTypeOf", PyvtkOggTheoraWriter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkOggTheoraWriter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkOggTheoraWriter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkOggTheoraWriter\nC++: static vtkOggTheoraWriter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkOggTheoraWriter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkOggTheoraWriter\nC++: vtkOggTheoraWriter *NewInstance()\n\n"},
  {"Start", PyvtkOggTheoraWriter_Start, METH_VARARGS,
   "V.Start()\nC++: void Start() override;\n\nThese methods start writing an Movie file, write a frame to the\nfile and then end the writing process.\n"},
  {"Write", PyvtkOggTheoraWriter_Write, METH_VARARGS,
   "V.Write()\nC++: void Write() override;\n\nThese methods start writing an Movie file, write a frame to the\nfile and then end the writing process.\n"},
  {"End", PyvtkOggTheoraWriter_End, METH_VARARGS,
   "V.End()\nC++: void End() override;\n\nThese methods start writing an Movie file, write a frame to the\nfile and then end the writing process.\n"},
  {"SetQuality", PyvtkOggTheoraWriter_SetQuality, METH_VARARGS,
   "V.SetQuality(int)\nC++: virtual void SetQuality(int _arg)\n\nSet/Get the compression quality. 0 means worst quality and\nsmallest file size 2 means best quality and largest file size\n"},
  {"GetQualityMinValue", PyvtkOggTheoraWriter_GetQualityMinValue, METH_VARARGS,
   "V.GetQualityMinValue() -> int\nC++: virtual int GetQualityMinValue()\n\nSet/Get the compression quality. 0 means worst quality and\nsmallest file size 2 means best quality and largest file size\n"},
  {"GetQualityMaxValue", PyvtkOggTheoraWriter_GetQualityMaxValue, METH_VARARGS,
   "V.GetQualityMaxValue() -> int\nC++: virtual int GetQualityMaxValue()\n\nSet/Get the compression quality. 0 means worst quality and\nsmallest file size 2 means best quality and largest file size\n"},
  {"GetQuality", PyvtkOggTheoraWriter_GetQuality, METH_VARARGS,
   "V.GetQuality() -> int\nC++: virtual int GetQuality()\n\nSet/Get the compression quality. 0 means worst quality and\nsmallest file size 2 means best quality and largest file size\n"},
  {"SetRate", PyvtkOggTheoraWriter_SetRate, METH_VARARGS,
   "V.SetRate(int)\nC++: virtual void SetRate(int _arg)\n\nSet/Get the frame rate, in frame/s.\n"},
  {"GetRateMinValue", PyvtkOggTheoraWriter_GetRateMinValue, METH_VARARGS,
   "V.GetRateMinValue() -> int\nC++: virtual int GetRateMinValue()\n\nSet/Get the frame rate, in frame/s.\n"},
  {"GetRateMaxValue", PyvtkOggTheoraWriter_GetRateMaxValue, METH_VARARGS,
   "V.GetRateMaxValue() -> int\nC++: virtual int GetRateMaxValue()\n\nSet/Get the frame rate, in frame/s.\n"},
  {"GetRate", PyvtkOggTheoraWriter_GetRate, METH_VARARGS,
   "V.GetRate() -> int\nC++: virtual int GetRate()\n\nSet/Get the frame rate, in frame/s.\n"},
  {"SetSubsampling", PyvtkOggTheoraWriter_SetSubsampling, METH_VARARGS,
   "V.SetSubsampling(int)\nC++: virtual void SetSubsampling(vtkTypeBool _arg)\n\nIs the video to be encoded using 4:2:0 subsampling?\n"},
  {"GetSubsampling", PyvtkOggTheoraWriter_GetSubsampling, METH_VARARGS,
   "V.GetSubsampling() -> int\nC++: virtual vtkTypeBool GetSubsampling()\n\nIs the video to be encoded using 4:2:0 subsampling?\n"},
  {"SubsamplingOn", PyvtkOggTheoraWriter_SubsamplingOn, METH_VARARGS,
   "V.SubsamplingOn()\nC++: virtual void SubsamplingOn()\n\nIs the video to be encoded using 4:2:0 subsampling?\n"},
  {"SubsamplingOff", PyvtkOggTheoraWriter_SubsamplingOff, METH_VARARGS,
   "V.SubsamplingOff()\nC++: virtual void SubsamplingOff()\n\nIs the video to be encoded using 4:2:0 subsampling?\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkOggTheoraWriter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOMoviePython.vtkOggTheoraWriter", // tp_name
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
  PyvtkOggTheoraWriter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkOggTheoraWriter_StaticNew()
{
  return vtkOggTheoraWriter::New();
}

PyObject *PyvtkOggTheoraWriter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkOggTheoraWriter_Type, PyvtkOggTheoraWriter_Methods,
    "vtkOggTheoraWriter",
 &PyvtkOggTheoraWriter_StaticNew);

  PyTypeObject *pytype = &PyvtkOggTheoraWriter_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkGenericMovieWriter_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkOggTheoraWriter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkOggTheoraWriter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkOggTheoraWriter", o) != 0)
  {
    Py_DECREF(o);
  }

}

