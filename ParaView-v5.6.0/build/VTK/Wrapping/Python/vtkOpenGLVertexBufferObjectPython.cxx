// python wrapper for vtkOpenGLVertexBufferObject
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
#include "vtkTimeStamp.h"
#include "vtkOpenGLVertexBufferObject.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkOpenGLVertexBufferObject(PyObject *); }

static const char *PyvtkFourByteUnion_Doc =
  "vtkFourByteUnion - OpenGL vertex buffer object\n\n"
  "OpenGL buffer object to store geometry and/or attribute data on the\n"
  "GPU.\n\n"
  "vtkFourByteUnion()\n";

static PyMethodDef PyvtkFourByteUnion_Methods[] = {
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkFourByteUnion_vtkFourByteUnion(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkFourByteUnion");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkFourByteUnion *op = new vtkFourByteUnion();

    result = PyVTKSpecialObject_New("vtkFourByteUnion", op);
  }

  return result;
}

static PyMethodDef PyvtkFourByteUnion_vtkFourByteUnion_Methods[] = {
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkFourByteUnion_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkFourByteUnion_vtkFourByteUnion(nullptr, args);
}

static void PyvtkFourByteUnion_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkFourByteUnion *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkFourByteUnion_Hash(PyObject *self)
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

static PyTypeObject PyvtkFourByteUnion_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingOpenGL2Python.vtkFourByteUnion", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkFourByteUnion_Delete, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkFourByteUnion_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkFourByteUnion_Doc, // tp_doc
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
  PyvtkFourByteUnion_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkFourByteUnion_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkFourByteUnion(*static_cast<const vtkFourByteUnion*>(obj));
  }
  return 0;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkFourByteUnion_TypeNew(); }

PyObject *PyvtkFourByteUnion_TypeNew()
{
  PyVTKSpecialType_Add(
    &PyvtkFourByteUnion_Type,
    PyvtkFourByteUnion_Methods,
    PyvtkFourByteUnion_vtkFourByteUnion_Methods,
    &PyvtkFourByteUnion_CCopy);

  PyTypeObject *pytype = &PyvtkFourByteUnion_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkOpenGLVertexBufferObject_ClassNew(); }

#ifndef DECLARED_PyvtkOpenGLBufferObject_ClassNew
extern "C" { PyObject *PyvtkOpenGLBufferObject_ClassNew(); }
#define DECLARED_PyvtkOpenGLBufferObject_ClassNew
#endif

static const char *PyvtkOpenGLVertexBufferObject_Doc =
  "vtkOpenGLVertexBufferObject - no description provided.\n\n"
  "Superclass: vtkOpenGLBufferObject\n\n"
;

static PyTypeObject PyvtkOpenGLVertexBufferObject_ShiftScaleMethod_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingOpenGL2Python.vtkOpenGLVertexBufferObject.ShiftScaleMethod", // tp_name
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

