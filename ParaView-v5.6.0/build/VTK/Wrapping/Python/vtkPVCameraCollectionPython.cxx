// python wrapper for vtkPVCameraCollection
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
#include "vtkPVCameraCollection.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPVCameraCollection(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPVCameraCollection_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkPVCameraCollection_Doc =
  "vtkPVCameraCollection - collection of cameras used by vtkPVRenderView\nfor cases where one wants to limit interactions to a fixed set of\ncameras.\n\n"
  "Superclass: vtkObject\n\n"
  "vtkPVCameraCollection is designed for cases where one want to limit\n"
  "interactions to a fixed set of cameras e.g. when showing pre-rendered\n"
  "image frames e.g. coming from a Cinema database, one wants to limit\n"
  "the camera positions to those available in the Cinema database. One\n"
  "can use this class for that.\n\n"
  "This implementation provides API to add cameras, find best match\n"
  "camera, etc.\n\n";


static PyObject *
PyvtkPVCameraCollection_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPVCameraCollection::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVCameraCollection_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCameraCollection *op = static_cast<vtkPVCameraCollection *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVCameraCollection::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVCameraCollection_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPVCameraCollection *tempr = vtkPVCameraCollection::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVCameraCollection_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCameraCollection *op = static_cast<vtkPVCameraCollection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVCameraCollection *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVCameraCollection::NewInstance());

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
PyvtkPVCameraCollection_AddCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCameraCollection *op = static_cast<vtkPVCameraCollection *>(vp);

  vtkCamera *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCamera"))
  {
    int tempr = (ap.IsBound() ?
      op->AddCamera(temp0) :
      op->vtkPVCameraCollection::AddCamera(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVCameraCollection_GetCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCameraCollection *op = static_cast<vtkPVCameraCollection *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkCamera *tempr = (ap.IsBound() ?
      op->GetCamera(temp0) :
      op->vtkPVCameraCollection::GetCamera(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVCameraCollection_RemoveAllCameras(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllCameras");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCameraCollection *op = static_cast<vtkPVCameraCollection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllCameras();
    }
    else
    {
      op->vtkPVCameraCollection::RemoveAllCameras();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVCameraCollection_FindClosestCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindClosestCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCameraCollection *op = static_cast<vtkPVCameraCollection *>(vp);

  vtkCamera *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCamera"))
  {
    int tempr = (ap.IsBound() ?
      op->FindClosestCamera(temp0) :
      op->vtkPVCameraCollection::FindClosestCamera(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVCameraCollection_UpdateCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCameraCollection *op = static_cast<vtkPVCameraCollection *>(vp);

  int temp0;
  vtkCamera *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkCamera"))
  {
    bool tempr = (ap.IsBound() ?
      op->UpdateCamera(temp0, temp1) :
      op->vtkPVCameraCollection::UpdateCamera(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPVCameraCollection_Methods[] = {
  {"IsTypeOf", PyvtkPVCameraCollection_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPVCameraCollection_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPVCameraCollection_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPVCameraCollection\nC++: static vtkPVCameraCollection *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPVCameraCollection_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPVCameraCollection\nC++: vtkPVCameraCollection *NewInstance()\n\n"},
  {"AddCamera", PyvtkPVCameraCollection_AddCamera, METH_VARARGS,
   "V.AddCamera(vtkCamera) -> int\nC++: virtual int AddCamera(vtkCamera *camera)\n\nAdd  a cameras to the collection of discrete cameras. The code\ndoes not check for duplicates. It's the callers responsibility to\nensure duplicate cameras are not added as it's not guaranteed\nwhich of the duplicates will be selected.\n@param[in] camera A camera to add to the collection of discrete\n    cameras.\n@returns Index of the added camera.\n"},
  {"GetCamera", PyvtkPVCameraCollection_GetCamera, METH_VARARGS,
   "V.GetCamera(int) -> vtkCamera\nC++: vtkCamera *GetCamera(int index)\n\nReturn camera at a particular index.\n@param[in] index Index of added camera to return\n@returns camera or NULL if index is invalid.\n"},
  {"RemoveAllCameras", PyvtkPVCameraCollection_RemoveAllCameras, METH_VARARGS,
   "V.RemoveAllCameras()\nC++: virtual void RemoveAllCameras()\n\nClear all cameras.\n"},
  {"FindClosestCamera", PyvtkPVCameraCollection_FindClosestCamera, METH_VARARGS,
   "V.FindClosestCamera(vtkCamera) -> int\nC++: int FindClosestCamera(vtkCamera *target)\n\nFind a camera in the style that's closest to the `target` camera.\n@param[in] target Camera to find the closet camera to.\n@returns index of the found camera or -1 if none found.\n"},
  {"UpdateCamera", PyvtkPVCameraCollection_UpdateCamera, METH_VARARGS,
   "V.UpdateCamera(int, vtkCamera) -> bool\nC++: virtual bool UpdateCamera(int index, vtkCamera *target)\n\nUpdate the target camera to the values from a camera added using\n`AddCamera`. The camera to copy values from is identified by the\nindex.\n\n@param[in] index Index of source camera.\n@param[out] target The camera to update.\n@returns false if params are invalid, otherwise true.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPVCameraCollection_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsRenderingPython.vtkPVCameraCollection", // tp_name
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
  PyvtkPVCameraCollection_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPVCameraCollection_StaticNew()
{
  return vtkPVCameraCollection::New();
}

PyObject *PyvtkPVCameraCollection_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPVCameraCollection_Type, PyvtkPVCameraCollection_Methods,
    "vtkPVCameraCollection",
 &PyvtkPVCameraCollection_StaticNew);

  PyTypeObject *pytype = &PyvtkPVCameraCollection_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkObject_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPVCameraCollection(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPVCameraCollection_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPVCameraCollection", o) != 0)
  {
    Py_DECREF(o);
  }

}

