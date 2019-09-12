// python wrapper for vtkEnSightReader
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
#include "vtkEnSightReader.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkEnSightReader(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkEnSightReader_ClassNew(); }

#ifndef DECLARED_PyvtkGenericEnSightReader_ClassNew
extern "C" { PyObject *PyvtkGenericEnSightReader_ClassNew(); }
#define DECLARED_PyvtkGenericEnSightReader_ClassNew
#endif

static const char *PyvtkEnSightReader_Doc =
  "vtkEnSightReader - superclass for EnSight file readers\n\n"
  "Superclass: vtkGenericEnSightReader\n\n"
;

static PyTypeObject PyvtkEnSightReader_ElementTypesList_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOEnSightPython.vtkEnSightReader.ElementTypesList", // tp_name
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

PyObject *PyvtkEnSightReader_ElementTypesList_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkEnSightReader_ElementTypesList_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkEnSightReader_ElementTypesList_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}

static PyTypeObject PyvtkEnSightReader_VariableTypesList_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOEnSightPython.vtkEnSightReader.VariableTypesList", // tp_name
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

PyObject *PyvtkEnSightReader_VariableTypesList_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkEnSightReader_VariableTypesList_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkEnSightReader_VariableTypesList_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}

static PyTypeObject PyvtkEnSightReader_SectionTypeList_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOEnSightPython.vtkEnSightReader.SectionTypeList", // tp_name
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

