// python wrapper for vtkPEnSightReader
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
#include "vtkPEnSightReader.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPEnSightReader(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPEnSightReader_ClassNew(); }

#ifndef DECLARED_PyvtkPGenericEnSightReader_ClassNew
extern "C" { PyObject *PyvtkPGenericEnSightReader_ClassNew(); }
#define DECLARED_PyvtkPGenericEnSightReader_ClassNew
#endif

static const char *PyvtkPEnSightReader_Doc =
  "vtkPEnSightReader - Superclass for EnSight file parallel readers\n\n"
  "Superclass: vtkPGenericEnSightReader\n\n"
  "\n"
  " This file has been developed as part of the CARRIOCAS (Distributed\n"
  " computation over ultra high optical internet network ) project (\n"
  " http://www.carriocas.org/index.php?lng=ang ) of the SYSTEM@TIC French ICT\n"
  " Cluster (http://www.systematic-paris-region.org/en/index.html) under the\n"
  " supervision of CEA (http://www.cea.fr) and EDF (http://www.edf.fr) by\n"
  " Oxalya (http://www.oxalya.com)\n\n"
  "  Copyright (c) CEA\n"
  " \n\n";

static PyTypeObject PyvtkPEnSightReader_ElementTypesList_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsDefaultPython.vtkPEnSightReader.ElementTypesList", // tp_name
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

PyObject *PyvtkPEnSightReader_ElementTypesList_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkPEnSightReader_ElementTypesList_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkPEnSightReader_ElementTypesList_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}

static PyTypeObject PyvtkPEnSightReader_VariableTypesList_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsDefaultPython.vtkPEnSightReader.VariableTypesList", // tp_name
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

PyObject *PyvtkPEnSightReader_VariableTypesList_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkPEnSightReader_VariableTypesList_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkPEnSightReader_VariableTypesList_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}

static PyTypeObject PyvtkPEnSightReader_SectionTypeList_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsDefaultPython.vtkPEnSightReader.SectionTypeList", // tp_name
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