PyObject *PyvtkOpenGLVertexBufferObject_ShiftScaleMethod_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkOpenGLVertexBufferObject_ShiftScaleMethod_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkOpenGLVertexBufferObject_ShiftScaleMethod_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkOpenGLVertexBufferObject_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkOpenGLVertexBufferObject::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLVertexBufferObject_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLVertexBufferObject *op = static_cast<vtkOpenGLVertexBufferObject *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkOpenGLVertexBufferObject::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLVertexBufferObject_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkOpenGLVertexBufferObject *tempr = vtkOpenGLVertexBufferObject::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLVertexBufferObject_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLVertexBufferObject *op = static_cast<vtkOpenGLVertexBufferObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkOpenGLVertexBufferObject *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkOpenGLVertexBufferObject::NewInstance());

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
PyvtkOpenGLVertexBufferObject_UploadDataArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UploadDataArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLVertexBufferObject *op = static_cast<vtkOpenGLVertexBufferObject *>(vp);

  vtkDataArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataArray"))
  {
    if (ap.IsBound())
    {
      op->UploadDataArray(temp0);
    }
    else
    {
      op->vtkOpenGLVertexBufferObject::UploadDataArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLVertexBufferObject_AppendDataArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AppendDataArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLVertexBufferObject *op = static_cast<vtkOpenGLVertexBufferObject *>(vp);

  vtkDataArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataArray"))
  {
    if (ap.IsBound())
    {
      op->AppendDataArray(temp0);
    }
    else
    {
      op->vtkOpenGLVertexBufferObject::AppendDataArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLVertexBufferObject_GetUploadTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUploadTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLVertexBufferObject *op = static_cast<vtkOpenGLVertexBufferObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTimeStamp tempr = (ap.IsBound() ?
      op->GetUploadTime() :
      op->vtkOpenGLVertexBufferObject::GetUploadTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkTimeStamp");
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLVertexBufferObject_GetCoordShiftAndScaleEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoordShiftAndScaleEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLVertexBufferObject *op = static_cast<vtkOpenGLVertexBufferObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetCoordShiftAndScaleEnabled() :
      op->vtkOpenGLVertexBufferObject::GetCoordShiftAndScaleEnabled());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLVertexBufferObject_GetCoordShiftAndScaleMethod(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoordShiftAndScaleMethod");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLVertexBufferObject *op = static_cast<vtkOpenGLVertexBufferObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    typedef vtkOpenGLVertexBufferObject::ShiftScaleMethod tempr_type;
  tempr_type tempr = (ap.IsBound() ?
      op->GetCoordShiftAndScaleMethod() :
      op->vtkOpenGLVertexBufferObject::GetCoordShiftAndScaleMethod());

    if (!ap.ErrorOccurred())
    {
      result = PyvtkOpenGLVertexBufferObject_ShiftScaleMethod_FromEnum(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLVertexBufferObject_SetCoordShiftAndScaleMethod(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCoordShiftAndScaleMethod");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLVertexBufferObject *op = static_cast<vtkOpenGLVertexBufferObject *>(vp);

  typedef vtkOpenGLVertexBufferObject::ShiftScaleMethod temp0_type;
  temp0_type temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetEnumValue(temp0, "vtkOpenGLVertexBufferObject.ShiftScaleMethod"))
  {
    if (ap.IsBound())
    {
      op->SetCoordShiftAndScaleMethod(temp0);
    }
    else
    {
      op->vtkOpenGLVertexBufferObject::SetCoordShiftAndScaleMethod(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLVertexBufferObject_SetDataType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLVertexBufferObject *op = static_cast<vtkOpenGLVertexBufferObject *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDataType(temp0);
    }
    else
    {
      op->vtkOpenGLVertexBufferObject::SetDataType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLVertexBufferObject_GetDataType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLVertexBufferObject *op = static_cast<vtkOpenGLVertexBufferObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataType() :
      op->vtkOpenGLVertexBufferObject::GetDataType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLVertexBufferObject_GetDataTypeSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataTypeSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLVertexBufferObject *op = static_cast<vtkOpenGLVertexBufferObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetDataTypeSize() :
      op->vtkOpenGLVertexBufferObject::GetDataTypeSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLVertexBufferObject_GetNumberOfTuples(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTuples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLVertexBufferObject *op = static_cast<vtkOpenGLVertexBufferObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfTuples() :
      op->vtkOpenGLVertexBufferObject::GetNumberOfTuples());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLVertexBufferObject_GetNumberOfComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLVertexBufferObject *op = static_cast<vtkOpenGLVertexBufferObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfComponents() :
      op->vtkOpenGLVertexBufferObject::GetNumberOfComponents());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLVertexBufferObject_SetStride(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStride");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLVertexBufferObject *op = static_cast<vtkOpenGLVertexBufferObject *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetStride(temp0);
    }
    else
    {
      op->vtkOpenGLVertexBufferObject::SetStride(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLVertexBufferObject_GetStride(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStride");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLVertexBufferObject *op = static_cast<vtkOpenGLVertexBufferObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetStride() :
      op->vtkOpenGLVertexBufferObject::GetStride());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLVertexBufferObject_UploadVBO(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UploadVBO");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLVertexBufferObject *op = static_cast<vtkOpenGLVertexBufferObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UploadVBO();
    }
    else
    {
      op->vtkOpenGLVertexBufferObject::UploadVBO();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLVertexBufferObject_SetCache(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCache");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLVertexBufferObject *op = static_cast<vtkOpenGLVertexBufferObject *>(vp);

  vtkOpenGLVertexBufferObjectCache *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkOpenGLVertexBufferObjectCache"))
  {
    if (ap.IsBound())
    {
      op->SetCache(temp0);
    }
    else
    {
      op->vtkOpenGLVertexBufferObject::SetCache(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkOpenGLVertexBufferObject_Methods[] = {
  {"IsTypeOf", PyvtkOpenGLVertexBufferObject_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkOpenGLVertexBufferObject_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkOpenGLVertexBufferObject_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkOpenGLVertexBufferObject\nC++: static vtkOpenGLVertexBufferObject *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkOpenGLVertexBufferObject_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkOpenGLVertexBufferObject\nC++: vtkOpenGLVertexBufferObject *NewInstance()\n\n"},
  {"UploadDataArray", PyvtkOpenGLVertexBufferObject_UploadDataArray, METH_VARARGS,
   "V.UploadDataArray(vtkDataArray)\nC++: void UploadDataArray(vtkDataArray *array)\n\n"},
  {"AppendDataArray", PyvtkOpenGLVertexBufferObject_AppendDataArray, METH_VARARGS,
   "V.AppendDataArray(vtkDataArray)\nC++: void AppendDataArray(vtkDataArray *array)\n\n"},
  {"GetUploadTime", PyvtkOpenGLVertexBufferObject_GetUploadTime, METH_VARARGS,
   "V.GetUploadTime() -> vtkTimeStamp\nC++: virtual vtkTimeStamp GetUploadTime()\n\n"},
  {"GetCoordShiftAndScaleEnabled", PyvtkOpenGLVertexBufferObject_GetCoordShiftAndScaleEnabled, METH_VARARGS,
   "V.GetCoordShiftAndScaleEnabled() -> bool\nC++: virtual bool GetCoordShiftAndScaleEnabled()\n\nGet the shift and scale vectors computed by CreateVBO; or set the\nvalues CreateVBO and AppendVBO will use. Note that the \"Set\"\nmethods **must** be called before the first time that CreateVBO\nor AppendVBO is invoked and should never be called afterwards.\n\nThe CoordShiftAndScaleMethod describes how the shift and scale\nvectors are obtained (or that they should never be used). The\nGetCoordShiftAndScaleEnabled() method returns true if a shift and\nscale are currently being applied (or false if not).\n\nThe \"Get\" methods are used by the mapper to modify the world and\ncamera transformation matrices to match the scaling applied to\ncoordinates in the VBO. CreateVBO only applies a shift and scale\nwhen the midpoint of the point bounding-box is distant from the\norigin by a factor of 10,000 or more relative to the size of the\nbox along any axis.\n\nFor example, if the x coordinates of the points range from\n200,000 to 200,001 then the factor is 200,000.5 / (200,001 -\n200,000) = 2x10^5, which is larger than 10,000 -- so the\ncoordinates will be shifted and scaled.\n\nThis is important as many OpenGL drivers use reduced precision to\nhold point coordinates.\n\nThese methods are used by the mapper to determine the additional\ntransform (if any) to apply to the rendering transform.\n"},
  {"GetCoordShiftAndScaleMethod", PyvtkOpenGLVertexBufferObject_GetCoordShiftAndScaleMethod, METH_VARARGS,
   "V.GetCoordShiftAndScaleMethod() -> ShiftScaleMethod\nC++: virtual ShiftScaleMethod GetCoordShiftAndScaleMethod()\n\nGet the shift and scale vectors computed by CreateVBO; or set the\nvalues CreateVBO and AppendVBO will use. Note that the \"Set\"\nmethods **must** be called before the first time that CreateVBO\nor AppendVBO is invoked and should never be called afterwards.\n\nThe CoordShiftAndScaleMethod describes how the shift and scale\nvectors are obtained (or that they should never be used). The\nGetCoordShiftAndScaleEnabled() method returns true if a shift and\nscale are currently being applied (or false if not).\n\nThe \"Get\" methods are used by the mapper to modify the world and\ncamera transformation matrices to match the scaling applied to\ncoordinates in the VBO. CreateVBO only applies a shift and scale\nwhen the midpoint of the point bounding-box is distant from the\norigin by a factor of 10,000 or more relative to the size of the\nbox along any axis.\n\nFor example, if the x coordinates of the points range from\n200,000 to 200,001 then the factor is 200,000.5 / (200,001 -\n200,000) = 2x10^5, which is larger than 10,000 -- so the\ncoordinates will be shifted and scaled.\n\nThis is important as many OpenGL drivers use reduced precision to\nhold point coordinates.\n\nThese methods are used by the mapper to determine the additional\ntransform (if any) to apply to the rendering transform.\n"},
  {"SetCoordShiftAndScaleMethod", PyvtkOpenGLVertexBufferObject_SetCoordShiftAndScaleMethod, METH_VARARGS,
   "V.SetCoordShiftAndScaleMethod(ShiftScaleMethod)\nC++: virtual void SetCoordShiftAndScaleMethod(\n    ShiftScaleMethod meth)\n\nGet the shift and scale vectors computed by CreateVBO; or set the\nvalues CreateVBO and AppendVBO will use. Note that the \"Set\"\nmethods **must** be called before the first time that CreateVBO\nor AppendVBO is invoked and should never be called afterwards.\n\nThe CoordShiftAndScaleMethod describes how the shift and scale\nvectors are obtained (or that they should never be used). The\nGetCoordShiftAndScaleEnabled() method returns true if a shift and\nscale are currently being applied (or false if not).\n\nThe \"Get\" methods are used by the mapper to modify the world and\ncamera transformation matrices to match the scaling applied to\ncoordinates in the VBO. CreateVBO only applies a shift and scale\nwhen the midpoint of the point bounding-box is distant from the\norigin by a factor of 10,000 or more relative to the size of the\nbox along any axis.\n\nFor example, if the x coordinates of the points range from\n200,000 to 200,001 then the factor is 200,000.5 / (200,001 -\n200,000) = 2x10^5, which is larger than 10,000 -- so the\ncoordinates will be shifted and scaled.\n\nThis is important as many OpenGL drivers use reduced precision to\nhold point coordinates.\n\nThese methods are used by the mapper to determine the additional\ntransform (if any) to apply to the rendering transform.\n"},
  {"SetDataType", PyvtkOpenGLVertexBufferObject_SetDataType, METH_VARARGS,
   "V.SetDataType(int)\nC++: void SetDataType(int v)\n\n"},
  {"GetDataType", PyvtkOpenGLVertexBufferObject_GetDataType, METH_VARARGS,
   "V.GetDataType() -> int\nC++: virtual int GetDataType()\n\n"},
  {"GetDataTypeSize", PyvtkOpenGLVertexBufferObject_GetDataTypeSize, METH_VARARGS,
   "V.GetDataTypeSize() -> int\nC++: virtual unsigned int GetDataTypeSize()\n\n"},
  {"GetNumberOfTuples", PyvtkOpenGLVertexBufferObject_GetNumberOfTuples, METH_VARARGS,
   "V.GetNumberOfTuples() -> int\nC++: virtual unsigned int GetNumberOfTuples()\n\n"},
  {"GetNumberOfComponents", PyvtkOpenGLVertexBufferObject_GetNumberOfComponents, METH_VARARGS,
   "V.GetNumberOfComponents() -> int\nC++: virtual unsigned int GetNumberOfComponents()\n\n"},
  {"SetStride", PyvtkOpenGLVertexBufferObject_SetStride, METH_VARARGS,
   "V.SetStride(int)\nC++: virtual void SetStride(unsigned int _arg)\n\n"},
  {"GetStride", PyvtkOpenGLVertexBufferObject_GetStride, METH_VARARGS,
   "V.GetStride() -> int\nC++: virtual unsigned int GetStride()\n\n"},
  {"UploadVBO", PyvtkOpenGLVertexBufferObject_UploadVBO, METH_VARARGS,
   "V.UploadVBO()\nC++: void UploadVBO()\n\n"},
  {"SetCache", PyvtkOpenGLVertexBufferObject_SetCache, METH_VARARGS,
   "V.SetCache(vtkOpenGLVertexBufferObjectCache)\nC++: void SetCache(vtkOpenGLVertexBufferObjectCache *cache)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkOpenGLVertexBufferObject_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingOpenGL2Python.vtkOpenGLVertexBufferObject", // tp_name
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
  PyvtkOpenGLVertexBufferObject_Doc, // tp_doc
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

static vtkObjectBase *PyvtkOpenGLVertexBufferObject_StaticNew()
{
  return vtkOpenGLVertexBufferObject::New();
}

PyObject *PyvtkOpenGLVertexBufferObject_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkOpenGLVertexBufferObject_Type, PyvtkOpenGLVertexBufferObject_Methods,
    "vtkOpenGLVertexBufferObject",
 &PyvtkOpenGLVertexBufferObject_StaticNew);

  PyTypeObject *pytype = &PyvtkOpenGLVertexBufferObject_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkOpenGLBufferObject_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkOpenGLVertexBufferObject_ShiftScaleMethod_Type);
  PyvtkOpenGLVertexBufferObject_ShiftScaleMethod_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkOpenGLVertexBufferObject_ShiftScaleMethod_Type);

  o = (PyObject *)&PyvtkOpenGLVertexBufferObject_ShiftScaleMethod_Type;
  if (PyDict_SetItemString(d, "ShiftScaleMethod", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 4; c++)
  {
    typedef vtkOpenGLVertexBufferObject::ShiftScaleMethod cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[4] = {
        { "DISABLE_SHIFT_SCALE", vtkOpenGLVertexBufferObject::DISABLE_SHIFT_SCALE },
        { "AUTO_SHIFT_SCALE", vtkOpenGLVertexBufferObject::AUTO_SHIFT_SCALE },
        { "ALWAYS_AUTO_SHIFT_SCALE", vtkOpenGLVertexBufferObject::ALWAYS_AUTO_SHIFT_SCALE },
        { "MANUAL_SHIFT_SCALE", vtkOpenGLVertexBufferObject::MANUAL_SHIFT_SCALE },
      };

    o = PyvtkOpenGLVertexBufferObject_ShiftScaleMethod_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkOpenGLVertexBufferObject(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkFourByteUnion_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkFourByteUnion", o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkOpenGLVertexBufferObject_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkOpenGLVertexBufferObject", o) != 0)
  {
    Py_DECREF(o);
  }

}

