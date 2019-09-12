// python wrapper for vtkNIFTIImageHeader
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
#include "vtkNIFTIImageHeader.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkNIFTIImageHeader(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkNIFTIImageHeader_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkNIFTIImageHeader_Doc =
  "vtkNIFTIImageHeader - Store NIfTI header information.\n\n"
  "Superclass: vtkObject\n\n"
  "This class stores the header of a NIfTI file in a VTK-friendly\n"
  "format. By using this class, it is possible to specify the header\n"
  "information that will be stored in a file written by the\n"
  "vtkNIFTIImageWriter.  Note that the SForm and QForm orientation\n"
  "information in this class will be ignored by the writer if an SForm\n"
  "and QForm have been explicitly set via the writer's SetSForm and\n"
  "SetQForm methods.  Also note that all info like Dim, PixDim,\n"
  "DataType, etc. will be ignored by the writer because this information\n"
  "must instead be taken from the vtkImageData information.  Finally,\n"
  "note that the vtkNIFTIImageWriter will ignore the Descrip field,\n"
  "since it has its own SetDescription method.@par Thanks: This class\n"
  "was contributed to VTK by the Calgary Image Processing and Analysis\n"
  "Centre (CIPAC).\n"
  "@sa\n"
  "vtkNIFTIImageReader, vtkNIFTIImageWriter\n\n";

static PyTypeObject PyvtkNIFTIImageHeader_IntentCodeEnum_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOImagePython.vtkNIFTIImageHeader.IntentCodeEnum", // tp_name
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

PyObject *PyvtkNIFTIImageHeader_IntentCodeEnum_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkNIFTIImageHeader_IntentCodeEnum_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkNIFTIImageHeader_IntentCodeEnum_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}

static PyTypeObject PyvtkNIFTIImageHeader_XFormCodeEnum_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOImagePython.vtkNIFTIImageHeader.XFormCodeEnum", // tp_name
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

PyObject *PyvtkNIFTIImageHeader_XFormCodeEnum_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkNIFTIImageHeader_XFormCodeEnum_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkNIFTIImageHeader_XFormCodeEnum_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}

static PyTypeObject PyvtkNIFTIImageHeader_SliceCodeEnum_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOImagePython.vtkNIFTIImageHeader.SliceCodeEnum", // tp_name
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

PyObject *PyvtkNIFTIImageHeader_SliceCodeEnum_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkNIFTIImageHeader_SliceCodeEnum_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkNIFTIImageHeader_SliceCodeEnum_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}

static PyTypeObject PyvtkNIFTIImageHeader_UnitsXYZTEnum_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOImagePython.vtkNIFTIImageHeader.UnitsXYZTEnum", // tp_name
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

PyObject *PyvtkNIFTIImageHeader_UnitsXYZTEnum_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkNIFTIImageHeader_UnitsXYZTEnum_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkNIFTIImageHeader_UnitsXYZTEnum_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}

static PyTypeObject PyvtkNIFTIImageHeader_DataTypeEnum_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOImagePython.vtkNIFTIImageHeader.DataTypeEnum", // tp_name
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

PyObject *PyvtkNIFTIImageHeader_DataTypeEnum_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkNIFTIImageHeader_DataTypeEnum_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkNIFTIImageHeader_DataTypeEnum_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}

static PyTypeObject PyvtkNIFTIImageHeader_HeaderSizeEnum_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOImagePython.vtkNIFTIImageHeader.HeaderSizeEnum", // tp_name
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

