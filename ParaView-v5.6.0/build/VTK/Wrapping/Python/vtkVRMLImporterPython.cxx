// python wrapper for vtkVRMLImporter
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
#include "vtkVRMLImporter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkVRMLImporter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkVRMLImporter_ClassNew(); }

#ifndef DECLARED_PyvtkImporter_ClassNew
extern "C" { PyObject *PyvtkImporter_ClassNew(); }
#define DECLARED_PyvtkImporter_ClassNew
#endif

static const char *PyvtkVRMLImporter_Doc =
  "vtkVRMLImporter - imports VRML 2.0 files.\n\n"
  "Superclass: vtkImporter\n\n"
  "vtkVRMLImporter imports VRML 2.0 files into VTK.\n\n"
  "@warning\n"
  "These nodes are currently supported:\n"
  "     Appearance                              IndexedFaceSet\n"
  "     Box                                     IndexedLineSet\n"
  "     Color                                   Material\n"
  "     Cone                                    Shape\n"
  "     Coordinate                              Sphere\n"
  "     Cylinder                                Transform\n"
  "     DirectionalLight\n\n"
  "@warning\n"
  "As you can see this implementation focuses on getting the geometry\n"
  "translated.  The routes and scripting nodes are ignored since they\n"
  "deal with directly accessing a nodes internal structure based on the\n"
  "VRML spec. Since this is a translation the internal data structures\n"
  "differ greatly from the VRML spec and the External Authoring\n"
  "Interface (see the VRML spec). The DEF/USE mechanism does allow the\n"
  "VTK user to extract objects from the scene and directly manipulate\n"
  "them using the native language (Python, Java, or whatever language\n"
  "VTK is wrapped in). This, in a way, removes the need for the route\n"
  "and script mechanism (not completely though). Texture coordinates are\n"
  "attached to the mesh is available but image textures are not loaded.\n"
  "Viewpoints (camera presets) are not imported.\n\n"
  "@par Thanks:\n"
  " Thanks to Russ Coucher of Areva for numerous bug fixes and a new\n"
  "test.\n\n"
  "@sa\n"
  "vtkImporter\n\n";


static PyObject *
PyvtkVRMLImporter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkVRMLImporter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVRMLImporter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVRMLImporter *op = static_cast<vtkVRMLImporter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkVRMLImporter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVRMLImporter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkVRMLImporter *tempr = vtkVRMLImporter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVRMLImporter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVRMLImporter *op = static_cast<vtkVRMLImporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkVRMLImporter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkVRMLImporter::NewInstance());

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
PyvtkVRMLImporter_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVRMLImporter *op = static_cast<vtkVRMLImporter *>(vp);

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
      op->vtkVRMLImporter::SetFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVRMLImporter_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVRMLImporter *op = static_cast<vtkVRMLImporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkVRMLImporter::GetFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVRMLImporter_SetShapeResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShapeResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVRMLImporter *op = static_cast<vtkVRMLImporter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetShapeResolution(temp0);
    }
    else
    {
      op->vtkVRMLImporter::SetShapeResolution(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVRMLImporter_GetShapeResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShapeResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVRMLImporter *op = static_cast<vtkVRMLImporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetShapeResolution() :
      op->vtkVRMLImporter::GetShapeResolution());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVRMLImporter_GetVRMLDEFObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVRMLDEFObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVRMLImporter *op = static_cast<vtkVRMLImporter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkObject *tempr = (ap.IsBound() ?
      op->GetVRMLDEFObject(temp0) :
      op->vtkVRMLImporter::GetVRMLDEFObject(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkVRMLImporter_Methods[] = {
  {"IsTypeOf", PyvtkVRMLImporter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkVRMLImporter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkVRMLImporter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkVRMLImporter\nC++: static vtkVRMLImporter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkVRMLImporter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkVRMLImporter\nC++: vtkVRMLImporter *NewInstance()\n\n"},
  {"SetFileName", PyvtkVRMLImporter_SetFileName, METH_VARARGS,
   "V.SetFileName(string)\nC++: virtual void SetFileName(const char *_arg)\n\nSpecify the name of the file to read.\n"},
  {"GetFileName", PyvtkVRMLImporter_GetFileName, METH_VARARGS,
   "V.GetFileName() -> string\nC++: virtual char *GetFileName()\n\nSpecify the name of the file to read.\n"},
  {"SetShapeResolution", PyvtkVRMLImporter_SetShapeResolution, METH_VARARGS,
   "V.SetShapeResolution(int)\nC++: virtual void SetShapeResolution(int _arg)\n\nSpecify the resolution for Sphere, Cone and Cylinder shape\nsources. Default is 12.\n"},
  {"GetShapeResolution", PyvtkVRMLImporter_GetShapeResolution, METH_VARARGS,
   "V.GetShapeResolution() -> int\nC++: virtual int GetShapeResolution()\n\nSpecify the resolution for Sphere, Cone and Cylinder shape\nsources. Default is 12.\n"},
  {"GetVRMLDEFObject", PyvtkVRMLImporter_GetVRMLDEFObject, METH_VARARGS,
   "V.GetVRMLDEFObject(string) -> vtkObject\nC++: vtkObject *GetVRMLDEFObject(const char *name)\n\nIn the VRML spec you can DEF and USE nodes (name them), This\nroutine will return the associated VTK object which was created\nas a result of the DEF mechanism Send in the name from the VRML\nfile, get the VTK object. You will have to check and correctly\ncast the object since this only returns vtkObjects.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkVRMLImporter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOImportPython.vtkVRMLImporter", // tp_name
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
  PyvtkVRMLImporter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkVRMLImporter_StaticNew()
{
  return vtkVRMLImporter::New();
}

PyObject *PyvtkVRMLImporter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkVRMLImporter_Type, PyvtkVRMLImporter_Methods,
    "vtkVRMLImporter",
 &PyvtkVRMLImporter_StaticNew);

  PyTypeObject *pytype = &PyvtkVRMLImporter_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkImporter_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkVRMLImporter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkVRMLImporter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkVRMLImporter", o) != 0)
  {
    Py_DECREF(o);
  }

}

