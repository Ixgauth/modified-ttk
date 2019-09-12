// python wrapper for vtkColorSeries
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
#include "vtkColor.h"
#include "vtkColorSeries.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkColorSeries(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkColorSeries_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkColorSeries_Doc =
  "vtkColorSeries - stores a list of colors.\n\n"
  "Superclass: vtkObject\n\n"
  "The vtkColorSeries stores palettes of colors. There are several\n"
  "default palettes (or schemes) available and functions to control\n"
  "several aspects of what colors are returned. In essence a color\n"
  "scheme is set and then the number of colors and individual color\n"
  "values may be requested.\n\n"
  "It is also possible to add schemes beyond the default palettes.\n"
  "Whenever SetColorScheme is called with a string for which no palette\n"
  "already exists, a new, empty palette is created. You may then use\n"
  "SetNumberOfColors and SetColor to populate the palette. You may not\n"
  "extend default palettes by calling functions that alter a scheme; if\n"
  "called while a predefined palette is in use, they will create a new\n"
  "non-default scheme and populate it with the current palette before\n"
  "continuing.\n\n"
  "The \"Brewer\" palettes are courtesy of Cynthia A. Brewer (Dept. of\n"
  "Geography, Pennsylvania State University) and present under the\n"
  "Apache License. See the source code for details.\n\n";

static PyTypeObject PyvtkColorSeries_ColorSchemes_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonColorPython.vtkColorSeries.ColorSchemes", // tp_name
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

PyObject *PyvtkColorSeries_ColorSchemes_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkColorSeries_ColorSchemes_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkColorSeries_ColorSchemes_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}

static PyTypeObject PyvtkColorSeries_LUTMode_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonColorPython.vtkColorSeries.LUTMode", // tp_name
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

