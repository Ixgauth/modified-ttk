// python wrapper for vtkResliceCursorThickLineRepresentation
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
#include "vtkResliceCursorThickLineRepresentation.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkResliceCursorThickLineRepresentation(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkResliceCursorThickLineRepresentation_ClassNew(); }

#ifndef DECLARED_PyvtkResliceCursorLineRepresentation_ClassNew
extern "C" { PyObject *PyvtkResliceCursorLineRepresentation_ClassNew(); }
#define DECLARED_PyvtkResliceCursorLineRepresentation_ClassNew
#endif

static const char *PyvtkResliceCursorThickLineRepresentation_Doc =
  "vtkResliceCursorThickLineRepresentation - represents a thick slab of\nthe reslice cursor widget\n\n"
  "Superclass: vtkResliceCursorLineRepresentation\n\n"
  "This class respresents a thick reslice cursor, that can be used to\n"
  "perform interactive thick slab MPR's through data. The class\n"
  "internally uses vtkImageSlabReslice to do its reslicing. The slab\n"
  "thickness is set interactively from the widget. The slab resolution\n"
  "(ie the number of blend points) is set as the minimum spacing along\n"
  "any dimension from the dataset.\n"
  "@sa\n"
  "vtkImageSlabReslice vtkResliceCursorLineRepresentation\n"
  "vtkResliceCursorWidget\n\n";


static PyObject *
PyvtkResliceCursorThickLineRepresentation_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkResliceCursorThickLineRepresentation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursorThickLineRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorThickLineRepresentation *op = static_cast<vtkResliceCursorThickLineRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkResliceCursorThickLineRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursorThickLineRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkResliceCursorThickLineRepresentation *tempr = vtkResliceCursorThickLineRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursorThickLineRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorThickLineRepresentation *op = static_cast<vtkResliceCursorThickLineRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkResliceCursorThickLineRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkResliceCursorThickLineRepresentation::NewInstance());

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
PyvtkResliceCursorThickLineRepresentation_CreateDefaultResliceAlgorithm(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultResliceAlgorithm");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorThickLineRepresentation *op = static_cast<vtkResliceCursorThickLineRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CreateDefaultResliceAlgorithm();
    }
    else
    {
      op->vtkResliceCursorThickLineRepresentation::CreateDefaultResliceAlgorithm();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursorThickLineRepresentation_SetResliceParameters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResliceParameters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorThickLineRepresentation *op = static_cast<vtkResliceCursorThickLineRepresentation *>(vp);

  double temp0;
  double temp1;
  int temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->SetResliceParameters(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkResliceCursorThickLineRepresentation::SetResliceParameters(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkResliceCursorThickLineRepresentation_Methods[] = {
  {"IsTypeOf", PyvtkResliceCursorThickLineRepresentation_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard VTK methods.\n"},
  {"IsA", PyvtkResliceCursorThickLineRepresentation_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard VTK methods.\n"},
  {"SafeDownCast", PyvtkResliceCursorThickLineRepresentation_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase)\n    -> vtkResliceCursorThickLineRepresentation\nC++: static vtkResliceCursorThickLineRepresentation *SafeDownCast(\n    vtkObjectBase *o)\n\nStandard VTK methods.\n"},
  {"NewInstance", PyvtkResliceCursorThickLineRepresentation_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkResliceCursorThickLineRepresentation\nC++: vtkResliceCursorThickLineRepresentation *NewInstance()\n\nStandard VTK methods.\n"},
  {"CreateDefaultResliceAlgorithm", PyvtkResliceCursorThickLineRepresentation_CreateDefaultResliceAlgorithm, METH_VARARGS,
   "V.CreateDefaultResliceAlgorithm()\nC++: void CreateDefaultResliceAlgorithm() override;\n\nINTERNAL - Do not use Create the thick reformat class. This\noverrides the superclass implementation and creates a\nvtkImageSlabReslice instead of a vtkImageReslice.\n"},
  {"SetResliceParameters", PyvtkResliceCursorThickLineRepresentation_SetResliceParameters, METH_VARARGS,
   "V.SetResliceParameters(float, float, int, int)\nC++: void SetResliceParameters(double outputSpacingX,\n    double outputSpacingY, int extentX, int extentY) override;\n\nINTERNAL - Do not use Reslice parameters which are set from\nvtkResliceCursorWidget based on user interactions.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkResliceCursorThickLineRepresentation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInteractionWidgetsPython.vtkResliceCursorThickLineRepresentation", // tp_name
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
  PyvtkResliceCursorThickLineRepresentation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkResliceCursorThickLineRepresentation_StaticNew()
{
  return vtkResliceCursorThickLineRepresentation::New();
}

PyObject *PyvtkResliceCursorThickLineRepresentation_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkResliceCursorThickLineRepresentation_Type, PyvtkResliceCursorThickLineRepresentation_Methods,
    "vtkResliceCursorThickLineRepresentation",
 &PyvtkResliceCursorThickLineRepresentation_StaticNew);

  PyTypeObject *pytype = &PyvtkResliceCursorThickLineRepresentation_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkResliceCursorLineRepresentation_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkResliceCursorThickLineRepresentation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkResliceCursorThickLineRepresentation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkResliceCursorThickLineRepresentation", o) != 0)
  {
    Py_DECREF(o);
  }

}

