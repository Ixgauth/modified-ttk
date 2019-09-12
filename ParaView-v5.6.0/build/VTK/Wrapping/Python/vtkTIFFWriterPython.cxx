// python wrapper for vtkTIFFWriter
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
#include "vtkTIFFWriter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkTIFFWriter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkTIFFWriter_ClassNew(); }

#ifndef DECLARED_PyvtkImageWriter_ClassNew
extern "C" { PyObject *PyvtkImageWriter_ClassNew(); }
#define DECLARED_PyvtkImageWriter_ClassNew
#endif

static const char *PyvtkTIFFWriter_Doc =
  "vtkTIFFWriter - write out image data as a TIFF file\n\n"
  "Superclass: vtkImageWriter\n\n"
  "vtkTIFFWriter writes image data as a TIFF data file. Data can be\n"
  "written uncompressed or compressed. Several forms of compression are\n"
  "supported including packed bits, JPEG, deflation, and LZW. (Note: LZW\n"
  "compression is currently under patent in the US and is disabled until\n"
  "the patent expires. However, the mechanism for supporting this\n"
  "compression is available for those with a valid license or to whom\n"
  "the patent does not apply.)\n\n";


static PyObject *
PyvtkTIFFWriter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTIFFWriter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTIFFWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTIFFWriter *op = static_cast<vtkTIFFWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTIFFWriter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTIFFWriter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTIFFWriter *tempr = vtkTIFFWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTIFFWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTIFFWriter *op = static_cast<vtkTIFFWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTIFFWriter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTIFFWriter::NewInstance());

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
PyvtkTIFFWriter_Write(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Write");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTIFFWriter *op = static_cast<vtkTIFFWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Write();
    }
    else
    {
      op->vtkTIFFWriter::Write();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTIFFWriter_SetCompression(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCompression");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTIFFWriter *op = static_cast<vtkTIFFWriter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCompression(temp0);
    }
    else
    {
      op->vtkTIFFWriter::SetCompression(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTIFFWriter_GetCompressionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCompressionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTIFFWriter *op = static_cast<vtkTIFFWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCompressionMinValue() :
      op->vtkTIFFWriter::GetCompressionMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTIFFWriter_GetCompressionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCompressionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTIFFWriter *op = static_cast<vtkTIFFWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCompressionMaxValue() :
      op->vtkTIFFWriter::GetCompressionMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTIFFWriter_GetCompression(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCompression");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTIFFWriter *op = static_cast<vtkTIFFWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCompression() :
      op->vtkTIFFWriter::GetCompression());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTIFFWriter_SetCompressionToNoCompression(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCompressionToNoCompression");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTIFFWriter *op = static_cast<vtkTIFFWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCompressionToNoCompression();
    }
    else
    {
      op->vtkTIFFWriter::SetCompressionToNoCompression();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTIFFWriter_SetCompressionToPackBits(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCompressionToPackBits");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTIFFWriter *op = static_cast<vtkTIFFWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCompressionToPackBits();
    }
    else
    {
      op->vtkTIFFWriter::SetCompressionToPackBits();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTIFFWriter_SetCompressionToJPEG(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCompressionToJPEG");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTIFFWriter *op = static_cast<vtkTIFFWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCompressionToJPEG();
    }
    else
    {
      op->vtkTIFFWriter::SetCompressionToJPEG();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTIFFWriter_SetCompressionToDeflate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCompressionToDeflate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTIFFWriter *op = static_cast<vtkTIFFWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCompressionToDeflate();
    }
    else
    {
      op->vtkTIFFWriter::SetCompressionToDeflate();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTIFFWriter_SetCompressionToLZW(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCompressionToLZW");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTIFFWriter *op = static_cast<vtkTIFFWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCompressionToLZW();
    }
    else
    {
      op->vtkTIFFWriter::SetCompressionToLZW();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkTIFFWriter_Methods[] = {
  {"IsTypeOf", PyvtkTIFFWriter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkTIFFWriter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkTIFFWriter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkTIFFWriter\nC++: static vtkTIFFWriter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkTIFFWriter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkTIFFWriter\nC++: vtkTIFFWriter *NewInstance()\n\n"},
  {"Write", PyvtkTIFFWriter_Write, METH_VARARGS,
   "V.Write()\nC++: void Write() override;\n\nThe main interface which triggers the writer to start.\n"},
  {"SetCompression", PyvtkTIFFWriter_SetCompression, METH_VARARGS,
   "V.SetCompression(int)\nC++: virtual void SetCompression(int _arg)\n\nSet compression type. Sinze LZW compression is patented outside\nUS, the additional work steps have to be taken in order to use\nthat compression.\n"},
  {"GetCompressionMinValue", PyvtkTIFFWriter_GetCompressionMinValue, METH_VARARGS,
   "V.GetCompressionMinValue() -> int\nC++: virtual int GetCompressionMinValue()\n\nSet compression type. Sinze LZW compression is patented outside\nUS, the additional work steps have to be taken in order to use\nthat compression.\n"},
  {"GetCompressionMaxValue", PyvtkTIFFWriter_GetCompressionMaxValue, METH_VARARGS,
   "V.GetCompressionMaxValue() -> int\nC++: virtual int GetCompressionMaxValue()\n\nSet compression type. Sinze LZW compression is patented outside\nUS, the additional work steps have to be taken in order to use\nthat compression.\n"},
  {"GetCompression", PyvtkTIFFWriter_GetCompression, METH_VARARGS,
   "V.GetCompression() -> int\nC++: virtual int GetCompression()\n\nSet compression type. Sinze LZW compression is patented outside\nUS, the additional work steps have to be taken in order to use\nthat compression.\n"},
  {"SetCompressionToNoCompression", PyvtkTIFFWriter_SetCompressionToNoCompression, METH_VARARGS,
   "V.SetCompressionToNoCompression()\nC++: void SetCompressionToNoCompression()\n\nSet compression type. Sinze LZW compression is patented outside\nUS, the additional work steps have to be taken in order to use\nthat compression.\n"},
  {"SetCompressionToPackBits", PyvtkTIFFWriter_SetCompressionToPackBits, METH_VARARGS,
   "V.SetCompressionToPackBits()\nC++: void SetCompressionToPackBits()\n\nSet compression type. Sinze LZW compression is patented outside\nUS, the additional work steps have to be taken in order to use\nthat compression.\n"},
  {"SetCompressionToJPEG", PyvtkTIFFWriter_SetCompressionToJPEG, METH_VARARGS,
   "V.SetCompressionToJPEG()\nC++: void SetCompressionToJPEG()\n\nSet compression type. Sinze LZW compression is patented outside\nUS, the additional work steps have to be taken in order to use\nthat compression.\n"},
  {"SetCompressionToDeflate", PyvtkTIFFWriter_SetCompressionToDeflate, METH_VARARGS,
   "V.SetCompressionToDeflate()\nC++: void SetCompressionToDeflate()\n\nSet compression type. Sinze LZW compression is patented outside\nUS, the additional work steps have to be taken in order to use\nthat compression.\n"},
  {"SetCompressionToLZW", PyvtkTIFFWriter_SetCompressionToLZW, METH_VARARGS,
   "V.SetCompressionToLZW()\nC++: void SetCompressionToLZW()\n\nSet compression type. Sinze LZW compression is patented outside\nUS, the additional work steps have to be taken in order to use\nthat compression.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkTIFFWriter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOImagePython.vtkTIFFWriter", // tp_name
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
  PyvtkTIFFWriter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkTIFFWriter_StaticNew()
{
  return vtkTIFFWriter::New();
}

PyObject *PyvtkTIFFWriter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkTIFFWriter_Type, PyvtkTIFFWriter_Methods,
    "vtkTIFFWriter",
 &PyvtkTIFFWriter_StaticNew);

  PyTypeObject *pytype = &PyvtkTIFFWriter_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkImageWriter_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 5; c++)
  {
    static const struct { const char *name; int value; }
      constants[5] = {
        { "NoCompression", vtkTIFFWriter::NoCompression },
        { "PackBits", vtkTIFFWriter::PackBits },
        { "JPEG", vtkTIFFWriter::JPEG },
        { "Deflate", vtkTIFFWriter::Deflate },
        { "LZW", vtkTIFFWriter::LZW },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkTIFFWriter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkTIFFWriter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkTIFFWriter", o) != 0)
  {
    Py_DECREF(o);
  }

}

