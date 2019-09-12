// python wrapper for vtkImageReader
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
#include "vtkImageReader.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImageReader(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkImageReader_ClassNew(); }

#ifndef DECLARED_PyvtkImageReader2_ClassNew
extern "C" { PyObject *PyvtkImageReader2_ClassNew(); }
#define DECLARED_PyvtkImageReader2_ClassNew
#endif

static const char *PyvtkImageReader_Doc =
  "vtkImageReader - Superclass of transformable binary file readers.\n\n"
  "Superclass: vtkImageReader2\n\n"
  "vtkImageReader provides methods needed to read a region from a file.\n"
  "It supports both transforms and masks on the input data, but as a\n"
  "result is more complicated and slower than its parent class\n"
  "vtkImageReader2.\n\n"
  "@sa\n"
  "vtkBMPReader vtkPNMReader vtkTIFFReader\n\n";


static PyObject *
PyvtkImageReader_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImageReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader *op = static_cast<vtkImageReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImageReader *tempr = vtkImageReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader *op = static_cast<vtkImageReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageReader::NewInstance());

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
PyvtkImageReader_SetDataVOI_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataVOI");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader *op = static_cast<vtkImageReader *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  int temp5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
  {
    if (ap.IsBound())
    {
      op->SetDataVOI(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkImageReader::SetDataVOI(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageReader_SetDataVOI_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataVOI");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader *op = static_cast<vtkImageReader *>(vp);

  const size_t size0 = 6;
  int temp0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetDataVOI(temp0);
    }
    else
    {
      op->vtkImageReader::SetDataVOI(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageReader_SetDataVOI(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkImageReader_SetDataVOI_s1(self, args);
    case 1:
      return PyvtkImageReader_SetDataVOI_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetDataVOI");
  return nullptr;
}



static PyObject *
PyvtkImageReader_GetDataVOI(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataVOI");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader *op = static_cast<vtkImageReader *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetDataVOI() :
      op->vtkImageReader::GetDataVOI());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImageReader_GetDataMask(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataMask");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader *op = static_cast<vtkImageReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long long tempr = (ap.IsBound() ?
      op->GetDataMask() :
      op->vtkImageReader::GetDataMask());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageReader_SetDataMask(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataMask");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader *op = static_cast<vtkImageReader *>(vp);

  unsigned long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDataMask(temp0);
    }
    else
    {
      op->vtkImageReader::SetDataMask(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageReader_SetTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader *op = static_cast<vtkImageReader *>(vp);

  vtkTransform *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTransform"))
  {
    if (ap.IsBound())
    {
      op->SetTransform(temp0);
    }
    else
    {
      op->vtkImageReader::SetTransform(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageReader_GetTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader *op = static_cast<vtkImageReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTransform *tempr = (ap.IsBound() ?
      op->GetTransform() :
      op->vtkImageReader::GetTransform());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageReader_ComputeInverseTransformedExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeInverseTransformedExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader *op = static_cast<vtkImageReader *>(vp);

  const size_t size0 = 6;
  int temp0[6];
  int save0[6];
  const size_t size1 = 6;
  int temp1[6];
  int save1[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp0, save0, size0);
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->ComputeInverseTransformedExtent(temp0, temp1);
    }
    else
    {
      op->vtkImageReader::ComputeInverseTransformedExtent(temp0, temp1);
    }

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
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
PyvtkImageReader_ComputeInverseTransformedIncrements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeInverseTransformedIncrements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader *op = static_cast<vtkImageReader *>(vp);

  const size_t size0 = 3;
  vtkIdType temp0[3];
  vtkIdType save0[3];
  const size_t size1 = 3;
  vtkIdType temp1[3];
  vtkIdType save1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp0, save0, size0);
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->ComputeInverseTransformedIncrements(temp0, temp1);
    }
    else
    {
      op->vtkImageReader::ComputeInverseTransformedIncrements(temp0, temp1);
    }

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
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
PyvtkImageReader_OpenAndSeekFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OpenAndSeekFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader *op = static_cast<vtkImageReader *>(vp);

  const size_t size0 = 6;
  int temp0[6];
  int save0[6];
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
  {
    ap.Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->OpenAndSeekFile(temp0, temp1) :
      op->vtkImageReader::OpenAndSeekFile(temp0, temp1));

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageReader_SetScalarArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader *op = static_cast<vtkImageReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScalarArrayName(temp0);
    }
    else
    {
      op->vtkImageReader::SetScalarArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageReader_GetScalarArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader *op = static_cast<vtkImageReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetScalarArrayName() :
      op->vtkImageReader::GetScalarArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkImageReader_Methods[] = {
  {"IsTypeOf", PyvtkImageReader_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImageReader_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImageReader_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkImageReader\nC++: static vtkImageReader *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImageReader_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkImageReader\nC++: vtkImageReader *NewInstance()\n\n"},
  {"SetDataVOI", PyvtkImageReader_SetDataVOI, METH_VARARGS,
   "V.SetDataVOI(int, int, int, int, int, int)\nC++: void SetDataVOI(int, int, int, int, int, int)\nV.SetDataVOI((int, int, int, int, int, int))\nC++: void SetDataVOI(int a[6])\n\n"},
  {"GetDataVOI", PyvtkImageReader_GetDataVOI, METH_VARARGS,
   "V.GetDataVOI() -> (int, int, int, int, int, int)\nC++: int *GetDataVOI()\n\n"},
  {"GetDataMask", PyvtkImageReader_GetDataMask, METH_VARARGS,
   "V.GetDataMask() -> int\nC++: virtual vtkTypeUInt64 GetDataMask()\n\nSet/Get the Data mask.  The data mask is a simply integer whose\nbits are treated as a mask to the bits read from disk.  That is,\nthe data mask is bitwise-and'ed to the numbers read from disk. \nThis ivar is stored as 64 bits, the largest mask you will need. \nThe mask will be truncated to the data size required to be read\n(using the least significant bits).\n"},
  {"SetDataMask", PyvtkImageReader_SetDataMask, METH_VARARGS,
   "V.SetDataMask(int)\nC++: virtual void SetDataMask(vtkTypeUInt64 _arg)\n\nSet/Get the Data mask.  The data mask is a simply integer whose\nbits are treated as a mask to the bits read from disk.  That is,\nthe data mask is bitwise-and'ed to the numbers read from disk. \nThis ivar is stored as 64 bits, the largest mask you will need. \nThe mask will be truncated to the data size required to be read\n(using the least significant bits).\n"},
  {"SetTransform", PyvtkImageReader_SetTransform, METH_VARARGS,
   "V.SetTransform(vtkTransform)\nC++: virtual void SetTransform(vtkTransform *)\n\nSet/Get transformation matrix to transform the data from slice\nspace into world space. This matrix must be a permutation matrix.\nTo qualify, the sums of the rows must be + or - 1.\n"},
  {"GetTransform", PyvtkImageReader_GetTransform, METH_VARARGS,
   "V.GetTransform() -> vtkTransform\nC++: virtual vtkTransform *GetTransform()\n\nSet/Get transformation matrix to transform the data from slice\nspace into world space. This matrix must be a permutation matrix.\nTo qualify, the sums of the rows must be + or - 1.\n"},
  {"ComputeInverseTransformedExtent", PyvtkImageReader_ComputeInverseTransformedExtent, METH_VARARGS,
   "V.ComputeInverseTransformedExtent([int, int, int, int, int, int],\n    [int, int, int, int, int, int])\nC++: void ComputeInverseTransformedExtent(int inExtent[6],\n    int outExtent[6])\n\n"},
  {"ComputeInverseTransformedIncrements", PyvtkImageReader_ComputeInverseTransformedIncrements, METH_VARARGS,
   "V.ComputeInverseTransformedIncrements([int, int, int], [int, int,\n    int])\nC++: void ComputeInverseTransformedIncrements(vtkIdType inIncr[3],\n     vtkIdType outIncr[3])\n\n"},
  {"OpenAndSeekFile", PyvtkImageReader_OpenAndSeekFile, METH_VARARGS,
   "V.OpenAndSeekFile([int, int, int, int, int, int], int) -> int\nC++: int OpenAndSeekFile(int extent[6], int slice)\n\n"},
  {"SetScalarArrayName", PyvtkImageReader_SetScalarArrayName, METH_VARARGS,
   "V.SetScalarArrayName(string)\nC++: virtual void SetScalarArrayName(const char *_arg)\n\nSet/get the scalar array name for this data set.\n"},
  {"GetScalarArrayName", PyvtkImageReader_GetScalarArrayName, METH_VARARGS,
   "V.GetScalarArrayName() -> string\nC++: virtual char *GetScalarArrayName()\n\nSet/get the scalar array name for this data set.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkImageReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOImagePython.vtkImageReader", // tp_name
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
  PyvtkImageReader_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImageReader_StaticNew()
{
  return vtkImageReader::New();
}

PyObject *PyvtkImageReader_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkImageReader_Type, PyvtkImageReader_Methods,
    "vtkImageReader",
 &PyvtkImageReader_StaticNew);

  PyTypeObject *pytype = &PyvtkImageReader_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkImageReader2_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkImageReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImageReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImageReader", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 2; c++)
  {
    static const struct { const char *name; int value; }
      constants[2] = {
        { "VTK_FILE_BYTE_ORDER_BIG_ENDIAN", 0 },
        { "VTK_FILE_BYTE_ORDER_LITTLE_ENDIAN", 1 },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

