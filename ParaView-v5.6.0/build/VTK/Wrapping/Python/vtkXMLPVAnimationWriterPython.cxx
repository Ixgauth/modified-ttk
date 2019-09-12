// python wrapper for vtkXMLPVAnimationWriter
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
#include "vtkXMLPVAnimationWriter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkXMLPVAnimationWriter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkXMLPVAnimationWriter_ClassNew(); }

#ifndef DECLARED_PyvtkXMLPVDWriter_ClassNew
extern "C" { PyObject *PyvtkXMLPVDWriter_ClassNew(); }
#define DECLARED_PyvtkXMLPVDWriter_ClassNew
#endif

static const char *PyvtkXMLPVAnimationWriter_Doc =
  "vtkXMLPVAnimationWriter - Data writer for ParaView\n\n"
  "Superclass: vtkXMLPVDWriter\n\n"
  "vtkXMLPVAnimationWriter is used to save all parts of a current source\n"
  "to a file with pieces spread across other server processes.\n\n";


static PyObject *
PyvtkXMLPVAnimationWriter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkXMLPVAnimationWriter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLPVAnimationWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPVAnimationWriter *op = static_cast<vtkXMLPVAnimationWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkXMLPVAnimationWriter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLPVAnimationWriter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkXMLPVAnimationWriter *tempr = vtkXMLPVAnimationWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLPVAnimationWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPVAnimationWriter *op = static_cast<vtkXMLPVAnimationWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkXMLPVAnimationWriter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkXMLPVAnimationWriter::NewInstance());

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
PyvtkXMLPVAnimationWriter_AddRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPVAnimationWriter *op = static_cast<vtkXMLPVAnimationWriter *>(vp);

  vtkAlgorithm *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkAlgorithm") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->AddRepresentation(temp0, temp1);
    }
    else
    {
      op->vtkXMLPVAnimationWriter::AddRepresentation(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLPVAnimationWriter_RemoveAllRepresentations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllRepresentations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPVAnimationWriter *op = static_cast<vtkXMLPVAnimationWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllRepresentations();
    }
    else
    {
      op->vtkXMLPVAnimationWriter::RemoveAllRepresentations();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLPVAnimationWriter_Start(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Start");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPVAnimationWriter *op = static_cast<vtkXMLPVAnimationWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Start();
    }
    else
    {
      op->vtkXMLPVAnimationWriter::Start();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLPVAnimationWriter_WriteTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPVAnimationWriter *op = static_cast<vtkXMLPVAnimationWriter *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->WriteTime(temp0);
    }
    else
    {
      op->vtkXMLPVAnimationWriter::WriteTime(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLPVAnimationWriter_Finish(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Finish");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPVAnimationWriter *op = static_cast<vtkXMLPVAnimationWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Finish();
    }
    else
    {
      op->vtkXMLPVAnimationWriter::Finish();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkXMLPVAnimationWriter_Methods[] = {
  {"IsTypeOf", PyvtkXMLPVAnimationWriter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkXMLPVAnimationWriter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkXMLPVAnimationWriter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkXMLPVAnimationWriter\nC++: static vtkXMLPVAnimationWriter *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkXMLPVAnimationWriter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkXMLPVAnimationWriter\nC++: vtkXMLPVAnimationWriter *NewInstance()\n\n"},
  {"AddRepresentation", PyvtkXMLPVAnimationWriter_AddRepresentation, METH_VARARGS,
   "V.AddRepresentation(vtkAlgorithm, string)\nC++: void AddRepresentation(vtkAlgorithm *, const char *groupname)\n\nAdd/Remove representations.\n"},
  {"RemoveAllRepresentations", PyvtkXMLPVAnimationWriter_RemoveAllRepresentations, METH_VARARGS,
   "V.RemoveAllRepresentations()\nC++: void RemoveAllRepresentations()\n\nAdd/Remove representations.\n"},
  {"Start", PyvtkXMLPVAnimationWriter_Start, METH_VARARGS,
   "V.Start()\nC++: void Start()\n\nStart a new animation with the current set of inputs.\n"},
  {"WriteTime", PyvtkXMLPVAnimationWriter_WriteTime, METH_VARARGS,
   "V.WriteTime(float)\nC++: void WriteTime(double time)\n\nWrite the current time step.\n"},
  {"Finish", PyvtkXMLPVAnimationWriter_Finish, METH_VARARGS,
   "V.Finish()\nC++: void Finish()\n\nFinish an animation by writing the collection file.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkXMLPVAnimationWriter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVAnimationPython.vtkXMLPVAnimationWriter", // tp_name
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
  PyvtkXMLPVAnimationWriter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkXMLPVAnimationWriter_StaticNew()
{
  return vtkXMLPVAnimationWriter::New();
}

PyObject *PyvtkXMLPVAnimationWriter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkXMLPVAnimationWriter_Type, PyvtkXMLPVAnimationWriter_Methods,
    "vtkXMLPVAnimationWriter",
 &PyvtkXMLPVAnimationWriter_StaticNew);

  PyTypeObject *pytype = &PyvtkXMLPVAnimationWriter_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkXMLPVDWriter_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkXMLPVAnimationWriter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkXMLPVAnimationWriter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkXMLPVAnimationWriter", o) != 0)
  {
    Py_DECREF(o);
  }

}

