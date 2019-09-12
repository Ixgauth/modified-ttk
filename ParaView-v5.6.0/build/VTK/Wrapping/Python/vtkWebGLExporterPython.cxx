// python wrapper for vtkWebGLExporter
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
#include "vtkStdString.h"
#include "vtkWebGLExporter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkWebGLExporter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkWebGLExporter_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkWebGLExporter_Doc =
  "vtkWebGLExporter - vtkWebGLExporter export the data of the scene to\nbe used in the WebGL.\n\n"
  "Superclass: vtkObject\n\n"
;


static PyObject *
PyvtkWebGLExporter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkWebGLExporter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWebGLExporter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLExporter *op = static_cast<vtkWebGLExporter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkWebGLExporter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWebGLExporter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkWebGLExporter *tempr = vtkWebGLExporter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWebGLExporter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLExporter *op = static_cast<vtkWebGLExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkWebGLExporter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkWebGLExporter::NewInstance());

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
PyvtkWebGLExporter_parseScene(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "parseScene");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLExporter *op = static_cast<vtkWebGLExporter *>(vp);

  vtkRendererCollection *temp0 = nullptr;
  const char *temp1 = nullptr;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkRendererCollection") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->parseScene(temp0, temp1, temp2);
    }
    else
    {
      op->vtkWebGLExporter::parseScene(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWebGLExporter_exportStaticScene(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "exportStaticScene");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLExporter *op = static_cast<vtkWebGLExporter *>(vp);

  vtkRendererCollection *temp0 = nullptr;
  int temp1;
  int temp2;
  std::string temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkRendererCollection") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->exportStaticScene(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkWebGLExporter::exportStaticScene(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWebGLExporter_GenerateMetadata(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateMetadata");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLExporter *op = static_cast<vtkWebGLExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GenerateMetadata() :
      op->vtkWebGLExporter::GenerateMetadata());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWebGLExporter_GetId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLExporter *op = static_cast<vtkWebGLExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetId() :
      op->vtkWebGLExporter::GetId());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWebGLExporter_GetWebGLObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWebGLObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLExporter *op = static_cast<vtkWebGLExporter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkWebGLObject *tempr = (ap.IsBound() ?
      op->GetWebGLObject(temp0) :
      op->vtkWebGLExporter::GetWebGLObject(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWebGLExporter_GetNumberOfObjects(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfObjects");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLExporter *op = static_cast<vtkWebGLExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfObjects() :
      op->vtkWebGLExporter::GetNumberOfObjects());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWebGLExporter_hasChanged(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "hasChanged");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLExporter *op = static_cast<vtkWebGLExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->hasChanged() :
      op->vtkWebGLExporter::hasChanged());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWebGLExporter_SetCenterOfRotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenterOfRotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLExporter *op = static_cast<vtkWebGLExporter *>(vp);

  float temp0;
  float temp1;
  float temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetCenterOfRotation(temp0, temp1, temp2);
    }
    else
    {
      op->vtkWebGLExporter::SetCenterOfRotation(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWebGLExporter_SetMaxAllowedSize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxAllowedSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLExporter *op = static_cast<vtkWebGLExporter *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetMaxAllowedSize(temp0, temp1);
    }
    else
    {
      op->vtkWebGLExporter::SetMaxAllowedSize(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkWebGLExporter_SetMaxAllowedSize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxAllowedSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLExporter *op = static_cast<vtkWebGLExporter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaxAllowedSize(temp0);
    }
    else
    {
      op->vtkWebGLExporter::SetMaxAllowedSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkWebGLExporter_SetMaxAllowedSize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkWebGLExporter_SetMaxAllowedSize_s1(self, args);
    case 1:
      return PyvtkWebGLExporter_SetMaxAllowedSize_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetMaxAllowedSize");
  return nullptr;
}



static PyObject *
PyvtkWebGLExporter_ComputeMD5(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ComputeMD5");

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<unsigned char> store0(size0);
  unsigned char *temp0 = store0.Data();
  int temp1;
  std::string temp2;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    vtkWebGLExporter::ComputeMD5(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(2, temp2);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkWebGLExporter_Methods[] = {
  {"IsTypeOf", PyvtkWebGLExporter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkWebGLExporter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkWebGLExporter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkWebGLExporter\nC++: static vtkWebGLExporter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkWebGLExporter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkWebGLExporter\nC++: vtkWebGLExporter *NewInstance()\n\n"},
  {"parseScene", PyvtkWebGLExporter_parseScene, METH_VARARGS,
   "V.parseScene(vtkRendererCollection, string, int)\nC++: void parseScene(vtkRendererCollection *renderers,\n    const char *viewId, int parseType)\n\nGet all the needed information from the vtkRenderer\n"},
  {"exportStaticScene", PyvtkWebGLExporter_exportStaticScene, METH_VARARGS,
   "V.exportStaticScene(vtkRendererCollection, int, int, string)\nC++: void exportStaticScene(vtkRendererCollection *renderers,\n    int width, int height, std::string path)\n\n"},
  {"GenerateMetadata", PyvtkWebGLExporter_GenerateMetadata, METH_VARARGS,
   "V.GenerateMetadata() -> string\nC++: const char *GenerateMetadata()\n\n"},
  {"GetId", PyvtkWebGLExporter_GetId, METH_VARARGS,
   "V.GetId() -> string\nC++: const char *GetId()\n\n"},
  {"GetWebGLObject", PyvtkWebGLExporter_GetWebGLObject, METH_VARARGS,
   "V.GetWebGLObject(int) -> vtkWebGLObject\nC++: vtkWebGLObject *GetWebGLObject(int index)\n\n"},
  {"GetNumberOfObjects", PyvtkWebGLExporter_GetNumberOfObjects, METH_VARARGS,
   "V.GetNumberOfObjects() -> int\nC++: int GetNumberOfObjects()\n\n"},
  {"hasChanged", PyvtkWebGLExporter_hasChanged, METH_VARARGS,
   "V.hasChanged() -> bool\nC++: bool hasChanged()\n\n"},
  {"SetCenterOfRotation", PyvtkWebGLExporter_SetCenterOfRotation, METH_VARARGS,
   "V.SetCenterOfRotation(float, float, float)\nC++: void SetCenterOfRotation(float a1, float a2, float a3)\n\n"},
  {"SetMaxAllowedSize", PyvtkWebGLExporter_SetMaxAllowedSize, METH_VARARGS,
   "V.SetMaxAllowedSize(int, int)\nC++: void SetMaxAllowedSize(int mesh, int lines)\nV.SetMaxAllowedSize(int)\nC++: void SetMaxAllowedSize(int size)\n\n"},
  {"ComputeMD5", PyvtkWebGLExporter_ComputeMD5, METH_VARARGS,
   "V.ComputeMD5((int, ...), int, string)\nC++: static void ComputeMD5(const unsigned char *content,\n    int size, std::string &hash)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkWebGLExporter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkWebGLExporterPython.vtkWebGLExporter", // tp_name
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
  PyvtkWebGLExporter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkWebGLExporter_StaticNew()
{
  return vtkWebGLExporter::New();
}

PyObject *PyvtkWebGLExporter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkWebGLExporter_Type, PyvtkWebGLExporter_Methods,
    "vtkWebGLExporter",
 &PyvtkWebGLExporter_StaticNew);

  PyTypeObject *pytype = &PyvtkWebGLExporter_Type;

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

void PyVTKAddFile_vtkWebGLExporter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkWebGLExporter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkWebGLExporter", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 3; c++)
  {
    static const struct { const char *name; int value; }
      constants[3] = {
        { "VTK_ONLYCAMERA", VTK_ONLYCAMERA },
        { "VTK_ONLYWIDGET", VTK_ONLYWIDGET },
        { "VTK_PARSEALL", VTK_PARSEALL },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

