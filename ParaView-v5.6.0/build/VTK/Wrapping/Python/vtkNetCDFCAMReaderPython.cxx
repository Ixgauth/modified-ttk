// python wrapper for vtkNetCDFCAMReader
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
#include "vtkNetCDFCAMReader.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkNetCDFCAMReader(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkNetCDFCAMReader_ClassNew(); }

#ifndef DECLARED_PyvtkUnstructuredGridAlgorithm_ClassNew
extern "C" { PyObject *PyvtkUnstructuredGridAlgorithm_ClassNew(); }
#define DECLARED_PyvtkUnstructuredGridAlgorithm_ClassNew
#endif

static const char *PyvtkNetCDFCAMReader_Doc =
  "vtkNetCDFCAMReader - Read unstructured NetCDF CAM files.\n\n"
  "Superclass: vtkUnstructuredGridAlgorithm\n\n"
  "Reads in a NetCDF CAM (Community Atmospheric Model) file and produces\n"
  "and unstructured grid.  The grid is actually unstructured in the X\n"
  "and Y directions and rectilinear in the Z direction. If we read one\n"
  "layer we produce quad cells otherwise we produce hex cells.  The\n"
  "reader requires 2 NetCDF files: the main file has all attributes, the\n"
  "connectivity file has point positions and cell connectivity\n"
  "information.\n\n";

static PyTypeObject PyvtkNetCDFCAMReader_VerticalDimension_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIONetCDFPython.vtkNetCDFCAMReader.VerticalDimension", // tp_name
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

