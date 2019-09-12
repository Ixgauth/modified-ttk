// python wrapper for vtkXMLPolyDataReader
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
#include "vtkXMLPolyDataReader.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkXMLPolyDataReader(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkXMLPolyDataReader_ClassNew(); }

#ifndef DECLARED_PyvtkXMLUnstructuredDataReader_ClassNew
extern "C" { PyObject *PyvtkXMLUnstructuredDataReader_ClassNew(); }
#define DECLARED_PyvtkXMLUnstructuredDataReader_ClassNew
#endif

static const char *PyvtkXMLPolyDataReader_Doc =
  "vtkXMLPolyDataReader - Read VTK XML PolyData files.\n\n"
  "Superclass: vtkXMLUnstructuredDataReader\n\n"
  "vtkXMLPolyDataReader reads the VTK XML PolyData file format.  One\n"
  "polygonal data file can be read to produce one output.  Streaming is\n"
  "supported.  The standard extension for this reader's file format is\n"
  "\"vtp\".  This reader is also used to read a single piece of the\n"
  "parallel file format.\n\n"
  "@sa\n"
  "vtkXMLPPolyDataReader\n\n";


static PyObject *
PyvtkXMLPolyDataReader_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkXMLPolyDataReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLPolyDataReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPolyDataReader *op = static_cast<vtkXMLPolyDataReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkXMLPolyDataReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLPolyDataReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkXMLPolyDataReader *tempr = vtkXMLPolyDataReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLPolyDataReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPolyDataReader *op = static_cast<vtkXMLPolyDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkXMLPolyDataReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkXMLPolyDataReader::NewInstance());

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
PyvtkXMLPolyDataReader_GetOutput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPolyDataReader *op = static_cast<vtkXMLPolyDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetOutput() :
      op->vtkXMLPolyDataReader::GetOutput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkXMLPolyDataReader_GetOutput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPolyDataReader *op = static_cast<vtkXMLPolyDataReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetOutput(temp0) :
      op->vtkXMLPolyDataReader::GetOutput(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkXMLPolyDataReader_GetOutput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkXMLPolyDataReader_GetOutput_s1(self, args);
    case 1:
      return PyvtkXMLPolyDataReader_GetOutput_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetOutput");
  return nullptr;
}



static PyObject *
PyvtkXMLPolyDataReader_GetNumberOfVerts(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfVerts");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPolyDataReader *op = static_cast<vtkXMLPolyDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfVerts() :
      op->vtkXMLPolyDataReader::GetNumberOfVerts());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLPolyDataReader_GetNumberOfLines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfLines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPolyDataReader *op = static_cast<vtkXMLPolyDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfLines() :
      op->vtkXMLPolyDataReader::GetNumberOfLines());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLPolyDataReader_GetNumberOfStrips(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfStrips");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPolyDataReader *op = static_cast<vtkXMLPolyDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfStrips() :
      op->vtkXMLPolyDataReader::GetNumberOfStrips());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLPolyDataReader_GetNumberOfPolys(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPolys");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPolyDataReader *op = static_cast<vtkXMLPolyDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfPolys() :
      op->vtkXMLPolyDataReader::GetNumberOfPolys());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkXMLPolyDataReader_Methods[] = {
  {"IsTypeOf", PyvtkXMLPolyDataReader_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkXMLPolyDataReader_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkXMLPolyDataReader_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkXMLPolyDataReader\nC++: static vtkXMLPolyDataReader *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkXMLPolyDataReader_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkXMLPolyDataReader\nC++: vtkXMLPolyDataReader *NewInstance()\n\n"},
  {"GetOutput", PyvtkXMLPolyDataReader_GetOutput, METH_VARARGS,
   "V.GetOutput() -> vtkPolyData\nC++: vtkPolyData *GetOutput()\nV.GetOutput(int) -> vtkPolyData\nC++: vtkPolyData *GetOutput(int idx)\n\nGet the reader's output.\n"},
  {"GetNumberOfVerts", PyvtkXMLPolyDataReader_GetNumberOfVerts, METH_VARARGS,
   "V.GetNumberOfVerts() -> int\nC++: virtual vtkIdType GetNumberOfVerts()\n\nGet the number of verts/lines/strips/polys in the output.\n"},
  {"GetNumberOfLines", PyvtkXMLPolyDataReader_GetNumberOfLines, METH_VARARGS,
   "V.GetNumberOfLines() -> int\nC++: virtual vtkIdType GetNumberOfLines()\n\nGet the number of verts/lines/strips/polys in the output.\n"},
  {"GetNumberOfStrips", PyvtkXMLPolyDataReader_GetNumberOfStrips, METH_VARARGS,
   "V.GetNumberOfStrips() -> int\nC++: virtual vtkIdType GetNumberOfStrips()\n\nGet the number of verts/lines/strips/polys in the output.\n"},
  {"GetNumberOfPolys", PyvtkXMLPolyDataReader_GetNumberOfPolys, METH_VARARGS,
   "V.GetNumberOfPolys() -> int\nC++: virtual vtkIdType GetNumberOfPolys()\n\nGet the number of verts/lines/strips/polys in the output.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkXMLPolyDataReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOXMLPython.vtkXMLPolyDataReader", // tp_name
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
  PyvtkXMLPolyDataReader_Doc, // tp_doc
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

static vtkObjectBase *PyvtkXMLPolyDataReader_StaticNew()
{
  return vtkXMLPolyDataReader::New();
}

PyObject *PyvtkXMLPolyDataReader_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkXMLPolyDataReader_Type, PyvtkXMLPolyDataReader_Methods,
    "vtkXMLPolyDataReader",
 &PyvtkXMLPolyDataReader_StaticNew);

  PyTypeObject *pytype = &PyvtkXMLPolyDataReader_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkXMLUnstructuredDataReader_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkXMLPolyDataReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkXMLPolyDataReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkXMLPolyDataReader", o) != 0)
  {
    Py_DECREF(o);
  }

}

