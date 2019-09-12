// python wrapper for vtkAffineRepresentation
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
#include "vtkAffineRepresentation.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkAffineRepresentation(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkAffineRepresentation_ClassNew(); }

#ifndef DECLARED_PyvtkWidgetRepresentation_ClassNew
extern "C" { PyObject *PyvtkWidgetRepresentation_ClassNew(); }
#define DECLARED_PyvtkWidgetRepresentation_ClassNew
#endif

static const char *PyvtkAffineRepresentation_Doc =
  "vtkAffineRepresentation - abstract class for representing affine\ntransformation widgets\n\n"
  "Superclass: vtkWidgetRepresentation\n\n"
  "This class defines an API for affine transformation widget\n"
  "representations. These representations interact with vtkAffineWidget.\n"
  "The basic functionality of the affine representation is to maintain a\n"
  "transformation matrix.\n\n"
  "This class may be subclassed so that alternative representations can\n"
  "be created.  The class defines an API and a default implementation\n"
  "that the vtkAffineWidget interacts with to render itself in the\n"
  "scene.\n\n"
  "@warning\n"
  "The separation of the widget event handling and representation\n"
  "enables users and developers to create new appearances for the\n"
  "widget. It also facilitates parallel processing, where the client\n"
  "application handles events, and remote representations of the widget\n"
  "are slaves to the client (and do not handle events).\n\n"
  "@sa\n"
  "vtkAffineWidget vtkWidgetRepresentation vtkAbstractWidget\n\n";

static PyTypeObject PyvtkAffineRepresentation__InteractionState_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInteractionWidgetsPython.vtkAffineRepresentation._InteractionState", // tp_name
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

