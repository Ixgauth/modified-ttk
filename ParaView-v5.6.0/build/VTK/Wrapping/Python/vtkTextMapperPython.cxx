// python wrapper for vtkTextMapper
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
#include "vtkTextMapper.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkTextMapper(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkTextMapper_ClassNew(); }

#ifndef DECLARED_PyvtkMapper2D_ClassNew
extern "C" { PyObject *PyvtkMapper2D_ClassNew(); }
#define DECLARED_PyvtkMapper2D_ClassNew
#endif

static const char *PyvtkTextMapper_Doc =
  "vtkTextMapper - 2D text annotation\n\n"
  "Superclass: vtkMapper2D\n\n"
  "vtkTextMapper provides 2D text annotation support for VTK.  It is a\n"
  "vtkMapper2D that can be associated with a vtkActor2D and placed into\n"
  "a vtkRenderer.\n\n"
  "To use vtkTextMapper, specify an input text string.\n\n"
  "@sa\n"
  "vtkActor2D vtkTextActor vtkTextActor3D vtkTextProperty\n"
  "vtkTextRenderer\n\n";


static PyObject *
PyvtkTextMapper_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTextMapper::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextMapper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextMapper *op = static_cast<vtkTextMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTextMapper::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextMapper_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTextMapper *tempr = vtkTextMapper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextMapper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextMapper *op = static_cast<vtkTextMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTextMapper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTextMapper::NewInstance());

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
PyvtkTextMapper_GetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextMapper *op = static_cast<vtkTextMapper *>(vp);

  vtkViewport *temp0 = nullptr;
  const size_t size1 = 2;
  int temp1[2];
  int save1[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkViewport") &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->GetSize(temp0, temp1);
    }
    else
    {
      op->vtkTextMapper::GetSize(temp0, temp1);
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
PyvtkTextMapper_GetWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextMapper *op = static_cast<vtkTextMapper *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->GetWidth(temp0) :
      op->vtkTextMapper::GetWidth(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextMapper_GetHeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextMapper *op = static_cast<vtkTextMapper *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->GetHeight(temp0) :
      op->vtkTextMapper::GetHeight(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextMapper_SetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextMapper *op = static_cast<vtkTextMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInput(temp0);
    }
    else
    {
      op->vtkTextMapper::SetInput(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextMapper_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextMapper *op = static_cast<vtkTextMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetInput() :
      op->vtkTextMapper::GetInput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextMapper_SetTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextMapper *op = static_cast<vtkTextMapper *>(vp);

  vtkTextProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextProperty"))
  {
    if (ap.IsBound())
    {
      op->SetTextProperty(temp0);
    }
    else
    {
      op->vtkTextMapper::SetTextProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextMapper_GetTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextMapper *op = static_cast<vtkTextMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetTextProperty() :
      op->vtkTextMapper::GetTextProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextMapper_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextMapper *op = static_cast<vtkTextMapper *>(vp);

  vtkTextMapper *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextMapper"))
  {
    if (ap.IsBound())
    {
      op->ShallowCopy(temp0);
    }
    else
    {
      op->vtkTextMapper::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextMapper_SetConstrainedFontSize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConstrainedFontSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextMapper *op = static_cast<vtkTextMapper *>(vp);

  vtkViewport *temp0 = nullptr;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkViewport") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    int tempr = (ap.IsBound() ?
      op->SetConstrainedFontSize(temp0, temp1, temp2) :
      op->vtkTextMapper::SetConstrainedFontSize(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkTextMapper_SetConstrainedFontSize_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetConstrainedFontSize");

  vtkTextMapper *temp0 = nullptr;
  vtkViewport *temp1 = nullptr;
  int temp2;
  int temp3;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkTextMapper") &&
      ap.GetVTKObject(temp1, "vtkViewport") &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    int tempr = vtkTextMapper::SetConstrainedFontSize(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkTextMapper_SetConstrainedFontSize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 3:
      return PyvtkTextMapper_SetConstrainedFontSize_s1(self, args);
    case 4:
      return PyvtkTextMapper_SetConstrainedFontSize_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetConstrainedFontSize");
  return nullptr;
}



static PyObject *
PyvtkTextMapper_SetRelativeFontSize(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetRelativeFontSize");

  vtkTextMapper *temp0 = nullptr;
  vtkViewport *temp1 = nullptr;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<int> store2(2*size2);
  int *temp2 = store2.Data();
  int *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<int> store3(2*size3);
  int *temp3 = store3.Data();
  int *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  float temp4 = 0.0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(4, 5) &&
      ap.GetVTKObject(temp0, "vtkTextMapper") &&
      ap.GetVTKObject(temp1, "vtkViewport") &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3) &&
      (ap.NoArgsLeft() || ap.GetValue(temp4)))
  {
    ap.Save(temp2, save2, size2);
    ap.Save(temp3, save3, size3);

    int tempr = vtkTextMapper::SetRelativeFontSize(temp0, temp1, temp2, temp3, temp4);

    if (ap.HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (ap.HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextMapper_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextMapper *op = static_cast<vtkTextMapper *>(vp);

  vtkViewport *temp0 = nullptr;
  vtkActor2D *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkViewport") &&
      ap.GetVTKObject(temp1, "vtkActor2D"))
  {
    if (ap.IsBound())
    {
      op->RenderOverlay(temp0, temp1);
    }
    else
    {
      op->vtkTextMapper::RenderOverlay(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextMapper_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextMapper *op = static_cast<vtkTextMapper *>(vp);

  vtkWindow *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkWindow"))
  {
    if (ap.IsBound())
    {
      op->ReleaseGraphicsResources(temp0);
    }
    else
    {
      op->vtkTextMapper::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextMapper_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextMapper *op = static_cast<vtkTextMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkTextMapper::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkTextMapper_Methods[] = {
  {"IsTypeOf", PyvtkTextMapper_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkTextMapper_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkTextMapper_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkTextMapper\nC++: static vtkTextMapper *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkTextMapper_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkTextMapper\nC++: vtkTextMapper *NewInstance()\n\n"},
  {"GetSize", PyvtkTextMapper_GetSize, METH_VARARGS,
   "V.GetSize(vtkViewport, [int, int])\nC++: virtual void GetSize(vtkViewport *, int size[2])\n\nReturn the size[2]/width/height of the rectangle required to draw\nthis mapper (in pixels).\n"},
  {"GetWidth", PyvtkTextMapper_GetWidth, METH_VARARGS,
   "V.GetWidth(vtkViewport) -> int\nC++: virtual int GetWidth(vtkViewport *v)\n\nReturn the size[2]/width/height of the rectangle required to draw\nthis mapper (in pixels).\n"},
  {"GetHeight", PyvtkTextMapper_GetHeight, METH_VARARGS,
   "V.GetHeight(vtkViewport) -> int\nC++: virtual int GetHeight(vtkViewport *v)\n\nReturn the size[2]/width/height of the rectangle required to draw\nthis mapper (in pixels).\n"},
  {"SetInput", PyvtkTextMapper_SetInput, METH_VARARGS,
   "V.SetInput(string)\nC++: virtual void SetInput(const char *_arg)\n\nThe input text string to the mapper.\n"},
  {"GetInput", PyvtkTextMapper_GetInput, METH_VARARGS,
   "V.GetInput() -> string\nC++: virtual char *GetInput()\n\nThe input text string to the mapper.\n"},
  {"SetTextProperty", PyvtkTextMapper_SetTextProperty, METH_VARARGS,
   "V.SetTextProperty(vtkTextProperty)\nC++: virtual void SetTextProperty(vtkTextProperty *p)\n\nSet/Get the text property.\n"},
  {"GetTextProperty", PyvtkTextMapper_GetTextProperty, METH_VARARGS,
   "V.GetTextProperty() -> vtkTextProperty\nC++: virtual vtkTextProperty *GetTextProperty()\n\nSet/Get the text property.\n"},
  {"ShallowCopy", PyvtkTextMapper_ShallowCopy, METH_VARARGS,
   "V.ShallowCopy(vtkTextMapper)\nC++: void ShallowCopy(vtkTextMapper *tm)\n\nShallow copy of an actor.\n"},
  {"SetConstrainedFontSize", PyvtkTextMapper_SetConstrainedFontSize, METH_VARARGS,
   "V.SetConstrainedFontSize(vtkViewport, int, int) -> int\nC++: virtual int SetConstrainedFontSize(vtkViewport *,\n    int targetWidth, int targetHeight)\nV.SetConstrainedFontSize(vtkTextMapper, vtkViewport, int, int)\n    -> int\nC++: static int SetConstrainedFontSize(vtkTextMapper *,\n    vtkViewport *, int targetWidth, int targetHeight)\n\nSet and return the font size (in points) required to make this\nmapper fit in a given target rectangle (width x height, in\npixels). A static version of the method is also available for\nconvenience to other classes (e.g., widgets).\n"},
  {"SetRelativeFontSize", PyvtkTextMapper_SetRelativeFontSize, METH_VARARGS,
   "V.SetRelativeFontSize(vtkTextMapper, vtkViewport, [int, ...],\n    [int, ...], float) -> int\nC++: static int SetRelativeFontSize(vtkTextMapper *,\n    vtkViewport *, int *winSize, int *stringSize,\n    float sizeFactor=0.0)\n\nUse these methods when setting font size relative to the\nrenderer's size. These methods are static so that external\nclasses (e.g., widgets) can easily use them.\n"},
  {"RenderOverlay", PyvtkTextMapper_RenderOverlay, METH_VARARGS,
   "V.RenderOverlay(vtkViewport, vtkActor2D)\nC++: void RenderOverlay(vtkViewport *, vtkActor2D *) override;\n\n"},
  {"ReleaseGraphicsResources", PyvtkTextMapper_ReleaseGraphicsResources, METH_VARARGS,
   "V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nRelease any graphics resources that are being consumed by this\nmapper. The parameter window could be used to determine which\ngraphic resources to release.\n"},
  {"GetMTime", PyvtkTextMapper_GetMTime, METH_VARARGS,
   "V.GetMTime() -> int\nC++: vtkMTimeType GetMTime() override;\n\nOverride Modifiedtime as we have added Clipping planes\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkTextMapper_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingCorePython.vtkTextMapper", // tp_name
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
  PyvtkTextMapper_Doc, // tp_doc
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

static vtkObjectBase *PyvtkTextMapper_StaticNew()
{
  return vtkTextMapper::New();
}

PyObject *PyvtkTextMapper_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkTextMapper_Type, PyvtkTextMapper_Methods,
    "vtkTextMapper",
 &PyvtkTextMapper_StaticNew);

  PyTypeObject *pytype = &PyvtkTextMapper_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkMapper2D_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkTextMapper(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkTextMapper_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkTextMapper", o) != 0)
  {
    Py_DECREF(o);
  }

}

