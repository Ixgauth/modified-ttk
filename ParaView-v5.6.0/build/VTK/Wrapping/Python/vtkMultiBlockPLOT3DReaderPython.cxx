// python wrapper for vtkMultiBlockPLOT3DReader
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
#include "vtkMultiBlockPLOT3DReader.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMultiBlockPLOT3DReader(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkMultiBlockPLOT3DReader_ClassNew(); }

#ifndef DECLARED_PyvtkParallelReader_ClassNew
extern "C" { PyObject *PyvtkParallelReader_ClassNew(); }
#define DECLARED_PyvtkParallelReader_ClassNew
#endif

static const char *PyvtkMultiBlockPLOT3DReader_Doc =
  "vtkMultiBlockPLOT3DReader - read PLOT3D data files\n\n"
  "Superclass: vtkParallelReader\n\n"
  "vtkMultiBlockPLOT3DReader is a reader object that reads PLOT3D\n"
  "formatted files and generates structured grid(s) on output. PLOT3D is\n"
  "a computer graphics program designed to visualize the grids and\n"
  "solutions of computational fluid dynamics. This reader also supports\n"
  "the variant of the PLOT3D format used by NASA's OVERFLOW CFD\n"
  "software, including full support for all Q variables. Please see the \"PLOT3D User's\n"
  "Manual\" available from NASA Ames Research Center, Moffett Field CA.\n\n"
  "PLOT3D files consist of a grid file (also known as XYZ file), an\n"
  "optional solution file (also known as a Q file), and an optional\n"
  "function file that contains user created data (currently\n"
  "unsupported). The Q file contains solution information as follows:\n"
  "the four parameters free stream mach number (Fsmach), angle of attack\n"
  "(Alpha), Reynolds number (Re), and total integration time (Time).\n"
  "This information is stored in an array called Properties in the\n"
  "FieldData of each output (tuple 0: fsmach, tuple 1: alpha, tuple 2:\n"
  "re, tuple 3: time). In addition, the solution file contains the flow\n"
  "density (scalar), flow momentum (vector), and flow energy (scalar).\n\n"
  "This reader supports a limited form of time series data which are\n"
  "stored as a series of Q files. Using the AddFileName() method\n"
  "provided by the superclass, one can define a file series. For other\n"
  "cases, for example where the XYZ or function files vary over time,\n"
  "use vtkPlot3DMetaReader.\n\n"
  "The reader can generate additional scalars and vectors (or\n"
  "\"functions\") from this information. To use vtkMultiBlockPLOT3DReader,\n"
  "you must specify the particular function number for the scalar and\n"
  "vector you want to visualize. This implementation of the reader\n"
  "provides the following functions. The scalar functions are:\n"
  "-1  - don't read or compute any scalars 100 - density 110 - pressure\n"
  "   111 - pressure coefficient (requires Overflow file with Gamma) 112\n"
  "- mach number (requires Overflow file with Gamma) 113 - sounds speed\n"
  "   (requires Overflow file with Gamma) 120 - temperature 130 -\n"
  "   enthalpy 140 - internal energy 144 - kinetic energy 153 - velocity\n"
  "magnitude 163 - stagnation energy 170 - entropy 184 - swirl 211 -\n"
  "   vorticity magnitude\n\n"
  "The vector functions are:\n"
  "-1  - don't read or compute any vectors 200 - velocity 201 -\n"
  "   vorticity 202 - momentum 210 - pressure gradient. 212 - strain\n"
  "   rate\n\n"
  "(Other functions are described in the PLOT3D spec, but only those\n"
  "listed are implemented here.) Note that by default, this reader\n"
  "creates the density scalar (100), stagnation energy (163) and\n"
  "momentum vector (202) as output. (These are just read in from the\n"
  "solution file.) Please note that the validity of computation is a\n"
  "function of this class's gas constants (R, Gamma) and the equations\n"
  "used. They may not be suitable for your computational domain.\n\n"
  "Additionally, you can read other data and associate it as a\n"
  "vtkDataArray into the output's point attribute data. Use the method\n"
  "AddFunction() to list all the functions that you'd like to read.\n"
  "AddFunction() accepts an integer parameter that defines the function\n"
  "number.\n\n"
  "@sa\n"
  "vtkMultiBlockDataSet vtkStructuredGrid vtkPlot3DMetaReader\n\n";


