// python wrapper for vtkExporter
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
#include "vtkExporter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkExporter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkExporter_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkExporter_Doc =
  "vtkExporter - abstract class to write a scene to a file\n\n"
  "Superclass: vtkObject\n\n"
  "vtkExporter is an abstract class that exports a scene to a file. It\n"
  "is very similar to vtkWriter except that a writer only writes out the\n"
  "geometric and topological data for an object, where an exporter can\n"
  "write out material properties, lighting, camera parameters etc. The\n"
  "concrete subclasses of this class may not write out all of this\n"
  "information. For example vtkOBJExporter writes out Wavefront obj\n"
  "files which do not include support for camera parameters.\n\n"
  "vtkExporter provides the convenience methods StartWrite() and\n"
  "EndWrite(). These methods are executed before and after execution of\n"
  "the Write() method. You can also specify arguments to these methods.\n"
  "This class defines SetInput and GetInput methods which take or return\n"
  "a vtkRenderWindow.\n"
  "@warning\n"
  "Every subclass of vtkExporter must implement a WriteData() method.\n\n"
  "@sa\n"
  "vtkOBJExporter vtkRenderWindow vtkWriter\n\n";


static PyObject *
PyvtkExporter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkExporter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExporter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExporter *op = static_cast<vtkExporter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkExporter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExporter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkExporter *tempr = vtkExporter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExporter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExporter *op = static_cast<vtkExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkExporter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkExporter::NewInstance());

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
PyvtkExporter_Write(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Write");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExporter *op = static_cast<vtkExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Write();
    }
    else
    {
      op->vtkExporter::Write();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExporter_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExporter *op = static_cast<vtkExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Update();
    }
    else
    {
      op->vtkExporter::Update();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExporter_SetRenderWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExporter *op = static_cast<vtkExporter *>(vp);

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
      op->vtkExporter::SetRenderWindow(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExporter_GetRenderWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExporter *op = static_cast<vtkExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderWindow *tempr = (ap.IsBound() ?
      op->GetRenderWindow() :
      op->vtkExporter::GetRenderWindow());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExporter_SetActiveRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActiveRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExporter *op = static_cast<vtkExporter *>(vp);

  vtkRenderer *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
  {
    if (ap.IsBound())
    {
      op->SetActiveRenderer(temp0);
    }
    else
    {
      op->vtkExporter::SetActiveRenderer(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExporter_GetActiveRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActiveRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExporter *op = static_cast<vtkExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderer *tempr = (ap.IsBound() ?
      op->GetActiveRenderer() :
      op->vtkExporter::GetActiveRenderer());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExporter_SetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExporter *op = static_cast<vtkExporter *>(vp);

  vtkRenderWindow *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderWindow"))
  {
    if (ap.IsBound())
    {
      op->SetInput(temp0);
    }
    else
    {
      op->vtkExporter::SetInput(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExporter_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExporter *op = static_cast<vtkExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderWindow *tempr = (ap.IsBound() ?
      op->GetInput() :
      op->vtkExporter::GetInput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExporter_SetStartWrite(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStartWrite");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExporter *op = static_cast<vtkExporter *>(vp);

  PyObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetFunction(temp0))
  {
    if (ap.IsBound())
    {
      op->SetStartWrite(
        (temp0 == Py_None ? nullptr : vtkPythonVoidFunc),
        (temp0 == Py_None ? nullptr : temp0));
      if (temp0 != Py_None)
      {
        Py_INCREF(temp0);
      }
      op->SetStartWriteArgDelete(
        (temp0 == Py_None ? nullptr : vtkPythonVoidFuncArgDelete));
    }
    else
    {
      op->vtkExporter::SetStartWrite(
        (temp0 == Py_None ? nullptr : vtkPythonVoidFunc),
        (temp0 == Py_None ? nullptr : temp0));
      if (temp0 != Py_None)
      {
        Py_INCREF(temp0);
      }
      op->vtkExporter::SetStartWriteArgDelete(
        (temp0 == Py_None ? nullptr : vtkPythonVoidFuncArgDelete));
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExporter_SetEndWrite(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEndWrite");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExporter *op = static_cast<vtkExporter *>(vp);

  PyObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetFunction(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEndWrite(
        (temp0 == Py_None ? nullptr : vtkPythonVoidFunc),
        (temp0 == Py_None ? nullptr : temp0));
      if (temp0 != Py_None)
      {
        Py_INCREF(temp0);
      }
      op->SetEndWriteArgDelete(
        (temp0 == Py_None ? nullptr : vtkPythonVoidFuncArgDelete));
    }
    else
    {
      op->vtkExporter::SetEndWrite(
        (temp0 == Py_None ? nullptr : vtkPythonVoidFunc),
        (temp0 == Py_None ? nullptr : temp0));
      if (temp0 != Py_None)
      {
        Py_INCREF(temp0);
      }
      op->vtkExporter::SetEndWriteArgDelete(
        (temp0 == Py_None ? nullptr : vtkPythonVoidFuncArgDelete));
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExporter_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExporter *op = static_cast<vtkExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkExporter::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkExporter_Methods[] = {
  {"IsTypeOf", PyvtkExporter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkExporter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkExporter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkExporter\nC++: static vtkExporter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkExporter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkExporter\nC++: vtkExporter *NewInstance()\n\n"},
  {"Write", PyvtkExporter_Write, METH_VARARGS,
   "V.Write()\nC++: virtual void Write()\n\nWrite data to output. Method executes subclasses WriteData()\nmethod, as well as StartWrite() and EndWrite() methods.\n"},
  {"Update", PyvtkExporter_Update, METH_VARARGS,
   "V.Update()\nC++: void Update()\n\nConvenient alias for Write() method.\n"},
  {"SetRenderWindow", PyvtkExporter_SetRenderWindow, METH_VARARGS,
   "V.SetRenderWindow(vtkRenderWindow)\nC++: virtual void SetRenderWindow(vtkRenderWindow *)\n\nSet/Get the rendering window that contains the scene to be\nwritten.\n"},
  {"GetRenderWindow", PyvtkExporter_GetRenderWindow, METH_VARARGS,
   "V.GetRenderWindow() -> vtkRenderWindow\nC++: virtual vtkRenderWindow *GetRenderWindow()\n\nSet/Get the rendering window that contains the scene to be\nwritten.\n"},
  {"SetActiveRenderer", PyvtkExporter_SetActiveRenderer, METH_VARARGS,
   "V.SetActiveRenderer(vtkRenderer)\nC++: virtual void SetActiveRenderer(vtkRenderer *)\n\nSet/Get the renderer that contains actors to be written. If it is\nset to nullptr (by default), then in most subclasses the behavior\nis to only export actors of the first renderer. In some\nsubclasses, if ActiveRenderer is nullptr then actors of all\nrenderers will be exported. The renderer must be in the renderer\ncollection of the specified RenderWindow.\n\\sa SetRenderWindow()\n"},
  {"GetActiveRenderer", PyvtkExporter_GetActiveRenderer, METH_VARARGS,
   "V.GetActiveRenderer() -> vtkRenderer\nC++: virtual vtkRenderer *GetActiveRenderer()\n\nSet/Get the renderer that contains actors to be written. If it is\nset to nullptr (by default), then in most subclasses the behavior\nis to only export actors of the first renderer. In some\nsubclasses, if ActiveRenderer is nullptr then actors of all\nrenderers will be exported. The renderer must be in the renderer\ncollection of the specified RenderWindow.\n\\sa SetRenderWindow()\n"},
  {"SetInput", PyvtkExporter_SetInput, METH_VARARGS,
   "V.SetInput(vtkRenderWindow)\nC++: void SetInput(vtkRenderWindow *renWin)\n\nThese methods are provided for backward compatibility. Will\ndisappear soon.\n"},
  {"GetInput", PyvtkExporter_GetInput, METH_VARARGS,
   "V.GetInput() -> vtkRenderWindow\nC++: vtkRenderWindow *GetInput()\n\nThese methods are provided for backward compatibility. Will\ndisappear soon.\n"},
  {"SetStartWrite", PyvtkExporter_SetStartWrite, METH_VARARGS,
   "V.SetStartWrite(function)\nC++: void SetStartWrite(void (*f)(void *), void *arg)\n\nSpecify a function to be called before data is written.  Function\nwill be called with argument provided.\n"},
  {"SetEndWrite", PyvtkExporter_SetEndWrite, METH_VARARGS,
   "V.SetEndWrite(function)\nC++: void SetEndWrite(void (*f)(void *), void *arg)\n\nSpecify a function to be called after data is written. Function\nwill be called with argument provided.\n"},
  {"GetMTime", PyvtkExporter_GetMTime, METH_VARARGS,
   "V.GetMTime() -> int\nC++: vtkMTimeType GetMTime() override;\n\nReturns the MTime also considering the RenderWindow.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkExporter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOExportPython.vtkExporter", // tp_name
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
  PyvtkExporter_Doc, // tp_doc
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

PyObject *PyvtkExporter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkExporter_Type, PyvtkExporter_Methods,
    "vtkExporter",
 nullptr);

  PyTypeObject *pytype = &PyvtkExporter_Type;

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

void PyVTKAddFile_vtkExporter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkExporter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkExporter", o) != 0)
  {
    Py_DECREF(o);
  }

}

