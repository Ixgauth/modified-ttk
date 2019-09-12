// python wrapper for vtkImageConnector
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
#include "vtkImageConnector.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImageConnector(PyObject *); }

static const char *PyvtkImageConnectorSeed_Doc =
  "vtkImageConnectorSeed - no description provided.\n\n"

  "vtkImageConnectorSeed()\n"
  "vtkImageConnectorSeed(const &vtkImageConnectorSeed)\n";

static PyMethodDef PyvtkImageConnectorSeed_Methods[] = {
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkImageConnectorSeed_vtkImageConnectorSeed_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkImageConnectorSeed");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkImageConnectorSeed *op = new vtkImageConnectorSeed();

    result = PyVTKSpecialObject_New("vtkImageConnectorSeed", op);
  }

  return result;
}

static PyObject *
PyvtkImageConnectorSeed_vtkImageConnectorSeed_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkImageConnectorSeed");

  vtkImageConnectorSeed *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkImageConnectorSeed"))
  {
    vtkImageConnectorSeed *op = new vtkImageConnectorSeed(*temp0);

    result = PyVTKSpecialObject_New("vtkImageConnectorSeed", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkImageConnectorSeed_vtkImageConnectorSeed_Methods[] = {
  {nullptr, PyvtkImageConnectorSeed_vtkImageConnectorSeed_s2, METH_VARARGS,
   "@W vtkImageConnectorSeed"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkImageConnectorSeed_vtkImageConnectorSeed(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkImageConnectorSeed_vtkImageConnectorSeed_s1(self, args);
    case 1:
      return PyvtkImageConnectorSeed_vtkImageConnectorSeed_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkImageConnectorSeed");
  return nullptr;
}


static PyObject *
PyvtkImageConnectorSeed_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkImageConnectorSeed_vtkImageConnectorSeed(nullptr, args);
}

static void PyvtkImageConnectorSeed_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkImageConnectorSeed *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkImageConnectorSeed_Hash(PyObject *self)
{
#if PY_VERSION_HEX >= 0x020600B2
  return PyObject_HashNotImplemented(self);
#else
  char text[256];
  sprintf(text, "unhashable type: '%s'", Py_TYPE(self)->tp_name);
  PyErr_SetString(PyExc_TypeError, text);
  return -1;
#endif
}

static PyTypeObject PyvtkImageConnectorSeed_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkImagingMorphologicalPython.vtkImageConnectorSeed", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkImageConnectorSeed_Delete, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkImageConnectorSeed_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkImageConnectorSeed_Doc, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  nullptr, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  PyvtkImageConnectorSeed_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkImageConnectorSeed_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkImageConnectorSeed(*static_cast<const vtkImageConnectorSeed*>(obj));
  }
  return 0;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkImageConnectorSeed_TypeNew(); }

PyObject *PyvtkImageConnectorSeed_TypeNew()
{
  PyVTKSpecialType_Add(
    &PyvtkImageConnectorSeed_Type,
    PyvtkImageConnectorSeed_Methods,
    PyvtkImageConnectorSeed_vtkImageConnectorSeed_Methods,
    &PyvtkImageConnectorSeed_CCopy);

  PyTypeObject *pytype = &PyvtkImageConnectorSeed_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkImageConnector_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkImageConnector_Doc =
  "vtkImageConnector - Create a binary image of a sphere.\n\n"
  "Superclass: vtkObject\n\n"
  "vtkImageConnector is a helper class for connectivity filters. It is\n"
  "not meant to be used directly. It implements a stack and breadth\n"
  "first search necessary for some connectivity filters.  Filtered axes\n"
  "sets the dimensionality of the neighbor comparison, and cannot be\n"
  "more than three dimensions. As implemented, only voxels which share\n"
  "faces are considered neighbors.\n\n";


static PyObject *
PyvtkImageConnector_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImageConnector::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageConnector_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConnector *op = static_cast<vtkImageConnector *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageConnector::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageConnector_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImageConnector *tempr = vtkImageConnector::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageConnector_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConnector *op = static_cast<vtkImageConnector *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageConnector *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageConnector::NewInstance());

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
PyvtkImageConnector_RemoveAllSeeds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllSeeds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConnector *op = static_cast<vtkImageConnector *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllSeeds();
    }
    else
    {
      op->vtkImageConnector::RemoveAllSeeds();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageConnector_SetConnectedValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConnectedValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConnector *op = static_cast<vtkImageConnector *>(vp);

  unsigned char temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetConnectedValue(temp0);
    }
    else
    {
      op->vtkImageConnector::SetConnectedValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageConnector_GetConnectedValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConnectedValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConnector *op = static_cast<vtkImageConnector *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned char tempr = (ap.IsBound() ?
      op->GetConnectedValue() :
      op->vtkImageConnector::GetConnectedValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageConnector_SetUnconnectedValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUnconnectedValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConnector *op = static_cast<vtkImageConnector *>(vp);

  unsigned char temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUnconnectedValue(temp0);
    }
    else
    {
      op->vtkImageConnector::SetUnconnectedValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageConnector_GetUnconnectedValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUnconnectedValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConnector *op = static_cast<vtkImageConnector *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned char tempr = (ap.IsBound() ?
      op->GetUnconnectedValue() :
      op->vtkImageConnector::GetUnconnectedValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageConnector_MarkData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MarkData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConnector *op = static_cast<vtkImageConnector *>(vp);

  vtkImageData *temp0 = nullptr;
  int temp1;
  const size_t size2 = 6;
  int temp2[6];
  int save2[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkImageData") &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2))
  {
    ap.Save(temp2, save2, size2);

    if (ap.IsBound())
    {
      op->MarkData(temp0, temp1, temp2);
    }
    else
    {
      op->vtkImageConnector::MarkData(temp0, temp1, temp2);
    }

    if (ap.HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkImageConnector_Methods[] = {
  {"IsTypeOf", PyvtkImageConnector_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImageConnector_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImageConnector_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkImageConnector\nC++: static vtkImageConnector *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImageConnector_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkImageConnector\nC++: vtkImageConnector *NewInstance()\n\n"},
  {"RemoveAllSeeds", PyvtkImageConnector_RemoveAllSeeds, METH_VARARGS,
   "V.RemoveAllSeeds()\nC++: void RemoveAllSeeds()\n\n"},
  {"SetConnectedValue", PyvtkImageConnector_SetConnectedValue, METH_VARARGS,
   "V.SetConnectedValue(int)\nC++: virtual void SetConnectedValue(unsigned char _arg)\n\nValues used by the MarkRegion method\n"},
  {"GetConnectedValue", PyvtkImageConnector_GetConnectedValue, METH_VARARGS,
   "V.GetConnectedValue() -> int\nC++: virtual unsigned char GetConnectedValue()\n\nValues used by the MarkRegion method\n"},
  {"SetUnconnectedValue", PyvtkImageConnector_SetUnconnectedValue, METH_VARARGS,
   "V.SetUnconnectedValue(int)\nC++: virtual void SetUnconnectedValue(unsigned char _arg)\n\nValues used by the MarkRegion method\n"},
  {"GetUnconnectedValue", PyvtkImageConnector_GetUnconnectedValue, METH_VARARGS,
   "V.GetUnconnectedValue() -> int\nC++: virtual unsigned char GetUnconnectedValue()\n\nValues used by the MarkRegion method\n"},
  {"MarkData", PyvtkImageConnector_MarkData, METH_VARARGS,
   "V.MarkData(vtkImageData, int, [int, int, int, int, int, int])\nC++: void MarkData(vtkImageData *data, int dimensionality,\n    int ext[6])\n\nInput a data of 0's and \"UnconnectedValue\"s. Seeds of this object\nare used to find connected pixels.  All pixels connected to seeds\nare set to ConnectedValue.  The data has to be unsigned char.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkImageConnector_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkImagingMorphologicalPython.vtkImageConnector", // tp_name
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
  PyvtkImageConnector_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImageConnector_StaticNew()
{
  return vtkImageConnector::New();
}

PyObject *PyvtkImageConnector_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkImageConnector_Type, PyvtkImageConnector_Methods,
    "vtkImageConnector",
 &PyvtkImageConnector_StaticNew);

  PyTypeObject *pytype = &PyvtkImageConnector_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkObject_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkImageConnector(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImageConnectorSeed_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkImageConnectorSeed", o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkImageConnector_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImageConnector", o) != 0)
  {
    Py_DECREF(o);
  }

}

