// python wrapper for vtkBYUWriter
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
#include "vtkBYUWriter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkBYUWriter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkBYUWriter_ClassNew(); }

#ifndef DECLARED_PyvtkWriter_ClassNew
extern "C" { PyObject *PyvtkWriter_ClassNew(); }
#define DECLARED_PyvtkWriter_ClassNew
#endif

static const char *PyvtkBYUWriter_Doc =
  "vtkBYUWriter - write MOVIE.BYU files\n\n"
  "Superclass: vtkWriter\n\n"
  "vtkBYUWriter writes MOVIE.BYU polygonal files. These files consist of\n"
  "a geometry file (.g), a scalar file (.s), a displacement or vector\n"
  "file (.d), and a 2D texture coordinate file (.t). These files must be\n"
  "specified to the object, the appropriate boolean variables must be\n"
  "true, and data must be available from the input for the files to be\n"
  "written. WARNING: this writer does not currently write triangle\n"
  "strips. Use vtkTriangleFilter to convert strips to triangles.\n\n";


static PyObject *
PyvtkBYUWriter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkBYUWriter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBYUWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUWriter *op = static_cast<vtkBYUWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkBYUWriter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBYUWriter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkBYUWriter *tempr = vtkBYUWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBYUWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUWriter *op = static_cast<vtkBYUWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkBYUWriter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkBYUWriter::NewInstance());

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
PyvtkBYUWriter_SetGeometryFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGeometryFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUWriter *op = static_cast<vtkBYUWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGeometryFileName(temp0);
    }
    else
    {
      op->vtkBYUWriter::SetGeometryFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBYUWriter_GetGeometryFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGeometryFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUWriter *op = static_cast<vtkBYUWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetGeometryFileName() :
      op->vtkBYUWriter::GetGeometryFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBYUWriter_SetDisplacementFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisplacementFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUWriter *op = static_cast<vtkBYUWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDisplacementFileName(temp0);
    }
    else
    {
      op->vtkBYUWriter::SetDisplacementFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBYUWriter_GetDisplacementFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisplacementFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUWriter *op = static_cast<vtkBYUWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetDisplacementFileName() :
      op->vtkBYUWriter::GetDisplacementFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBYUWriter_SetScalarFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUWriter *op = static_cast<vtkBYUWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScalarFileName(temp0);
    }
    else
    {
      op->vtkBYUWriter::SetScalarFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBYUWriter_GetScalarFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUWriter *op = static_cast<vtkBYUWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetScalarFileName() :
      op->vtkBYUWriter::GetScalarFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBYUWriter_SetTextureFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextureFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUWriter *op = static_cast<vtkBYUWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTextureFileName(temp0);
    }
    else
    {
      op->vtkBYUWriter::SetTextureFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBYUWriter_GetTextureFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextureFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUWriter *op = static_cast<vtkBYUWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetTextureFileName() :
      op->vtkBYUWriter::GetTextureFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBYUWriter_SetWriteDisplacement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWriteDisplacement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUWriter *op = static_cast<vtkBYUWriter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetWriteDisplacement(temp0);
    }
    else
    {
      op->vtkBYUWriter::SetWriteDisplacement(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBYUWriter_GetWriteDisplacement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWriteDisplacement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUWriter *op = static_cast<vtkBYUWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetWriteDisplacement() :
      op->vtkBYUWriter::GetWriteDisplacement());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBYUWriter_WriteDisplacementOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteDisplacementOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUWriter *op = static_cast<vtkBYUWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->WriteDisplacementOn();
    }
    else
    {
      op->vtkBYUWriter::WriteDisplacementOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBYUWriter_WriteDisplacementOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteDisplacementOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUWriter *op = static_cast<vtkBYUWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->WriteDisplacementOff();
    }
    else
    {
      op->vtkBYUWriter::WriteDisplacementOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBYUWriter_SetWriteScalar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWriteScalar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUWriter *op = static_cast<vtkBYUWriter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetWriteScalar(temp0);
    }
    else
    {
      op->vtkBYUWriter::SetWriteScalar(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBYUWriter_GetWriteScalar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWriteScalar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUWriter *op = static_cast<vtkBYUWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetWriteScalar() :
      op->vtkBYUWriter::GetWriteScalar());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBYUWriter_WriteScalarOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteScalarOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUWriter *op = static_cast<vtkBYUWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->WriteScalarOn();
    }
    else
    {
      op->vtkBYUWriter::WriteScalarOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBYUWriter_WriteScalarOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteScalarOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUWriter *op = static_cast<vtkBYUWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->WriteScalarOff();
    }
    else
    {
      op->vtkBYUWriter::WriteScalarOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBYUWriter_SetWriteTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWriteTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUWriter *op = static_cast<vtkBYUWriter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetWriteTexture(temp0);
    }
    else
    {
      op->vtkBYUWriter::SetWriteTexture(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBYUWriter_GetWriteTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWriteTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUWriter *op = static_cast<vtkBYUWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetWriteTexture() :
      op->vtkBYUWriter::GetWriteTexture());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBYUWriter_WriteTextureOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteTextureOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUWriter *op = static_cast<vtkBYUWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->WriteTextureOn();
    }
    else
    {
      op->vtkBYUWriter::WriteTextureOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBYUWriter_WriteTextureOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteTextureOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUWriter *op = static_cast<vtkBYUWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->WriteTextureOff();
    }
    else
    {
      op->vtkBYUWriter::WriteTextureOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBYUWriter_GetInput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUWriter *op = static_cast<vtkBYUWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetInput() :
      op->vtkBYUWriter::GetInput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkBYUWriter_GetInput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUWriter *op = static_cast<vtkBYUWriter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetInput(temp0) :
      op->vtkBYUWriter::GetInput(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkBYUWriter_GetInput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkBYUWriter_GetInput_s1(self, args);
    case 1:
      return PyvtkBYUWriter_GetInput_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetInput");
  return nullptr;
}


static PyMethodDef PyvtkBYUWriter_Methods[] = {
  {"IsTypeOf", PyvtkBYUWriter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkBYUWriter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkBYUWriter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkBYUWriter\nC++: static vtkBYUWriter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkBYUWriter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkBYUWriter\nC++: vtkBYUWriter *NewInstance()\n\n"},
  {"SetGeometryFileName", PyvtkBYUWriter_SetGeometryFileName, METH_VARARGS,
   "V.SetGeometryFileName(string)\nC++: virtual void SetGeometryFileName(const char *_arg)\n\nSpecify the name of the geometry file to write.\n"},
  {"GetGeometryFileName", PyvtkBYUWriter_GetGeometryFileName, METH_VARARGS,
   "V.GetGeometryFileName() -> string\nC++: virtual char *GetGeometryFileName()\n\nSpecify the name of the geometry file to write.\n"},
  {"SetDisplacementFileName", PyvtkBYUWriter_SetDisplacementFileName, METH_VARARGS,
   "V.SetDisplacementFileName(string)\nC++: virtual void SetDisplacementFileName(const char *_arg)\n\nSpecify the name of the displacement file to write.\n"},
  {"GetDisplacementFileName", PyvtkBYUWriter_GetDisplacementFileName, METH_VARARGS,
   "V.GetDisplacementFileName() -> string\nC++: virtual char *GetDisplacementFileName()\n\nSpecify the name of the displacement file to write.\n"},
  {"SetScalarFileName", PyvtkBYUWriter_SetScalarFileName, METH_VARARGS,
   "V.SetScalarFileName(string)\nC++: virtual void SetScalarFileName(const char *_arg)\n\nSpecify the name of the scalar file to write.\n"},
  {"GetScalarFileName", PyvtkBYUWriter_GetScalarFileName, METH_VARARGS,
   "V.GetScalarFileName() -> string\nC++: virtual char *GetScalarFileName()\n\nSpecify the name of the scalar file to write.\n"},
  {"SetTextureFileName", PyvtkBYUWriter_SetTextureFileName, METH_VARARGS,
   "V.SetTextureFileName(string)\nC++: virtual void SetTextureFileName(const char *_arg)\n\nSpecify the name of the texture file to write.\n"},
  {"GetTextureFileName", PyvtkBYUWriter_GetTextureFileName, METH_VARARGS,
   "V.GetTextureFileName() -> string\nC++: virtual char *GetTextureFileName()\n\nSpecify the name of the texture file to write.\n"},
  {"SetWriteDisplacement", PyvtkBYUWriter_SetWriteDisplacement, METH_VARARGS,
   "V.SetWriteDisplacement(int)\nC++: virtual void SetWriteDisplacement(vtkTypeBool _arg)\n\nTurn on/off writing the displacement file.\n"},
  {"GetWriteDisplacement", PyvtkBYUWriter_GetWriteDisplacement, METH_VARARGS,
   "V.GetWriteDisplacement() -> int\nC++: virtual vtkTypeBool GetWriteDisplacement()\n\nTurn on/off writing the displacement file.\n"},
  {"WriteDisplacementOn", PyvtkBYUWriter_WriteDisplacementOn, METH_VARARGS,
   "V.WriteDisplacementOn()\nC++: virtual void WriteDisplacementOn()\n\nTurn on/off writing the displacement file.\n"},
  {"WriteDisplacementOff", PyvtkBYUWriter_WriteDisplacementOff, METH_VARARGS,
   "V.WriteDisplacementOff()\nC++: virtual void WriteDisplacementOff()\n\nTurn on/off writing the displacement file.\n"},
  {"SetWriteScalar", PyvtkBYUWriter_SetWriteScalar, METH_VARARGS,
   "V.SetWriteScalar(int)\nC++: virtual void SetWriteScalar(vtkTypeBool _arg)\n\nTurn on/off writing the scalar file.\n"},
  {"GetWriteScalar", PyvtkBYUWriter_GetWriteScalar, METH_VARARGS,
   "V.GetWriteScalar() -> int\nC++: virtual vtkTypeBool GetWriteScalar()\n\nTurn on/off writing the scalar file.\n"},
  {"WriteScalarOn", PyvtkBYUWriter_WriteScalarOn, METH_VARARGS,
   "V.WriteScalarOn()\nC++: virtual void WriteScalarOn()\n\nTurn on/off writing the scalar file.\n"},
  {"WriteScalarOff", PyvtkBYUWriter_WriteScalarOff, METH_VARARGS,
   "V.WriteScalarOff()\nC++: virtual void WriteScalarOff()\n\nTurn on/off writing the scalar file.\n"},
  {"SetWriteTexture", PyvtkBYUWriter_SetWriteTexture, METH_VARARGS,
   "V.SetWriteTexture(int)\nC++: virtual void SetWriteTexture(vtkTypeBool _arg)\n\nTurn on/off writing the texture file.\n"},
  {"GetWriteTexture", PyvtkBYUWriter_GetWriteTexture, METH_VARARGS,
   "V.GetWriteTexture() -> int\nC++: virtual vtkTypeBool GetWriteTexture()\n\nTurn on/off writing the texture file.\n"},
  {"WriteTextureOn", PyvtkBYUWriter_WriteTextureOn, METH_VARARGS,
   "V.WriteTextureOn()\nC++: virtual void WriteTextureOn()\n\nTurn on/off writing the texture file.\n"},
  {"WriteTextureOff", PyvtkBYUWriter_WriteTextureOff, METH_VARARGS,
   "V.WriteTextureOff()\nC++: virtual void WriteTextureOff()\n\nTurn on/off writing the texture file.\n"},
  {"GetInput", PyvtkBYUWriter_GetInput, METH_VARARGS,
   "V.GetInput() -> vtkPolyData\nC++: vtkPolyData *GetInput()\nV.GetInput(int) -> vtkPolyData\nC++: vtkPolyData *GetInput(int port)\n\nGet the input to this writer.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkBYUWriter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOGeometryPython.vtkBYUWriter", // tp_name
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
  PyvtkBYUWriter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkBYUWriter_StaticNew()
{
  return vtkBYUWriter::New();
}

PyObject *PyvtkBYUWriter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkBYUWriter_Type, PyvtkBYUWriter_Methods,
    "vtkBYUWriter",
 &PyvtkBYUWriter_StaticNew);

  PyTypeObject *pytype = &PyvtkBYUWriter_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkWriter_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkBYUWriter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkBYUWriter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkBYUWriter", o) != 0)
  {
    Py_DECREF(o);
  }

}

