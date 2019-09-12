// python wrapper for vtkCSVExporter
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
#include "vtkCSVExporter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCSVExporter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkCSVExporter_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkCSVExporter_Doc =
  "vtkCSVExporter - exporter used by certain views to export data as a\nCSV file.\n\n"
  "Superclass: vtkObject\n\n"
  "This is used by vtkSMCSVExporterProxy to export the data shown in the\n"
  "spreadsheet view or chart views as a CSV. The reason this class\n"
  "simply doesn't use a vtkCSVWriter is that vtkCSVWriter is designed to\n"
  "write out a single vtkTable as CSV. For exporting data from views,\n"
  "generating this single vtkTable that can be exported is often time\n"
  "consuming or memory consuming or both. Having a special exporter\n"
  "helps us with that. It provides two sets of APIs:\n\n"
  "\\li STREAM_ROWS: to use to stream a single large vtkTable as\n"
  "    contiguous chunks where each\n"
  "chuck is a subset of the rows (ideal for use by vtkSpreadSheetView)\n"
  "viz. OpenFile, WriteHeader, WriteData (which can be repeated as many\n"
  "times as needed), and CloseFile,\n"
  "\\li STREAM_COLUMNS: to use to add columns (idea for chart views) viz.\n"
  "OpenFile,\n"
  "AddColumn (which can be repeated), and CloseFile.\n\n"
  "One has to pick which mode the exporter is operating in during the\n"
  "OpenFile() call.\n\n";

static PyTypeObject PyvtkCSVExporter_ExporterModes_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsRenderingPython.vtkCSVExporter.ExporterModes", // tp_name
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

