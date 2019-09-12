// python wrapper for vtkGraphToGlyphs
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
#include "vtkGraphToGlyphs.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkGraphToGlyphs(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkGraphToGlyphs_ClassNew(); }

#ifndef DECLARED_PyvtkPolyDataAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPolyDataAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPolyDataAlgorithm_ClassNew
#endif

static const char *PyvtkGraphToGlyphs_Doc =
  "vtkGraphToGlyphs - create glyphs for graph vertices\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "Converts a vtkGraph to a vtkPolyData containing a glyph for each\n"
  "vertex. This assumes that the points of the graph have already been\n"
  "filled (perhaps by vtkGraphLayout). The glyphs will automatically be\n"
  "scaled to be the same size in screen coordinates. To do this the\n"
  "filter requires a pointer to the renderer into which the glyphs will\n"
  "be rendered.\n\n";


static PyObject *
PyvtkGraphToGlyphs_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkGraphToGlyphs::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphToGlyphs_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphToGlyphs *op = static_cast<vtkGraphToGlyphs *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGraphToGlyphs::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphToGlyphs_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkGraphToGlyphs *tempr = vtkGraphToGlyphs::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphToGlyphs_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphToGlyphs *op = static_cast<vtkGraphToGlyphs *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkGraphToGlyphs *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGraphToGlyphs::NewInstance());

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
PyvtkGraphToGlyphs_SetGlyphType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlyphType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphToGlyphs *op = static_cast<vtkGraphToGlyphs *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGlyphType(temp0);
    }
    else
    {
      op->vtkGraphToGlyphs::SetGlyphType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphToGlyphs_GetGlyphType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGlyphType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphToGlyphs *op = static_cast<vtkGraphToGlyphs *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGlyphType() :
      op->vtkGraphToGlyphs::GetGlyphType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphToGlyphs_SetFilled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFilled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphToGlyphs *op = static_cast<vtkGraphToGlyphs *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFilled(temp0);
    }
    else
    {
      op->vtkGraphToGlyphs::SetFilled(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphToGlyphs_GetFilled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFilled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphToGlyphs *op = static_cast<vtkGraphToGlyphs *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetFilled() :
      op->vtkGraphToGlyphs::GetFilled());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphToGlyphs_FilledOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FilledOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphToGlyphs *op = static_cast<vtkGraphToGlyphs *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FilledOn();
    }
    else
    {
      op->vtkGraphToGlyphs::FilledOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphToGlyphs_FilledOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FilledOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphToGlyphs *op = static_cast<vtkGraphToGlyphs *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FilledOff();
    }
    else
    {
      op->vtkGraphToGlyphs::FilledOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphToGlyphs_SetScreenSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScreenSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphToGlyphs *op = static_cast<vtkGraphToGlyphs *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScreenSize(temp0);
    }
    else
    {
      op->vtkGraphToGlyphs::SetScreenSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphToGlyphs_GetScreenSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScreenSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphToGlyphs *op = static_cast<vtkGraphToGlyphs *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetScreenSize() :
      op->vtkGraphToGlyphs::GetScreenSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphToGlyphs_SetRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphToGlyphs *op = static_cast<vtkGraphToGlyphs *>(vp);

  vtkRenderer *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
  {
    if (ap.IsBound())
    {
      op->SetRenderer(temp0);
    }
    else
    {
      op->vtkGraphToGlyphs::SetRenderer(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphToGlyphs_GetRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphToGlyphs *op = static_cast<vtkGraphToGlyphs *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderer *tempr = (ap.IsBound() ?
      op->GetRenderer() :
      op->vtkGraphToGlyphs::GetRenderer());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphToGlyphs_SetScaling(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaling");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphToGlyphs *op = static_cast<vtkGraphToGlyphs *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScaling(temp0);
    }
    else
    {
      op->vtkGraphToGlyphs::SetScaling(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphToGlyphs_GetScaling(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaling");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphToGlyphs *op = static_cast<vtkGraphToGlyphs *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetScaling() :
      op->vtkGraphToGlyphs::GetScaling());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphToGlyphs_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphToGlyphs *op = static_cast<vtkGraphToGlyphs *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkGraphToGlyphs::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkGraphToGlyphs_Methods[] = {
  {"IsTypeOf", PyvtkGraphToGlyphs_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkGraphToGlyphs_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkGraphToGlyphs_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkGraphToGlyphs\nC++: static vtkGraphToGlyphs *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkGraphToGlyphs_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkGraphToGlyphs\nC++: vtkGraphToGlyphs *NewInstance()\n\n"},
  {"SetGlyphType", PyvtkGraphToGlyphs_SetGlyphType, METH_VARARGS,
   "V.SetGlyphType(int)\nC++: virtual void SetGlyphType(int _arg)\n\nThe glyph type, specified as one of the enumerated values in this\nclass. VERTEX is a special glyph that cannot be scaled, but\ninstead is rendered as an OpenGL vertex primitive. This may\nappear as a box or circle depending on the hardware.\n"},
  {"GetGlyphType", PyvtkGraphToGlyphs_GetGlyphType, METH_VARARGS,
   "V.GetGlyphType() -> int\nC++: virtual int GetGlyphType()\n\nThe glyph type, specified as one of the enumerated values in this\nclass. VERTEX is a special glyph that cannot be scaled, but\ninstead is rendered as an OpenGL vertex primitive. This may\nappear as a box or circle depending on the hardware.\n"},
  {"SetFilled", PyvtkGraphToGlyphs_SetFilled, METH_VARARGS,
   "V.SetFilled(bool)\nC++: virtual void SetFilled(bool _arg)\n\nWhether to fill the glyph, or to just render the outline.\n"},
  {"GetFilled", PyvtkGraphToGlyphs_GetFilled, METH_VARARGS,
   "V.GetFilled() -> bool\nC++: virtual bool GetFilled()\n\nWhether to fill the glyph, or to just render the outline.\n"},
  {"FilledOn", PyvtkGraphToGlyphs_FilledOn, METH_VARARGS,
   "V.FilledOn()\nC++: virtual void FilledOn()\n\nWhether to fill the glyph, or to just render the outline.\n"},
  {"FilledOff", PyvtkGraphToGlyphs_FilledOff, METH_VARARGS,
   "V.FilledOff()\nC++: virtual void FilledOff()\n\nWhether to fill the glyph, or to just render the outline.\n"},
  {"SetScreenSize", PyvtkGraphToGlyphs_SetScreenSize, METH_VARARGS,
   "V.SetScreenSize(float)\nC++: virtual void SetScreenSize(double _arg)\n\nSet the desired screen size of each glyph. If you are using\nscaling, this will be the size of the glyph when rendering an\nobject with scaling value 1.0.\n"},
  {"GetScreenSize", PyvtkGraphToGlyphs_GetScreenSize, METH_VARARGS,
   "V.GetScreenSize() -> float\nC++: virtual double GetScreenSize()\n\nSet the desired screen size of each glyph. If you are using\nscaling, this will be the size of the glyph when rendering an\nobject with scaling value 1.0.\n"},
  {"SetRenderer", PyvtkGraphToGlyphs_SetRenderer, METH_VARARGS,
   "V.SetRenderer(vtkRenderer)\nC++: virtual void SetRenderer(vtkRenderer *ren)\n\nThe renderer in which the glyphs will be placed.\n"},
  {"GetRenderer", PyvtkGraphToGlyphs_GetRenderer, METH_VARARGS,
   "V.GetRenderer() -> vtkRenderer\nC++: virtual vtkRenderer *GetRenderer()\n\nThe renderer in which the glyphs will be placed.\n"},
  {"SetScaling", PyvtkGraphToGlyphs_SetScaling, METH_VARARGS,
   "V.SetScaling(bool)\nC++: virtual void SetScaling(bool b)\n\nWhether to use the input array to process in order to scale the\nvertices.\n"},
  {"GetScaling", PyvtkGraphToGlyphs_GetScaling, METH_VARARGS,
   "V.GetScaling() -> bool\nC++: virtual bool GetScaling()\n\nWhether to use the input array to process in order to scale the\nvertices.\n"},
  {"GetMTime", PyvtkGraphToGlyphs_GetMTime, METH_VARARGS,
   "V.GetMTime() -> int\nC++: vtkMTimeType GetMTime() override;\n\nThe modified time of this filter.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkGraphToGlyphs_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingCorePython.vtkGraphToGlyphs", // tp_name
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
  PyvtkGraphToGlyphs_Doc, // tp_doc
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

static vtkObjectBase *PyvtkGraphToGlyphs_StaticNew()
{
  return vtkGraphToGlyphs::New();
}

PyObject *PyvtkGraphToGlyphs_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkGraphToGlyphs_Type, PyvtkGraphToGlyphs_Methods,
    "vtkGraphToGlyphs",
 &PyvtkGraphToGlyphs_StaticNew);

  PyTypeObject *pytype = &PyvtkGraphToGlyphs_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPolyDataAlgorithm_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 9; c++)
  {
    static const struct { const char *name; int value; }
      constants[9] = {
        { "VERTEX", vtkGraphToGlyphs::VERTEX },
        { "DASH", vtkGraphToGlyphs::DASH },
        { "CROSS", vtkGraphToGlyphs::CROSS },
        { "THICKCROSS", vtkGraphToGlyphs::THICKCROSS },
        { "TRIANGLE", vtkGraphToGlyphs::TRIANGLE },
        { "SQUARE", vtkGraphToGlyphs::SQUARE },
        { "CIRCLE", vtkGraphToGlyphs::CIRCLE },
        { "DIAMOND", vtkGraphToGlyphs::DIAMOND },
        { "SPHERE", vtkGraphToGlyphs::SPHERE },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkGraphToGlyphs(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkGraphToGlyphs_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkGraphToGlyphs", o) != 0)
  {
    Py_DECREF(o);
  }

}

