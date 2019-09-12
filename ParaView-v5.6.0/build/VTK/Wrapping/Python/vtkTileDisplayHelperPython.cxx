// python wrapper for vtkTileDisplayHelper
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
#include "vtkSynchronizedRenderers.h"
#include "vtkTileDisplayHelper.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkTileDisplayHelper(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkTileDisplayHelper_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkTileDisplayHelper_Doc =
  "vtkTileDisplayHelper - used on server side in tile display mode, to\nensure that the tiles from multiple views are rendered correctly.\n\n"
  "Superclass: vtkObject\n\n"
  "vtkTileDisplayHelper is used on server side in tile display mode, to\n"
  "ensure that the tiles from multiple views are rendered correctly.\n"
  "This is required since in multi-view configurations, only 1 view is\n"
  "rendered at a time, and when a view is being rendered, it may affect\n"
  "the renderings from other view which it must restore for the tile\n"
  "display to show the results correctly. We use this helper to keep\n"
  "buffered images from all views so that they can be restored.\n\n";


static PyObject *
PyvtkTileDisplayHelper_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTileDisplayHelper::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTileDisplayHelper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTileDisplayHelper *op = static_cast<vtkTileDisplayHelper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTileDisplayHelper::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTileDisplayHelper_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTileDisplayHelper *tempr = vtkTileDisplayHelper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTileDisplayHelper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTileDisplayHelper *op = static_cast<vtkTileDisplayHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTileDisplayHelper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTileDisplayHelper::NewInstance());

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
PyvtkTileDisplayHelper_GetInstance(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetInstance");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkTileDisplayHelper *tempr = vtkTileDisplayHelper::GetInstance();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTileDisplayHelper_SetTile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTileDisplayHelper *op = static_cast<vtkTileDisplayHelper *>(vp);

  unsigned int temp0;
  const size_t size1 = 4;
  double temp1[4];
  double save1[4];
  vtkRenderer *temp2 = nullptr;
  vtkSynchronizedRenderers::vtkRawImage *temp3 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetVTKObject(temp2, "vtkRenderer") &&
      ap.GetSpecialObject(temp3, "vtkSynchronizedRenderers.vtkRawImage"))
  {
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->SetTile(temp0, temp1, temp2, *temp3);
    }
    else
    {
      op->vtkTileDisplayHelper::SetTile(temp0, temp1, temp2, *temp3);
    }

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTileDisplayHelper_EraseTile_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EraseTile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTileDisplayHelper *op = static_cast<vtkTileDisplayHelper *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->EraseTile(temp0);
    }
    else
    {
      op->vtkTileDisplayHelper::EraseTile(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTileDisplayHelper_EraseTile_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EraseTile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTileDisplayHelper *op = static_cast<vtkTileDisplayHelper *>(vp);

  unsigned int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->EraseTile(temp0, temp1);
    }
    else
    {
      op->vtkTileDisplayHelper::EraseTile(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTileDisplayHelper_EraseTile(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkTileDisplayHelper_EraseTile_s1(self, args);
    case 2:
      return PyvtkTileDisplayHelper_EraseTile_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "EraseTile");
  return nullptr;
}



static PyObject *
PyvtkTileDisplayHelper_FlushTiles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FlushTiles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTileDisplayHelper *op = static_cast<vtkTileDisplayHelper *>(vp);

  unsigned int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->FlushTiles(temp0, temp1);
    }
    else
    {
      op->vtkTileDisplayHelper::FlushTiles(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTileDisplayHelper_ResetEnabledKeys(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetEnabledKeys");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTileDisplayHelper *op = static_cast<vtkTileDisplayHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ResetEnabledKeys();
    }
    else
    {
      op->vtkTileDisplayHelper::ResetEnabledKeys();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTileDisplayHelper_EnableKey(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableKey");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTileDisplayHelper *op = static_cast<vtkTileDisplayHelper *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->EnableKey(temp0);
    }
    else
    {
      op->vtkTileDisplayHelper::EnableKey(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTileDisplayHelper_SetDumpImagePath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDumpImagePath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTileDisplayHelper *op = static_cast<vtkTileDisplayHelper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDumpImagePath(temp0);
    }
    else
    {
      op->vtkTileDisplayHelper::SetDumpImagePath(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkTileDisplayHelper_Methods[] = {
  {"IsTypeOf", PyvtkTileDisplayHelper_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nOnly one instance by process should be used, that's why everyone\nshould use the instance returned by the GetInstance() methods.\nBut to allow that class to be used by a proxy, we need to expose\nthe new. Beaware that a subset of methods will be available to\nthe proxy.\n"},
  {"IsA", PyvtkTileDisplayHelper_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nOnly one instance by process should be used, that's why everyone\nshould use the instance returned by the GetInstance() methods.\nBut to allow that class to be used by a proxy, we need to expose\nthe new. Beaware that a subset of methods will be available to\nthe proxy.\n"},
  {"SafeDownCast", PyvtkTileDisplayHelper_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkTileDisplayHelper\nC++: static vtkTileDisplayHelper *SafeDownCast(vtkObjectBase *o)\n\nOnly one instance by process should be used, that's why everyone\nshould use the instance returned by the GetInstance() methods.\nBut to allow that class to be used by a proxy, we need to expose\nthe new. Beaware that a subset of methods will be available to\nthe proxy.\n"},
  {"NewInstance", PyvtkTileDisplayHelper_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkTileDisplayHelper\nC++: vtkTileDisplayHelper *NewInstance()\n\nOnly one instance by process should be used, that's why everyone\nshould use the instance returned by the GetInstance() methods.\nBut to allow that class to be used by a proxy, we need to expose\nthe new. Beaware that a subset of methods will be available to\nthe proxy.\n"},
  {"GetInstance", PyvtkTileDisplayHelper_GetInstance, METH_VARARGS,
   "V.GetInstance() -> vtkTileDisplayHelper\nC++: static vtkTileDisplayHelper *GetInstance()\n\nReturns the singleton.\n"},
  {"SetTile", PyvtkTileDisplayHelper_SetTile, METH_VARARGS,
   "V.SetTile(int, [float, float, float, float], vtkRenderer,\n    vtkSynchronizedRenderers.vtkRawImage)\nC++: void SetTile(unsigned int key, double viewport[4],\n    vtkRenderer *renderer,\n    vtkSynchronizedRenderers::vtkRawImage &tile)\n\nRegister a tile.\n"},
  {"EraseTile", PyvtkTileDisplayHelper_EraseTile, METH_VARARGS,
   "V.EraseTile(int)\nC++: void EraseTile(unsigned int key)\nV.EraseTile(int, int)\nC++: void EraseTile(unsigned int key, int leftEye)\n\nErase a tile.\n"},
  {"FlushTiles", PyvtkTileDisplayHelper_FlushTiles, METH_VARARGS,
   "V.FlushTiles(int, int)\nC++: void FlushTiles(unsigned int key, int leftEye)\n\nFlush the tiles.\n"},
  {"ResetEnabledKeys", PyvtkTileDisplayHelper_ResetEnabledKeys, METH_VARARGS,
   "V.ResetEnabledKeys()\nC++: void ResetEnabledKeys()\n\nSet the enabled tiles-set. Only enabled keys are \"flushed\".\n"},
  {"EnableKey", PyvtkTileDisplayHelper_EnableKey, METH_VARARGS,
   "V.EnableKey(int)\nC++: void EnableKey(unsigned int)\n\nSet the enabled tiles-set. Only enabled keys are \"flushed\".\n"},
  {"SetDumpImagePath", PyvtkTileDisplayHelper_SetDumpImagePath, METH_VARARGS,
   "V.SetDumpImagePath(string)\nC++: void SetDumpImagePath(const char *newPath)\n\n- Method that can be used by the proxy.\n- The Path will be used to save the latest flush of the tiles.\n- Basically for a 2 processes tile display setting you will have\n  two images dumped following the given pattern:\n  ${DumpImagePath}_${processId}.png\n- If the DumpImagePath is set to NULL, then no image dump will\n  occurs.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkTileDisplayHelper_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsRenderingPython.vtkTileDisplayHelper", // tp_name
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
  PyvtkTileDisplayHelper_Doc, // tp_doc
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

static vtkObjectBase *PyvtkTileDisplayHelper_StaticNew()
{
  return vtkTileDisplayHelper::New();
}

PyObject *PyvtkTileDisplayHelper_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkTileDisplayHelper_Type, PyvtkTileDisplayHelper_Methods,
    "vtkTileDisplayHelper",
 &PyvtkTileDisplayHelper_StaticNew);

  PyTypeObject *pytype = &PyvtkTileDisplayHelper_Type;

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


static const char *PyvtkTileDisplayHelperSingletonCleaner_Doc =
  "vtkTileDisplayHelperSingletonCleaner - no description provided.\n\n"

  "vtkTileDisplayHelperSingletonCleaner()\n";

static PyMethodDef PyvtkTileDisplayHelperSingletonCleaner_Methods[] = {
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkTileDisplayHelperSingletonCleaner_vtkTileDisplayHelperSingletonCleaner(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkTileDisplayHelperSingletonCleaner");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkTileDisplayHelperSingletonCleaner *op = new vtkTileDisplayHelperSingletonCleaner();

    result = PyVTKSpecialObject_New("vtkTileDisplayHelperSingletonCleaner", op);
  }

  return result;
}

static PyMethodDef PyvtkTileDisplayHelperSingletonCleaner_vtkTileDisplayHelperSingletonCleaner_Methods[] = {
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkTileDisplayHelperSingletonCleaner_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkTileDisplayHelperSingletonCleaner_vtkTileDisplayHelperSingletonCleaner(nullptr, args);
}

static void PyvtkTileDisplayHelperSingletonCleaner_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkTileDisplayHelperSingletonCleaner *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkTileDisplayHelperSingletonCleaner_Hash(PyObject *self)
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

static PyTypeObject PyvtkTileDisplayHelperSingletonCleaner_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsRenderingPython.vtkTileDisplayHelperSingletonCleaner", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkTileDisplayHelperSingletonCleaner_Delete, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkTileDisplayHelperSingletonCleaner_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkTileDisplayHelperSingletonCleaner_Doc, // tp_doc
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
  PyvtkTileDisplayHelperSingletonCleaner_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkTileDisplayHelperSingletonCleaner_TypeNew(); }

PyObject *PyvtkTileDisplayHelperSingletonCleaner_TypeNew()
{
  PyVTKSpecialType_Add(
    &PyvtkTileDisplayHelperSingletonCleaner_Type,
    PyvtkTileDisplayHelperSingletonCleaner_Methods,
    PyvtkTileDisplayHelperSingletonCleaner_vtkTileDisplayHelperSingletonCleaner_Methods,
    nullptr);

  PyTypeObject *pytype = &PyvtkTileDisplayHelperSingletonCleaner_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkTileDisplayHelper(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkTileDisplayHelper_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkTileDisplayHelper", o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkTileDisplayHelperSingletonCleaner_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkTileDisplayHelperSingletonCleaner", o) != 0)
  {
    Py_DECREF(o);
  }

}

