// python wrapper for vtkPixelBufferObject
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
#include "vtkPixelBufferObject.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPixelBufferObject(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPixelBufferObject_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkPixelBufferObject_Doc =
  "vtkPixelBufferObject - abstracts an OpenGL pixel buffer object.\n\n"
  "Superclass: vtkObject\n\n"
  "Provides low-level access to PBO mapped memory. Used to transfer raw\n"
  "data to/from PBO mapped memory and the application. Once data is\n"
  "transferred to the PBO it can then be transferred to the GPU (eg\n"
  "texture memory). Data may be uploaded from the application into a\n"
  "pixel buffer or downloaded from the pixel buffer to the application.\n"
  "The vtkTextureObject is used to transfer data from/to the PBO to/from\n"
  "texture memory on the GPU.\n"
  "@sa\n"
  "OpenGL Pixel Buffer Object Extension Spec (ARB_pixel_buffer_object):\n"
  "http://www.opengl.org/registry/specs/ARB/pixel_buffer_object.txt\n"
  "@warning\n"
  "Since most PBO mapped don't support double format all double data is\n"
  "converted to float and then uploaded.\n\n";

static PyTypeObject PyvtkPixelBufferObject_BufferType_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingOpenGL2Python.vtkPixelBufferObject.BufferType", // tp_name
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