PyObject *PyvtkEnSightReader_SectionTypeList_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkEnSightReader_SectionTypeList_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkEnSightReader_SectionTypeList_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkEnSightReader_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkEnSightReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEnSightReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightReader *op = static_cast<vtkEnSightReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkEnSightReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEnSightReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkEnSightReader *tempr = vtkEnSightReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEnSightReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightReader *op = static_cast<vtkEnSightReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkEnSightReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkEnSightReader::NewInstance());

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
PyvtkEnSightReader_GetMeasuredFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMeasuredFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightReader *op = static_cast<vtkEnSightReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetMeasuredFileName() :
      op->vtkEnSightReader::GetMeasuredFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEnSightReader_GetMatchFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMatchFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightReader *op = static_cast<vtkEnSightReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetMatchFileName() :
      op->vtkEnSightReader::GetMatchFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkEnSightReader_Methods[] = {
  {"IsTypeOf", PyvtkEnSightReader_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkEnSightReader_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkEnSightReader_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkEnSightReader\nC++: static vtkEnSightReader *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkEnSightReader_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkEnSightReader\nC++: vtkEnSightReader *NewInstance()\n\n"},
  {"GetMeasuredFileName", PyvtkEnSightReader_GetMeasuredFileName, METH_VARARGS,
   "V.GetMeasuredFileName() -> string\nC++: virtual char *GetMeasuredFileName()\n\nGet the Measured file name. Made public to allow access from apps\nrequiring detailed info about the Data contents\n"},
  {"GetMatchFileName", PyvtkEnSightReader_GetMatchFileName, METH_VARARGS,
   "V.GetMatchFileName() -> string\nC++: virtual char *GetMatchFileName()\n\nGet the Match file name. Made public to allow access from apps\nrequiring detailed info about the Data contents\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkEnSightReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOEnSightPython.vtkEnSightReader", // tp_name
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
  PyvtkEnSightReader_Doc, // tp_doc
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

PyObject *PyvtkEnSightReader_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkEnSightReader_Type, PyvtkEnSightReader_Methods,
    "vtkEnSightReader",
 nullptr);

  PyTypeObject *pytype = &PyvtkEnSightReader_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkGenericEnSightReader_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkEnSightReader_ElementTypesList_Type);
  PyvtkEnSightReader_ElementTypesList_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkEnSightReader_ElementTypesList_Type);

  o = (PyObject *)&PyvtkEnSightReader_ElementTypesList_Type;
  if (PyDict_SetItemString(d, "ElementTypesList", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkEnSightReader_VariableTypesList_Type);
  PyvtkEnSightReader_VariableTypesList_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkEnSightReader_VariableTypesList_Type);

  o = (PyObject *)&PyvtkEnSightReader_VariableTypesList_Type;
  if (PyDict_SetItemString(d, "VariableTypesList", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkEnSightReader_SectionTypeList_Type);
  PyvtkEnSightReader_SectionTypeList_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkEnSightReader_SectionTypeList_Type);

  o = (PyObject *)&PyvtkEnSightReader_SectionTypeList_Type;
  if (PyDict_SetItemString(d, "SectionTypeList", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 18; c++)
  {
    typedef vtkEnSightReader::ElementTypesList cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[18] = {
        { "POINT", vtkEnSightReader::POINT },
        { "BAR2", vtkEnSightReader::BAR2 },
        { "BAR3", vtkEnSightReader::BAR3 },
        { "NSIDED", vtkEnSightReader::NSIDED },
        { "TRIA3", vtkEnSightReader::TRIA3 },
        { "TRIA6", vtkEnSightReader::TRIA6 },
        { "QUAD4", vtkEnSightReader::QUAD4 },
        { "QUAD8", vtkEnSightReader::QUAD8 },
        { "NFACED", vtkEnSightReader::NFACED },
        { "TETRA4", vtkEnSightReader::TETRA4 },
        { "TETRA10", vtkEnSightReader::TETRA10 },
        { "PYRAMID5", vtkEnSightReader::PYRAMID5 },
        { "PYRAMID13", vtkEnSightReader::PYRAMID13 },
        { "HEXA8", vtkEnSightReader::HEXA8 },
        { "HEXA20", vtkEnSightReader::HEXA20 },
        { "PENTA6", vtkEnSightReader::PENTA6 },
        { "PENTA15", vtkEnSightReader::PENTA15 },
        { "NUMBER_OF_ELEMENT_TYPES", vtkEnSightReader::NUMBER_OF_ELEMENT_TYPES },
      };

    o = PyvtkEnSightReader_ElementTypesList_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 12; c++)
  {
    typedef vtkEnSightReader::VariableTypesList cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[12] = {
        { "SCALAR_PER_NODE", vtkEnSightReader::SCALAR_PER_NODE },
        { "VECTOR_PER_NODE", vtkEnSightReader::VECTOR_PER_NODE },
        { "TENSOR_SYMM_PER_NODE", vtkEnSightReader::TENSOR_SYMM_PER_NODE },
        { "SCALAR_PER_ELEMENT", vtkEnSightReader::SCALAR_PER_ELEMENT },
        { "VECTOR_PER_ELEMENT", vtkEnSightReader::VECTOR_PER_ELEMENT },
        { "TENSOR_SYMM_PER_ELEMENT", vtkEnSightReader::TENSOR_SYMM_PER_ELEMENT },
        { "SCALAR_PER_MEASURED_NODE", vtkEnSightReader::SCALAR_PER_MEASURED_NODE },
        { "VECTOR_PER_MEASURED_NODE", vtkEnSightReader::VECTOR_PER_MEASURED_NODE },
        { "COMPLEX_SCALAR_PER_NODE", vtkEnSightReader::COMPLEX_SCALAR_PER_NODE },
        { "COMPLEX_VECTOR_PER_NODE", vtkEnSightReader::COMPLEX_VECTOR_PER_NODE },
        { "COMPLEX_SCALAR_PER_ELEMENT", vtkEnSightReader::COMPLEX_SCALAR_PER_ELEMENT },
        { "COMPLEX_VECTOR_PER_ELEMENT", vtkEnSightReader::COMPLEX_VECTOR_PER_ELEMENT },
      };

    o = PyvtkEnSightReader_VariableTypesList_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 3; c++)
  {
    typedef vtkEnSightReader::SectionTypeList cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[3] = {
        { "COORDINATES", vtkEnSightReader::COORDINATES },
        { "BLOCK", vtkEnSightReader::BLOCK },
        { "ELEMENT", vtkEnSightReader::ELEMENT },
      };

    o = PyvtkEnSightReader_SectionTypeList_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkEnSightReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkEnSightReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkEnSightReader", o) != 0)
  {
    Py_DECREF(o);
  }

}