PyObject *PyvtkColorSeries_LUTMode_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkColorSeries_LUTMode_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkColorSeries_LUTMode_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkColorSeries_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkColorSeries::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkColorSeries_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorSeries *op = static_cast<vtkColorSeries *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkColorSeries::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkColorSeries_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkColorSeries *tempr = vtkColorSeries::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkColorSeries_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorSeries *op = static_cast<vtkColorSeries *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkColorSeries *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkColorSeries::NewInstance());

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
PyvtkColorSeries_SetColorScheme(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorScheme");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorSeries *op = static_cast<vtkColorSeries *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetColorScheme(temp0);
    }
    else
    {
      op->vtkColorSeries::SetColorScheme(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkColorSeries_SetColorSchemeByName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorSchemeByName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorSeries *op = static_cast<vtkColorSeries *>(vp);

  vtkStdString temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->SetColorSchemeByName(temp0) :
      op->vtkColorSeries::SetColorSchemeByName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkColorSeries_GetNumberOfColorSchemes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfColorSchemes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorSeries *op = static_cast<vtkColorSeries *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfColorSchemes() :
      op->vtkColorSeries::GetNumberOfColorSchemes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkColorSeries_GetColorSchemeName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorSchemeName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorSeries *op = static_cast<vtkColorSeries *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStdString tempr = (ap.IsBound() ?
      op->GetColorSchemeName() :
      op->vtkColorSeries::GetColorSchemeName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkColorSeries_SetColorSchemeName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorSchemeName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorSeries *op = static_cast<vtkColorSeries *>(vp);

  vtkStdString temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetColorSchemeName(temp0);
    }
    else
    {
      op->vtkColorSeries::SetColorSchemeName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkColorSeries_GetColorScheme(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorScheme");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorSeries *op = static_cast<vtkColorSeries *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetColorScheme() :
      op->vtkColorSeries::GetColorScheme());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkColorSeries_GetNumberOfColors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfColors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorSeries *op = static_cast<vtkColorSeries *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfColors() :
      op->vtkColorSeries::GetNumberOfColors());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkColorSeries_SetNumberOfColors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfColors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorSeries *op = static_cast<vtkColorSeries *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfColors(temp0);
    }
    else
    {
      op->vtkColorSeries::SetNumberOfColors(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkColorSeries_GetColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorSeries *op = static_cast<vtkColorSeries *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkColor3ub tempr = (ap.IsBound() ?
      op->GetColor(temp0) :
      op->vtkColorSeries::GetColor(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkColor3ub");
    }
  }

  return result;
}


static PyObject *
PyvtkColorSeries_GetColorRepeating(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorRepeating");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorSeries *op = static_cast<vtkColorSeries *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkColor3ub tempr = (ap.IsBound() ?
      op->GetColorRepeating(temp0) :
      op->vtkColorSeries::GetColorRepeating(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkColor3ub");
    }
  }

  return result;
}


static PyObject *
PyvtkColorSeries_SetColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorSeries *op = static_cast<vtkColorSeries *>(vp);

  int temp0;
  vtkColor3ub *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetSpecialObject(temp1, pobj1, "vtkColor3ub"))
  {
    if (ap.IsBound())
    {
      op->SetColor(temp0, *temp1);
    }
    else
    {
      op->vtkColorSeries::SetColor(temp0, *temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj1);

  return result;
}


static PyObject *
PyvtkColorSeries_AddColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorSeries *op = static_cast<vtkColorSeries *>(vp);

  vtkColor3ub *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkColor3ub"))
  {
    if (ap.IsBound())
    {
      op->AddColor(*temp0);
    }
    else
    {
      op->vtkColorSeries::AddColor(*temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkColorSeries_InsertColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorSeries *op = static_cast<vtkColorSeries *>(vp);

  int temp0;
  vtkColor3ub *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetSpecialObject(temp1, pobj1, "vtkColor3ub"))
  {
    if (ap.IsBound())
    {
      op->InsertColor(temp0, *temp1);
    }
    else
    {
      op->vtkColorSeries::InsertColor(temp0, *temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj1);

  return result;
}


static PyObject *
PyvtkColorSeries_RemoveColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorSeries *op = static_cast<vtkColorSeries *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RemoveColor(temp0);
    }
    else
    {
      op->vtkColorSeries::RemoveColor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkColorSeries_ClearColors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearColors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorSeries *op = static_cast<vtkColorSeries *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearColors();
    }
    else
    {
      op->vtkColorSeries::ClearColors();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkColorSeries_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorSeries *op = static_cast<vtkColorSeries *>(vp);

  vtkColorSeries *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkColorSeries"))
  {
    if (ap.IsBound())
    {
      op->DeepCopy(temp0);
    }
    else
    {
      op->vtkColorSeries::DeepCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkColorSeries_BuildLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorSeries *op = static_cast<vtkColorSeries *>(vp);

  vtkLookupTable *temp0 = nullptr;
  int temp1 = vtkColorSeries::CATEGORICAL;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkLookupTable") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    if (ap.IsBound())
    {
      op->BuildLookupTable(temp0, temp1);
    }
    else
    {
      op->vtkColorSeries::BuildLookupTable(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkColorSeries_CreateLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorSeries *op = static_cast<vtkColorSeries *>(vp);

  int temp0 = vtkColorSeries::CATEGORICAL;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    vtkLookupTable *tempr = (ap.IsBound() ?
      op->CreateLookupTable(temp0) :
      op->vtkColorSeries::CreateLookupTable(temp0));

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

static PyMethodDef PyvtkColorSeries_Methods[] = {
  {"IsTypeOf", PyvtkColorSeries_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkColorSeries_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkColorSeries_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkColorSeries\nC++: static vtkColorSeries *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkColorSeries_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkColorSeries\nC++: vtkColorSeries *NewInstance()\n\n"},
  {"SetColorScheme", PyvtkColorSeries_SetColorScheme, METH_VARARGS,
   "V.SetColorScheme(int)\nC++: virtual void SetColorScheme(int scheme)\n\nSet the color scheme that should be used. The variant of this\nfunction that takes an integer should pass a number from those in\nthe enum, or a value returned by the string variant. The variant\nthat accepts a string returns the integer index of the resulting\npalette (whether it already existed or is newly-created).\n"},
  {"SetColorSchemeByName", PyvtkColorSeries_SetColorSchemeByName, METH_VARARGS,
   "V.SetColorSchemeByName(string) -> int\nC++: virtual int SetColorSchemeByName(\n    const vtkStdString &schemeName)\n\nSet the color scheme that should be used. The variant of this\nfunction that takes an integer should pass a number from those in\nthe enum, or a value returned by the string variant. The variant\nthat accepts a string returns the integer index of the resulting\npalette (whether it already existed or is newly-created).\n"},
  {"GetNumberOfColorSchemes", PyvtkColorSeries_GetNumberOfColorSchemes, METH_VARARGS,
   "V.GetNumberOfColorSchemes() -> int\nC++: int GetNumberOfColorSchemes()\n\nReturn the number of schemes currently defined.\n"},
  {"GetColorSchemeName", PyvtkColorSeries_GetColorSchemeName, METH_VARARGS,
   "V.GetColorSchemeName() -> string\nC++: virtual vtkStdString GetColorSchemeName()\n\nGet the color scheme that is currently being used.\n"},
  {"SetColorSchemeName", PyvtkColorSeries_SetColorSchemeName, METH_VARARGS,
   "V.SetColorSchemeName(string)\nC++: virtual void SetColorSchemeName(const vtkStdString &scheme)\n\nSet the name of the current color scheme\n"},
  {"GetColorScheme", PyvtkColorSeries_GetColorScheme, METH_VARARGS,
   "V.GetColorScheme() -> int\nC++: virtual int GetColorScheme()\n\nReturn the ID of the color scheme currently in use.\n"},
  {"GetNumberOfColors", PyvtkColorSeries_GetNumberOfColors, METH_VARARGS,
   "V.GetNumberOfColors() -> int\nC++: virtual int GetNumberOfColors()\n\nGet the number of colors available in the current color scheme.\n"},
  {"SetNumberOfColors", PyvtkColorSeries_SetNumberOfColors, METH_VARARGS,
   "V.SetNumberOfColors(int)\nC++: virtual void SetNumberOfColors(int numColors)\n\nSet the number of colors to be stored in a non-default color\nscheme. Calling this function on a predefined color scheme will\ncause the scheme to be duplicated to a new custom scheme.\n"},
  {"GetColor", PyvtkColorSeries_GetColor, METH_VARARGS,
   "V.GetColor(int) -> vtkColor3ub\nC++: vtkColor3ub GetColor(int index)\n\nGet the color at the specified index. If the index is out of\nrange then black will be returned.\n"},
  {"GetColorRepeating", PyvtkColorSeries_GetColorRepeating, METH_VARARGS,
   "V.GetColorRepeating(int) -> vtkColor3ub\nC++: vtkColor3ub GetColorRepeating(int index)\n\nGet the color at the specified index. If the index is out of\nrange then the call wraps around, i.e. uses the mod operator.\n"},
  {"SetColor", PyvtkColorSeries_SetColor, METH_VARARGS,
   "V.SetColor(int, vtkColor3ub)\nC++: virtual void SetColor(int index, const vtkColor3ub &color)\n\nSet the color at the specified index. Does nothing if the index\nis out of range.\n"},
  {"AddColor", PyvtkColorSeries_AddColor, METH_VARARGS,
   "V.AddColor(vtkColor3ub)\nC++: virtual void AddColor(const vtkColor3ub &color)\n\nAdds the color to the end of the list.\n"},
  {"InsertColor", PyvtkColorSeries_InsertColor, METH_VARARGS,
   "V.InsertColor(int, vtkColor3ub)\nC++: virtual void InsertColor(int index, const vtkColor3ub &color)\n\nInserts the color at the specified index in the list.\n"},
  {"RemoveColor", PyvtkColorSeries_RemoveColor, METH_VARARGS,
   "V.RemoveColor(int)\nC++: virtual void RemoveColor(int index)\n\nRemoves the color at the specified index in the list.\n"},
  {"ClearColors", PyvtkColorSeries_ClearColors, METH_VARARGS,
   "V.ClearColors()\nC++: virtual void ClearColors()\n\nClears the list of colors.\n"},
  {"DeepCopy", PyvtkColorSeries_DeepCopy, METH_VARARGS,
   "V.DeepCopy(vtkColorSeries)\nC++: virtual void DeepCopy(vtkColorSeries *chartColors)\n\nMake a deep copy of the supplied object.\n"},
  {"BuildLookupTable", PyvtkColorSeries_BuildLookupTable, METH_VARARGS,
   "V.BuildLookupTable(vtkLookupTable, int)\nC++: void BuildLookupTable(vtkLookupTable *lkup,\n    int lutIndexing=vtkColorSeries::CATEGORICAL)\n\nPopulate a lookup table with all the colors in the current\nscheme.\n\n* The default behavior is to return categorical data. Set\n  lutIndexing\n* to ORDINAL to return ordinal data. Any other value for\n  lutIndexing\n* is treated as CATEGORICAL.\n"},
  {"CreateLookupTable", PyvtkColorSeries_CreateLookupTable, METH_VARARGS,
   "V.CreateLookupTable(int) -> vtkLookupTable\nC++: vtkLookupTable *CreateLookupTable(\n    int lutIndexing=vtkColorSeries::CATEGORICAL)\n\nCreate a new lookup table with all the colors in the current\nscheme.\n\n* The caller is responsible for deleting the table after use.\n\n* The default behavior is to return categorical data. Set\n  lutIndexing\n* to ORDINAL to return ordinal data. Any other value for\n  lutIndexing\n* is treated as CATEGORICAL.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkColorSeries_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonColorPython.vtkColorSeries", // tp_name
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
  PyvtkColorSeries_Doc, // tp_doc
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

static vtkObjectBase *PyvtkColorSeries_StaticNew()
{
  return vtkColorSeries::New();
}

PyObject *PyvtkColorSeries_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkColorSeries_Type, PyvtkColorSeries_Methods,
    "vtkColorSeries",
 &PyvtkColorSeries_StaticNew);

  PyTypeObject *pytype = &PyvtkColorSeries_Type;

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

  PyType_Ready(&PyvtkColorSeries_ColorSchemes_Type);
  PyvtkColorSeries_ColorSchemes_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkColorSeries_ColorSchemes_Type);

  o = (PyObject *)&PyvtkColorSeries_ColorSchemes_Type;
  if (PyDict_SetItemString(d, "ColorSchemes", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkColorSeries_LUTMode_Type);
  PyvtkColorSeries_LUTMode_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkColorSeries_LUTMode_Type);

  o = (PyObject *)&PyvtkColorSeries_LUTMode_Type;
  if (PyDict_SetItemString(d, "LUTMode", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 63; c++)
  {
    typedef vtkColorSeries::ColorSchemes cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[63] = {
        { "SPECTRUM", vtkColorSeries::SPECTRUM },
        { "WARM", vtkColorSeries::WARM },
        { "COOL", vtkColorSeries::COOL },
        { "BLUES", vtkColorSeries::BLUES },
        { "WILD_FLOWER", vtkColorSeries::WILD_FLOWER },
        { "CITRUS", vtkColorSeries::CITRUS },
        { "BREWER_DIVERGING_PURPLE_ORANGE_11", vtkColorSeries::BREWER_DIVERGING_PURPLE_ORANGE_11 },
        { "BREWER_DIVERGING_PURPLE_ORANGE_10", vtkColorSeries::BREWER_DIVERGING_PURPLE_ORANGE_10 },
        { "BREWER_DIVERGING_PURPLE_ORANGE_9", vtkColorSeries::BREWER_DIVERGING_PURPLE_ORANGE_9 },
        { "BREWER_DIVERGING_PURPLE_ORANGE_8", vtkColorSeries::BREWER_DIVERGING_PURPLE_ORANGE_8 },
        { "BREWER_DIVERGING_PURPLE_ORANGE_7", vtkColorSeries::BREWER_DIVERGING_PURPLE_ORANGE_7 },
        { "BREWER_DIVERGING_PURPLE_ORANGE_6", vtkColorSeries::BREWER_DIVERGING_PURPLE_ORANGE_6 },
        { "BREWER_DIVERGING_PURPLE_ORANGE_5", vtkColorSeries::BREWER_DIVERGING_PURPLE_ORANGE_5 },
        { "BREWER_DIVERGING_PURPLE_ORANGE_4", vtkColorSeries::BREWER_DIVERGING_PURPLE_ORANGE_4 },
        { "BREWER_DIVERGING_PURPLE_ORANGE_3", vtkColorSeries::BREWER_DIVERGING_PURPLE_ORANGE_3 },
        { "BREWER_DIVERGING_SPECTRAL_11", vtkColorSeries::BREWER_DIVERGING_SPECTRAL_11 },
        { "BREWER_DIVERGING_SPECTRAL_10", vtkColorSeries::BREWER_DIVERGING_SPECTRAL_10 },
        { "BREWER_DIVERGING_SPECTRAL_9", vtkColorSeries::BREWER_DIVERGING_SPECTRAL_9 },
        { "BREWER_DIVERGING_SPECTRAL_8", vtkColorSeries::BREWER_DIVERGING_SPECTRAL_8 },
        { "BREWER_DIVERGING_SPECTRAL_7", vtkColorSeries::BREWER_DIVERGING_SPECTRAL_7 },
        { "BREWER_DIVERGING_SPECTRAL_6", vtkColorSeries::BREWER_DIVERGING_SPECTRAL_6 },
        { "BREWER_DIVERGING_SPECTRAL_5", vtkColorSeries::BREWER_DIVERGING_SPECTRAL_5 },
        { "BREWER_DIVERGING_SPECTRAL_4", vtkColorSeries::BREWER_DIVERGING_SPECTRAL_4 },
        { "BREWER_DIVERGING_SPECTRAL_3", vtkColorSeries::BREWER_DIVERGING_SPECTRAL_3 },
        { "BREWER_DIVERGING_BROWN_BLUE_GREEN_11", vtkColorSeries::BREWER_DIVERGING_BROWN_BLUE_GREEN_11 },
        { "BREWER_DIVERGING_BROWN_BLUE_GREEN_10", vtkColorSeries::BREWER_DIVERGING_BROWN_BLUE_GREEN_10 },
        { "BREWER_DIVERGING_BROWN_BLUE_GREEN_9", vtkColorSeries::BREWER_DIVERGING_BROWN_BLUE_GREEN_9 },
        { "BREWER_DIVERGING_BROWN_BLUE_GREEN_8", vtkColorSeries::BREWER_DIVERGING_BROWN_BLUE_GREEN_8 },
        { "BREWER_DIVERGING_BROWN_BLUE_GREEN_7", vtkColorSeries::BREWER_DIVERGING_BROWN_BLUE_GREEN_7 },
        { "BREWER_DIVERGING_BROWN_BLUE_GREEN_6", vtkColorSeries::BREWER_DIVERGING_BROWN_BLUE_GREEN_6 },
        { "BREWER_DIVERGING_BROWN_BLUE_GREEN_5", vtkColorSeries::BREWER_DIVERGING_BROWN_BLUE_GREEN_5 },
        { "BREWER_DIVERGING_BROWN_BLUE_GREEN_4", vtkColorSeries::BREWER_DIVERGING_BROWN_BLUE_GREEN_4 },
        { "BREWER_DIVERGING_BROWN_BLUE_GREEN_3", vtkColorSeries::BREWER_DIVERGING_BROWN_BLUE_GREEN_3 },
        { "BREWER_SEQUENTIAL_BLUE_GREEN_9", vtkColorSeries::BREWER_SEQUENTIAL_BLUE_GREEN_9 },
        { "BREWER_SEQUENTIAL_BLUE_GREEN_8", vtkColorSeries::BREWER_SEQUENTIAL_BLUE_GREEN_8 },
        { "BREWER_SEQUENTIAL_BLUE_GREEN_7", vtkColorSeries::BREWER_SEQUENTIAL_BLUE_GREEN_7 },
        { "BREWER_SEQUENTIAL_BLUE_GREEN_6", vtkColorSeries::BREWER_SEQUENTIAL_BLUE_GREEN_6 },
        { "BREWER_SEQUENTIAL_BLUE_GREEN_5", vtkColorSeries::BREWER_SEQUENTIAL_BLUE_GREEN_5 },
        { "BREWER_SEQUENTIAL_BLUE_GREEN_4", vtkColorSeries::BREWER_SEQUENTIAL_BLUE_GREEN_4 },
        { "BREWER_SEQUENTIAL_BLUE_GREEN_3", vtkColorSeries::BREWER_SEQUENTIAL_BLUE_GREEN_3 },
        { "BREWER_SEQUENTIAL_YELLOW_ORANGE_BROWN_9", vtkColorSeries::BREWER_SEQUENTIAL_YELLOW_ORANGE_BROWN_9 },
        { "BREWER_SEQUENTIAL_YELLOW_ORANGE_BROWN_8", vtkColorSeries::BREWER_SEQUENTIAL_YELLOW_ORANGE_BROWN_8 },
        { "BREWER_SEQUENTIAL_YELLOW_ORANGE_BROWN_7", vtkColorSeries::BREWER_SEQUENTIAL_YELLOW_ORANGE_BROWN_7 },
        { "BREWER_SEQUENTIAL_YELLOW_ORANGE_BROWN_6", vtkColorSeries::BREWER_SEQUENTIAL_YELLOW_ORANGE_BROWN_6 },
        { "BREWER_SEQUENTIAL_YELLOW_ORANGE_BROWN_5", vtkColorSeries::BREWER_SEQUENTIAL_YELLOW_ORANGE_BROWN_5 },
        { "BREWER_SEQUENTIAL_YELLOW_ORANGE_BROWN_4", vtkColorSeries::BREWER_SEQUENTIAL_YELLOW_ORANGE_BROWN_4 },
        { "BREWER_SEQUENTIAL_YELLOW_ORANGE_BROWN_3", vtkColorSeries::BREWER_SEQUENTIAL_YELLOW_ORANGE_BROWN_3 },
        { "BREWER_SEQUENTIAL_BLUE_PURPLE_9", vtkColorSeries::BREWER_SEQUENTIAL_BLUE_PURPLE_9 },
        { "BREWER_SEQUENTIAL_BLUE_PURPLE_8", vtkColorSeries::BREWER_SEQUENTIAL_BLUE_PURPLE_8 },
        { "BREWER_SEQUENTIAL_BLUE_PURPLE_7", vtkColorSeries::BREWER_SEQUENTIAL_BLUE_PURPLE_7 },
        { "BREWER_SEQUENTIAL_BLUE_PURPLE_6", vtkColorSeries::BREWER_SEQUENTIAL_BLUE_PURPLE_6 },
        { "BREWER_SEQUENTIAL_BLUE_PURPLE_5", vtkColorSeries::BREWER_SEQUENTIAL_BLUE_PURPLE_5 },
        { "BREWER_SEQUENTIAL_BLUE_PURPLE_4", vtkColorSeries::BREWER_SEQUENTIAL_BLUE_PURPLE_4 },
        { "BREWER_SEQUENTIAL_BLUE_PURPLE_3", vtkColorSeries::BREWER_SEQUENTIAL_BLUE_PURPLE_3 },
        { "BREWER_QUALITATIVE_ACCENT", vtkColorSeries::BREWER_QUALITATIVE_ACCENT },
        { "BREWER_QUALITATIVE_DARK2", vtkColorSeries::BREWER_QUALITATIVE_DARK2 },
        { "BREWER_QUALITATIVE_SET2", vtkColorSeries::BREWER_QUALITATIVE_SET2 },
        { "BREWER_QUALITATIVE_PASTEL2", vtkColorSeries::BREWER_QUALITATIVE_PASTEL2 },
        { "BREWER_QUALITATIVE_PASTEL1", vtkColorSeries::BREWER_QUALITATIVE_PASTEL1 },
        { "BREWER_QUALITATIVE_SET1", vtkColorSeries::BREWER_QUALITATIVE_SET1 },
        { "BREWER_QUALITATIVE_PAIRED", vtkColorSeries::BREWER_QUALITATIVE_PAIRED },
        { "BREWER_QUALITATIVE_SET3", vtkColorSeries::BREWER_QUALITATIVE_SET3 },
        { "CUSTOM", vtkColorSeries::CUSTOM },
      };

    o = PyvtkColorSeries_ColorSchemes_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 2; c++)
  {
    typedef vtkColorSeries::LUTMode cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[2] = {
        { "ORDINAL", vtkColorSeries::ORDINAL },
        { "CATEGORICAL", vtkColorSeries::CATEGORICAL },
      };

    o = PyvtkColorSeries_LUTMode_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkColorSeries(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkColorSeries_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkColorSeries", o) != 0)
  {
    Py_DECREF(o);
  }

}

