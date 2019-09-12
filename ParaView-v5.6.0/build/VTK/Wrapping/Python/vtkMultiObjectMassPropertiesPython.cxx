// python wrapper for vtkMultiObjectMassProperties
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
#include "vtkMultiObjectMassProperties.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMultiObjectMassProperties(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkMultiObjectMassProperties_ClassNew(); }

#ifndef DECLARED_PyvtkPolyDataAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPolyDataAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPolyDataAlgorithm_ClassNew
#endif

static const char *PyvtkMultiObjectMassProperties_Doc =
  "vtkMultiObjectMassProperties - compute volume and area of objects in\na polygonal mesh\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkMultiObjectMassProperties estimates the volume and the surface\n"
  "area of a polygonal mesh. Multiple, valid closed objects may be\n"
  "represented, and each object is assumed to be defined as a polyhedron\n"
  "defined by polygonal faces (i.e., the faces do not have to be\n"
  "triangles). The algorithm computes the total volume and area, as well\n"
  "as per object values which are placed in data arrays. Note that an\n"
  "object is valid only if it is manifold and closed (i.e., each edge is\n"
  "used exactly two times by two different polygons). Invalid objects\n"
  "are processed but may produce inaccurate results. Inconsistent\n"
  "polygon ordering is also allowed.\n\n"
  "The algorithm is composed of two basic parts. First a connected\n"
  "traversal is performed to identify objects, detect whether the\n"
  "objects are valid, and ensure that the composing polygons are ordered\n"
  "consistently. Next, in threaded execution, a parallel process of\n"
  "computing areas and volumes is performed. It is possible to skip the\n"
  "first part if the SkipValidityCheck is enabled, AND a vtkIdTypeArray\n"
  "data array named \"ObjectIds\" is associated with the polygon input\n"
  "(i.e., cell data) that enumerates which object every polygon belongs\n"
  "to (i.e., indictaes that it is a boundary polygon of a specified\n"
  "object).\n\n"
  "The algorithm implemented here is inspired by this paper:\n"
  "http://chenlab.ece.cornell.edu/Publication/Cha/icip01_Cha.pdf. Also\n"
  "see the Stackflow entry: https://stackoverflow.com/questions/1406029/\n"
  "how-to-calculate-the-volume-of-a-3d-mesh-object-the-surface-of-which-i\n"
  "s-made-up. The general assumption here is that the model is of closed\n"
  "surface.  Also, this approach requires triangulating the polygons so\n"
  "triangle meshes are processed much faster. Finally, the volume and\n"
  "area calculations are done in paraellel (threaded) after a\n"
  "connectivity pass is made (used to identify objects and verify that\n"
  "they are manifold and closed).\n\n"
  "The output contains six additional data arrays. The arrays\n"
  "\"ObjectValidity\", \"ObjectVolumes\" and \"ObjectAreas\" are placed in the\n"
  "output field data.  These are arrays which indicate which objects are\n"
  "valid; the volume of each object; and the surface area of each\n"
  "object. Three additional arrays are placed in the output cell data,\n"
  "and indicate, on a per polygons basis, which object the polygon\n"
  "bounds \"ObjectIds\"; the polygon area \"Areas\"; and the contribution of\n"
  "volume \"Volumes\".  Additionally, the TotalVolume and TotalArea is\n"
  "available after the filter executes (i.e., the sum of the\n"
  "ObjectVolumes and ObjectAreas arrays).\n\n"
  "Per object validity, as mentioned previously, is reported in the\n"
  "ObjectValidity array. However another variable, AllValid, is set\n"
  "after filter execution which indicates whether all objects are valid\n"
  "(!=0) or not. This information can be used as a shortcut in case you\n"
  "want to skip validity checking on an object-by-object basis.\n\n"
  "@warning\n"
  "This filter operates on the polygonal data contained in the input\n"
  "vtkPolyData. Other types (verts, lines, triangle strips) are ignored\n"
  "and not passed to the output. The input polys and points, as well as\n"
  "associated point and cell data, are passed through to the output.\n\n"
  "@warning\n"
  "This filter is similar to vtkMassProperties. However\n"
  "vtkMassProperties operates on triangle meshes and assumes only a\n"
  "single, closed, properly oriented surface is represented.\n"
  "vtkMultiObjectMassProperties performs additional topological and\n"
  "connectivity operations to identify separate objects, and confirms\n"
  "that they are manifold. It also accommodates inconsistent ordering.\n\n"
  "@warning\n"
  "This class has been threaded with vtkSMPTools. Using TBB or other\n"
  "non-sequential type (set in the CMake variable\n"
  "VTK_SMP_IMPLEMENTATION_TYPE) may improve performance significantly.\n\n"
  "@sa\n"
  "vtkMassProperties\n\n";