PyObject *PyvtkPixelBufferObject_BufferType_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkPixelBufferObject_BufferType_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkPixelBufferObject_BufferType_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkPixelBufferObject_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPixelBufferObject::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPixelBufferObject_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPixelBufferObject *op = static_cast<vtkPixelBufferObject *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPixelBufferObject::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPixelBufferObject_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPixelBufferObject *tempr = vtkPixelBufferObject::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPixelBufferObject_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPixelBufferObject *op = static_cast<vtkPixelBufferObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPixelBufferObject *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPixelBufferObject::NewInstance());

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
PyvtkPixelBufferObject_SetContext(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetContext");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPixelBufferObject *op = static_cast<vtkPixelBufferObject *>(vp);

  vtkRenderWindow *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderWindow"))
  {
    if (ap.IsBound())
    {
      op->SetContext(temp0);
    }
    else
    {
      op->vtkPixelBufferObject::SetContext(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPixelBufferObject_GetContext(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContext");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPixelBufferObject *op = static_cast<vtkPixelBufferObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderWindow *tempr = (ap.IsBound() ?
      op->GetContext() :
      op->vtkPixelBufferObject::GetContext());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPixelBufferObject_GetUsage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUsage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPixelBufferObject *op = static_cast<vtkPixelBufferObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUsage() :
      op->vtkPixelBufferObject::GetUsage());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPixelBufferObject_SetUsage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUsage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPixelBufferObject *op = static_cast<vtkPixelBufferObject *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUsage(temp0);
    }
    else
    {
      op->vtkPixelBufferObject::SetUsage(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPixelBufferObject_Upload1D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Upload1D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPixelBufferObject *op = static_cast<vtkPixelBufferObject *>(vp);

  int temp0;
  void  *temp1 = nullptr;
  Py_buffer pbuf1 = VTK_PYBUFFER_INITIALIZER;
  unsigned int temp2;
  int temp3;
  vtkIdType temp4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetBuffer(temp1, &pbuf1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    bool tempr = (ap.IsBound() ?
      op->Upload1D(temp0, temp1, temp2, temp3, temp4) :
      op->vtkPixelBufferObject::Upload1D(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

#if PY_VERSION_HEX >= 0x02060000
  if (pbuf1.obj != 0)
  {
    PyBuffer_Release(&pbuf1);
  }
#endif
  return result;
}


static PyObject *
PyvtkPixelBufferObject_Upload2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Upload2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPixelBufferObject *op = static_cast<vtkPixelBufferObject *>(vp);

  int temp0;
  void  *temp1 = nullptr;
  Py_buffer pbuf1 = VTK_PYBUFFER_INITIALIZER;
  const size_t size2 = 2;
  unsigned int temp2[2];
  unsigned int save2[2];
  int temp3;
  const size_t size4 = 2;
  vtkIdType temp4[2];
  vtkIdType save4[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetBuffer(temp1, &pbuf1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetValue(temp3) &&
      ap.GetArray(temp4, size4))
  {
    ap.Save(temp2, save2, size2);
    ap.Save(temp4, save4, size4);

    bool tempr = (ap.IsBound() ?
      op->Upload2D(temp0, temp1, temp2, temp3, temp4) :
      op->vtkPixelBufferObject::Upload2D(temp0, temp1, temp2, temp3, temp4));

    if (ap.HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (ap.HasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(4, temp4, size4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

#if PY_VERSION_HEX >= 0x02060000
  if (pbuf1.obj != 0)
  {
    PyBuffer_Release(&pbuf1);
  }
#endif
  return result;
}


static PyObject *
PyvtkPixelBufferObject_Upload3D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Upload3D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPixelBufferObject *op = static_cast<vtkPixelBufferObject *>(vp);

  int temp0;
  void  *temp1 = nullptr;
  Py_buffer pbuf1 = VTK_PYBUFFER_INITIALIZER;
  const size_t size2 = 3;
  unsigned int temp2[3];
  unsigned int save2[3];
  int temp3;
  const size_t size4 = 3;
  vtkIdType temp4[3];
  vtkIdType save4[3];
  int temp5;
  size_t size6 = ap.GetArgSize(6);
  vtkPythonArgs::Array<int> store6(2*size6);
  int *temp6 = store6.Data();
  int *save6 = (size6 == 0 ? nullptr : temp6 + size6);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(7) &&
      ap.GetValue(temp0) &&
      ap.GetBuffer(temp1, &pbuf1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetValue(temp3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetValue(temp5) &&
      ap.GetArray(temp6, size6))
  {
    ap.Save(temp2, save2, size2);
    ap.Save(temp4, save4, size4);
    ap.Save(temp6, save6, size6);

    bool tempr = (ap.IsBound() ?
      op->Upload3D(temp0, temp1, temp2, temp3, temp4, temp5, temp6) :
      op->vtkPixelBufferObject::Upload3D(temp0, temp1, temp2, temp3, temp4, temp5, temp6));

    if (ap.HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (ap.HasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(4, temp4, size4);
    }

    if (ap.HasChanged(temp6, save6, size6) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(6, temp6, size6);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

#if PY_VERSION_HEX >= 0x02060000
  if (pbuf1.obj != 0)
  {
    PyBuffer_Release(&pbuf1);
  }
#endif
  return result;
}


static PyObject *
PyvtkPixelBufferObject_GetType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPixelBufferObject *op = static_cast<vtkPixelBufferObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetType() :
      op->vtkPixelBufferObject::GetType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPixelBufferObject_SetType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPixelBufferObject *op = static_cast<vtkPixelBufferObject *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetType(temp0);
    }
    else
    {
      op->vtkPixelBufferObject::SetType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPixelBufferObject_GetComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPixelBufferObject *op = static_cast<vtkPixelBufferObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetComponents() :
      op->vtkPixelBufferObject::GetComponents());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPixelBufferObject_SetComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPixelBufferObject *op = static_cast<vtkPixelBufferObject *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetComponents(temp0);
    }
    else
    {
      op->vtkPixelBufferObject::SetComponents(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPixelBufferObject_GetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPixelBufferObject *op = static_cast<vtkPixelBufferObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetSize() :
      op->vtkPixelBufferObject::GetSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPixelBufferObject_SetSize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPixelBufferObject *op = static_cast<vtkPixelBufferObject *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSize(temp0);
    }
    else
    {
      op->vtkPixelBufferObject::SetSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPixelBufferObject_SetSize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPixelBufferObject *op = static_cast<vtkPixelBufferObject *>(vp);

  unsigned int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetSize(temp0, temp1);
    }
    else
    {
      op->vtkPixelBufferObject::SetSize(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPixelBufferObject_SetSize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkPixelBufferObject_SetSize_s1(self, args);
    case 2:
      return PyvtkPixelBufferObject_SetSize_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetSize");
  return nullptr;
}



static PyObject *
PyvtkPixelBufferObject_GetHandle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHandle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPixelBufferObject *op = static_cast<vtkPixelBufferObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetHandle() :
      op->vtkPixelBufferObject::GetHandle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPixelBufferObject_Download1D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Download1D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPixelBufferObject *op = static_cast<vtkPixelBufferObject *>(vp);

  int temp0;
  void  *temp1 = nullptr;
  Py_buffer pbuf1 = VTK_PYBUFFER_INITIALIZER;
  unsigned int temp2;
  int temp3;
  vtkIdType temp4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetBuffer(temp1, &pbuf1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    bool tempr = (ap.IsBound() ?
      op->Download1D(temp0, temp1, temp2, temp3, temp4) :
      op->vtkPixelBufferObject::Download1D(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

#if PY_VERSION_HEX >= 0x02060000
  if (pbuf1.obj != 0)
  {
    PyBuffer_Release(&pbuf1);
  }
#endif
  return result;
}


static PyObject *
PyvtkPixelBufferObject_Download2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Download2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPixelBufferObject *op = static_cast<vtkPixelBufferObject *>(vp);

  int temp0;
  void  *temp1 = nullptr;
  Py_buffer pbuf1 = VTK_PYBUFFER_INITIALIZER;
  const size_t size2 = 2;
  unsigned int temp2[2];
  unsigned int save2[2];
  int temp3;
  const size_t size4 = 2;
  vtkIdType temp4[2];
  vtkIdType save4[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetBuffer(temp1, &pbuf1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetValue(temp3) &&
      ap.GetArray(temp4, size4))
  {
    ap.Save(temp2, save2, size2);
    ap.Save(temp4, save4, size4);

    bool tempr = (ap.IsBound() ?
      op->Download2D(temp0, temp1, temp2, temp3, temp4) :
      op->vtkPixelBufferObject::Download2D(temp0, temp1, temp2, temp3, temp4));

    if (ap.HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (ap.HasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(4, temp4, size4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

#if PY_VERSION_HEX >= 0x02060000
  if (pbuf1.obj != 0)
  {
    PyBuffer_Release(&pbuf1);
  }
#endif
  return result;
}


static PyObject *
PyvtkPixelBufferObject_Download3D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Download3D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPixelBufferObject *op = static_cast<vtkPixelBufferObject *>(vp);

  int temp0;
  void  *temp1 = nullptr;
  Py_buffer pbuf1 = VTK_PYBUFFER_INITIALIZER;
  const size_t size2 = 3;
  unsigned int temp2[3];
  unsigned int save2[3];
  int temp3;
  const size_t size4 = 3;
  vtkIdType temp4[3];
  vtkIdType save4[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetBuffer(temp1, &pbuf1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetValue(temp3) &&
      ap.GetArray(temp4, size4))
  {
    ap.Save(temp2, save2, size2);
    ap.Save(temp4, save4, size4);

    bool tempr = (ap.IsBound() ?
      op->Download3D(temp0, temp1, temp2, temp3, temp4) :
      op->vtkPixelBufferObject::Download3D(temp0, temp1, temp2, temp3, temp4));

    if (ap.HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (ap.HasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(4, temp4, size4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

#if PY_VERSION_HEX >= 0x02060000
  if (pbuf1.obj != 0)
  {
    PyBuffer_Release(&pbuf1);
  }
#endif
  return result;
}


static PyObject *
PyvtkPixelBufferObject_BindToPackedBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BindToPackedBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPixelBufferObject *op = static_cast<vtkPixelBufferObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BindToPackedBuffer();
    }
    else
    {
      op->vtkPixelBufferObject::BindToPackedBuffer();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPixelBufferObject_BindToUnPackedBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BindToUnPackedBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPixelBufferObject *op = static_cast<vtkPixelBufferObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BindToUnPackedBuffer();
    }
    else
    {
      op->vtkPixelBufferObject::BindToUnPackedBuffer();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPixelBufferObject_UnBind(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnBind");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPixelBufferObject *op = static_cast<vtkPixelBufferObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UnBind();
    }
    else
    {
      op->vtkPixelBufferObject::UnBind();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPixelBufferObject_MapPackedBuffer_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MapPackedBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPixelBufferObject *op = static_cast<vtkPixelBufferObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    void  *tempr = (ap.IsBound() ?
      op->MapPackedBuffer() :
      op->vtkPixelBufferObject::MapPackedBuffer());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPixelBufferObject_MapPackedBuffer_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MapPackedBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPixelBufferObject *op = static_cast<vtkPixelBufferObject *>(vp);

  int temp0;
  unsigned int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    void  *tempr = (ap.IsBound() ?
      op->MapPackedBuffer(temp0, temp1, temp2) :
      op->vtkPixelBufferObject::MapPackedBuffer(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPixelBufferObject_MapPackedBuffer_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MapPackedBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPixelBufferObject *op = static_cast<vtkPixelBufferObject *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    void  *tempr = (ap.IsBound() ?
      op->MapPackedBuffer(temp0) :
      op->vtkPixelBufferObject::MapPackedBuffer(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPixelBufferObject_MapPackedBuffer(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkPixelBufferObject_MapPackedBuffer_s1(self, args);
    case 3:
      return PyvtkPixelBufferObject_MapPackedBuffer_s2(self, args);
    case 1:
      return PyvtkPixelBufferObject_MapPackedBuffer_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "MapPackedBuffer");
  return nullptr;
}



static PyObject *
PyvtkPixelBufferObject_MapUnpackedBuffer_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MapUnpackedBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPixelBufferObject *op = static_cast<vtkPixelBufferObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    void  *tempr = (ap.IsBound() ?
      op->MapUnpackedBuffer() :
      op->vtkPixelBufferObject::MapUnpackedBuffer());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPixelBufferObject_MapUnpackedBuffer_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MapUnpackedBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPixelBufferObject *op = static_cast<vtkPixelBufferObject *>(vp);

  int temp0;
  unsigned int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    void  *tempr = (ap.IsBound() ?
      op->MapUnpackedBuffer(temp0, temp1, temp2) :
      op->vtkPixelBufferObject::MapUnpackedBuffer(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPixelBufferObject_MapUnpackedBuffer_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MapUnpackedBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPixelBufferObject *op = static_cast<vtkPixelBufferObject *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    void  *tempr = (ap.IsBound() ?
      op->MapUnpackedBuffer(temp0) :
      op->vtkPixelBufferObject::MapUnpackedBuffer(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPixelBufferObject_MapUnpackedBuffer(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkPixelBufferObject_MapUnpackedBuffer_s1(self, args);
    case 3:
      return PyvtkPixelBufferObject_MapUnpackedBuffer_s2(self, args);
    case 1:
      return PyvtkPixelBufferObject_MapUnpackedBuffer_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "MapUnpackedBuffer");
  return nullptr;
}



static PyObject *
PyvtkPixelBufferObject_UnmapUnpackedBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnmapUnpackedBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPixelBufferObject *op = static_cast<vtkPixelBufferObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UnmapUnpackedBuffer();
    }
    else
    {
      op->vtkPixelBufferObject::UnmapUnpackedBuffer();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPixelBufferObject_UnmapPackedBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnmapPackedBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPixelBufferObject *op = static_cast<vtkPixelBufferObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UnmapPackedBuffer();
    }
    else
    {
      op->vtkPixelBufferObject::UnmapPackedBuffer();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPixelBufferObject_Bind(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Bind");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPixelBufferObject *op = static_cast<vtkPixelBufferObject *>(vp);

  typedef vtkPixelBufferObject::BufferType temp0_type;
  temp0_type temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetEnumValue(temp0, "vtkPixelBufferObject.BufferType"))
  {
    if (ap.IsBound())
    {
      op->Bind(temp0);
    }
    else
    {
      op->vtkPixelBufferObject::Bind(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPixelBufferObject_MapBuffer_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MapBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPixelBufferObject *op = static_cast<vtkPixelBufferObject *>(vp);

  int temp0;
  unsigned int temp1;
  int temp2;
  typedef vtkPixelBufferObject::BufferType temp3_type;
  temp3_type temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetEnumValue(temp3, "vtkPixelBufferObject.BufferType"))
  {
    void  *tempr = (ap.IsBound() ?
      op->MapBuffer(temp0, temp1, temp2, temp3) :
      op->vtkPixelBufferObject::MapBuffer(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPixelBufferObject_MapBuffer_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MapBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPixelBufferObject *op = static_cast<vtkPixelBufferObject *>(vp);

  unsigned int temp0;
  typedef vtkPixelBufferObject::BufferType temp1_type;
  temp1_type temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetEnumValue(temp1, "vtkPixelBufferObject.BufferType"))
  {
    void  *tempr = (ap.IsBound() ?
      op->MapBuffer(temp0, temp1) :
      op->vtkPixelBufferObject::MapBuffer(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPixelBufferObject_MapBuffer_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MapBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPixelBufferObject *op = static_cast<vtkPixelBufferObject *>(vp);

  typedef vtkPixelBufferObject::BufferType temp0_type;
  temp0_type temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetEnumValue(temp0, "vtkPixelBufferObject.BufferType"))
  {
    void  *tempr = (ap.IsBound() ?
      op->MapBuffer(temp0) :
      op->vtkPixelBufferObject::MapBuffer(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPixelBufferObject_MapBuffer(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkPixelBufferObject_MapBuffer_s1(self, args);
    case 2:
      return PyvtkPixelBufferObject_MapBuffer_s2(self, args);
    case 1:
      return PyvtkPixelBufferObject_MapBuffer_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "MapBuffer");
  return nullptr;
}



static PyObject *
PyvtkPixelBufferObject_UnmapBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnmapBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPixelBufferObject *op = static_cast<vtkPixelBufferObject *>(vp);

  typedef vtkPixelBufferObject::BufferType temp0_type;
  temp0_type temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetEnumValue(temp0, "vtkPixelBufferObject.BufferType"))
  {
    if (ap.IsBound())
    {
      op->UnmapBuffer(temp0);
    }
    else
    {
      op->vtkPixelBufferObject::UnmapBuffer(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPixelBufferObject_Allocate_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Allocate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPixelBufferObject *op = static_cast<vtkPixelBufferObject *>(vp);

  int temp0;
  unsigned int temp1;
  int temp2;
  typedef vtkPixelBufferObject::BufferType temp3_type;
  temp3_type temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetEnumValue(temp3, "vtkPixelBufferObject.BufferType"))
  {
    if (ap.IsBound())
    {
      op->Allocate(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkPixelBufferObject::Allocate(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPixelBufferObject_Allocate_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Allocate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPixelBufferObject *op = static_cast<vtkPixelBufferObject *>(vp);

  unsigned int temp0;
  typedef vtkPixelBufferObject::BufferType temp1_type;
  temp1_type temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetEnumValue(temp1, "vtkPixelBufferObject.BufferType"))
  {
    if (ap.IsBound())
    {
      op->Allocate(temp0, temp1);
    }
    else
    {
      op->vtkPixelBufferObject::Allocate(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPixelBufferObject_Allocate(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkPixelBufferObject_Allocate_s1(self, args);
    case 2:
      return PyvtkPixelBufferObject_Allocate_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Allocate");
  return nullptr;
}



static PyObject *
PyvtkPixelBufferObject_ReleaseMemory(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseMemory");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPixelBufferObject *op = static_cast<vtkPixelBufferObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReleaseMemory();
    }
    else
    {
      op->vtkPixelBufferObject::ReleaseMemory();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPixelBufferObject_IsSupported(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsSupported");

  vtkRenderWindow *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderWindow"))
  {
    bool tempr = vtkPixelBufferObject::IsSupported(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPixelBufferObject_Methods[] = {
  {"IsTypeOf", PyvtkPixelBufferObject_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPixelBufferObject_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPixelBufferObject_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPixelBufferObject\nC++: static vtkPixelBufferObject *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPixelBufferObject_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPixelBufferObject\nC++: vtkPixelBufferObject *NewInstance()\n\n"},
  {"SetContext", PyvtkPixelBufferObject_SetContext, METH_VARARGS,
   "V.SetContext(vtkRenderWindow)\nC++: void SetContext(vtkRenderWindow *context)\n\nGet/Set the context. Context must be a vtkOpenGLRenderWindow.\nThis does not increase the reference count of the context to\navoid reference loops. SetContext() may raise an error is the\nOpenGL context does not support the required OpenGL extensions.\n"},
  {"GetContext", PyvtkPixelBufferObject_GetContext, METH_VARARGS,
   "V.GetContext() -> vtkRenderWindow\nC++: vtkRenderWindow *GetContext()\n\nGet/Set the context. Context must be a vtkOpenGLRenderWindow.\nThis does not increase the reference count of the context to\navoid reference loops. SetContext() may raise an error is the\nOpenGL context does not support the required OpenGL extensions.\n"},
  {"GetUsage", PyvtkPixelBufferObject_GetUsage, METH_VARARGS,
   "V.GetUsage() -> int\nC++: virtual int GetUsage()\n\nUsage is a performance hint. Valid values are:\n- StreamDraw specified once by A, used few times S\n- StreamRead specified once by R, queried a few times by A\n- StreamCopy specified once by R, used a few times S\n- StaticDraw specified once by A, used many times S\n- StaticRead specified once by R, queried many times by A\n- StaticCopy specified once by R, used many times S\n- DynamicDraw respecified repeatedly by A, used many times S\n- DynamicRead respecified repeatedly by R, queried many times by\n  A\n- DynamicCopy respecified repeatedly by R, used many times S A:\n  the application S: as the source for GL drawing and image\n  specification commands. R: reading data from the GL Initial\n  value is StaticDraw, as in OpenGL spec.\n"},
  {"SetUsage", PyvtkPixelBufferObject_SetUsage, METH_VARARGS,
   "V.SetUsage(int)\nC++: virtual void SetUsage(int _arg)\n\nUsage is a performance hint. Valid values are:\n- StreamDraw specified once by A, used few times S\n- StreamRead specified once by R, queried a few times by A\n- StreamCopy specified once by R, used a few times S\n- StaticDraw specified once by A, used many times S\n- StaticRead specified once by R, queried many times by A\n- StaticCopy specified once by R, used many times S\n- DynamicDraw respecified repeatedly by A, used many times S\n- DynamicRead respecified repeatedly by R, queried many times by\n  A\n- DynamicCopy respecified repeatedly by R, used many times S A:\n  the application S: as the source for GL drawing and image\n  specification commands. R: reading data from the GL Initial\n  value is StaticDraw, as in OpenGL spec.\n"},
  {"Upload1D", PyvtkPixelBufferObject_Upload1D, METH_VARARGS,
   "V.Upload1D(int, void, int, int, int) -> bool\nC++: bool Upload1D(int type, void *data, unsigned int numtuples,\n    int comps, vtkIdType increment)\n\nUpload data to PBO mapped. The input data can be freed after this\ncall. The data ptr is treated as an 1D array with the given\nnumber of tuples and given number of components in each tuple to\nbe copied to the PBO mapped. increment is the offset added after\nthe last component in each tuple is transferred. Look at the\ndocumentation for ContinuousIncrements in vtkImageData for\ndetails about how increments are specified.\n"},
  {"Upload2D", PyvtkPixelBufferObject_Upload2D, METH_VARARGS,
   "V.Upload2D(int, void, [int, int], int, [int, int]) -> bool\nC++: bool Upload2D(int type, void *data, unsigned int dims[2],\n    int comps, vtkIdType increments[2])\n\nUpdate data to PBO mapped sourcing it from a 2D array. The input\ndata can be freed after this call. The data ptr is treated as a\n2D array with increments indicating how to iterate over the data.\nLook at the documentation for ContinuousIncrements in\nvtkImageData for details about how increments are specified.\n"},
  {"Upload3D", PyvtkPixelBufferObject_Upload3D, METH_VARARGS,
   "V.Upload3D(int, void, [int, int, int], int, [int, int, int], int,\n    [int, ...]) -> bool\nC++: bool Upload3D(int type, void *data, unsigned int dims[3],\n    int comps, vtkIdType increments[3], int components,\n    int *componentList)\n\nUpdate data to PBO mapped sourcing it from a 3D array. The input\ndata can be freed after this call. The data ptr is treated as a\n3D array with increments indicating how to iterate over the data.\nLook at the documentation for ContinuousIncrements in\nvtkImageData for details about how increments are specified.\n"},
  {"GetType", PyvtkPixelBufferObject_GetType, METH_VARARGS,
   "V.GetType() -> int\nC++: virtual int GetType()\n\nGet the type with which the data is loaded into the PBO mapped.\neg. VTK_FLOAT for float32, VTK_CHAR for byte, VTK_UNSIGNED_CHAR\nfor unsigned byte etc.\n"},
  {"SetType", PyvtkPixelBufferObject_SetType, METH_VARARGS,
   "V.SetType(int)\nC++: virtual void SetType(int _arg)\n\nGet the type with which the data is loaded into the PBO mapped.\neg. VTK_FLOAT for float32, VTK_CHAR for byte, VTK_UNSIGNED_CHAR\nfor unsigned byte etc.\n"},
  {"GetComponents", PyvtkPixelBufferObject_GetComponents, METH_VARARGS,
   "V.GetComponents() -> int\nC++: virtual int GetComponents()\n\nGet the number of components used to initialize the buffer.\n"},
  {"SetComponents", PyvtkPixelBufferObject_SetComponents, METH_VARARGS,
   "V.SetComponents(int)\nC++: virtual void SetComponents(int _arg)\n\nGet the number of components used to initialize the buffer.\n"},
  {"GetSize", PyvtkPixelBufferObject_GetSize, METH_VARARGS,
   "V.GetSize() -> int\nC++: virtual unsigned int GetSize()\n\nGet the size of the data loaded into the PBO mapped memory. Size\nis in the number of elements of the uploaded Type.\n"},
  {"SetSize", PyvtkPixelBufferObject_SetSize, METH_VARARGS,
   "V.SetSize(int)\nC++: virtual void SetSize(unsigned int _arg)\nV.SetSize(int, int)\nC++: void SetSize(unsigned int nTups, int nComps)\n\nGet the size of the data loaded into the PBO mapped memory. Size\nis in the number of elements of the uploaded Type.\n"},
  {"GetHandle", PyvtkPixelBufferObject_GetHandle, METH_VARARGS,
   "V.GetHandle() -> int\nC++: virtual unsigned int GetHandle()\n\nGet the openGL buffer handle.\n"},
  {"Download1D", PyvtkPixelBufferObject_Download1D, METH_VARARGS,
   "V.Download1D(int, void, int, int, int) -> bool\nC++: bool Download1D(int type, void *data, unsigned int dim,\n    int numcomps, vtkIdType increment)\n\nDownload data from pixel buffer to the 1D array. The length of\nthe array must be equal to the size of the data in the memory.\n"},
  {"Download2D", PyvtkPixelBufferObject_Download2D, METH_VARARGS,
   "V.Download2D(int, void, [int, int], int, [int, int]) -> bool\nC++: bool Download2D(int type, void *data, unsigned int dims[2],\n    int numcomps, vtkIdType increments[2])\n\nDownload data from pixel buffer to the 2D array. (lengthx *\nlengthy) must be equal to the size of the data in the memory.\n"},
  {"Download3D", PyvtkPixelBufferObject_Download3D, METH_VARARGS,
   "V.Download3D(int, void, [int, int, int], int, [int, int, int])\n    -> bool\nC++: bool Download3D(int type, void *data, unsigned int dims[3],\n    int numcomps, vtkIdType increments[3])\n\nDownload data from pixel buffer to the 3D array. (lengthx *\nlengthy * lengthz) must be equal to the size of the data in the\nmemory.\n"},
  {"BindToPackedBuffer", PyvtkPixelBufferObject_BindToPackedBuffer, METH_VARARGS,
   "V.BindToPackedBuffer()\nC++: void BindToPackedBuffer()\n\nConvenience methods for binding.\n"},
  {"BindToUnPackedBuffer", PyvtkPixelBufferObject_BindToUnPackedBuffer, METH_VARARGS,
   "V.BindToUnPackedBuffer()\nC++: void BindToUnPackedBuffer()\n\n"},
  {"UnBind", PyvtkPixelBufferObject_UnBind, METH_VARARGS,
   "V.UnBind()\nC++: void UnBind()\n\nDeactivate the buffer.\n"},
  {"MapPackedBuffer", PyvtkPixelBufferObject_MapPackedBuffer, METH_VARARGS,
   "V.MapPackedBuffer() -> void\nC++: void *MapPackedBuffer()\nV.MapPackedBuffer(int, int, int) -> void\nC++: void *MapPackedBuffer(int type, unsigned int numtuples,\n    int comps)\nV.MapPackedBuffer(int) -> void\nC++: void *MapPackedBuffer(unsigned int numbytes)\n\nConvenience api for mapping buffers to app address space. See\nalso MapBuffer.\n"},
  {"MapUnpackedBuffer", PyvtkPixelBufferObject_MapUnpackedBuffer, METH_VARARGS,
   "V.MapUnpackedBuffer() -> void\nC++: void *MapUnpackedBuffer()\nV.MapUnpackedBuffer(int, int, int) -> void\nC++: void *MapUnpackedBuffer(int type, unsigned int numtuples,\n    int comps)\nV.MapUnpackedBuffer(int) -> void\nC++: void *MapUnpackedBuffer(unsigned int numbytes)\n\n"},
  {"UnmapUnpackedBuffer", PyvtkPixelBufferObject_UnmapUnpackedBuffer, METH_VARARGS,
   "V.UnmapUnpackedBuffer()\nC++: void UnmapUnpackedBuffer()\n\nConvenience api for unmapping buffers from app address space. See\nalso UnmapBuffer.\n"},
  {"UnmapPackedBuffer", PyvtkPixelBufferObject_UnmapPackedBuffer, METH_VARARGS,
   "V.UnmapPackedBuffer()\nC++: void UnmapPackedBuffer()\n\n"},
  {"Bind", PyvtkPixelBufferObject_Bind, METH_VARARGS,
   "V.Bind(BufferType)\nC++: void Bind(BufferType buffer)\n\nMake the buffer active.\n"},
  {"MapBuffer", PyvtkPixelBufferObject_MapBuffer, METH_VARARGS,
   "V.MapBuffer(int, int, int, BufferType) -> void\nC++: void *MapBuffer(int type, unsigned int numtuples, int comps,\n    BufferType mode)\nV.MapBuffer(int, BufferType) -> void\nC++: void *MapBuffer(unsigned int numbytes, BufferType mode)\nV.MapBuffer(BufferType) -> void\nC++: void *MapBuffer(BufferType mode)\n\nMap the buffer to our addresspace. Returns a pointer to the\nmapped memory for read/write access. If type, tuples and\ncomponents are specified new buffer data will be allocated, else\nthe current allocation is mapped. When finished call UnmapBuffer.\n"},
  {"UnmapBuffer", PyvtkPixelBufferObject_UnmapBuffer, METH_VARARGS,
   "V.UnmapBuffer(BufferType)\nC++: void UnmapBuffer(BufferType mode)\n\nUn-map the buffer from our address space, OpenGL can then\nuse/reclaim the buffer contents.\n"},
  {"Allocate", PyvtkPixelBufferObject_Allocate, METH_VARARGS,
   "V.Allocate(int, int, int, BufferType)\nC++: void Allocate(int vtkType, unsigned int numtuples, int comps,\n     BufferType mode)\nV.Allocate(int, BufferType)\nC++: void Allocate(unsigned int nbytes, BufferType mode)\n\nAllocate PACKED/UNPACKED memory to hold numTuples*numComponents\nof vtkType.\n"},
  {"ReleaseMemory", PyvtkPixelBufferObject_ReleaseMemory, METH_VARARGS,
   "V.ReleaseMemory()\nC++: void ReleaseMemory()\n\nRelease the memory allocated without destroying the PBO handle.\n"},
  {"IsSupported", PyvtkPixelBufferObject_IsSupported, METH_VARARGS,
   "V.IsSupported(vtkRenderWindow) -> bool\nC++: static bool IsSupported(vtkRenderWindow *renWin)\n\nReturns if the context supports the required extensions.\nExtension will be loaded when the context is set.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPixelBufferObject_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingOpenGL2Python.vtkPixelBufferObject", // tp_name
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
  PyvtkPixelBufferObject_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPixelBufferObject_StaticNew()
{
  return vtkPixelBufferObject::New();
}

PyObject *PyvtkPixelBufferObject_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPixelBufferObject_Type, PyvtkPixelBufferObject_Methods,
    "vtkPixelBufferObject",
 &PyvtkPixelBufferObject_StaticNew);

  PyTypeObject *pytype = &PyvtkPixelBufferObject_Type;

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

  PyType_Ready(&PyvtkPixelBufferObject_BufferType_Type);
  PyvtkPixelBufferObject_BufferType_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkPixelBufferObject_BufferType_Type);

  o = (PyObject *)&PyvtkPixelBufferObject_BufferType_Type;
  if (PyDict_SetItemString(d, "BufferType", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 10; c++)
  {
    static const struct { const char *name; int value; }
      constants[10] = {
        { "StreamDraw", vtkPixelBufferObject::StreamDraw },
        { "StreamRead", vtkPixelBufferObject::StreamRead },
        { "StreamCopy", vtkPixelBufferObject::StreamCopy },
        { "StaticDraw", vtkPixelBufferObject::StaticDraw },
        { "StaticRead", vtkPixelBufferObject::StaticRead },
        { "StaticCopy", vtkPixelBufferObject::StaticCopy },
        { "DynamicDraw", vtkPixelBufferObject::DynamicDraw },
        { "DynamicRead", vtkPixelBufferObject::DynamicRead },
        { "DynamicCopy", vtkPixelBufferObject::DynamicCopy },
        { "NumberOfUsages", vtkPixelBufferObject::NumberOfUsages },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 2; c++)
  {
    typedef vtkPixelBufferObject::BufferType cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[2] = {
        { "UNPACKED_BUFFER", vtkPixelBufferObject::UNPACKED_BUFFER },
        { "PACKED_BUFFER", vtkPixelBufferObject::PACKED_BUFFER },
      };

    o = PyvtkPixelBufferObject_BufferType_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPixelBufferObject(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPixelBufferObject_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPixelBufferObject", o) != 0)
  {
    Py_DECREF(o);
  }

}

