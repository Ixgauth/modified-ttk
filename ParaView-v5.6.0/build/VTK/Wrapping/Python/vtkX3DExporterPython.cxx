// python wrapper for vtkX3DExporter
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
#include "vtkX3DExporter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkX3DExporter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkX3DExporter_ClassNew(); }

#ifndef DECLARED_PyvtkExporter_ClassNew
extern "C" { PyObject *PyvtkExporter_ClassNew(); }
#define DECLARED_PyvtkExporter_ClassNew
#endif

static const char *PyvtkX3DExporter_Doc =
  "vtkX3DExporter - create an x3d file\n\n"
  "Superclass: vtkExporter\n\n"
  "vtkX3DExporter is a render window exporter which writes out the\n"
  "renderered scene into an X3D file. X3D is an XML-based format for\n"
  "representation 3D scenes (similar to VRML). Check out\n"
  "http://www.web3d.org/x3d/ for more details.@par Thanks: X3DExporter\n"
  "is contributed by Christophe Mouton at EDF.\n\n";


static PyObject *
PyvtkX3DExporter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkX3DExporter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkX3DExporter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkX3DExporter *op = static_cast<vtkX3DExporter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkX3DExporter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkX3DExporter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkX3DExporter *tempr = vtkX3DExporter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkX3DExporter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkX3DExporter *op = static_cast<vtkX3DExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkX3DExporter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkX3DExporter::NewInstance());

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
PyvtkX3DExporter_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkX3DExporter *op = static_cast<vtkX3DExporter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFileName(temp0);
    }
    else
    {
      op->vtkX3DExporter::SetFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkX3DExporter_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkX3DExporter *op = static_cast<vtkX3DExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkX3DExporter::GetFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkX3DExporter_SetSpeed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSpeed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkX3DExporter *op = static_cast<vtkX3DExporter *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSpeed(temp0);
    }
    else
    {
      op->vtkX3DExporter::SetSpeed(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkX3DExporter_GetSpeed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSpeed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkX3DExporter *op = static_cast<vtkX3DExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetSpeed() :
      op->vtkX3DExporter::GetSpeed());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkX3DExporter_SetBinary(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBinary");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkX3DExporter *op = static_cast<vtkX3DExporter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBinary(temp0);
    }
    else
    {
      op->vtkX3DExporter::SetBinary(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkX3DExporter_GetBinaryMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBinaryMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkX3DExporter *op = static_cast<vtkX3DExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBinaryMinValue() :
      op->vtkX3DExporter::GetBinaryMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkX3DExporter_GetBinaryMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBinaryMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkX3DExporter *op = static_cast<vtkX3DExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBinaryMaxValue() :
      op->vtkX3DExporter::GetBinaryMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkX3DExporter_BinaryOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BinaryOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkX3DExporter *op = static_cast<vtkX3DExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BinaryOn();
    }
    else
    {
      op->vtkX3DExporter::BinaryOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkX3DExporter_BinaryOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BinaryOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkX3DExporter *op = static_cast<vtkX3DExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BinaryOff();
    }
    else
    {
      op->vtkX3DExporter::BinaryOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkX3DExporter_GetBinary(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBinary");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkX3DExporter *op = static_cast<vtkX3DExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBinary() :
      op->vtkX3DExporter::GetBinary());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkX3DExporter_SetFastest(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFastest");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkX3DExporter *op = static_cast<vtkX3DExporter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFastest(temp0);
    }
    else
    {
      op->vtkX3DExporter::SetFastest(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkX3DExporter_GetFastestMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFastestMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkX3DExporter *op = static_cast<vtkX3DExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFastestMinValue() :
      op->vtkX3DExporter::GetFastestMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkX3DExporter_GetFastestMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFastestMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkX3DExporter *op = static_cast<vtkX3DExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFastestMaxValue() :
      op->vtkX3DExporter::GetFastestMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkX3DExporter_FastestOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FastestOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkX3DExporter *op = static_cast<vtkX3DExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FastestOn();
    }
    else
    {
      op->vtkX3DExporter::FastestOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkX3DExporter_FastestOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FastestOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkX3DExporter *op = static_cast<vtkX3DExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FastestOff();
    }
    else
    {
      op->vtkX3DExporter::FastestOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkX3DExporter_GetFastest(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFastest");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkX3DExporter *op = static_cast<vtkX3DExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFastest() :
      op->vtkX3DExporter::GetFastest());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkX3DExporter_SetWriteToOutputString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWriteToOutputString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkX3DExporter *op = static_cast<vtkX3DExporter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetWriteToOutputString(temp0);
    }
    else
    {
      op->vtkX3DExporter::SetWriteToOutputString(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkX3DExporter_GetWriteToOutputString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWriteToOutputString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkX3DExporter *op = static_cast<vtkX3DExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetWriteToOutputString() :
      op->vtkX3DExporter::GetWriteToOutputString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkX3DExporter_WriteToOutputStringOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteToOutputStringOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkX3DExporter *op = static_cast<vtkX3DExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->WriteToOutputStringOn();
    }
    else
    {
      op->vtkX3DExporter::WriteToOutputStringOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkX3DExporter_WriteToOutputStringOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteToOutputStringOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkX3DExporter *op = static_cast<vtkX3DExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->WriteToOutputStringOff();
    }
    else
    {
      op->vtkX3DExporter::WriteToOutputStringOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkX3DExporter_GetOutputStringLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputStringLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkX3DExporter *op = static_cast<vtkX3DExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputStringLength() :
      op->vtkX3DExporter::GetOutputStringLength());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkX3DExporter_GetOutputString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkX3DExporter *op = static_cast<vtkX3DExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetOutputString() :
      op->vtkX3DExporter::GetOutputString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkX3DExporter_GetBinaryOutputString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBinaryOutputString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkX3DExporter *op = static_cast<vtkX3DExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned char *tempr = (ap.IsBound() ?
      op->GetBinaryOutputString() :
      op->vtkX3DExporter::GetBinaryOutputString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkX3DExporter_RegisterAndGetOutputString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegisterAndGetOutputString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkX3DExporter *op = static_cast<vtkX3DExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->RegisterAndGetOutputString() :
      op->vtkX3DExporter::RegisterAndGetOutputString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkX3DExporter_Methods[] = {
  {"IsTypeOf", PyvtkX3DExporter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkX3DExporter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkX3DExporter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkX3DExporter\nC++: static vtkX3DExporter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkX3DExporter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkX3DExporter\nC++: vtkX3DExporter *NewInstance()\n\n"},
  {"SetFileName", PyvtkX3DExporter_SetFileName, METH_VARARGS,
   "V.SetFileName(string)\nC++: virtual void SetFileName(const char *_arg)\n\nSet/Get the output file name.\n"},
  {"GetFileName", PyvtkX3DExporter_GetFileName, METH_VARARGS,
   "V.GetFileName() -> string\nC++: virtual char *GetFileName()\n\nSet/Get the output file name.\n"},
  {"SetSpeed", PyvtkX3DExporter_SetSpeed, METH_VARARGS,
   "V.SetSpeed(float)\nC++: virtual void SetSpeed(double _arg)\n\nSpecify the Speed of navigation. Default is 4.\n"},
  {"GetSpeed", PyvtkX3DExporter_GetSpeed, METH_VARARGS,
   "V.GetSpeed() -> float\nC++: virtual double GetSpeed()\n\nSpecify the Speed of navigation. Default is 4.\n"},
  {"SetBinary", PyvtkX3DExporter_SetBinary, METH_VARARGS,
   "V.SetBinary(int)\nC++: virtual void SetBinary(vtkTypeBool _arg)\n\nTurn on binary mode\n"},
  {"GetBinaryMinValue", PyvtkX3DExporter_GetBinaryMinValue, METH_VARARGS,
   "V.GetBinaryMinValue() -> int\nC++: virtual vtkTypeBool GetBinaryMinValue()\n\nTurn on binary mode\n"},
  {"GetBinaryMaxValue", PyvtkX3DExporter_GetBinaryMaxValue, METH_VARARGS,
   "V.GetBinaryMaxValue() -> int\nC++: virtual vtkTypeBool GetBinaryMaxValue()\n\nTurn on binary mode\n"},
  {"BinaryOn", PyvtkX3DExporter_BinaryOn, METH_VARARGS,
   "V.BinaryOn()\nC++: virtual void BinaryOn()\n\nTurn on binary mode\n"},
  {"BinaryOff", PyvtkX3DExporter_BinaryOff, METH_VARARGS,
   "V.BinaryOff()\nC++: virtual void BinaryOff()\n\nTurn on binary mode\n"},
  {"GetBinary", PyvtkX3DExporter_GetBinary, METH_VARARGS,
   "V.GetBinary() -> int\nC++: virtual vtkTypeBool GetBinary()\n\nTurn on binary mode\n"},
  {"SetFastest", PyvtkX3DExporter_SetFastest, METH_VARARGS,
   "V.SetFastest(int)\nC++: virtual void SetFastest(vtkTypeBool _arg)\n\nIn binary mode use fastest instead of best compression\n"},
  {"GetFastestMinValue", PyvtkX3DExporter_GetFastestMinValue, METH_VARARGS,
   "V.GetFastestMinValue() -> int\nC++: virtual vtkTypeBool GetFastestMinValue()\n\nIn binary mode use fastest instead of best compression\n"},
  {"GetFastestMaxValue", PyvtkX3DExporter_GetFastestMaxValue, METH_VARARGS,
   "V.GetFastestMaxValue() -> int\nC++: virtual vtkTypeBool GetFastestMaxValue()\n\nIn binary mode use fastest instead of best compression\n"},
  {"FastestOn", PyvtkX3DExporter_FastestOn, METH_VARARGS,
   "V.FastestOn()\nC++: virtual void FastestOn()\n\nIn binary mode use fastest instead of best compression\n"},
  {"FastestOff", PyvtkX3DExporter_FastestOff, METH_VARARGS,
   "V.FastestOff()\nC++: virtual void FastestOff()\n\nIn binary mode use fastest instead of best compression\n"},
  {"GetFastest", PyvtkX3DExporter_GetFastest, METH_VARARGS,
   "V.GetFastest() -> int\nC++: virtual vtkTypeBool GetFastest()\n\nIn binary mode use fastest instead of best compression\n"},
  {"SetWriteToOutputString", PyvtkX3DExporter_SetWriteToOutputString, METH_VARARGS,
   "V.SetWriteToOutputString(int)\nC++: virtual void SetWriteToOutputString(vtkTypeBool _arg)\n\nEnable writing to an OutputString instead of the default, a file.\n"},
  {"GetWriteToOutputString", PyvtkX3DExporter_GetWriteToOutputString, METH_VARARGS,
   "V.GetWriteToOutputString() -> int\nC++: virtual vtkTypeBool GetWriteToOutputString()\n\nEnable writing to an OutputString instead of the default, a file.\n"},
  {"WriteToOutputStringOn", PyvtkX3DExporter_WriteToOutputStringOn, METH_VARARGS,
   "V.WriteToOutputStringOn()\nC++: virtual void WriteToOutputStringOn()\n\nEnable writing to an OutputString instead of the default, a file.\n"},
  {"WriteToOutputStringOff", PyvtkX3DExporter_WriteToOutputStringOff, METH_VARARGS,
   "V.WriteToOutputStringOff()\nC++: virtual void WriteToOutputStringOff()\n\nEnable writing to an OutputString instead of the default, a file.\n"},
  {"GetOutputStringLength", PyvtkX3DExporter_GetOutputStringLength, METH_VARARGS,
   "V.GetOutputStringLength() -> int\nC++: virtual int GetOutputStringLength()\n\nWhen WriteToOutputString in on, then a string is allocated,\nwritten to, and can be retrieved with these methods.  The string\nis deleted during the next call to write ...\n"},
  {"GetOutputString", PyvtkX3DExporter_GetOutputString, METH_VARARGS,
   "V.GetOutputString() -> string\nC++: virtual char *GetOutputString()\n\nWhen WriteToOutputString in on, then a string is allocated,\nwritten to, and can be retrieved with these methods.  The string\nis deleted during the next call to write ...\n"},
  {"GetBinaryOutputString", PyvtkX3DExporter_GetBinaryOutputString, METH_VARARGS,
   "V.GetBinaryOutputString() -> (int, ...)\nC++: unsigned char *GetBinaryOutputString()\n\nWhen WriteToOutputString in on, then a string is allocated,\nwritten to, and can be retrieved with these methods.  The string\nis deleted during the next call to write ...\n"},
  {"RegisterAndGetOutputString", PyvtkX3DExporter_RegisterAndGetOutputString, METH_VARARGS,
   "V.RegisterAndGetOutputString() -> string\nC++: char *RegisterAndGetOutputString()\n\nThis convenience method returns the string, sets the IVAR to\nnullptr, so that the user is responsible for deleting the string.\nI am not sure what the name should be, so it may change in the\nfuture.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkX3DExporter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOExportPython.vtkX3DExporter", // tp_name
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
  PyvtkX3DExporter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkX3DExporter_StaticNew()
{
  return vtkX3DExporter::New();
}

PyObject *PyvtkX3DExporter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkX3DExporter_Type, PyvtkX3DExporter_Methods,
    "vtkX3DExporter",
 &PyvtkX3DExporter_StaticNew);

  PyTypeObject *pytype = &PyvtkX3DExporter_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkExporter_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkX3DExporter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkX3DExporter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkX3DExporter", o) != 0)
  {
    Py_DECREF(o);
  }

}

