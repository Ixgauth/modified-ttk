// python wrapper for vtkGeometryRepresentation
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
#include "vtkGeometryRepresentation.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkGeometryRepresentation(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkGeometryRepresentation_ClassNew(); }

#ifndef DECLARED_PyvtkPVDataRepresentation_ClassNew
extern "C" { PyObject *PyvtkPVDataRepresentation_ClassNew(); }
#define DECLARED_PyvtkPVDataRepresentation_ClassNew
#endif

static const char *PyvtkGeometryRepresentation_Doc =
  "vtkGeometryRepresentation - representation for showing any datasets\nas external shell of polygons.\n\n"
  "Superclass: vtkPVDataRepresentation\n\n"
  "vtkGeometryRepresentation is a representation for showing polygon\n"
  "geometry. It handles non-polygonal datasets by extracting external\n"
  "surfaces. One can use this representation to show\n"
  "surface/wireframe/points/surface-with-edges.@par Thanks: The addition\n"
  "of a transformation matrix was supported by CEA/DIF Commissariat a\n"
  "l'Energie Atomique, Centre DAM Ile-De-France, Arpajon, France.\n\n";

static PyTypeObject PyvtkGeometryRepresentation_RepresentationTypes_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVClientServerCoreRenderingPython.vtkGeometryRepresentation.RepresentationTypes", // tp_name
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