static PyObject *
PyvtkMultiBlockPLOT3DReader_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMultiBlockPLOT3DReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMultiBlockPLOT3DReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockPLOT3DReader *op = static_cast<vtkMultiBlockPLOT3DReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMultiBlockPLOT3DReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMultiBlockPLOT3DReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMultiBlockPLOT3DReader *tempr = vtkMultiBlockPLOT3DReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMultiBlockPLOT3DReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockPLOT3DReader *op = static_cast<vtkMultiBlockPLOT3DReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMultiBlockPLOT3DReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMultiBlockPLOT3DReader::NewInstance());

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
PyvtkMultiBlockPLOT3DReader_GetOutput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockPLOT3DReader *op = static_cast<vtkMultiBlockPLOT3DReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMultiBlockDataSet *tempr = (ap.IsBound() ?
      op->GetOutput() :
      op->vtkMultiBlockPLOT3DReader::GetOutput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMultiBlockPLOT3DReader_GetOutput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockPLOT3DReader *op = static_cast<vtkMultiBlockPLOT3DReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkMultiBlockDataSet *tempr = (ap.IsBound() ?
      op->GetOutput(temp0) :
      op->vtkMultiBlockPLOT3DReader::GetOutput(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMultiBlockPLOT3DReader_GetOutput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkMultiBlockPLOT3DReader_GetOutput_s1(self, args);
    case 1:
      return PyvtkMultiBlockPLOT3DReader_GetOutput_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetOutput");
  return nullptr;
}



static PyObject *
PyvtkMultiBlockPLOT3DReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockPLOT3DReader *op = static_cast<vtkMultiBlockPLOT3DReader *>(vp);

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
      op->vtkMultiBlockPLOT3DReader::SetFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMultiBlockPLOT3DReader_GetFileName_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockPLOT3DReader *op = static_cast<vtkMultiBlockPLOT3DReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkMultiBlockPLOT3DReader::GetFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMultiBlockPLOT3DReader_GetFileName_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockPLOT3DReader *op = static_cast<vtkMultiBlockPLOT3DReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetFileName(temp0) :
      op->vtkMultiBlockPLOT3DReader::GetFileName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMultiBlockPLOT3DReader_GetFileName(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkMultiBlockPLOT3DReader_GetFileName_s1(self, args);
    case 1:
      return PyvtkMultiBlockPLOT3DReader_GetFileName_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetFileName");
  return nullptr;
}



static PyObject *
PyvtkMultiBlockPLOT3DReader_SetXYZFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXYZFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockPLOT3DReader *op = static_cast<vtkMultiBlockPLOT3DReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetXYZFileName(temp0);
    }
    else
    {
      op->vtkMultiBlockPLOT3DReader::SetXYZFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMultiBlockPLOT3DReader_GetXYZFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXYZFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockPLOT3DReader *op = static_cast<vtkMultiBlockPLOT3DReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetXYZFileName() :
      op->vtkMultiBlockPLOT3DReader::GetXYZFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMultiBlockPLOT3DReader_SetQFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockPLOT3DReader *op = static_cast<vtkMultiBlockPLOT3DReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetQFileName(temp0);
    }
    else
    {
      op->vtkMultiBlockPLOT3DReader::SetQFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMultiBlockPLOT3DReader_GetQFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetQFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockPLOT3DReader *op = static_cast<vtkMultiBlockPLOT3DReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetQFileName() :
      op->vtkMultiBlockPLOT3DReader::GetQFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMultiBlockPLOT3DReader_SetFunctionFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFunctionFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockPLOT3DReader *op = static_cast<vtkMultiBlockPLOT3DReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFunctionFileName(temp0);
    }
    else
    {
      op->vtkMultiBlockPLOT3DReader::SetFunctionFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMultiBlockPLOT3DReader_GetFunctionFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFunctionFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockPLOT3DReader *op = static_cast<vtkMultiBlockPLOT3DReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFunctionFileName() :
      op->vtkMultiBlockPLOT3DReader::GetFunctionFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMultiBlockPLOT3DReader_SetAutoDetectFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAutoDetectFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockPLOT3DReader *op = static_cast<vtkMultiBlockPLOT3DReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAutoDetectFormat(temp0);
    }
    else
    {
      op->vtkMultiBlockPLOT3DReader::SetAutoDetectFormat(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMultiBlockPLOT3DReader_GetAutoDetectFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutoDetectFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockPLOT3DReader *op = static_cast<vtkMultiBlockPLOT3DReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAutoDetectFormat() :
      op->vtkMultiBlockPLOT3DReader::GetAutoDetectFormat());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMultiBlockPLOT3DReader_AutoDetectFormatOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutoDetectFormatOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockPLOT3DReader *op = static_cast<vtkMultiBlockPLOT3DReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AutoDetectFormatOn();
    }
    else
    {
      op->vtkMultiBlockPLOT3DReader::AutoDetectFormatOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMultiBlockPLOT3DReader_AutoDetectFormatOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutoDetectFormatOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockPLOT3DReader *op = static_cast<vtkMultiBlockPLOT3DReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AutoDetectFormatOff();
    }
    else
    {
      op->vtkMultiBlockPLOT3DReader::AutoDetectFormatOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMultiBlockPLOT3DReader_SetBinaryFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBinaryFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockPLOT3DReader *op = static_cast<vtkMultiBlockPLOT3DReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBinaryFile(temp0);
    }
    else
    {
      op->vtkMultiBlockPLOT3DReader::SetBinaryFile(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMultiBlockPLOT3DReader_GetBinaryFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBinaryFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockPLOT3DReader *op = static_cast<vtkMultiBlockPLOT3DReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBinaryFile() :
      op->vtkMultiBlockPLOT3DReader::GetBinaryFile());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMultiBlockPLOT3DReader_BinaryFileOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BinaryFileOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockPLOT3DReader *op = static_cast<vtkMultiBlockPLOT3DReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BinaryFileOn();
    }
    else
    {
      op->vtkMultiBlockPLOT3DReader::BinaryFileOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMultiBlockPLOT3DReader_BinaryFileOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BinaryFileOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockPLOT3DReader *op = static_cast<vtkMultiBlockPLOT3DReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BinaryFileOff();
    }
    else
    {
      op->vtkMultiBlockPLOT3DReader::BinaryFileOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMultiBlockPLOT3DReader_SetMultiGrid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMultiGrid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockPLOT3DReader *op = static_cast<vtkMultiBlockPLOT3DReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMultiGrid(temp0);
    }
    else
    {
      op->vtkMultiBlockPLOT3DReader::SetMultiGrid(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMultiBlockPLOT3DReader_GetMultiGrid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMultiGrid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockPLOT3DReader *op = static_cast<vtkMultiBlockPLOT3DReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMultiGrid() :
      op->vtkMultiBlockPLOT3DReader::GetMultiGrid());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMultiBlockPLOT3DReader_MultiGridOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MultiGridOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockPLOT3DReader *op = static_cast<vtkMultiBlockPLOT3DReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MultiGridOn();
    }
    else
    {
      op->vtkMultiBlockPLOT3DReader::MultiGridOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMultiBlockPLOT3DReader_MultiGridOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MultiGridOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockPLOT3DReader *op = static_cast<vtkMultiBlockPLOT3DReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MultiGridOff();
    }
    else
    {
      op->vtkMultiBlockPLOT3DReader::MultiGridOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMultiBlockPLOT3DReader_SetHasByteCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHasByteCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockPLOT3DReader *op = static_cast<vtkMultiBlockPLOT3DReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHasByteCount(temp0);
    }
    else
    {
      op->vtkMultiBlockPLOT3DReader::SetHasByteCount(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMultiBlockPLOT3DReader_GetHasByteCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHasByteCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockPLOT3DReader *op = static_cast<vtkMultiBlockPLOT3DReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetHasByteCount() :
      op->vtkMultiBlockPLOT3DReader::GetHasByteCount());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMultiBlockPLOT3DReader_HasByteCountOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasByteCountOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockPLOT3DReader *op = static_cast<vtkMultiBlockPLOT3DReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->HasByteCountOn();
    }
    else
    {
      op->vtkMultiBlockPLOT3DReader::HasByteCountOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMultiBlockPLOT3DReader_HasByteCountOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasByteCountOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockPLOT3DReader *op = static_cast<vtkMultiBlockPLOT3DReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->HasByteCountOff();
    }
    else
    {
      op->vtkMultiBlockPLOT3DReader::HasByteCountOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMultiBlockPLOT3DReader_SetIBlanking(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIBlanking");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockPLOT3DReader *op = static_cast<vtkMultiBlockPLOT3DReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetIBlanking(temp0);
    }
    else
    {
      op->vtkMultiBlockPLOT3DReader::SetIBlanking(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMultiBlockPLOT3DReader_GetIBlanking(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIBlanking");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockPLOT3DReader *op = static_cast<vtkMultiBlockPLOT3DReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetIBlanking() :
      op->vtkMultiBlockPLOT3DReader::GetIBlanking());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMultiBlockPLOT3DReader_IBlankingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IBlankingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockPLOT3DReader *op = static_cast<vtkMultiBlockPLOT3DReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->IBlankingOn();
    }
    else
    {
      op->vtkMultiBlockPLOT3DReader::IBlankingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMultiBlockPLOT3DReader_IBlankingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IBlankingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockPLOT3DReader *op = static_cast<vtkMultiBlockPLOT3DReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->IBlankingOff();
    }
    else
    {
      op->vtkMultiBlockPLOT3DReader::IBlankingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMultiBlockPLOT3DReader_SetTwoDimensionalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTwoDimensionalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockPLOT3DReader *op = static_cast<vtkMultiBlockPLOT3DReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTwoDimensionalGeometry(temp0);
    }
    else
    {
      op->vtkMultiBlockPLOT3DReader::SetTwoDimensionalGeometry(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMultiBlockPLOT3DReader_GetTwoDimensionalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTwoDimensionalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockPLOT3DReader *op = static_cast<vtkMultiBlockPLOT3DReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTwoDimensionalGeometry() :
      op->vtkMultiBlockPLOT3DReader::GetTwoDimensionalGeometry());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMultiBlockPLOT3DReader_TwoDimensionalGeometryOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TwoDimensionalGeometryOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockPLOT3DReader *op = static_cast<vtkMultiBlockPLOT3DReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TwoDimensionalGeometryOn();
    }
    else
    {
      op->vtkMultiBlockPLOT3DReader::TwoDimensionalGeometryOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMultiBlockPLOT3DReader_TwoDimensionalGeometryOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TwoDimensionalGeometryOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockPLOT3DReader *op = static_cast<vtkMultiBlockPLOT3DReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TwoDimensionalGeometryOff();
    }
    else
    {
      op->vtkMultiBlockPLOT3DReader::TwoDimensionalGeometryOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMultiBlockPLOT3DReader_SetDoublePrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDoublePrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockPLOT3DReader *op = static_cast<vtkMultiBlockPLOT3DReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDoublePrecision(temp0);
    }
    else
    {
      op->vtkMultiBlockPLOT3DReader::SetDoublePrecision(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMultiBlockPLOT3DReader_GetDoublePrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDoublePrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockPLOT3DReader *op = static_cast<vtkMultiBlockPLOT3DReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDoublePrecision() :
      op->vtkMultiBlockPLOT3DReader::GetDoublePrecision());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMultiBlockPLOT3DReader_DoublePrecisionOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DoublePrecisionOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockPLOT3DReader *op = static_cast<vtkMultiBlockPLOT3DReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DoublePrecisionOn();
    }
    else
    {
      op->vtkMultiBlockPLOT3DReader::DoublePrecisionOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMultiBlockPLOT3DReader_DoublePrecisionOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DoublePrecisionOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockPLOT3DReader *op = static_cast<vtkMultiBlockPLOT3DReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DoublePrecisionOff();
    }
    else
    {
      op->vtkMultiBlockPLOT3DReader::DoublePrecisionOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMultiBlockPLOT3DReader_SetForceRead(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetForceRead");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockPLOT3DReader *op = static_cast<vtkMultiBlockPLOT3DReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetForceRead(temp0);
    }
    else
    {
      op->vtkMultiBlockPLOT3DReader::SetForceRead(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMultiBlockPLOT3DReader_GetForceRead(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetForceRead");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockPLOT3DReader *op = static_cast<vtkMultiBlockPLOT3DReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetForceRead() :
      op->vtkMultiBlockPLOT3DReader::GetForceRead());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMultiBlockPLOT3DReader_ForceReadOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ForceReadOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockPLOT3DReader *op = static_cast<vtkMultiBlockPLOT3DReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ForceReadOn();
    }
    else
    {
      op->vtkMultiBlockPLOT3DReader::ForceReadOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMultiBlockPLOT3DReader_ForceReadOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ForceReadOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockPLOT3DReader *op = static_cast<vtkMultiBlockPLOT3DReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ForceReadOff();
    }
    else
    {
      op->vtkMultiBlockPLOT3DReader::ForceReadOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMultiBlockPLOT3DReader_SetByteOrderToBigEndian(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetByteOrderToBigEndian");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockPLOT3DReader *op = static_cast<vtkMultiBlockPLOT3DReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetByteOrderToBigEndian();
    }
    else
    {
      op->vtkMultiBlockPLOT3DReader::SetByteOrderToBigEndian();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMultiBlockPLOT3DReader_SetByteOrderToLittleEndian(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetByteOrderToLittleEndian");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockPLOT3DReader *op = static_cast<vtkMultiBlockPLOT3DReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetByteOrderToLittleEndian();
    }
    else
    {
      op->vtkMultiBlockPLOT3DReader::SetByteOrderToLittleEndian();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMultiBlockPLOT3DReader_SetByteOrder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetByteOrder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockPLOT3DReader *op = static_cast<vtkMultiBlockPLOT3DReader *>(vp);

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
      op->vtkMultiBlockPLOT3DReader::SetByteOrder(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMultiBlockPLOT3DReader_GetByteOrder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetByteOrder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockPLOT3DReader *op = static_cast<vtkMultiBlockPLOT3DReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetByteOrder() :
      op->vtkMultiBlockPLOT3DReader::GetByteOrder());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMultiBlockPLOT3DReader_GetByteOrderAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetByteOrderAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockPLOT3DReader *op = static_cast<vtkMultiBlockPLOT3DReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetByteOrderAsString() :
      op->vtkMultiBlockPLOT3DReader::GetByteOrderAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMultiBlockPLOT3DReader_SetR(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetR");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockPLOT3DReader *op = static_cast<vtkMultiBlockPLOT3DReader *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetR(temp0);
    }
    else
    {
      op->vtkMultiBlockPLOT3DReader::SetR(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMultiBlockPLOT3DReader_GetR(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetR");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockPLOT3DReader *op = static_cast<vtkMultiBlockPLOT3DReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetR() :
      op->vtkMultiBlockPLOT3DReader::GetR());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMultiBlockPLOT3DReader_SetGamma(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGamma");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockPLOT3DReader *op = static_cast<vtkMultiBlockPLOT3DReader *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGamma(temp0);
    }
    else
    {
      op->vtkMultiBlockPLOT3DReader::SetGamma(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMultiBlockPLOT3DReader_GetGamma(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGamma");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockPLOT3DReader *op = static_cast<vtkMultiBlockPLOT3DReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetGamma() :
      op->vtkMultiBlockPLOT3DReader::GetGamma());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMultiBlockPLOT3DReader_SetPreserveIntermediateFunctions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPreserveIntermediateFunctions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockPLOT3DReader *op = static_cast<vtkMultiBlockPLOT3DReader *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPreserveIntermediateFunctions(temp0);
    }
    else
    {
      op->vtkMultiBlockPLOT3DReader::SetPreserveIntermediateFunctions(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMultiBlockPLOT3DReader_GetPreserveIntermediateFunctions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPreserveIntermediateFunctions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockPLOT3DReader *op = static_cast<vtkMultiBlockPLOT3DReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetPreserveIntermediateFunctions() :
      op->vtkMultiBlockPLOT3DReader::GetPreserveIntermediateFunctions());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMultiBlockPLOT3DReader_PreserveIntermediateFunctionsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PreserveIntermediateFunctionsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockPLOT3DReader *op = static_cast<vtkMultiBlockPLOT3DReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PreserveIntermediateFunctionsOn();
    }
    else
    {
      op->vtkMultiBlockPLOT3DReader::PreserveIntermediateFunctionsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMultiBlockPLOT3DReader_PreserveIntermediateFunctionsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PreserveIntermediateFunctionsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockPLOT3DReader *op = static_cast<vtkMultiBlockPLOT3DReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PreserveIntermediateFunctionsOff();
    }
    else
    {
      op->vtkMultiBlockPLOT3DReader::PreserveIntermediateFunctionsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMultiBlockPLOT3DReader_SetScalarFunctionNumber(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarFunctionNumber");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockPLOT3DReader *op = static_cast<vtkMultiBlockPLOT3DReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScalarFunctionNumber(temp0);
    }
    else
    {
      op->vtkMultiBlockPLOT3DReader::SetScalarFunctionNumber(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMultiBlockPLOT3DReader_GetScalarFunctionNumber(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarFunctionNumber");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockPLOT3DReader *op = static_cast<vtkMultiBlockPLOT3DReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetScalarFunctionNumber() :
      op->vtkMultiBlockPLOT3DReader::GetScalarFunctionNumber());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMultiBlockPLOT3DReader_SetVectorFunctionNumber(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVectorFunctionNumber");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockPLOT3DReader *op = static_cast<vtkMultiBlockPLOT3DReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVectorFunctionNumber(temp0);
    }
    else
    {
      op->vtkMultiBlockPLOT3DReader::SetVectorFunctionNumber(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMultiBlockPLOT3DReader_GetVectorFunctionNumber(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorFunctionNumber");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockPLOT3DReader *op = static_cast<vtkMultiBlockPLOT3DReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetVectorFunctionNumber() :
      op->vtkMultiBlockPLOT3DReader::GetVectorFunctionNumber());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMultiBlockPLOT3DReader_AddFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockPLOT3DReader *op = static_cast<vtkMultiBlockPLOT3DReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->AddFunction(temp0);
    }
    else
    {
      op->vtkMultiBlockPLOT3DReader::AddFunction(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMultiBlockPLOT3DReader_RemoveFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockPLOT3DReader *op = static_cast<vtkMultiBlockPLOT3DReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RemoveFunction(temp0);
    }
    else
    {
      op->vtkMultiBlockPLOT3DReader::RemoveFunction(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMultiBlockPLOT3DReader_RemoveAllFunctions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllFunctions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockPLOT3DReader *op = static_cast<vtkMultiBlockPLOT3DReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllFunctions();
    }
    else
    {
      op->vtkMultiBlockPLOT3DReader::RemoveAllFunctions();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMultiBlockPLOT3DReader_CanReadBinaryFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanReadBinaryFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockPLOT3DReader *op = static_cast<vtkMultiBlockPLOT3DReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->CanReadBinaryFile(temp0) :
      op->vtkMultiBlockPLOT3DReader::CanReadBinaryFile(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMultiBlockPLOT3DReader_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockPLOT3DReader *op = static_cast<vtkMultiBlockPLOT3DReader *>(vp);

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
      op->vtkMultiBlockPLOT3DReader::SetController(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMultiBlockPLOT3DReader_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockPLOT3DReader *op = static_cast<vtkMultiBlockPLOT3DReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetController() :
      op->vtkMultiBlockPLOT3DReader::GetController());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMultiBlockPLOT3DReader_AddFunctionName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddFunctionName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockPLOT3DReader *op = static_cast<vtkMultiBlockPLOT3DReader *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->AddFunctionName(temp0);
    }
    else
    {
      op->vtkMultiBlockPLOT3DReader::AddFunctionName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMultiBlockPLOT3DReader_ReadMetaData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadMetaData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockPLOT3DReader *op = static_cast<vtkMultiBlockPLOT3DReader *>(vp);

  vtkInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
  {
    int tempr = (ap.IsBound() ?
      op->ReadMetaData(temp0) :
      op->vtkMultiBlockPLOT3DReader::ReadMetaData(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMultiBlockPLOT3DReader_ReadMesh(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadMesh");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockPLOT3DReader *op = static_cast<vtkMultiBlockPLOT3DReader *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  vtkDataObject *temp4 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetVTKObject(temp4, "vtkDataObject"))
  {
    int tempr = (ap.IsBound() ?
      op->ReadMesh(temp0, temp1, temp2, temp3, temp4) :
      op->vtkMultiBlockPLOT3DReader::ReadMesh(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMultiBlockPLOT3DReader_ReadPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockPLOT3DReader *op = static_cast<vtkMultiBlockPLOT3DReader *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  vtkDataObject *temp4 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetVTKObject(temp4, "vtkDataObject"))
  {
    int tempr = (ap.IsBound() ?
      op->ReadPoints(temp0, temp1, temp2, temp3, temp4) :
      op->vtkMultiBlockPLOT3DReader::ReadPoints(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMultiBlockPLOT3DReader_ReadArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockPLOT3DReader *op = static_cast<vtkMultiBlockPLOT3DReader *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  vtkDataObject *temp4 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetVTKObject(temp4, "vtkDataObject"))
  {
    int tempr = (ap.IsBound() ?
      op->ReadArrays(temp0, temp1, temp2, temp3, temp4) :
      op->vtkMultiBlockPLOT3DReader::ReadArrays(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMultiBlockPLOT3DReader_Methods[] = {
  {"IsTypeOf", PyvtkMultiBlockPLOT3DReader_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMultiBlockPLOT3DReader_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMultiBlockPLOT3DReader_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkMultiBlockPLOT3DReader\nC++: static vtkMultiBlockPLOT3DReader *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMultiBlockPLOT3DReader_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkMultiBlockPLOT3DReader\nC++: vtkMultiBlockPLOT3DReader *NewInstance()\n\n"},
  {"GetOutput", PyvtkMultiBlockPLOT3DReader_GetOutput, METH_VARARGS,
   "V.GetOutput() -> vtkMultiBlockDataSet\nC++: vtkMultiBlockDataSet *GetOutput()\nV.GetOutput(int) -> vtkMultiBlockDataSet\nC++: vtkMultiBlockDataSet *GetOutput(int)\n\nGet the output data object for a port on this algorithm.\n"},
  {"SetFileName", PyvtkMultiBlockPLOT3DReader_SetFileName, METH_VARARGS,
   "V.SetFileName(string)\nC++: void SetFileName(const char *name)\n\nSet/Get the PLOT3D geometry filename.\n"},
  {"GetFileName", PyvtkMultiBlockPLOT3DReader_GetFileName, METH_VARARGS,
   "V.GetFileName() -> string\nC++: const char *GetFileName()\nV.GetFileName(int) -> string\nC++: const char *GetFileName(int i)\n\nSet/Get the PLOT3D geometry filename.\n"},
  {"SetXYZFileName", PyvtkMultiBlockPLOT3DReader_SetXYZFileName, METH_VARARGS,
   "V.SetXYZFileName(string)\nC++: virtual void SetXYZFileName(const char *)\n\nSet/Get the PLOT3D geometry filename.\n"},
  {"GetXYZFileName", PyvtkMultiBlockPLOT3DReader_GetXYZFileName, METH_VARARGS,
   "V.GetXYZFileName() -> string\nC++: virtual char *GetXYZFileName()\n\nSet/Get the PLOT3D geometry filename.\n"},
  {"SetQFileName", PyvtkMultiBlockPLOT3DReader_SetQFileName, METH_VARARGS,
   "V.SetQFileName(string)\nC++: void SetQFileName(const char *name)\n\nSet/Get the PLOT3D solution filename. This adds a filename using\nthe superclass' AddFileName() method. To read a series of q\nfiles, use the AddFileName() interface directly to add multiple q\nfilenames in the appropriate order. If the files are of Overflow\nformat, the reader will read the time values from the files.\nOtherwise, it will use an integer sequence. Use a meta reader to\nsupport time values for non-Overflow file sequences.\n"},
  {"GetQFileName", PyvtkMultiBlockPLOT3DReader_GetQFileName, METH_VARARGS,
   "V.GetQFileName() -> string\nC++: const char *GetQFileName()\n\nSet/Get the PLOT3D solution filename. This adds a filename using\nthe superclass' AddFileName() method. To read a series of q\nfiles, use the AddFileName() interface directly to add multiple q\nfilenames in the appropriate order. If the files are of Overflow\nformat, the reader will read the time values from the files.\nOtherwise, it will use an integer sequence. Use a meta reader to\nsupport time values for non-Overflow file sequences.\n"},
  {"SetFunctionFileName", PyvtkMultiBlockPLOT3DReader_SetFunctionFileName, METH_VARARGS,
   "V.SetFunctionFileName(string)\nC++: virtual void SetFunctionFileName(const char *_arg)\n\nSet/Get the PLOT3D function filename.\n"},
  {"GetFunctionFileName", PyvtkMultiBlockPLOT3DReader_GetFunctionFileName, METH_VARARGS,
   "V.GetFunctionFileName() -> string\nC++: virtual char *GetFunctionFileName()\n\nSet/Get the PLOT3D function filename.\n"},
  {"SetAutoDetectFormat", PyvtkMultiBlockPLOT3DReader_SetAutoDetectFormat, METH_VARARGS,
   "V.SetAutoDetectFormat(int)\nC++: virtual void SetAutoDetectFormat(vtkTypeBool _arg)\n\nWhen this option is turned on, the reader will try to figure out\nthe values of various options such as byte order, byte count etc.\nautomatically. This options works only for binary files. When it\nis turned on, the reader should be able to read most Plot3D files\nautomatically. The default is OFF for backwards compatibility\nreasons. For binary files, it is strongly recommended that you\nturn on AutoDetectFormat and leave the other file format related\noptions untouched.\n"},
  {"GetAutoDetectFormat", PyvtkMultiBlockPLOT3DReader_GetAutoDetectFormat, METH_VARARGS,
   "V.GetAutoDetectFormat() -> int\nC++: virtual vtkTypeBool GetAutoDetectFormat()\n\nWhen this option is turned on, the reader will try to figure out\nthe values of various options such as byte order, byte count etc.\nautomatically. This options works only for binary files. When it\nis turned on, the reader should be able to read most Plot3D files\nautomatically. The default is OFF for backwards compatibility\nreasons. For binary files, it is strongly recommended that you\nturn on AutoDetectFormat and leave the other file format related\noptions untouched.\n"},
  {"AutoDetectFormatOn", PyvtkMultiBlockPLOT3DReader_AutoDetectFormatOn, METH_VARARGS,
   "V.AutoDetectFormatOn()\nC++: virtual void AutoDetectFormatOn()\n\nWhen this option is turned on, the reader will try to figure out\nthe values of various options such as byte order, byte count etc.\nautomatically. This options works only for binary files. When it\nis turned on, the reader should be able to read most Plot3D files\nautomatically. The default is OFF for backwards compatibility\nreasons. For binary files, it is strongly recommended that you\nturn on AutoDetectFormat and leave the other file format related\noptions untouched.\n"},
  {"AutoDetectFormatOff", PyvtkMultiBlockPLOT3DReader_AutoDetectFormatOff, METH_VARARGS,
   "V.AutoDetectFormatOff()\nC++: virtual void AutoDetectFormatOff()\n\nWhen this option is turned on, the reader will try to figure out\nthe values of various options such as byte order, byte count etc.\nautomatically. This options works only for binary files. When it\nis turned on, the reader should be able to read most Plot3D files\nautomatically. The default is OFF for backwards compatibility\nreasons. For binary files, it is strongly recommended that you\nturn on AutoDetectFormat and leave the other file format related\noptions untouched.\n"},
  {"SetBinaryFile", PyvtkMultiBlockPLOT3DReader_SetBinaryFile, METH_VARARGS,
   "V.SetBinaryFile(int)\nC++: virtual void SetBinaryFile(vtkTypeBool _arg)\n\nIs the file to be read written in binary format (as opposed to\nascii).\n"},
  {"GetBinaryFile", PyvtkMultiBlockPLOT3DReader_GetBinaryFile, METH_VARARGS,
   "V.GetBinaryFile() -> int\nC++: virtual vtkTypeBool GetBinaryFile()\n\nIs the file to be read written in binary format (as opposed to\nascii).\n"},
  {"BinaryFileOn", PyvtkMultiBlockPLOT3DReader_BinaryFileOn, METH_VARARGS,
   "V.BinaryFileOn()\nC++: virtual void BinaryFileOn()\n\nIs the file to be read written in binary format (as opposed to\nascii).\n"},
  {"BinaryFileOff", PyvtkMultiBlockPLOT3DReader_BinaryFileOff, METH_VARARGS,
   "V.BinaryFileOff()\nC++: virtual void BinaryFileOff()\n\nIs the file to be read written in binary format (as opposed to\nascii).\n"},
  {"SetMultiGrid", PyvtkMultiBlockPLOT3DReader_SetMultiGrid, METH_VARARGS,
   "V.SetMultiGrid(int)\nC++: virtual void SetMultiGrid(vtkTypeBool _arg)\n\nDoes the file to be read contain information about number of\ngrids. In some PLOT3D files, the first value contains the number\nof grids (even if there is only 1). If reading such a file, set\nthis to true.\n"},
  {"GetMultiGrid", PyvtkMultiBlockPLOT3DReader_GetMultiGrid, METH_VARARGS,
   "V.GetMultiGrid() -> int\nC++: virtual vtkTypeBool GetMultiGrid()\n\nDoes the file to be read contain information about number of\ngrids. In some PLOT3D files, the first value contains the number\nof grids (even if there is only 1). If reading such a file, set\nthis to true.\n"},
  {"MultiGridOn", PyvtkMultiBlockPLOT3DReader_MultiGridOn, METH_VARARGS,
   "V.MultiGridOn()\nC++: virtual void MultiGridOn()\n\nDoes the file to be read contain information about number of\ngrids. In some PLOT3D files, the first value contains the number\nof grids (even if there is only 1). If reading such a file, set\nthis to true.\n"},
  {"MultiGridOff", PyvtkMultiBlockPLOT3DReader_MultiGridOff, METH_VARARGS,
   "V.MultiGridOff()\nC++: virtual void MultiGridOff()\n\nDoes the file to be read contain information about number of\ngrids. In some PLOT3D files, the first value contains the number\nof grids (even if there is only 1). If reading such a file, set\nthis to true.\n"},
  {"SetHasByteCount", PyvtkMultiBlockPLOT3DReader_SetHasByteCount, METH_VARARGS,
   "V.SetHasByteCount(int)\nC++: virtual void SetHasByteCount(vtkTypeBool _arg)\n\nWere the arrays written with leading and trailing byte counts ?\nUsually, files written by a fortran program will contain these\nbyte counts whereas the ones written by C/C++ won't.\n"},
  {"GetHasByteCount", PyvtkMultiBlockPLOT3DReader_GetHasByteCount, METH_VARARGS,
   "V.GetHasByteCount() -> int\nC++: virtual vtkTypeBool GetHasByteCount()\n\nWere the arrays written with leading and trailing byte counts ?\nUsually, files written by a fortran program will contain these\nbyte counts whereas the ones written by C/C++ won't.\n"},
  {"HasByteCountOn", PyvtkMultiBlockPLOT3DReader_HasByteCountOn, METH_VARARGS,
   "V.HasByteCountOn()\nC++: virtual void HasByteCountOn()\n\nWere the arrays written with leading and trailing byte counts ?\nUsually, files written by a fortran program will contain these\nbyte counts whereas the ones written by C/C++ won't.\n"},
  {"HasByteCountOff", PyvtkMultiBlockPLOT3DReader_HasByteCountOff, METH_VARARGS,
   "V.HasByteCountOff()\nC++: virtual void HasByteCountOff()\n\nWere the arrays written with leading and trailing byte counts ?\nUsually, files written by a fortran program will contain these\nbyte counts whereas the ones written by C/C++ won't.\n"},
  {"SetIBlanking", PyvtkMultiBlockPLOT3DReader_SetIBlanking, METH_VARARGS,
   "V.SetIBlanking(int)\nC++: virtual void SetIBlanking(vtkTypeBool _arg)\n\nIs there iblanking (point visibility) information in the file. If\nthere is iblanking arrays, these will be read and assigned to the\nPointVisibility array of the output.\n"},
  {"GetIBlanking", PyvtkMultiBlockPLOT3DReader_GetIBlanking, METH_VARARGS,
   "V.GetIBlanking() -> int\nC++: virtual vtkTypeBool GetIBlanking()\n\nIs there iblanking (point visibility) information in the file. If\nthere is iblanking arrays, these will be read and assigned to the\nPointVisibility array of the output.\n"},
  {"IBlankingOn", PyvtkMultiBlockPLOT3DReader_IBlankingOn, METH_VARARGS,
   "V.IBlankingOn()\nC++: virtual void IBlankingOn()\n\nIs there iblanking (point visibility) information in the file. If\nthere is iblanking arrays, these will be read and assigned to the\nPointVisibility array of the output.\n"},
  {"IBlankingOff", PyvtkMultiBlockPLOT3DReader_IBlankingOff, METH_VARARGS,
   "V.IBlankingOff()\nC++: virtual void IBlankingOff()\n\nIs there iblanking (point visibility) information in the file. If\nthere is iblanking arrays, these will be read and assigned to the\nPointVisibility array of the output.\n"},
  {"SetTwoDimensionalGeometry", PyvtkMultiBlockPLOT3DReader_SetTwoDimensionalGeometry, METH_VARARGS,
   "V.SetTwoDimensionalGeometry(int)\nC++: virtual void SetTwoDimensionalGeometry(vtkTypeBool _arg)\n\nIf only two-dimensional data was written to the file, turn this\non.\n"},
  {"GetTwoDimensionalGeometry", PyvtkMultiBlockPLOT3DReader_GetTwoDimensionalGeometry, METH_VARARGS,
   "V.GetTwoDimensionalGeometry() -> int\nC++: virtual vtkTypeBool GetTwoDimensionalGeometry()\n\nIf only two-dimensional data was written to the file, turn this\non.\n"},
  {"TwoDimensionalGeometryOn", PyvtkMultiBlockPLOT3DReader_TwoDimensionalGeometryOn, METH_VARARGS,
   "V.TwoDimensionalGeometryOn()\nC++: virtual void TwoDimensionalGeometryOn()\n\nIf only two-dimensional data was written to the file, turn this\non.\n"},
  {"TwoDimensionalGeometryOff", PyvtkMultiBlockPLOT3DReader_TwoDimensionalGeometryOff, METH_VARARGS,
   "V.TwoDimensionalGeometryOff()\nC++: virtual void TwoDimensionalGeometryOff()\n\nIf only two-dimensional data was written to the file, turn this\non.\n"},
  {"SetDoublePrecision", PyvtkMultiBlockPLOT3DReader_SetDoublePrecision, METH_VARARGS,
   "V.SetDoublePrecision(int)\nC++: virtual void SetDoublePrecision(vtkTypeBool _arg)\n\nIs this file in double precision or single precision. This only\nmatters for binary files. Default is single.\n"},
  {"GetDoublePrecision", PyvtkMultiBlockPLOT3DReader_GetDoublePrecision, METH_VARARGS,
   "V.GetDoublePrecision() -> int\nC++: virtual vtkTypeBool GetDoublePrecision()\n\nIs this file in double precision or single precision. This only\nmatters for binary files. Default is single.\n"},
  {"DoublePrecisionOn", PyvtkMultiBlockPLOT3DReader_DoublePrecisionOn, METH_VARARGS,
   "V.DoublePrecisionOn()\nC++: virtual void DoublePrecisionOn()\n\nIs this file in double precision or single precision. This only\nmatters for binary files. Default is single.\n"},
  {"DoublePrecisionOff", PyvtkMultiBlockPLOT3DReader_DoublePrecisionOff, METH_VARARGS,
   "V.DoublePrecisionOff()\nC++: virtual void DoublePrecisionOff()\n\nIs this file in double precision or single precision. This only\nmatters for binary files. Default is single.\n"},
  {"SetForceRead", PyvtkMultiBlockPLOT3DReader_SetForceRead, METH_VARARGS,
   "V.SetForceRead(int)\nC++: virtual void SetForceRead(vtkTypeBool _arg)\n\nTry to read a binary file even if the file length seems to be\ninconsistent with the header information. Use this with caution,\nif the file length is not the same as calculated from the header.\neither the file is corrupt or the settings are wrong.\n"},
  {"GetForceRead", PyvtkMultiBlockPLOT3DReader_GetForceRead, METH_VARARGS,
   "V.GetForceRead() -> int\nC++: virtual vtkTypeBool GetForceRead()\n\nTry to read a binary file even if the file length seems to be\ninconsistent with the header information. Use this with caution,\nif the file length is not the same as calculated from the header.\neither the file is corrupt or the settings are wrong.\n"},
  {"ForceReadOn", PyvtkMultiBlockPLOT3DReader_ForceReadOn, METH_VARARGS,
   "V.ForceReadOn()\nC++: virtual void ForceReadOn()\n\nTry to read a binary file even if the file length seems to be\ninconsistent with the header information. Use this with caution,\nif the file length is not the same as calculated from the header.\neither the file is corrupt or the settings are wrong.\n"},
  {"ForceReadOff", PyvtkMultiBlockPLOT3DReader_ForceReadOff, METH_VARARGS,
   "V.ForceReadOff()\nC++: virtual void ForceReadOff()\n\nTry to read a binary file even if the file length seems to be\ninconsistent with the header information. Use this with caution,\nif the file length is not the same as calculated from the header.\neither the file is corrupt or the settings are wrong.\n"},
  {"SetByteOrderToBigEndian", PyvtkMultiBlockPLOT3DReader_SetByteOrderToBigEndian, METH_VARARGS,
   "V.SetByteOrderToBigEndian()\nC++: void SetByteOrderToBigEndian()\n\nSet the byte order of the file (remember, more Unix workstations\nwrite big endian whereas PCs write little endian). Default is big\nendian (since most older PLOT3D files were written by\nworkstations).\n"},
  {"SetByteOrderToLittleEndian", PyvtkMultiBlockPLOT3DReader_SetByteOrderToLittleEndian, METH_VARARGS,
   "V.SetByteOrderToLittleEndian()\nC++: void SetByteOrderToLittleEndian()\n\nSet the byte order of the file (remember, more Unix workstations\nwrite big endian whereas PCs write little endian). Default is big\nendian (since most older PLOT3D files were written by\nworkstations).\n"},
  {"SetByteOrder", PyvtkMultiBlockPLOT3DReader_SetByteOrder, METH_VARARGS,
   "V.SetByteOrder(int)\nC++: virtual void SetByteOrder(int _arg)\n\nSet the byte order of the file (remember, more Unix workstations\nwrite big endian whereas PCs write little endian). Default is big\nendian (since most older PLOT3D files were written by\nworkstations).\n"},
  {"GetByteOrder", PyvtkMultiBlockPLOT3DReader_GetByteOrder, METH_VARARGS,
   "V.GetByteOrder() -> int\nC++: virtual int GetByteOrder()\n\nSet the byte order of the file (remember, more Unix workstations\nwrite big endian whereas PCs write little endian). Default is big\nendian (since most older PLOT3D files were written by\nworkstations).\n"},
  {"GetByteOrderAsString", PyvtkMultiBlockPLOT3DReader_GetByteOrderAsString, METH_VARARGS,
   "V.GetByteOrderAsString() -> string\nC++: const char *GetByteOrderAsString()\n\nSet the byte order of the file (remember, more Unix workstations\nwrite big endian whereas PCs write little endian). Default is big\nendian (since most older PLOT3D files were written by\nworkstations).\n"},
  {"SetR", PyvtkMultiBlockPLOT3DReader_SetR, METH_VARARGS,
   "V.SetR(float)\nC++: virtual void SetR(double _arg)\n\nSet/Get the gas constant. Default is 1.0.\n"},
  {"GetR", PyvtkMultiBlockPLOT3DReader_GetR, METH_VARARGS,
   "V.GetR() -> float\nC++: virtual double GetR()\n\nSet/Get the gas constant. Default is 1.0.\n"},
  {"SetGamma", PyvtkMultiBlockPLOT3DReader_SetGamma, METH_VARARGS,
   "V.SetGamma(float)\nC++: virtual void SetGamma(double _arg)\n\nSet/Get the ratio of specific heats. Default is 1.4.\n"},
  {"GetGamma", PyvtkMultiBlockPLOT3DReader_GetGamma, METH_VARARGS,
   "V.GetGamma() -> float\nC++: virtual double GetGamma()\n\nSet/Get the ratio of specific heats. Default is 1.4.\n"},
  {"SetPreserveIntermediateFunctions", PyvtkMultiBlockPLOT3DReader_SetPreserveIntermediateFunctions, METH_VARARGS,
   "V.SetPreserveIntermediateFunctions(bool)\nC++: virtual void SetPreserveIntermediateFunctions(bool _arg)\n\nWhen set to true (default), the reader will preserve intermediate\ncomputed quantities that were not explicitly requested e.g. if\n`VelocityMagnitude` is enabled, but not `Velocity`, the reader\nstill needs to compute `Velocity`. If\n`PreserveIntermediateFunctions` if false, then the output will\nnot have `Velocity` array, only the requested\n`VelocityMagnitude`. This is useful to avoid using up memory for\narrays that are not relevant for the analysis.\n"},
  {"GetPreserveIntermediateFunctions", PyvtkMultiBlockPLOT3DReader_GetPreserveIntermediateFunctions, METH_VARARGS,
   "V.GetPreserveIntermediateFunctions() -> bool\nC++: virtual bool GetPreserveIntermediateFunctions()\n\nWhen set to true (default), the reader will preserve intermediate\ncomputed quantities that were not explicitly requested e.g. if\n`VelocityMagnitude` is enabled, but not `Velocity`, the reader\nstill needs to compute `Velocity`. If\n`PreserveIntermediateFunctions` if false, then the output will\nnot have `Velocity` array, only the requested\n`VelocityMagnitude`. This is useful to avoid using up memory for\narrays that are not relevant for the analysis.\n"},
  {"PreserveIntermediateFunctionsOn", PyvtkMultiBlockPLOT3DReader_PreserveIntermediateFunctionsOn, METH_VARARGS,
   "V.PreserveIntermediateFunctionsOn()\nC++: virtual void PreserveIntermediateFunctionsOn()\n\nWhen set to true (default), the reader will preserve intermediate\ncomputed quantities that were not explicitly requested e.g. if\n`VelocityMagnitude` is enabled, but not `Velocity`, the reader\nstill needs to compute `Velocity`. If\n`PreserveIntermediateFunctions` if false, then the output will\nnot have `Velocity` array, only the requested\n`VelocityMagnitude`. This is useful to avoid using up memory for\narrays that are not relevant for the analysis.\n"},
  {"PreserveIntermediateFunctionsOff", PyvtkMultiBlockPLOT3DReader_PreserveIntermediateFunctionsOff, METH_VARARGS,
   "V.PreserveIntermediateFunctionsOff()\nC++: virtual void PreserveIntermediateFunctionsOff()\n\nWhen set to true (default), the reader will preserve intermediate\ncomputed quantities that were not explicitly requested e.g. if\n`VelocityMagnitude` is enabled, but not `Velocity`, the reader\nstill needs to compute `Velocity`. If\n`PreserveIntermediateFunctions` if false, then the output will\nnot have `Velocity` array, only the requested\n`VelocityMagnitude`. This is useful to avoid using up memory for\narrays that are not relevant for the analysis.\n"},
  {"SetScalarFunctionNumber", PyvtkMultiBlockPLOT3DReader_SetScalarFunctionNumber, METH_VARARGS,
   "V.SetScalarFunctionNumber(int)\nC++: void SetScalarFunctionNumber(int num)\n\nSpecify the scalar function to extract. If ==(-1), then no scalar\nfunction is extracted.\n"},
  {"GetScalarFunctionNumber", PyvtkMultiBlockPLOT3DReader_GetScalarFunctionNumber, METH_VARARGS,
   "V.GetScalarFunctionNumber() -> int\nC++: virtual int GetScalarFunctionNumber()\n\nSpecify the scalar function to extract. If ==(-1), then no scalar\nfunction is extracted.\n"},
  {"SetVectorFunctionNumber", PyvtkMultiBlockPLOT3DReader_SetVectorFunctionNumber, METH_VARARGS,
   "V.SetVectorFunctionNumber(int)\nC++: void SetVectorFunctionNumber(int num)\n\nSpecify the vector function to extract. If ==(-1), then no vector\nfunction is extracted.\n"},
  {"GetVectorFunctionNumber", PyvtkMultiBlockPLOT3DReader_GetVectorFunctionNumber, METH_VARARGS,
   "V.GetVectorFunctionNumber() -> int\nC++: virtual int GetVectorFunctionNumber()\n\nSpecify the vector function to extract. If ==(-1), then no vector\nfunction is extracted.\n"},
  {"AddFunction", PyvtkMultiBlockPLOT3DReader_AddFunction, METH_VARARGS,
   "V.AddFunction(int)\nC++: void AddFunction(int functionNumber)\n\nSpecify additional functions to read. These are placed into the\npoint data as data arrays. Later on they can be used by labeling\nthem as scalars, etc.\n"},
  {"RemoveFunction", PyvtkMultiBlockPLOT3DReader_RemoveFunction, METH_VARARGS,
   "V.RemoveFunction(int)\nC++: void RemoveFunction(int)\n\nSpecify additional functions to read. These are placed into the\npoint data as data arrays. Later on they can be used by labeling\nthem as scalars, etc.\n"},
  {"RemoveAllFunctions", PyvtkMultiBlockPLOT3DReader_RemoveAllFunctions, METH_VARARGS,
   "V.RemoveAllFunctions()\nC++: void RemoveAllFunctions()\n\nSpecify additional functions to read. These are placed into the\npoint data as data arrays. Later on they can be used by labeling\nthem as scalars, etc.\n"},
  {"CanReadBinaryFile", PyvtkMultiBlockPLOT3DReader_CanReadBinaryFile, METH_VARARGS,
   "V.CanReadBinaryFile(string) -> int\nC++: virtual int CanReadBinaryFile(const char *fname)\n\nReturn 1 if the reader can read the given file name. Only\nmeaningful for binary files.\n"},
  {"SetController", PyvtkMultiBlockPLOT3DReader_SetController, METH_VARARGS,
   "V.SetController(vtkMultiProcessController)\nC++: void SetController(vtkMultiProcessController *c)\n\nSet/Get the communicator object (we'll use global World\ncontroller if you don't set a different one).\n"},
  {"GetController", PyvtkMultiBlockPLOT3DReader_GetController, METH_VARARGS,
   "V.GetController() -> vtkMultiProcessController\nC++: virtual vtkMultiProcessController *GetController()\n\nSet/Get the communicator object (we'll use global World\ncontroller if you don't set a different one).\n"},
  {"AddFunctionName", PyvtkMultiBlockPLOT3DReader_AddFunctionName, METH_VARARGS,
   "V.AddFunctionName(string)\nC++: void AddFunctionName(const std::string &name)\n\n"},
  {"ReadMetaData", PyvtkMultiBlockPLOT3DReader_ReadMetaData, METH_VARARGS,
   "V.ReadMetaData(vtkInformation) -> int\nC++: int ReadMetaData(vtkInformation *metadata) override;\n\nThese methods have to be overwritten from superclass because\nPlot3D actually uses the XYZ file to read these. This is not\nrecognized by the superclass which returns an error when a\nfilename (Q filename) is not set.\n"},
  {"ReadMesh", PyvtkMultiBlockPLOT3DReader_ReadMesh, METH_VARARGS,
   "V.ReadMesh(int, int, int, int, vtkDataObject) -> int\nC++: int ReadMesh(int piece, int npieces, int nghosts,\n    int timestep, vtkDataObject *output) override;\n\nThese methods have to be overwritten from superclass because\nPlot3D actually uses the XYZ file to read these. This is not\nrecognized by the superclass which returns an error when a\nfilename (Q filename) is not set.\n"},
  {"ReadPoints", PyvtkMultiBlockPLOT3DReader_ReadPoints, METH_VARARGS,
   "V.ReadPoints(int, int, int, int, vtkDataObject) -> int\nC++: int ReadPoints(int piece, int npieces, int nghosts,\n    int timestep, vtkDataObject *output) override;\n\nThese methods have to be overwritten from superclass because\nPlot3D actually uses the XYZ file to read these. This is not\nrecognized by the superclass which returns an error when a\nfilename (Q filename) is not set.\n"},
  {"ReadArrays", PyvtkMultiBlockPLOT3DReader_ReadArrays, METH_VARARGS,
   "V.ReadArrays(int, int, int, int, vtkDataObject) -> int\nC++: int ReadArrays(int piece, int npieces, int nghosts,\n    int timestep, vtkDataObject *output) override;\n\nThese methods have to be overwritten from superclass because\nPlot3D actually uses the XYZ file to read these. This is not\nrecognized by the superclass which returns an error when a\nfilename (Q filename) is not set.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkMultiBlockPLOT3DReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOParallelPython.vtkMultiBlockPLOT3DReader", // tp_name
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
  PyvtkMultiBlockPLOT3DReader_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMultiBlockPLOT3DReader_StaticNew()
{
  return vtkMultiBlockPLOT3DReader::New();
}

PyObject *PyvtkMultiBlockPLOT3DReader_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkMultiBlockPLOT3DReader_Type, PyvtkMultiBlockPLOT3DReader_Methods,
    "vtkMultiBlockPLOT3DReader",
 &PyvtkMultiBlockPLOT3DReader_StaticNew);

  PyTypeObject *pytype = &PyvtkMultiBlockPLOT3DReader_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkParallelReader_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 2; c++)
  {
    static const struct { const char *name; int value; }
      constants[2] = {
        { "FILE_BIG_ENDIAN", vtkMultiBlockPLOT3DReader::FILE_BIG_ENDIAN },
        { "FILE_LITTLE_ENDIAN", vtkMultiBlockPLOT3DReader::FILE_LITTLE_ENDIAN },
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

void PyVTKAddFile_vtkMultiBlockPLOT3DReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMultiBlockPLOT3DReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMultiBlockPLOT3DReader", o) != 0)
  {
    Py_DECREF(o);
  }

}

