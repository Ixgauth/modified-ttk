// python wrapper for vtkNewickTreeWriter
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
#include "vtkStdString.h"
#include "vtkNewickTreeWriter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkNewickTreeWriter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkNewickTreeWriter_ClassNew(); }

#ifndef DECLARED_PyvtkDataWriter_ClassNew
extern "C" { PyObject *PyvtkDataWriter_ClassNew(); }
#define DECLARED_PyvtkDataWriter_ClassNew
#endif

static const char *PyvtkNewickTreeWriter_Doc =
  "vtkNewickTreeWriter - write vtkTree data to Newick format.\n\n"
  "Superclass: vtkDataWriter\n\n"
  "vtkNewickTreeWriter is writes a vtkTree to a Newick formatted file or\n"
  "string.\n\n";


static PyObject *
PyvtkNewickTreeWriter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkNewickTreeWriter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNewickTreeWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNewickTreeWriter *op = static_cast<vtkNewickTreeWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkNewickTreeWriter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNewickTreeWriter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkNewickTreeWriter *tempr = vtkNewickTreeWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNewickTreeWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNewickTreeWriter *op = static_cast<vtkNewickTreeWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkNewickTreeWriter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkNewickTreeWriter::NewInstance());

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
PyvtkNewickTreeWriter_GetInput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNewickTreeWriter *op = static_cast<vtkNewickTreeWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTree *tempr = (ap.IsBound() ?
      op->GetInput() :
      op->vtkNewickTreeWriter::GetInput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkNewickTreeWriter_GetInput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNewickTreeWriter *op = static_cast<vtkNewickTreeWriter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkTree *tempr = (ap.IsBound() ?
      op->GetInput(temp0) :
      op->vtkNewickTreeWriter::GetInput(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkNewickTreeWriter_GetInput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkNewickTreeWriter_GetInput_s1(self, args);
    case 1:
      return PyvtkNewickTreeWriter_GetInput_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetInput");
  return nullptr;
}



static PyObject *
PyvtkNewickTreeWriter_GetEdgeWeightArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeWeightArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNewickTreeWriter *op = static_cast<vtkNewickTreeWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStdString tempr = (ap.IsBound() ?
      op->GetEdgeWeightArrayName() :
      op->vtkNewickTreeWriter::GetEdgeWeightArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNewickTreeWriter_SetEdgeWeightArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeWeightArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNewickTreeWriter *op = static_cast<vtkNewickTreeWriter *>(vp);

  vtkStdString temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEdgeWeightArrayName(temp0);
    }
    else
    {
      op->vtkNewickTreeWriter::SetEdgeWeightArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkNewickTreeWriter_GetNodeNameArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeNameArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNewickTreeWriter *op = static_cast<vtkNewickTreeWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStdString tempr = (ap.IsBound() ?
      op->GetNodeNameArrayName() :
      op->vtkNewickTreeWriter::GetNodeNameArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNewickTreeWriter_SetNodeNameArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNodeNameArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNewickTreeWriter *op = static_cast<vtkNewickTreeWriter *>(vp);

  vtkStdString temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNodeNameArrayName(temp0);
    }
    else
    {
      op->vtkNewickTreeWriter::SetNodeNameArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkNewickTreeWriter_Methods[] = {
  {"IsTypeOf", PyvtkNewickTreeWriter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkNewickTreeWriter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkNewickTreeWriter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkNewickTreeWriter\nC++: static vtkNewickTreeWriter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkNewickTreeWriter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkNewickTreeWriter\nC++: vtkNewickTreeWriter *NewInstance()\n\n"},
  {"GetInput", PyvtkNewickTreeWriter_GetInput, METH_VARARGS,
   "V.GetInput() -> vtkTree\nC++: vtkTree *GetInput()\nV.GetInput(int) -> vtkTree\nC++: vtkTree *GetInput(int port)\n\nGet the input to this writer.\n"},
  {"GetEdgeWeightArrayName", PyvtkNewickTreeWriter_GetEdgeWeightArrayName, METH_VARARGS,
   "V.GetEdgeWeightArrayName() -> string\nC++: virtual vtkStdString GetEdgeWeightArrayName()\n\nGet/Set the name of the input's tree edge weight array. This\narray must be part of the input tree's EdgeData. The default name\nis \"weight\".  If this array cannot be found, then no edge weights\nwill be included in the output of this writer.\n"},
  {"SetEdgeWeightArrayName", PyvtkNewickTreeWriter_SetEdgeWeightArrayName, METH_VARARGS,
   "V.SetEdgeWeightArrayName(string)\nC++: virtual void SetEdgeWeightArrayName(vtkStdString _arg)\n\nGet/Set the name of the input's tree edge weight array. This\narray must be part of the input tree's EdgeData. The default name\nis \"weight\".  If this array cannot be found, then no edge weights\nwill be included in the output of this writer.\n"},
  {"GetNodeNameArrayName", PyvtkNewickTreeWriter_GetNodeNameArrayName, METH_VARARGS,
   "V.GetNodeNameArrayName() -> string\nC++: virtual vtkStdString GetNodeNameArrayName()\n\nGet/Set the name of the input's tree node name array. This array\nmust be part of the input tree's VertexData. The default name is \"node\nname\".  If this array cannot be found, then no node names will be\nincluded in the output of this writer.\n"},
  {"SetNodeNameArrayName", PyvtkNewickTreeWriter_SetNodeNameArrayName, METH_VARARGS,
   "V.SetNodeNameArrayName(string)\nC++: virtual void SetNodeNameArrayName(vtkStdString _arg)\n\nGet/Set the name of the input's tree node name array. This array\nmust be part of the input tree's VertexData. The default name is \"node\nname\".  If this array cannot be found, then no node names will be\nincluded in the output of this writer.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkNewickTreeWriter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOInfovisPython.vtkNewickTreeWriter", // tp_name
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
  PyvtkNewickTreeWriter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkNewickTreeWriter_StaticNew()
{
  return vtkNewickTreeWriter::New();
}

PyObject *PyvtkNewickTreeWriter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkNewickTreeWriter_Type, PyvtkNewickTreeWriter_Methods,
    "vtkNewickTreeWriter",
 &PyvtkNewickTreeWriter_StaticNew);

  PyTypeObject *pytype = &PyvtkNewickTreeWriter_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkDataWriter_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkNewickTreeWriter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkNewickTreeWriter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkNewickTreeWriter", o) != 0)
  {
    Py_DECREF(o);
  }

}