PyObject *PyvtkGeometryRepresentation_RepresentationTypes_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkGeometryRepresentation_RepresentationTypes_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkGeometryRepresentation_RepresentationTypes_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkGeometryRepresentation_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkGeometryRepresentation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentation *op = static_cast<vtkGeometryRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGeometryRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkGeometryRepresentation *tempr = vtkGeometryRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentation *op = static_cast<vtkGeometryRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkGeometryRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGeometryRepresentation::NewInstance());

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
PyvtkGeometryRepresentation_ProcessViewRequest(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessViewRequest");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentation *op = static_cast<vtkGeometryRepresentation *>(vp);

  vtkInformationRequestKey *temp0 = nullptr;
  vtkInformation *temp1 = nullptr;
  vtkInformation *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkInformationRequestKey") &&
      ap.GetVTKObject(temp1, "vtkInformation") &&
      ap.GetVTKObject(temp2, "vtkInformation"))
  {
    int tempr = (ap.IsBound() ?
      op->ProcessViewRequest(temp0, temp1, temp2) :
      op->vtkGeometryRepresentation::ProcessViewRequest(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryRepresentation_MarkModified(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MarkModified");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentation *op = static_cast<vtkGeometryRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MarkModified();
    }
    else
    {
      op->vtkGeometryRepresentation::MarkModified();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryRepresentation_SetVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentation *op = static_cast<vtkGeometryRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVisibility(temp0);
    }
    else
    {
      op->vtkGeometryRepresentation::SetVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryRepresentation_SetBlockColorsDistinctValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlockColorsDistinctValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentation *op = static_cast<vtkGeometryRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBlockColorsDistinctValues(temp0);
    }
    else
    {
      op->vtkGeometryRepresentation::SetBlockColorsDistinctValues(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryRepresentation_GetBlockColorsDistinctValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlockColorsDistinctValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentation *op = static_cast<vtkGeometryRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBlockColorsDistinctValues() :
      op->vtkGeometryRepresentation::GetBlockColorsDistinctValues());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryRepresentation_SetSuppressLOD(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSuppressLOD");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentation *op = static_cast<vtkGeometryRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSuppressLOD(temp0);
    }
    else
    {
      op->vtkGeometryRepresentation::SetSuppressLOD(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryRepresentation_SetAmbient(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAmbient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentation *op = static_cast<vtkGeometryRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAmbient(temp0);
    }
    else
    {
      op->vtkGeometryRepresentation::SetAmbient(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryRepresentation_SetDiffuse(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDiffuse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentation *op = static_cast<vtkGeometryRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDiffuse(temp0);
    }
    else
    {
      op->vtkGeometryRepresentation::SetDiffuse(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryRepresentation_SetSpecular(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSpecular");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentation *op = static_cast<vtkGeometryRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSpecular(temp0);
    }
    else
    {
      op->vtkGeometryRepresentation::SetSpecular(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryRepresentation_GetAmbient(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAmbient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentation *op = static_cast<vtkGeometryRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetAmbient() :
      op->vtkGeometryRepresentation::GetAmbient());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryRepresentation_GetDiffuse(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDiffuse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentation *op = static_cast<vtkGeometryRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetDiffuse() :
      op->vtkGeometryRepresentation::GetDiffuse());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryRepresentation_GetSpecular(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSpecular");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentation *op = static_cast<vtkGeometryRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetSpecular() :
      op->vtkGeometryRepresentation::GetSpecular());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryRepresentation_SetRepresentation_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentation *op = static_cast<vtkGeometryRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRepresentation(temp0);
    }
    else
    {
      op->vtkGeometryRepresentation::SetRepresentation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkGeometryRepresentation_SetRepresentation_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentation *op = static_cast<vtkGeometryRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRepresentation(temp0);
    }
    else
    {
      op->vtkGeometryRepresentation::SetRepresentation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkGeometryRepresentation_SetRepresentation_Methods[] = {
  {nullptr, PyvtkGeometryRepresentation_SetRepresentation_s1, METH_VARARGS,
   "@i"},
  {nullptr, PyvtkGeometryRepresentation_SetRepresentation_s2, METH_VARARGS,
   "@z"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkGeometryRepresentation_SetRepresentation(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkGeometryRepresentation_SetRepresentation_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetRepresentation");
  return nullptr;
}



static PyObject *
PyvtkGeometryRepresentation_GetRepresentationMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRepresentationMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentation *op = static_cast<vtkGeometryRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRepresentationMinValue() :
      op->vtkGeometryRepresentation::GetRepresentationMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryRepresentation_GetRepresentationMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRepresentationMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentation *op = static_cast<vtkGeometryRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRepresentationMaxValue() :
      op->vtkGeometryRepresentation::GetRepresentationMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryRepresentation_GetRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentation *op = static_cast<vtkGeometryRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRepresentation() :
      op->vtkGeometryRepresentation::GetRepresentation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryRepresentation_GetRenderedDataObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderedDataObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentation *op = static_cast<vtkGeometryRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkDataObject *tempr = (ap.IsBound() ?
      op->GetRenderedDataObject(temp0) :
      op->vtkGeometryRepresentation::GetRenderedDataObject(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


#if !defined(VTK_LEGACY_REMOVE)
static PyObject *
PyvtkGeometryRepresentation_DoRequestGhostCells(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "DoRequestGhostCells");

  vtkInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
  {
    bool tempr = vtkGeometryRepresentation::DoRequestGhostCells(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}
#endif


static PyObject *
PyvtkGeometryRepresentation_SetRequestGhostCellsIfNeeded(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRequestGhostCellsIfNeeded");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentation *op = static_cast<vtkGeometryRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRequestGhostCellsIfNeeded(temp0);
    }
    else
    {
      op->vtkGeometryRepresentation::SetRequestGhostCellsIfNeeded(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryRepresentation_GetRequestGhostCellsIfNeeded(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRequestGhostCellsIfNeeded");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentation *op = static_cast<vtkGeometryRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetRequestGhostCellsIfNeeded() :
      op->vtkGeometryRepresentation::GetRequestGhostCellsIfNeeded());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryRepresentation_RequestGhostCellsIfNeededOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RequestGhostCellsIfNeededOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentation *op = static_cast<vtkGeometryRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RequestGhostCellsIfNeededOn();
    }
    else
    {
      op->vtkGeometryRepresentation::RequestGhostCellsIfNeededOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryRepresentation_RequestGhostCellsIfNeededOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RequestGhostCellsIfNeededOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentation *op = static_cast<vtkGeometryRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RequestGhostCellsIfNeededOff();
    }
    else
    {
      op->vtkGeometryRepresentation::RequestGhostCellsIfNeededOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryRepresentation_SetUseOutline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseOutline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentation *op = static_cast<vtkGeometryRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseOutline(temp0);
    }
    else
    {
      op->vtkGeometryRepresentation::SetUseOutline(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryRepresentation_SetTriangulate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTriangulate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentation *op = static_cast<vtkGeometryRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTriangulate(temp0);
    }
    else
    {
      op->vtkGeometryRepresentation::SetTriangulate(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryRepresentation_SetNonlinearSubdivisionLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNonlinearSubdivisionLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentation *op = static_cast<vtkGeometryRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNonlinearSubdivisionLevel(temp0);
    }
    else
    {
      op->vtkGeometryRepresentation::SetNonlinearSubdivisionLevel(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryRepresentation_SetGenerateFeatureEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateFeatureEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentation *op = static_cast<vtkGeometryRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateFeatureEdges(temp0);
    }
    else
    {
      op->vtkGeometryRepresentation::SetGenerateFeatureEdges(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryRepresentation_SetAmbientColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAmbientColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentation *op = static_cast<vtkGeometryRepresentation *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetAmbientColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkGeometryRepresentation::SetAmbientColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryRepresentation_SetColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentation *op = static_cast<vtkGeometryRepresentation *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkGeometryRepresentation::SetColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryRepresentation_SetDiffuseColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDiffuseColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentation *op = static_cast<vtkGeometryRepresentation *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetDiffuseColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkGeometryRepresentation::SetDiffuseColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryRepresentation_SetEdgeColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentation *op = static_cast<vtkGeometryRepresentation *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetEdgeColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkGeometryRepresentation::SetEdgeColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryRepresentation_SetInterpolation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentation *op = static_cast<vtkGeometryRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInterpolation(temp0);
    }
    else
    {
      op->vtkGeometryRepresentation::SetInterpolation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryRepresentation_SetLineWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLineWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentation *op = static_cast<vtkGeometryRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLineWidth(temp0);
    }
    else
    {
      op->vtkGeometryRepresentation::SetLineWidth(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryRepresentation_SetOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentation *op = static_cast<vtkGeometryRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOpacity(temp0);
    }
    else
    {
      op->vtkGeometryRepresentation::SetOpacity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryRepresentation_SetPointSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentation *op = static_cast<vtkGeometryRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPointSize(temp0);
    }
    else
    {
      op->vtkGeometryRepresentation::SetPointSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryRepresentation_SetSpecularColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSpecularColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentation *op = static_cast<vtkGeometryRepresentation *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetSpecularColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkGeometryRepresentation::SetSpecularColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryRepresentation_SetSpecularPower(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSpecularPower");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentation *op = static_cast<vtkGeometryRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSpecularPower(temp0);
    }
    else
    {
      op->vtkGeometryRepresentation::SetSpecularPower(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryRepresentation_SetLuminosity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLuminosity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentation *op = static_cast<vtkGeometryRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLuminosity(temp0);
    }
    else
    {
      op->vtkGeometryRepresentation::SetLuminosity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryRepresentation_SetRenderPointsAsSpheres(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderPointsAsSpheres");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentation *op = static_cast<vtkGeometryRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRenderPointsAsSpheres(temp0);
    }
    else
    {
      op->vtkGeometryRepresentation::SetRenderPointsAsSpheres(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryRepresentation_SetRenderLinesAsTubes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderLinesAsTubes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentation *op = static_cast<vtkGeometryRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRenderLinesAsTubes(temp0);
    }
    else
    {
      op->vtkGeometryRepresentation::SetRenderLinesAsTubes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryRepresentation_SetOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentation *op = static_cast<vtkGeometryRepresentation *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetOrientation(temp0, temp1, temp2);
    }
    else
    {
      op->vtkGeometryRepresentation::SetOrientation(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryRepresentation_SetOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentation *op = static_cast<vtkGeometryRepresentation *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetOrigin(temp0, temp1, temp2);
    }
    else
    {
      op->vtkGeometryRepresentation::SetOrigin(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryRepresentation_SetPickable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPickable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentation *op = static_cast<vtkGeometryRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPickable(temp0);
    }
    else
    {
      op->vtkGeometryRepresentation::SetPickable(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryRepresentation_SetPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentation *op = static_cast<vtkGeometryRepresentation *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetPosition(temp0, temp1, temp2);
    }
    else
    {
      op->vtkGeometryRepresentation::SetPosition(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryRepresentation_SetScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentation *op = static_cast<vtkGeometryRepresentation *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetScale(temp0, temp1, temp2);
    }
    else
    {
      op->vtkGeometryRepresentation::SetScale(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryRepresentation_SetTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentation *op = static_cast<vtkGeometryRepresentation *>(vp);

  vtkTexture *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTexture"))
  {
    if (ap.IsBound())
    {
      op->SetTexture(temp0);
    }
    else
    {
      op->vtkGeometryRepresentation::SetTexture(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryRepresentation_SetUserTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUserTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentation *op = static_cast<vtkGeometryRepresentation *>(vp);

  const size_t size0 = 16;
  double temp0[16];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetUserTransform(temp0);
    }
    else
    {
      op->vtkGeometryRepresentation::SetUserTransform(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryRepresentation_SetInterpolateScalarsBeforeMapping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolateScalarsBeforeMapping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentation *op = static_cast<vtkGeometryRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInterpolateScalarsBeforeMapping(temp0);
    }
    else
    {
      op->vtkGeometryRepresentation::SetInterpolateScalarsBeforeMapping(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryRepresentation_SetLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentation *op = static_cast<vtkGeometryRepresentation *>(vp);

  vtkScalarsToColors *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkScalarsToColors"))
  {
    if (ap.IsBound())
    {
      op->SetLookupTable(temp0);
    }
    else
    {
      op->vtkGeometryRepresentation::SetLookupTable(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryRepresentation_SetMapScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMapScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentation *op = static_cast<vtkGeometryRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMapScalars(temp0);
    }
    else
    {
      op->vtkGeometryRepresentation::SetMapScalars(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryRepresentation_SetStatic(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStatic");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentation *op = static_cast<vtkGeometryRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetStatic(temp0);
    }
    else
    {
      op->vtkGeometryRepresentation::SetStatic(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryRepresentation_GetActor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentation *op = static_cast<vtkGeometryRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVLODActor *tempr = (ap.IsBound() ?
      op->GetActor() :
      op->vtkGeometryRepresentation::GetActor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryRepresentation_SetBlockVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlockVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentation *op = static_cast<vtkGeometryRepresentation *>(vp);

  unsigned int temp0;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetBlockVisibility(temp0, temp1);
    }
    else
    {
      op->vtkGeometryRepresentation::SetBlockVisibility(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryRepresentation_GetBlockVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlockVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentation *op = static_cast<vtkGeometryRepresentation *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetBlockVisibility(temp0) :
      op->vtkGeometryRepresentation::GetBlockVisibility(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryRepresentation_RemoveBlockVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveBlockVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentation *op = static_cast<vtkGeometryRepresentation *>(vp);

  unsigned int temp0;
  bool temp1 = true;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    if (ap.IsBound())
    {
      op->RemoveBlockVisibility(temp0, temp1);
    }
    else
    {
      op->vtkGeometryRepresentation::RemoveBlockVisibility(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryRepresentation_RemoveBlockVisibilities(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveBlockVisibilities");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentation *op = static_cast<vtkGeometryRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveBlockVisibilities();
    }
    else
    {
      op->vtkGeometryRepresentation::RemoveBlockVisibilities();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryRepresentation_SetBlockColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlockColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentation *op = static_cast<vtkGeometryRepresentation *>(vp);

  unsigned int temp0;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->SetBlockColor(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkGeometryRepresentation::SetBlockColor(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkGeometryRepresentation_SetBlockColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlockColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentation *op = static_cast<vtkGeometryRepresentation *>(vp);

  unsigned int temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->SetBlockColor(temp0, temp1);
    }
    else
    {
      op->vtkGeometryRepresentation::SetBlockColor(temp0, temp1);
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
PyvtkGeometryRepresentation_SetBlockColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkGeometryRepresentation_SetBlockColor_s1(self, args);
    case 2:
      return PyvtkGeometryRepresentation_SetBlockColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetBlockColor");
  return nullptr;
}



static PyObject *
PyvtkGeometryRepresentation_GetBlockColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlockColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentation *op = static_cast<vtkGeometryRepresentation *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBlockColor(temp0) :
      op->vtkGeometryRepresentation::GetBlockColor(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryRepresentation_RemoveBlockColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveBlockColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentation *op = static_cast<vtkGeometryRepresentation *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RemoveBlockColor(temp0);
    }
    else
    {
      op->vtkGeometryRepresentation::RemoveBlockColor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryRepresentation_RemoveBlockColors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveBlockColors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentation *op = static_cast<vtkGeometryRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveBlockColors();
    }
    else
    {
      op->vtkGeometryRepresentation::RemoveBlockColors();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryRepresentation_SetBlockOpacity_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlockOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentation *op = static_cast<vtkGeometryRepresentation *>(vp);

  unsigned int temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetBlockOpacity(temp0, temp1);
    }
    else
    {
      op->vtkGeometryRepresentation::SetBlockOpacity(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkGeometryRepresentation_SetBlockOpacity_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlockOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentation *op = static_cast<vtkGeometryRepresentation *>(vp);

  unsigned int temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->SetBlockOpacity(temp0, temp1);
    }
    else
    {
      op->vtkGeometryRepresentation::SetBlockOpacity(temp0, temp1);
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

static PyMethodDef PyvtkGeometryRepresentation_SetBlockOpacity_Methods[] = {
  {nullptr, PyvtkGeometryRepresentation_SetBlockOpacity_s1, METH_VARARGS,
   "@Id"},
  {nullptr, PyvtkGeometryRepresentation_SetBlockOpacity_s2, METH_VARARGS,
   "@IP *d"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkGeometryRepresentation_SetBlockOpacity(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkGeometryRepresentation_SetBlockOpacity_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetBlockOpacity");
  return nullptr;
}



static PyObject *
PyvtkGeometryRepresentation_GetBlockOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlockOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentation *op = static_cast<vtkGeometryRepresentation *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double tempr = (ap.IsBound() ?
      op->GetBlockOpacity(temp0) :
      op->vtkGeometryRepresentation::GetBlockOpacity(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryRepresentation_RemoveBlockOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveBlockOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentation *op = static_cast<vtkGeometryRepresentation *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RemoveBlockOpacity(temp0);
    }
    else
    {
      op->vtkGeometryRepresentation::RemoveBlockOpacity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryRepresentation_RemoveBlockOpacities(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveBlockOpacities");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentation *op = static_cast<vtkGeometryRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveBlockOpacities();
    }
    else
    {
      op->vtkGeometryRepresentation::RemoveBlockOpacities();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryRepresentation_GetColorArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentation *op = static_cast<vtkGeometryRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetColorArrayName() :
      op->vtkGeometryRepresentation::GetColorArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryRepresentation_GetBounds(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetBounds");

  vtkDataObject *temp0 = nullptr;
  const size_t size1 = 6;
  double temp1[6];
  double save1[6];
  vtkCompositeDataDisplayAttributes *temp2 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkDataObject") &&
      ap.GetArray(temp1, size1) &&
      ap.GetVTKObject(temp2, "vtkCompositeDataDisplayAttributes"))
  {
    ap.Save(temp1, save1, size1);

    bool tempr = vtkGeometryRepresentation::GetBounds(temp0, temp1, temp2);

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryRepresentation_SetEnableScaling(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnableScaling");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentation *op = static_cast<vtkGeometryRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEnableScaling(temp0);
    }
    else
    {
      op->vtkGeometryRepresentation::SetEnableScaling(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryRepresentation_SetScalingArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalingArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentation *op = static_cast<vtkGeometryRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScalingArrayName(temp0);
    }
    else
    {
      op->vtkGeometryRepresentation::SetScalingArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryRepresentation_SetScalingFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalingFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentation *op = static_cast<vtkGeometryRepresentation *>(vp);

  vtkPiecewiseFunction *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPiecewiseFunction"))
  {
    if (ap.IsBound())
    {
      op->SetScalingFunction(temp0);
    }
    else
    {
      op->vtkGeometryRepresentation::SetScalingFunction(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryRepresentation_SetMaterial(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaterial");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentation *op = static_cast<vtkGeometryRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaterial(temp0);
    }
    else
    {
      op->vtkGeometryRepresentation::SetMaterial(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryRepresentation_SetUseDataPartitions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseDataPartitions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentation *op = static_cast<vtkGeometryRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseDataPartitions(temp0);
    }
    else
    {
      op->vtkGeometryRepresentation::SetUseDataPartitions(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryRepresentation_GetUseDataPartitions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseDataPartitions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentation *op = static_cast<vtkGeometryRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseDataPartitions() :
      op->vtkGeometryRepresentation::GetUseDataPartitions());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryRepresentation_SetUseShaderReplacements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseShaderReplacements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentation *op = static_cast<vtkGeometryRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseShaderReplacements(temp0);
    }
    else
    {
      op->vtkGeometryRepresentation::SetUseShaderReplacements(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryRepresentation_GetUseShaderReplacements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseShaderReplacements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentation *op = static_cast<vtkGeometryRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseShaderReplacements() :
      op->vtkGeometryRepresentation::GetUseShaderReplacements());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryRepresentation_SetShaderReplacements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShaderReplacements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryRepresentation *op = static_cast<vtkGeometryRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetShaderReplacements(temp0);
    }
    else
    {
      op->vtkGeometryRepresentation::SetShaderReplacements(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkGeometryRepresentation_Methods[] = {
  {"IsTypeOf", PyvtkGeometryRepresentation_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkGeometryRepresentation_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkGeometryRepresentation_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkGeometryRepresentation\nC++: static vtkGeometryRepresentation *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkGeometryRepresentation_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkGeometryRepresentation\nC++: vtkGeometryRepresentation *NewInstance()\n\n"},
  {"ProcessViewRequest", PyvtkGeometryRepresentation_ProcessViewRequest, METH_VARARGS,
   "V.ProcessViewRequest(vtkInformationRequestKey, vtkInformation,\n    vtkInformation) -> int\nC++: int ProcessViewRequest(\n    vtkInformationRequestKey *request_type,\n    vtkInformation *inInfo, vtkInformation *outInfo) override;\n\nvtkAlgorithm::ProcessRequest() equivalent for rendering passes.\nThis is typically called by the vtkView to request meta-data from\nthe representations or ask them to perform certain tasks e.g.\nPrepareForRendering.\n"},
  {"MarkModified", PyvtkGeometryRepresentation_MarkModified, METH_VARARGS,
   "V.MarkModified()\nC++: void MarkModified() override;\n\nThis needs to be called on all instances of\nvtkGeometryRepresentation when the input is modified. This is\nessential since the geometry filter does not have any real-input\non the client side which messes with the Update requests.\n"},
  {"SetVisibility", PyvtkGeometryRepresentation_SetVisibility, METH_VARARGS,
   "V.SetVisibility(bool)\nC++: void SetVisibility(bool val) override;\n\nGet/Set the visibility for this representation. When the\nvisibility of representation of false, all view passes are\nignored.\n"},
  {"SetBlockColorsDistinctValues", PyvtkGeometryRepresentation_SetBlockColorsDistinctValues, METH_VARARGS,
   "V.SetBlockColorsDistinctValues(int)\nC++: void SetBlockColorsDistinctValues(int distinctValues)\n\nDetermines the number of distinct values in vtkBlockColors See\nalso vtkPVGeometryFilter\n"},
  {"GetBlockColorsDistinctValues", PyvtkGeometryRepresentation_GetBlockColorsDistinctValues, METH_VARARGS,
   "V.GetBlockColorsDistinctValues() -> int\nC++: int GetBlockColorsDistinctValues()\n\nDetermines the number of distinct values in vtkBlockColors See\nalso vtkPVGeometryFilter\n"},
  {"SetSuppressLOD", PyvtkGeometryRepresentation_SetSuppressLOD, METH_VARARGS,
   "V.SetSuppressLOD(bool)\nC++: virtual void SetSuppressLOD(bool suppress)\n\nEnable/Disable LOD;\n"},
  {"SetAmbient", PyvtkGeometryRepresentation_SetAmbient, METH_VARARGS,
   "V.SetAmbient(float)\nC++: virtual void SetAmbient(double _arg)\n\nSet the lighting properties of the object.\nvtkGeometryRepresentation overrides these based of the following\nconditions:\n\\li When Representation is wireframe or points, it disables\n    diffuse or\nspecular.\n\\li When scalar coloring is employed, it disabled specular.\n"},
  {"SetDiffuse", PyvtkGeometryRepresentation_SetDiffuse, METH_VARARGS,
   "V.SetDiffuse(float)\nC++: virtual void SetDiffuse(double _arg)\n\nSet the lighting properties of the object.\nvtkGeometryRepresentation overrides these based of the following\nconditions:\n\\li When Representation is wireframe or points, it disables\n    diffuse or\nspecular.\n\\li When scalar coloring is employed, it disabled specular.\n"},
  {"SetSpecular", PyvtkGeometryRepresentation_SetSpecular, METH_VARARGS,
   "V.SetSpecular(float)\nC++: virtual void SetSpecular(double _arg)\n\nSet the lighting properties of the object.\nvtkGeometryRepresentation overrides these based of the following\nconditions:\n\\li When Representation is wireframe or points, it disables\n    diffuse or\nspecular.\n\\li When scalar coloring is employed, it disabled specular.\n"},
  {"GetAmbient", PyvtkGeometryRepresentation_GetAmbient, METH_VARARGS,
   "V.GetAmbient() -> float\nC++: virtual double GetAmbient()\n\nSet the lighting properties of the object.\nvtkGeometryRepresentation overrides these based of the following\nconditions:\n\\li When Representation is wireframe or points, it disables\n    diffuse or\nspecular.\n\\li When scalar coloring is employed, it disabled specular.\n"},
  {"GetDiffuse", PyvtkGeometryRepresentation_GetDiffuse, METH_VARARGS,
   "V.GetDiffuse() -> float\nC++: virtual double GetDiffuse()\n\nSet the lighting properties of the object.\nvtkGeometryRepresentation overrides these based of the following\nconditions:\n\\li When Representation is wireframe or points, it disables\n    diffuse or\nspecular.\n\\li When scalar coloring is employed, it disabled specular.\n"},
  {"GetSpecular", PyvtkGeometryRepresentation_GetSpecular, METH_VARARGS,
   "V.GetSpecular() -> float\nC++: virtual double GetSpecular()\n\nSet the lighting properties of the object.\nvtkGeometryRepresentation overrides these based of the following\nconditions:\n\\li When Representation is wireframe or points, it disables\n    diffuse or\nspecular.\n\\li When scalar coloring is employed, it disabled specular.\n"},
  {"SetRepresentation", PyvtkGeometryRepresentation_SetRepresentation, METH_VARARGS,
   "V.SetRepresentation(int)\nC++: virtual void SetRepresentation(int _arg)\nV.SetRepresentation(string)\nC++: virtual void SetRepresentation(const char *)\n\nSet the representation type. This adds VTK_SURFACE_WITH_EDGES to\nthose defined in vtkProperty.\n"},
  {"GetRepresentationMinValue", PyvtkGeometryRepresentation_GetRepresentationMinValue, METH_VARARGS,
   "V.GetRepresentationMinValue() -> int\nC++: virtual int GetRepresentationMinValue()\n\nSet the representation type. This adds VTK_SURFACE_WITH_EDGES to\nthose defined in vtkProperty.\n"},
  {"GetRepresentationMaxValue", PyvtkGeometryRepresentation_GetRepresentationMaxValue, METH_VARARGS,
   "V.GetRepresentationMaxValue() -> int\nC++: virtual int GetRepresentationMaxValue()\n\nSet the representation type. This adds VTK_SURFACE_WITH_EDGES to\nthose defined in vtkProperty.\n"},
  {"GetRepresentation", PyvtkGeometryRepresentation_GetRepresentation, METH_VARARGS,
   "V.GetRepresentation() -> int\nC++: virtual int GetRepresentation()\n\nSet the representation type. This adds VTK_SURFACE_WITH_EDGES to\nthose defined in vtkProperty.\n"},
  {"GetRenderedDataObject", PyvtkGeometryRepresentation_GetRenderedDataObject, METH_VARARGS,
   "V.GetRenderedDataObject(int) -> vtkDataObject\nC++: vtkDataObject *GetRenderedDataObject(int port) override;\n\nReturns the data object that is rendered from the given input\nport.\n"},
#if !defined(VTK_LEGACY_REMOVE)
  {"DoRequestGhostCells", PyvtkGeometryRepresentation_DoRequestGhostCells, METH_VARARGS,
   "V.DoRequestGhostCells(vtkInformation) -> bool\nC++: static bool DoRequestGhostCells(vtkInformation *information)\n\nReturns true if this class would like to get ghost-cells if\navailable for the connection whose information object is passed\nas the argument.@deprecated in ParaView 5.5. See\n`vtkProcessModule::GetNumberOfGhostLevelsToRequest` instead.\n"},
#endif
  {"SetRequestGhostCellsIfNeeded", PyvtkGeometryRepresentation_SetRequestGhostCellsIfNeeded, METH_VARARGS,
   "V.SetRequestGhostCellsIfNeeded(bool)\nC++: virtual void SetRequestGhostCellsIfNeeded(bool _arg)\n\nRepresentations that use geometry representation as the internal\nrepresentation should turn this flag off so that we don't end up\nrequesting ghost cells twice.\n"},
  {"GetRequestGhostCellsIfNeeded", PyvtkGeometryRepresentation_GetRequestGhostCellsIfNeeded, METH_VARARGS,
   "V.GetRequestGhostCellsIfNeeded() -> bool\nC++: virtual bool GetRequestGhostCellsIfNeeded()\n\nRepresentations that use geometry representation as the internal\nrepresentation should turn this flag off so that we don't end up\nrequesting ghost cells twice.\n"},
  {"RequestGhostCellsIfNeededOn", PyvtkGeometryRepresentation_RequestGhostCellsIfNeededOn, METH_VARARGS,
   "V.RequestGhostCellsIfNeededOn()\nC++: virtual void RequestGhostCellsIfNeededOn()\n\nRepresentations that use geometry representation as the internal\nrepresentation should turn this flag off so that we don't end up\nrequesting ghost cells twice.\n"},
  {"RequestGhostCellsIfNeededOff", PyvtkGeometryRepresentation_RequestGhostCellsIfNeededOff, METH_VARARGS,
   "V.RequestGhostCellsIfNeededOff()\nC++: virtual void RequestGhostCellsIfNeededOff()\n\nRepresentations that use geometry representation as the internal\nrepresentation should turn this flag off so that we don't end up\nrequesting ghost cells twice.\n"},
  {"SetUseOutline", PyvtkGeometryRepresentation_SetUseOutline, METH_VARARGS,
   "V.SetUseOutline(int)\nC++: virtual void SetUseOutline(int)\n\n"},
  {"SetTriangulate", PyvtkGeometryRepresentation_SetTriangulate, METH_VARARGS,
   "V.SetTriangulate(int)\nC++: void SetTriangulate(int)\n\n"},
  {"SetNonlinearSubdivisionLevel", PyvtkGeometryRepresentation_SetNonlinearSubdivisionLevel, METH_VARARGS,
   "V.SetNonlinearSubdivisionLevel(int)\nC++: void SetNonlinearSubdivisionLevel(int)\n\n"},
  {"SetGenerateFeatureEdges", PyvtkGeometryRepresentation_SetGenerateFeatureEdges, METH_VARARGS,
   "V.SetGenerateFeatureEdges(bool)\nC++: virtual void SetGenerateFeatureEdges(bool)\n\n"},
  {"SetAmbientColor", PyvtkGeometryRepresentation_SetAmbientColor, METH_VARARGS,
   "V.SetAmbientColor(float, float, float)\nC++: virtual void SetAmbientColor(double r, double g, double b)\n\n"},
  {"SetColor", PyvtkGeometryRepresentation_SetColor, METH_VARARGS,
   "V.SetColor(float, float, float)\nC++: virtual void SetColor(double r, double g, double b)\n\n"},
  {"SetDiffuseColor", PyvtkGeometryRepresentation_SetDiffuseColor, METH_VARARGS,
   "V.SetDiffuseColor(float, float, float)\nC++: virtual void SetDiffuseColor(double r, double g, double b)\n\n"},
  {"SetEdgeColor", PyvtkGeometryRepresentation_SetEdgeColor, METH_VARARGS,
   "V.SetEdgeColor(float, float, float)\nC++: virtual void SetEdgeColor(double r, double g, double b)\n\n"},
  {"SetInterpolation", PyvtkGeometryRepresentation_SetInterpolation, METH_VARARGS,
   "V.SetInterpolation(int)\nC++: virtual void SetInterpolation(int val)\n\n"},
  {"SetLineWidth", PyvtkGeometryRepresentation_SetLineWidth, METH_VARARGS,
   "V.SetLineWidth(float)\nC++: virtual void SetLineWidth(double val)\n\n"},
  {"SetOpacity", PyvtkGeometryRepresentation_SetOpacity, METH_VARARGS,
   "V.SetOpacity(float)\nC++: virtual void SetOpacity(double val)\n\n"},
  {"SetPointSize", PyvtkGeometryRepresentation_SetPointSize, METH_VARARGS,
   "V.SetPointSize(float)\nC++: virtual void SetPointSize(double val)\n\n"},
  {"SetSpecularColor", PyvtkGeometryRepresentation_SetSpecularColor, METH_VARARGS,
   "V.SetSpecularColor(float, float, float)\nC++: virtual void SetSpecularColor(double r, double g, double b)\n\n"},
  {"SetSpecularPower", PyvtkGeometryRepresentation_SetSpecularPower, METH_VARARGS,
   "V.SetSpecularPower(float)\nC++: virtual void SetSpecularPower(double val)\n\n"},
  {"SetLuminosity", PyvtkGeometryRepresentation_SetLuminosity, METH_VARARGS,
   "V.SetLuminosity(float)\nC++: virtual void SetLuminosity(double val)\n\n"},
  {"SetRenderPointsAsSpheres", PyvtkGeometryRepresentation_SetRenderPointsAsSpheres, METH_VARARGS,
   "V.SetRenderPointsAsSpheres(bool)\nC++: virtual void SetRenderPointsAsSpheres(bool)\n\n"},
  {"SetRenderLinesAsTubes", PyvtkGeometryRepresentation_SetRenderLinesAsTubes, METH_VARARGS,
   "V.SetRenderLinesAsTubes(bool)\nC++: virtual void SetRenderLinesAsTubes(bool)\n\n"},
  {"SetOrientation", PyvtkGeometryRepresentation_SetOrientation, METH_VARARGS,
   "V.SetOrientation(float, float, float)\nC++: virtual void SetOrientation(double, double, double)\n\n"},
  {"SetOrigin", PyvtkGeometryRepresentation_SetOrigin, METH_VARARGS,
   "V.SetOrigin(float, float, float)\nC++: virtual void SetOrigin(double, double, double)\n\n"},
  {"SetPickable", PyvtkGeometryRepresentation_SetPickable, METH_VARARGS,
   "V.SetPickable(int)\nC++: virtual void SetPickable(int val)\n\n"},
  {"SetPosition", PyvtkGeometryRepresentation_SetPosition, METH_VARARGS,
   "V.SetPosition(float, float, float)\nC++: virtual void SetPosition(double, double, double)\n\n"},
  {"SetScale", PyvtkGeometryRepresentation_SetScale, METH_VARARGS,
   "V.SetScale(float, float, float)\nC++: virtual void SetScale(double, double, double)\n\n"},
  {"SetTexture", PyvtkGeometryRepresentation_SetTexture, METH_VARARGS,
   "V.SetTexture(vtkTexture)\nC++: virtual void SetTexture(vtkTexture *)\n\n"},
  {"SetUserTransform", PyvtkGeometryRepresentation_SetUserTransform, METH_VARARGS,
   "V.SetUserTransform((float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float))\nC++: virtual void SetUserTransform(const double[16])\n\n"},
  {"SetInterpolateScalarsBeforeMapping", PyvtkGeometryRepresentation_SetInterpolateScalarsBeforeMapping, METH_VARARGS,
   "V.SetInterpolateScalarsBeforeMapping(int)\nC++: virtual void SetInterpolateScalarsBeforeMapping(int val)\n\n"},
  {"SetLookupTable", PyvtkGeometryRepresentation_SetLookupTable, METH_VARARGS,
   "V.SetLookupTable(vtkScalarsToColors)\nC++: virtual void SetLookupTable(vtkScalarsToColors *val)\n\n"},
  {"SetMapScalars", PyvtkGeometryRepresentation_SetMapScalars, METH_VARARGS,
   "V.SetMapScalars(int)\nC++: virtual void SetMapScalars(int val)\n\nSets if scalars are mapped through a color-map or are used\ndirectly as colors. 0 maps to VTK_COLOR_MODE_DIRECT_SCALARS 1\nmaps to VTK_COLOR_MODE_MAP_SCALARS@see\nvtkScalarsToColors::MapScalars\n"},
  {"SetStatic", PyvtkGeometryRepresentation_SetStatic, METH_VARARGS,
   "V.SetStatic(int)\nC++: virtual void SetStatic(int val)\n\nSets if scalars are mapped through a color-map or are used\ndirectly as colors. 0 maps to VTK_COLOR_MODE_DIRECT_SCALARS 1\nmaps to VTK_COLOR_MODE_MAP_SCALARS@see\nvtkScalarsToColors::MapScalars\n"},
  {"GetActor", PyvtkGeometryRepresentation_GetActor, METH_VARARGS,
   "V.GetActor() -> vtkPVLODActor\nC++: vtkPVLODActor *GetActor()\n\nProvides access to the actor used by this representation.\n"},
  {"SetBlockVisibility", PyvtkGeometryRepresentation_SetBlockVisibility, METH_VARARGS,
   "V.SetBlockVisibility(int, bool)\nC++: virtual void SetBlockVisibility(unsigned int index,\n    bool visible)\n\nSet/get the visibility for a single block.\n"},
  {"GetBlockVisibility", PyvtkGeometryRepresentation_GetBlockVisibility, METH_VARARGS,
   "V.GetBlockVisibility(int) -> bool\nC++: virtual bool GetBlockVisibility(unsigned int index)\n\nSet/get the visibility for a single block.\n"},
  {"RemoveBlockVisibility", PyvtkGeometryRepresentation_RemoveBlockVisibility, METH_VARARGS,
   "V.RemoveBlockVisibility(int, bool)\nC++: virtual void RemoveBlockVisibility(unsigned int index,\n    bool=true)\n\nSet/get the visibility for a single block.\n"},
  {"RemoveBlockVisibilities", PyvtkGeometryRepresentation_RemoveBlockVisibilities, METH_VARARGS,
   "V.RemoveBlockVisibilities()\nC++: virtual void RemoveBlockVisibilities()\n\nSet/get the visibility for a single block.\n"},
  {"SetBlockColor", PyvtkGeometryRepresentation_SetBlockColor, METH_VARARGS,
   "V.SetBlockColor(int, float, float, float)\nC++: virtual void SetBlockColor(unsigned int index, double r,\n    double g, double b)\nV.SetBlockColor(int, [float, ...])\nC++: virtual void SetBlockColor(unsigned int index, double *color)\n\nSet/get the color for a single block.\n"},
  {"GetBlockColor", PyvtkGeometryRepresentation_GetBlockColor, METH_VARARGS,
   "V.GetBlockColor(int) -> (float, ...)\nC++: virtual double *GetBlockColor(unsigned int index)\n\nSet/get the color for a single block.\n"},
  {"RemoveBlockColor", PyvtkGeometryRepresentation_RemoveBlockColor, METH_VARARGS,
   "V.RemoveBlockColor(int)\nC++: virtual void RemoveBlockColor(unsigned int index)\n\nSet/get the color for a single block.\n"},
  {"RemoveBlockColors", PyvtkGeometryRepresentation_RemoveBlockColors, METH_VARARGS,
   "V.RemoveBlockColors()\nC++: virtual void RemoveBlockColors()\n\nSet/get the color for a single block.\n"},
  {"SetBlockOpacity", PyvtkGeometryRepresentation_SetBlockOpacity, METH_VARARGS,
   "V.SetBlockOpacity(int, float)\nC++: virtual void SetBlockOpacity(unsigned int index,\n    double opacity)\nV.SetBlockOpacity(int, [float, ...])\nC++: virtual void SetBlockOpacity(unsigned int index,\n    double *opacity)\n\nSet/get the opacityfor a single block.\n"},
  {"GetBlockOpacity", PyvtkGeometryRepresentation_GetBlockOpacity, METH_VARARGS,
   "V.GetBlockOpacity(int) -> float\nC++: virtual double GetBlockOpacity(unsigned int index)\n\nSet/get the opacityfor a single block.\n"},
  {"RemoveBlockOpacity", PyvtkGeometryRepresentation_RemoveBlockOpacity, METH_VARARGS,
   "V.RemoveBlockOpacity(int)\nC++: virtual void RemoveBlockOpacity(unsigned int index)\n\nSet/get the opacityfor a single block.\n"},
  {"RemoveBlockOpacities", PyvtkGeometryRepresentation_RemoveBlockOpacities, METH_VARARGS,
   "V.RemoveBlockOpacities()\nC++: virtual void RemoveBlockOpacities()\n\nSet/get the opacityfor a single block.\n"},
  {"GetColorArrayName", PyvtkGeometryRepresentation_GetColorArrayName, METH_VARARGS,
   "V.GetColorArrayName() -> string\nC++: const char *GetColorArrayName()\n\nConvenience method to get the array name used to scalar color\nwith.\n"},
  {"GetBounds", PyvtkGeometryRepresentation_GetBounds, METH_VARARGS,
   "V.GetBounds(vtkDataObject, [float, float, float, float, float,\n    float], vtkCompositeDataDisplayAttributes) -> bool\nC++: static bool GetBounds(vtkDataObject *dataObject,\n    double bounds[6],\n    vtkCompositeDataDisplayAttributes *cdAttributes)\n\nConvenience method to get bounds from a dataset/composite\ndataset. If a vtkCompositeDataDisplayAttributes cdAttributes is\nprovided and if the input data dataObject is vtkCompositeDataSet,\nonly visible blocks of the data will be used to compute the\nbounds. Returns true if valid bounds were computed.\n"},
  {"SetEnableScaling", PyvtkGeometryRepresentation_SetEnableScaling, METH_VARARGS,
   "V.SetEnableScaling(int)\nC++: virtual void SetEnableScaling(int v)\n\nFor OSPRay controls sizing of implicit spheres (points) and\ncylinders (lines)\n"},
  {"SetScalingArrayName", PyvtkGeometryRepresentation_SetScalingArrayName, METH_VARARGS,
   "V.SetScalingArrayName(string)\nC++: virtual void SetScalingArrayName(const char *)\n\nFor OSPRay controls sizing of implicit spheres (points) and\ncylinders (lines)\n"},
  {"SetScalingFunction", PyvtkGeometryRepresentation_SetScalingFunction, METH_VARARGS,
   "V.SetScalingFunction(vtkPiecewiseFunction)\nC++: virtual void SetScalingFunction(vtkPiecewiseFunction *pwf)\n\nFor OSPRay controls sizing of implicit spheres (points) and\ncylinders (lines)\n"},
  {"SetMaterial", PyvtkGeometryRepresentation_SetMaterial, METH_VARARGS,
   "V.SetMaterial(string)\nC++: virtual void SetMaterial(const char *)\n\nFor OSPRay, choose from among available materials.\n"},
  {"SetUseDataPartitions", PyvtkGeometryRepresentation_SetUseDataPartitions, METH_VARARGS,
   "V.SetUseDataPartitions(bool)\nC++: virtual void SetUseDataPartitions(bool _arg)\n\nSpecify whether or not to redistribute the data. The default is\nfalse since that is the only way in general to guarantee correct\nrendering. Can set to true if all rendered data sets are based on\nthe same data partitioning in order to save on the data\nredistribution.\n"},
  {"GetUseDataPartitions", PyvtkGeometryRepresentation_GetUseDataPartitions, METH_VARARGS,
   "V.GetUseDataPartitions() -> bool\nC++: virtual bool GetUseDataPartitions()\n\nSpecify whether or not to redistribute the data. The default is\nfalse since that is the only way in general to guarantee correct\nrendering. Can set to true if all rendered data sets are based on\nthe same data partitioning in order to save on the data\nredistribution.\n"},
  {"SetUseShaderReplacements", PyvtkGeometryRepresentation_SetUseShaderReplacements, METH_VARARGS,
   "V.SetUseShaderReplacements(bool)\nC++: virtual void SetUseShaderReplacements(bool)\n\nSpecify whether or not to shader replacements string must be\nused.\n"},
  {"GetUseShaderReplacements", PyvtkGeometryRepresentation_GetUseShaderReplacements, METH_VARARGS,
   "V.GetUseShaderReplacements() -> bool\nC++: virtual bool GetUseShaderReplacements()\n\nSpecify whether or not to shader replacements string must be\nused.\n"},
  {"SetShaderReplacements", PyvtkGeometryRepresentation_SetShaderReplacements, METH_VARARGS,
   "V.SetShaderReplacements(string)\nC++: virtual void SetShaderReplacements(const char *)\n\nSpecify shader replacements using a Json string. Please refer to\nthe XML definition of the property for details about the expected\nJson string format.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkGeometryRepresentation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVClientServerCoreRenderingPython.vtkGeometryRepresentation", // tp_name
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
  PyvtkGeometryRepresentation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkGeometryRepresentation_StaticNew()
{
  return vtkGeometryRepresentation::New();
}

PyObject *PyvtkGeometryRepresentation_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkGeometryRepresentation_Type, PyvtkGeometryRepresentation_Methods,
    "vtkGeometryRepresentation",
 &PyvtkGeometryRepresentation_StaticNew);

  PyTypeObject *pytype = &PyvtkGeometryRepresentation_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPVDataRepresentation_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkGeometryRepresentation_RepresentationTypes_Type);
  PyvtkGeometryRepresentation_RepresentationTypes_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkGeometryRepresentation_RepresentationTypes_Type);

  o = (PyObject *)&PyvtkGeometryRepresentation_RepresentationTypes_Type;
  if (PyDict_SetItemString(d, "RepresentationTypes", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 4; c++)
  {
    typedef vtkGeometryRepresentation::RepresentationTypes cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[4] = {
        { "POINTS", vtkGeometryRepresentation::POINTS },
        { "WIREFRAME", vtkGeometryRepresentation::WIREFRAME },
        { "SURFACE", vtkGeometryRepresentation::SURFACE },
        { "SURFACE_WITH_EDGES", vtkGeometryRepresentation::SURFACE_WITH_EDGES },
      };

    o = PyvtkGeometryRepresentation_RepresentationTypes_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkGeometryRepresentation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkGeometryRepresentation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkGeometryRepresentation", o) != 0)
  {
    Py_DECREF(o);
  }

}

