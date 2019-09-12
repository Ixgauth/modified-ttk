// python wrapper for vtkAMREnzoReader
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
#include "vtkAMREnzoReader.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkAMREnzoReader(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkAMREnzoReader_ClassNew(); }

#ifndef DECLARED_PyvtkAMRBaseReader_ClassNew
extern "C" { PyObject *PyvtkAMRBaseReader_ClassNew(); }
#define DECLARED_PyvtkAMRBaseReader_ClassNew
#endif

static const char *PyvtkAMREnzoReader_Doc =
  "vtkAMREnzoReader - A concrete instance of vtkAMRBaseReader that\nimplements functionality for reading Enzo AMR datasets.\n\n"
  "Superclass: vtkAMRBaseReader\n\n"
;


static PyObject *
PyvtkAMREnzoReader_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkAMREnzoReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMREnzoReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMREnzoReader *op = static_cast<vtkAMREnzoReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAMREnzoReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMREnzoReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkAMREnzoReader *tempr = vtkAMREnzoReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMREnzoReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMREnzoReader *op = static_cast<vtkAMREnzoReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAMREnzoReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAMREnzoReader::NewInstance());

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
PyvtkAMREnzoReader_SetConvertToCGS(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConvertToCGS");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMREnzoReader *op = static_cast<vtkAMREnzoReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetConvertToCGS(temp0);
    }
    else
    {
      op->vtkAMREnzoReader::SetConvertToCGS(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMREnzoReader_GetConvertToCGS(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConvertToCGS");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMREnzoReader *op = static_cast<vtkAMREnzoReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetConvertToCGS() :
      op->vtkAMREnzoReader::GetConvertToCGS());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMREnzoReader_ConvertToCGSOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConvertToCGSOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMREnzoReader *op = static_cast<vtkAMREnzoReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ConvertToCGSOn();
    }
    else
    {
      op->vtkAMREnzoReader::ConvertToCGSOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMREnzoReader_ConvertToCGSOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConvertToCGSOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMREnzoReader *op = static_cast<vtkAMREnzoReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ConvertToCGSOff();
    }
    else
    {
      op->vtkAMREnzoReader::ConvertToCGSOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMREnzoReader_GetNumberOfBlocks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfBlocks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMREnzoReader *op = static_cast<vtkAMREnzoReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfBlocks() :
      op->vtkAMREnzoReader::GetNumberOfBlocks());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMREnzoReader_GetNumberOfLevels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfLevels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMREnzoReader *op = static_cast<vtkAMREnzoReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfLevels() :
      op->vtkAMREnzoReader::GetNumberOfLevels());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMREnzoReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMREnzoReader *op = static_cast<vtkAMREnzoReader *>(vp);

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
      op->vtkAMREnzoReader::SetFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkAMREnzoReader_Methods[] = {
  {"IsTypeOf", PyvtkAMREnzoReader_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkAMREnzoReader_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkAMREnzoReader_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkAMREnzoReader\nC++: static vtkAMREnzoReader *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkAMREnzoReader_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkAMREnzoReader\nC++: vtkAMREnzoReader *NewInstance()\n\n"},
  {"SetConvertToCGS", PyvtkAMREnzoReader_SetConvertToCGS, METH_VARARGS,
   "V.SetConvertToCGS(int)\nC++: virtual void SetConvertToCGS(vtkTypeBool _arg)\n\nSet/Get whether data should be converted to CGS\n"},
  {"GetConvertToCGS", PyvtkAMREnzoReader_GetConvertToCGS, METH_VARARGS,
   "V.GetConvertToCGS() -> int\nC++: virtual vtkTypeBool GetConvertToCGS()\n\nSet/Get whether data should be converted to CGS\n"},
  {"ConvertToCGSOn", PyvtkAMREnzoReader_ConvertToCGSOn, METH_VARARGS,
   "V.ConvertToCGSOn()\nC++: virtual void ConvertToCGSOn()\n\nSet/Get whether data should be converted to CGS\n"},
  {"ConvertToCGSOff", PyvtkAMREnzoReader_ConvertToCGSOff, METH_VARARGS,
   "V.ConvertToCGSOff()\nC++: virtual void ConvertToCGSOff()\n\nSet/Get whether data should be converted to CGS\n"},
  {"GetNumberOfBlocks", PyvtkAMREnzoReader_GetNumberOfBlocks, METH_VARARGS,
   "V.GetNumberOfBlocks() -> int\nC++: int GetNumberOfBlocks() override;\n\nSee vtkAMRBaseReader::GetNumberOfBlocks\n"},
  {"GetNumberOfLevels", PyvtkAMREnzoReader_GetNumberOfLevels, METH_VARARGS,
   "V.GetNumberOfLevels() -> int\nC++: int GetNumberOfLevels() override;\n\nSee vtkAMRBaseReader::GetNumberOfLevels\n"},
  {"SetFileName", PyvtkAMREnzoReader_SetFileName, METH_VARARGS,
   "V.SetFileName(string)\nC++: void SetFileName(const char *fileName) override;\n\nSee vtkAMRBaseReader::SetFileName\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkAMREnzoReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOAMRPython.vtkAMREnzoReader", // tp_name
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
  PyvtkAMREnzoReader_Doc, // tp_doc
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

static vtkObjectBase *PyvtkAMREnzoReader_StaticNew()
{
  return vtkAMREnzoReader::New();
}

PyObject *PyvtkAMREnzoReader_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkAMREnzoReader_Type, PyvtkAMREnzoReader_Methods,
    "vtkAMREnzoReader",
 &PyvtkAMREnzoReader_StaticNew);

  PyTypeObject *pytype = &PyvtkAMREnzoReader_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkAMRBaseReader_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkAMREnzoReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkAMREnzoReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkAMREnzoReader", o) != 0)
  {
    Py_DECREF(o);
  }

}

