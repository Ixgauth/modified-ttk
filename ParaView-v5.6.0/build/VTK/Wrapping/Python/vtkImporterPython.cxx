// python wrapper for vtkImporter
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
#include "vtkImporter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImporter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkImporter_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkImporter_Doc =
  "vtkImporter - importer abstract class\n\n"
  "Superclass: vtkObject\n\n"
  "vtkImporter is an abstract class that specifies the protocol for\n"
  "importing actors, cameras, lights and properties into a\n"
  "vtkRenderWindow. The following takes place:\n"
  "1) Create a RenderWindow and Renderer if none is provided.\n"
  "2) Call ImportBegin, if ImportBegin returns False, return\n"
  "3) Call ReadData, which calls: a) Import the Actors b) Import the\n"
  "   cameras c) Import the lights d) Import the Properties\n"
  "7) Call ImportEnd\n\n"
  "Subclasses optionally implement the ImportActors, ImportCameras,\n"
  "ImportLights and ImportProperties or ReadData methods. An ImportBegin\n"
  "and ImportEnd can optionally be provided to perform Importer-specific\n"
  "initialization and termination.  The Read method initiates the import\n"
  "process. If a RenderWindow is provided, its Renderer will contained\n"
  "the imported objects. If the RenderWindow has no Renderer, one is\n"
  "created. If no RenderWindow is provided, both a RenderWindow and\n"
  "Renderer will be created. Both the RenderWindow and Renderer can be\n"
  "accessed using Get methods.\n\n"
  "@sa\n"
  "vtk3DSImporter vtkExporter\n\n";


static PyObject *
PyvtkImporter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImporter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImporter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImporter *op = static_cast<vtkImporter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImporter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImporter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImporter *tempr = vtkImporter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImporter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImporter *op = static_cast<vtkImporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImporter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImporter::NewInstance());

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
PyvtkImporter_GetRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImporter *op = static_cast<vtkImporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderer *tempr = (ap.IsBound() ?
      op->GetRenderer() :
      op->vtkImporter::GetRenderer());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImporter_SetRenderWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImporter *op = static_cast<vtkImporter *>(vp);

  vtkRenderWindow *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderWindow"))
  {
    if (ap.IsBound())
    {
      op->SetRenderWindow(temp0);
    }
    else
    {
      op->vtkImporter::SetRenderWindow(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImporter_GetRenderWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImporter *op = static_cast<vtkImporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderWindow *tempr = (ap.IsBound() ?
      op->GetRenderWindow() :
      op->vtkImporter::GetRenderWindow());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImporter_Read(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Read");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImporter *op = static_cast<vtkImporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Read();
    }
    else
    {
      op->vtkImporter::Read();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImporter_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImporter *op = static_cast<vtkImporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Update();
    }
    else
    {
      op->vtkImporter::Update();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkImporter_Methods[] = {
  {"IsTypeOf", PyvtkImporter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImporter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImporter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkImporter\nC++: static vtkImporter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImporter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkImporter\nC++: vtkImporter *NewInstance()\n\n"},
  {"GetRenderer", PyvtkImporter_GetRenderer, METH_VARARGS,
   "V.GetRenderer() -> vtkRenderer\nC++: virtual vtkRenderer *GetRenderer()\n\nGet the renderer that contains the imported actors, cameras and\nlights.\n"},
  {"SetRenderWindow", PyvtkImporter_SetRenderWindow, METH_VARARGS,
   "V.SetRenderWindow(vtkRenderWindow)\nC++: virtual void SetRenderWindow(vtkRenderWindow *)\n\nSet the vtkRenderWindow to contain the imported actors, cameras\nand lights, If no vtkRenderWindow is set, one will be created and\ncan be obtained with the GetRenderWindow method. If the\nvtkRenderWindow has been specified, the first vtkRenderer it has\nwill be used to import the objects. If the vtkRenderWindow has no\nRenderer, one will be created and can be accessed using\nGetRenderer.\n"},
  {"GetRenderWindow", PyvtkImporter_GetRenderWindow, METH_VARARGS,
   "V.GetRenderWindow() -> vtkRenderWindow\nC++: virtual vtkRenderWindow *GetRenderWindow()\n\nSet the vtkRenderWindow to contain the imported actors, cameras\nand lights, If no vtkRenderWindow is set, one will be created and\ncan be obtained with the GetRenderWindow method. If the\nvtkRenderWindow has been specified, the first vtkRenderer it has\nwill be used to import the objects. If the vtkRenderWindow has no\nRenderer, one will be created and can be accessed using\nGetRenderer.\n"},
  {"Read", PyvtkImporter_Read, METH_VARARGS,
   "V.Read()\nC++: void Read()\n\nImport the actors, cameras, lights and properties into a\nvtkRenderWindow.\n"},
  {"Update", PyvtkImporter_Update, METH_VARARGS,
   "V.Update()\nC++: void Update()\n\nImport the actors, cameras, lights and properties into a\nvtkRenderWindow.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkImporter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOImportPython.vtkImporter", // tp_name
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
  PyvtkImporter_Doc, // tp_doc
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

PyObject *PyvtkImporter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkImporter_Type, PyvtkImporter_Methods,
    "vtkImporter",
 nullptr);

  PyTypeObject *pytype = &PyvtkImporter_Type;

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

void PyVTKAddFile_vtkImporter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImporter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImporter", o) != 0)
  {
    Py_DECREF(o);
  }

}