PyObject *PyvtkAffineRepresentation__InteractionState_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkAffineRepresentation__InteractionState_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkAffineRepresentation__InteractionState_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkAffineRepresentation_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkAffineRepresentation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAffineRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAffineRepresentation *op = static_cast<vtkAffineRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAffineRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAffineRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkAffineRepresentation *tempr = vtkAffineRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAffineRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAffineRepresentation *op = static_cast<vtkAffineRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAffineRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAffineRepresentation::NewInstance());

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
PyvtkAffineRepresentation_GetTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAffineRepresentation *op = static_cast<vtkAffineRepresentation *>(vp);

  vtkTransform *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTransform"))
  {
    op->GetTransform(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAffineRepresentation_SetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAffineRepresentation *op = static_cast<vtkAffineRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTolerance(temp0);
    }
    else
    {
      op->vtkAffineRepresentation::SetTolerance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAffineRepresentation_GetToleranceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetToleranceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAffineRepresentation *op = static_cast<vtkAffineRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetToleranceMinValue() :
      op->vtkAffineRepresentation::GetToleranceMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAffineRepresentation_GetToleranceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetToleranceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAffineRepresentation *op = static_cast<vtkAffineRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetToleranceMaxValue() :
      op->vtkAffineRepresentation::GetToleranceMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAffineRepresentation_GetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAffineRepresentation *op = static_cast<vtkAffineRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTolerance() :
      op->vtkAffineRepresentation::GetTolerance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAffineRepresentation_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAffineRepresentation *op = static_cast<vtkAffineRepresentation *>(vp);

  vtkProp *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp"))
  {
    if (ap.IsBound())
    {
      op->ShallowCopy(temp0);
    }
    else
    {
      op->vtkAffineRepresentation::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkAffineRepresentation_Methods[] = {
  {"IsTypeOf", PyvtkAffineRepresentation_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard methods for instances of this class.\n"},
  {"IsA", PyvtkAffineRepresentation_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard methods for instances of this class.\n"},
  {"SafeDownCast", PyvtkAffineRepresentation_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkAffineRepresentation\nC++: static vtkAffineRepresentation *SafeDownCast(\n    vtkObjectBase *o)\n\nStandard methods for instances of this class.\n"},
  {"NewInstance", PyvtkAffineRepresentation_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkAffineRepresentation\nC++: vtkAffineRepresentation *NewInstance()\n\nStandard methods for instances of this class.\n"},
  {"GetTransform", PyvtkAffineRepresentation_GetTransform, METH_VARARGS,
   "V.GetTransform(vtkTransform)\nC++: virtual void GetTransform(vtkTransform *t)\n\nRetrieve a linear transform characterizing the affine\ntransformation generated by this widget. This method copies its\ninternal transform into the transform provided. The transform is\nrelative to the initial placement of the representation (i.e.,\nwhen PlaceWidget() is invoked).\n"},
  {"SetTolerance", PyvtkAffineRepresentation_SetTolerance, METH_VARARGS,
   "V.SetTolerance(int)\nC++: virtual void SetTolerance(int _arg)\n\nThe tolerance representing the distance to the widget (in pixels)\nin which the cursor is considered near enough to the widget to be\nactive.\n"},
  {"GetToleranceMinValue", PyvtkAffineRepresentation_GetToleranceMinValue, METH_VARARGS,
   "V.GetToleranceMinValue() -> int\nC++: virtual int GetToleranceMinValue()\n\nThe tolerance representing the distance to the widget (in pixels)\nin which the cursor is considered near enough to the widget to be\nactive.\n"},
  {"GetToleranceMaxValue", PyvtkAffineRepresentation_GetToleranceMaxValue, METH_VARARGS,
   "V.GetToleranceMaxValue() -> int\nC++: virtual int GetToleranceMaxValue()\n\nThe tolerance representing the distance to the widget (in pixels)\nin which the cursor is considered near enough to the widget to be\nactive.\n"},
  {"GetTolerance", PyvtkAffineRepresentation_GetTolerance, METH_VARARGS,
   "V.GetTolerance() -> int\nC++: virtual int GetTolerance()\n\nThe tolerance representing the distance to the widget (in pixels)\nin which the cursor is considered near enough to the widget to be\nactive.\n"},
  {"ShallowCopy", PyvtkAffineRepresentation_ShallowCopy, METH_VARARGS,
   "V.ShallowCopy(vtkProp)\nC++: void ShallowCopy(vtkProp *prop) override;\n\nMethods to make this class properly act like a\nvtkWidgetRepresentation.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkAffineRepresentation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInteractionWidgetsPython.vtkAffineRepresentation", // tp_name
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
  PyvtkAffineRepresentation_Doc, // tp_doc
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

PyObject *PyvtkAffineRepresentation_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkAffineRepresentation_Type, PyvtkAffineRepresentation_Methods,
    "vtkAffineRepresentation",
 nullptr);

  PyTypeObject *pytype = &PyvtkAffineRepresentation_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkWidgetRepresentation_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkAffineRepresentation__InteractionState_Type);
  PyvtkAffineRepresentation__InteractionState_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkAffineRepresentation__InteractionState_Type);

  o = (PyObject *)&PyvtkAffineRepresentation__InteractionState_Type;
  if (PyDict_SetItemString(d, "_InteractionState", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 20; c++)
  {
    typedef vtkAffineRepresentation::_InteractionState cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[20] = {
        { "Outside", vtkAffineRepresentation::Outside },
        { "Rotate", vtkAffineRepresentation::Rotate },
        { "Translate", vtkAffineRepresentation::Translate },
        { "TranslateX", vtkAffineRepresentation::TranslateX },
        { "TranslateY", vtkAffineRepresentation::TranslateY },
        { "ScaleWEdge", vtkAffineRepresentation::ScaleWEdge },
        { "ScaleEEdge", vtkAffineRepresentation::ScaleEEdge },
        { "ScaleNEdge", vtkAffineRepresentation::ScaleNEdge },
        { "ScaleSEdge", vtkAffineRepresentation::ScaleSEdge },
        { "ScaleNE", vtkAffineRepresentation::ScaleNE },
        { "ScaleSW", vtkAffineRepresentation::ScaleSW },
        { "ScaleNW", vtkAffineRepresentation::ScaleNW },
        { "ScaleSE", vtkAffineRepresentation::ScaleSE },
        { "ShearEEdge", vtkAffineRepresentation::ShearEEdge },
        { "ShearWEdge", vtkAffineRepresentation::ShearWEdge },
        { "ShearNEdge", vtkAffineRepresentation::ShearNEdge },
        { "ShearSEdge", vtkAffineRepresentation::ShearSEdge },
        { "MoveOriginX", vtkAffineRepresentation::MoveOriginX },
        { "MoveOriginY", vtkAffineRepresentation::MoveOriginY },
        { "MoveOrigin", vtkAffineRepresentation::MoveOrigin },
      };

    o = PyvtkAffineRepresentation__InteractionState_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkAffineRepresentation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkAffineRepresentation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkAffineRepresentation", o) != 0)
  {
    Py_DECREF(o);
  }

}