static PyObject *
PyvtkMultiObjectMassProperties_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMultiObjectMassProperties::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMultiObjectMassProperties_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiObjectMassProperties *op = static_cast<vtkMultiObjectMassProperties *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMultiObjectMassProperties::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMultiObjectMassProperties_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMultiObjectMassProperties *tempr = vtkMultiObjectMassProperties::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMultiObjectMassProperties_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiObjectMassProperties *op = static_cast<vtkMultiObjectMassProperties *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMultiObjectMassProperties *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMultiObjectMassProperties::NewInstance());

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
PyvtkMultiObjectMassProperties_SetSkipValidityCheck(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSkipValidityCheck");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiObjectMassProperties *op = static_cast<vtkMultiObjectMassProperties *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSkipValidityCheck(temp0);
    }
    else
    {
      op->vtkMultiObjectMassProperties::SetSkipValidityCheck(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMultiObjectMassProperties_GetSkipValidityCheck(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSkipValidityCheck");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiObjectMassProperties *op = static_cast<vtkMultiObjectMassProperties *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSkipValidityCheck() :
      op->vtkMultiObjectMassProperties::GetSkipValidityCheck());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMultiObjectMassProperties_SkipValidityCheckOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SkipValidityCheckOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiObjectMassProperties *op = static_cast<vtkMultiObjectMassProperties *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SkipValidityCheckOn();
    }
    else
    {
      op->vtkMultiObjectMassProperties::SkipValidityCheckOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMultiObjectMassProperties_SkipValidityCheckOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SkipValidityCheckOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiObjectMassProperties *op = static_cast<vtkMultiObjectMassProperties *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SkipValidityCheckOff();
    }
    else
    {
      op->vtkMultiObjectMassProperties::SkipValidityCheckOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMultiObjectMassProperties_GetNumberOfObjects(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfObjects");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiObjectMassProperties *op = static_cast<vtkMultiObjectMassProperties *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfObjects() :
      op->vtkMultiObjectMassProperties::GetNumberOfObjects());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMultiObjectMassProperties_GetAllValid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAllValid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiObjectMassProperties *op = static_cast<vtkMultiObjectMassProperties *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAllValid() :
      op->vtkMultiObjectMassProperties::GetAllValid());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMultiObjectMassProperties_GetTotalVolume(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTotalVolume");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiObjectMassProperties *op = static_cast<vtkMultiObjectMassProperties *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTotalVolume() :
      op->vtkMultiObjectMassProperties::GetTotalVolume());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMultiObjectMassProperties_GetTotalArea(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTotalArea");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiObjectMassProperties *op = static_cast<vtkMultiObjectMassProperties *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTotalArea() :
      op->vtkMultiObjectMassProperties::GetTotalArea());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMultiObjectMassProperties_Methods[] = {
  {"IsTypeOf", PyvtkMultiObjectMassProperties_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard methods for construction, type and printing.\n"},
  {"IsA", PyvtkMultiObjectMassProperties_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard methods for construction, type and printing.\n"},
  {"SafeDownCast", PyvtkMultiObjectMassProperties_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkMultiObjectMassProperties\nC++: static vtkMultiObjectMassProperties *SafeDownCast(\n    vtkObjectBase *o)\n\nStandard methods for construction, type and printing.\n"},
  {"NewInstance", PyvtkMultiObjectMassProperties_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkMultiObjectMassProperties\nC++: vtkMultiObjectMassProperties *NewInstance()\n\nStandard methods for construction, type and printing.\n"},
  {"SetSkipValidityCheck", PyvtkMultiObjectMassProperties_SetSkipValidityCheck, METH_VARARGS,
   "V.SetSkipValidityCheck(int)\nC++: virtual void SetSkipValidityCheck(vtkTypeBool _arg)\n\nIndicate whether to skip the validity check (the first part of\nthe algorithm). By default this is off; however even if enabled\nvalidity skipping will only occur if a vtkIdTypeArray named\n\"ObjectIds\" is also provided on input to the filter.\n"},
  {"GetSkipValidityCheck", PyvtkMultiObjectMassProperties_GetSkipValidityCheck, METH_VARARGS,
   "V.GetSkipValidityCheck() -> int\nC++: virtual vtkTypeBool GetSkipValidityCheck()\n\nIndicate whether to skip the validity check (the first part of\nthe algorithm). By default this is off; however even if enabled\nvalidity skipping will only occur if a vtkIdTypeArray named\n\"ObjectIds\" is also provided on input to the filter.\n"},
  {"SkipValidityCheckOn", PyvtkMultiObjectMassProperties_SkipValidityCheckOn, METH_VARARGS,
   "V.SkipValidityCheckOn()\nC++: virtual void SkipValidityCheckOn()\n\nIndicate whether to skip the validity check (the first part of\nthe algorithm). By default this is off; however even if enabled\nvalidity skipping will only occur if a vtkIdTypeArray named\n\"ObjectIds\" is also provided on input to the filter.\n"},
  {"SkipValidityCheckOff", PyvtkMultiObjectMassProperties_SkipValidityCheckOff, METH_VARARGS,
   "V.SkipValidityCheckOff()\nC++: virtual void SkipValidityCheckOff()\n\nIndicate whether to skip the validity check (the first part of\nthe algorithm). By default this is off; however even if enabled\nvalidity skipping will only occur if a vtkIdTypeArray named\n\"ObjectIds\" is also provided on input to the filter.\n"},
  {"GetNumberOfObjects", PyvtkMultiObjectMassProperties_GetNumberOfObjects, METH_VARARGS,
   "V.GetNumberOfObjects() -> int\nC++: vtkIdType GetNumberOfObjects()\n\nReturn the number of objects identified. This is valid only after\nthe filter executes. Check the ObjectValidity array which\nindicates which of these identified objects are valid. Invalid\nobjects may have incorrect volume and area values.\n"},
  {"GetAllValid", PyvtkMultiObjectMassProperties_GetAllValid, METH_VARARGS,
   "V.GetAllValid() -> int\nC++: vtkTypeBool GetAllValid()\n\nReturn whether all objects are valid or not. This is valid only\nafter the filter executes.\n"},
  {"GetTotalVolume", PyvtkMultiObjectMassProperties_GetTotalVolume, METH_VARARGS,
   "V.GetTotalVolume() -> float\nC++: double GetTotalVolume()\n\nReturn the summed volume of all objects. This is valid only after\nthe filter executes.\n"},
  {"GetTotalArea", PyvtkMultiObjectMassProperties_GetTotalArea, METH_VARARGS,
   "V.GetTotalArea() -> float\nC++: double GetTotalArea()\n\nReturn the summed area of all objects. This is valid only after\nthe filter executes.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkMultiObjectMassProperties_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersCorePython.vtkMultiObjectMassProperties", // tp_name
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
  PyvtkMultiObjectMassProperties_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMultiObjectMassProperties_StaticNew()
{
  return vtkMultiObjectMassProperties::New();
}

PyObject *PyvtkMultiObjectMassProperties_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkMultiObjectMassProperties_Type, PyvtkMultiObjectMassProperties_Methods,
    "vtkMultiObjectMassProperties",
 &PyvtkMultiObjectMassProperties_StaticNew);

  PyTypeObject *pytype = &PyvtkMultiObjectMassProperties_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPolyDataAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMultiObjectMassProperties(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMultiObjectMassProperties_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMultiObjectMassProperties", o) != 0)
  {
    Py_DECREF(o);
  }

}

