// python wrapper for vtkPeriodicTable
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
#include "vtkColor.h"
#include "vtkPeriodicTable.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPeriodicTable(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPeriodicTable_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkPeriodicTable_Doc =
  "vtkPeriodicTable - Access to information about the elements.\n\n"
  "Superclass: vtkObject\n\n"
  "Sourced from the Blue Obelisk Data Repository\n\n"
  "@sa\n"
  "vtkBlueObeliskData vtkBlueObeliskDataParser\n\n";


static PyObject *
PyvtkPeriodicTable_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPeriodicTable::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPeriodicTable_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPeriodicTable *op = static_cast<vtkPeriodicTable *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPeriodicTable::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPeriodicTable_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPeriodicTable *tempr = vtkPeriodicTable::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPeriodicTable_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPeriodicTable *op = static_cast<vtkPeriodicTable *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPeriodicTable *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPeriodicTable::NewInstance());

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
PyvtkPeriodicTable_GetBlueObeliskData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlueObeliskData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPeriodicTable *op = static_cast<vtkPeriodicTable *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkBlueObeliskData *tempr = (ap.IsBound() ?
      op->GetBlueObeliskData() :
      op->vtkPeriodicTable::GetBlueObeliskData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPeriodicTable_GetNumberOfElements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPeriodicTable *op = static_cast<vtkPeriodicTable *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned short tempr = (ap.IsBound() ?
      op->GetNumberOfElements() :
      op->vtkPeriodicTable::GetNumberOfElements());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPeriodicTable_GetSymbol(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSymbol");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPeriodicTable *op = static_cast<vtkPeriodicTable *>(vp);

  unsigned short temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetSymbol(temp0) :
      op->vtkPeriodicTable::GetSymbol(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPeriodicTable_GetElementName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetElementName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPeriodicTable *op = static_cast<vtkPeriodicTable *>(vp);

  unsigned short temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetElementName(temp0) :
      op->vtkPeriodicTable::GetElementName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPeriodicTable_GetAtomicNumber(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAtomicNumber");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPeriodicTable *op = static_cast<vtkPeriodicTable *>(vp);

  vtkStdString temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    unsigned short tempr = (ap.IsBound() ?
      op->GetAtomicNumber(temp0) :
      op->vtkPeriodicTable::GetAtomicNumber(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPeriodicTable_GetCovalentRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCovalentRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPeriodicTable *op = static_cast<vtkPeriodicTable *>(vp);

  unsigned short temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    float tempr = (ap.IsBound() ?
      op->GetCovalentRadius(temp0) :
      op->vtkPeriodicTable::GetCovalentRadius(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPeriodicTable_GetVDWRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVDWRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPeriodicTable *op = static_cast<vtkPeriodicTable *>(vp);

  unsigned short temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    float tempr = (ap.IsBound() ?
      op->GetVDWRadius(temp0) :
      op->vtkPeriodicTable::GetVDWRadius(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPeriodicTable_GetMaxVDWRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxVDWRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPeriodicTable *op = static_cast<vtkPeriodicTable *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetMaxVDWRadius() :
      op->vtkPeriodicTable::GetMaxVDWRadius());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPeriodicTable_GetDefaultLUT(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultLUT");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPeriodicTable *op = static_cast<vtkPeriodicTable *>(vp);

  vtkLookupTable *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkLookupTable"))
  {
    if (ap.IsBound())
    {
      op->GetDefaultLUT(temp0);
    }
    else
    {
      op->vtkPeriodicTable::GetDefaultLUT(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPeriodicTable_GetDefaultRGBTuple_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultRGBTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPeriodicTable *op = static_cast<vtkPeriodicTable *>(vp);

  unsigned short temp0;
  const size_t size1 = 3;
  float temp1[3];
  float save1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->GetDefaultRGBTuple(temp0, temp1);
    }
    else
    {
      op->vtkPeriodicTable::GetDefaultRGBTuple(temp0, temp1);
    }

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPeriodicTable_GetDefaultRGBTuple_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultRGBTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPeriodicTable *op = static_cast<vtkPeriodicTable *>(vp);

  unsigned short temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkColor3f tempr = (ap.IsBound() ?
      op->GetDefaultRGBTuple(temp0) :
      op->vtkPeriodicTable::GetDefaultRGBTuple(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkColor3f");
    }
  }

  return result;
}

static PyObject *
PyvtkPeriodicTable_GetDefaultRGBTuple(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkPeriodicTable_GetDefaultRGBTuple_s1(self, args);
    case 1:
      return PyvtkPeriodicTable_GetDefaultRGBTuple_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetDefaultRGBTuple");
  return nullptr;
}


static PyMethodDef PyvtkPeriodicTable_Methods[] = {
  {"IsTypeOf", PyvtkPeriodicTable_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPeriodicTable_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPeriodicTable_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPeriodicTable\nC++: static vtkPeriodicTable *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPeriodicTable_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPeriodicTable\nC++: vtkPeriodicTable *NewInstance()\n\n"},
  {"GetBlueObeliskData", PyvtkPeriodicTable_GetBlueObeliskData, METH_VARARGS,
   "V.GetBlueObeliskData() -> vtkBlueObeliskData\nC++: virtual vtkBlueObeliskData *GetBlueObeliskData()\n\nAccess the static vtkBlueObeliskData object for raw access to\nBODR data.\n"},
  {"GetNumberOfElements", PyvtkPeriodicTable_GetNumberOfElements, METH_VARARGS,
   "V.GetNumberOfElements() -> int\nC++: unsigned short GetNumberOfElements()\n\nReturns the number of elements in the periodic table.\n"},
  {"GetSymbol", PyvtkPeriodicTable_GetSymbol, METH_VARARGS,
   "V.GetSymbol(int) -> string\nC++: const char *GetSymbol(unsigned short atomicNum)\n\nGiven an atomic number, returns the symbol associated with the\nelement\n"},
  {"GetElementName", PyvtkPeriodicTable_GetElementName, METH_VARARGS,
   "V.GetElementName(int) -> string\nC++: const char *GetElementName(unsigned short atomicNum)\n\nGiven an atomic number, returns the name of the element\n"},
  {"GetAtomicNumber", PyvtkPeriodicTable_GetAtomicNumber, METH_VARARGS,
   "V.GetAtomicNumber(string) -> int\nC++: unsigned short GetAtomicNumber(const vtkStdString &str)\n\nGiven a case-insensitive string that contains the symbol or name\nof an element, return the corresponding atomic number.\n"},
  {"GetCovalentRadius", PyvtkPeriodicTable_GetCovalentRadius, METH_VARARGS,
   "V.GetCovalentRadius(int) -> float\nC++: float GetCovalentRadius(unsigned short atomicNum)\n\nGiven an atomic number, return the covalent radius of the atom\n"},
  {"GetVDWRadius", PyvtkPeriodicTable_GetVDWRadius, METH_VARARGS,
   "V.GetVDWRadius(int) -> float\nC++: float GetVDWRadius(unsigned short atomicNum)\n\nGiven an atomic number, returns the van der Waals radius of the\natom\n"},
  {"GetMaxVDWRadius", PyvtkPeriodicTable_GetMaxVDWRadius, METH_VARARGS,
   "V.GetMaxVDWRadius() -> float\nC++: float GetMaxVDWRadius()\n\nGiven an atomic number, returns the van der Waals radius of the\natom\n"},
  {"GetDefaultLUT", PyvtkPeriodicTable_GetDefaultLUT, METH_VARARGS,
   "V.GetDefaultLUT(vtkLookupTable)\nC++: void GetDefaultLUT(vtkLookupTable *)\n\nFill the given vtkLookupTable to map atomic numbers to the\nfamiliar RGB tuples provided by the Blue Obelisk Data Repository\n"},
  {"GetDefaultRGBTuple", PyvtkPeriodicTable_GetDefaultRGBTuple, METH_VARARGS,
   "V.GetDefaultRGBTuple(int, [float, float, float])\nC++: void GetDefaultRGBTuple(unsigned short atomicNum,\n    float rgb[3])\nV.GetDefaultRGBTuple(int) -> vtkColor3f\nC++: vtkColor3f GetDefaultRGBTuple(unsigned short atomicNum)\n\nGiven an atomic number, return the familiar RGB tuple provided by\nthe Blue Obelisk Data Repository\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPeriodicTable_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkDomainsChemistryPython.vtkPeriodicTable", // tp_name
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
  PyvtkPeriodicTable_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPeriodicTable_StaticNew()
{
  return vtkPeriodicTable::New();
}

PyObject *PyvtkPeriodicTable_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPeriodicTable_Type, PyvtkPeriodicTable_Methods,
    "vtkPeriodicTable",
 &PyvtkPeriodicTable_StaticNew);

  PyTypeObject *pytype = &PyvtkPeriodicTable_Type;

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

void PyVTKAddFile_vtkPeriodicTable(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPeriodicTable_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPeriodicTable", o) != 0)
  {
    Py_DECREF(o);
  }

}

