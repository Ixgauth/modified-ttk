// python wrapper for vtkPVEnSightMasterServerReader2
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
#include "vtkPVEnSightMasterServerReader2.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPVEnSightMasterServerReader2(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPVEnSightMasterServerReader2_ClassNew(); }

#ifndef DECLARED_PyvtkPGenericEnSightReader_ClassNew
extern "C" { PyObject *PyvtkPGenericEnSightReader_ClassNew(); }
#define DECLARED_PyvtkPGenericEnSightReader_ClassNew
#endif

static const char *PyvtkPVEnSightMasterServerReader2_Doc =
  "vtkPVEnSightMasterServerReader2 - \n\n"
  "Superclass: vtkPGenericEnSightReader\n\n"
;


static PyObject *
PyvtkPVEnSightMasterServerReader2_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPVEnSightMasterServerReader2::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVEnSightMasterServerReader2_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVEnSightMasterServerReader2 *op = static_cast<vtkPVEnSightMasterServerReader2 *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVEnSightMasterServerReader2::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVEnSightMasterServerReader2_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPVEnSightMasterServerReader2 *tempr = vtkPVEnSightMasterServerReader2::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVEnSightMasterServerReader2_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVEnSightMasterServerReader2 *op = static_cast<vtkPVEnSightMasterServerReader2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVEnSightMasterServerReader2 *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVEnSightMasterServerReader2::NewInstance());

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
PyvtkPVEnSightMasterServerReader2_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVEnSightMasterServerReader2 *op = static_cast<vtkPVEnSightMasterServerReader2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetController() :
      op->vtkPVEnSightMasterServerReader2::GetController());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVEnSightMasterServerReader2_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVEnSightMasterServerReader2 *op = static_cast<vtkPVEnSightMasterServerReader2 *>(vp);

  vtkMultiProcessController *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMultiProcessController"))
  {
    if (ap.IsBound())
    {
      op->SetController(temp0);
    }
    else
    {
      op->vtkPVEnSightMasterServerReader2::SetController(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVEnSightMasterServerReader2_CanReadFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanReadFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVEnSightMasterServerReader2 *op = static_cast<vtkPVEnSightMasterServerReader2 *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->CanReadFile(temp0) :
      op->vtkPVEnSightMasterServerReader2::CanReadFile(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVEnSightMasterServerReader2_GetNumberOfPieces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPieces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVEnSightMasterServerReader2 *op = static_cast<vtkPVEnSightMasterServerReader2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPieces() :
      op->vtkPVEnSightMasterServerReader2::GetNumberOfPieces());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVEnSightMasterServerReader2_SetCaseFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCaseFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVEnSightMasterServerReader2 *op = static_cast<vtkPVEnSightMasterServerReader2 *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCaseFileName(temp0);
    }
    else
    {
      op->vtkPVEnSightMasterServerReader2::SetCaseFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVEnSightMasterServerReader2_GetNumberOfPointArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPointArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVEnSightMasterServerReader2 *op = static_cast<vtkPVEnSightMasterServerReader2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPointArrays() :
      op->vtkPVEnSightMasterServerReader2::GetNumberOfPointArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVEnSightMasterServerReader2_GetNumberOfCellArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCellArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVEnSightMasterServerReader2 *op = static_cast<vtkPVEnSightMasterServerReader2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfCellArrays() :
      op->vtkPVEnSightMasterServerReader2::GetNumberOfCellArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVEnSightMasterServerReader2_GetPointArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVEnSightMasterServerReader2 *op = static_cast<vtkPVEnSightMasterServerReader2 *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetPointArrayName(temp0) :
      op->vtkPVEnSightMasterServerReader2::GetPointArrayName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVEnSightMasterServerReader2_GetCellArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVEnSightMasterServerReader2 *op = static_cast<vtkPVEnSightMasterServerReader2 *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetCellArrayName(temp0) :
      op->vtkPVEnSightMasterServerReader2::GetCellArrayName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVEnSightMasterServerReader2_GetPointArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVEnSightMasterServerReader2 *op = static_cast<vtkPVEnSightMasterServerReader2 *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPointArrayStatus(temp0) :
      op->vtkPVEnSightMasterServerReader2::GetPointArrayStatus(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVEnSightMasterServerReader2_GetCellArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVEnSightMasterServerReader2 *op = static_cast<vtkPVEnSightMasterServerReader2 *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCellArrayStatus(temp0) :
      op->vtkPVEnSightMasterServerReader2::GetCellArrayStatus(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVEnSightMasterServerReader2_SetPointArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVEnSightMasterServerReader2 *op = static_cast<vtkPVEnSightMasterServerReader2 *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetPointArrayStatus(temp0, temp1);
    }
    else
    {
      op->vtkPVEnSightMasterServerReader2::SetPointArrayStatus(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVEnSightMasterServerReader2_SetCellArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVEnSightMasterServerReader2 *op = static_cast<vtkPVEnSightMasterServerReader2 *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetCellArrayStatus(temp0, temp1);
    }
    else
    {
      op->vtkPVEnSightMasterServerReader2::SetCellArrayStatus(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVEnSightMasterServerReader2_SetByteOrderToBigEndian(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetByteOrderToBigEndian");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVEnSightMasterServerReader2 *op = static_cast<vtkPVEnSightMasterServerReader2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetByteOrderToBigEndian();
    }
    else
    {
      op->vtkPVEnSightMasterServerReader2::SetByteOrderToBigEndian();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVEnSightMasterServerReader2_SetByteOrderToLittleEndian(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetByteOrderToLittleEndian");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVEnSightMasterServerReader2 *op = static_cast<vtkPVEnSightMasterServerReader2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetByteOrderToLittleEndian();
    }
    else
    {
      op->vtkPVEnSightMasterServerReader2::SetByteOrderToLittleEndian();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVEnSightMasterServerReader2_SetByteOrder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetByteOrder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVEnSightMasterServerReader2 *op = static_cast<vtkPVEnSightMasterServerReader2 *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetByteOrder(temp0);
    }
    else
    {
      op->vtkPVEnSightMasterServerReader2::SetByteOrder(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVEnSightMasterServerReader2_GetByteOrder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetByteOrder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVEnSightMasterServerReader2 *op = static_cast<vtkPVEnSightMasterServerReader2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetByteOrder() :
      op->vtkPVEnSightMasterServerReader2::GetByteOrder());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVEnSightMasterServerReader2_GetByteOrderAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetByteOrderAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVEnSightMasterServerReader2 *op = static_cast<vtkPVEnSightMasterServerReader2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetByteOrderAsString() :
      op->vtkPVEnSightMasterServerReader2::GetByteOrderAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPVEnSightMasterServerReader2_Methods[] = {
  {"IsTypeOf", PyvtkPVEnSightMasterServerReader2_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPVEnSightMasterServerReader2_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPVEnSightMasterServerReader2_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPVEnSightMasterServerReader2\nC++: static vtkPVEnSightMasterServerReader2 *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPVEnSightMasterServerReader2_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPVEnSightMasterServerReader2\nC++: vtkPVEnSightMasterServerReader2 *NewInstance()\n\n"},
  {"GetController", PyvtkPVEnSightMasterServerReader2_GetController, METH_VARARGS,
   "V.GetController() -> vtkMultiProcessController\nC++: virtual vtkMultiProcessController *GetController()\n\nThis class uses MPI communication mechanisms to verify the\nintegrity of all case files in the master file.  The get method\ninterface must use vtkMultiProcessController instead of\nvtkMPIController because Tcl wrapping requires the class's\nwrapper to be defined, but it is not defined if MPI is not on. In\nclient-server mode, we may still need to create an instance of\nthis class on the client process even if MPI is not compiled in.\n"},
  {"SetController", PyvtkPVEnSightMasterServerReader2_SetController, METH_VARARGS,
   "V.SetController(vtkMultiProcessController)\nC++: virtual void SetController(\n    vtkMultiProcessController *controller)\n\nThis class uses MPI communication mechanisms to verify the\nintegrity of all case files in the master file.  The get method\ninterface must use vtkMultiProcessController instead of\nvtkMPIController because Tcl wrapping requires the class's\nwrapper to be defined, but it is not defined if MPI is not on. In\nclient-server mode, we may still need to create an instance of\nthis class on the client process even if MPI is not compiled in.\n"},
  {"CanReadFile", PyvtkPVEnSightMasterServerReader2_CanReadFile, METH_VARARGS,
   "V.CanReadFile(string) -> int\nC++: int CanReadFile(const char *) override;\n\nReturn whether we can read the file given.\n"},
  {"GetNumberOfPieces", PyvtkPVEnSightMasterServerReader2_GetNumberOfPieces, METH_VARARGS,
   "V.GetNumberOfPieces() -> int\nC++: virtual int GetNumberOfPieces()\n\nGet the number of pieces in the file.  Valid after\nUpdateInformation.\n"},
  {"SetCaseFileName", PyvtkPVEnSightMasterServerReader2_SetCaseFileName, METH_VARARGS,
   "V.SetCaseFileName(string)\nC++: void SetCaseFileName(const char *fileName)\n\nSet the name of the file to be read.\n"},
  {"GetNumberOfPointArrays", PyvtkPVEnSightMasterServerReader2_GetNumberOfPointArrays, METH_VARARGS,
   "V.GetNumberOfPointArrays() -> int\nC++: int GetNumberOfPointArrays()\n\nGet the number of point or cell arrays available in the input.\n"},
  {"GetNumberOfCellArrays", PyvtkPVEnSightMasterServerReader2_GetNumberOfCellArrays, METH_VARARGS,
   "V.GetNumberOfCellArrays() -> int\nC++: int GetNumberOfCellArrays()\n\nGet the number of point or cell arrays available in the input.\n"},
  {"GetPointArrayName", PyvtkPVEnSightMasterServerReader2_GetPointArrayName, METH_VARARGS,
   "V.GetPointArrayName(int) -> string\nC++: const char *GetPointArrayName(int index)\n\nGet the name of the point or cell array with the given index in\nthe input.\n"},
  {"GetCellArrayName", PyvtkPVEnSightMasterServerReader2_GetCellArrayName, METH_VARARGS,
   "V.GetCellArrayName(int) -> string\nC++: const char *GetCellArrayName(int index)\n\nGet the name of the point or cell array with the given index in\nthe input.\n"},
  {"GetPointArrayStatus", PyvtkPVEnSightMasterServerReader2_GetPointArrayStatus, METH_VARARGS,
   "V.GetPointArrayStatus(string) -> int\nC++: int GetPointArrayStatus(const char *name)\n\nGet/Set whether the point or cell array with the given name is to\nbe read.\n"},
  {"GetCellArrayStatus", PyvtkPVEnSightMasterServerReader2_GetCellArrayStatus, METH_VARARGS,
   "V.GetCellArrayStatus(string) -> int\nC++: int GetCellArrayStatus(const char *name)\n\nGet/Set whether the point or cell array with the given name is to\nbe read.\n"},
  {"SetPointArrayStatus", PyvtkPVEnSightMasterServerReader2_SetPointArrayStatus, METH_VARARGS,
   "V.SetPointArrayStatus(string, int)\nC++: void SetPointArrayStatus(const char *name, int status)\n\nGet/Set whether the point or cell array with the given name is to\nbe read.\n"},
  {"SetCellArrayStatus", PyvtkPVEnSightMasterServerReader2_SetCellArrayStatus, METH_VARARGS,
   "V.SetCellArrayStatus(string, int)\nC++: void SetCellArrayStatus(const char *name, int status)\n\nGet/Set whether the point or cell array with the given name is to\nbe read.\n"},
  {"SetByteOrderToBigEndian", PyvtkPVEnSightMasterServerReader2_SetByteOrderToBigEndian, METH_VARARGS,
   "V.SetByteOrderToBigEndian()\nC++: void SetByteOrderToBigEndian()\n\nSet the byte order of the file (remember, more Unix workstations\nwrite big endian whereas PCs write little endian). Default is big\nendian (since most older PLOT3D files were written by\nworkstations).\n"},
  {"SetByteOrderToLittleEndian", PyvtkPVEnSightMasterServerReader2_SetByteOrderToLittleEndian, METH_VARARGS,
   "V.SetByteOrderToLittleEndian()\nC++: void SetByteOrderToLittleEndian()\n\nSet the byte order of the file (remember, more Unix workstations\nwrite big endian whereas PCs write little endian). Default is big\nendian (since most older PLOT3D files were written by\nworkstations).\n"},
  {"SetByteOrder", PyvtkPVEnSightMasterServerReader2_SetByteOrder, METH_VARARGS,
   "V.SetByteOrder(int)\nC++: void SetByteOrder(int byteOrder) override;\n\nSet the byte order of the file (remember, more Unix workstations\nwrite big endian whereas PCs write little endian). Default is big\nendian (since most older PLOT3D files were written by\nworkstations).\n"},
  {"GetByteOrder", PyvtkPVEnSightMasterServerReader2_GetByteOrder, METH_VARARGS,
   "V.GetByteOrder() -> int\nC++: int GetByteOrder() override;\n\nSet the byte order of the file (remember, more Unix workstations\nwrite big endian whereas PCs write little endian). Default is big\nendian (since most older PLOT3D files were written by\nworkstations).\n"},
  {"GetByteOrderAsString", PyvtkPVEnSightMasterServerReader2_GetByteOrderAsString, METH_VARARGS,
   "V.GetByteOrderAsString() -> string\nC++: const char *GetByteOrderAsString()\n\nSet the byte order of the file (remember, more Unix workstations\nwrite big endian whereas PCs write little endian). Default is big\nendian (since most older PLOT3D files were written by\nworkstations).\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPVEnSightMasterServerReader2_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsDefaultPython.vtkPVEnSightMasterServerReader2", // tp_name
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
  PyvtkPVEnSightMasterServerReader2_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPVEnSightMasterServerReader2_StaticNew()
{
  return vtkPVEnSightMasterServerReader2::New();
}

PyObject *PyvtkPVEnSightMasterServerReader2_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPVEnSightMasterServerReader2_Type, PyvtkPVEnSightMasterServerReader2_Methods,
    "vtkPVEnSightMasterServerReader2",
 &PyvtkPVEnSightMasterServerReader2_StaticNew);

  PyTypeObject *pytype = &PyvtkPVEnSightMasterServerReader2_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPGenericEnSightReader_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPVEnSightMasterServerReader2(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPVEnSightMasterServerReader2_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPVEnSightMasterServerReader2", o) != 0)
  {
    Py_DECREF(o);
  }

}