PyObject *PyvtkPEnSightReader_SectionTypeList_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkPEnSightReader_SectionTypeList_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkPEnSightReader_SectionTypeList_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkPEnSightReader_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPEnSightReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPEnSightReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPEnSightReader *op = static_cast<vtkPEnSightReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPEnSightReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPEnSightReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPEnSightReader *tempr = vtkPEnSightReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPEnSightReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPEnSightReader *op = static_cast<vtkPEnSightReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPEnSightReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPEnSightReader::NewInstance());

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
PyvtkPEnSightReader_GetMeasuredFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMeasuredFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPEnSightReader *op = static_cast<vtkPEnSightReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetMeasuredFileName() :
      op->vtkPEnSightReader::GetMeasuredFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPEnSightReader_GetMatchFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMatchFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPEnSightReader *op = static_cast<vtkPEnSightReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetMatchFileName() :
      op->vtkPEnSightReader::GetMatchFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPEnSightReader_Methods[] = {
  {"IsTypeOf", PyvtkPEnSightReader_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPEnSightReader_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPEnSightReader_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPEnSightReader\nC++: static vtkPEnSightReader *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPEnSightReader_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPEnSightReader\nC++: vtkPEnSightReader *NewInstance()\n\n"},
  {"GetMeasuredFileName", PyvtkPEnSightReader_GetMeasuredFileName, METH_VARARGS,
   "V.GetMeasuredFileName() -> string\nC++: virtual char *GetMeasuredFileName()\n\nGet the Measured file name. Made public to allow access from apps\nrequiring detailed info about the Data contents\n"},
  {"GetMatchFileName", PyvtkPEnSightReader_GetMatchFileName, METH_VARARGS,
   "V.GetMatchFileName() -> string\nC++: virtual char *GetMatchFileName()\n\nGet the Match file name. Made public to allow access from apps\nrequiring detailed info about the Data contents\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPEnSightReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsDefaultPython.vtkPEnSightReader", // tp_name
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
  PyvtkPEnSightReader_Doc, // tp_doc
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

PyObject *PyvtkPEnSightReader_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPEnSightReader_Type, PyvtkPEnSightReader_Methods,
    "vtkPEnSightReader",
 nullptr);

  PyTypeObject *pytype = &PyvtkPEnSightReader_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPGenericEnSightReader_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkPEnSightReader_ElementTypesList_Type);
  PyvtkPEnSightReader_ElementTypesList_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkPEnSightReader_ElementTypesList_Type);

  o = (PyObject *)&PyvtkPEnSightReader_ElementTypesList_Type;
  if (PyDict_SetItemString(d, "ElementTypesList", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkPEnSightReader_VariableTypesList_Type);
  PyvtkPEnSightReader_VariableTypesList_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkPEnSightReader_VariableTypesList_Type);

  o = (PyObject *)&PyvtkPEnSightReader_VariableTypesList_Type;
  if (PyDict_SetItemString(d, "VariableTypesList", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkPEnSightReader_SectionTypeList_Type);
  PyvtkPEnSightReader_SectionTypeList_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkPEnSightReader_SectionTypeList_Type);

  o = (PyObject *)&PyvtkPEnSightReader_SectionTypeList_Type;
  if (PyDict_SetItemString(d, "SectionTypeList", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 18; c++)
  {
    typedef vtkPEnSightReader::ElementTypesList cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[18] = {
        { "POINT", vtkPEnSightReader::POINT },
        { "BAR2", vtkPEnSightReader::BAR2 },
        { "BAR3", vtkPEnSightReader::BAR3 },
        { "NSIDED", vtkPEnSightReader::NSIDED },
        { "TRIA3", vtkPEnSightReader::TRIA3 },
        { "TRIA6", vtkPEnSightReader::TRIA6 },
        { "QUAD4", vtkPEnSightReader::QUAD4 },
        { "QUAD8", vtkPEnSightReader::QUAD8 },
        { "NFACED", vtkPEnSightReader::NFACED },
        { "TETRA4", vtkPEnSightReader::TETRA4 },
        { "TETRA10", vtkPEnSightReader::TETRA10 },
        { "PYRAMID5", vtkPEnSightReader::PYRAMID5 },
        { "PYRAMID13", vtkPEnSightReader::PYRAMID13 },
        { "HEXA8", vtkPEnSightReader::HEXA8 },
        { "HEXA20", vtkPEnSightReader::HEXA20 },
        { "PENTA6", vtkPEnSightReader::PENTA6 },
        { "PENTA15", vtkPEnSightReader::PENTA15 },
        { "NUMBER_OF_ELEMENT_TYPES", vtkPEnSightReader::NUMBER_OF_ELEMENT_TYPES },
      };

    o = PyvtkPEnSightReader_ElementTypesList_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 12; c++)
  {
    typedef vtkPEnSightReader::VariableTypesList cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[12] = {
        { "SCALAR_PER_NODE", vtkPEnSightReader::SCALAR_PER_NODE },
        { "VECTOR_PER_NODE", vtkPEnSightReader::VECTOR_PER_NODE },
        { "TENSOR_SYMM_PER_NODE", vtkPEnSightReader::TENSOR_SYMM_PER_NODE },
        { "SCALAR_PER_ELEMENT", vtkPEnSightReader::SCALAR_PER_ELEMENT },
        { "VECTOR_PER_ELEMENT", vtkPEnSightReader::VECTOR_PER_ELEMENT },
        { "TENSOR_SYMM_PER_ELEMENT", vtkPEnSightReader::TENSOR_SYMM_PER_ELEMENT },
        { "SCALAR_PER_MEASURED_NODE", vtkPEnSightReader::SCALAR_PER_MEASURED_NODE },
        { "VECTOR_PER_MEASURED_NODE", vtkPEnSightReader::VECTOR_PER_MEASURED_NODE },
        { "COMPLEX_SCALAR_PER_NODE", vtkPEnSightReader::COMPLEX_SCALAR_PER_NODE },
        { "COMPLEX_VECTOR_PER_NODE", vtkPEnSightReader::COMPLEX_VECTOR_PER_NODE },
        { "COMPLEX_SCALAR_PER_ELEMENT", vtkPEnSightReader::COMPLEX_SCALAR_PER_ELEMENT },
        { "COMPLEX_VECTOR_PER_ELEMENT", vtkPEnSightReader::COMPLEX_VECTOR_PER_ELEMENT },
      };

    o = PyvtkPEnSightReader_VariableTypesList_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 3; c++)
  {
    typedef vtkPEnSightReader::SectionTypeList cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[3] = {
        { "COORDINATES", vtkPEnSightReader::COORDINATES },
        { "BLOCK", vtkPEnSightReader::BLOCK },
        { "ELEMENT", vtkPEnSightReader::ELEMENT },
      };

    o = PyvtkPEnSightReader_SectionTypeList_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPEnSightReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPEnSightReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPEnSightReader", o) != 0)
  {
    Py_DECREF(o);
  }

}

