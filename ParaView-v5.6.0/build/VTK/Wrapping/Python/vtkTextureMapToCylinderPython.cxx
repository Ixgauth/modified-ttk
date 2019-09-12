// python wrapper for vtkTextureMapToCylinder
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
#include "vtkTextureMapToCylinder.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkTextureMapToCylinder(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkTextureMapToCylinder_ClassNew(); }

#ifndef DECLARED_PyvtkDataSetAlgorithm_ClassNew
extern "C" { PyObject *PyvtkDataSetAlgorithm_ClassNew(); }
#define DECLARED_PyvtkDataSetAlgorithm_ClassNew
#endif

static const char *PyvtkTextureMapToCylinder_Doc =
  "vtkTextureMapToCylinder - generate texture coordinates by mapping\npoints to cylinder\n\n"
  "Superclass: vtkDataSetAlgorithm\n\n"
  "vtkTextureMapToCylinder is a filter that generates 2D texture\n"
  "coordinates by mapping input dataset points onto a cylinder. The\n"
  "cylinder can either be user specified or generated automatically.\n"
  "(The cylinder is generated automatically by computing the axis of the\n"
  "cylinder.)  Note that the generated texture coordinates for the\n"
  "s-coordinate ranges from (0-1) (corresponding to angle of 0->360\n"
  "around axis), while the mapping of the t-coordinate is controlled by\n"
  "the projection of points along the axis.\n\n"
  "To specify a cylinder manually, you must provide two points that\n"
  "define the axis of the cylinder. The length of the axis will affect\n"
  "the t-coordinates.\n\n"
  "A special ivar controls how the s-coordinate is generated. If\n"
  "PreventSeam is set to true, the s-texture varies from 0->1 and then\n"
  "1->0 (corresponding to angles of 0->180 and 180->360).\n\n"
  "@warning\n"
  "Since the resulting texture s-coordinate will lie between (0,1), and\n"
  "the origin of the texture coordinates is not user-controllable, you\n"
  "may want to use the class vtkTransformTexture to linearly scale and\n"
  "shift the origin of the texture coordinates.\n\n"
  "@sa\n"
  "vtkTextureMapToPlane vtkTextureMapToSphere vtkTransformTexture\n"
  "vtkThresholdTextureCoords\n\n";


