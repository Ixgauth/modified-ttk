// python wrapper for vtkContourRepresentation
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
#include "vtkContourRepresentation.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkContourRepresentation(PyObject *); }

static const char *PyvtkContourRepresentationPoint_Doc =
  "vtkContourRepresentationPoint - no description provided.\n\n"

  "vtkContourRepresentationPoint()\n"
  "vtkContourRepresentationPoint(const &vtkContourRepresentationPoint)\n";

static PyMethodDef PyvtkContourRepresentationPoint_Methods[] = {
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkContourRepresentationPoint_vtkContourRepresentationPoint_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkContourRepresentationPoint");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkContourRepresentationPoint *op = new vtkContourRepresentationPoint();

    result = PyVTKSpecialObject_New("vtkContourRepresentationPoint", op);
  }

  return result;
}

static PyObject *
PyvtkContourRepresentationPoint_vtkContourRepresentationPoint_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkContourRepresentationPoint");

  vtkContourRepresentationPoint *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkContourRepresentationPoint"))
  {
    vtkContourRepresentationPoint *op = new vtkContourRepresentationPoint(*temp0);

    result = PyVTKSpecialObject_New("vtkContourRepresentationPoint", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkContourRepresentationPoint_vtkContourRepresentationPoint_Methods[] = {
  {nullptr, PyvtkContourRepresentationPoint_vtkContourRepresentationPoint_s2, METH_VARARGS,
   "@W vtkContourRepresentationPoint"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkContourRepresentationPoint_vtkContourRepresentationPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkContourRepresentationPoint_vtkContourRepresentationPoint_s1(self, args);
    case 1:
      return PyvtkContourRepresentationPoint_vtkContourRepresentationPoint_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkContourRepresentationPoint");
  return nullptr;
}


static PyObject *
PyvtkContourRepresentationPoint_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkContourRepresentationPoint_vtkContourRepresentationPoint(nullptr, args);
}

static void PyvtkContourRepresentationPoint_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkContourRepresentationPoint *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkContourRepresentationPoint_Hash(PyObject *self)
{
#if PY_VERSION_HEX >= 0x020600B2
  return PyObject_HashNotImplemented(self);
#else
  char text[256];
  sprintf(text, "unhashable type: '%s'", Py_TYPE(self)->tp_name);
  PyErr_SetString(PyExc_TypeError, text);
  return -1;
#endif
}

static PyTypeObject PyvtkContourRepresentationPoint_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInteractionWidgetsPython.vtkContourRepresentationPoint", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkContourRepresentationPoint_Delete, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkContourRepresentationPoint_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkContourRepresentationPoint_Doc, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  nullptr, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  PyvtkContourRepresentationPoint_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkContourRepresentationPoint_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkContourRepresentationPoint(*static_cast<const vtkContourRepresentationPoint*>(obj));
  }
  return 0;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkContourRepresentationPoint_TypeNew(); }

PyObject *PyvtkContourRepresentationPoint_TypeNew()
{
  PyVTKSpecialType_Add(
    &PyvtkContourRepresentationPoint_Type,
    PyvtkContourRepresentationPoint_Methods,
    PyvtkContourRepresentationPoint_vtkContourRepresentationPoint_Methods,
    &PyvtkContourRepresentationPoint_CCopy);

  PyTypeObject *pytype = &PyvtkContourRepresentationPoint_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}


static const char *PyvtkContourRepresentationNode_Doc =
  "vtkContourRepresentationNode - no description provided.\n\n"

  "vtkContourRepresentationNode()\n"
  "vtkContourRepresentationNode(const &vtkContourRepresentationNode)\n";

static PyMethodDef PyvtkContourRepresentationNode_Methods[] = {
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkContourRepresentationNode_vtkContourRepresentationNode_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkContourRepresentationNode");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkContourRepresentationNode *op = new vtkContourRepresentationNode();

    result = PyVTKSpecialObject_New("vtkContourRepresentationNode", op);
  }

  return result;
}

static PyObject *
PyvtkContourRepresentationNode_vtkContourRepresentationNode_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkContourRepresentationNode");

  vtkContourRepresentationNode *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkContourRepresentationNode"))
  {
    vtkContourRepresentationNode *op = new vtkContourRepresentationNode(*temp0);

    result = PyVTKSpecialObject_New("vtkContourRepresentationNode", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkContourRepresentationNode_vtkContourRepresentationNode_Methods[] = {
  {nullptr, PyvtkContourRepresentationNode_vtkContourRepresentationNode_s2, METH_VARARGS,
   "@W vtkContourRepresentationNode"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkContourRepresentationNode_vtkContourRepresentationNode(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkContourRepresentationNode_vtkContourRepresentationNode_s1(self, args);
    case 1:
      return PyvtkContourRepresentationNode_vtkContourRepresentationNode_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkContourRepresentationNode");
  return nullptr;
}


static PyObject *
PyvtkContourRepresentationNode_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkContourRepresentationNode_vtkContourRepresentationNode(nullptr, args);
}

static void PyvtkContourRepresentationNode_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkContourRepresentationNode *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkContourRepresentationNode_Hash(PyObject *self)
{
#if PY_VERSION_HEX >= 0x020600B2
  return PyObject_HashNotImplemented(self);
#else
  char text[256];
  sprintf(text, "unhashable type: '%s'", Py_TYPE(self)->tp_name);
  PyErr_SetString(PyExc_TypeError, text);
  return -1;
#endif
}

static PyTypeObject PyvtkContourRepresentationNode_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInteractionWidgetsPython.vtkContourRepresentationNode", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkContourRepresentationNode_Delete, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkContourRepresentationNode_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkContourRepresentationNode_Doc, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  nullptr, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  PyvtkContourRepresentationNode_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkContourRepresentationNode_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkContourRepresentationNode(*static_cast<const vtkContourRepresentationNode*>(obj));
  }
  return 0;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkContourRepresentationNode_TypeNew(); }

PyObject *PyvtkContourRepresentationNode_TypeNew()
{
  PyVTKSpecialType_Add(
    &PyvtkContourRepresentationNode_Type,
    PyvtkContourRepresentationNode_Methods,
    PyvtkContourRepresentationNode_vtkContourRepresentationNode_Methods,
    &PyvtkContourRepresentationNode_CCopy);

  PyTypeObject *pytype = &PyvtkContourRepresentationNode_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}


static const char *PyvtkContourRepresentationInternals_Doc =
  "vtkContourRepresentationInternals - no description provided.\n\n"

  "vtkContourRepresentationInternals()\n"
  "vtkContourRepresentationInternals(\n    const &vtkContourRepresentationInternals)\n";


static PyObject *
PyvtkContourRepresentationInternals_ClearNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearNodes");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkContourRepresentationInternals *op = static_cast<vtkContourRepresentationInternals *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    op->ClearNodes();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkContourRepresentationInternals_Methods[] = {
  {"ClearNodes", PyvtkContourRepresentationInternals_ClearNodes, METH_VARARGS,
   "V.ClearNodes()\nC++: void ClearNodes()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkContourRepresentationInternals_vtkContourRepresentationInternals_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkContourRepresentationInternals");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkContourRepresentationInternals *op = new vtkContourRepresentationInternals();

    result = PyVTKSpecialObject_New("vtkContourRepresentationInternals", op);
  }

  return result;
}