PyObject *PyvtkCSVExporter_ExporterModes_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkCSVExporter_ExporterModes_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkCSVExporter_ExporterModes_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkCSVExporter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCSVExporter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCSVExporter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCSVExporter *op = static_cast<vtkCSVExporter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCSVExporter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCSVExporter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCSVExporter *tempr = vtkCSVExporter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCSVExporter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCSVExporter *op = static_cast<vtkCSVExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCSVExporter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCSVExporter::NewInstance());

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
PyvtkCSVExporter_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCSVExporter *op = static_cast<vtkCSVExporter *>(vp);

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
      op->vtkCSVExporter::SetFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCSVExporter_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCSVExporter *op = static_cast<vtkCSVExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkCSVExporter::GetFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCSVExporter_SetFieldDelimiter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFieldDelimiter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCSVExporter *op = static_cast<vtkCSVExporter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFieldDelimiter(temp0);
    }
    else
    {
      op->vtkCSVExporter::SetFieldDelimiter(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCSVExporter_GetFieldDelimiter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldDelimiter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCSVExporter *op = static_cast<vtkCSVExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFieldDelimiter() :
      op->vtkCSVExporter::GetFieldDelimiter());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCSVExporter_SetColumnLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColumnLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCSVExporter *op = static_cast<vtkCSVExporter *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetColumnLabel(temp0, temp1);
    }
    else
    {
      op->vtkCSVExporter::SetColumnLabel(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCSVExporter_ClearColumnLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearColumnLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCSVExporter *op = static_cast<vtkCSVExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearColumnLabels();
    }
    else
    {
      op->vtkCSVExporter::ClearColumnLabels();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCSVExporter_GetColumnLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColumnLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCSVExporter *op = static_cast<vtkCSVExporter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetColumnLabel(temp0) :
      op->vtkCSVExporter::GetColumnLabel(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCSVExporter_Open(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Open");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCSVExporter *op = static_cast<vtkCSVExporter *>(vp);

  typedef vtkCSVExporter::ExporterModes temp0_type;
  temp0_type temp0 = vtkCSVExporter::STREAM_ROWS;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetEnumValue(temp0, "vtkCSVExporter.ExporterModes")))
  {
    bool tempr = (ap.IsBound() ?
      op->Open(temp0) :
      op->vtkCSVExporter::Open(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCSVExporter_Close(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Close");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCSVExporter *op = static_cast<vtkCSVExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Close();
    }
    else
    {
      op->vtkCSVExporter::Close();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCSVExporter_Abort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Abort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCSVExporter *op = static_cast<vtkCSVExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Abort();
    }
    else
    {
      op->vtkCSVExporter::Abort();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCSVExporter_WriteHeader(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteHeader");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCSVExporter *op = static_cast<vtkCSVExporter *>(vp);

  vtkFieldData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkFieldData"))
  {
    if (ap.IsBound())
    {
      op->WriteHeader(temp0);
    }
    else
    {
      op->vtkCSVExporter::WriteHeader(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCSVExporter_WriteData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCSVExporter *op = static_cast<vtkCSVExporter *>(vp);

  vtkFieldData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkFieldData"))
  {
    if (ap.IsBound())
    {
      op->WriteData(temp0);
    }
    else
    {
      op->vtkCSVExporter::WriteData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCSVExporter_AddColumn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddColumn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCSVExporter *op = static_cast<vtkCSVExporter *>(vp);

  vtkAbstractArray *temp0 = nullptr;
  const char *temp1 = NULL;
  vtkDataArray *temp2 = NULL;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 3) &&
      ap.GetVTKObject(temp0, "vtkAbstractArray") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)) &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp2, "vtkDataArray")))
  {
    if (ap.IsBound())
    {
      op->AddColumn(temp0, temp1, temp2);
    }
    else
    {
      op->vtkCSVExporter::AddColumn(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkCSVExporter_Methods[] = {
  {"IsTypeOf", PyvtkCSVExporter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCSVExporter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCSVExporter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkCSVExporter\nC++: static vtkCSVExporter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCSVExporter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkCSVExporter\nC++: vtkCSVExporter *NewInstance()\n\n"},
  {"SetFileName", PyvtkCSVExporter_SetFileName, METH_VARARGS,
   "V.SetFileName(string)\nC++: virtual void SetFileName(const char *_arg)\n\nGet/Set the filename for the file.\n"},
  {"GetFileName", PyvtkCSVExporter_GetFileName, METH_VARARGS,
   "V.GetFileName() -> string\nC++: virtual char *GetFileName()\n\nGet/Set the filename for the file.\n"},
  {"SetFieldDelimiter", PyvtkCSVExporter_SetFieldDelimiter, METH_VARARGS,
   "V.SetFieldDelimiter(string)\nC++: virtual void SetFieldDelimiter(const char *_arg)\n\nGet/Set the delimiter use to separate fields (\",\" by default.)\n"},
  {"GetFieldDelimiter", PyvtkCSVExporter_GetFieldDelimiter, METH_VARARGS,
   "V.GetFieldDelimiter() -> string\nC++: virtual char *GetFieldDelimiter()\n\nGet/Set the delimiter use to separate fields (\",\" by default.)\n"},
  {"SetColumnLabel", PyvtkCSVExporter_SetColumnLabel, METH_VARARGS,
   "V.SetColumnLabel(string, string)\nC++: void SetColumnLabel(const char *name, const char *label)\n\nIn STREAM_ROWS mode, this API can be used to change columns\nlabels when exporting.\n"},
  {"ClearColumnLabels", PyvtkCSVExporter_ClearColumnLabels, METH_VARARGS,
   "V.ClearColumnLabels()\nC++: void ClearColumnLabels()\n\nIn STREAM_ROWS mode, this API can be used to change columns\nlabels when exporting.\n"},
  {"GetColumnLabel", PyvtkCSVExporter_GetColumnLabel, METH_VARARGS,
   "V.GetColumnLabel(string) -> string\nC++: const char *GetColumnLabel(const char *name)\n\nIn STREAM_ROWS mode, this API can be used to change columns\nlabels when exporting.\n"},
  {"Open", PyvtkCSVExporter_Open, METH_VARARGS,
   "V.Open(ExporterModes) -> bool\nC++: bool Open(ExporterModes mode=vtkCSVExporter::STREAM_ROWS)\n\nOpen the file and set mode in which the exporter is operating.\n"},
  {"Close", PyvtkCSVExporter_Close, METH_VARARGS,
   "V.Close()\nC++: void Close()\n\nCloses the file cleanly. Call this at the end to close the file\nand dump out any cached data.\n"},
  {"Abort", PyvtkCSVExporter_Abort, METH_VARARGS,
   "V.Abort()\nC++: void Abort()\n\nSame as Close except deletes the file, if created. This is useful\nto interrupt the exporting on failure.\n"},
  {"WriteHeader", PyvtkCSVExporter_WriteHeader, METH_VARARGS,
   "V.WriteHeader(vtkFieldData)\nC++: void WriteHeader(vtkFieldData *)\n\nIn STREAM_ROWS mode, use these methods to write column headers\nonce using WriteHeader and then use WriteData as many times as\nneeded to write out rows.\n"},
  {"WriteData", PyvtkCSVExporter_WriteData, METH_VARARGS,
   "V.WriteData(vtkFieldData)\nC++: void WriteData(vtkFieldData *)\n\nIn STREAM_ROWS mode, use these methods to write column headers\nonce using WriteHeader and then use WriteData as many times as\nneeded to write out rows.\n"},
  {"AddColumn", PyvtkCSVExporter_AddColumn, METH_VARARGS,
   "V.AddColumn(vtkAbstractArray, string, vtkDataArray)\nC++: void AddColumn(vtkAbstractArray *yarray,\n    const char *yarrayname=NULL, vtkDataArray *xarray=NULL)\n\nIn STREAM_COLUMNS mode, use this method to add a column (\nyarray). One can assign it a name different the the name of the\narray using \\c yarrayname. If xarray is not NULL, then is used as\nthe row-id. This makes it possible to add multiple columns with\nvarying number of samples. The final output will have empty cells\nfor missing values.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkCSVExporter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsRenderingPython.vtkCSVExporter", // tp_name
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
  PyvtkCSVExporter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCSVExporter_StaticNew()
{
  return vtkCSVExporter::New();
}

PyObject *PyvtkCSVExporter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkCSVExporter_Type, PyvtkCSVExporter_Methods,
    "vtkCSVExporter",
 &PyvtkCSVExporter_StaticNew);

  PyTypeObject *pytype = &PyvtkCSVExporter_Type;

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

  PyType_Ready(&PyvtkCSVExporter_ExporterModes_Type);
  PyvtkCSVExporter_ExporterModes_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkCSVExporter_ExporterModes_Type);

  o = (PyObject *)&PyvtkCSVExporter_ExporterModes_Type;
  if (PyDict_SetItemString(d, "ExporterModes", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 2; c++)
  {
    typedef vtkCSVExporter::ExporterModes cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[2] = {
        { "STREAM_ROWS", vtkCSVExporter::STREAM_ROWS },
        { "STREAM_COLUMNS", vtkCSVExporter::STREAM_COLUMNS },
      };

    o = PyvtkCSVExporter_ExporterModes_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCSVExporter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCSVExporter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCSVExporter", o) != 0)
  {
    Py_DECREF(o);
  }

}