PyObject *PyvtkNIFTIImageHeader_HeaderSizeEnum_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkNIFTIImageHeader_HeaderSizeEnum_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkNIFTIImageHeader_HeaderSizeEnum_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkNIFTIImageHeader_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkNIFTIImageHeader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNIFTIImageHeader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageHeader *op = static_cast<vtkNIFTIImageHeader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkNIFTIImageHeader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNIFTIImageHeader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkNIFTIImageHeader *tempr = vtkNIFTIImageHeader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNIFTIImageHeader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageHeader *op = static_cast<vtkNIFTIImageHeader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkNIFTIImageHeader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkNIFTIImageHeader::NewInstance());

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
PyvtkNIFTIImageHeader_GetMagic(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMagic");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageHeader *op = static_cast<vtkNIFTIImageHeader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetMagic() :
      op->vtkNIFTIImageHeader::GetMagic());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNIFTIImageHeader_GetVoxOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVoxOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageHeader *op = static_cast<vtkNIFTIImageHeader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetVoxOffset() :
      op->vtkNIFTIImageHeader::GetVoxOffset());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNIFTIImageHeader_GetDataType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageHeader *op = static_cast<vtkNIFTIImageHeader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataType() :
      op->vtkNIFTIImageHeader::GetDataType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNIFTIImageHeader_GetBitPix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBitPix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageHeader *op = static_cast<vtkNIFTIImageHeader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBitPix() :
      op->vtkNIFTIImageHeader::GetBitPix());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNIFTIImageHeader_GetDim(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDim");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageHeader *op = static_cast<vtkNIFTIImageHeader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetDim(temp0) :
      op->vtkNIFTIImageHeader::GetDim(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNIFTIImageHeader_GetPixDim(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPixDim");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageHeader *op = static_cast<vtkNIFTIImageHeader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double tempr = (ap.IsBound() ?
      op->GetPixDim(temp0) :
      op->vtkNIFTIImageHeader::GetPixDim(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNIFTIImageHeader_SetIntentCode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntentCode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageHeader *op = static_cast<vtkNIFTIImageHeader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetIntentCode(temp0);
    }
    else
    {
      op->vtkNIFTIImageHeader::SetIntentCode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkNIFTIImageHeader_GetIntentCode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntentCode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageHeader *op = static_cast<vtkNIFTIImageHeader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetIntentCode() :
      op->vtkNIFTIImageHeader::GetIntentCode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNIFTIImageHeader_SetIntentName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntentName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageHeader *op = static_cast<vtkNIFTIImageHeader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetIntentName(temp0);
    }
    else
    {
      op->vtkNIFTIImageHeader::SetIntentName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkNIFTIImageHeader_GetIntentName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntentName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageHeader *op = static_cast<vtkNIFTIImageHeader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetIntentName() :
      op->vtkNIFTIImageHeader::GetIntentName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNIFTIImageHeader_SetIntentP1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntentP1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageHeader *op = static_cast<vtkNIFTIImageHeader *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetIntentP1(temp0);
    }
    else
    {
      op->vtkNIFTIImageHeader::SetIntentP1(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkNIFTIImageHeader_GetIntentP1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntentP1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageHeader *op = static_cast<vtkNIFTIImageHeader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetIntentP1() :
      op->vtkNIFTIImageHeader::GetIntentP1());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNIFTIImageHeader_SetIntentP2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntentP2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageHeader *op = static_cast<vtkNIFTIImageHeader *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetIntentP2(temp0);
    }
    else
    {
      op->vtkNIFTIImageHeader::SetIntentP2(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkNIFTIImageHeader_GetIntentP2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntentP2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageHeader *op = static_cast<vtkNIFTIImageHeader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetIntentP2() :
      op->vtkNIFTIImageHeader::GetIntentP2());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNIFTIImageHeader_SetIntentP3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntentP3");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageHeader *op = static_cast<vtkNIFTIImageHeader *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetIntentP3(temp0);
    }
    else
    {
      op->vtkNIFTIImageHeader::SetIntentP3(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkNIFTIImageHeader_GetIntentP3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntentP3");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageHeader *op = static_cast<vtkNIFTIImageHeader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetIntentP3() :
      op->vtkNIFTIImageHeader::GetIntentP3());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNIFTIImageHeader_SetSclSlope(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSclSlope");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageHeader *op = static_cast<vtkNIFTIImageHeader *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSclSlope(temp0);
    }
    else
    {
      op->vtkNIFTIImageHeader::SetSclSlope(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkNIFTIImageHeader_GetSclSlope(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSclSlope");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageHeader *op = static_cast<vtkNIFTIImageHeader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetSclSlope() :
      op->vtkNIFTIImageHeader::GetSclSlope());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNIFTIImageHeader_SetSclInter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSclInter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageHeader *op = static_cast<vtkNIFTIImageHeader *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSclInter(temp0);
    }
    else
    {
      op->vtkNIFTIImageHeader::SetSclInter(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkNIFTIImageHeader_GetSclInter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSclInter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageHeader *op = static_cast<vtkNIFTIImageHeader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetSclInter() :
      op->vtkNIFTIImageHeader::GetSclInter());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNIFTIImageHeader_SetCalMin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCalMin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageHeader *op = static_cast<vtkNIFTIImageHeader *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCalMin(temp0);
    }
    else
    {
      op->vtkNIFTIImageHeader::SetCalMin(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkNIFTIImageHeader_GetCalMin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCalMin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageHeader *op = static_cast<vtkNIFTIImageHeader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetCalMin() :
      op->vtkNIFTIImageHeader::GetCalMin());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNIFTIImageHeader_SetCalMax(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCalMax");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageHeader *op = static_cast<vtkNIFTIImageHeader *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCalMax(temp0);
    }
    else
    {
      op->vtkNIFTIImageHeader::SetCalMax(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkNIFTIImageHeader_GetCalMax(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCalMax");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageHeader *op = static_cast<vtkNIFTIImageHeader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetCalMax() :
      op->vtkNIFTIImageHeader::GetCalMax());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNIFTIImageHeader_SetSliceDuration(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceDuration");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageHeader *op = static_cast<vtkNIFTIImageHeader *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSliceDuration(temp0);
    }
    else
    {
      op->vtkNIFTIImageHeader::SetSliceDuration(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkNIFTIImageHeader_GetSliceDuration(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceDuration");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageHeader *op = static_cast<vtkNIFTIImageHeader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetSliceDuration() :
      op->vtkNIFTIImageHeader::GetSliceDuration());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNIFTIImageHeader_SetTOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageHeader *op = static_cast<vtkNIFTIImageHeader *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTOffset(temp0);
    }
    else
    {
      op->vtkNIFTIImageHeader::SetTOffset(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkNIFTIImageHeader_GetTOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageHeader *op = static_cast<vtkNIFTIImageHeader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTOffset() :
      op->vtkNIFTIImageHeader::GetTOffset());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNIFTIImageHeader_SetSliceStart(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceStart");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageHeader *op = static_cast<vtkNIFTIImageHeader *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSliceStart(temp0);
    }
    else
    {
      op->vtkNIFTIImageHeader::SetSliceStart(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkNIFTIImageHeader_GetSliceStart(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceStart");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageHeader *op = static_cast<vtkNIFTIImageHeader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetSliceStart() :
      op->vtkNIFTIImageHeader::GetSliceStart());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNIFTIImageHeader_SetSliceEnd(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceEnd");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageHeader *op = static_cast<vtkNIFTIImageHeader *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSliceEnd(temp0);
    }
    else
    {
      op->vtkNIFTIImageHeader::SetSliceEnd(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkNIFTIImageHeader_GetSliceEnd(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceEnd");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageHeader *op = static_cast<vtkNIFTIImageHeader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetSliceEnd() :
      op->vtkNIFTIImageHeader::GetSliceEnd());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNIFTIImageHeader_SetSliceCode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceCode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageHeader *op = static_cast<vtkNIFTIImageHeader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSliceCode(temp0);
    }
    else
    {
      op->vtkNIFTIImageHeader::SetSliceCode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkNIFTIImageHeader_GetSliceCode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceCode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageHeader *op = static_cast<vtkNIFTIImageHeader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSliceCode() :
      op->vtkNIFTIImageHeader::GetSliceCode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNIFTIImageHeader_SetXYZTUnits(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXYZTUnits");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageHeader *op = static_cast<vtkNIFTIImageHeader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetXYZTUnits(temp0);
    }
    else
    {
      op->vtkNIFTIImageHeader::SetXYZTUnits(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkNIFTIImageHeader_GetXYZTUnits(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXYZTUnits");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageHeader *op = static_cast<vtkNIFTIImageHeader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetXYZTUnits() :
      op->vtkNIFTIImageHeader::GetXYZTUnits());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNIFTIImageHeader_SetDimInfo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDimInfo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageHeader *op = static_cast<vtkNIFTIImageHeader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDimInfo(temp0);
    }
    else
    {
      op->vtkNIFTIImageHeader::SetDimInfo(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkNIFTIImageHeader_GetDimInfo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimInfo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageHeader *op = static_cast<vtkNIFTIImageHeader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDimInfo() :
      op->vtkNIFTIImageHeader::GetDimInfo());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNIFTIImageHeader_SetDescrip(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDescrip");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageHeader *op = static_cast<vtkNIFTIImageHeader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDescrip(temp0);
    }
    else
    {
      op->vtkNIFTIImageHeader::SetDescrip(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkNIFTIImageHeader_GetDescrip(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDescrip");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageHeader *op = static_cast<vtkNIFTIImageHeader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetDescrip() :
      op->vtkNIFTIImageHeader::GetDescrip());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNIFTIImageHeader_SetAuxFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAuxFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageHeader *op = static_cast<vtkNIFTIImageHeader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAuxFile(temp0);
    }
    else
    {
      op->vtkNIFTIImageHeader::SetAuxFile(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkNIFTIImageHeader_GetAuxFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAuxFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageHeader *op = static_cast<vtkNIFTIImageHeader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetAuxFile() :
      op->vtkNIFTIImageHeader::GetAuxFile());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNIFTIImageHeader_SetQFormCode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQFormCode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageHeader *op = static_cast<vtkNIFTIImageHeader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetQFormCode(temp0);
    }
    else
    {
      op->vtkNIFTIImageHeader::SetQFormCode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkNIFTIImageHeader_GetQFormCode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetQFormCode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageHeader *op = static_cast<vtkNIFTIImageHeader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetQFormCode() :
      op->vtkNIFTIImageHeader::GetQFormCode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNIFTIImageHeader_SetSFormCode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSFormCode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageHeader *op = static_cast<vtkNIFTIImageHeader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSFormCode(temp0);
    }
    else
    {
      op->vtkNIFTIImageHeader::SetSFormCode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkNIFTIImageHeader_GetSFormCode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSFormCode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageHeader *op = static_cast<vtkNIFTIImageHeader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSFormCode() :
      op->vtkNIFTIImageHeader::GetSFormCode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNIFTIImageHeader_SetQuaternB(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQuaternB");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageHeader *op = static_cast<vtkNIFTIImageHeader *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetQuaternB(temp0);
    }
    else
    {
      op->vtkNIFTIImageHeader::SetQuaternB(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkNIFTIImageHeader_GetQuaternB(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetQuaternB");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageHeader *op = static_cast<vtkNIFTIImageHeader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetQuaternB() :
      op->vtkNIFTIImageHeader::GetQuaternB());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNIFTIImageHeader_SetQuaternC(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQuaternC");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageHeader *op = static_cast<vtkNIFTIImageHeader *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetQuaternC(temp0);
    }
    else
    {
      op->vtkNIFTIImageHeader::SetQuaternC(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkNIFTIImageHeader_GetQuaternC(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetQuaternC");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageHeader *op = static_cast<vtkNIFTIImageHeader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetQuaternC() :
      op->vtkNIFTIImageHeader::GetQuaternC());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNIFTIImageHeader_SetQuaternD(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQuaternD");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageHeader *op = static_cast<vtkNIFTIImageHeader *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetQuaternD(temp0);
    }
    else
    {
      op->vtkNIFTIImageHeader::SetQuaternD(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkNIFTIImageHeader_GetQuaternD(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetQuaternD");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageHeader *op = static_cast<vtkNIFTIImageHeader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetQuaternD() :
      op->vtkNIFTIImageHeader::GetQuaternD());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNIFTIImageHeader_SetQOffsetX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQOffsetX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageHeader *op = static_cast<vtkNIFTIImageHeader *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetQOffsetX(temp0);
    }
    else
    {
      op->vtkNIFTIImageHeader::SetQOffsetX(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkNIFTIImageHeader_GetQOffsetX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetQOffsetX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageHeader *op = static_cast<vtkNIFTIImageHeader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetQOffsetX() :
      op->vtkNIFTIImageHeader::GetQOffsetX());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNIFTIImageHeader_SetQOffsetY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQOffsetY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageHeader *op = static_cast<vtkNIFTIImageHeader *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetQOffsetY(temp0);
    }
    else
    {
      op->vtkNIFTIImageHeader::SetQOffsetY(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkNIFTIImageHeader_GetQOffsetY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetQOffsetY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageHeader *op = static_cast<vtkNIFTIImageHeader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetQOffsetY() :
      op->vtkNIFTIImageHeader::GetQOffsetY());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNIFTIImageHeader_SetQOffsetZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQOffsetZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageHeader *op = static_cast<vtkNIFTIImageHeader *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetQOffsetZ(temp0);
    }
    else
    {
      op->vtkNIFTIImageHeader::SetQOffsetZ(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkNIFTIImageHeader_GetQOffsetZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetQOffsetZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageHeader *op = static_cast<vtkNIFTIImageHeader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetQOffsetZ() :
      op->vtkNIFTIImageHeader::GetQOffsetZ());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNIFTIImageHeader_SetSRowX_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSRowX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageHeader *op = static_cast<vtkNIFTIImageHeader *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->SetSRowX(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkNIFTIImageHeader::SetSRowX(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkNIFTIImageHeader_SetSRowX_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSRowX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageHeader *op = static_cast<vtkNIFTIImageHeader *>(vp);

  const size_t size0 = 4;
  double temp0[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetSRowX(temp0);
    }
    else
    {
      op->vtkNIFTIImageHeader::SetSRowX(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkNIFTIImageHeader_SetSRowX(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkNIFTIImageHeader_SetSRowX_s1(self, args);
    case 1:
      return PyvtkNIFTIImageHeader_SetSRowX_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetSRowX");
  return nullptr;
}



static PyObject *
PyvtkNIFTIImageHeader_GetSRowX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSRowX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageHeader *op = static_cast<vtkNIFTIImageHeader *>(vp);

  size_t sizer = 4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetSRowX() :
      op->vtkNIFTIImageHeader::GetSRowX());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkNIFTIImageHeader_SetSRowY_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSRowY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageHeader *op = static_cast<vtkNIFTIImageHeader *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->SetSRowY(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkNIFTIImageHeader::SetSRowY(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkNIFTIImageHeader_SetSRowY_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSRowY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageHeader *op = static_cast<vtkNIFTIImageHeader *>(vp);

  const size_t size0 = 4;
  double temp0[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetSRowY(temp0);
    }
    else
    {
      op->vtkNIFTIImageHeader::SetSRowY(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkNIFTIImageHeader_SetSRowY(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkNIFTIImageHeader_SetSRowY_s1(self, args);
    case 1:
      return PyvtkNIFTIImageHeader_SetSRowY_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetSRowY");
  return nullptr;
}



static PyObject *
PyvtkNIFTIImageHeader_GetSRowY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSRowY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageHeader *op = static_cast<vtkNIFTIImageHeader *>(vp);

  size_t sizer = 4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetSRowY() :
      op->vtkNIFTIImageHeader::GetSRowY());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkNIFTIImageHeader_SetSRowZ_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSRowZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageHeader *op = static_cast<vtkNIFTIImageHeader *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->SetSRowZ(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkNIFTIImageHeader::SetSRowZ(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkNIFTIImageHeader_SetSRowZ_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSRowZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageHeader *op = static_cast<vtkNIFTIImageHeader *>(vp);

  const size_t size0 = 4;
  double temp0[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetSRowZ(temp0);
    }
    else
    {
      op->vtkNIFTIImageHeader::SetSRowZ(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkNIFTIImageHeader_SetSRowZ(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkNIFTIImageHeader_SetSRowZ_s1(self, args);
    case 1:
      return PyvtkNIFTIImageHeader_SetSRowZ_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetSRowZ");
  return nullptr;
}



static PyObject *
PyvtkNIFTIImageHeader_GetSRowZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSRowZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageHeader *op = static_cast<vtkNIFTIImageHeader *>(vp);

  size_t sizer = 4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetSRowZ() :
      op->vtkNIFTIImageHeader::GetSRowZ());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkNIFTIImageHeader_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageHeader *op = static_cast<vtkNIFTIImageHeader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Initialize();
    }
    else
    {
      op->vtkNIFTIImageHeader::Initialize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkNIFTIImageHeader_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageHeader *op = static_cast<vtkNIFTIImageHeader *>(vp);

  vtkNIFTIImageHeader *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkNIFTIImageHeader"))
  {
    if (ap.IsBound())
    {
      op->DeepCopy(temp0);
    }
    else
    {
      op->vtkNIFTIImageHeader::DeepCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkNIFTIImageHeader_Methods[] = {
  {"IsTypeOf", PyvtkNIFTIImageHeader_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStatic method for construction.\n"},
  {"IsA", PyvtkNIFTIImageHeader_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStatic method for construction.\n"},
  {"SafeDownCast", PyvtkNIFTIImageHeader_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkNIFTIImageHeader\nC++: static vtkNIFTIImageHeader *SafeDownCast(vtkObjectBase *o)\n\nStatic method for construction.\n"},
  {"NewInstance", PyvtkNIFTIImageHeader_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkNIFTIImageHeader\nC++: vtkNIFTIImageHeader *NewInstance()\n\nStatic method for construction.\n"},
  {"GetMagic", PyvtkNIFTIImageHeader_GetMagic, METH_VARARGS,
   "V.GetMagic() -> string\nC++: const char *GetMagic()\n\nGet the magic number for the NIFTI file as a null-terminated\nstring.\n"},
  {"GetVoxOffset", PyvtkNIFTIImageHeader_GetVoxOffset, METH_VARARGS,
   "V.GetVoxOffset() -> int\nC++: vtkTypeInt64 GetVoxOffset()\n\nGet the offset to the pixel data within the file.\n"},
  {"GetDataType", PyvtkNIFTIImageHeader_GetDataType, METH_VARARGS,
   "V.GetDataType() -> int\nC++: int GetDataType()\n\nGet the data type.\n"},
  {"GetBitPix", PyvtkNIFTIImageHeader_GetBitPix, METH_VARARGS,
   "V.GetBitPix() -> int\nC++: int GetBitPix()\n\nGet the number of bits per pixel.\n"},
  {"GetDim", PyvtkNIFTIImageHeader_GetDim, METH_VARARGS,
   "V.GetDim(int) -> int\nC++: vtkTypeInt64 GetDim(int i)\n\nGet the nth dimension of the data, where GetDim(0) returns the\nnumber of dimensions that are defined for the file.\n"},
  {"GetPixDim", PyvtkNIFTIImageHeader_GetPixDim, METH_VARARGS,
   "V.GetPixDim(int) -> float\nC++: double GetPixDim(int i)\n\nGet the sample spacing in the nth dimension. If GetPixDim(0) is\nnegative, then the quaternion for the qform describes the correct\norientation only after the slice ordering has been reversed.\n"},
  {"SetIntentCode", PyvtkNIFTIImageHeader_SetIntentCode, METH_VARARGS,
   "V.SetIntentCode(int)\nC++: virtual void SetIntentCode(int _arg)\n\nGet the NIFTI intent code.  This is an enumerated value in the\nNIFTI header that states what the data is intended to be used\nfor.\n"},
  {"GetIntentCode", PyvtkNIFTIImageHeader_GetIntentCode, METH_VARARGS,
   "V.GetIntentCode() -> int\nC++: int GetIntentCode()\n\nGet the NIFTI intent code.  This is an enumerated value in the\nNIFTI header that states what the data is intended to be used\nfor.\n"},
  {"SetIntentName", PyvtkNIFTIImageHeader_SetIntentName, METH_VARARGS,
   "V.SetIntentName(string)\nC++: void SetIntentName(const char *name)\n\nGet the intent name.  This should match the intent code.\n"},
  {"GetIntentName", PyvtkNIFTIImageHeader_GetIntentName, METH_VARARGS,
   "V.GetIntentName() -> string\nC++: const char *GetIntentName()\n\n"},
  {"SetIntentP1", PyvtkNIFTIImageHeader_SetIntentP1, METH_VARARGS,
   "V.SetIntentP1(float)\nC++: virtual void SetIntentP1(double _arg)\n\nGet one of the NIFTI intent parameters.  The definition of these\nparameters varies according to the IntentCode.\n"},
  {"GetIntentP1", PyvtkNIFTIImageHeader_GetIntentP1, METH_VARARGS,
   "V.GetIntentP1() -> float\nC++: double GetIntentP1()\n\nGet one of the NIFTI intent parameters.  The definition of these\nparameters varies according to the IntentCode.\n"},
  {"SetIntentP2", PyvtkNIFTIImageHeader_SetIntentP2, METH_VARARGS,
   "V.SetIntentP2(float)\nC++: virtual void SetIntentP2(double _arg)\n\nGet one of the NIFTI intent parameters.  The definition of these\nparameters varies according to the IntentCode.\n"},
  {"GetIntentP2", PyvtkNIFTIImageHeader_GetIntentP2, METH_VARARGS,
   "V.GetIntentP2() -> float\nC++: double GetIntentP2()\n\nGet one of the NIFTI intent parameters.  The definition of these\nparameters varies according to the IntentCode.\n"},
  {"SetIntentP3", PyvtkNIFTIImageHeader_SetIntentP3, METH_VARARGS,
   "V.SetIntentP3(float)\nC++: virtual void SetIntentP3(double _arg)\n\nGet one of the NIFTI intent parameters.  The definition of these\nparameters varies according to the IntentCode.\n"},
  {"GetIntentP3", PyvtkNIFTIImageHeader_GetIntentP3, METH_VARARGS,
   "V.GetIntentP3() -> float\nC++: double GetIntentP3()\n\nGet one of the NIFTI intent parameters.  The definition of these\nparameters varies according to the IntentCode.\n"},
  {"SetSclSlope", PyvtkNIFTIImageHeader_SetSclSlope, METH_VARARGS,
   "V.SetSclSlope(float)\nC++: virtual void SetSclSlope(double _arg)\n\nGet the scale and slope to apply to the data in order to get the\nreal-valued data values.\n"},
  {"GetSclSlope", PyvtkNIFTIImageHeader_GetSclSlope, METH_VARARGS,
   "V.GetSclSlope() -> float\nC++: double GetSclSlope()\n\nGet the scale and slope to apply to the data in order to get the\nreal-valued data values.\n"},
  {"SetSclInter", PyvtkNIFTIImageHeader_SetSclInter, METH_VARARGS,
   "V.SetSclInter(float)\nC++: virtual void SetSclInter(double _arg)\n\nGet the scale and slope to apply to the data in order to get the\nreal-valued data values.\n"},
  {"GetSclInter", PyvtkNIFTIImageHeader_GetSclInter, METH_VARARGS,
   "V.GetSclInter() -> float\nC++: double GetSclInter()\n\nGet the scale and slope to apply to the data in order to get the\nreal-valued data values.\n"},
  {"SetCalMin", PyvtkNIFTIImageHeader_SetCalMin, METH_VARARGS,
   "V.SetCalMin(float)\nC++: virtual void SetCalMin(double _arg)\n\nGet the calibrated range of the data, i.e. the values stored in\nthe cal_min and cal_max fields in the header.\n"},
  {"GetCalMin", PyvtkNIFTIImageHeader_GetCalMin, METH_VARARGS,
   "V.GetCalMin() -> float\nC++: double GetCalMin()\n\nGet the calibrated range of the data, i.e. the values stored in\nthe cal_min and cal_max fields in the header.\n"},
  {"SetCalMax", PyvtkNIFTIImageHeader_SetCalMax, METH_VARARGS,
   "V.SetCalMax(float)\nC++: virtual void SetCalMax(double _arg)\n\nGet the calibrated range of the data, i.e. the values stored in\nthe cal_min and cal_max fields in the header.\n"},
  {"GetCalMax", PyvtkNIFTIImageHeader_GetCalMax, METH_VARARGS,
   "V.GetCalMax() -> float\nC++: double GetCalMax()\n\nGet the calibrated range of the data, i.e. the values stored in\nthe cal_min and cal_max fields in the header.\n"},
  {"SetSliceDuration", PyvtkNIFTIImageHeader_SetSliceDuration, METH_VARARGS,
   "V.SetSliceDuration(float)\nC++: virtual void SetSliceDuration(double _arg)\n\nGet the slice_duration and toffset from the header.\n"},
  {"GetSliceDuration", PyvtkNIFTIImageHeader_GetSliceDuration, METH_VARARGS,
   "V.GetSliceDuration() -> float\nC++: double GetSliceDuration()\n\nGet the slice_duration and toffset from the header.\n"},
  {"SetTOffset", PyvtkNIFTIImageHeader_SetTOffset, METH_VARARGS,
   "V.SetTOffset(float)\nC++: virtual void SetTOffset(double _arg)\n\nGet the slice_duration and toffset from the header.\n"},
  {"GetTOffset", PyvtkNIFTIImageHeader_GetTOffset, METH_VARARGS,
   "V.GetTOffset() -> float\nC++: double GetTOffset()\n\nGet the slice_duration and toffset from the header.\n"},
  {"SetSliceStart", PyvtkNIFTIImageHeader_SetSliceStart, METH_VARARGS,
   "V.SetSliceStart(int)\nC++: virtual void SetSliceStart(vtkTypeInt64 _arg)\n\nGet the slice range for the data.\n"},
  {"GetSliceStart", PyvtkNIFTIImageHeader_GetSliceStart, METH_VARARGS,
   "V.GetSliceStart() -> int\nC++: vtkTypeInt64 GetSliceStart()\n\nGet the slice range for the data.\n"},
  {"SetSliceEnd", PyvtkNIFTIImageHeader_SetSliceEnd, METH_VARARGS,
   "V.SetSliceEnd(int)\nC++: virtual void SetSliceEnd(vtkTypeInt64 _arg)\n\nGet the slice range for the data.\n"},
  {"GetSliceEnd", PyvtkNIFTIImageHeader_GetSliceEnd, METH_VARARGS,
   "V.GetSliceEnd() -> int\nC++: vtkTypeInt64 GetSliceEnd()\n\nGet the slice range for the data.\n"},
  {"SetSliceCode", PyvtkNIFTIImageHeader_SetSliceCode, METH_VARARGS,
   "V.SetSliceCode(int)\nC++: virtual void SetSliceCode(int _arg)\n\nGet the slice code for the data.\n"},
  {"GetSliceCode", PyvtkNIFTIImageHeader_GetSliceCode, METH_VARARGS,
   "V.GetSliceCode() -> int\nC++: int GetSliceCode()\n\nGet the slice code for the data.\n"},
  {"SetXYZTUnits", PyvtkNIFTIImageHeader_SetXYZTUnits, METH_VARARGS,
   "V.SetXYZTUnits(int)\nC++: virtual void SetXYZTUnits(int _arg)\n\nGet a bitfield that describes the units for the first 4 dims.\n"},
  {"GetXYZTUnits", PyvtkNIFTIImageHeader_GetXYZTUnits, METH_VARARGS,
   "V.GetXYZTUnits() -> int\nC++: int GetXYZTUnits()\n\nGet a bitfield that describes the units for the first 4 dims.\n"},
  {"SetDimInfo", PyvtkNIFTIImageHeader_SetDimInfo, METH_VARARGS,
   "V.SetDimInfo(int)\nC++: virtual void SetDimInfo(int _arg)\n\nGet a bitfield with extra information about the dimensions, it\nstates which dimensions are the phase encode, frequency encode,\nand slice encode dimensions for MRI acquisitions.\n"},
  {"GetDimInfo", PyvtkNIFTIImageHeader_GetDimInfo, METH_VARARGS,
   "V.GetDimInfo() -> int\nC++: int GetDimInfo()\n\nGet a bitfield with extra information about the dimensions, it\nstates which dimensions are the phase encode, frequency encode,\nand slice encode dimensions for MRI acquisitions.\n"},
  {"SetDescrip", PyvtkNIFTIImageHeader_SetDescrip, METH_VARARGS,
   "V.SetDescrip(string)\nC++: void SetDescrip(const char *descrip)\n\nGet a null-terminated file descriptor, this usually gives the\nname of the software that wrote the file. It will have a maximum\nlength of 80 characters.  Use ASCII to ensure compatibility with\nall NIFTI software, the NIFTI standard itself does not specify\nwhat encodings are permitted.\n"},
  {"GetDescrip", PyvtkNIFTIImageHeader_GetDescrip, METH_VARARGS,
   "V.GetDescrip() -> string\nC++: const char *GetDescrip()\n\n"},
  {"SetAuxFile", PyvtkNIFTIImageHeader_SetAuxFile, METH_VARARGS,
   "V.SetAuxFile(string)\nC++: void SetAuxFile(const char *auxfile)\n\nGet an auxiliary file, e.g. a color table, that is associated\nwith this data.  The length of the filename must be a maximum of\n24 characters, and it will be assumed to be in the same directory\nas the NIFTI file.\n"},
  {"GetAuxFile", PyvtkNIFTIImageHeader_GetAuxFile, METH_VARARGS,
   "V.GetAuxFile() -> string\nC++: const char *GetAuxFile()\n\n"},
  {"SetQFormCode", PyvtkNIFTIImageHeader_SetQFormCode, METH_VARARGS,
   "V.SetQFormCode(int)\nC++: virtual void SetQFormCode(int _arg)\n\nGet the QForm or SForm code.\n"},
  {"GetQFormCode", PyvtkNIFTIImageHeader_GetQFormCode, METH_VARARGS,
   "V.GetQFormCode() -> int\nC++: int GetQFormCode()\n\nGet the QForm or SForm code.\n"},
  {"SetSFormCode", PyvtkNIFTIImageHeader_SetSFormCode, METH_VARARGS,
   "V.SetSFormCode(int)\nC++: virtual void SetSFormCode(int _arg)\n\nGet the QForm or SForm code.\n"},
  {"GetSFormCode", PyvtkNIFTIImageHeader_GetSFormCode, METH_VARARGS,
   "V.GetSFormCode() -> int\nC++: int GetSFormCode()\n\nGet the QForm or SForm code.\n"},
  {"SetQuaternB", PyvtkNIFTIImageHeader_SetQuaternB, METH_VARARGS,
   "V.SetQuaternB(float)\nC++: virtual void SetQuaternB(double _arg)\n\nGet information about the quaternion transformation.  Note that\nthe vtkNIFTIImageWriter ignores this part of the header if a\nquaternion has been set via\nvtkNIFTIImageWriter::SetQFormMatrix().\n"},
  {"GetQuaternB", PyvtkNIFTIImageHeader_GetQuaternB, METH_VARARGS,
   "V.GetQuaternB() -> float\nC++: double GetQuaternB()\n\nGet information about the quaternion transformation.  Note that\nthe vtkNIFTIImageWriter ignores this part of the header if a\nquaternion has been set via\nvtkNIFTIImageWriter::SetQFormMatrix().\n"},
  {"SetQuaternC", PyvtkNIFTIImageHeader_SetQuaternC, METH_VARARGS,
   "V.SetQuaternC(float)\nC++: virtual void SetQuaternC(double _arg)\n\nGet information about the quaternion transformation.  Note that\nthe vtkNIFTIImageWriter ignores this part of the header if a\nquaternion has been set via\nvtkNIFTIImageWriter::SetQFormMatrix().\n"},
  {"GetQuaternC", PyvtkNIFTIImageHeader_GetQuaternC, METH_VARARGS,
   "V.GetQuaternC() -> float\nC++: double GetQuaternC()\n\nGet information about the quaternion transformation.  Note that\nthe vtkNIFTIImageWriter ignores this part of the header if a\nquaternion has been set via\nvtkNIFTIImageWriter::SetQFormMatrix().\n"},
  {"SetQuaternD", PyvtkNIFTIImageHeader_SetQuaternD, METH_VARARGS,
   "V.SetQuaternD(float)\nC++: virtual void SetQuaternD(double _arg)\n\nGet information about the quaternion transformation.  Note that\nthe vtkNIFTIImageWriter ignores this part of the header if a\nquaternion has been set via\nvtkNIFTIImageWriter::SetQFormMatrix().\n"},
  {"GetQuaternD", PyvtkNIFTIImageHeader_GetQuaternD, METH_VARARGS,
   "V.GetQuaternD() -> float\nC++: double GetQuaternD()\n\nGet information about the quaternion transformation.  Note that\nthe vtkNIFTIImageWriter ignores this part of the header if a\nquaternion has been set via\nvtkNIFTIImageWriter::SetQFormMatrix().\n"},
  {"SetQOffsetX", PyvtkNIFTIImageHeader_SetQOffsetX, METH_VARARGS,
   "V.SetQOffsetX(float)\nC++: virtual void SetQOffsetX(double _arg)\n\nGet information about the quaternion transformation.  Note that\nthe vtkNIFTIImageWriter ignores this part of the header if a\nquaternion has been set via\nvtkNIFTIImageWriter::SetQFormMatrix().\n"},
  {"GetQOffsetX", PyvtkNIFTIImageHeader_GetQOffsetX, METH_VARARGS,
   "V.GetQOffsetX() -> float\nC++: double GetQOffsetX()\n\nGet information about the quaternion transformation.  Note that\nthe vtkNIFTIImageWriter ignores this part of the header if a\nquaternion has been set via\nvtkNIFTIImageWriter::SetQFormMatrix().\n"},
  {"SetQOffsetY", PyvtkNIFTIImageHeader_SetQOffsetY, METH_VARARGS,
   "V.SetQOffsetY(float)\nC++: virtual void SetQOffsetY(double _arg)\n\nGet information about the quaternion transformation.  Note that\nthe vtkNIFTIImageWriter ignores this part of the header if a\nquaternion has been set via\nvtkNIFTIImageWriter::SetQFormMatrix().\n"},
  {"GetQOffsetY", PyvtkNIFTIImageHeader_GetQOffsetY, METH_VARARGS,
   "V.GetQOffsetY() -> float\nC++: double GetQOffsetY()\n\nGet information about the quaternion transformation.  Note that\nthe vtkNIFTIImageWriter ignores this part of the header if a\nquaternion has been set via\nvtkNIFTIImageWriter::SetQFormMatrix().\n"},
  {"SetQOffsetZ", PyvtkNIFTIImageHeader_SetQOffsetZ, METH_VARARGS,
   "V.SetQOffsetZ(float)\nC++: virtual void SetQOffsetZ(double _arg)\n\nGet information about the quaternion transformation.  Note that\nthe vtkNIFTIImageWriter ignores this part of the header if a\nquaternion has been set via\nvtkNIFTIImageWriter::SetQFormMatrix().\n"},
  {"GetQOffsetZ", PyvtkNIFTIImageHeader_GetQOffsetZ, METH_VARARGS,
   "V.GetQOffsetZ() -> float\nC++: double GetQOffsetZ()\n\nGet information about the quaternion transformation.  Note that\nthe vtkNIFTIImageWriter ignores this part of the header if a\nquaternion has been set via\nvtkNIFTIImageWriter::SetQFormMatrix().\n"},
  {"SetSRowX", PyvtkNIFTIImageHeader_SetSRowX, METH_VARARGS,
   "V.SetSRowX(float, float, float, float)\nC++: void SetSRowX(double, double, double, double)\nV.SetSRowX((float, float, float, float))\nC++: void SetSRowX(double a[4])\n\n"},
  {"GetSRowX", PyvtkNIFTIImageHeader_GetSRowX, METH_VARARGS,
   "V.GetSRowX() -> (float, float, float, float)\nC++: double *GetSRowX()\n\n"},
  {"SetSRowY", PyvtkNIFTIImageHeader_SetSRowY, METH_VARARGS,
   "V.SetSRowY(float, float, float, float)\nC++: void SetSRowY(double, double, double, double)\nV.SetSRowY((float, float, float, float))\nC++: void SetSRowY(double a[4])\n\n"},
  {"GetSRowY", PyvtkNIFTIImageHeader_GetSRowY, METH_VARARGS,
   "V.GetSRowY() -> (float, float, float, float)\nC++: double *GetSRowY()\n\n"},
  {"SetSRowZ", PyvtkNIFTIImageHeader_SetSRowZ, METH_VARARGS,
   "V.SetSRowZ(float, float, float, float)\nC++: void SetSRowZ(double, double, double, double)\nV.SetSRowZ((float, float, float, float))\nC++: void SetSRowZ(double a[4])\n\n"},
  {"GetSRowZ", PyvtkNIFTIImageHeader_GetSRowZ, METH_VARARGS,
   "V.GetSRowZ() -> (float, float, float, float)\nC++: double *GetSRowZ()\n\n"},
  {"Initialize", PyvtkNIFTIImageHeader_Initialize, METH_VARARGS,
   "V.Initialize()\nC++: void Initialize()\n\nInitialize the header to default values.\n"},
  {"DeepCopy", PyvtkNIFTIImageHeader_DeepCopy, METH_VARARGS,
   "V.DeepCopy(vtkNIFTIImageHeader)\nC++: void DeepCopy(vtkNIFTIImageHeader *o)\n\nMake a copy of the header.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkNIFTIImageHeader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOImagePython.vtkNIFTIImageHeader", // tp_name
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
  PyvtkNIFTIImageHeader_Doc, // tp_doc
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

static vtkObjectBase *PyvtkNIFTIImageHeader_StaticNew()
{
  return vtkNIFTIImageHeader::New();
}

PyObject *PyvtkNIFTIImageHeader_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkNIFTIImageHeader_Type, PyvtkNIFTIImageHeader_Methods,
    "vtkNIFTIImageHeader",
 &PyvtkNIFTIImageHeader_StaticNew);

  PyTypeObject *pytype = &PyvtkNIFTIImageHeader_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkObject_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkNIFTIImageHeader_IntentCodeEnum_Type);
  PyvtkNIFTIImageHeader_IntentCodeEnum_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkNIFTIImageHeader_IntentCodeEnum_Type);

  o = (PyObject *)&PyvtkNIFTIImageHeader_IntentCodeEnum_Type;
  if (PyDict_SetItemString(d, "IntentCodeEnum", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkNIFTIImageHeader_XFormCodeEnum_Type);
  PyvtkNIFTIImageHeader_XFormCodeEnum_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkNIFTIImageHeader_XFormCodeEnum_Type);

  o = (PyObject *)&PyvtkNIFTIImageHeader_XFormCodeEnum_Type;
  if (PyDict_SetItemString(d, "XFormCodeEnum", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkNIFTIImageHeader_SliceCodeEnum_Type);
  PyvtkNIFTIImageHeader_SliceCodeEnum_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkNIFTIImageHeader_SliceCodeEnum_Type);

  o = (PyObject *)&PyvtkNIFTIImageHeader_SliceCodeEnum_Type;
  if (PyDict_SetItemString(d, "SliceCodeEnum", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkNIFTIImageHeader_UnitsXYZTEnum_Type);
  PyvtkNIFTIImageHeader_UnitsXYZTEnum_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkNIFTIImageHeader_UnitsXYZTEnum_Type);

  o = (PyObject *)&PyvtkNIFTIImageHeader_UnitsXYZTEnum_Type;
  if (PyDict_SetItemString(d, "UnitsXYZTEnum", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkNIFTIImageHeader_DataTypeEnum_Type);
  PyvtkNIFTIImageHeader_DataTypeEnum_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkNIFTIImageHeader_DataTypeEnum_Type);

  o = (PyObject *)&PyvtkNIFTIImageHeader_DataTypeEnum_Type;
  if (PyDict_SetItemString(d, "DataTypeEnum", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkNIFTIImageHeader_HeaderSizeEnum_Type);
  PyvtkNIFTIImageHeader_HeaderSizeEnum_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkNIFTIImageHeader_HeaderSizeEnum_Type);

  o = (PyObject *)&PyvtkNIFTIImageHeader_HeaderSizeEnum_Type;
  if (PyDict_SetItemString(d, "HeaderSizeEnum", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 40; c++)
  {
    typedef vtkNIFTIImageHeader::IntentCodeEnum cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[40] = {
        { "IntentNone", vtkNIFTIImageHeader::IntentNone },
        { "IntentCorrel", vtkNIFTIImageHeader::IntentCorrel },
        { "IntentTTest", vtkNIFTIImageHeader::IntentTTest },
        { "IntentFTest", vtkNIFTIImageHeader::IntentFTest },
        { "IntentZScore", vtkNIFTIImageHeader::IntentZScore },
        { "IntentChiSQ", vtkNIFTIImageHeader::IntentChiSQ },
        { "IntentBeta", vtkNIFTIImageHeader::IntentBeta },
        { "IntentBinom", vtkNIFTIImageHeader::IntentBinom },
        { "IntentGamma", vtkNIFTIImageHeader::IntentGamma },
        { "IntentPoisson", vtkNIFTIImageHeader::IntentPoisson },
        { "IntentNormal", vtkNIFTIImageHeader::IntentNormal },
        { "IntentFTestNonc", vtkNIFTIImageHeader::IntentFTestNonc },
        { "IntentChiSQNonc", vtkNIFTIImageHeader::IntentChiSQNonc },
        { "IntentLogistic", vtkNIFTIImageHeader::IntentLogistic },
        { "IntentLaplace", vtkNIFTIImageHeader::IntentLaplace },
        { "IntentUniform", vtkNIFTIImageHeader::IntentUniform },
        { "IntentTTestNonc", vtkNIFTIImageHeader::IntentTTestNonc },
        { "IntentWeibull", vtkNIFTIImageHeader::IntentWeibull },
        { "IntentChi", vtkNIFTIImageHeader::IntentChi },
        { "IntentInvGauss", vtkNIFTIImageHeader::IntentInvGauss },
        { "IntentExtVal", vtkNIFTIImageHeader::IntentExtVal },
        { "IntentPVal", vtkNIFTIImageHeader::IntentPVal },
        { "IntentLogPVal", vtkNIFTIImageHeader::IntentLogPVal },
        { "IntentLog10PVal", vtkNIFTIImageHeader::IntentLog10PVal },
        { "IntentEstimate", vtkNIFTIImageHeader::IntentEstimate },
        { "IntentLabel", vtkNIFTIImageHeader::IntentLabel },
        { "IntentNeuroName", vtkNIFTIImageHeader::IntentNeuroName },
        { "IntentGenMatrix", vtkNIFTIImageHeader::IntentGenMatrix },
        { "IntentSymMatrix", vtkNIFTIImageHeader::IntentSymMatrix },
        { "IntentDispVect", vtkNIFTIImageHeader::IntentDispVect },
        { "IntentVector", vtkNIFTIImageHeader::IntentVector },
        { "IntentPointSet", vtkNIFTIImageHeader::IntentPointSet },
        { "IntentTriangle", vtkNIFTIImageHeader::IntentTriangle },
        { "IntentQuaternion", vtkNIFTIImageHeader::IntentQuaternion },
        { "IntentDimless", vtkNIFTIImageHeader::IntentDimless },
        { "IntentTimeSeries", vtkNIFTIImageHeader::IntentTimeSeries },
        { "IntentNodeIndex", vtkNIFTIImageHeader::IntentNodeIndex },
        { "IntentRGBVector", vtkNIFTIImageHeader::IntentRGBVector },
        { "IntentRGBAVector", vtkNIFTIImageHeader::IntentRGBAVector },
        { "IntentShape", vtkNIFTIImageHeader::IntentShape },
      };

    o = PyvtkNIFTIImageHeader_IntentCodeEnum_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 5; c++)
  {
    typedef vtkNIFTIImageHeader::XFormCodeEnum cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[5] = {
        { "XFormUnkown", vtkNIFTIImageHeader::XFormUnkown },
        { "XFormScannerAnat", vtkNIFTIImageHeader::XFormScannerAnat },
        { "XFormAlignedAnat", vtkNIFTIImageHeader::XFormAlignedAnat },
        { "XFormTalairach", vtkNIFTIImageHeader::XFormTalairach },
        { "XFormMNI152", vtkNIFTIImageHeader::XFormMNI152 },
      };

    o = PyvtkNIFTIImageHeader_XFormCodeEnum_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 7; c++)
  {
    typedef vtkNIFTIImageHeader::SliceCodeEnum cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[7] = {
        { "SliceUnknown", vtkNIFTIImageHeader::SliceUnknown },
        { "SliceSeqInc", vtkNIFTIImageHeader::SliceSeqInc },
        { "SliceSeqDec", vtkNIFTIImageHeader::SliceSeqDec },
        { "SliceAltInc", vtkNIFTIImageHeader::SliceAltInc },
        { "SliceAltDec", vtkNIFTIImageHeader::SliceAltDec },
        { "SliceAltInc2", vtkNIFTIImageHeader::SliceAltInc2 },
        { "SliceAltDec2", vtkNIFTIImageHeader::SliceAltDec2 },
      };

    o = PyvtkNIFTIImageHeader_SliceCodeEnum_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 12; c++)
  {
    typedef vtkNIFTIImageHeader::UnitsXYZTEnum cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[12] = {
        { "UnitsUnknown", vtkNIFTIImageHeader::UnitsUnknown },
        { "UnitsMeter", vtkNIFTIImageHeader::UnitsMeter },
        { "UnitsMM", vtkNIFTIImageHeader::UnitsMM },
        { "UnitsMicron", vtkNIFTIImageHeader::UnitsMicron },
        { "UnitsSpace", vtkNIFTIImageHeader::UnitsSpace },
        { "UnitsSec", vtkNIFTIImageHeader::UnitsSec },
        { "UnitsMSec", vtkNIFTIImageHeader::UnitsMSec },
        { "UnitsUSec", vtkNIFTIImageHeader::UnitsUSec },
        { "UnitsHz", vtkNIFTIImageHeader::UnitsHz },
        { "UnitsPPM", vtkNIFTIImageHeader::UnitsPPM },
        { "UnitsRads", vtkNIFTIImageHeader::UnitsRads },
        { "UnitsTime", vtkNIFTIImageHeader::UnitsTime },
      };

    o = PyvtkNIFTIImageHeader_UnitsXYZTEnum_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 16; c++)
  {
    typedef vtkNIFTIImageHeader::DataTypeEnum cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[16] = {
        { "TypeUInt8", vtkNIFTIImageHeader::TypeUInt8 },
        { "TypeInt16", vtkNIFTIImageHeader::TypeInt16 },
        { "TypeInt32", vtkNIFTIImageHeader::TypeInt32 },
        { "TypeFloat32", vtkNIFTIImageHeader::TypeFloat32 },
        { "TypeComplex64", vtkNIFTIImageHeader::TypeComplex64 },
        { "TypeFloat64", vtkNIFTIImageHeader::TypeFloat64 },
        { "TypeRGB24", vtkNIFTIImageHeader::TypeRGB24 },
        { "TypeInt8", vtkNIFTIImageHeader::TypeInt8 },
        { "TypeUInt16", vtkNIFTIImageHeader::TypeUInt16 },
        { "TypeUInt32", vtkNIFTIImageHeader::TypeUInt32 },
        { "TypeInt64", vtkNIFTIImageHeader::TypeInt64 },
        { "TypeUInt64", vtkNIFTIImageHeader::TypeUInt64 },
        { "TypeFloat128", vtkNIFTIImageHeader::TypeFloat128 },
        { "TypeComplex128", vtkNIFTIImageHeader::TypeComplex128 },
        { "TypeComplex256", vtkNIFTIImageHeader::TypeComplex256 },
        { "TypeRGBA32", vtkNIFTIImageHeader::TypeRGBA32 },
      };

    o = PyvtkNIFTIImageHeader_DataTypeEnum_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 2; c++)
  {
    typedef vtkNIFTIImageHeader::HeaderSizeEnum cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[2] = {
        { "NIFTI1HeaderSize", vtkNIFTIImageHeader::NIFTI1HeaderSize },
        { "NIFTI2HeaderSize", vtkNIFTIImageHeader::NIFTI2HeaderSize },
      };

    o = PyvtkNIFTIImageHeader_HeaderSizeEnum_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkNIFTIImageHeader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkNIFTIImageHeader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkNIFTIImageHeader", o) != 0)
  {
    Py_DECREF(o);
  }

}