static PyObject *
PyvtkContourRepresentationInternals_vtkContourRepresentationInternals_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkContourRepresentationInternals");

  vtkContourRepresentationInternals *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkContourRepresentationInternals"))
  {
    vtkContourRepresentationInternals *op = new vtkContourRepresentationInternals(*temp0);

    result = PyVTKSpecialObject_New("vtkContourRepresentationInternals", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkContourRepresentationInternals_vtkContourRepresentationInternals_Methods[] = {
  {nullptr, PyvtkContourRepresentationInternals_vtkContourRepresentationInternals_s2, METH_VARARGS,
   "@W vtkContourRepresentationInternals"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkContourRepresentationInternals_vtkContourRepresentationInternals(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkContourRepresentationInternals_vtkContourRepresentationInternals_s1(self, args);
    case 1:
      return PyvtkContourRepresentationInternals_vtkContourRepresentationInternals_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkContourRepresentationInternals");
  return nullptr;
}


static PyObject *
PyvtkContourRepresentationInternals_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkContourRepresentationInternals_vtkContourRepresentationInternals(nullptr, args);
}

static void PyvtkContourRepresentationInternals_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkContourRepresentationInternals *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkContourRepresentationInternals_Hash(PyObject *self)
{
#if PY_VERSION_HEX >= 0x020600B2
  return PyObject_HashNotImplemented(self);
#else
  char text[256];
  sprintf(text, "unhashable type: '%s'", Py_TYPE(self)->tp_name);
  PyErr_SetString(PyExc_TypeError, text);
  return -1;
#endif
}

static PyTypeObject PyvtkContourRepresentationInternals_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInteractionWidgetsPython.vtkContourRepresentationInternals", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkContourRepresentationInternals_Delete, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkContourRepresentationInternals_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkContourRepresentationInternals_Doc, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  nullptr, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  PyvtkContourRepresentationInternals_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkContourRepresentationInternals_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkContourRepresentationInternals(*static_cast<const vtkContourRepresentationInternals*>(obj));
  }
  return 0;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkContourRepresentationInternals_TypeNew(); }

PyObject *PyvtkContourRepresentationInternals_TypeNew()
{
  PyVTKSpecialType_Add(
    &PyvtkContourRepresentationInternals_Type,
    PyvtkContourRepresentationInternals_Methods,
    PyvtkContourRepresentationInternals_vtkContourRepresentationInternals_Methods,
    &PyvtkContourRepresentationInternals_CCopy);

  PyTypeObject *pytype = &PyvtkContourRepresentationInternals_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkContourRepresentation_ClassNew(); }

#ifndef DECLARED_PyvtkWidgetRepresentation_ClassNew
extern "C" { PyObject *PyvtkWidgetRepresentation_ClassNew(); }
#define DECLARED_PyvtkWidgetRepresentation_ClassNew
#endif

static const char *PyvtkContourRepresentation_Doc =
  "vtkContourRepresentation - represent the vtkContourWidget\n\n"
  "Superclass: vtkWidgetRepresentation\n\n"
  "The vtkContourRepresentation is a superclass for various types of\n"
  "representations for vtkContourWidget.\n\n"
  "@par Managing contour points: The classes\n"
  "vtkContourRepresentationNode, vtkContourRepresentationInternals, and\n"
  "vtkContourRepresentationPoint manage the data structure used to\n"
  "represent nodes and points on a contour. A contour may contain\n"
  "several nodes and several additional points. Nodes are usually the\n"
  "result of user-clicked points on the contour. Additional points are\n"
  "created between nodes to generate a smooth curve using some\n"
  "Interpolator -- see the method SetLineInterpolator.\n\n"
  "@par Managing contour points:\\par The data structure stores both the\n"
  "world and display positions for every point. (This may seem like a\n"
  "duplication.) The default behaviour of this class is to use the\n"
  "WorldPosition to do all the math. Typically a point is added at a\n"
  "given display position. Its corresponding world position is computed\n"
  "using the point placer, and stored. Any query of the display position\n"
  "of a stored point is done via the Renderer, which computes the\n"
  "display position given a world position.\n\n"
  "@par Managing contour points:\\par So why maintain the display\n"
  "position? Consider drawing a contour on a volume widget. You might\n"
  "want the contour to be located at a certain world position in the\n"
  "volume or you might want to be overlaid over the window like an\n"
  "Actor2D. The default behaviour of this class is to provide the former\n"
  "behaviour.\n\n"
  "@par Managing contour points:\\par To achieve the latter behaviour,\n"
  "override the methods that return the display position (to return the\n"
  "set display position instead of computing it from the world\n"
  "positions) and the method BuildLines() to interpolate lines using\n"
  "their display positions instead of world positions.\n\n"
  "@sa\n"
  "vtkContourWidget\n\n";


static PyObject *
PyvtkContourRepresentation_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkContourRepresentation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContourRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkContourRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContourRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkContourRepresentation *tempr = vtkContourRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContourRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkContourRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkContourRepresentation::NewInstance());

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
PyvtkContourRepresentation_AddNodeAtWorldPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddNodeAtWorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    int tempr = (ap.IsBound() ?
      op->AddNodeAtWorldPosition(temp0, temp1, temp2) :
      op->vtkContourRepresentation::AddNodeAtWorldPosition(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkContourRepresentation_AddNodeAtWorldPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddNodeAtWorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->AddNodeAtWorldPosition(temp0) :
      op->vtkContourRepresentation::AddNodeAtWorldPosition(temp0));

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkContourRepresentation_AddNodeAtWorldPosition_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddNodeAtWorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  const size_t size1 = 9;
  double temp1[9];
  double save1[9];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp0, save0, size0);
    ap.Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->AddNodeAtWorldPosition(temp0, temp1) :
      op->vtkContourRepresentation::AddNodeAtWorldPosition(temp0, temp1));

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

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
PyvtkContourRepresentation_AddNodeAtWorldPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkContourRepresentation_AddNodeAtWorldPosition_s1(self, args);
    case 1:
      return PyvtkContourRepresentation_AddNodeAtWorldPosition_s2(self, args);
    case 2:
      return PyvtkContourRepresentation_AddNodeAtWorldPosition_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "AddNodeAtWorldPosition");
  return nullptr;
}



