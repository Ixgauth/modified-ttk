// python wrapper for vtkWebApplication
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
#include "vtkWebApplication.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkWebApplication(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkWebApplication_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkWebApplication_Doc =
  "vtkWebApplication - defines ParaViewWeb application interface.\n\n"
  "Superclass: vtkObject\n\n"
  "vtkWebApplication defines the core interface for a ParaViewWeb\n"
  "application. This exposes methods that make it easier to manage views\n"
  "and rendered images from views.\n\n";


static PyObject *
PyvtkWebApplication_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkWebApplication::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWebApplication_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebApplication *op = static_cast<vtkWebApplication *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkWebApplication::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWebApplication_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkWebApplication *tempr = vtkWebApplication::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWebApplication_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebApplication *op = static_cast<vtkWebApplication *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkWebApplication *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkWebApplication::NewInstance());

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
PyvtkWebApplication_SetImageEncoding(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImageEncoding");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebApplication *op = static_cast<vtkWebApplication *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetImageEncoding(temp0);
    }
    else
    {
      op->vtkWebApplication::SetImageEncoding(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWebApplication_GetImageEncodingMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageEncodingMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebApplication *op = static_cast<vtkWebApplication *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetImageEncodingMinValue() :
      op->vtkWebApplication::GetImageEncodingMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWebApplication_GetImageEncodingMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageEncodingMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebApplication *op = static_cast<vtkWebApplication *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetImageEncodingMaxValue() :
      op->vtkWebApplication::GetImageEncodingMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWebApplication_GetImageEncoding(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageEncoding");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebApplication *op = static_cast<vtkWebApplication *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetImageEncoding() :
      op->vtkWebApplication::GetImageEncoding());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWebApplication_SetImageCompression(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImageCompression");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebApplication *op = static_cast<vtkWebApplication *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetImageCompression(temp0);
    }
    else
    {
      op->vtkWebApplication::SetImageCompression(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWebApplication_GetImageCompressionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageCompressionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebApplication *op = static_cast<vtkWebApplication *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetImageCompressionMinValue() :
      op->vtkWebApplication::GetImageCompressionMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWebApplication_GetImageCompressionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageCompressionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebApplication *op = static_cast<vtkWebApplication *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetImageCompressionMaxValue() :
      op->vtkWebApplication::GetImageCompressionMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWebApplication_GetImageCompression(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageCompression");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebApplication *op = static_cast<vtkWebApplication *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetImageCompression() :
      op->vtkWebApplication::GetImageCompression());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWebApplication_SetNumberOfEncoderThreads(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfEncoderThreads");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebApplication *op = static_cast<vtkWebApplication *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfEncoderThreads(temp0);
    }
    else
    {
      op->vtkWebApplication::SetNumberOfEncoderThreads(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWebApplication_GetNumberOfEncoderThreads(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfEncoderThreads");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebApplication *op = static_cast<vtkWebApplication *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfEncoderThreads() :
      op->vtkWebApplication::GetNumberOfEncoderThreads());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWebApplication_StillRender(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StillRender");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebApplication *op = static_cast<vtkWebApplication *>(vp);

  vtkRenderWindow *temp0 = nullptr;
  int temp1 = 100;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkRenderWindow") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    vtkUnsignedCharArray *tempr = (ap.IsBound() ?
      op->StillRender(temp0, temp1) :
      op->vtkWebApplication::StillRender(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWebApplication_InteractiveRender(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InteractiveRender");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebApplication *op = static_cast<vtkWebApplication *>(vp);

  vtkRenderWindow *temp0 = nullptr;
  int temp1 = 50;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkRenderWindow") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    vtkUnsignedCharArray *tempr = (ap.IsBound() ?
      op->InteractiveRender(temp0, temp1) :
      op->vtkWebApplication::InteractiveRender(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWebApplication_StillRenderToString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StillRenderToString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebApplication *op = static_cast<vtkWebApplication *>(vp);

  vtkRenderWindow *temp0 = nullptr;
  unsigned long temp1 = 0;
  int temp2 = 100;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 3) &&
      ap.GetVTKObject(temp0, "vtkRenderWindow") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    const char *tempr = (ap.IsBound() ?
      op->StillRenderToString(temp0, temp1, temp2) :
      op->vtkWebApplication::StillRenderToString(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWebApplication_GetHasImagesBeingProcessed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHasImagesBeingProcessed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebApplication *op = static_cast<vtkWebApplication *>(vp);

  vtkRenderWindow *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderWindow"))
  {
    bool tempr = (ap.IsBound() ?
      op->GetHasImagesBeingProcessed(temp0) :
      op->vtkWebApplication::GetHasImagesBeingProcessed(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWebApplication_HandleInteractionEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HandleInteractionEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebApplication *op = static_cast<vtkWebApplication *>(vp);

  vtkRenderWindow *temp0 = nullptr;
  vtkWebInteractionEvent *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderWindow") &&
      ap.GetVTKObject(temp1, "vtkWebInteractionEvent"))
  {
    bool tempr = (ap.IsBound() ?
      op->HandleInteractionEvent(temp0, temp1) :
      op->vtkWebApplication::HandleInteractionEvent(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWebApplication_InvalidateCache(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InvalidateCache");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebApplication *op = static_cast<vtkWebApplication *>(vp);

  vtkRenderWindow *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderWindow"))
  {
    if (ap.IsBound())
    {
      op->InvalidateCache(temp0);
    }
    else
    {
      op->vtkWebApplication::InvalidateCache(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWebApplication_GetLastStillRenderToMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastStillRenderToMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebApplication *op = static_cast<vtkWebApplication *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetLastStillRenderToMTime() :
      op->vtkWebApplication::GetLastStillRenderToMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWebApplication_GetWebGLSceneMetaData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWebGLSceneMetaData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebApplication *op = static_cast<vtkWebApplication *>(vp);

  vtkRenderWindow *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderWindow"))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetWebGLSceneMetaData(temp0) :
      op->vtkWebApplication::GetWebGLSceneMetaData(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWebApplication_GetWebGLBinaryData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWebGLBinaryData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebApplication *op = static_cast<vtkWebApplication *>(vp);

  vtkRenderWindow *temp0 = nullptr;
  const char *temp1 = nullptr;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkRenderWindow") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetWebGLBinaryData(temp0, temp1, temp2) :
      op->vtkWebApplication::GetWebGLBinaryData(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWebApplication_GetObjectIdMap(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetObjectIdMap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebApplication *op = static_cast<vtkWebApplication *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkObjectIdMap *tempr = (ap.IsBound() ?
      op->GetObjectIdMap() :
      op->vtkWebApplication::GetObjectIdMap());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWebApplication_GetObjectId(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetObjectId");

  vtkObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
  {
    std::string tempr = vtkWebApplication::GetObjectId(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkWebApplication_Methods[] = {
  {"IsTypeOf", PyvtkWebApplication_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkWebApplication_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkWebApplication_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkWebApplication\nC++: static vtkWebApplication *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkWebApplication_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkWebApplication\nC++: vtkWebApplication *NewInstance()\n\n"},
  {"SetImageEncoding", PyvtkWebApplication_SetImageEncoding, METH_VARARGS,
   "V.SetImageEncoding(int)\nC++: virtual void SetImageEncoding(int _arg)\n\nSet the encoding to be used for rendered images.\n"},
  {"GetImageEncodingMinValue", PyvtkWebApplication_GetImageEncodingMinValue, METH_VARARGS,
   "V.GetImageEncodingMinValue() -> int\nC++: virtual int GetImageEncodingMinValue()\n\nSet the encoding to be used for rendered images.\n"},
  {"GetImageEncodingMaxValue", PyvtkWebApplication_GetImageEncodingMaxValue, METH_VARARGS,
   "V.GetImageEncodingMaxValue() -> int\nC++: virtual int GetImageEncodingMaxValue()\n\nSet the encoding to be used for rendered images.\n"},
  {"GetImageEncoding", PyvtkWebApplication_GetImageEncoding, METH_VARARGS,
   "V.GetImageEncoding() -> int\nC++: virtual int GetImageEncoding()\n\nSet the encoding to be used for rendered images.\n"},
  {"SetImageCompression", PyvtkWebApplication_SetImageCompression, METH_VARARGS,
   "V.SetImageCompression(int)\nC++: virtual void SetImageCompression(int _arg)\n\nSet the compression to be used for rendered images.\n"},
  {"GetImageCompressionMinValue", PyvtkWebApplication_GetImageCompressionMinValue, METH_VARARGS,
   "V.GetImageCompressionMinValue() -> int\nC++: virtual int GetImageCompressionMinValue()\n\nSet the compression to be used for rendered images.\n"},
  {"GetImageCompressionMaxValue", PyvtkWebApplication_GetImageCompressionMaxValue, METH_VARARGS,
   "V.GetImageCompressionMaxValue() -> int\nC++: virtual int GetImageCompressionMaxValue()\n\nSet the compression to be used for rendered images.\n"},
  {"GetImageCompression", PyvtkWebApplication_GetImageCompression, METH_VARARGS,
   "V.GetImageCompression() -> int\nC++: virtual int GetImageCompression()\n\nSet the compression to be used for rendered images.\n"},
  {"SetNumberOfEncoderThreads", PyvtkWebApplication_SetNumberOfEncoderThreads, METH_VARARGS,
   "V.SetNumberOfEncoderThreads(int)\nC++: void SetNumberOfEncoderThreads(vtkTypeUInt32)\n\nSet the number of worker threads to use for image encoding. \nCalling this method with a number greater than 32 or less than\nzero will have no effect.\n"},
  {"GetNumberOfEncoderThreads", PyvtkWebApplication_GetNumberOfEncoderThreads, METH_VARARGS,
   "V.GetNumberOfEncoderThreads() -> int\nC++: vtkTypeUInt32 GetNumberOfEncoderThreads()\n\nSet the number of worker threads to use for image encoding. \nCalling this method with a number greater than 32 or less than\nzero will have no effect.\n"},
  {"StillRender", PyvtkWebApplication_StillRender, METH_VARARGS,
   "V.StillRender(vtkRenderWindow, int) -> vtkUnsignedCharArray\nC++: vtkUnsignedCharArray *StillRender(vtkRenderWindow *view,\n    int quality=100)\n\nRender a view and obtain the rendered image.\n"},
  {"InteractiveRender", PyvtkWebApplication_InteractiveRender, METH_VARARGS,
   "V.InteractiveRender(vtkRenderWindow, int) -> vtkUnsignedCharArray\nC++: vtkUnsignedCharArray *InteractiveRender(\n    vtkRenderWindow *view, int quality=50)\n\nRender a view and obtain the rendered image.\n"},
  {"StillRenderToString", PyvtkWebApplication_StillRenderToString, METH_VARARGS,
   "V.StillRenderToString(vtkRenderWindow, int, int) -> string\nC++: const char *StillRenderToString(vtkRenderWindow *view,\n    vtkMTimeType time=0, int quality=100)\n\nRender a view and obtain the rendered image.\n"},
  {"GetHasImagesBeingProcessed", PyvtkWebApplication_GetHasImagesBeingProcessed, METH_VARARGS,
   "V.GetHasImagesBeingProcessed(vtkRenderWindow) -> bool\nC++: bool GetHasImagesBeingProcessed(vtkRenderWindow *)\n\nStillRenderToString() need not necessary returns the most\nrecently rendered image. Use this method to get whether there are\nany pending images being processed concurrently.\n"},
  {"HandleInteractionEvent", PyvtkWebApplication_HandleInteractionEvent, METH_VARARGS,
   "V.HandleInteractionEvent(vtkRenderWindow, vtkWebInteractionEvent)\n    -> bool\nC++: bool HandleInteractionEvent(vtkRenderWindow *view,\n    vtkWebInteractionEvent *event)\n\nCommunicate mouse interaction to a view. Returns true if the\ninteraction changed the view state, otherwise returns false.\n"},
  {"InvalidateCache", PyvtkWebApplication_InvalidateCache, METH_VARARGS,
   "V.InvalidateCache(vtkRenderWindow)\nC++: void InvalidateCache(vtkRenderWindow *view)\n\nInvalidate view cache\n"},
  {"GetLastStillRenderToMTime", PyvtkWebApplication_GetLastStillRenderToMTime, METH_VARARGS,
   "V.GetLastStillRenderToMTime() -> int\nC++: virtual vtkMTimeType GetLastStillRenderToMTime()\n\nReturn the MTime of the last array exported by\nStillRenderToString.\n"},
  {"GetWebGLSceneMetaData", PyvtkWebApplication_GetWebGLSceneMetaData, METH_VARARGS,
   "V.GetWebGLSceneMetaData(vtkRenderWindow) -> string\nC++: const char *GetWebGLSceneMetaData(vtkRenderWindow *view)\n\nReturn the Meta data description of the input scene in JSON\nformat. This is using the vtkWebGLExporter to parse the scene.\nNOTE: This should be called before getting the webGL binary data.\n"},
  {"GetWebGLBinaryData", PyvtkWebApplication_GetWebGLBinaryData, METH_VARARGS,
   "V.GetWebGLBinaryData(vtkRenderWindow, string, int) -> string\nC++: const char *GetWebGLBinaryData(vtkRenderWindow *view,\n    const char *id, int partIndex)\n\nReturn the binary data given the part index and the webGL object\npiece id in the scene.\n"},
  {"GetObjectIdMap", PyvtkWebApplication_GetObjectIdMap, METH_VARARGS,
   "V.GetObjectIdMap() -> vtkObjectIdMap\nC++: vtkObjectIdMap *GetObjectIdMap()\n\n"},
  {"GetObjectId", PyvtkWebApplication_GetObjectId, METH_VARARGS,
   "V.GetObjectId(vtkObject) -> string\nC++: static std::string GetObjectId(vtkObject *obj)\n\nReturn a hexadecimal formatted string of the VTK object's memory\naddress, useful for uniquely identifying the object when\nexporting data.\n\ne.g. 0x8f05a90\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkWebApplication_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkWebCorePython.vtkWebApplication", // tp_name
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
  PyvtkWebApplication_Doc, // tp_doc
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

static vtkObjectBase *PyvtkWebApplication_StaticNew()
{
  return vtkWebApplication::New();
}

PyObject *PyvtkWebApplication_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkWebApplication_Type, PyvtkWebApplication_Methods,
    "vtkWebApplication",
 &PyvtkWebApplication_StaticNew);

  PyTypeObject *pytype = &PyvtkWebApplication_Type;

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

  for (int c = 0; c < 5; c++)
  {
    static const struct { const char *name; int value; }
      constants[5] = {
        { "ENCODING_NONE", vtkWebApplication::ENCODING_NONE },
        { "ENCODING_BASE64", vtkWebApplication::ENCODING_BASE64 },
        { "COMPRESSION_NONE", vtkWebApplication::COMPRESSION_NONE },
        { "COMPRESSION_PNG", vtkWebApplication::COMPRESSION_PNG },
        { "COMPRESSION_JPEG", vtkWebApplication::COMPRESSION_JPEG },
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

void PyVTKAddFile_vtkWebApplication(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkWebApplication_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkWebApplication", o) != 0)
  {
    Py_DECREF(o);
  }

}