static PyObject *
PyvtkTextureMapToCylinder_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTextureMapToCylinder::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextureMapToCylinder_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToCylinder *op = static_cast<vtkTextureMapToCylinder *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTextureMapToCylinder::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextureMapToCylinder_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTextureMapToCylinder *tempr = vtkTextureMapToCylinder::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextureMapToCylinder_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToCylinder *op = static_cast<vtkTextureMapToCylinder *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTextureMapToCylinder *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTextureMapToCylinder::NewInstance());

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
PyvtkTextureMapToCylinder_SetPoint1_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToCylinder *op = static_cast<vtkTextureMapToCylinder *>(vp);

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
      op->SetPoint1(temp0, temp1, temp2);
    }
    else
    {
      op->vtkTextureMapToCylinder::SetPoint1(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTextureMapToCylinder_SetPoint1_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToCylinder *op = static_cast<vtkTextureMapToCylinder *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetPoint1(temp0);
    }
    else
    {
      op->vtkTextureMapToCylinder::SetPoint1(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTextureMapToCylinder_SetPoint1(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkTextureMapToCylinder_SetPoint1_s1(self, args);
    case 1:
      return PyvtkTextureMapToCylinder_SetPoint1_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPoint1");
  return nullptr;
}



static PyObject *
PyvtkTextureMapToCylinder_GetPoint1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToCylinder *op = static_cast<vtkTextureMapToCylinder *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetPoint1() :
      op->vtkTextureMapToCylinder::GetPoint1());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkTextureMapToCylinder_SetPoint2_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToCylinder *op = static_cast<vtkTextureMapToCylinder *>(vp);

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
      op->SetPoint2(temp0, temp1, temp2);
    }
    else
    {
      op->vtkTextureMapToCylinder::SetPoint2(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTextureMapToCylinder_SetPoint2_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToCylinder *op = static_cast<vtkTextureMapToCylinder *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetPoint2(temp0);
    }
    else
    {
      op->vtkTextureMapToCylinder::SetPoint2(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTextureMapToCylinder_SetPoint2(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkTextureMapToCylinder_SetPoint2_s1(self, args);
    case 1:
      return PyvtkTextureMapToCylinder_SetPoint2_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPoint2");
  return nullptr;
}



static PyObject *
PyvtkTextureMapToCylinder_GetPoint2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToCylinder *op = static_cast<vtkTextureMapToCylinder *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetPoint2() :
      op->vtkTextureMapToCylinder::GetPoint2());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkTextureMapToCylinder_SetAutomaticCylinderGeneration(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAutomaticCylinderGeneration");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToCylinder *op = static_cast<vtkTextureMapToCylinder *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAutomaticCylinderGeneration(temp0);
    }
    else
    {
      op->vtkTextureMapToCylinder::SetAutomaticCylinderGeneration(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextureMapToCylinder_GetAutomaticCylinderGeneration(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutomaticCylinderGeneration");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToCylinder *op = static_cast<vtkTextureMapToCylinder *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAutomaticCylinderGeneration() :
      op->vtkTextureMapToCylinder::GetAutomaticCylinderGeneration());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextureMapToCylinder_AutomaticCylinderGenerationOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutomaticCylinderGenerationOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToCylinder *op = static_cast<vtkTextureMapToCylinder *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AutomaticCylinderGenerationOn();
    }
    else
    {
      op->vtkTextureMapToCylinder::AutomaticCylinderGenerationOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextureMapToCylinder_AutomaticCylinderGenerationOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutomaticCylinderGenerationOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToCylinder *op = static_cast<vtkTextureMapToCylinder *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AutomaticCylinderGenerationOff();
    }
    else
    {
      op->vtkTextureMapToCylinder::AutomaticCylinderGenerationOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextureMapToCylinder_SetPreventSeam(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPreventSeam");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToCylinder *op = static_cast<vtkTextureMapToCylinder *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPreventSeam(temp0);
    }
    else
    {
      op->vtkTextureMapToCylinder::SetPreventSeam(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextureMapToCylinder_GetPreventSeam(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPreventSeam");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToCylinder *op = static_cast<vtkTextureMapToCylinder *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPreventSeam() :
      op->vtkTextureMapToCylinder::GetPreventSeam());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextureMapToCylinder_PreventSeamOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PreventSeamOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToCylinder *op = static_cast<vtkTextureMapToCylinder *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PreventSeamOn();
    }
    else
    {
      op->vtkTextureMapToCylinder::PreventSeamOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextureMapToCylinder_PreventSeamOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PreventSeamOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToCylinder *op = static_cast<vtkTextureMapToCylinder *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PreventSeamOff();
    }
    else
    {
      op->vtkTextureMapToCylinder::PreventSeamOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkTextureMapToCylinder_Methods[] = {
  {"IsTypeOf", PyvtkTextureMapToCylinder_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkTextureMapToCylinder_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkTextureMapToCylinder_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkTextureMapToCylinder\nC++: static vtkTextureMapToCylinder *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkTextureMapToCylinder_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkTextureMapToCylinder\nC++: vtkTextureMapToCylinder *NewInstance()\n\n"},
  {"SetPoint1", PyvtkTextureMapToCylinder_SetPoint1, METH_VARARGS,
   "V.SetPoint1(float, float, float)\nC++: void SetPoint1(double, double, double)\nV.SetPoint1((float, float, float))\nC++: void SetPoint1(double a[3])\n\n"},
  {"GetPoint1", PyvtkTextureMapToCylinder_GetPoint1, METH_VARARGS,
   "V.GetPoint1() -> (float, float, float)\nC++: double *GetPoint1()\n\nSpecify the first point defining the cylinder axis,\n"},
  {"SetPoint2", PyvtkTextureMapToCylinder_SetPoint2, METH_VARARGS,
   "V.SetPoint2(float, float, float)\nC++: void SetPoint2(double, double, double)\nV.SetPoint2((float, float, float))\nC++: void SetPoint2(double a[3])\n\n"},
  {"GetPoint2", PyvtkTextureMapToCylinder_GetPoint2, METH_VARARGS,
   "V.GetPoint2() -> (float, float, float)\nC++: double *GetPoint2()\n\nSpecify the second point defining the cylinder axis,\n"},
  {"SetAutomaticCylinderGeneration", PyvtkTextureMapToCylinder_SetAutomaticCylinderGeneration, METH_VARARGS,
   "V.SetAutomaticCylinderGeneration(int)\nC++: virtual void SetAutomaticCylinderGeneration(vtkTypeBool _arg)\n\nTurn on/off automatic cylinder generation. This means it\nautomatically finds the cylinder center and axis.\n"},
  {"GetAutomaticCylinderGeneration", PyvtkTextureMapToCylinder_GetAutomaticCylinderGeneration, METH_VARARGS,
   "V.GetAutomaticCylinderGeneration() -> int\nC++: virtual vtkTypeBool GetAutomaticCylinderGeneration()\n\nTurn on/off automatic cylinder generation. This means it\nautomatically finds the cylinder center and axis.\n"},
  {"AutomaticCylinderGenerationOn", PyvtkTextureMapToCylinder_AutomaticCylinderGenerationOn, METH_VARARGS,
   "V.AutomaticCylinderGenerationOn()\nC++: virtual void AutomaticCylinderGenerationOn()\n\nTurn on/off automatic cylinder generation. This means it\nautomatically finds the cylinder center and axis.\n"},
  {"AutomaticCylinderGenerationOff", PyvtkTextureMapToCylinder_AutomaticCylinderGenerationOff, METH_VARARGS,
   "V.AutomaticCylinderGenerationOff()\nC++: virtual void AutomaticCylinderGenerationOff()\n\nTurn on/off automatic cylinder generation. This means it\nautomatically finds the cylinder center and axis.\n"},
  {"SetPreventSeam", PyvtkTextureMapToCylinder_SetPreventSeam, METH_VARARGS,
   "V.SetPreventSeam(int)\nC++: virtual void SetPreventSeam(vtkTypeBool _arg)\n\nControl how the texture coordinates are generated. If PreventSeam\nis set, the s-coordinate ranges from 0->1 and 1->0 corresponding\nto the angle variation from 0->180 and 180->0. Otherwise, the\ns-coordinate ranges from 0->1 from 0->360 degrees.\n"},
  {"GetPreventSeam", PyvtkTextureMapToCylinder_GetPreventSeam, METH_VARARGS,
   "V.GetPreventSeam() -> int\nC++: virtual vtkTypeBool GetPreventSeam()\n\nControl how the texture coordinates are generated. If PreventSeam\nis set, the s-coordinate ranges from 0->1 and 1->0 corresponding\nto the angle variation from 0->180 and 180->0. Otherwise, the\ns-coordinate ranges from 0->1 from 0->360 degrees.\n"},
  {"PreventSeamOn", PyvtkTextureMapToCylinder_PreventSeamOn, METH_VARARGS,
   "V.PreventSeamOn()\nC++: virtual void PreventSeamOn()\n\nControl how the texture coordinates are generated. If PreventSeam\nis set, the s-coordinate ranges from 0->1 and 1->0 corresponding\nto the angle variation from 0->180 and 180->0. Otherwise, the\ns-coordinate ranges from 0->1 from 0->360 degrees.\n"},
  {"PreventSeamOff", PyvtkTextureMapToCylinder_PreventSeamOff, METH_VARARGS,
   "V.PreventSeamOff()\nC++: virtual void PreventSeamOff()\n\nControl how the texture coordinates are generated. If PreventSeam\nis set, the s-coordinate ranges from 0->1 and 1->0 corresponding\nto the angle variation from 0->180 and 180->0. Otherwise, the\ns-coordinate ranges from 0->1 from 0->360 degrees.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkTextureMapToCylinder_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersTexturePython.vtkTextureMapToCylinder", // tp_name
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
  PyvtkTextureMapToCylinder_Doc, // tp_doc
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

static vtkObjectBase *PyvtkTextureMapToCylinder_StaticNew()
{
  return vtkTextureMapToCylinder::New();
}

PyObject *PyvtkTextureMapToCylinder_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkTextureMapToCylinder_Type, PyvtkTextureMapToCylinder_Methods,
    "vtkTextureMapToCylinder",
 &PyvtkTextureMapToCylinder_StaticNew);

  PyTypeObject *pytype = &PyvtkTextureMapToCylinder_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkDataSetAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkTextureMapToCylinder(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkTextureMapToCylinder_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkTextureMapToCylinder", o) != 0)
  {
    Py_DECREF(o);
  }

}