static PyObject *
PyvtkContourRepresentation_AddNodeAtDisplayPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddNodeAtDisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  double save0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->AddNodeAtDisplayPosition(temp0) :
      op->vtkContourRepresentation::AddNodeAtDisplayPosition(temp0));

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkContourRepresentation_AddNodeAtDisplayPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddNodeAtDisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  const size_t size0 = 2;
  int temp0[2];
  int save0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->AddNodeAtDisplayPosition(temp0) :
      op->vtkContourRepresentation::AddNodeAtDisplayPosition(temp0));

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkContourRepresentation_AddNodeAtDisplayPosition_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddNodeAtDisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->AddNodeAtDisplayPosition(temp0, temp1) :
      op->vtkContourRepresentation::AddNodeAtDisplayPosition(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkContourRepresentation_AddNodeAtDisplayPosition_Methods[] = {
  {nullptr, PyvtkContourRepresentation_AddNodeAtDisplayPosition_s1, METH_VARARGS,
   "@P *d"},
  {nullptr, PyvtkContourRepresentation_AddNodeAtDisplayPosition_s2, METH_VARARGS,
   "@P *i"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkContourRepresentation_AddNodeAtDisplayPosition(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkContourRepresentation_AddNodeAtDisplayPosition_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkContourRepresentation_AddNodeAtDisplayPosition_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "AddNodeAtDisplayPosition");
  return nullptr;
}



static PyObject *
PyvtkContourRepresentation_ActivateNode_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ActivateNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  double save0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->ActivateNode(temp0) :
      op->vtkContourRepresentation::ActivateNode(temp0));

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkContourRepresentation_ActivateNode_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ActivateNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  const size_t size0 = 2;
  int temp0[2];
  int save0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->ActivateNode(temp0) :
      op->vtkContourRepresentation::ActivateNode(temp0));

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkContourRepresentation_ActivateNode_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ActivateNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->ActivateNode(temp0, temp1) :
      op->vtkContourRepresentation::ActivateNode(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkContourRepresentation_ActivateNode_Methods[] = {
  {nullptr, PyvtkContourRepresentation_ActivateNode_s1, METH_VARARGS,
   "@P *d"},
  {nullptr, PyvtkContourRepresentation_ActivateNode_s2, METH_VARARGS,
   "@P *i"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkContourRepresentation_ActivateNode(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkContourRepresentation_ActivateNode_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkContourRepresentation_ActivateNode_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "ActivateNode");
  return nullptr;
}



static PyObject *
PyvtkContourRepresentation_SetActiveNodeToWorldPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActiveNodeToWorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->SetActiveNodeToWorldPosition(temp0) :
      op->vtkContourRepresentation::SetActiveNodeToWorldPosition(temp0));

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkContourRepresentation_SetActiveNodeToWorldPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActiveNodeToWorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  const size_t size1 = 9;
  double temp1[9];
  double save1[9];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp0, save0, size0);
    ap.Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->SetActiveNodeToWorldPosition(temp0, temp1) :
      op->vtkContourRepresentation::SetActiveNodeToWorldPosition(temp0, temp1));

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

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
PyvtkContourRepresentation_SetActiveNodeToWorldPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkContourRepresentation_SetActiveNodeToWorldPosition_s1(self, args);
    case 2:
      return PyvtkContourRepresentation_SetActiveNodeToWorldPosition_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetActiveNodeToWorldPosition");
  return nullptr;
}



