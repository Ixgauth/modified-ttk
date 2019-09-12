// python wrapper for vtkTextureObject
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
#include "vtkTextureObject.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkTextureObject(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkTextureObject_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkTextureObject_Doc =
  "vtkTextureObject - abstracts an OpenGL texture object.\n\n"
  "Superclass: vtkObject\n\n"
  "vtkTextureObject represents an OpenGL texture object. It provides API\n"
  "to create textures using data already loaded into pixel buffer\n"
  "objects. It can also be used to create textures without uploading any\n"
  "data.\n\n";


static PyObject *
PyvtkTextureObject_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTextureObject::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextureObject_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTextureObject::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextureObject_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTextureObject *tempr = vtkTextureObject::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextureObject_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTextureObject *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTextureObject::NewInstance());

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
PyvtkTextureObject_SetContext(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetContext");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  vtkOpenGLRenderWindow *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkOpenGLRenderWindow"))
  {
    if (ap.IsBound())
    {
      op->SetContext(temp0);
    }
    else
    {
      op->vtkTextureObject::SetContext(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextureObject_GetContext(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContext");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkOpenGLRenderWindow *tempr = (ap.IsBound() ?
      op->GetContext() :
      op->vtkTextureObject::GetContext());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextureObject_GetWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetWidth() :
      op->vtkTextureObject::GetWidth());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextureObject_GetHeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetHeight() :
      op->vtkTextureObject::GetHeight());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextureObject_GetDepth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDepth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetDepth() :
      op->vtkTextureObject::GetDepth());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextureObject_GetSamples(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSamples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetSamples() :
      op->vtkTextureObject::GetSamples());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextureObject_GetComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetComponents() :
      op->vtkTextureObject::GetComponents());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextureObject_GetTuples(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTuples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetTuples() :
      op->vtkTextureObject::GetTuples());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextureObject_GetNumberOfDimensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfDimensions() :
      op->vtkTextureObject::GetNumberOfDimensions());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextureObject_SetSamples(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSamples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSamples(temp0);
    }
    else
    {
      op->vtkTextureObject::SetSamples(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextureObject_GetTarget(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTarget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetTarget() :
      op->vtkTextureObject::GetTarget());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextureObject_GetHandle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHandle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetHandle() :
      op->vtkTextureObject::GetHandle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextureObject_GetTextureUnit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextureUnit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTextureUnit() :
      op->vtkTextureObject::GetTextureUnit());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextureObject_Bind(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Bind");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Bind();
    }
    else
    {
      op->vtkTextureObject::Bind();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextureObject_Activate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Activate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Activate();
    }
    else
    {
      op->vtkTextureObject::Activate();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextureObject_Deactivate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Deactivate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Deactivate();
    }
    else
    {
      op->vtkTextureObject::Deactivate();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextureObject_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  vtkWindow *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkWindow"))
  {
    if (ap.IsBound())
    {
      op->ReleaseGraphicsResources(temp0);
    }
    else
    {
      op->vtkTextureObject::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextureObject_IsBound(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsBound");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsBound() :
      op->vtkTextureObject::IsBound());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextureObject_SendParameters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SendParameters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SendParameters();
    }
    else
    {
      op->vtkTextureObject::SendParameters();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextureObject_SetAutoParameters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAutoParameters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAutoParameters(temp0);
    }
    else
    {
      op->vtkTextureObject::SetAutoParameters(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextureObject_GetAutoParameters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutoParameters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAutoParameters() :
      op->vtkTextureObject::GetAutoParameters());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextureObject_Create2DFromRaw(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Create2DFromRaw");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  int temp2;
  int temp3;
  void  *temp4 = nullptr;
  Py_buffer pbuf4 = VTK_PYBUFFER_INITIALIZER;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetBuffer(temp4, &pbuf4))
  {
    bool tempr = (ap.IsBound() ?
      op->Create2DFromRaw(temp0, temp1, temp2, temp3, temp4) :
      op->vtkTextureObject::Create2DFromRaw(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

#if PY_VERSION_HEX >= 0x02060000
  if (pbuf4.obj != 0)
  {
    PyBuffer_Release(&pbuf4);
  }
#endif
  return result;
}


static PyObject *
PyvtkTextureObject_CreateDepthFromRaw(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDepthFromRaw");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  int temp2;
  int temp3;
  void  *temp4 = nullptr;
  Py_buffer pbuf4 = VTK_PYBUFFER_INITIALIZER;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetBuffer(temp4, &pbuf4))
  {
    bool tempr = (ap.IsBound() ?
      op->CreateDepthFromRaw(temp0, temp1, temp2, temp3, temp4) :
      op->vtkTextureObject::CreateDepthFromRaw(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

#if PY_VERSION_HEX >= 0x02060000
  if (pbuf4.obj != 0)
  {
    PyBuffer_Release(&pbuf4);
  }
#endif
  return result;
}


static PyObject *
PyvtkTextureObject_CreateTextureBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateTextureBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  unsigned int temp0;
  int temp1;
  int temp2;
  vtkOpenGLBufferObject *temp3 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetVTKObject(temp3, "vtkOpenGLBufferObject"))
  {
    bool tempr = (ap.IsBound() ?
      op->CreateTextureBuffer(temp0, temp1, temp2, temp3) :
      op->vtkTextureObject::CreateTextureBuffer(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextureObject_Create1D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Create1D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  int temp0;
  vtkPixelBufferObject *temp1 = nullptr;
  bool temp2 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkPixelBufferObject") &&
      ap.GetValue(temp2))
  {
    bool tempr = (ap.IsBound() ?
      op->Create1D(temp0, temp1, temp2) :
      op->vtkTextureObject::Create1D(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextureObject_Create1DFromRaw(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Create1DFromRaw");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  unsigned int temp0;
  int temp1;
  int temp2;
  void  *temp3 = nullptr;
  Py_buffer pbuf3 = VTK_PYBUFFER_INITIALIZER;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetBuffer(temp3, &pbuf3))
  {
    bool tempr = (ap.IsBound() ?
      op->Create1DFromRaw(temp0, temp1, temp2, temp3) :
      op->vtkTextureObject::Create1DFromRaw(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

#if PY_VERSION_HEX >= 0x02060000
  if (pbuf3.obj != 0)
  {
    PyBuffer_Release(&pbuf3);
  }
#endif
  return result;
}


static PyObject *
PyvtkTextureObject_Create2D_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Create2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  int temp2;
  vtkPixelBufferObject *temp3 = nullptr;
  bool temp4 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetVTKObject(temp3, "vtkPixelBufferObject") &&
      ap.GetValue(temp4))
  {
    bool tempr = (ap.IsBound() ?
      op->Create2D(temp0, temp1, temp2, temp3, temp4) :
      op->vtkTextureObject::Create2D(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkTextureObject_Create2D_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Create2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  int temp2;
  int temp3;
  bool temp4 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    bool tempr = (ap.IsBound() ?
      op->Create2D(temp0, temp1, temp2, temp3, temp4) :
      op->vtkTextureObject::Create2D(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkTextureObject_Create2D_Methods[] = {
  {nullptr, PyvtkTextureObject_Create2D_s1, METH_VARARGS,
   "@IIiVq *vtkPixelBufferObject"},
  {nullptr, PyvtkTextureObject_Create2D_s2, METH_VARARGS,
   "@IIiiq"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkTextureObject_Create2D(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTextureObject_Create2D_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 5:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Create2D");
  return nullptr;
}



static PyObject *
PyvtkTextureObject_Create3D_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Create3D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  unsigned int temp2;
  int temp3;
  vtkPixelBufferObject *temp4 = nullptr;
  bool temp5 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetVTKObject(temp4, "vtkPixelBufferObject") &&
      ap.GetValue(temp5))
  {
    bool tempr = (ap.IsBound() ?
      op->Create3D(temp0, temp1, temp2, temp3, temp4, temp5) :
      op->vtkTextureObject::Create3D(temp0, temp1, temp2, temp3, temp4, temp5));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkTextureObject_Create3D_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Create3D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  unsigned int temp2;
  int temp3;
  int temp4;
  bool temp5 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
  {
    bool tempr = (ap.IsBound() ?
      op->Create3D(temp0, temp1, temp2, temp3, temp4, temp5) :
      op->vtkTextureObject::Create3D(temp0, temp1, temp2, temp3, temp4, temp5));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkTextureObject_Create3D_Methods[] = {
  {nullptr, PyvtkTextureObject_Create3D_s1, METH_VARARGS,
   "@IIIiVq *vtkPixelBufferObject"},
  {nullptr, PyvtkTextureObject_Create3D_s2, METH_VARARGS,
   "@IIIiiq"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkTextureObject_Create3D(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTextureObject_Create3D_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Create3D");
  return nullptr;
}



static PyObject *
PyvtkTextureObject_Create3DFromRaw(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Create3DFromRaw");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  unsigned int temp2;
  int temp3;
  int temp4;
  void  *temp5 = nullptr;
  Py_buffer pbuf5 = VTK_PYBUFFER_INITIALIZER;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetBuffer(temp5, &pbuf5))
  {
    bool tempr = (ap.IsBound() ?
      op->Create3DFromRaw(temp0, temp1, temp2, temp3, temp4, temp5) :
      op->vtkTextureObject::Create3DFromRaw(temp0, temp1, temp2, temp3, temp4, temp5));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

#if PY_VERSION_HEX >= 0x02060000
  if (pbuf5.obj != 0)
  {
    PyBuffer_Release(&pbuf5);
  }
#endif
  return result;
}


static PyObject *
PyvtkTextureObject_AllocateProxyTexture3D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllocateProxyTexture3D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  unsigned int temp2;
  int temp3;
  int temp4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    bool tempr = (ap.IsBound() ?
      op->AllocateProxyTexture3D(temp0, temp1, temp2, temp3, temp4) :
      op->vtkTextureObject::AllocateProxyTexture3D(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextureObject_Download(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Download");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPixelBufferObject *tempr = (ap.IsBound() ?
      op->Download() :
      op->vtkTextureObject::Download());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextureObject_CreateDepth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDepth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  int temp2;
  vtkPixelBufferObject *temp3 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetVTKObject(temp3, "vtkPixelBufferObject"))
  {
    bool tempr = (ap.IsBound() ?
      op->CreateDepth(temp0, temp1, temp2, temp3) :
      op->vtkTextureObject::CreateDepth(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextureObject_AllocateDepth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllocateDepth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    bool tempr = (ap.IsBound() ?
      op->AllocateDepth(temp0, temp1, temp2) :
      op->vtkTextureObject::AllocateDepth(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextureObject_Allocate1D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Allocate1D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  unsigned int temp0;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    bool tempr = (ap.IsBound() ?
      op->Allocate1D(temp0, temp1, temp2) :
      op->vtkTextureObject::Allocate1D(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextureObject_Allocate2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Allocate2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  int temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    bool tempr = (ap.IsBound() ?
      op->Allocate2D(temp0, temp1, temp2, temp3) :
      op->vtkTextureObject::Allocate2D(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextureObject_Allocate3D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Allocate3D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  unsigned int temp2;
  int temp3;
  int temp4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    bool tempr = (ap.IsBound() ?
      op->Allocate3D(temp0, temp1, temp2, temp3, temp4) :
      op->vtkTextureObject::Allocate3D(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextureObject_GetVTKDataType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVTKDataType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetVTKDataType() :
      op->vtkTextureObject::GetVTKDataType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextureObject_GetDataType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataType(temp0) :
      op->vtkTextureObject::GetDataType(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextureObject_SetDataType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  unsigned int temp0;
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
      op->vtkTextureObject::SetDataType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextureObject_GetDefaultDataType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultDataType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDefaultDataType(temp0) :
      op->vtkTextureObject::GetDefaultDataType(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextureObject_GetInternalFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInternalFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  int temp0;
  int temp1;
  bool temp2 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetInternalFormat(temp0, temp1, temp2) :
      op->vtkTextureObject::GetInternalFormat(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextureObject_SetInternalFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInternalFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInternalFormat(temp0);
    }
    else
    {
      op->vtkTextureObject::SetInternalFormat(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextureObject_GetDefaultInternalFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultInternalFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  int temp0;
  int temp1;
  bool temp2 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetDefaultInternalFormat(temp0, temp1, temp2) :
      op->vtkTextureObject::GetDefaultInternalFormat(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextureObject_GetFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  int temp0;
  int temp1;
  bool temp2 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetFormat(temp0, temp1, temp2) :
      op->vtkTextureObject::GetFormat(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextureObject_SetFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFormat(temp0);
    }
    else
    {
      op->vtkTextureObject::SetFormat(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextureObject_GetDefaultFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  int temp0;
  int temp1;
  bool temp2 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetDefaultFormat(temp0, temp1, temp2) :
      op->vtkTextureObject::GetDefaultFormat(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextureObject_ResetFormatAndType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetFormatAndType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ResetFormatAndType();
    }
    else
    {
      op->vtkTextureObject::ResetFormatAndType();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextureObject_GetMinificationFilterMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinificationFilterMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetMinificationFilterMode(temp0) :
      op->vtkTextureObject::GetMinificationFilterMode(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextureObject_GetMagnificationFilterMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMagnificationFilterMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetMagnificationFilterMode(temp0) :
      op->vtkTextureObject::GetMagnificationFilterMode(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextureObject_GetWrapSMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWrapSMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetWrapSMode(temp0) :
      op->vtkTextureObject::GetWrapSMode(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextureObject_GetWrapTMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWrapTMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetWrapTMode(temp0) :
      op->vtkTextureObject::GetWrapTMode(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextureObject_GetWrapRMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWrapRMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetWrapRMode(temp0) :
      op->vtkTextureObject::GetWrapRMode(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextureObject_SetRequireDepthBufferFloat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRequireDepthBufferFloat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRequireDepthBufferFloat(temp0);
    }
    else
    {
      op->vtkTextureObject::SetRequireDepthBufferFloat(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextureObject_GetRequireDepthBufferFloat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRequireDepthBufferFloat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetRequireDepthBufferFloat() :
      op->vtkTextureObject::GetRequireDepthBufferFloat());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextureObject_GetSupportsDepthBufferFloat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSupportsDepthBufferFloat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetSupportsDepthBufferFloat() :
      op->vtkTextureObject::GetSupportsDepthBufferFloat());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextureObject_SetRequireTextureFloat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRequireTextureFloat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRequireTextureFloat(temp0);
    }
    else
    {
      op->vtkTextureObject::SetRequireTextureFloat(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextureObject_GetRequireTextureFloat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRequireTextureFloat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetRequireTextureFloat() :
      op->vtkTextureObject::GetRequireTextureFloat());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextureObject_GetSupportsTextureFloat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSupportsTextureFloat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetSupportsTextureFloat() :
      op->vtkTextureObject::GetSupportsTextureFloat());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextureObject_SetRequireTextureInteger(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRequireTextureInteger");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRequireTextureInteger(temp0);
    }
    else
    {
      op->vtkTextureObject::SetRequireTextureInteger(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextureObject_GetRequireTextureInteger(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRequireTextureInteger");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetRequireTextureInteger() :
      op->vtkTextureObject::GetRequireTextureInteger());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextureObject_GetSupportsTextureInteger(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSupportsTextureInteger");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetSupportsTextureInteger() :
      op->vtkTextureObject::GetSupportsTextureInteger());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextureObject_GetWrapS(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWrapS");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetWrapS() :
      op->vtkTextureObject::GetWrapS());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextureObject_SetWrapS(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWrapS");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetWrapS(temp0);
    }
    else
    {
      op->vtkTextureObject::SetWrapS(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextureObject_GetWrapT(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWrapT");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetWrapT() :
      op->vtkTextureObject::GetWrapT());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextureObject_SetWrapT(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWrapT");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetWrapT(temp0);
    }
    else
    {
      op->vtkTextureObject::SetWrapT(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextureObject_GetWrapR(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWrapR");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetWrapR() :
      op->vtkTextureObject::GetWrapR());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextureObject_SetWrapR(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWrapR");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetWrapR(temp0);
    }
    else
    {
      op->vtkTextureObject::SetWrapR(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextureObject_GetMinificationFilter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinificationFilter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMinificationFilter() :
      op->vtkTextureObject::GetMinificationFilter());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextureObject_SetMinificationFilter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinificationFilter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMinificationFilter(temp0);
    }
    else
    {
      op->vtkTextureObject::SetMinificationFilter(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextureObject_GetMagnificationFilter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMagnificationFilter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMagnificationFilter() :
      op->vtkTextureObject::GetMagnificationFilter());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextureObject_SetMagnificationFilter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMagnificationFilter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMagnificationFilter(temp0);
    }
    else
    {
      op->vtkTextureObject::SetMagnificationFilter(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextureObject_SetLinearMagnification(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLinearMagnification");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLinearMagnification(temp0);
    }
    else
    {
      op->vtkTextureObject::SetLinearMagnification(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextureObject_GetLinearMagnification(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLinearMagnification");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetLinearMagnification() :
      op->vtkTextureObject::GetLinearMagnification());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextureObject_SetBorderColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBorderColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  float temp0;
  float temp1;
  float temp2;
  float temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->SetBorderColor(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkTextureObject::SetBorderColor(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTextureObject_SetBorderColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBorderColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  const size_t size0 = 4;
  float temp0[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetBorderColor(temp0);
    }
    else
    {
      op->vtkTextureObject::SetBorderColor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTextureObject_SetBorderColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkTextureObject_SetBorderColor_s1(self, args);
    case 1:
      return PyvtkTextureObject_SetBorderColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetBorderColor");
  return nullptr;
}



static PyObject *
PyvtkTextureObject_GetBorderColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBorderColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  size_t sizer = 4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float *tempr = (ap.IsBound() ?
      op->GetBorderColor() :
      op->vtkTextureObject::GetBorderColor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkTextureObject_SetMinLOD(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinLOD");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMinLOD(temp0);
    }
    else
    {
      op->vtkTextureObject::SetMinLOD(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextureObject_GetMinLOD(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinLOD");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetMinLOD() :
      op->vtkTextureObject::GetMinLOD());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextureObject_SetMaxLOD(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxLOD");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaxLOD(temp0);
    }
    else
    {
      op->vtkTextureObject::SetMaxLOD(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextureObject_GetMaxLOD(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxLOD");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetMaxLOD() :
      op->vtkTextureObject::GetMaxLOD());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextureObject_SetBaseLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBaseLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBaseLevel(temp0);
    }
    else
    {
      op->vtkTextureObject::SetBaseLevel(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextureObject_GetBaseLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBaseLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBaseLevel() :
      op->vtkTextureObject::GetBaseLevel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextureObject_SetMaxLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaxLevel(temp0);
    }
    else
    {
      op->vtkTextureObject::SetMaxLevel(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextureObject_GetMaxLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaxLevel() :
      op->vtkTextureObject::GetMaxLevel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextureObject_GetDepthTextureCompare(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDepthTextureCompare");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetDepthTextureCompare() :
      op->vtkTextureObject::GetDepthTextureCompare());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextureObject_SetDepthTextureCompare(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDepthTextureCompare");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDepthTextureCompare(temp0);
    }
    else
    {
      op->vtkTextureObject::SetDepthTextureCompare(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextureObject_GetDepthTextureCompareFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDepthTextureCompareFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDepthTextureCompareFunction() :
      op->vtkTextureObject::GetDepthTextureCompareFunction());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextureObject_SetDepthTextureCompareFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDepthTextureCompareFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDepthTextureCompareFunction(temp0);
    }
    else
    {
      op->vtkTextureObject::SetDepthTextureCompareFunction(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextureObject_GetGenerateMipmap(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateMipmap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetGenerateMipmap() :
      op->vtkTextureObject::GetGenerateMipmap());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextureObject_SetGenerateMipmap(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateMipmap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateMipmap(temp0);
    }
    else
    {
      op->vtkTextureObject::SetGenerateMipmap(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextureObject_GetMaximumTextureSize(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetMaximumTextureSize");

  vtkOpenGLRenderWindow *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkOpenGLRenderWindow"))
  {
    int tempr = vtkTextureObject::GetMaximumTextureSize(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextureObject_GetMaximumTextureSize3D_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetMaximumTextureSize3D");

  vtkOpenGLRenderWindow *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkOpenGLRenderWindow"))
  {
    int tempr = vtkTextureObject::GetMaximumTextureSize3D(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkTextureObject_GetMaximumTextureSize3D_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumTextureSize3D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaximumTextureSize3D() :
      op->vtkTextureObject::GetMaximumTextureSize3D());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkTextureObject_GetMaximumTextureSize3D_Methods[] = {
  {nullptr, PyvtkTextureObject_GetMaximumTextureSize3D_s1, METH_VARARGS | METH_STATIC,
   "V *vtkOpenGLRenderWindow"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkTextureObject_GetMaximumTextureSize3D(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTextureObject_GetMaximumTextureSize3D_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkTextureObject_GetMaximumTextureSize3D_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetMaximumTextureSize3D");
  return nullptr;
}



static PyObject *
PyvtkTextureObject_IsSupported_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsSupported");

  vtkOpenGLRenderWindow *temp0 = nullptr;
  bool temp1 = false;
  bool temp2 = false;
  bool temp3 = false;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkOpenGLRenderWindow") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    bool tempr = vtkTextureObject::IsSupported(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkTextureObject_IsSupported_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsSupported");

  vtkOpenGLRenderWindow *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkOpenGLRenderWindow"))
  {
    bool tempr = vtkTextureObject::IsSupported(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkTextureObject_IsSupported(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 4:
      return PyvtkTextureObject_IsSupported_s1(self, args);
    case 1:
      return PyvtkTextureObject_IsSupported_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "IsSupported");
  return nullptr;
}



static PyObject *
PyvtkTextureObject_CopyToFrameBuffer_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyToFrameBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  vtkShaderProgram *temp0 = nullptr;
  vtkOpenGLVertexArrayObject *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkShaderProgram") &&
      ap.GetVTKObject(temp1, "vtkOpenGLVertexArrayObject"))
  {
    if (ap.IsBound())
    {
      op->CopyToFrameBuffer(temp0, temp1);
    }
    else
    {
      op->vtkTextureObject::CopyToFrameBuffer(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTextureObject_CopyToFrameBuffer_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyToFrameBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  int temp5;
  int temp6;
  int temp7;
  int temp8;
  int temp9;
  vtkShaderProgram *temp10 = nullptr;
  vtkOpenGLVertexArrayObject *temp11 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(12) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6) &&
      ap.GetValue(temp7) &&
      ap.GetValue(temp8) &&
      ap.GetValue(temp9) &&
      ap.GetVTKObject(temp10, "vtkShaderProgram") &&
      ap.GetVTKObject(temp11, "vtkOpenGLVertexArrayObject"))
  {
    if (ap.IsBound())
    {
      op->CopyToFrameBuffer(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9, temp10, temp11);
    }
    else
    {
      op->vtkTextureObject::CopyToFrameBuffer(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9, temp10, temp11);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTextureObject_CopyToFrameBuffer_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyToFrameBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  int temp5;
  int temp6;
  int temp7;
  vtkShaderProgram *temp8 = nullptr;
  vtkOpenGLVertexArrayObject *temp9 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(10) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6) &&
      ap.GetValue(temp7) &&
      ap.GetVTKObject(temp8, "vtkShaderProgram") &&
      ap.GetVTKObject(temp9, "vtkOpenGLVertexArrayObject"))
  {
    if (ap.IsBound())
    {
      op->CopyToFrameBuffer(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9);
    }
    else
    {
      op->vtkTextureObject::CopyToFrameBuffer(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTextureObject_CopyToFrameBuffer_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyToFrameBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<float> store0(2*size0);
  float *temp0 = store0.Data();
  float *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<float> store1(2*size1);
  float *temp1 = store1.Data();
  float *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  vtkShaderProgram *temp2 = nullptr;
  vtkOpenGLVertexArrayObject *temp3 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetVTKObject(temp2, "vtkShaderProgram") &&
      ap.GetVTKObject(temp3, "vtkOpenGLVertexArrayObject"))
  {
    ap.Save(temp0, save0, size0);
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->CopyToFrameBuffer(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkTextureObject::CopyToFrameBuffer(temp0, temp1, temp2, temp3);
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
PyvtkTextureObject_CopyToFrameBuffer(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkTextureObject_CopyToFrameBuffer_s1(self, args);
    case 12:
      return PyvtkTextureObject_CopyToFrameBuffer_s2(self, args);
    case 10:
      return PyvtkTextureObject_CopyToFrameBuffer_s3(self, args);
    case 4:
      return PyvtkTextureObject_CopyToFrameBuffer_s4(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "CopyToFrameBuffer");
  return nullptr;
}



static PyObject *
PyvtkTextureObject_CopyFromFrameBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyFromFrameBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

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
      op->CopyFromFrameBuffer(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkTextureObject::CopyFromFrameBuffer(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextureObject_GetShiftAndScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShiftAndScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  float temp0;
  float temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->GetShiftAndScale(temp0, temp1);
    }
    else
    {
      op->vtkTextureObject::GetShiftAndScale(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(0, temp0);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextureObject_Resize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Resize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->Resize(temp0, temp1);
    }
    else
    {
      op->vtkTextureObject::Resize(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextureObject_GetUseSRGBColorSpace(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseSRGBColorSpace");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseSRGBColorSpace() :
      op->vtkTextureObject::GetUseSRGBColorSpace());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextureObject_SetUseSRGBColorSpace(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseSRGBColorSpace");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseSRGBColorSpace(temp0);
    }
    else
    {
      op->vtkTextureObject::SetUseSRGBColorSpace(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextureObject_UseSRGBColorSpaceOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseSRGBColorSpaceOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseSRGBColorSpaceOn();
    }
    else
    {
      op->vtkTextureObject::UseSRGBColorSpaceOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextureObject_UseSRGBColorSpaceOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseSRGBColorSpaceOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureObject *op = static_cast<vtkTextureObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseSRGBColorSpaceOff();
    }
    else
    {
      op->vtkTextureObject::UseSRGBColorSpaceOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkTextureObject_Methods[] = {
  {"IsTypeOf", PyvtkTextureObject_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkTextureObject_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkTextureObject_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkTextureObject\nC++: static vtkTextureObject *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkTextureObject_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkTextureObject\nC++: vtkTextureObject *NewInstance()\n\n"},
  {"SetContext", PyvtkTextureObject_SetContext, METH_VARARGS,
   "V.SetContext(vtkOpenGLRenderWindow)\nC++: void SetContext(vtkOpenGLRenderWindow *)\n\nGet/Set the context. This does not increase the reference count\nof the context to avoid reference loops.\n\n* {\n* this->TextureObject = vtkTextureObject::New();\n* }SetContext() may raise an error is the OpenGL context does not\nsupport the\n* required OpenGL extensions.\n"},
  {"GetContext", PyvtkTextureObject_GetContext, METH_VARARGS,
   "V.GetContext() -> vtkOpenGLRenderWindow\nC++: vtkOpenGLRenderWindow *GetContext()\n\nGet/Set the context. This does not increase the reference count\nof the context to avoid reference loops.\n\n* {\n* this->TextureObject = vtkTextureObject::New();\n* }SetContext() may raise an error is the OpenGL context does not\nsupport the\n* required OpenGL extensions.\n"},
  {"GetWidth", PyvtkTextureObject_GetWidth, METH_VARARGS,
   "V.GetWidth() -> int\nC++: virtual unsigned int GetWidth()\n\nGet the texture dimensions. These are the properties of the\nOpenGL texture this instance represents.\n"},
  {"GetHeight", PyvtkTextureObject_GetHeight, METH_VARARGS,
   "V.GetHeight() -> int\nC++: virtual unsigned int GetHeight()\n\nGet the texture dimensions. These are the properties of the\nOpenGL texture this instance represents.\n"},
  {"GetDepth", PyvtkTextureObject_GetDepth, METH_VARARGS,
   "V.GetDepth() -> int\nC++: virtual unsigned int GetDepth()\n\nGet the texture dimensions. These are the properties of the\nOpenGL texture this instance represents.\n"},
  {"GetSamples", PyvtkTextureObject_GetSamples, METH_VARARGS,
   "V.GetSamples() -> int\nC++: virtual unsigned int GetSamples()\n\nGet the texture dimensions. These are the properties of the\nOpenGL texture this instance represents.\n"},
  {"GetComponents", PyvtkTextureObject_GetComponents, METH_VARARGS,
   "V.GetComponents() -> int\nC++: virtual int GetComponents()\n\nGet the texture dimensions. These are the properties of the\nOpenGL texture this instance represents.\n"},
  {"GetTuples", PyvtkTextureObject_GetTuples, METH_VARARGS,
   "V.GetTuples() -> int\nC++: unsigned int GetTuples()\n\nGet the texture dimensions. These are the properties of the\nOpenGL texture this instance represents.\n"},
  {"GetNumberOfDimensions", PyvtkTextureObject_GetNumberOfDimensions, METH_VARARGS,
   "V.GetNumberOfDimensions() -> int\nC++: virtual int GetNumberOfDimensions()\n\n"},
  {"SetSamples", PyvtkTextureObject_SetSamples, METH_VARARGS,
   "V.SetSamples(int)\nC++: virtual void SetSamples(unsigned int _arg)\n\n"},
  {"GetTarget", PyvtkTextureObject_GetTarget, METH_VARARGS,
   "V.GetTarget() -> int\nC++: virtual unsigned int GetTarget()\n\nReturns OpenGL texture target to which the texture is/can be\nbound.\n"},
  {"GetHandle", PyvtkTextureObject_GetHandle, METH_VARARGS,
   "V.GetHandle() -> int\nC++: virtual unsigned int GetHandle()\n\nReturns the OpenGL handle.\n"},
  {"GetTextureUnit", PyvtkTextureObject_GetTextureUnit, METH_VARARGS,
   "V.GetTextureUnit() -> int\nC++: int GetTextureUnit()\n\nReturn the texture unit used for this texture\n"},
  {"Bind", PyvtkTextureObject_Bind, METH_VARARGS,
   "V.Bind()\nC++: void Bind()\n\nBind the texture, must have been created using Create(). A side\naffect is that tex parameters are sent. RenderWindow must be set\nbefore calling this.\n"},
  {"Activate", PyvtkTextureObject_Activate, METH_VARARGS,
   "V.Activate()\nC++: void Activate()\n\nActivate and Bind the texture\n"},
  {"Deactivate", PyvtkTextureObject_Deactivate, METH_VARARGS,
   "V.Deactivate()\nC++: void Deactivate()\n\nDeactivate and UnBind the texture\n"},
  {"ReleaseGraphicsResources", PyvtkTextureObject_ReleaseGraphicsResources, METH_VARARGS,
   "V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *win)\n\nDeactivate and UnBind the texture\n"},
  {"IsBound", PyvtkTextureObject_IsBound, METH_VARARGS,
   "V.IsBound() -> bool\nC++: bool IsBound()\n\nTells if the texture object is bound to the active texture image\nunit. (a texture object can be bound to multiple texture image\nunit).\n"},
  {"SendParameters", PyvtkTextureObject_SendParameters, METH_VARARGS,
   "V.SendParameters()\nC++: void SendParameters()\n\nSend all the texture object parameters to the hardware if not\ndone yet. Parameters are automatically sent as a side affect of\nBind. Disable this by setting AutoParameters 0.\n\\pre is_bound: IsBound()\n"},
  {"SetAutoParameters", PyvtkTextureObject_SetAutoParameters, METH_VARARGS,
   "V.SetAutoParameters(int)\nC++: virtual void SetAutoParameters(int _arg)\n\nSend all the texture object parameters to the hardware if not\ndone yet. Parameters are automatically sent as a side affect of\nBind. Disable this by setting AutoParameters 0.\n\\pre is_bound: IsBound()\n"},
  {"GetAutoParameters", PyvtkTextureObject_GetAutoParameters, METH_VARARGS,
   "V.GetAutoParameters() -> int\nC++: virtual int GetAutoParameters()\n\nSend all the texture object parameters to the hardware if not\ndone yet. Parameters are automatically sent as a side affect of\nBind. Disable this by setting AutoParameters 0.\n\\pre is_bound: IsBound()\n"},
  {"Create2DFromRaw", PyvtkTextureObject_Create2DFromRaw, METH_VARARGS,
   "V.Create2DFromRaw(int, int, int, int, void) -> bool\nC++: bool Create2DFromRaw(unsigned int width, unsigned int height,\n     int numComps, int dataType, void *data)\n\nCreate a 2D texture from client memory numComps must be in [1-4].\n"},
  {"CreateDepthFromRaw", PyvtkTextureObject_CreateDepthFromRaw, METH_VARARGS,
   "V.CreateDepthFromRaw(int, int, int, int, void) -> bool\nC++: bool CreateDepthFromRaw(unsigned int width,\n    unsigned int height, int internalFormat, int rawType,\n    void *raw)\n\nCreate a 2D depth texture using a raw pointer. This is a blocking\ncall. If you can, use PBO instead.\n"},
  {"CreateTextureBuffer", PyvtkTextureObject_CreateTextureBuffer, METH_VARARGS,
   "V.CreateTextureBuffer(int, int, int, vtkOpenGLBufferObject)\n    -> bool\nC++: bool CreateTextureBuffer(unsigned int numValues,\n    int numComps, int dataType, vtkOpenGLBufferObject *bo)\n\nCreate a texture buffer basically a 1D texture that can be very\nlarge for passing data into the fragment shader\n"},
  {"Create1D", PyvtkTextureObject_Create1D, METH_VARARGS,
   "V.Create1D(int, vtkPixelBufferObject, bool) -> bool\nC++: bool Create1D(int numComps, vtkPixelBufferObject *pbo,\n    bool shaderSupportsTextureInt)\n\nCreate a 1D texture using the PBO. Eventually we may start\nsupporting creating a texture from subset of data in the PBO, but\nfor simplicity we'll begin with entire PBO data. numComps must be\nin [1-4]. shaderSupportsTextureInt is true if the shader has an\nalternate implementation supporting sampler with integer values.\nEven if the card supports texture int, it does not mean that the\nimplementor of the shader made a version that supports texture\nint.\n"},
  {"Create1DFromRaw", PyvtkTextureObject_Create1DFromRaw, METH_VARARGS,
   "V.Create1DFromRaw(int, int, int, void) -> bool\nC++: bool Create1DFromRaw(unsigned int width, int numComps,\n    int dataType, void *data)\n\nCreate 1D texture from client memory\n"},
  {"Create2D", PyvtkTextureObject_Create2D, METH_VARARGS,
   "V.Create2D(int, int, int, vtkPixelBufferObject, bool) -> bool\nC++: bool Create2D(unsigned int width, unsigned int height,\n    int numComps, vtkPixelBufferObject *pbo,\n    bool shaderSupportsTextureInt)\nV.Create2D(int, int, int, int, bool) -> bool\nC++: bool Create2D(unsigned int width, unsigned int height,\n    int numComps, int vtktype, bool)\n\nCreate a 2D texture using the PBO. Eventually we may start\nsupporting creating a texture from subset of data in the PBO, but\nfor simplicity we'll begin with entire PBO data. numComps must be\nin [1-4].\n"},
  {"Create3D", PyvtkTextureObject_Create3D, METH_VARARGS,
   "V.Create3D(int, int, int, int, vtkPixelBufferObject, bool) -> bool\nC++: bool Create3D(unsigned int width, unsigned int height,\n    unsigned int depth, int numComps, vtkPixelBufferObject *pbo,\n    bool shaderSupportsTextureInt)\nV.Create3D(int, int, int, int, int, bool) -> bool\nC++: bool Create3D(unsigned int width, unsigned int height,\n    unsigned int depth, int numComps, int vtktype, bool)\n\nCreate a 3D texture using the PBO. Eventually we may start\nsupporting creating a texture from subset of data in the PBO, but\nfor simplicity we'll begin with entire PBO data. numComps must be\nin [1-4].\n"},
  {"Create3DFromRaw", PyvtkTextureObject_Create3DFromRaw, METH_VARARGS,
   "V.Create3DFromRaw(int, int, int, int, int, void) -> bool\nC++: bool Create3DFromRaw(unsigned int width, unsigned int height,\n     unsigned int depth, int numComps, int dataType, void *data)\n\nCreate a 3D texture from client memory numComps must be in [1-4].\n"},
  {"AllocateProxyTexture3D", PyvtkTextureObject_AllocateProxyTexture3D, METH_VARARGS,
   "V.AllocateProxyTexture3D(int, int, int, int, int) -> bool\nC++: bool AllocateProxyTexture3D(unsigned int const width,\n    unsigned int const height, unsigned int const depth,\n    int const numComps, int const dataType)\n\nCreate a 3D texture using the GL_PROXY_TEXTURE_3D target.  This\nserves as a pre-allocation step which assists in verifying that\nthe size of the texture to be created is supported by the\nimplementation and that there is sufficient texture memory\navailable for it.\n"},
  {"Download", PyvtkTextureObject_Download, METH_VARARGS,
   "V.Download() -> vtkPixelBufferObject\nC++: vtkPixelBufferObject *Download()\n\nThis is used to download raw data from the texture into a pixel\nbuffer. The pixel buffer API can then be used to download the\npixel buffer data to CPU arrays. The caller takes on the\nresponsibility of deleting the returns vtkPixelBufferObject once\nit done with it.\n"},
  {"CreateDepth", PyvtkTextureObject_CreateDepth, METH_VARARGS,
   "V.CreateDepth(int, int, int, vtkPixelBufferObject) -> bool\nC++: bool CreateDepth(unsigned int width, unsigned int height,\n    int internalFormat, vtkPixelBufferObject *pbo)\n\nCreate a 2D depth texture using a PBO.\n\\pre: valid_internalFormat: internalFormat>=0 &&\n    internalFormat<NumberOfDepthFormats\n"},
  {"AllocateDepth", PyvtkTextureObject_AllocateDepth, METH_VARARGS,
   "V.AllocateDepth(int, int, int) -> bool\nC++: bool AllocateDepth(unsigned int width, unsigned int height,\n    int internalFormat)\n\nCreate a 2D depth texture but does not initialize its values.\n"},
  {"Allocate1D", PyvtkTextureObject_Allocate1D, METH_VARARGS,
   "V.Allocate1D(int, int, int) -> bool\nC++: bool Allocate1D(unsigned int width, int numComps,\n    int vtkType)\n\nCreate a 1D color texture but does not initialize its values.\nInternal format is deduced from numComps and vtkType.\n"},
  {"Allocate2D", PyvtkTextureObject_Allocate2D, METH_VARARGS,
   "V.Allocate2D(int, int, int, int) -> bool\nC++: bool Allocate2D(unsigned int width, unsigned int height,\n    int numComps, int vtkType)\n\nCreate a 2D color texture but does not initialize its values.\nInternal format is deduced from numComps and vtkType.\n"},
  {"Allocate3D", PyvtkTextureObject_Allocate3D, METH_VARARGS,
   "V.Allocate3D(int, int, int, int, int) -> bool\nC++: bool Allocate3D(unsigned int width, unsigned int height,\n    unsigned int depth, int numComps, int vtkType)\n\nCreate a 3D color texture but does not initialize its values.\nInternal format is deduced from numComps and vtkType.\n"},
  {"GetVTKDataType", PyvtkTextureObject_GetVTKDataType, METH_VARARGS,
   "V.GetVTKDataType() -> int\nC++: int GetVTKDataType()\n\nGet the data type for the texture as a vtk type int i.e. VTK_INT\netc.\n"},
  {"GetDataType", PyvtkTextureObject_GetDataType, METH_VARARGS,
   "V.GetDataType(int) -> int\nC++: int GetDataType(int vtk_scalar_type)\n\nGet the data type for the texture as GLenum type.\n"},
  {"SetDataType", PyvtkTextureObject_SetDataType, METH_VARARGS,
   "V.SetDataType(int)\nC++: void SetDataType(unsigned int glType)\n\nGet the data type for the texture as GLenum type.\n"},
  {"GetDefaultDataType", PyvtkTextureObject_GetDefaultDataType, METH_VARARGS,
   "V.GetDefaultDataType(int) -> int\nC++: int GetDefaultDataType(int vtk_scalar_type)\n\nGet the data type for the texture as GLenum type.\n"},
  {"GetInternalFormat", PyvtkTextureObject_GetInternalFormat, METH_VARARGS,
   "V.GetInternalFormat(int, int, bool) -> int\nC++: unsigned int GetInternalFormat(int vtktype, int numComps,\n    bool shaderSupportsTextureInt)\n\nGet/Set internal format (OpenGL internal format) that should be\nused.\n(https://www.opengl.org/sdk/docs/man2/xhtml/glTexImage2D.xml)\n"},
  {"SetInternalFormat", PyvtkTextureObject_SetInternalFormat, METH_VARARGS,
   "V.SetInternalFormat(int)\nC++: void SetInternalFormat(unsigned int glInternalFormat)\n\nGet/Set internal format (OpenGL internal format) that should be\nused.\n(https://www.opengl.org/sdk/docs/man2/xhtml/glTexImage2D.xml)\n"},
  {"GetDefaultInternalFormat", PyvtkTextureObject_GetDefaultInternalFormat, METH_VARARGS,
   "V.GetDefaultInternalFormat(int, int, bool) -> int\nC++: unsigned int GetDefaultInternalFormat(int vtktype,\n    int numComps, bool shaderSupportsTextureInt)\n\nGet/Set internal format (OpenGL internal format) that should be\nused.\n(https://www.opengl.org/sdk/docs/man2/xhtml/glTexImage2D.xml)\n"},
  {"GetFormat", PyvtkTextureObject_GetFormat, METH_VARARGS,
   "V.GetFormat(int, int, bool) -> int\nC++: unsigned int GetFormat(int vtktype, int numComps,\n    bool shaderSupportsTextureInt)\n\nGet/Set format (OpenGL internal format) that should be used.\n(https://www.opengl.org/sdk/docs/man2/xhtml/glTexImage2D.xml)\n"},
  {"SetFormat", PyvtkTextureObject_SetFormat, METH_VARARGS,
   "V.SetFormat(int)\nC++: void SetFormat(unsigned int glFormat)\n\nGet/Set format (OpenGL internal format) that should be used.\n(https://www.opengl.org/sdk/docs/man2/xhtml/glTexImage2D.xml)\n"},
  {"GetDefaultFormat", PyvtkTextureObject_GetDefaultFormat, METH_VARARGS,
   "V.GetDefaultFormat(int, int, bool) -> int\nC++: unsigned int GetDefaultFormat(int vtktype, int numComps,\n    bool shaderSupportsTextureInt)\n\nGet/Set format (OpenGL internal format) that should be used.\n(https://www.opengl.org/sdk/docs/man2/xhtml/glTexImage2D.xml)\n"},
  {"ResetFormatAndType", PyvtkTextureObject_ResetFormatAndType, METH_VARARGS,
   "V.ResetFormatAndType()\nC++: void ResetFormatAndType()\n\nReset format, internal format, and type of the texture.\n\n* This method is useful when a texture is reused in a\n* context same as the previous render call. In such\n* cases, texture destruction does not happen and therefore\n* previous set values are used.\n"},
  {"GetMinificationFilterMode", PyvtkTextureObject_GetMinificationFilterMode, METH_VARARGS,
   "V.GetMinificationFilterMode(int) -> int\nC++: unsigned int GetMinificationFilterMode(int vtktype)\n\n"},
  {"GetMagnificationFilterMode", PyvtkTextureObject_GetMagnificationFilterMode, METH_VARARGS,
   "V.GetMagnificationFilterMode(int) -> int\nC++: unsigned int GetMagnificationFilterMode(int vtktype)\n\n"},
  {"GetWrapSMode", PyvtkTextureObject_GetWrapSMode, METH_VARARGS,
   "V.GetWrapSMode(int) -> int\nC++: unsigned int GetWrapSMode(int vtktype)\n\n"},
  {"GetWrapTMode", PyvtkTextureObject_GetWrapTMode, METH_VARARGS,
   "V.GetWrapTMode(int) -> int\nC++: unsigned int GetWrapTMode(int vtktype)\n\n"},
  {"GetWrapRMode", PyvtkTextureObject_GetWrapRMode, METH_VARARGS,
   "V.GetWrapRMode(int) -> int\nC++: unsigned int GetWrapRMode(int vtktype)\n\n"},
  {"SetRequireDepthBufferFloat", PyvtkTextureObject_SetRequireDepthBufferFloat, METH_VARARGS,
   "V.SetRequireDepthBufferFloat(bool)\nC++: virtual void SetRequireDepthBufferFloat(bool _arg)\n\nOptional, require support for floating point depth buffer\nformats. If supported extensions will be loaded, however loading\nwill fail if the extension is required but not available.\n"},
  {"GetRequireDepthBufferFloat", PyvtkTextureObject_GetRequireDepthBufferFloat, METH_VARARGS,
   "V.GetRequireDepthBufferFloat() -> bool\nC++: virtual bool GetRequireDepthBufferFloat()\n\nOptional, require support for floating point depth buffer\nformats. If supported extensions will be loaded, however loading\nwill fail if the extension is required but not available.\n"},
  {"GetSupportsDepthBufferFloat", PyvtkTextureObject_GetSupportsDepthBufferFloat, METH_VARARGS,
   "V.GetSupportsDepthBufferFloat() -> bool\nC++: virtual bool GetSupportsDepthBufferFloat()\n\nOptional, require support for floating point depth buffer\nformats. If supported extensions will be loaded, however loading\nwill fail if the extension is required but not available.\n"},
  {"SetRequireTextureFloat", PyvtkTextureObject_SetRequireTextureFloat, METH_VARARGS,
   "V.SetRequireTextureFloat(bool)\nC++: virtual void SetRequireTextureFloat(bool _arg)\n\nOptional, require support for floating point texture formats. If\nsupported extensions will be loaded, however loading will fail if\nthe extension is required but not available.\n"},
  {"GetRequireTextureFloat", PyvtkTextureObject_GetRequireTextureFloat, METH_VARARGS,
   "V.GetRequireTextureFloat() -> bool\nC++: virtual bool GetRequireTextureFloat()\n\nOptional, require support for floating point texture formats. If\nsupported extensions will be loaded, however loading will fail if\nthe extension is required but not available.\n"},
  {"GetSupportsTextureFloat", PyvtkTextureObject_GetSupportsTextureFloat, METH_VARARGS,
   "V.GetSupportsTextureFloat() -> bool\nC++: virtual bool GetSupportsTextureFloat()\n\nOptional, require support for floating point texture formats. If\nsupported extensions will be loaded, however loading will fail if\nthe extension is required but not available.\n"},
  {"SetRequireTextureInteger", PyvtkTextureObject_SetRequireTextureInteger, METH_VARARGS,
   "V.SetRequireTextureInteger(bool)\nC++: virtual void SetRequireTextureInteger(bool _arg)\n\nOptional, require support for integer texture formats. If\nsupported extensions will be loaded, however loading will fail if\nthe extension is required but not available.\n"},
  {"GetRequireTextureInteger", PyvtkTextureObject_GetRequireTextureInteger, METH_VARARGS,
   "V.GetRequireTextureInteger() -> bool\nC++: virtual bool GetRequireTextureInteger()\n\nOptional, require support for integer texture formats. If\nsupported extensions will be loaded, however loading will fail if\nthe extension is required but not available.\n"},
  {"GetSupportsTextureInteger", PyvtkTextureObject_GetSupportsTextureInteger, METH_VARARGS,
   "V.GetSupportsTextureInteger() -> bool\nC++: virtual bool GetSupportsTextureInteger()\n\nOptional, require support for integer texture formats. If\nsupported extensions will be loaded, however loading will fail if\nthe extension is required but not available.\n"},
  {"GetWrapS", PyvtkTextureObject_GetWrapS, METH_VARARGS,
   "V.GetWrapS() -> int\nC++: virtual int GetWrapS()\n\nWrap mode for the first texture coordinate \"s\" Valid values are:\n- Clamp\n- ClampToEdge\n- Repeat\n- ClampToBorder\n- MirroredRepeat Initial value is Repeat (as in OpenGL spec)\n"},
  {"SetWrapS", PyvtkTextureObject_SetWrapS, METH_VARARGS,
   "V.SetWrapS(int)\nC++: virtual void SetWrapS(int _arg)\n\nWrap mode for the first texture coordinate \"s\" Valid values are:\n- Clamp\n- ClampToEdge\n- Repeat\n- ClampToBorder\n- MirroredRepeat Initial value is Repeat (as in OpenGL spec)\n"},
  {"GetWrapT", PyvtkTextureObject_GetWrapT, METH_VARARGS,
   "V.GetWrapT() -> int\nC++: virtual int GetWrapT()\n\nWrap mode for the first texture coordinate \"t\" Valid values are:\n- Clamp\n- ClampToEdge\n- Repeat\n- ClampToBorder\n- MirroredRepeat Initial value is Repeat (as in OpenGL spec)\n"},
  {"SetWrapT", PyvtkTextureObject_SetWrapT, METH_VARARGS,
   "V.SetWrapT(int)\nC++: virtual void SetWrapT(int _arg)\n\nWrap mode for the first texture coordinate \"t\" Valid values are:\n- Clamp\n- ClampToEdge\n- Repeat\n- ClampToBorder\n- MirroredRepeat Initial value is Repeat (as in OpenGL spec)\n"},
  {"GetWrapR", PyvtkTextureObject_GetWrapR, METH_VARARGS,
   "V.GetWrapR() -> int\nC++: virtual int GetWrapR()\n\nWrap mode for the first texture coordinate \"r\" Valid values are:\n- Clamp\n- ClampToEdge\n- Repeat\n- ClampToBorder\n- MirroredRepeat Initial value is Repeat (as in OpenGL spec)\n"},
  {"SetWrapR", PyvtkTextureObject_SetWrapR, METH_VARARGS,
   "V.SetWrapR(int)\nC++: virtual void SetWrapR(int _arg)\n\nWrap mode for the first texture coordinate \"r\" Valid values are:\n- Clamp\n- ClampToEdge\n- Repeat\n- ClampToBorder\n- MirroredRepeat Initial value is Repeat (as in OpenGL spec)\n"},
  {"GetMinificationFilter", PyvtkTextureObject_GetMinificationFilter, METH_VARARGS,
   "V.GetMinificationFilter() -> int\nC++: virtual int GetMinificationFilter()\n\nMinification filter mode. Valid values are:\n- Nearest\n- Linear\n- NearestMipmapNearest\n- NearestMipmapLinear\n- LinearMipmapNearest\n- LinearMipmapLinear Initial value is Nearest (note initial value\nin OpenGL spec is NearestMipMapLinear but this is error-prone\n  because it makes the texture object incomplete. ).\n"},
  {"SetMinificationFilter", PyvtkTextureObject_SetMinificationFilter, METH_VARARGS,
   "V.SetMinificationFilter(int)\nC++: virtual void SetMinificationFilter(int _arg)\n\nMinification filter mode. Valid values are:\n- Nearest\n- Linear\n- NearestMipmapNearest\n- NearestMipmapLinear\n- LinearMipmapNearest\n- LinearMipmapLinear Initial value is Nearest (note initial value\nin OpenGL spec is NearestMipMapLinear but this is error-prone\n  because it makes the texture object incomplete. ).\n"},
  {"GetMagnificationFilter", PyvtkTextureObject_GetMagnificationFilter, METH_VARARGS,
   "V.GetMagnificationFilter() -> int\nC++: virtual int GetMagnificationFilter()\n\nMagnification filter mode. Valid values are:\n- Nearest\n- Linear Initial value is Nearest\n"},
  {"SetMagnificationFilter", PyvtkTextureObject_SetMagnificationFilter, METH_VARARGS,
   "V.SetMagnificationFilter(int)\nC++: virtual void SetMagnificationFilter(int _arg)\n\nMagnification filter mode. Valid values are:\n- Nearest\n- Linear Initial value is Nearest\n"},
  {"SetLinearMagnification", PyvtkTextureObject_SetLinearMagnification, METH_VARARGS,
   "V.SetLinearMagnification(bool)\nC++: void SetLinearMagnification(bool val)\n\nTells if the magnification mode is linear (true) or nearest\n(false). Initial value is false (initial value in OpenGL spec is\ntrue).\n"},
  {"GetLinearMagnification", PyvtkTextureObject_GetLinearMagnification, METH_VARARGS,
   "V.GetLinearMagnification() -> bool\nC++: bool GetLinearMagnification()\n\n"},
  {"SetBorderColor", PyvtkTextureObject_SetBorderColor, METH_VARARGS,
   "V.SetBorderColor(float, float, float, float)\nC++: void SetBorderColor(float, float, float, float)\nV.SetBorderColor((float, float, float, float))\nC++: void SetBorderColor(float a[4])\n\n"},
  {"GetBorderColor", PyvtkTextureObject_GetBorderColor, METH_VARARGS,
   "V.GetBorderColor() -> (float, float, float, float)\nC++: float *GetBorderColor()\n\n"},
  {"SetMinLOD", PyvtkTextureObject_SetMinLOD, METH_VARARGS,
   "V.SetMinLOD(float)\nC++: virtual void SetMinLOD(float _arg)\n\nLower-clamp the computed LOD against this value. Any float value\nis valid. Initial value is -1000.0f, as in OpenGL spec.\n"},
  {"GetMinLOD", PyvtkTextureObject_GetMinLOD, METH_VARARGS,
   "V.GetMinLOD() -> float\nC++: virtual float GetMinLOD()\n\nLower-clamp the computed LOD against this value. Any float value\nis valid. Initial value is -1000.0f, as in OpenGL spec.\n"},
  {"SetMaxLOD", PyvtkTextureObject_SetMaxLOD, METH_VARARGS,
   "V.SetMaxLOD(float)\nC++: virtual void SetMaxLOD(float _arg)\n\nUpper-clamp the computed LOD against this value. Any float value\nis valid. Initial value is 1000.0f, as in OpenGL spec.\n"},
  {"GetMaxLOD", PyvtkTextureObject_GetMaxLOD, METH_VARARGS,
   "V.GetMaxLOD() -> float\nC++: virtual float GetMaxLOD()\n\nUpper-clamp the computed LOD against this value. Any float value\nis valid. Initial value is 1000.0f, as in OpenGL spec.\n"},
  {"SetBaseLevel", PyvtkTextureObject_SetBaseLevel, METH_VARARGS,
   "V.SetBaseLevel(int)\nC++: virtual void SetBaseLevel(int _arg)\n\nLevel of detail of the first texture image. A texture object is a\nlist of texture images. It is a non-negative integer value.\nInitial value is 0, as in OpenGL spec.\n"},
  {"GetBaseLevel", PyvtkTextureObject_GetBaseLevel, METH_VARARGS,
   "V.GetBaseLevel() -> int\nC++: virtual int GetBaseLevel()\n\nLevel of detail of the first texture image. A texture object is a\nlist of texture images. It is a non-negative integer value.\nInitial value is 0, as in OpenGL spec.\n"},
  {"SetMaxLevel", PyvtkTextureObject_SetMaxLevel, METH_VARARGS,
   "V.SetMaxLevel(int)\nC++: virtual void SetMaxLevel(int _arg)\n\nLevel of detail of the first texture image. A texture object is a\nlist of texture images. It is a non-negative integer value.\nInitial value is 1000, as in OpenGL spec.\n"},
  {"GetMaxLevel", PyvtkTextureObject_GetMaxLevel, METH_VARARGS,
   "V.GetMaxLevel() -> int\nC++: virtual int GetMaxLevel()\n\nLevel of detail of the first texture image. A texture object is a\nlist of texture images. It is a non-negative integer value.\nInitial value is 1000, as in OpenGL spec.\n"},
  {"GetDepthTextureCompare", PyvtkTextureObject_GetDepthTextureCompare, METH_VARARGS,
   "V.GetDepthTextureCompare() -> bool\nC++: virtual bool GetDepthTextureCompare()\n\nTells if the output of a texture unit with a depth texture uses\ncomparison or not. Comparison happens between D_t the depth\ntexture value in the range [0,1] and with R the interpolated\nthird texture coordinate clamped to range [0,1]. The result of\nthe comparison is noted `r'. If this flag is false, r=D_t.\nInitial value is false, as in OpenGL spec. Ignored if the texture\nobject is not a depth texture.\n"},
  {"SetDepthTextureCompare", PyvtkTextureObject_SetDepthTextureCompare, METH_VARARGS,
   "V.SetDepthTextureCompare(bool)\nC++: virtual void SetDepthTextureCompare(bool _arg)\n\nTells if the output of a texture unit with a depth texture uses\ncomparison or not. Comparison happens between D_t the depth\ntexture value in the range [0,1] and with R the interpolated\nthird texture coordinate clamped to range [0,1]. The result of\nthe comparison is noted `r'. If this flag is false, r=D_t.\nInitial value is false, as in OpenGL spec. Ignored if the texture\nobject is not a depth texture.\n"},
  {"GetDepthTextureCompareFunction", PyvtkTextureObject_GetDepthTextureCompareFunction, METH_VARARGS,
   "V.GetDepthTextureCompareFunction() -> int\nC++: virtual int GetDepthTextureCompareFunction()\n\nIn case DepthTextureCompare is true, specify the comparison\nfunction in use. The result of the comparison is noted `r'. Valid\nvalues are:\n- Value\n- Lequal: r=R<=Dt ? 1.0 : 0.0\n- Gequal: r=R>=Dt ? 1.0 : 0.0\n- Less: r=R<D_t ? 1.0 : 0.0\n- Greater: r=R>Dt ? 1.0 : 0.0\n- Equal: r=R==Dt ? 1.0 : 0.0\n- NotEqual: r=R!=Dt ? 1.0 : 0.0\n- AlwaysTrue: r=1.0\n- Never: r=0.0 If the magnification of minification factor are\n  not nearest, percentage closer filtering (PCF) is used: R is\n  compared to several D_t and r is the average of the comparisons\n(it is NOT the average of D_t compared once to R). Initial value\n  is Lequal, as in OpenGL spec. Ignored if the texture object is\n  not a depth texture.\n"},
  {"SetDepthTextureCompareFunction", PyvtkTextureObject_SetDepthTextureCompareFunction, METH_VARARGS,
   "V.SetDepthTextureCompareFunction(int)\nC++: virtual void SetDepthTextureCompareFunction(int _arg)\n\nIn case DepthTextureCompare is true, specify the comparison\nfunction in use. The result of the comparison is noted `r'. Valid\nvalues are:\n- Value\n- Lequal: r=R<=Dt ? 1.0 : 0.0\n- Gequal: r=R>=Dt ? 1.0 : 0.0\n- Less: r=R<D_t ? 1.0 : 0.0\n- Greater: r=R>Dt ? 1.0 : 0.0\n- Equal: r=R==Dt ? 1.0 : 0.0\n- NotEqual: r=R!=Dt ? 1.0 : 0.0\n- AlwaysTrue: r=1.0\n- Never: r=0.0 If the magnification of minification factor are\n  not nearest, percentage closer filtering (PCF) is used: R is\n  compared to several D_t and r is the average of the comparisons\n(it is NOT the average of D_t compared once to R). Initial value\n  is Lequal, as in OpenGL spec. Ignored if the texture object is\n  not a depth texture.\n"},
  {"GetGenerateMipmap", PyvtkTextureObject_GetGenerateMipmap, METH_VARARGS,
   "V.GetGenerateMipmap() -> bool\nC++: virtual bool GetGenerateMipmap()\n\nTells the hardware to generate mipmap textures from the first\ntexture image at BaseLevel. Initial value is false, as in OpenGL\nspec.\n"},
  {"SetGenerateMipmap", PyvtkTextureObject_SetGenerateMipmap, METH_VARARGS,
   "V.SetGenerateMipmap(bool)\nC++: virtual void SetGenerateMipmap(bool _arg)\n\nTells the hardware to generate mipmap textures from the first\ntexture image at BaseLevel. Initial value is false, as in OpenGL\nspec.\n"},
  {"GetMaximumTextureSize", PyvtkTextureObject_GetMaximumTextureSize, METH_VARARGS,
   "V.GetMaximumTextureSize(vtkOpenGLRenderWindow) -> int\nC++: static int GetMaximumTextureSize(\n    vtkOpenGLRenderWindow *context)\n\nQuery and return maximum texture size (dimension) supported by\nthe OpenGL driver for a particular context. It should be noted\nthat this size does not consider the internal format of the\ntexture and therefore there is no guarantee that a texture of\nthis size will be allocated by the driver. Also, the method does\nnot make the context current so if the passed context is not\nvalid or current, a value of -1 will be returned.\n"},
  {"GetMaximumTextureSize3D", PyvtkTextureObject_GetMaximumTextureSize3D, METH_VARARGS,
   "V.GetMaximumTextureSize3D(vtkOpenGLRenderWindow) -> int\nC++: static int GetMaximumTextureSize3D(\n    vtkOpenGLRenderWindow *context)\nV.GetMaximumTextureSize3D() -> int\nC++: int GetMaximumTextureSize3D()\n\nQuery and return maximum texture size (dimension) supported by\nthe OpenGL driver for a particular context. It should be noted\nthat this size does not consider the internal format of the\ntexture and therefore there is no guarantee that a texture of\nthis size will be allocated by the driver. Also, the method does\nnot make the context current so if the passed context is not\nvalid or current, a value of -1 will be returned.\n"},
  {"IsSupported", PyvtkTextureObject_IsSupported, METH_VARARGS,
   "V.IsSupported(vtkOpenGLRenderWindow, bool, bool, bool) -> bool\nC++: static bool IsSupported(vtkOpenGLRenderWindow *, bool, bool,\n    bool)\nV.IsSupported(vtkOpenGLRenderWindow) -> bool\nC++: static bool IsSupported(vtkOpenGLRenderWindow *)\n\nReturns if the context supports the required extensions. If flags\nfor optional extensions are set then the test fails when support\nfor them is not found.\n"},
  {"CopyToFrameBuffer", PyvtkTextureObject_CopyToFrameBuffer, METH_VARARGS,
   "V.CopyToFrameBuffer(vtkShaderProgram, vtkOpenGLVertexArrayObject)\nC++: void CopyToFrameBuffer(vtkShaderProgram *program,\n    vtkOpenGLVertexArrayObject *vao)\nV.CopyToFrameBuffer(int, int, int, int, int, int, int, int, int,\n    int, vtkShaderProgram, vtkOpenGLVertexArrayObject)\nC++: void CopyToFrameBuffer(int srcXmin, int srcYmin, int srcXmax,\n     int srcYmax, int dstXmin, int dstYmin, int dstXmax,\n    int dstYmax, int dstSizeX, int dstSizeY,\n    vtkShaderProgram *program, vtkOpenGLVertexArrayObject *vao)\nV.CopyToFrameBuffer(int, int, int, int, int, int, int, int,\n    vtkShaderProgram, vtkOpenGLVertexArrayObject)\nC++: void CopyToFrameBuffer(int srcXmin, int srcYmin, int srcXmax,\n     int srcYmax, int dstXmin, int dstYmin, int dstSizeX,\n    int dstSizeY, vtkShaderProgram *program,\n    vtkOpenGLVertexArrayObject *vao)\nV.CopyToFrameBuffer([float, ...], [float, ...], vtkShaderProgram,\n    vtkOpenGLVertexArrayObject)\nC++: void CopyToFrameBuffer(float *tcoords, float *verts,\n    vtkShaderProgram *program, vtkOpenGLVertexArrayObject *vao)\n\nCopy the texture (src) in the current framebuffer.  A variety of\nsignatures based on what you want to do Copy the entire texture\nto the entire current viewport\n"},
  {"CopyFromFrameBuffer", PyvtkTextureObject_CopyFromFrameBuffer, METH_VARARGS,
   "V.CopyFromFrameBuffer(int, int, int, int, int, int)\nC++: void CopyFromFrameBuffer(int srcXmin, int srcYmin,\n    int dstXmin, int dstYmin, int width, int height)\n\nCopy a sub-part of a logical buffer of the framebuffer (color or\ndepth) to the texture object. src is the framebuffer, dst is the\ntexture. (srcXmin,srcYmin) is the location of the lower left\ncorner of the rectangle in the framebuffer. (dstXmin,dstYmin) is\nthe location of the lower left corner of the rectangle in the\ntexture. width and height specifies the size of the rectangle in\npixels. If the logical buffer is a color buffer, it has to be\nselected first with glReadBuffer().\n\\pre is2D: GetNumberOfDimensions()==2\n"},
  {"GetShiftAndScale", PyvtkTextureObject_GetShiftAndScale, METH_VARARGS,
   "V.GetShiftAndScale(float, float)\nC++: void GetShiftAndScale(float &shift, float &scale)\n\nGet the shift and scale required in the shader to return the\ntexture values to their original range. This is useful when for\nexample you have unsigned char data and it is being accessed\nusing the floating point texture calls. In that case OpenGL maps\nthe uchar range to a different floating point range under the\nhood. Applying the shift and scale will return the data to its\noriginal values in the shader. The texture's internal format must\nbe set before calling these routines. Creating the texture does\nset it.\n"},
  {"Resize", PyvtkTextureObject_Resize, METH_VARARGS,
   "V.Resize(int, int)\nC++: void Resize(unsigned int width, unsigned int height)\n\n"},
  {"GetUseSRGBColorSpace", PyvtkTextureObject_GetUseSRGBColorSpace, METH_VARARGS,
   "V.GetUseSRGBColorSpace() -> bool\nC++: virtual bool GetUseSRGBColorSpace()\n\nIs this texture using the sRGB color space. If you are using a\nsRGB framebuffer or window then you probably also want to be\nusing sRGB color textures for proper handling of gamma and\nassociated color mixing.\n"},
  {"SetUseSRGBColorSpace", PyvtkTextureObject_SetUseSRGBColorSpace, METH_VARARGS,
   "V.SetUseSRGBColorSpace(bool)\nC++: virtual void SetUseSRGBColorSpace(bool _arg)\n\nIs this texture using the sRGB color space. If you are using a\nsRGB framebuffer or window then you probably also want to be\nusing sRGB color textures for proper handling of gamma and\nassociated color mixing.\n"},
  {"UseSRGBColorSpaceOn", PyvtkTextureObject_UseSRGBColorSpaceOn, METH_VARARGS,
   "V.UseSRGBColorSpaceOn()\nC++: virtual void UseSRGBColorSpaceOn()\n\nIs this texture using the sRGB color space. If you are using a\nsRGB framebuffer or window then you probably also want to be\nusing sRGB color textures for proper handling of gamma and\nassociated color mixing.\n"},
  {"UseSRGBColorSpaceOff", PyvtkTextureObject_UseSRGBColorSpaceOff, METH_VARARGS,
   "V.UseSRGBColorSpaceOff()\nC++: virtual void UseSRGBColorSpaceOff()\n\nIs this texture using the sRGB color space. If you are using a\nsRGB framebuffer or window then you probably also want to be\nusing sRGB color textures for proper handling of gamma and\nassociated color mixing.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkTextureObject_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingOpenGL2Python.vtkTextureObject", // tp_name
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
  PyvtkTextureObject_Doc, // tp_doc
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

static vtkObjectBase *PyvtkTextureObject_StaticNew()
{
  return vtkTextureObject::New();
}

PyObject *PyvtkTextureObject_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkTextureObject_Type, PyvtkTextureObject_Methods,
    "vtkTextureObject",
 &PyvtkTextureObject_StaticNew);

  PyTypeObject *pytype = &PyvtkTextureObject_Type;

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

  for (int c = 0; c < 29; c++)
  {
    static const struct { const char *name; int value; }
      constants[29] = {
        { "Lequal", vtkTextureObject::Lequal },
        { "Gequal", vtkTextureObject::Gequal },
        { "Less", vtkTextureObject::Less },
        { "Greater", vtkTextureObject::Greater },
        { "Equal", vtkTextureObject::Equal },
        { "NotEqual", vtkTextureObject::NotEqual },
        { "AlwaysTrue", vtkTextureObject::AlwaysTrue },
        { "Never", vtkTextureObject::Never },
        { "NumberOfDepthTextureCompareFunctions", vtkTextureObject::NumberOfDepthTextureCompareFunctions },
        { "ClampToEdge", vtkTextureObject::ClampToEdge },
        { "Repeat", vtkTextureObject::Repeat },
        { "MirroredRepeat", vtkTextureObject::MirroredRepeat },
        { "ClampToBorder", vtkTextureObject::ClampToBorder },
        { "NumberOfWrapModes", vtkTextureObject::NumberOfWrapModes },
        { "Nearest", vtkTextureObject::Nearest },
        { "Linear", vtkTextureObject::Linear },
        { "NearestMipmapNearest", vtkTextureObject::NearestMipmapNearest },
        { "NearestMipmapLinear", vtkTextureObject::NearestMipmapLinear },
        { "LinearMipmapNearest", vtkTextureObject::LinearMipmapNearest },
        { "LinearMipmapLinear", vtkTextureObject::LinearMipmapLinear },
        { "NumberOfMinificationModes", vtkTextureObject::NumberOfMinificationModes },
        { "Native", vtkTextureObject::Native },
        { "Fixed8", vtkTextureObject::Fixed8 },
        { "Fixed16", vtkTextureObject::Fixed16 },
        { "Fixed24", vtkTextureObject::Fixed24 },
        { "Fixed32", vtkTextureObject::Fixed32 },
        { "Float16", vtkTextureObject::Float16 },
        { "Float32", vtkTextureObject::Float32 },
        { "NumberOfDepthFormats", vtkTextureObject::NumberOfDepthFormats },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkTextureObject(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkTextureObject_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkTextureObject", o) != 0)
  {
    Py_DECREF(o);
  }

}

