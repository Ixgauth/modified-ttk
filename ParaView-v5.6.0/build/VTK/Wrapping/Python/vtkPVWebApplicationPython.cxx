// python wrapper for vtkPVWebApplication
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
#include "vtkPVWebApplication.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPVWebApplication(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPVWebApplication_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkPVWebApplication_Doc =
  "vtkPVWebApplication - defines ParaViewWeb application interface.\n\n"
  "Superclass: vtkObject\n\n"
  "vtkPVWebApplication defines the core interface for a ParaViewWeb\n"
  "application. This exposes methods that make it easier to manage views\n"
  "and rendered images from views.\n\n";


static PyObject *
PyvtkPVWebApplication_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPVWebApplication::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVWebApplication_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVWebApplication *op = static_cast<vtkPVWebApplication *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVWebApplication::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVWebApplication_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPVWebApplication *tempr = vtkPVWebApplication::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVWebApplication_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVWebApplication *op = static_cast<vtkPVWebApplication *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVWebApplication *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVWebApplication::NewInstance());

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
PyvtkPVWebApplication_SetImageEncoding(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImageEncoding");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVWebApplication *op = static_cast<vtkPVWebApplication *>(vp);

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
      op->vtkPVWebApplication::SetImageEncoding(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVWebApplication_GetImageEncodingMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageEncodingMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVWebApplication *op = static_cast<vtkPVWebApplication *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetImageEncodingMinValue() :
      op->vtkPVWebApplication::GetImageEncodingMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVWebApplication_GetImageEncodingMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageEncodingMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVWebApplication *op = static_cast<vtkPVWebApplication *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetImageEncodingMaxValue() :
      op->vtkPVWebApplication::GetImageEncodingMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVWebApplication_GetImageEncoding(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageEncoding");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVWebApplication *op = static_cast<vtkPVWebApplication *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetImageEncoding() :
      op->vtkPVWebApplication::GetImageEncoding());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVWebApplication_SetImageCompression(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImageCompression");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVWebApplication *op = static_cast<vtkPVWebApplication *>(vp);

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
      op->vtkPVWebApplication::SetImageCompression(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVWebApplication_GetImageCompressionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageCompressionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVWebApplication *op = static_cast<vtkPVWebApplication *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetImageCompressionMinValue() :
      op->vtkPVWebApplication::GetImageCompressionMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVWebApplication_GetImageCompressionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageCompressionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVWebApplication *op = static_cast<vtkPVWebApplication *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetImageCompressionMaxValue() :
      op->vtkPVWebApplication::GetImageCompressionMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVWebApplication_GetImageCompression(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageCompression");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVWebApplication *op = static_cast<vtkPVWebApplication *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetImageCompression() :
      op->vtkPVWebApplication::GetImageCompression());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVWebApplication_StillRender(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StillRender");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVWebApplication *op = static_cast<vtkPVWebApplication *>(vp);

  vtkSMViewProxy *temp0 = nullptr;
  int temp1 = 100;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkSMViewProxy") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    vtkUnsignedCharArray *tempr = (ap.IsBound() ?
      op->StillRender(temp0, temp1) :
      op->vtkPVWebApplication::StillRender(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVWebApplication_InteractiveRender(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InteractiveRender");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVWebApplication *op = static_cast<vtkPVWebApplication *>(vp);

  vtkSMViewProxy *temp0 = nullptr;
  int temp1 = 50;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkSMViewProxy") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    vtkUnsignedCharArray *tempr = (ap.IsBound() ?
      op->InteractiveRender(temp0, temp1) :
      op->vtkPVWebApplication::InteractiveRender(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVWebApplication_StillRenderToString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StillRenderToString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVWebApplication *op = static_cast<vtkPVWebApplication *>(vp);

  vtkSMViewProxy *temp0 = nullptr;
  unsigned long temp1 = 0;
  int temp2 = 100;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 3) &&
      ap.GetVTKObject(temp0, "vtkSMViewProxy") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    const char *tempr = (ap.IsBound() ?
      op->StillRenderToString(temp0, temp1, temp2) :
      op->vtkPVWebApplication::StillRenderToString(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVWebApplication_StillRenderToBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StillRenderToBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVWebApplication *op = static_cast<vtkPVWebApplication *>(vp);

  vtkSMViewProxy *temp0 = nullptr;
  unsigned long temp1 = 0;
  int temp2 = 100;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 3) &&
      ap.GetVTKObject(temp0, "vtkSMViewProxy") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    vtkUnsignedCharArray *tempr = (ap.IsBound() ?
      op->StillRenderToBuffer(temp0, temp1, temp2) :
      op->vtkPVWebApplication::StillRenderToBuffer(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVWebApplication_GetHasImagesBeingProcessed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHasImagesBeingProcessed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVWebApplication *op = static_cast<vtkPVWebApplication *>(vp);

  vtkSMViewProxy *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMViewProxy"))
  {
    bool tempr = (ap.IsBound() ?
      op->GetHasImagesBeingProcessed(temp0) :
      op->vtkPVWebApplication::GetHasImagesBeingProcessed(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVWebApplication_HandleInteractionEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HandleInteractionEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVWebApplication *op = static_cast<vtkPVWebApplication *>(vp);

  vtkSMViewProxy *temp0 = nullptr;
  vtkWebInteractionEvent *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMViewProxy") &&
      ap.GetVTKObject(temp1, "vtkWebInteractionEvent"))
  {
    bool tempr = (ap.IsBound() ?
      op->HandleInteractionEvent(temp0, temp1) :
      op->vtkPVWebApplication::HandleInteractionEvent(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVWebApplication_InvalidateCache(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InvalidateCache");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVWebApplication *op = static_cast<vtkPVWebApplication *>(vp);

  vtkSMViewProxy *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMViewProxy"))
  {
    if (ap.IsBound())
    {
      op->InvalidateCache(temp0);
    }
    else
    {
      op->vtkPVWebApplication::InvalidateCache(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVWebApplication_GetLastStillRenderToMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastStillRenderToMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVWebApplication *op = static_cast<vtkPVWebApplication *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetLastStillRenderToMTime() :
      op->vtkPVWebApplication::GetLastStillRenderToMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVWebApplication_GetWebGLSceneMetaData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWebGLSceneMetaData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVWebApplication *op = static_cast<vtkPVWebApplication *>(vp);

  vtkSMViewProxy *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMViewProxy"))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetWebGLSceneMetaData(temp0) :
      op->vtkPVWebApplication::GetWebGLSceneMetaData(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVWebApplication_GetWebGLBinaryData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWebGLBinaryData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVWebApplication *op = static_cast<vtkPVWebApplication *>(vp);

  vtkSMViewProxy *temp0 = nullptr;
  const char *temp1 = nullptr;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkSMViewProxy") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetWebGLBinaryData(temp0, temp1, temp2) :
      op->vtkPVWebApplication::GetWebGLBinaryData(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVWebApplication_GetLastStillRenderImageSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastStillRenderImageSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVWebApplication *op = static_cast<vtkPVWebApplication *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetLastStillRenderImageSize() :
      op->vtkPVWebApplication::GetLastStillRenderImageSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyMethodDef PyvtkPVWebApplication_Methods[] = {
  {"IsTypeOf", PyvtkPVWebApplication_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPVWebApplication_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPVWebApplication_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPVWebApplication\nC++: static vtkPVWebApplication *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPVWebApplication_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPVWebApplication\nC++: vtkPVWebApplication *NewInstance()\n\n"},
  {"SetImageEncoding", PyvtkPVWebApplication_SetImageEncoding, METH_VARARGS,
   "V.SetImageEncoding(int)\nC++: virtual void SetImageEncoding(int _arg)\n\nSet the encoding to be used for rendered images.\n"},
  {"GetImageEncodingMinValue", PyvtkPVWebApplication_GetImageEncodingMinValue, METH_VARARGS,
   "V.GetImageEncodingMinValue() -> int\nC++: virtual int GetImageEncodingMinValue()\n\nSet the encoding to be used for rendered images.\n"},
  {"GetImageEncodingMaxValue", PyvtkPVWebApplication_GetImageEncodingMaxValue, METH_VARARGS,
   "V.GetImageEncodingMaxValue() -> int\nC++: virtual int GetImageEncodingMaxValue()\n\nSet the encoding to be used for rendered images.\n"},
  {"GetImageEncoding", PyvtkPVWebApplication_GetImageEncoding, METH_VARARGS,
   "V.GetImageEncoding() -> int\nC++: virtual int GetImageEncoding()\n\nSet the encoding to be used for rendered images.\n"},
  {"SetImageCompression", PyvtkPVWebApplication_SetImageCompression, METH_VARARGS,
   "V.SetImageCompression(int)\nC++: virtual void SetImageCompression(int _arg)\n\nSet the compression to be used for rendered images.\n"},
  {"GetImageCompressionMinValue", PyvtkPVWebApplication_GetImageCompressionMinValue, METH_VARARGS,
   "V.GetImageCompressionMinValue() -> int\nC++: virtual int GetImageCompressionMinValue()\n\nSet the compression to be used for rendered images.\n"},
  {"GetImageCompressionMaxValue", PyvtkPVWebApplication_GetImageCompressionMaxValue, METH_VARARGS,
   "V.GetImageCompressionMaxValue() -> int\nC++: virtual int GetImageCompressionMaxValue()\n\nSet the compression to be used for rendered images.\n"},
  {"GetImageCompression", PyvtkPVWebApplication_GetImageCompression, METH_VARARGS,
   "V.GetImageCompression() -> int\nC++: virtual int GetImageCompression()\n\nSet the compression to be used for rendered images.\n"},
  {"StillRender", PyvtkPVWebApplication_StillRender, METH_VARARGS,
   "V.StillRender(vtkSMViewProxy, int) -> vtkUnsignedCharArray\nC++: vtkUnsignedCharArray *StillRender(vtkSMViewProxy *view,\n    int quality=100)\n\nRender a view and obtain the rendered image.\n"},
  {"InteractiveRender", PyvtkPVWebApplication_InteractiveRender, METH_VARARGS,
   "V.InteractiveRender(vtkSMViewProxy, int) -> vtkUnsignedCharArray\nC++: vtkUnsignedCharArray *InteractiveRender(vtkSMViewProxy *view,\n     int quality=50)\n\nRender a view and obtain the rendered image.\n"},
  {"StillRenderToString", PyvtkPVWebApplication_StillRenderToString, METH_VARARGS,
   "V.StillRenderToString(vtkSMViewProxy, int, int) -> string\nC++: const char *StillRenderToString(vtkSMViewProxy *view,\n    unsigned long time=0, int quality=100)\n\nRender a view and obtain the rendered image.\n"},
  {"StillRenderToBuffer", PyvtkPVWebApplication_StillRenderToBuffer, METH_VARARGS,
   "V.StillRenderToBuffer(vtkSMViewProxy, int, int)\n    -> vtkUnsignedCharArray\nC++: vtkUnsignedCharArray *StillRenderToBuffer(\n    vtkSMViewProxy *view, unsigned long time=0, int quality=100)\n\nRender a view and obtain the rendered image.\n"},
  {"GetHasImagesBeingProcessed", PyvtkPVWebApplication_GetHasImagesBeingProcessed, METH_VARARGS,
   "V.GetHasImagesBeingProcessed(vtkSMViewProxy) -> bool\nC++: bool GetHasImagesBeingProcessed(vtkSMViewProxy *)\n\nStillRenderToString() need not necessary returns the most\nrecently rendered image. Use this method to get whether there are\nany pending images being processed concurrently.\n"},
  {"HandleInteractionEvent", PyvtkPVWebApplication_HandleInteractionEvent, METH_VARARGS,
   "V.HandleInteractionEvent(vtkSMViewProxy, vtkWebInteractionEvent)\n    -> bool\nC++: bool HandleInteractionEvent(vtkSMViewProxy *view,\n    vtkWebInteractionEvent *event)\n\nCommunicate mouse interaction to a view. Returns true if the\ninteraction changed the view state, otherwise returns false.\n"},
  {"InvalidateCache", PyvtkPVWebApplication_InvalidateCache, METH_VARARGS,
   "V.InvalidateCache(vtkSMViewProxy)\nC++: void InvalidateCache(vtkSMViewProxy *view)\n\nInvalidate view cache\n"},
  {"GetLastStillRenderToMTime", PyvtkPVWebApplication_GetLastStillRenderToMTime, METH_VARARGS,
   "V.GetLastStillRenderToMTime() -> int\nC++: virtual vtkMTimeType GetLastStillRenderToMTime()\n\nReturn the MTime of the last array exported by\nStillRenderToString, StillRenderToBuffer.\n"},
  {"GetWebGLSceneMetaData", PyvtkPVWebApplication_GetWebGLSceneMetaData, METH_VARARGS,
   "V.GetWebGLSceneMetaData(vtkSMViewProxy) -> string\nC++: const char *GetWebGLSceneMetaData(vtkSMViewProxy *view)\n\nReturn the Meta data description of the input scene in JSON\nformat. This is using the vtkWebGLExporter to parse the scene.\nNOTE: This should be called before getting the webGL binary data.\n"},
  {"GetWebGLBinaryData", PyvtkPVWebApplication_GetWebGLBinaryData, METH_VARARGS,
   "V.GetWebGLBinaryData(vtkSMViewProxy, string, int) -> string\nC++: const char *GetWebGLBinaryData(vtkSMViewProxy *view,\n    const char *id, int partIndex)\n\nReturn the binary data given the part index and the webGL object\npiece id in the scene.\n"},
  {"GetLastStillRenderImageSize", PyvtkPVWebApplication_GetLastStillRenderImageSize, METH_VARARGS,
   "V.GetLastStillRenderImageSize() -> (int, int)\nC++: int *GetLastStillRenderImageSize()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPVWebApplication_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkParaViewWebCorePython.vtkPVWebApplication", // tp_name
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
  PyvtkPVWebApplication_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPVWebApplication_StaticNew()
{
  return vtkPVWebApplication::New();
}

PyObject *PyvtkPVWebApplication_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPVWebApplication_Type, PyvtkPVWebApplication_Methods,
    "vtkPVWebApplication",
 &PyvtkPVWebApplication_StaticNew);

  PyTypeObject *pytype = &PyvtkPVWebApplication_Type;

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
        { "ENCODING_NONE", vtkPVWebApplication::ENCODING_NONE },
        { "ENCODING_BASE64", vtkPVWebApplication::ENCODING_BASE64 },
        { "COMPRESSION_NONE", vtkPVWebApplication::COMPRESSION_NONE },
        { "COMPRESSION_PNG", vtkPVWebApplication::COMPRESSION_PNG },
        { "COMPRESSION_JPEG", vtkPVWebApplication::COMPRESSION_JPEG },
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

void PyVTKAddFile_vtkPVWebApplication(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPVWebApplication_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPVWebApplication", o) != 0)
  {
    Py_DECREF(o);
  }

}