static PyObject *
PyvtkContourRepresentation_SetActiveNodeToDisplayPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActiveNodeToDisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  double save0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->SetActiveNodeToDisplayPosition(temp0) :
      op->vtkContourRepresentation::SetActiveNodeToDisplayPosition(temp0));

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkContourRepresentation_SetActiveNodeToDisplayPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActiveNodeToDisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  const size_t size0 = 2;
  int temp0[2];
  int save0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->SetActiveNodeToDisplayPosition(temp0) :
      op->vtkContourRepresentation::SetActiveNodeToDisplayPosition(temp0));

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkContourRepresentation_SetActiveNodeToDisplayPosition_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActiveNodeToDisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->SetActiveNodeToDisplayPosition(temp0, temp1) :
      op->vtkContourRepresentation::SetActiveNodeToDisplayPosition(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkContourRepresentation_SetActiveNodeToDisplayPosition_Methods[] = {
  {nullptr, PyvtkContourRepresentation_SetActiveNodeToDisplayPosition_s1, METH_VARARGS,
   "@P *d"},
  {nullptr, PyvtkContourRepresentation_SetActiveNodeToDisplayPosition_s2, METH_VARARGS,
   "@P *i"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkContourRepresentation_SetActiveNodeToDisplayPosition(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkContourRepresentation_SetActiveNodeToDisplayPosition_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkContourRepresentation_SetActiveNodeToDisplayPosition_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetActiveNodeToDisplayPosition");
  return nullptr;
}



static PyObject *
PyvtkContourRepresentation_ToggleActiveNodeSelected(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ToggleActiveNodeSelected");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->ToggleActiveNodeSelected() :
      op->vtkContourRepresentation::ToggleActiveNodeSelected());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContourRepresentation_GetActiveNodeSelected(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActiveNodeSelected");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetActiveNodeSelected() :
      op->vtkContourRepresentation::GetActiveNodeSelected());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContourRepresentation_GetNthNodeSelected(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNthNodeSelected");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNthNodeSelected(temp0) :
      op->vtkContourRepresentation::GetNthNodeSelected(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContourRepresentation_SetNthNodeSelected(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNthNodeSelected");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->SetNthNodeSelected(temp0) :
      op->vtkContourRepresentation::SetNthNodeSelected(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContourRepresentation_GetActiveNodeWorldPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActiveNodeWorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->GetActiveNodeWorldPosition(temp0) :
      op->vtkContourRepresentation::GetActiveNodeWorldPosition(temp0));

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContourRepresentation_GetActiveNodeWorldOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActiveNodeWorldOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  const size_t size0 = 9;
  double temp0[9];
  double save0[9];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->GetActiveNodeWorldOrientation(temp0) :
      op->vtkContourRepresentation::GetActiveNodeWorldOrientation(temp0));

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContourRepresentation_GetActiveNodeDisplayPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActiveNodeDisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  double save0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->GetActiveNodeDisplayPosition(temp0) :
      op->vtkContourRepresentation::GetActiveNodeDisplayPosition(temp0));

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContourRepresentation_GetNumberOfNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfNodes() :
      op->vtkContourRepresentation::GetNumberOfNodes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContourRepresentation_GetNthNodeDisplayPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNthNodeDisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  int temp0;
  const size_t size1 = 2;
  double temp1[2];
  double save1[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->GetNthNodeDisplayPosition(temp0, temp1) :
      op->vtkContourRepresentation::GetNthNodeDisplayPosition(temp0, temp1));

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
PyvtkContourRepresentation_GetNthNodeWorldPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNthNodeWorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  int temp0;
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->GetNthNodeWorldPosition(temp0, temp1) :
      op->vtkContourRepresentation::GetNthNodeWorldPosition(temp0, temp1));

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
PyvtkContourRepresentation_GetNthNodeWorldOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNthNodeWorldOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  int temp0;
  const size_t size1 = 9;
  double temp1[9];
  double save1[9];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->GetNthNodeWorldOrientation(temp0, temp1) :
      op->vtkContourRepresentation::GetNthNodeWorldOrientation(temp0, temp1));

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
PyvtkContourRepresentation_SetNthNodeDisplayPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNthNodeDisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  int temp0;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    int tempr = (ap.IsBound() ?
      op->SetNthNodeDisplayPosition(temp0, temp1, temp2) :
      op->vtkContourRepresentation::SetNthNodeDisplayPosition(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkContourRepresentation_SetNthNodeDisplayPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNthNodeDisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  int temp0;
  const size_t size1 = 2;
  int temp1[2];
  int save1[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->SetNthNodeDisplayPosition(temp0, temp1) :
      op->vtkContourRepresentation::SetNthNodeDisplayPosition(temp0, temp1));

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
PyvtkContourRepresentation_SetNthNodeDisplayPosition_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNthNodeDisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  int temp0;
  const size_t size1 = 2;
  double temp1[2];
  double save1[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->SetNthNodeDisplayPosition(temp0, temp1) :
      op->vtkContourRepresentation::SetNthNodeDisplayPosition(temp0, temp1));

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

static PyMethodDef PyvtkContourRepresentation_SetNthNodeDisplayPosition_Methods[] = {
  {nullptr, PyvtkContourRepresentation_SetNthNodeDisplayPosition_s2, METH_VARARGS,
   "@iP *i"},
  {nullptr, PyvtkContourRepresentation_SetNthNodeDisplayPosition_s3, METH_VARARGS,
   "@iP *d"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkContourRepresentation_SetNthNodeDisplayPosition(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkContourRepresentation_SetNthNodeDisplayPosition_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkContourRepresentation_SetNthNodeDisplayPosition_s1(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetNthNodeDisplayPosition");
  return nullptr;
}



static PyObject *
PyvtkContourRepresentation_SetNthNodeWorldPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNthNodeWorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  int temp0;
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->SetNthNodeWorldPosition(temp0, temp1) :
      op->vtkContourRepresentation::SetNthNodeWorldPosition(temp0, temp1));

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
PyvtkContourRepresentation_SetNthNodeWorldPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNthNodeWorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  int temp0;
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  const size_t size2 = 9;
  double temp2[9];
  double save2[9];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
  {
    ap.Save(temp1, save1, size1);
    ap.Save(temp2, save2, size2);

    int tempr = (ap.IsBound() ?
      op->SetNthNodeWorldPosition(temp0, temp1, temp2) :
      op->vtkContourRepresentation::SetNthNodeWorldPosition(temp0, temp1, temp2));

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (ap.HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkContourRepresentation_SetNthNodeWorldPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkContourRepresentation_SetNthNodeWorldPosition_s1(self, args);
    case 3:
      return PyvtkContourRepresentation_SetNthNodeWorldPosition_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetNthNodeWorldPosition");
  return nullptr;
}



static PyObject *
PyvtkContourRepresentation_GetNthNodeSlope(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNthNodeSlope");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  int temp0;
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->GetNthNodeSlope(temp0, temp1) :
      op->vtkContourRepresentation::GetNthNodeSlope(temp0, temp1));

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
PyvtkContourRepresentation_GetNumberOfIntermediatePoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfIntermediatePoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfIntermediatePoints(temp0) :
      op->vtkContourRepresentation::GetNumberOfIntermediatePoints(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContourRepresentation_GetIntermediatePointWorldPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntermediatePointWorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  int temp0;
  int temp1;
  const size_t size2 = 3;
  double temp2[3];
  double save2[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2))
  {
    ap.Save(temp2, save2, size2);

    int tempr = (ap.IsBound() ?
      op->GetIntermediatePointWorldPosition(temp0, temp1, temp2) :
      op->vtkContourRepresentation::GetIntermediatePointWorldPosition(temp0, temp1, temp2));

    if (ap.HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContourRepresentation_AddIntermediatePointWorldPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddIntermediatePointWorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  int temp0;
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->AddIntermediatePointWorldPosition(temp0, temp1) :
      op->vtkContourRepresentation::AddIntermediatePointWorldPosition(temp0, temp1));

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
PyvtkContourRepresentation_AddIntermediatePointWorldPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddIntermediatePointWorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  int temp0;
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  vtkIdType temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2))
  {
    ap.Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->AddIntermediatePointWorldPosition(temp0, temp1, temp2) :
      op->vtkContourRepresentation::AddIntermediatePointWorldPosition(temp0, temp1, temp2));

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
PyvtkContourRepresentation_AddIntermediatePointWorldPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkContourRepresentation_AddIntermediatePointWorldPosition_s1(self, args);
    case 3:
      return PyvtkContourRepresentation_AddIntermediatePointWorldPosition_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "AddIntermediatePointWorldPosition");
  return nullptr;
}



static PyObject *
PyvtkContourRepresentation_DeleteLastNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeleteLastNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->DeleteLastNode() :
      op->vtkContourRepresentation::DeleteLastNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContourRepresentation_DeleteActiveNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeleteActiveNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->DeleteActiveNode() :
      op->vtkContourRepresentation::DeleteActiveNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContourRepresentation_DeleteNthNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeleteNthNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->DeleteNthNode(temp0) :
      op->vtkContourRepresentation::DeleteNthNode(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContourRepresentation_ClearAllNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearAllNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearAllNodes();
    }
    else
    {
      op->vtkContourRepresentation::ClearAllNodes();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContourRepresentation_AddNodeOnContour(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddNodeOnContour");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->AddNodeOnContour(temp0, temp1) :
      op->vtkContourRepresentation::AddNodeOnContour(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContourRepresentation_SetPixelTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPixelTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPixelTolerance(temp0);
    }
    else
    {
      op->vtkContourRepresentation::SetPixelTolerance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContourRepresentation_GetPixelToleranceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPixelToleranceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPixelToleranceMinValue() :
      op->vtkContourRepresentation::GetPixelToleranceMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContourRepresentation_GetPixelToleranceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPixelToleranceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPixelToleranceMaxValue() :
      op->vtkContourRepresentation::GetPixelToleranceMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContourRepresentation_GetPixelTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPixelTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPixelTolerance() :
      op->vtkContourRepresentation::GetPixelTolerance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContourRepresentation_SetWorldTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWorldTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetWorldTolerance(temp0);
    }
    else
    {
      op->vtkContourRepresentation::SetWorldTolerance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContourRepresentation_GetWorldToleranceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWorldToleranceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetWorldToleranceMinValue() :
      op->vtkContourRepresentation::GetWorldToleranceMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContourRepresentation_GetWorldToleranceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWorldToleranceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetWorldToleranceMaxValue() :
      op->vtkContourRepresentation::GetWorldToleranceMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContourRepresentation_GetWorldTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWorldTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetWorldTolerance() :
      op->vtkContourRepresentation::GetWorldTolerance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContourRepresentation_GetCurrentOperation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentOperation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCurrentOperation() :
      op->vtkContourRepresentation::GetCurrentOperation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContourRepresentation_SetCurrentOperation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCurrentOperation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCurrentOperation(temp0);
    }
    else
    {
      op->vtkContourRepresentation::SetCurrentOperation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContourRepresentation_GetCurrentOperationMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentOperationMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCurrentOperationMinValue() :
      op->vtkContourRepresentation::GetCurrentOperationMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContourRepresentation_GetCurrentOperationMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentOperationMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCurrentOperationMaxValue() :
      op->vtkContourRepresentation::GetCurrentOperationMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContourRepresentation_SetCurrentOperationToInactive(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCurrentOperationToInactive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCurrentOperationToInactive();
    }
    else
    {
      op->vtkContourRepresentation::SetCurrentOperationToInactive();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContourRepresentation_SetCurrentOperationToTranslate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCurrentOperationToTranslate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCurrentOperationToTranslate();
    }
    else
    {
      op->vtkContourRepresentation::SetCurrentOperationToTranslate();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContourRepresentation_SetCurrentOperationToShift(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCurrentOperationToShift");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCurrentOperationToShift();
    }
    else
    {
      op->vtkContourRepresentation::SetCurrentOperationToShift();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContourRepresentation_SetCurrentOperationToScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCurrentOperationToScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCurrentOperationToScale();
    }
    else
    {
      op->vtkContourRepresentation::SetCurrentOperationToScale();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContourRepresentation_SetPointPlacer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointPlacer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  vtkPointPlacer *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPointPlacer"))
  {
    if (ap.IsBound())
    {
      op->SetPointPlacer(temp0);
    }
    else
    {
      op->vtkContourRepresentation::SetPointPlacer(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContourRepresentation_GetPointPlacer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointPlacer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPointPlacer *tempr = (ap.IsBound() ?
      op->GetPointPlacer() :
      op->vtkContourRepresentation::GetPointPlacer());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContourRepresentation_SetLineInterpolator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLineInterpolator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  vtkContourLineInterpolator *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkContourLineInterpolator"))
  {
    if (ap.IsBound())
    {
      op->SetLineInterpolator(temp0);
    }
    else
    {
      op->vtkContourRepresentation::SetLineInterpolator(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContourRepresentation_GetLineInterpolator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLineInterpolator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkContourLineInterpolator *tempr = (ap.IsBound() ?
      op->GetLineInterpolator() :
      op->vtkContourRepresentation::GetLineInterpolator());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContourRepresentation_BuildRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    op->BuildRepresentation();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContourRepresentation_ComputeInteractionState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeInteractionState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  int temp0;
  int temp1;
  int temp2 = 0;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2, 3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    int tempr = op->ComputeInteractionState(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContourRepresentation_StartWidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartWidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  double save0[2];
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    op->StartWidgetInteraction(temp0);

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContourRepresentation_WidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  double save0[2];
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    op->WidgetInteraction(temp0);

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContourRepresentation_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  vtkWindow *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkWindow"))
  {
    op->ReleaseGraphicsResources(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContourRepresentation_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = op->RenderOverlay(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContourRepresentation_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = op->RenderOpaqueGeometry(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContourRepresentation_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = op->RenderTranslucentPolygonalGeometry(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContourRepresentation_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    int tempr = op->HasTranslucentPolygonalGeometry();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContourRepresentation_SetClosedLoop(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClosedLoop");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetClosedLoop(temp0);
    }
    else
    {
      op->vtkContourRepresentation::SetClosedLoop(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContourRepresentation_GetClosedLoop(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClosedLoop");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetClosedLoop() :
      op->vtkContourRepresentation::GetClosedLoop());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContourRepresentation_ClosedLoopOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClosedLoopOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClosedLoopOn();
    }
    else
    {
      op->vtkContourRepresentation::ClosedLoopOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContourRepresentation_ClosedLoopOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClosedLoopOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClosedLoopOff();
    }
    else
    {
      op->vtkContourRepresentation::ClosedLoopOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContourRepresentation_SetShowSelectedNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShowSelectedNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetShowSelectedNodes(temp0);
    }
    else
    {
      op->vtkContourRepresentation::SetShowSelectedNodes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContourRepresentation_GetShowSelectedNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShowSelectedNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetShowSelectedNodes() :
      op->vtkContourRepresentation::GetShowSelectedNodes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContourRepresentation_ShowSelectedNodesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShowSelectedNodesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ShowSelectedNodesOn();
    }
    else
    {
      op->vtkContourRepresentation::ShowSelectedNodesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContourRepresentation_ShowSelectedNodesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShowSelectedNodesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ShowSelectedNodesOff();
    }
    else
    {
      op->vtkContourRepresentation::ShowSelectedNodesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContourRepresentation_GetContourRepresentationAsPolyData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContourRepresentationAsPolyData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    vtkPolyData *tempr = op->GetContourRepresentationAsPolyData();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContourRepresentation_GetNodePolyData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodePolyData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  vtkPolyData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPolyData"))
  {
    if (ap.IsBound())
    {
      op->GetNodePolyData(temp0);
    }
    else
    {
      op->vtkContourRepresentation::GetNodePolyData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContourRepresentation_SetRebuildLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRebuildLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourRepresentation *op = static_cast<vtkContourRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRebuildLocator(temp0);
    }
    else
    {
      op->vtkContourRepresentation::SetRebuildLocator(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkContourRepresentation_Methods[] = {
  {"IsTypeOf", PyvtkContourRepresentation_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard VTK methods.\n"},
  {"IsA", PyvtkContourRepresentation_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard VTK methods.\n"},
  {"SafeDownCast", PyvtkContourRepresentation_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkContourRepresentation\nC++: static vtkContourRepresentation *SafeDownCast(\n    vtkObjectBase *o)\n\nStandard VTK methods.\n"},
  {"NewInstance", PyvtkContourRepresentation_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkContourRepresentation\nC++: vtkContourRepresentation *NewInstance()\n\nStandard VTK methods.\n"},
  {"AddNodeAtWorldPosition", PyvtkContourRepresentation_AddNodeAtWorldPosition, METH_VARARGS,
   "V.AddNodeAtWorldPosition(float, float, float) -> int\nC++: virtual int AddNodeAtWorldPosition(double x, double y,\n    double z)\nV.AddNodeAtWorldPosition([float, float, float]) -> int\nC++: virtual int AddNodeAtWorldPosition(double worldPos[3])\nV.AddNodeAtWorldPosition([float, float, float], [float, float,\n    float, float, float, float, float, float, float]) -> int\nC++: virtual int AddNodeAtWorldPosition(double worldPos[3],\n    double worldOrient[9])\n\nAdd a node at a specific world position. Returns 0 if the node\ncould not be added, 1 otherwise.\n"},
  {"AddNodeAtDisplayPosition", PyvtkContourRepresentation_AddNodeAtDisplayPosition, METH_VARARGS,
   "V.AddNodeAtDisplayPosition([float, float]) -> int\nC++: virtual int AddNodeAtDisplayPosition(double displayPos[2])\nV.AddNodeAtDisplayPosition([int, int]) -> int\nC++: virtual int AddNodeAtDisplayPosition(int displayPos[2])\nV.AddNodeAtDisplayPosition(int, int) -> int\nC++: virtual int AddNodeAtDisplayPosition(int X, int Y)\n\nAdd a node at a specific display position. This will be converted\ninto a world position according to the current constraints of the\npoint placer. Return 0 if a point could not be added, 1\notherwise.\n"},
  {"ActivateNode", PyvtkContourRepresentation_ActivateNode, METH_VARARGS,
   "V.ActivateNode([float, float]) -> int\nC++: virtual int ActivateNode(double displayPos[2])\nV.ActivateNode([int, int]) -> int\nC++: virtual int ActivateNode(int displayPos[2])\nV.ActivateNode(int, int) -> int\nC++: virtual int ActivateNode(int X, int Y)\n\nGiven a display position, activate a node. The closest node\nwithin tolerance will be activated. If a node is activated, 1\nwill be returned, otherwise 0 will be returned.\n"},
  {"SetActiveNodeToWorldPosition", PyvtkContourRepresentation_SetActiveNodeToWorldPosition, METH_VARARGS,
   "V.SetActiveNodeToWorldPosition([float, float, float]) -> int\nC++: virtual int SetActiveNodeToWorldPosition(double pos[3])\nV.SetActiveNodeToWorldPosition([float, float, float], [float,\n    float, float, float, float, float, float, float, float])\n    -> int\nC++: virtual int SetActiveNodeToWorldPosition(double pos[3],\n    double orient[9])\n\nMove the active node to a specified world position. Will return 0\nif there is no active node or the node could not be moved to that\nposition. 1 will be returned on success.\n"},
  {"SetActiveNodeToDisplayPosition", PyvtkContourRepresentation_SetActiveNodeToDisplayPosition, METH_VARARGS,
   "V.SetActiveNodeToDisplayPosition([float, float]) -> int\nC++: virtual int SetActiveNodeToDisplayPosition(double pos[2])\nV.SetActiveNodeToDisplayPosition([int, int]) -> int\nC++: virtual int SetActiveNodeToDisplayPosition(int pos[2])\nV.SetActiveNodeToDisplayPosition(int, int) -> int\nC++: virtual int SetActiveNodeToDisplayPosition(int X, int Y)\n\nMove the active node based on a specified display position. The\ndisplay position will be converted into a world position. If the\nnew position is not valid or there is no active node, a 0 will be\nreturned. Otherwise, on success a 1 will be returned.\n"},
  {"ToggleActiveNodeSelected", PyvtkContourRepresentation_ToggleActiveNodeSelected, METH_VARARGS,
   "V.ToggleActiveNodeSelected() -> int\nC++: virtual int ToggleActiveNodeSelected()\n\nSet/Get whether the active or nth node is selected.\n"},
  {"GetActiveNodeSelected", PyvtkContourRepresentation_GetActiveNodeSelected, METH_VARARGS,
   "V.GetActiveNodeSelected() -> int\nC++: virtual int GetActiveNodeSelected()\n\nSet/Get whether the active or nth node is selected.\n"},
  {"GetNthNodeSelected", PyvtkContourRepresentation_GetNthNodeSelected, METH_VARARGS,
   "V.GetNthNodeSelected(int) -> int\nC++: virtual int GetNthNodeSelected(int)\n\nSet/Get whether the active or nth node is selected.\n"},
  {"SetNthNodeSelected", PyvtkContourRepresentation_SetNthNodeSelected, METH_VARARGS,
   "V.SetNthNodeSelected(int) -> int\nC++: virtual int SetNthNodeSelected(int)\n\nSet/Get whether the active or nth node is selected.\n"},
  {"GetActiveNodeWorldPosition", PyvtkContourRepresentation_GetActiveNodeWorldPosition, METH_VARARGS,
   "V.GetActiveNodeWorldPosition([float, float, float]) -> int\nC++: virtual int GetActiveNodeWorldPosition(double pos[3])\n\nGet the world position of the active node. Will return 0 if there\nis no active node, or 1 otherwise.\n"},
  {"GetActiveNodeWorldOrientation", PyvtkContourRepresentation_GetActiveNodeWorldOrientation, METH_VARARGS,
   "V.GetActiveNodeWorldOrientation([float, float, float, float,\n    float, float, float, float, float]) -> int\nC++: virtual int GetActiveNodeWorldOrientation(double orient[9])\n\nGet the world orientation of the active node. Will return 0 if\nthere is no active node, or 1 otherwise.\n"},
  {"GetActiveNodeDisplayPosition", PyvtkContourRepresentation_GetActiveNodeDisplayPosition, METH_VARARGS,
   "V.GetActiveNodeDisplayPosition([float, float]) -> int\nC++: virtual int GetActiveNodeDisplayPosition(double pos[2])\n\nGet the display position of the active node. Will return 0 if\nthere is no active node, or 1 otherwise.\n"},
  {"GetNumberOfNodes", PyvtkContourRepresentation_GetNumberOfNodes, METH_VARARGS,
   "V.GetNumberOfNodes() -> int\nC++: virtual int GetNumberOfNodes()\n\nGet the number of nodes.\n"},
  {"GetNthNodeDisplayPosition", PyvtkContourRepresentation_GetNthNodeDisplayPosition, METH_VARARGS,
   "V.GetNthNodeDisplayPosition(int, [float, float]) -> int\nC++: virtual int GetNthNodeDisplayPosition(int n, double pos[2])\n\nGet the nth node's display position. Will return 1 on success, or\n0 if there are not at least (n+1) nodes (0 based counting).\n"},
  {"GetNthNodeWorldPosition", PyvtkContourRepresentation_GetNthNodeWorldPosition, METH_VARARGS,
   "V.GetNthNodeWorldPosition(int, [float, float, float]) -> int\nC++: virtual int GetNthNodeWorldPosition(int n, double pos[3])\n\nGet the nth node's world position. Will return 1 on success, or 0\nif there are not at least (n+1) nodes (0 based counting).\n"},
  {"GetNthNodeWorldOrientation", PyvtkContourRepresentation_GetNthNodeWorldOrientation, METH_VARARGS,
   "V.GetNthNodeWorldOrientation(int, [float, float, float, float,\n    float, float, float, float, float]) -> int\nC++: virtual int GetNthNodeWorldOrientation(int n,\n    double orient[9])\n\nGet the nth node's world orientation. Will return 1 on success,\nor 0 if there are not at least (n+1) nodes (0 based counting).\n"},
  {"SetNthNodeDisplayPosition", PyvtkContourRepresentation_SetNthNodeDisplayPosition, METH_VARARGS,
   "V.SetNthNodeDisplayPosition(int, int, int) -> int\nC++: virtual int SetNthNodeDisplayPosition(int n, int X, int Y)\nV.SetNthNodeDisplayPosition(int, [int, int]) -> int\nC++: virtual int SetNthNodeDisplayPosition(int n, int pos[2])\nV.SetNthNodeDisplayPosition(int, [float, float]) -> int\nC++: virtual int SetNthNodeDisplayPosition(int n, double pos[2])\n\nSet the nth node's display position. Display position will be\nconverted into world position according to the constraints of the\npoint placer. Will return 1 on success, or 0 if there are not at\nleast (n+1) nodes (0 based counting) or the world position is not\nvalid.\n"},
  {"SetNthNodeWorldPosition", PyvtkContourRepresentation_SetNthNodeWorldPosition, METH_VARARGS,
   "V.SetNthNodeWorldPosition(int, [float, float, float]) -> int\nC++: virtual int SetNthNodeWorldPosition(int n, double pos[3])\nV.SetNthNodeWorldPosition(int, [float, float, float], [float,\n    float, float, float, float, float, float, float, float])\n    -> int\nC++: virtual int SetNthNodeWorldPosition(int n, double pos[3],\n    double orient[9])\n\nSet the nth node's world position. Will return 1 on success, or 0\nif there are not at least (n+1) nodes (0 based counting) or the\nworld position is not valid according to the point placer.\n"},
  {"GetNthNodeSlope", PyvtkContourRepresentation_GetNthNodeSlope, METH_VARARGS,
   "V.GetNthNodeSlope(int, [float, float, float]) -> int\nC++: virtual int GetNthNodeSlope(int idx, double slope[3])\n\nGet the nth node's slope. Will return 1 on success, or 0 if there\nare not at least (n+1) nodes (0 based counting).\n"},
  {"GetNumberOfIntermediatePoints", PyvtkContourRepresentation_GetNumberOfIntermediatePoints, METH_VARARGS,
   "V.GetNumberOfIntermediatePoints(int) -> int\nC++: virtual int GetNumberOfIntermediatePoints(int n)\n\nFor a given node n, get the number of intermediate points between\nthis node and the node at (n+1). If n is the last node and the\nloop is closed, this is the number of intermediate points between\nnode n and node 0. 0 is returned if n is out of range.\n"},
  {"GetIntermediatePointWorldPosition", PyvtkContourRepresentation_GetIntermediatePointWorldPosition, METH_VARARGS,
   "V.GetIntermediatePointWorldPosition(int, int, [float, float,\n    float]) -> int\nC++: virtual int GetIntermediatePointWorldPosition(int n, int idx,\n     double point[3])\n\nGet the world position of the intermediate point at index idx\nbetween nodes n and (n+1) (or n and 0 if n is the last node and\nthe loop is closed). Returns 1 on success or 0 if n or idx are\nout of range.\n"},
  {"AddIntermediatePointWorldPosition", PyvtkContourRepresentation_AddIntermediatePointWorldPosition, METH_VARARGS,
   "V.AddIntermediatePointWorldPosition(int, [float, float, float])\n    -> int\nC++: virtual int AddIntermediatePointWorldPosition(int n,\n    double point[3])\nV.AddIntermediatePointWorldPosition(int, [float, float, float],\n    int) -> int\nC++: virtual int AddIntermediatePointWorldPosition(int n,\n    double point[3], vtkIdType ptId)\n\nAdd an intermediate point between node n and n+1 (or n and 0 if n\nis the last node and the loop is closed). Returns 1 on success or\n0 if n is out of range.\n"},
  {"DeleteLastNode", PyvtkContourRepresentation_DeleteLastNode, METH_VARARGS,
   "V.DeleteLastNode() -> int\nC++: virtual int DeleteLastNode()\n\nDelete the last node. Returns 1 on success or 0 if there were not\nany nodes.\n"},
  {"DeleteActiveNode", PyvtkContourRepresentation_DeleteActiveNode, METH_VARARGS,
   "V.DeleteActiveNode() -> int\nC++: virtual int DeleteActiveNode()\n\nDelete the active node. Returns 1 on success or 0 if the active\nnode did not indicate a valid node.\n"},
  {"DeleteNthNode", PyvtkContourRepresentation_DeleteNthNode, METH_VARARGS,
   "V.DeleteNthNode(int) -> int\nC++: virtual int DeleteNthNode(int n)\n\nDelete the nth node. Return 1 on success or 0 if n is out of\nrange.\n"},
  {"ClearAllNodes", PyvtkContourRepresentation_ClearAllNodes, METH_VARARGS,
   "V.ClearAllNodes()\nC++: virtual void ClearAllNodes()\n\nDelete all nodes.\n"},
  {"AddNodeOnContour", PyvtkContourRepresentation_AddNodeOnContour, METH_VARARGS,
   "V.AddNodeOnContour(int, int) -> int\nC++: virtual int AddNodeOnContour(int X, int Y)\n\nGiven a specific X, Y pixel location, add a new node on the\ncontour at this location.\n"},
  {"SetPixelTolerance", PyvtkContourRepresentation_SetPixelTolerance, METH_VARARGS,
   "V.SetPixelTolerance(int)\nC++: virtual void SetPixelTolerance(int _arg)\n\nThe tolerance to use when calculations are performed in display\ncoordinates\n"},
  {"GetPixelToleranceMinValue", PyvtkContourRepresentation_GetPixelToleranceMinValue, METH_VARARGS,
   "V.GetPixelToleranceMinValue() -> int\nC++: virtual int GetPixelToleranceMinValue()\n\nThe tolerance to use when calculations are performed in display\ncoordinates\n"},
  {"GetPixelToleranceMaxValue", PyvtkContourRepresentation_GetPixelToleranceMaxValue, METH_VARARGS,
   "V.GetPixelToleranceMaxValue() -> int\nC++: virtual int GetPixelToleranceMaxValue()\n\nThe tolerance to use when calculations are performed in display\ncoordinates\n"},
  {"GetPixelTolerance", PyvtkContourRepresentation_GetPixelTolerance, METH_VARARGS,
   "V.GetPixelTolerance() -> int\nC++: virtual int GetPixelTolerance()\n\nThe tolerance to use when calculations are performed in display\ncoordinates\n"},
  {"SetWorldTolerance", PyvtkContourRepresentation_SetWorldTolerance, METH_VARARGS,
   "V.SetWorldTolerance(float)\nC++: virtual void SetWorldTolerance(double _arg)\n\nThe tolerance to use when calculations are performed in world\ncoordinates\n"},
  {"GetWorldToleranceMinValue", PyvtkContourRepresentation_GetWorldToleranceMinValue, METH_VARARGS,
   "V.GetWorldToleranceMinValue() -> float\nC++: virtual double GetWorldToleranceMinValue()\n\nThe tolerance to use when calculations are performed in world\ncoordinates\n"},
  {"GetWorldToleranceMaxValue", PyvtkContourRepresentation_GetWorldToleranceMaxValue, METH_VARARGS,
   "V.GetWorldToleranceMaxValue() -> float\nC++: virtual double GetWorldToleranceMaxValue()\n\nThe tolerance to use when calculations are performed in world\ncoordinates\n"},
  {"GetWorldTolerance", PyvtkContourRepresentation_GetWorldTolerance, METH_VARARGS,
   "V.GetWorldTolerance() -> float\nC++: virtual double GetWorldTolerance()\n\nThe tolerance to use when calculations are performed in world\ncoordinates\n"},
  {"GetCurrentOperation", PyvtkContourRepresentation_GetCurrentOperation, METH_VARARGS,
   "V.GetCurrentOperation() -> int\nC++: virtual int GetCurrentOperation()\n\nSet / get the current operation. The widget is either inactive,\nor it is being translated.\n"},
  {"SetCurrentOperation", PyvtkContourRepresentation_SetCurrentOperation, METH_VARARGS,
   "V.SetCurrentOperation(int)\nC++: virtual void SetCurrentOperation(int _arg)\n\nSet / get the current operation. The widget is either inactive,\nor it is being translated.\n"},
  {"GetCurrentOperationMinValue", PyvtkContourRepresentation_GetCurrentOperationMinValue, METH_VARARGS,
   "V.GetCurrentOperationMinValue() -> int\nC++: virtual int GetCurrentOperationMinValue()\n\nSet / get the current operation. The widget is either inactive,\nor it is being translated.\n"},
  {"GetCurrentOperationMaxValue", PyvtkContourRepresentation_GetCurrentOperationMaxValue, METH_VARARGS,
   "V.GetCurrentOperationMaxValue() -> int\nC++: virtual int GetCurrentOperationMaxValue()\n\nSet / get the current operation. The widget is either inactive,\nor it is being translated.\n"},
  {"SetCurrentOperationToInactive", PyvtkContourRepresentation_SetCurrentOperationToInactive, METH_VARARGS,
   "V.SetCurrentOperationToInactive()\nC++: void SetCurrentOperationToInactive()\n\nSet / get the current operation. The widget is either inactive,\nor it is being translated.\n"},
  {"SetCurrentOperationToTranslate", PyvtkContourRepresentation_SetCurrentOperationToTranslate, METH_VARARGS,
   "V.SetCurrentOperationToTranslate()\nC++: void SetCurrentOperationToTranslate()\n\nSet / get the current operation. The widget is either inactive,\nor it is being translated.\n"},
  {"SetCurrentOperationToShift", PyvtkContourRepresentation_SetCurrentOperationToShift, METH_VARARGS,
   "V.SetCurrentOperationToShift()\nC++: void SetCurrentOperationToShift()\n\nSet / get the current operation. The widget is either inactive,\nor it is being translated.\n"},
  {"SetCurrentOperationToScale", PyvtkContourRepresentation_SetCurrentOperationToScale, METH_VARARGS,
   "V.SetCurrentOperationToScale()\nC++: void SetCurrentOperationToScale()\n\nSet / get the current operation. The widget is either inactive,\nor it is being translated.\n"},
  {"SetPointPlacer", PyvtkContourRepresentation_SetPointPlacer, METH_VARARGS,
   "V.SetPointPlacer(vtkPointPlacer)\nC++: void SetPointPlacer(vtkPointPlacer *)\n\nSet / get the Point Placer. The point placer is responsible for\nconverting display coordinates into world coordinates according\nto some constraints, and for validating world positions.\n"},
  {"GetPointPlacer", PyvtkContourRepresentation_GetPointPlacer, METH_VARARGS,
   "V.GetPointPlacer() -> vtkPointPlacer\nC++: virtual vtkPointPlacer *GetPointPlacer()\n\nSet / get the Point Placer. The point placer is responsible for\nconverting display coordinates into world coordinates according\nto some constraints, and for validating world positions.\n"},
  {"SetLineInterpolator", PyvtkContourRepresentation_SetLineInterpolator, METH_VARARGS,
   "V.SetLineInterpolator(vtkContourLineInterpolator)\nC++: void SetLineInterpolator(vtkContourLineInterpolator *)\n\nSet / Get the Line Interpolator. The line interpolator is\nresponsible for generating the line segments connecting nodes.\n"},
  {"GetLineInterpolator", PyvtkContourRepresentation_GetLineInterpolator, METH_VARARGS,
   "V.GetLineInterpolator() -> vtkContourLineInterpolator\nC++: virtual vtkContourLineInterpolator *GetLineInterpolator()\n\nSet / Get the Line Interpolator. The line interpolator is\nresponsible for generating the line segments connecting nodes.\n"},
  {"BuildRepresentation", PyvtkContourRepresentation_BuildRepresentation, METH_VARARGS,
   "V.BuildRepresentation()\nC++: void BuildRepresentation() override = 0;\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\n"},
  {"ComputeInteractionState", PyvtkContourRepresentation_ComputeInteractionState, METH_VARARGS,
   "V.ComputeInteractionState(int, int, int) -> int\nC++: int ComputeInteractionState(int X, int Y, int modified=0)\n    override = 0;\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\n"},
  {"StartWidgetInteraction", PyvtkContourRepresentation_StartWidgetInteraction, METH_VARARGS,
   "V.StartWidgetInteraction([float, float])\nC++: void StartWidgetInteraction(double e[2]) override = 0;\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\n"},
  {"WidgetInteraction", PyvtkContourRepresentation_WidgetInteraction, METH_VARARGS,
   "V.WidgetInteraction([float, float])\nC++: void WidgetInteraction(double e[2]) override = 0;\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\n"},
  {"ReleaseGraphicsResources", PyvtkContourRepresentation_ReleaseGraphicsResources, METH_VARARGS,
   "V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *w) override = 0;\n\nMethods required by vtkProp superclass.\n"},
  {"RenderOverlay", PyvtkContourRepresentation_RenderOverlay, METH_VARARGS,
   "V.RenderOverlay(vtkViewport) -> int\nC++: int RenderOverlay(vtkViewport *viewport) override = 0;\n\nMethods required by vtkProp superclass.\n"},
  {"RenderOpaqueGeometry", PyvtkContourRepresentation_RenderOpaqueGeometry, METH_VARARGS,
   "V.RenderOpaqueGeometry(vtkViewport) -> int\nC++: int RenderOpaqueGeometry(vtkViewport *viewport) override = 0;\n\nMethods required by vtkProp superclass.\n"},
  {"RenderTranslucentPolygonalGeometry", PyvtkContourRepresentation_RenderTranslucentPolygonalGeometry, METH_VARARGS,
   "V.RenderTranslucentPolygonalGeometry(vtkViewport) -> int\nC++: int RenderTranslucentPolygonalGeometry(vtkViewport *viewport)\n     override = 0;\n\nMethods required by vtkProp superclass.\n"},
  {"HasTranslucentPolygonalGeometry", PyvtkContourRepresentation_HasTranslucentPolygonalGeometry, METH_VARARGS,
   "V.HasTranslucentPolygonalGeometry() -> int\nC++: int HasTranslucentPolygonalGeometry() override = 0;\n\nMethods required by vtkProp superclass.\n"},
  {"SetClosedLoop", PyvtkContourRepresentation_SetClosedLoop, METH_VARARGS,
   "V.SetClosedLoop(int)\nC++: void SetClosedLoop(vtkTypeBool val)\n\nSet / Get the ClosedLoop value. This ivar indicates whether the\ncontour forms a closed loop.\n"},
  {"GetClosedLoop", PyvtkContourRepresentation_GetClosedLoop, METH_VARARGS,
   "V.GetClosedLoop() -> int\nC++: virtual vtkTypeBool GetClosedLoop()\n\nSet / Get the ClosedLoop value. This ivar indicates whether the\ncontour forms a closed loop.\n"},
  {"ClosedLoopOn", PyvtkContourRepresentation_ClosedLoopOn, METH_VARARGS,
   "V.ClosedLoopOn()\nC++: virtual void ClosedLoopOn()\n\nSet / Get the ClosedLoop value. This ivar indicates whether the\ncontour forms a closed loop.\n"},
  {"ClosedLoopOff", PyvtkContourRepresentation_ClosedLoopOff, METH_VARARGS,
   "V.ClosedLoopOff()\nC++: virtual void ClosedLoopOff()\n\nSet / Get the ClosedLoop value. This ivar indicates whether the\ncontour forms a closed loop.\n"},
  {"SetShowSelectedNodes", PyvtkContourRepresentation_SetShowSelectedNodes, METH_VARARGS,
   "V.SetShowSelectedNodes(int)\nC++: virtual void SetShowSelectedNodes(vtkTypeBool)\n\nA flag to indicate whether to show the Selected nodes Default is\nto set it to false.\n"},
  {"GetShowSelectedNodes", PyvtkContourRepresentation_GetShowSelectedNodes, METH_VARARGS,
   "V.GetShowSelectedNodes() -> int\nC++: virtual vtkTypeBool GetShowSelectedNodes()\n\nA flag to indicate whether to show the Selected nodes Default is\nto set it to false.\n"},
  {"ShowSelectedNodesOn", PyvtkContourRepresentation_ShowSelectedNodesOn, METH_VARARGS,
   "V.ShowSelectedNodesOn()\nC++: virtual void ShowSelectedNodesOn()\n\nA flag to indicate whether to show the Selected nodes Default is\nto set it to false.\n"},
  {"ShowSelectedNodesOff", PyvtkContourRepresentation_ShowSelectedNodesOff, METH_VARARGS,
   "V.ShowSelectedNodesOff()\nC++: virtual void ShowSelectedNodesOff()\n\nA flag to indicate whether to show the Selected nodes Default is\nto set it to false.\n"},
  {"GetContourRepresentationAsPolyData", PyvtkContourRepresentation_GetContourRepresentationAsPolyData, METH_VARARGS,
   "V.GetContourRepresentationAsPolyData() -> vtkPolyData\nC++: virtual vtkPolyData *GetContourRepresentationAsPolyData()\n\nGet the points in this contour as a vtkPolyData.\n"},
  {"GetNodePolyData", PyvtkContourRepresentation_GetNodePolyData, METH_VARARGS,
   "V.GetNodePolyData(vtkPolyData)\nC++: void GetNodePolyData(vtkPolyData *poly)\n\nGet the nodes and not the intermediate points in this contour as\na vtkPolyData.\n"},
  {"SetRebuildLocator", PyvtkContourRepresentation_SetRebuildLocator, METH_VARARGS,
   "V.SetRebuildLocator(bool)\nC++: virtual void SetRebuildLocator(bool _arg)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkContourRepresentation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInteractionWidgetsPython.vtkContourRepresentation", // tp_name
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
  PyvtkContourRepresentation_Doc, // tp_doc
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

PyObject *PyvtkContourRepresentation_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkContourRepresentation_Type, PyvtkContourRepresentation_Methods,
    "vtkContourRepresentation",
 nullptr);

  PyTypeObject *pytype = &PyvtkContourRepresentation_Type;

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

  for (int c = 0; c < 6; c++)
  {
    static const struct { const char *name; int value; }
      constants[6] = {
        { "Outside", vtkContourRepresentation::Outside },
        { "Nearby", vtkContourRepresentation::Nearby },
        { "Inactive", vtkContourRepresentation::Inactive },
        { "Translate", vtkContourRepresentation::Translate },
        { "Shift", vtkContourRepresentation::Shift },
        { "Scale", vtkContourRepresentation::Scale },
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

void PyVTKAddFile_vtkContourRepresentation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkContourRepresentationPoint_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkContourRepresentationPoint", o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkContourRepresentationNode_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkContourRepresentationNode", o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkContourRepresentationInternals_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkContourRepresentationInternals", o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkContourRepresentation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkContourRepresentation", o) != 0)
  {
    Py_DECREF(o);
  }

}