PyObject *PyvtkNetCDFCAMReader_VerticalDimension_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkNetCDFCAMReader_VerticalDimension_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkNetCDFCAMReader_VerticalDimension_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkNetCDFCAMReader_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkNetCDFCAMReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNetCDFCAMReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFCAMReader *op = static_cast<vtkNetCDFCAMReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkNetCDFCAMReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNetCDFCAMReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkNetCDFCAMReader *tempr = vtkNetCDFCAMReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNetCDFCAMReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFCAMReader *op = static_cast<vtkNetCDFCAMReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkNetCDFCAMReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkNetCDFCAMReader::NewInstance());

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
PyvtkNetCDFCAMReader_CanReadFile(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "CanReadFile");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkNetCDFCAMReader::CanReadFile(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNetCDFCAMReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFCAMReader *op = static_cast<vtkNetCDFCAMReader *>(vp);

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
      op->vtkNetCDFCAMReader::SetFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkNetCDFCAMReader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFCAMReader *op = static_cast<vtkNetCDFCAMReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkNetCDFCAMReader::GetFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNetCDFCAMReader_SetConnectivityFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConnectivityFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFCAMReader *op = static_cast<vtkNetCDFCAMReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetConnectivityFileName(temp0);
    }
    else
    {
      op->vtkNetCDFCAMReader::SetConnectivityFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkNetCDFCAMReader_GetConnectivityFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConnectivityFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFCAMReader *op = static_cast<vtkNetCDFCAMReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetConnectivityFileName() :
      op->vtkNetCDFCAMReader::GetConnectivityFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNetCDFCAMReader_SetVerticalDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVerticalDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFCAMReader *op = static_cast<vtkNetCDFCAMReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVerticalDimension(temp0);
    }
    else
    {
      op->vtkNetCDFCAMReader::SetVerticalDimension(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkNetCDFCAMReader_GetVerticalDimensionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVerticalDimensionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFCAMReader *op = static_cast<vtkNetCDFCAMReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetVerticalDimensionMinValue() :
      op->vtkNetCDFCAMReader::GetVerticalDimensionMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNetCDFCAMReader_GetVerticalDimensionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVerticalDimensionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFCAMReader *op = static_cast<vtkNetCDFCAMReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetVerticalDimensionMaxValue() :
      op->vtkNetCDFCAMReader::GetVerticalDimensionMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNetCDFCAMReader_GetVerticalDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVerticalDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFCAMReader *op = static_cast<vtkNetCDFCAMReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetVerticalDimension() :
      op->vtkNetCDFCAMReader::GetVerticalDimension());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNetCDFCAMReader_SingleMidpointLayerOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SingleMidpointLayerOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFCAMReader *op = static_cast<vtkNetCDFCAMReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SingleMidpointLayerOn();
    }
    else
    {
      op->vtkNetCDFCAMReader::SingleMidpointLayerOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkNetCDFCAMReader_SingleMidpointLayerOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SingleMidpointLayerOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFCAMReader *op = static_cast<vtkNetCDFCAMReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SingleMidpointLayerOff();
    }
    else
    {
      op->vtkNetCDFCAMReader::SingleMidpointLayerOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkNetCDFCAMReader_SetSingleMidpointLayer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSingleMidpointLayer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFCAMReader *op = static_cast<vtkNetCDFCAMReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSingleMidpointLayer(temp0);
    }
    else
    {
      op->vtkNetCDFCAMReader::SetSingleMidpointLayer(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkNetCDFCAMReader_GetSingleMidpointLayer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSingleMidpointLayer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFCAMReader *op = static_cast<vtkNetCDFCAMReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSingleMidpointLayer() :
      op->vtkNetCDFCAMReader::GetSingleMidpointLayer());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNetCDFCAMReader_SetMidpointLayerIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMidpointLayerIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFCAMReader *op = static_cast<vtkNetCDFCAMReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMidpointLayerIndex(temp0);
    }
    else
    {
      op->vtkNetCDFCAMReader::SetMidpointLayerIndex(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkNetCDFCAMReader_GetMidpointLayerIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMidpointLayerIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFCAMReader *op = static_cast<vtkNetCDFCAMReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMidpointLayerIndex() :
      op->vtkNetCDFCAMReader::GetMidpointLayerIndex());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNetCDFCAMReader_GetMidpointLayersRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMidpointLayersRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFCAMReader *op = static_cast<vtkNetCDFCAMReader *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetMidpointLayersRange() :
      op->vtkNetCDFCAMReader::GetMidpointLayersRange());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkNetCDFCAMReader_SingleInterfaceLayerOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SingleInterfaceLayerOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFCAMReader *op = static_cast<vtkNetCDFCAMReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SingleInterfaceLayerOn();
    }
    else
    {
      op->vtkNetCDFCAMReader::SingleInterfaceLayerOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkNetCDFCAMReader_SingleInterfaceLayerOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SingleInterfaceLayerOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFCAMReader *op = static_cast<vtkNetCDFCAMReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SingleInterfaceLayerOff();
    }
    else
    {
      op->vtkNetCDFCAMReader::SingleInterfaceLayerOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkNetCDFCAMReader_SetSingleInterfaceLayer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSingleInterfaceLayer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFCAMReader *op = static_cast<vtkNetCDFCAMReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSingleInterfaceLayer(temp0);
    }
    else
    {
      op->vtkNetCDFCAMReader::SetSingleInterfaceLayer(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkNetCDFCAMReader_GetSingleInterfaceLayer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSingleInterfaceLayer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFCAMReader *op = static_cast<vtkNetCDFCAMReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSingleInterfaceLayer() :
      op->vtkNetCDFCAMReader::GetSingleInterfaceLayer());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNetCDFCAMReader_SetInterfaceLayerIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterfaceLayerIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFCAMReader *op = static_cast<vtkNetCDFCAMReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInterfaceLayerIndex(temp0);
    }
    else
    {
      op->vtkNetCDFCAMReader::SetInterfaceLayerIndex(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkNetCDFCAMReader_GetInterfaceLayerIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterfaceLayerIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFCAMReader *op = static_cast<vtkNetCDFCAMReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInterfaceLayerIndex() :
      op->vtkNetCDFCAMReader::GetInterfaceLayerIndex());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNetCDFCAMReader_GetInterfaceLayersRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterfaceLayersRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFCAMReader *op = static_cast<vtkNetCDFCAMReader *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetInterfaceLayersRange() :
      op->vtkNetCDFCAMReader::GetInterfaceLayersRange());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkNetCDFCAMReader_GetNumberOfPointArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPointArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFCAMReader *op = static_cast<vtkNetCDFCAMReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPointArrays() :
      op->vtkNetCDFCAMReader::GetNumberOfPointArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNetCDFCAMReader_GetPointArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFCAMReader *op = static_cast<vtkNetCDFCAMReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetPointArrayName(temp0) :
      op->vtkNetCDFCAMReader::GetPointArrayName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNetCDFCAMReader_GetPointArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFCAMReader *op = static_cast<vtkNetCDFCAMReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPointArrayStatus(temp0) :
      op->vtkNetCDFCAMReader::GetPointArrayStatus(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNetCDFCAMReader_SetPointArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFCAMReader *op = static_cast<vtkNetCDFCAMReader *>(vp);

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
      op->vtkNetCDFCAMReader::SetPointArrayStatus(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkNetCDFCAMReader_DisableAllPointArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisableAllPointArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFCAMReader *op = static_cast<vtkNetCDFCAMReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DisableAllPointArrays();
    }
    else
    {
      op->vtkNetCDFCAMReader::DisableAllPointArrays();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkNetCDFCAMReader_EnableAllPointArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableAllPointArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFCAMReader *op = static_cast<vtkNetCDFCAMReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnableAllPointArrays();
    }
    else
    {
      op->vtkNetCDFCAMReader::EnableAllPointArrays();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkNetCDFCAMReader_Methods[] = {
  {"IsTypeOf", PyvtkNetCDFCAMReader_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkNetCDFCAMReader_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkNetCDFCAMReader_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkNetCDFCAMReader\nC++: static vtkNetCDFCAMReader *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkNetCDFCAMReader_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkNetCDFCAMReader\nC++: vtkNetCDFCAMReader *NewInstance()\n\n"},
  {"CanReadFile", PyvtkNetCDFCAMReader_CanReadFile, METH_VARARGS,
   "V.CanReadFile(string) -> int\nC++: static int CanReadFile(const char *fileName)\n\nReturns 1 if this file can be read and 0 if the file cannot be\nread. Because NetCDF CAM files come in pairs and we only check\none of the files, the result is not definitive.  Invalid files\nmay still return 1 although a valid file will never return 0.\n"},
  {"SetFileName", PyvtkNetCDFCAMReader_SetFileName, METH_VARARGS,
   "V.SetFileName(string)\nC++: void SetFileName(const char *fileName)\n\n"},
  {"GetFileName", PyvtkNetCDFCAMReader_GetFileName, METH_VARARGS,
   "V.GetFileName() -> string\nC++: virtual char *GetFileName()\n\n"},
  {"SetConnectivityFileName", PyvtkNetCDFCAMReader_SetConnectivityFileName, METH_VARARGS,
   "V.SetConnectivityFileName(string)\nC++: void SetConnectivityFileName(const char *fileName)\n\n"},
  {"GetConnectivityFileName", PyvtkNetCDFCAMReader_GetConnectivityFileName, METH_VARARGS,
   "V.GetConnectivityFileName() -> string\nC++: virtual char *GetConnectivityFileName()\n\n"},
  {"SetVerticalDimension", PyvtkNetCDFCAMReader_SetVerticalDimension, METH_VARARGS,
   "V.SetVerticalDimension(int)\nC++: virtual void SetVerticalDimension(int _arg)\n\nSet whether to read a single layer, midpoint layers or interface\nlayers. VERTICAL_DIMENSION_SINGLE_LAYER (0) indicates that only a\nsingle layer will be read in. The NetCDF variables loaded will be\nthe ones with dimensions (time, ncol).\nVERTICAL_DIMENSION_MIDPOINT_LAYERS (1) indicates that variables\ndefined on midpoint layers will be read in. These are variables\nwith dimensions (time, lev, ncol).\nVERTICAL_DIMENSION_INTERFACE_LAYERS (2) indicates that variables\ndefined on interface layers will be read in. These are variables\nwith dimensions (time, ilev, ncol).\n"},
  {"GetVerticalDimensionMinValue", PyvtkNetCDFCAMReader_GetVerticalDimensionMinValue, METH_VARARGS,
   "V.GetVerticalDimensionMinValue() -> int\nC++: virtual int GetVerticalDimensionMinValue()\n\nSet whether to read a single layer, midpoint layers or interface\nlayers. VERTICAL_DIMENSION_SINGLE_LAYER (0) indicates that only a\nsingle layer will be read in. The NetCDF variables loaded will be\nthe ones with dimensions (time, ncol).\nVERTICAL_DIMENSION_MIDPOINT_LAYERS (1) indicates that variables\ndefined on midpoint layers will be read in. These are variables\nwith dimensions (time, lev, ncol).\nVERTICAL_DIMENSION_INTERFACE_LAYERS (2) indicates that variables\ndefined on interface layers will be read in. These are variables\nwith dimensions (time, ilev, ncol).\n"},
  {"GetVerticalDimensionMaxValue", PyvtkNetCDFCAMReader_GetVerticalDimensionMaxValue, METH_VARARGS,
   "V.GetVerticalDimensionMaxValue() -> int\nC++: virtual int GetVerticalDimensionMaxValue()\n\nSet whether to read a single layer, midpoint layers or interface\nlayers. VERTICAL_DIMENSION_SINGLE_LAYER (0) indicates that only a\nsingle layer will be read in. The NetCDF variables loaded will be\nthe ones with dimensions (time, ncol).\nVERTICAL_DIMENSION_MIDPOINT_LAYERS (1) indicates that variables\ndefined on midpoint layers will be read in. These are variables\nwith dimensions (time, lev, ncol).\nVERTICAL_DIMENSION_INTERFACE_LAYERS (2) indicates that variables\ndefined on interface layers will be read in. These are variables\nwith dimensions (time, ilev, ncol).\n"},
  {"GetVerticalDimension", PyvtkNetCDFCAMReader_GetVerticalDimension, METH_VARARGS,
   "V.GetVerticalDimension() -> int\nC++: virtual int GetVerticalDimension()\n\nSet whether to read a single layer, midpoint layers or interface\nlayers. VERTICAL_DIMENSION_SINGLE_LAYER (0) indicates that only a\nsingle layer will be read in. The NetCDF variables loaded will be\nthe ones with dimensions (time, ncol).\nVERTICAL_DIMENSION_MIDPOINT_LAYERS (1) indicates that variables\ndefined on midpoint layers will be read in. These are variables\nwith dimensions (time, lev, ncol).\nVERTICAL_DIMENSION_INTERFACE_LAYERS (2) indicates that variables\ndefined on interface layers will be read in. These are variables\nwith dimensions (time, ilev, ncol).\n"},
  {"SingleMidpointLayerOn", PyvtkNetCDFCAMReader_SingleMidpointLayerOn, METH_VARARGS,
   "V.SingleMidpointLayerOn()\nC++: virtual void SingleMidpointLayerOn()\n\nIf SingleXXXLayer is 1, we'll load only the layer specified by\nXXXLayerIndex.  Otherwise, we load all layers. We do that for\nmidpoint layer variables ( which have dimension 'lev') or for\ninterface layer variables (which have dimension 'ilev').\n"},
  {"SingleMidpointLayerOff", PyvtkNetCDFCAMReader_SingleMidpointLayerOff, METH_VARARGS,
   "V.SingleMidpointLayerOff()\nC++: virtual void SingleMidpointLayerOff()\n\nIf SingleXXXLayer is 1, we'll load only the layer specified by\nXXXLayerIndex.  Otherwise, we load all layers. We do that for\nmidpoint layer variables ( which have dimension 'lev') or for\ninterface layer variables (which have dimension 'ilev').\n"},
  {"SetSingleMidpointLayer", PyvtkNetCDFCAMReader_SetSingleMidpointLayer, METH_VARARGS,
   "V.SetSingleMidpointLayer(int)\nC++: virtual void SetSingleMidpointLayer(vtkTypeBool _arg)\n\nIf SingleXXXLayer is 1, we'll load only the layer specified by\nXXXLayerIndex.  Otherwise, we load all layers. We do that for\nmidpoint layer variables ( which have dimension 'lev') or for\ninterface layer variables (which have dimension 'ilev').\n"},
  {"GetSingleMidpointLayer", PyvtkNetCDFCAMReader_GetSingleMidpointLayer, METH_VARARGS,
   "V.GetSingleMidpointLayer() -> int\nC++: virtual vtkTypeBool GetSingleMidpointLayer()\n\nIf SingleXXXLayer is 1, we'll load only the layer specified by\nXXXLayerIndex.  Otherwise, we load all layers. We do that for\nmidpoint layer variables ( which have dimension 'lev') or for\ninterface layer variables (which have dimension 'ilev').\n"},
  {"SetMidpointLayerIndex", PyvtkNetCDFCAMReader_SetMidpointLayerIndex, METH_VARARGS,
   "V.SetMidpointLayerIndex(int)\nC++: virtual void SetMidpointLayerIndex(int _arg)\n\nIf SingleXXXLayer is 1, we'll load only the layer specified by\nXXXLayerIndex.  Otherwise, we load all layers. We do that for\nmidpoint layer variables ( which have dimension 'lev') or for\ninterface layer variables (which have dimension 'ilev').\n"},
  {"GetMidpointLayerIndex", PyvtkNetCDFCAMReader_GetMidpointLayerIndex, METH_VARARGS,
   "V.GetMidpointLayerIndex() -> int\nC++: virtual int GetMidpointLayerIndex()\n\nIf SingleXXXLayer is 1, we'll load only the layer specified by\nXXXLayerIndex.  Otherwise, we load all layers. We do that for\nmidpoint layer variables ( which have dimension 'lev') or for\ninterface layer variables (which have dimension 'ilev').\n"},
  {"GetMidpointLayersRange", PyvtkNetCDFCAMReader_GetMidpointLayersRange, METH_VARARGS,
   "V.GetMidpointLayersRange() -> (int, int)\nC++: int *GetMidpointLayersRange()\n\n"},
  {"SingleInterfaceLayerOn", PyvtkNetCDFCAMReader_SingleInterfaceLayerOn, METH_VARARGS,
   "V.SingleInterfaceLayerOn()\nC++: virtual void SingleInterfaceLayerOn()\n\nIf SingleXXXLayer is 1, we'll load only the layer specified by\nXXXLayerIndex.  Otherwise, we load all layers. We do that for\nmidpoint layer variables ( which have dimension 'lev') or for\ninterface layer variables (which have dimension 'ilev').\n"},
  {"SingleInterfaceLayerOff", PyvtkNetCDFCAMReader_SingleInterfaceLayerOff, METH_VARARGS,
   "V.SingleInterfaceLayerOff()\nC++: virtual void SingleInterfaceLayerOff()\n\nIf SingleXXXLayer is 1, we'll load only the layer specified by\nXXXLayerIndex.  Otherwise, we load all layers. We do that for\nmidpoint layer variables ( which have dimension 'lev') or for\ninterface layer variables (which have dimension 'ilev').\n"},
  {"SetSingleInterfaceLayer", PyvtkNetCDFCAMReader_SetSingleInterfaceLayer, METH_VARARGS,
   "V.SetSingleInterfaceLayer(int)\nC++: virtual void SetSingleInterfaceLayer(vtkTypeBool _arg)\n\nIf SingleXXXLayer is 1, we'll load only the layer specified by\nXXXLayerIndex.  Otherwise, we load all layers. We do that for\nmidpoint layer variables ( which have dimension 'lev') or for\ninterface layer variables (which have dimension 'ilev').\n"},
  {"GetSingleInterfaceLayer", PyvtkNetCDFCAMReader_GetSingleInterfaceLayer, METH_VARARGS,
   "V.GetSingleInterfaceLayer() -> int\nC++: virtual vtkTypeBool GetSingleInterfaceLayer()\n\nIf SingleXXXLayer is 1, we'll load only the layer specified by\nXXXLayerIndex.  Otherwise, we load all layers. We do that for\nmidpoint layer variables ( which have dimension 'lev') or for\ninterface layer variables (which have dimension 'ilev').\n"},
  {"SetInterfaceLayerIndex", PyvtkNetCDFCAMReader_SetInterfaceLayerIndex, METH_VARARGS,
   "V.SetInterfaceLayerIndex(int)\nC++: virtual void SetInterfaceLayerIndex(int _arg)\n\nIf SingleXXXLayer is 1, we'll load only the layer specified by\nXXXLayerIndex.  Otherwise, we load all layers. We do that for\nmidpoint layer variables ( which have dimension 'lev') or for\ninterface layer variables (which have dimension 'ilev').\n"},
  {"GetInterfaceLayerIndex", PyvtkNetCDFCAMReader_GetInterfaceLayerIndex, METH_VARARGS,
   "V.GetInterfaceLayerIndex() -> int\nC++: virtual int GetInterfaceLayerIndex()\n\nIf SingleXXXLayer is 1, we'll load only the layer specified by\nXXXLayerIndex.  Otherwise, we load all layers. We do that for\nmidpoint layer variables ( which have dimension 'lev') or for\ninterface layer variables (which have dimension 'ilev').\n"},
  {"GetInterfaceLayersRange", PyvtkNetCDFCAMReader_GetInterfaceLayersRange, METH_VARARGS,
   "V.GetInterfaceLayersRange() -> (int, int)\nC++: int *GetInterfaceLayersRange()\n\n"},
  {"GetNumberOfPointArrays", PyvtkNetCDFCAMReader_GetNumberOfPointArrays, METH_VARARGS,
   "V.GetNumberOfPointArrays() -> int\nC++: int GetNumberOfPointArrays()\n\nThe following methods allow selective reading of variables. By\ndefault, ALL data variables on the nodes are read.\n"},
  {"GetPointArrayName", PyvtkNetCDFCAMReader_GetPointArrayName, METH_VARARGS,
   "V.GetPointArrayName(int) -> string\nC++: const char *GetPointArrayName(int index)\n\nThe following methods allow selective reading of variables. By\ndefault, ALL data variables on the nodes are read.\n"},
  {"GetPointArrayStatus", PyvtkNetCDFCAMReader_GetPointArrayStatus, METH_VARARGS,
   "V.GetPointArrayStatus(string) -> int\nC++: int GetPointArrayStatus(const char *name)\n\nThe following methods allow selective reading of variables. By\ndefault, ALL data variables on the nodes are read.\n"},
  {"SetPointArrayStatus", PyvtkNetCDFCAMReader_SetPointArrayStatus, METH_VARARGS,
   "V.SetPointArrayStatus(string, int)\nC++: void SetPointArrayStatus(const char *name, int status)\n\nThe following methods allow selective reading of variables. By\ndefault, ALL data variables on the nodes are read.\n"},
  {"DisableAllPointArrays", PyvtkNetCDFCAMReader_DisableAllPointArrays, METH_VARARGS,
   "V.DisableAllPointArrays()\nC++: void DisableAllPointArrays()\n\nThe following methods allow selective reading of variables. By\ndefault, ALL data variables on the nodes are read.\n"},
  {"EnableAllPointArrays", PyvtkNetCDFCAMReader_EnableAllPointArrays, METH_VARARGS,
   "V.EnableAllPointArrays()\nC++: void EnableAllPointArrays()\n\nThe following methods allow selective reading of variables. By\ndefault, ALL data variables on the nodes are read.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkNetCDFCAMReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIONetCDFPython.vtkNetCDFCAMReader", // tp_name
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
  PyvtkNetCDFCAMReader_Doc, // tp_doc
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

static vtkObjectBase *PyvtkNetCDFCAMReader_StaticNew()
{
  return vtkNetCDFCAMReader::New();
}

PyObject *PyvtkNetCDFCAMReader_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkNetCDFCAMReader_Type, PyvtkNetCDFCAMReader_Methods,
    "vtkNetCDFCAMReader",
 &PyvtkNetCDFCAMReader_StaticNew);

  PyTypeObject *pytype = &PyvtkNetCDFCAMReader_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkUnstructuredGridAlgorithm_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkNetCDFCAMReader_VerticalDimension_Type);
  PyvtkNetCDFCAMReader_VerticalDimension_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkNetCDFCAMReader_VerticalDimension_Type);

  o = (PyObject *)&PyvtkNetCDFCAMReader_VerticalDimension_Type;
  if (PyDict_SetItemString(d, "VerticalDimension", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 4; c++)
  {
    static const struct { const char *name; int value; }
      constants[4] = {
        { "VERTICAL_DIMENSION_SINGLE_LAYER", vtkNetCDFCAMReader::VERTICAL_DIMENSION_SINGLE_LAYER },
        { "VERTICAL_DIMENSION_MIDPOINT_LAYERS", vtkNetCDFCAMReader::VERTICAL_DIMENSION_MIDPOINT_LAYERS },
        { "VERTICAL_DIMENSION_INTERFACE_LAYERS", vtkNetCDFCAMReader::VERTICAL_DIMENSION_INTERFACE_LAYERS },
        { "VERTICAL_DIMENSION_COUNT", vtkNetCDFCAMReader::VERTICAL_DIMENSION_COUNT },
      };

    o = PyvtkNetCDFCAMReader_VerticalDimension_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkNetCDFCAMReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkNetCDFCAMReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkNetCDFCAMReader", o) != 0)
  {
    Py_DECREF(o);
  }

}

