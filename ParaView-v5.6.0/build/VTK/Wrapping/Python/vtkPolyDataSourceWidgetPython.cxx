// python wrapper for vtkPolyDataSourceWidget
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
#include "vtkPolyDataSourceWidget.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPolyDataSourceWidget(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPolyDataSourceWidget_ClassNew(); }

#ifndef DECLARED_Pyvtk3DWidget_ClassNew
extern "C" { PyObject *Pyvtk3DWidget_ClassNew(); }
#define DECLARED_Pyvtk3DWidget_ClassNew
#endif

static const char *PyvtkPolyDataSourceWidget_Doc =
  "vtkPolyDataSourceWidget - abstract PolyDataSource-based 3D widget\n\n"
  "Superclass: vtk3DWidget\n\n"
  "This abstract class serves as parent to 3D widgets that have simple\n"
  "vtkPolyDataSource instances defining their geometry.\n\n"
  "In addition to what is offered by the vtk3DWidget parent, this class\n"
  "makes it possible to manipulate the underlying polydatasource and to\n"
  "PlaceWidget() according to that, instead of having to make use of\n"
  "SetInput() or SetProp3D().\n\n"
  "Implementors of child classes HAVE to implement their\n"
  "PlaceWidget(bounds) to check for the existence of Input and Prop3D\n"
  "FIRST.  If these don't exist, place according to the underlying\n"
  "PolyDataSource.  Child classes also have to imprement\n"
  "UpdatePlacement(), which updates the widget according to the geometry\n"
  "of the underlying PolyDataSource.\n\n"
  "@sa\n"
  "vtk3DWidget vtkLineWidget vtkPlaneWidget vtkSphereWidget\n\n";


static PyObject *
PyvtkPolyDataSourceWidget_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPolyDataSourceWidget::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataSourceWidget_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataSourceWidget *op = static_cast<vtkPolyDataSourceWidget *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPolyDataSourceWidget::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataSourceWidget_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPolyDataSourceWidget *tempr = vtkPolyDataSourceWidget::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataSourceWidget_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataSourceWidget *op = static_cast<vtkPolyDataSourceWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPolyDataSourceWidget *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPolyDataSourceWidget::NewInstance());

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
PyvtkPolyDataSourceWidget_PlaceWidget_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataSourceWidget *op = static_cast<vtkPolyDataSourceWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PlaceWidget();
    }
    else
    {
      op->vtkPolyDataSourceWidget::PlaceWidget();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPolyDataSourceWidget_PlaceWidget_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataSourceWidget *op = static_cast<vtkPolyDataSourceWidget *>(vp);

  const size_t size0 = 6;
  double temp0[6];
  double save0[6];
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    op->PlaceWidget(temp0);

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
PyvtkPolyDataSourceWidget_PlaceWidget_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataSourceWidget *op = static_cast<vtkPolyDataSourceWidget *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
  {
    if (ap.IsBound())
    {
      op->PlaceWidget(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkPolyDataSourceWidget::PlaceWidget(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPolyDataSourceWidget_PlaceWidget(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkPolyDataSourceWidget_PlaceWidget_s1(self, args);
    case 1:
      return PyvtkPolyDataSourceWidget_PlaceWidget_s2(self, args);
    case 6:
      return PyvtkPolyDataSourceWidget_PlaceWidget_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "PlaceWidget");
  return nullptr;
}



static PyObject *
PyvtkPolyDataSourceWidget_GetPolyDataAlgorithm(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolyDataAlgorithm");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataSourceWidget *op = static_cast<vtkPolyDataSourceWidget *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    vtkPolyDataAlgorithm *tempr = op->GetPolyDataAlgorithm();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataSourceWidget_UpdatePlacement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdatePlacement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataSourceWidget *op = static_cast<vtkPolyDataSourceWidget *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    op->UpdatePlacement();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPolyDataSourceWidget_Methods[] = {
  {"IsTypeOf", PyvtkPolyDataSourceWidget_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPolyDataSourceWidget_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPolyDataSourceWidget_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPolyDataSourceWidget\nC++: static vtkPolyDataSourceWidget *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPolyDataSourceWidget_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPolyDataSourceWidget\nC++: vtkPolyDataSourceWidget *NewInstance()\n\n"},
  {"PlaceWidget", PyvtkPolyDataSourceWidget_PlaceWidget, METH_VARARGS,
   "V.PlaceWidget()\nC++: void PlaceWidget() override;\nV.PlaceWidget([float, float, float, float, float, float])\nC++: void PlaceWidget(double bounds[6]) override = 0;\nV.PlaceWidget(float, float, float, float, float, float)\nC++: void PlaceWidget(double xmin, double xmax, double ymin,\n    double ymax, double zmin, double zmax) override;\n\nOverrides vtk3DWidget PlaceWidget() so that it doesn't complain\nif there's no Input and no Prop3D.\n"},
  {"GetPolyDataAlgorithm", PyvtkPolyDataSourceWidget_GetPolyDataAlgorithm, METH_VARARGS,
   "V.GetPolyDataAlgorithm() -> vtkPolyDataAlgorithm\nC++: virtual vtkPolyDataAlgorithm *GetPolyDataAlgorithm()\n\nReturns underlying vtkPolyDataAlgorithm that determines geometry.\n This can be modified after which PlaceWidget() or\nUpdatePlacement() can be called.  UpdatePlacement() will always\nupdate the planewidget according to the geometry of the\nunderlying PolyDataAlgorithm.  PlaceWidget() will only make use\nof this geometry if there is no Input and no Prop3D set.\n"},
  {"UpdatePlacement", PyvtkPolyDataSourceWidget_UpdatePlacement, METH_VARARGS,
   "V.UpdatePlacement()\nC++: virtual void UpdatePlacement()\n\nIf you've made changes to the underlying vtkPolyDataSource AFTER\nyour initial call to PlaceWidget(), use this method to realise\nthe changes in the widget.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPolyDataSourceWidget_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInteractionWidgetsPython.vtkPolyDataSourceWidget", // tp_name
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
  PyvtkPolyDataSourceWidget_Doc, // tp_doc
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

PyObject *PyvtkPolyDataSourceWidget_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPolyDataSourceWidget_Type, PyvtkPolyDataSourceWidget_Methods,
    "vtkPolyDataSourceWidget",
 nullptr);

  PyTypeObject *pytype = &PyvtkPolyDataSourceWidget_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)Pyvtk3DWidget_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPolyDataSourceWidget(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPolyDataSourceWidget_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPolyDataSourceWidget", o) != 0)
  {
    Py_DECREF(o);
  }

}

