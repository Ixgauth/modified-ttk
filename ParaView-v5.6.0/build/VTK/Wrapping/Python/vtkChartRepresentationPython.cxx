// python wrapper for vtkChartRepresentation
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
#include "vtkChartRepresentation.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkChartRepresentation(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkChartRepresentation_ClassNew(); }

#ifndef DECLARED_PyvtkPVDataRepresentation_ClassNew
extern "C" { PyObject *PyvtkPVDataRepresentation_ClassNew(); }
#define DECLARED_PyvtkPVDataRepresentation_ClassNew
#endif

static const char *PyvtkChartRepresentation_Doc =
  "vtkChartRepresentation - vtkChartRepresentation is the base\nrepresentation for charting representations.\n\n"
  "Superclass: vtkPVDataRepresentation\n\n"
  "Currently, ParaView's charting views are client-side only views that\n"
  "render only on the client side. That being the case, when running in\n"
  "client-server mode or in parallel, the data-delivery mode is fixed.\n"
  "Hence, unlike representations for 3D views, this representation\n"
  "delivers the data in RequestData() itself. This makes it possible for\n"
  "client code to call UpdatePipeline() on the representation proxy and\n"
  "then access the delivered vtkTable on the client.\n\n";


static PyObject *
PyvtkChartRepresentation_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkChartRepresentation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartRepresentation *op = static_cast<vtkChartRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkChartRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkChartRepresentation *tempr = vtkChartRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartRepresentation *op = static_cast<vtkChartRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkChartRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkChartRepresentation::NewInstance());

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
PyvtkChartRepresentation_SetSelectionRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectionRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartRepresentation *op = static_cast<vtkChartRepresentation *>(vp);

  vtkChartSelectionRepresentation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkChartSelectionRepresentation"))
  {
    if (ap.IsBound())
    {
      op->SetSelectionRepresentation(temp0);
    }
    else
    {
      op->vtkChartRepresentation::SetSelectionRepresentation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartRepresentation_SetVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartRepresentation *op = static_cast<vtkChartRepresentation *>(vp);

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
      op->vtkChartRepresentation::SetVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartRepresentation_MarkModified(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MarkModified");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartRepresentation *op = static_cast<vtkChartRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MarkModified();
    }
    else
    {
      op->vtkChartRepresentation::MarkModified();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartRepresentation_SetFieldAssociation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFieldAssociation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartRepresentation *op = static_cast<vtkChartRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFieldAssociation(temp0);
    }
    else
    {
      op->vtkChartRepresentation::SetFieldAssociation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartRepresentation_GetFieldAssociation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldAssociation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartRepresentation *op = static_cast<vtkChartRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFieldAssociation() :
      op->vtkChartRepresentation::GetFieldAssociation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartRepresentation_SetCompositeDataSetIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCompositeDataSetIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartRepresentation *op = static_cast<vtkChartRepresentation *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCompositeDataSetIndex(temp0);
    }
    else
    {
      op->vtkChartRepresentation::SetCompositeDataSetIndex(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartRepresentation_AddCompositeDataSetIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddCompositeDataSetIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartRepresentation *op = static_cast<vtkChartRepresentation *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->AddCompositeDataSetIndex(temp0);
    }
    else
    {
      op->vtkChartRepresentation::AddCompositeDataSetIndex(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartRepresentation_ResetCompositeDataSetIndices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetCompositeDataSetIndices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartRepresentation *op = static_cast<vtkChartRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ResetCompositeDataSetIndices();
    }
    else
    {
      op->vtkChartRepresentation::ResetCompositeDataSetIndices();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartRepresentation_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartRepresentation *op = static_cast<vtkChartRepresentation *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->Initialize(temp0, temp1) :
      op->vtkChartRepresentation::Initialize(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartRepresentation_ProcessViewRequest(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessViewRequest");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartRepresentation *op = static_cast<vtkChartRepresentation *>(vp);

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
      op->vtkChartRepresentation::ProcessViewRequest(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartRepresentation_GetDefaultSeriesLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultSeriesLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartRepresentation *op = static_cast<vtkChartRepresentation *>(vp);

  vtkStdString temp0;
  vtkStdString temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkStdString tempr = (ap.IsBound() ?
      op->GetDefaultSeriesLabel(temp0, temp1) :
      op->vtkChartRepresentation::GetDefaultSeriesLabel(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartRepresentation_SetFlattenTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFlattenTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartRepresentation *op = static_cast<vtkChartRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFlattenTable(temp0);
    }
    else
    {
      op->vtkChartRepresentation::SetFlattenTable(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartRepresentation_GetFlattenTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFlattenTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartRepresentation *op = static_cast<vtkChartRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFlattenTable() :
      op->vtkChartRepresentation::GetFlattenTable());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartRepresentation_MapSelectionToInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MapSelectionToInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartRepresentation *op = static_cast<vtkChartRepresentation *>(vp);

  vtkSelection *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSelection"))
  {
    bool tempr = (ap.IsBound() ?
      op->MapSelectionToInput(temp0) :
      op->vtkChartRepresentation::MapSelectionToInput(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartRepresentation_MapSelectionToView(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MapSelectionToView");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartRepresentation *op = static_cast<vtkChartRepresentation *>(vp);

  vtkSelection *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSelection"))
  {
    bool tempr = (ap.IsBound() ?
      op->MapSelectionToView(temp0) :
      op->vtkChartRepresentation::MapSelectionToView(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartRepresentation_Export(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Export");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartRepresentation *op = static_cast<vtkChartRepresentation *>(vp);

  vtkCSVExporter *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCSVExporter"))
  {
    bool tempr = (ap.IsBound() ?
      op->Export(temp0) :
      op->vtkChartRepresentation::Export(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkChartRepresentation_Methods[] = {
  {"IsTypeOf", PyvtkChartRepresentation_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkChartRepresentation_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkChartRepresentation_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkChartRepresentation\nC++: static vtkChartRepresentation *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkChartRepresentation_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkChartRepresentation\nC++: vtkChartRepresentation *NewInstance()\n\n"},
  {"SetSelectionRepresentation", PyvtkChartRepresentation_SetSelectionRepresentation, METH_VARARGS,
   "V.SetSelectionRepresentation(vtkChartSelectionRepresentation)\nC++: void SetSelectionRepresentation(\n    vtkChartSelectionRepresentation *)\n\nThese must only be set during initialization before adding the\nrepresentation to any views or calling Update().\n"},
  {"SetVisibility", PyvtkChartRepresentation_SetVisibility, METH_VARARGS,
   "V.SetVisibility(bool)\nC++: void SetVisibility(bool visible) override;\n\nSet visibility of the representation.\n"},
  {"MarkModified", PyvtkChartRepresentation_MarkModified, METH_VARARGS,
   "V.MarkModified()\nC++: void MarkModified() override;\n\nThis needs to be called on all instances of\nvtkGeometryRepresentation when the input is modified. This is\nessential since the geometry filter does not have any real-input\non the client side which messes with the Update requests.\n"},
  {"SetFieldAssociation", PyvtkChartRepresentation_SetFieldAssociation, METH_VARARGS,
   "V.SetFieldAssociation(int)\nC++: void SetFieldAssociation(int)\n\nSet the field association for arrays to use. When changed, this\nwill call MarkModified().\n"},
  {"GetFieldAssociation", PyvtkChartRepresentation_GetFieldAssociation, METH_VARARGS,
   "V.GetFieldAssociation() -> int\nC++: virtual int GetFieldAssociation()\n\nSet the field association for arrays to use. When changed, this\nwill call MarkModified().\n"},
  {"SetCompositeDataSetIndex", PyvtkChartRepresentation_SetCompositeDataSetIndex, METH_VARARGS,
   "V.SetCompositeDataSetIndex(int)\nC++: void SetCompositeDataSetIndex(unsigned int)\n\n"},
  {"AddCompositeDataSetIndex", PyvtkChartRepresentation_AddCompositeDataSetIndex, METH_VARARGS,
   "V.AddCompositeDataSetIndex(int)\nC++: void AddCompositeDataSetIndex(unsigned int)\n\n"},
  {"ResetCompositeDataSetIndices", PyvtkChartRepresentation_ResetCompositeDataSetIndices, METH_VARARGS,
   "V.ResetCompositeDataSetIndices()\nC++: void ResetCompositeDataSetIndices()\n\n"},
  {"Initialize", PyvtkChartRepresentation_Initialize, METH_VARARGS,
   "V.Initialize(int, int) -> int\nC++: unsigned int Initialize(unsigned int minIdAvailable,\n    unsigned int maxIdAvailable) override;\n\nOverride because of internal selection representations that need\nto be initialized as well.\n"},
  {"ProcessViewRequest", PyvtkChartRepresentation_ProcessViewRequest, METH_VARARGS,
   "V.ProcessViewRequest(vtkInformationRequestKey, vtkInformation,\n    vtkInformation) -> int\nC++: int ProcessViewRequest(\n    vtkInformationRequestKey *request_type,\n    vtkInformation *inInfo, vtkInformation *outInfo) override;\n\nvtkAlgorithm::ProcessRequest() equivalent for rendering passes.\nThis is typically called by the vtkView to request meta-data from\nthe representations or ask them to perform certain tasks e.g.\nPrepareForRendering. Overridden to handle REQUEST_RENDER() to\ncall PrepareForRendering.\n"},
  {"GetDefaultSeriesLabel", PyvtkChartRepresentation_GetDefaultSeriesLabel, METH_VARARGS,
   "V.GetDefaultSeriesLabel(string, string) -> string\nC++: virtual vtkStdString GetDefaultSeriesLabel(\n    const vtkStdString &tableName, const vtkStdString &columnName)\n\nMethod to provide the default name given the name of a table and\na column in that table. When overriding this method, ensure that\nthe implementation does not depend on the instance being\ninitialized or have valid data. This method is called on the\nclient-side when filling up the domains for the properties.\n"},
  {"SetFlattenTable", PyvtkChartRepresentation_SetFlattenTable, METH_VARARGS,
   "V.SetFlattenTable(int)\nC++: virtual void SetFlattenTable(int _arg)\n\nFlatten the table, i.e. split any multicomponent columns into\nseparate components.\n"},
  {"GetFlattenTable", PyvtkChartRepresentation_GetFlattenTable, METH_VARARGS,
   "V.GetFlattenTable() -> int\nC++: virtual int GetFlattenTable()\n\nFlatten the table, i.e. split any multicomponent columns into\nseparate components.\n"},
  {"MapSelectionToInput", PyvtkChartRepresentation_MapSelectionToInput, METH_VARARGS,
   "V.MapSelectionToInput(vtkSelection) -> bool\nC++: virtual bool MapSelectionToInput(vtkSelection *sel)\n\nThis method is called on the client-side by the vtkPVContextView\nwhenever a new selection is made on all the visible\nrepresentations in that view. The goal of this method is allow\nthe representations to transform the selection created in the\nview (which is an id-based selection based on the vtkTable that\nis fed into the vtkChart) to an appropriate selection based on\nthe data going into the representation. Return false if the\nselection is not applicable to this representation or the\nconversion cannot be made. Default implementation simply ensures\nthat the FieldType on the selection nodes is set to match up with\nthe FieldAssociation on the representation.\n"},
  {"MapSelectionToView", PyvtkChartRepresentation_MapSelectionToView, METH_VARARGS,
   "V.MapSelectionToView(vtkSelection) -> bool\nC++: virtual bool MapSelectionToView(vtkSelection *sel)\n\nThis is the inverse of MapSelectionToInput(). In this case, we\nare converting the selection defined on the input for the\nrepresentation to a selection that corresponds to elements being\nrendered in the view. The default implementation checks removes\nvtkSelectionNode items in sel that don't have the FieldType that\nmatches this->FieldAssociation. Similar to MapSelectionToInput(),\nthis method is expected to transform the sel in place and return\nfalse is the selection is not applicable to this representation\nor the conversion cannot be made.\n"},
  {"Export", PyvtkChartRepresentation_Export, METH_VARARGS,
   "V.Export(vtkCSVExporter) -> bool\nC++: virtual bool Export(vtkCSVExporter *exporter)\n\nCalled by vtkPVContextView::Export() to export the\nrepresentation's data to a CSV file. Return false on failure\nwhich will call the exporting process to abort and raise an\nerror. Default implementation simply returns false.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkChartRepresentation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVClientServerCoreRenderingPython.vtkChartRepresentation", // tp_name
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
  PyvtkChartRepresentation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkChartRepresentation_StaticNew()
{
  return vtkChartRepresentation::New();
}

PyObject *PyvtkChartRepresentation_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkChartRepresentation_Type, PyvtkChartRepresentation_Methods,
    "vtkChartRepresentation",
 &PyvtkChartRepresentation_StaticNew);

  PyTypeObject *pytype = &PyvtkChartRepresentation_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPVDataRepresentation_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkChartRepresentation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkChartRepresentation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkChartRepresentation", o) != 0)
  {
    Py_DECREF(o);
  }

}

