// python wrapper for vtkFreeTypeTools
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
#include "vtkUnicodeString.h"
#include "vtkFreeTypeTools.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkFreeTypeTools(PyObject *); }

static const char *PyvtkFreeTypeToolsCleanup_Doc =
  "vtkFreeTypeToolsCleanup - no description provided.\n\n"

  "vtkFreeTypeToolsCleanup()\n";

static PyMethodDef PyvtkFreeTypeToolsCleanup_Methods[] = {
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkFreeTypeToolsCleanup_vtkFreeTypeToolsCleanup(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkFreeTypeToolsCleanup");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkFreeTypeToolsCleanup *op = new vtkFreeTypeToolsCleanup();

    result = PyVTKSpecialObject_New("vtkFreeTypeToolsCleanup", op);
  }

  return result;
}

static PyMethodDef PyvtkFreeTypeToolsCleanup_vtkFreeTypeToolsCleanup_Methods[] = {
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkFreeTypeToolsCleanup_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkFreeTypeToolsCleanup_vtkFreeTypeToolsCleanup(nullptr, args);
}

static void PyvtkFreeTypeToolsCleanup_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkFreeTypeToolsCleanup *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkFreeTypeToolsCleanup_Hash(PyObject *self)
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

static PyTypeObject PyvtkFreeTypeToolsCleanup_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingFreeTypePython.vtkFreeTypeToolsCleanup", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkFreeTypeToolsCleanup_Delete, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkFreeTypeToolsCleanup_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkFreeTypeToolsCleanup_Doc, // tp_doc
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
  PyvtkFreeTypeToolsCleanup_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkFreeTypeToolsCleanup_TypeNew(); }

PyObject *PyvtkFreeTypeToolsCleanup_TypeNew()
{
  PyVTKSpecialType_Add(
    &PyvtkFreeTypeToolsCleanup_Type,
    PyvtkFreeTypeToolsCleanup_Methods,
    PyvtkFreeTypeToolsCleanup_vtkFreeTypeToolsCleanup_Methods,
    nullptr);

  PyTypeObject *pytype = &PyvtkFreeTypeToolsCleanup_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkFreeTypeTools_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkFreeTypeTools_Doc =
  "vtkFreeTypeTools - FreeType library support\n\n"
  "Superclass: vtkObject\n\n"
  "vtkFreeTypeTools provides a low-level interface to the FreeType2\n"
  "library, including font-cache and rasterization.\n\n"
  "@warning\n"
  "Internal use only.\n\n";


static PyObject *
PyvtkFreeTypeTools_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkFreeTypeTools::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFreeTypeTools_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFreeTypeTools *op = static_cast<vtkFreeTypeTools *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkFreeTypeTools::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFreeTypeTools_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkFreeTypeTools *tempr = vtkFreeTypeTools::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFreeTypeTools_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFreeTypeTools *op = static_cast<vtkFreeTypeTools *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkFreeTypeTools *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkFreeTypeTools::NewInstance());

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
PyvtkFreeTypeTools_GetInstance(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetInstance");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkFreeTypeTools *tempr = vtkFreeTypeTools::GetInstance();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFreeTypeTools_SetInstance(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetInstance");

  vtkFreeTypeTools *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkFreeTypeTools"))
  {
    vtkFreeTypeTools::SetInstance(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFreeTypeTools_SetDebugTextures(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDebugTextures");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFreeTypeTools *op = static_cast<vtkFreeTypeTools *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDebugTextures(temp0);
    }
    else
    {
      op->vtkFreeTypeTools::SetDebugTextures(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFreeTypeTools_GetDebugTextures(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDebugTextures");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFreeTypeTools *op = static_cast<vtkFreeTypeTools *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetDebugTextures() :
      op->vtkFreeTypeTools::GetDebugTextures());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFreeTypeTools_DebugTexturesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DebugTexturesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFreeTypeTools *op = static_cast<vtkFreeTypeTools *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DebugTexturesOn();
    }
    else
    {
      op->vtkFreeTypeTools::DebugTexturesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFreeTypeTools_DebugTexturesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DebugTexturesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFreeTypeTools *op = static_cast<vtkFreeTypeTools *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DebugTexturesOff();
    }
    else
    {
      op->vtkFreeTypeTools::DebugTexturesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFreeTypeTools_SetMaximumNumberOfFaces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumNumberOfFaces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFreeTypeTools *op = static_cast<vtkFreeTypeTools *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaximumNumberOfFaces(temp0);
    }
    else
    {
      op->vtkFreeTypeTools::SetMaximumNumberOfFaces(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFreeTypeTools_GetMaximumNumberOfFacesMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfFacesMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFreeTypeTools *op = static_cast<vtkFreeTypeTools *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetMaximumNumberOfFacesMinValue() :
      op->vtkFreeTypeTools::GetMaximumNumberOfFacesMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFreeTypeTools_GetMaximumNumberOfFacesMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfFacesMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFreeTypeTools *op = static_cast<vtkFreeTypeTools *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetMaximumNumberOfFacesMaxValue() :
      op->vtkFreeTypeTools::GetMaximumNumberOfFacesMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFreeTypeTools_GetMaximumNumberOfFaces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfFaces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFreeTypeTools *op = static_cast<vtkFreeTypeTools *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetMaximumNumberOfFaces() :
      op->vtkFreeTypeTools::GetMaximumNumberOfFaces());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFreeTypeTools_SetMaximumNumberOfSizes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumNumberOfSizes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFreeTypeTools *op = static_cast<vtkFreeTypeTools *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaximumNumberOfSizes(temp0);
    }
    else
    {
      op->vtkFreeTypeTools::SetMaximumNumberOfSizes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFreeTypeTools_GetMaximumNumberOfSizesMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfSizesMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFreeTypeTools *op = static_cast<vtkFreeTypeTools *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetMaximumNumberOfSizesMinValue() :
      op->vtkFreeTypeTools::GetMaximumNumberOfSizesMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFreeTypeTools_GetMaximumNumberOfSizesMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfSizesMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFreeTypeTools *op = static_cast<vtkFreeTypeTools *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetMaximumNumberOfSizesMaxValue() :
      op->vtkFreeTypeTools::GetMaximumNumberOfSizesMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFreeTypeTools_GetMaximumNumberOfSizes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfSizes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFreeTypeTools *op = static_cast<vtkFreeTypeTools *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetMaximumNumberOfSizes() :
      op->vtkFreeTypeTools::GetMaximumNumberOfSizes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFreeTypeTools_SetMaximumNumberOfBytes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumNumberOfBytes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFreeTypeTools *op = static_cast<vtkFreeTypeTools *>(vp);

  unsigned long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaximumNumberOfBytes(temp0);
    }
    else
    {
      op->vtkFreeTypeTools::SetMaximumNumberOfBytes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFreeTypeTools_GetMaximumNumberOfBytesMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfBytesMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFreeTypeTools *op = static_cast<vtkFreeTypeTools *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMaximumNumberOfBytesMinValue() :
      op->vtkFreeTypeTools::GetMaximumNumberOfBytesMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFreeTypeTools_GetMaximumNumberOfBytesMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfBytesMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFreeTypeTools *op = static_cast<vtkFreeTypeTools *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMaximumNumberOfBytesMaxValue() :
      op->vtkFreeTypeTools::GetMaximumNumberOfBytesMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFreeTypeTools_GetMaximumNumberOfBytes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfBytes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFreeTypeTools *op = static_cast<vtkFreeTypeTools *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMaximumNumberOfBytes() :
      op->vtkFreeTypeTools::GetMaximumNumberOfBytes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFreeTypeTools_GetBoundingBox_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBoundingBox");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFreeTypeTools *op = static_cast<vtkFreeTypeTools *>(vp);

  vtkTextProperty *temp0 = nullptr;
  vtkStdString temp1;
  int temp2;
  const size_t size3 = 4;
  int temp3[4];
  int save3[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkTextProperty") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3))
  {
    ap.Save(temp3, save3, size3);

    bool tempr = (ap.IsBound() ?
      op->GetBoundingBox(temp0, temp1, temp2, temp3) :
      op->vtkFreeTypeTools::GetBoundingBox(temp0, temp1, temp2, temp3));

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
PyvtkFreeTypeTools_GetBoundingBox_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBoundingBox");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFreeTypeTools *op = static_cast<vtkFreeTypeTools *>(vp);

  vtkTextProperty *temp0 = nullptr;
  vtkUnicodeString temp1;
  int temp2;
  const size_t size3 = 4;
  int temp3[4];
  int save3[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkTextProperty") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3))
  {
    ap.Save(temp3, save3, size3);

    bool tempr = (ap.IsBound() ?
      op->GetBoundingBox(temp0, temp1, temp2, temp3) :
      op->vtkFreeTypeTools::GetBoundingBox(temp0, temp1, temp2, temp3));

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

static PyMethodDef PyvtkFreeTypeTools_GetBoundingBox_Methods[] = {
  {nullptr, PyvtkFreeTypeTools_GetBoundingBox_s1, METH_VARARGS,
   "@VsiP *vtkTextProperty *i"},
  {nullptr, PyvtkFreeTypeTools_GetBoundingBox_s2, METH_VARARGS,
   "@VuiP *vtkTextProperty *i"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkFreeTypeTools_GetBoundingBox(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkFreeTypeTools_GetBoundingBox_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetBoundingBox");
  return nullptr;
}



static PyObject *
PyvtkFreeTypeTools_RenderString_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFreeTypeTools *op = static_cast<vtkFreeTypeTools *>(vp);

  vtkTextProperty *temp0 = nullptr;
  vtkStdString temp1;
  int temp2;
  vtkImageData *temp3 = nullptr;
  size_t size4 = 0;
  int store4[2*2];
  int *temp4 = nullptr;
  int *save4 = nullptr;
  if (ap.GetArgSize(4) > 0)
  {
    size4 = 2;
    temp4 = store4;
    save4 = store4 + 2;
  }
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4, 5) &&
      ap.GetVTKObject(temp0, "vtkTextProperty") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetVTKObject(temp3, "vtkImageData") &&
      (ap.NoArgsLeft() || ap.GetArray(temp4, size4)))
  {
    ap.Save(temp4, save4, size4);

    bool tempr = (ap.IsBound() ?
      op->RenderString(temp0, temp1, temp2, temp3, temp4) :
      op->vtkFreeTypeTools::RenderString(temp0, temp1, temp2, temp3, temp4));

    if (ap.HasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(4, temp4, size4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkFreeTypeTools_RenderString_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFreeTypeTools *op = static_cast<vtkFreeTypeTools *>(vp);

  vtkTextProperty *temp0 = nullptr;
  vtkUnicodeString temp1;
  int temp2;
  vtkImageData *temp3 = nullptr;
  size_t size4 = 0;
  int store4[2*2];
  int *temp4 = nullptr;
  int *save4 = nullptr;
  if (ap.GetArgSize(4) > 0)
  {
    size4 = 2;
    temp4 = store4;
    save4 = store4 + 2;
  }
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4, 5) &&
      ap.GetVTKObject(temp0, "vtkTextProperty") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetVTKObject(temp3, "vtkImageData") &&
      (ap.NoArgsLeft() || ap.GetArray(temp4, size4)))
  {
    ap.Save(temp4, save4, size4);

    bool tempr = (ap.IsBound() ?
      op->RenderString(temp0, temp1, temp2, temp3, temp4) :
      op->vtkFreeTypeTools::RenderString(temp0, temp1, temp2, temp3, temp4));

    if (ap.HasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(4, temp4, size4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkFreeTypeTools_RenderString_Methods[] = {
  {nullptr, PyvtkFreeTypeTools_RenderString_s1, METH_VARARGS,
   "@VsiV|P *vtkTextProperty *vtkImageData *i"},
  {nullptr, PyvtkFreeTypeTools_RenderString_s2, METH_VARARGS,
   "@VuiV|P *vtkTextProperty *vtkImageData *i"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkFreeTypeTools_RenderString(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkFreeTypeTools_RenderString_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
    case 5:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "RenderString");
  return nullptr;
}



static PyObject *
PyvtkFreeTypeTools_StringToPath_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StringToPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFreeTypeTools *op = static_cast<vtkFreeTypeTools *>(vp);

  vtkTextProperty *temp0 = nullptr;
  vtkStdString temp1;
  int temp2;
  vtkPath *temp3 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkTextProperty") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetVTKObject(temp3, "vtkPath"))
  {
    bool tempr = (ap.IsBound() ?
      op->StringToPath(temp0, temp1, temp2, temp3) :
      op->vtkFreeTypeTools::StringToPath(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkFreeTypeTools_StringToPath_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StringToPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFreeTypeTools *op = static_cast<vtkFreeTypeTools *>(vp);

  vtkTextProperty *temp0 = nullptr;
  vtkUnicodeString temp1;
  int temp2;
  vtkPath *temp3 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkTextProperty") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetVTKObject(temp3, "vtkPath"))
  {
    bool tempr = (ap.IsBound() ?
      op->StringToPath(temp0, temp1, temp2, temp3) :
      op->vtkFreeTypeTools::StringToPath(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkFreeTypeTools_StringToPath_Methods[] = {
  {nullptr, PyvtkFreeTypeTools_StringToPath_s1, METH_VARARGS,
   "@VsiV *vtkTextProperty *vtkPath"},
  {nullptr, PyvtkFreeTypeTools_StringToPath_s2, METH_VARARGS,
   "@VuiV *vtkTextProperty *vtkPath"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkFreeTypeTools_StringToPath(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkFreeTypeTools_StringToPath_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "StringToPath");
  return nullptr;
}



static PyObject *
PyvtkFreeTypeTools_GetConstrainedFontSize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConstrainedFontSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFreeTypeTools *op = static_cast<vtkFreeTypeTools *>(vp);

  vtkStdString temp0;
  vtkTextProperty *temp1 = nullptr;
  int temp2;
  int temp3;
  int temp4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkTextProperty") &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    int tempr = (ap.IsBound() ?
      op->GetConstrainedFontSize(temp0, temp1, temp2, temp3, temp4) :
      op->vtkFreeTypeTools::GetConstrainedFontSize(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkFreeTypeTools_GetConstrainedFontSize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConstrainedFontSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFreeTypeTools *op = static_cast<vtkFreeTypeTools *>(vp);

  vtkUnicodeString temp0;
  vtkTextProperty *temp1 = nullptr;
  int temp2;
  int temp3;
  int temp4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkTextProperty") &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    int tempr = (ap.IsBound() ?
      op->GetConstrainedFontSize(temp0, temp1, temp2, temp3, temp4) :
      op->vtkFreeTypeTools::GetConstrainedFontSize(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkFreeTypeTools_GetConstrainedFontSize_Methods[] = {
  {nullptr, PyvtkFreeTypeTools_GetConstrainedFontSize_s1, METH_VARARGS,
   "@sViii *vtkTextProperty"},
  {nullptr, PyvtkFreeTypeTools_GetConstrainedFontSize_s2, METH_VARARGS,
   "@uViii *vtkTextProperty"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkFreeTypeTools_GetConstrainedFontSize(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkFreeTypeTools_GetConstrainedFontSize_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 5:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetConstrainedFontSize");
  return nullptr;
}



static PyObject *
PyvtkFreeTypeTools_HashString(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "HashString");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    unsigned short tempr = vtkFreeTypeTools::HashString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFreeTypeTools_HashBuffer(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "HashBuffer");

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = VTK_PYBUFFER_INITIALIZER;
  size_t temp1;
  unsigned int temp2 = 0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2, 3) &&
      ap.GetBuffer(temp0, &pbuf0) &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    unsigned int tempr = vtkFreeTypeTools::HashBuffer(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

#if PY_VERSION_HEX >= 0x02060000
  if (pbuf0.obj != 0)
  {
    PyBuffer_Release(&pbuf0);
  }
#endif
  return result;
}


static PyObject *
PyvtkFreeTypeTools_MapTextPropertyToId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MapTextPropertyToId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFreeTypeTools *op = static_cast<vtkFreeTypeTools *>(vp);

  vtkTextProperty *temp0 = nullptr;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<size_t> store1(2*size1);
  size_t *temp1 = store1.Data();
  size_t *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkTextProperty") &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->MapTextPropertyToId(temp0, temp1);
    }
    else
    {
      op->vtkFreeTypeTools::MapTextPropertyToId(temp0, temp1);
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
PyvtkFreeTypeTools_MapIdToTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MapIdToTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFreeTypeTools *op = static_cast<vtkFreeTypeTools *>(vp);

  size_t temp0;
  vtkTextProperty *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkTextProperty"))
  {
    if (ap.IsBound())
    {
      op->MapIdToTextProperty(temp0, temp1);
    }
    else
    {
      op->vtkFreeTypeTools::MapIdToTextProperty(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFreeTypeTools_SetScaleToPowerTwo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleToPowerTwo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFreeTypeTools *op = static_cast<vtkFreeTypeTools *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScaleToPowerTwo(temp0);
    }
    else
    {
      op->vtkFreeTypeTools::SetScaleToPowerTwo(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFreeTypeTools_GetScaleToPowerTwo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaleToPowerTwo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFreeTypeTools *op = static_cast<vtkFreeTypeTools *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetScaleToPowerTwo() :
      op->vtkFreeTypeTools::GetScaleToPowerTwo());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFreeTypeTools_ScaleToPowerTwoOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScaleToPowerTwoOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFreeTypeTools *op = static_cast<vtkFreeTypeTools *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ScaleToPowerTwoOn();
    }
    else
    {
      op->vtkFreeTypeTools::ScaleToPowerTwoOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFreeTypeTools_ScaleToPowerTwoOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScaleToPowerTwoOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFreeTypeTools *op = static_cast<vtkFreeTypeTools *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ScaleToPowerTwoOff();
    }
    else
    {
      op->vtkFreeTypeTools::ScaleToPowerTwoOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFreeTypeTools_SetForceCompiledFonts(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetForceCompiledFonts");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFreeTypeTools *op = static_cast<vtkFreeTypeTools *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetForceCompiledFonts(temp0);
    }
    else
    {
      op->vtkFreeTypeTools::SetForceCompiledFonts(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFreeTypeTools_GetForceCompiledFonts(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetForceCompiledFonts");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFreeTypeTools *op = static_cast<vtkFreeTypeTools *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetForceCompiledFonts() :
      op->vtkFreeTypeTools::GetForceCompiledFonts());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFreeTypeTools_ForceCompiledFontsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ForceCompiledFontsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFreeTypeTools *op = static_cast<vtkFreeTypeTools *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ForceCompiledFontsOn();
    }
    else
    {
      op->vtkFreeTypeTools::ForceCompiledFontsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFreeTypeTools_ForceCompiledFontsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ForceCompiledFontsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFreeTypeTools *op = static_cast<vtkFreeTypeTools *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ForceCompiledFontsOff();
    }
    else
    {
      op->vtkFreeTypeTools::ForceCompiledFontsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkFreeTypeTools_Methods[] = {
  {"IsTypeOf", PyvtkFreeTypeTools_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkFreeTypeTools_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkFreeTypeTools_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkFreeTypeTools\nC++: static vtkFreeTypeTools *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkFreeTypeTools_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkFreeTypeTools\nC++: vtkFreeTypeTools *NewInstance()\n\n"},
  {"GetInstance", PyvtkFreeTypeTools_GetInstance, METH_VARARGS,
   "V.GetInstance() -> vtkFreeTypeTools\nC++: static vtkFreeTypeTools *GetInstance()\n\nReturn the singleton instance with no reference counting.\n"},
  {"SetInstance", PyvtkFreeTypeTools_SetInstance, METH_VARARGS,
   "V.SetInstance(vtkFreeTypeTools)\nC++: static void SetInstance(vtkFreeTypeTools *instance)\n\nSupply a user defined instance. Call Delete() on the supplied\ninstance after setting it to fix the reference count.\n"},
  {"SetDebugTextures", PyvtkFreeTypeTools_SetDebugTextures, METH_VARARGS,
   "V.SetDebugTextures(bool)\nC++: virtual void SetDebugTextures(bool _arg)\n\nIf true, images produced by RenderString will have a transparent\ngrey background and set the justification anchor texel to bright\nyellow.\n"},
  {"GetDebugTextures", PyvtkFreeTypeTools_GetDebugTextures, METH_VARARGS,
   "V.GetDebugTextures() -> bool\nC++: virtual bool GetDebugTextures()\n\nIf true, images produced by RenderString will have a transparent\ngrey background and set the justification anchor texel to bright\nyellow.\n"},
  {"DebugTexturesOn", PyvtkFreeTypeTools_DebugTexturesOn, METH_VARARGS,
   "V.DebugTexturesOn()\nC++: virtual void DebugTexturesOn()\n\nIf true, images produced by RenderString will have a transparent\ngrey background and set the justification anchor texel to bright\nyellow.\n"},
  {"DebugTexturesOff", PyvtkFreeTypeTools_DebugTexturesOff, METH_VARARGS,
   "V.DebugTexturesOff()\nC++: virtual void DebugTexturesOff()\n\nIf true, images produced by RenderString will have a transparent\ngrey background and set the justification anchor texel to bright\nyellow.\n"},
  {"SetMaximumNumberOfFaces", PyvtkFreeTypeTools_SetMaximumNumberOfFaces, METH_VARARGS,
   "V.SetMaximumNumberOfFaces(int)\nC++: virtual void SetMaximumNumberOfFaces(unsigned int _arg)\n\nSet/Get the maximum number of faces (FT_Face), sizes (FT_Size)\nand bytes used by the cache. These settings can be changed as\nlong as it is done prior to accessing any of the caches or the\ncache manager.\n"},
  {"GetMaximumNumberOfFacesMinValue", PyvtkFreeTypeTools_GetMaximumNumberOfFacesMinValue, METH_VARARGS,
   "V.GetMaximumNumberOfFacesMinValue() -> int\nC++: virtual unsigned int GetMaximumNumberOfFacesMinValue()\n\nSet/Get the maximum number of faces (FT_Face), sizes (FT_Size)\nand bytes used by the cache. These settings can be changed as\nlong as it is done prior to accessing any of the caches or the\ncache manager.\n"},
  {"GetMaximumNumberOfFacesMaxValue", PyvtkFreeTypeTools_GetMaximumNumberOfFacesMaxValue, METH_VARARGS,
   "V.GetMaximumNumberOfFacesMaxValue() -> int\nC++: virtual unsigned int GetMaximumNumberOfFacesMaxValue()\n\nSet/Get the maximum number of faces (FT_Face), sizes (FT_Size)\nand bytes used by the cache. These settings can be changed as\nlong as it is done prior to accessing any of the caches or the\ncache manager.\n"},
  {"GetMaximumNumberOfFaces", PyvtkFreeTypeTools_GetMaximumNumberOfFaces, METH_VARARGS,
   "V.GetMaximumNumberOfFaces() -> int\nC++: virtual unsigned int GetMaximumNumberOfFaces()\n\nSet/Get the maximum number of faces (FT_Face), sizes (FT_Size)\nand bytes used by the cache. These settings can be changed as\nlong as it is done prior to accessing any of the caches or the\ncache manager.\n"},
  {"SetMaximumNumberOfSizes", PyvtkFreeTypeTools_SetMaximumNumberOfSizes, METH_VARARGS,
   "V.SetMaximumNumberOfSizes(int)\nC++: virtual void SetMaximumNumberOfSizes(unsigned int _arg)\n\nSet/Get the maximum number of faces (FT_Face), sizes (FT_Size)\nand bytes used by the cache. These settings can be changed as\nlong as it is done prior to accessing any of the caches or the\ncache manager.\n"},
  {"GetMaximumNumberOfSizesMinValue", PyvtkFreeTypeTools_GetMaximumNumberOfSizesMinValue, METH_VARARGS,
   "V.GetMaximumNumberOfSizesMinValue() -> int\nC++: virtual unsigned int GetMaximumNumberOfSizesMinValue()\n\nSet/Get the maximum number of faces (FT_Face), sizes (FT_Size)\nand bytes used by the cache. These settings can be changed as\nlong as it is done prior to accessing any of the caches or the\ncache manager.\n"},
  {"GetMaximumNumberOfSizesMaxValue", PyvtkFreeTypeTools_GetMaximumNumberOfSizesMaxValue, METH_VARARGS,
   "V.GetMaximumNumberOfSizesMaxValue() -> int\nC++: virtual unsigned int GetMaximumNumberOfSizesMaxValue()\n\nSet/Get the maximum number of faces (FT_Face), sizes (FT_Size)\nand bytes used by the cache. These settings can be changed as\nlong as it is done prior to accessing any of the caches or the\ncache manager.\n"},
  {"GetMaximumNumberOfSizes", PyvtkFreeTypeTools_GetMaximumNumberOfSizes, METH_VARARGS,
   "V.GetMaximumNumberOfSizes() -> int\nC++: virtual unsigned int GetMaximumNumberOfSizes()\n\nSet/Get the maximum number of faces (FT_Face), sizes (FT_Size)\nand bytes used by the cache. These settings can be changed as\nlong as it is done prior to accessing any of the caches or the\ncache manager.\n"},
  {"SetMaximumNumberOfBytes", PyvtkFreeTypeTools_SetMaximumNumberOfBytes, METH_VARARGS,
   "V.SetMaximumNumberOfBytes(int)\nC++: virtual void SetMaximumNumberOfBytes(unsigned long _arg)\n\nSet/Get the maximum number of faces (FT_Face), sizes (FT_Size)\nand bytes used by the cache. These settings can be changed as\nlong as it is done prior to accessing any of the caches or the\ncache manager.\n"},
  {"GetMaximumNumberOfBytesMinValue", PyvtkFreeTypeTools_GetMaximumNumberOfBytesMinValue, METH_VARARGS,
   "V.GetMaximumNumberOfBytesMinValue() -> int\nC++: virtual unsigned long GetMaximumNumberOfBytesMinValue()\n\nSet/Get the maximum number of faces (FT_Face), sizes (FT_Size)\nand bytes used by the cache. These settings can be changed as\nlong as it is done prior to accessing any of the caches or the\ncache manager.\n"},
  {"GetMaximumNumberOfBytesMaxValue", PyvtkFreeTypeTools_GetMaximumNumberOfBytesMaxValue, METH_VARARGS,
   "V.GetMaximumNumberOfBytesMaxValue() -> int\nC++: virtual unsigned long GetMaximumNumberOfBytesMaxValue()\n\nSet/Get the maximum number of faces (FT_Face), sizes (FT_Size)\nand bytes used by the cache. These settings can be changed as\nlong as it is done prior to accessing any of the caches or the\ncache manager.\n"},
  {"GetMaximumNumberOfBytes", PyvtkFreeTypeTools_GetMaximumNumberOfBytes, METH_VARARGS,
   "V.GetMaximumNumberOfBytes() -> int\nC++: virtual unsigned long GetMaximumNumberOfBytes()\n\nSet/Get the maximum number of faces (FT_Face), sizes (FT_Size)\nand bytes used by the cache. These settings can be changed as\nlong as it is done prior to accessing any of the caches or the\ncache manager.\n"},
  {"GetBoundingBox", PyvtkFreeTypeTools_GetBoundingBox, METH_VARARGS,
   "V.GetBoundingBox(vtkTextProperty, string, int, [int, int, int,\n    int]) -> bool\nC++: bool GetBoundingBox(vtkTextProperty *tprop,\n    const vtkStdString &str, int dpi, int bbox[4])\nV.GetBoundingBox(vtkTextProperty, unicode, int, [int, int, int,\n    int]) -> bool\nC++: bool GetBoundingBox(vtkTextProperty *tprop,\n    const vtkUnicodeString &str, int dpi, int bbox[4])\n\nGiven a text property and a string, get the bounding box {xmin,\nxmax, ymin, ymax} of the rendered string in pixels. The origin of\nthe bounding box is the anchor point described by the horizontal\nand vertical justification text property variables. Returns true\non success, false otherwise.\n@sa GetMetrics\n"},
  {"RenderString", PyvtkFreeTypeTools_RenderString, METH_VARARGS,
   "V.RenderString(vtkTextProperty, string, int, vtkImageData, [int,\n    int]) -> bool\nC++: bool RenderString(vtkTextProperty *tprop,\n    const vtkStdString &str, int dpi, vtkImageData *data,\n    int textDims[2]=nullptr)\nV.RenderString(vtkTextProperty, unicode, int, vtkImageData, [int,\n    int]) -> bool\nC++: bool RenderString(vtkTextProperty *tprop,\n    const vtkUnicodeString &str, int dpi, vtkImageData *data,\n    int textDims[2]=nullptr)\n\nGiven a text property and a string, this function initializes the\nvtkImageData *data and renders it in a vtkImageData. textDims, if\nprovided, will be overwritten by the pixel width and height of\nthe rendered string. This is useful when ScaleToPowerOfTwo is\ntrue, and the image dimensions may not match the dimensions of\nthe rendered text. The origin of the image's extents is aligned\nwith the anchor point described by the text property's vertical\nand horizontal justification options.\n"},
  {"StringToPath", PyvtkFreeTypeTools_StringToPath, METH_VARARGS,
   "V.StringToPath(vtkTextProperty, string, int, vtkPath) -> bool\nC++: bool StringToPath(vtkTextProperty *tprop,\n    const vtkStdString &str, int dpi, vtkPath *path)\nV.StringToPath(vtkTextProperty, unicode, int, vtkPath) -> bool\nC++: bool StringToPath(vtkTextProperty *tprop,\n    const vtkUnicodeString &str, int dpi, vtkPath *path)\n\nGiven a text property and a string, this function populates the\nvtkPath path with the outline of the rendered string. The origin\nof the path coordinates is aligned with the anchor point\ndescribed by the text property's horizontal and vertical\njustification options.\n"},
  {"GetConstrainedFontSize", PyvtkFreeTypeTools_GetConstrainedFontSize, METH_VARARGS,
   "V.GetConstrainedFontSize(string, vtkTextProperty, int, int, int)\n    -> int\nC++: int GetConstrainedFontSize(const vtkStdString &str,\n    vtkTextProperty *tprop, int dpi, int targetWidth,\n    int targetHeight)\nV.GetConstrainedFontSize(unicode, vtkTextProperty, int, int, int)\n    -> int\nC++: int GetConstrainedFontSize(const vtkUnicodeString &str,\n    vtkTextProperty *tprop, int dpi, int targetWidth,\n    int targetHeight)\n\nThis function returns the font size (in points) required to fit\nthe string in the target rectangle. The font size of tprop is\nupdated to the computed value as well. If an error occurs, -1 is\nreturned.\n"},
  {"HashString", PyvtkFreeTypeTools_HashString, METH_VARARGS,
   "V.HashString(string) -> int\nC++: static vtkTypeUInt16 HashString(const char *str)\n\nTurn a string into a hash. This is not a general purpose hash\nfunction, and is only used to generate identifiers for cached\nfonts.\n"},
  {"HashBuffer", PyvtkFreeTypeTools_HashBuffer, METH_VARARGS,
   "V.HashBuffer(void, int, int) -> int\nC++: static vtkTypeUInt32 HashBuffer(const void *str, size_t n,\n    vtkTypeUInt32 hash=0)\n\nHash a string of a given length. This function hashes n chars and\ndoes not depend on a terminating null character.\n"},
  {"MapTextPropertyToId", PyvtkFreeTypeTools_MapTextPropertyToId, METH_VARARGS,
   "V.MapTextPropertyToId(vtkTextProperty, [int, ...])\nC++: void MapTextPropertyToId(vtkTextProperty *tprop,\n    size_t *tprop_cache_id)\n\nGiven a text property 'tprop', get its unique ID in our cache\nframework. In the same way, given a unique ID in our cache,\nretrieve the corresponding text property and assign its\nparameters to 'tprop'. Warning: there is no one to one mapping\nbetween a single text property the corresponding ID, and\nvice-versa. The ID is just a fast hash, a binary mask\nconcatenating the attributes of the text property that are\nrelevant to our cache (Color, Opacity, Justification setting are\nnot stored).\n"},
  {"MapIdToTextProperty", PyvtkFreeTypeTools_MapIdToTextProperty, METH_VARARGS,
   "V.MapIdToTextProperty(int, vtkTextProperty)\nC++: void MapIdToTextProperty(size_t tprop_cache_id,\n    vtkTextProperty *tprop)\n\nGiven a text property 'tprop', get its unique ID in our cache\nframework. In the same way, given a unique ID in our cache,\nretrieve the corresponding text property and assign its\nparameters to 'tprop'. Warning: there is no one to one mapping\nbetween a single text property the corresponding ID, and\nvice-versa. The ID is just a fast hash, a binary mask\nconcatenating the attributes of the text property that are\nrelevant to our cache (Color, Opacity, Justification setting are\nnot stored).\n"},
  {"SetScaleToPowerTwo", PyvtkFreeTypeTools_SetScaleToPowerTwo, METH_VARARGS,
   "V.SetScaleToPowerTwo(bool)\nC++: virtual void SetScaleToPowerTwo(bool _arg)\n\nSet whether the image produced should be scaled up to the nearest\npower of\n2. This is normally required for older graphics cards where all\n   textures must be a power of 2. This defaults to false, and\n   should be fine on modern hardware.\n"},
  {"GetScaleToPowerTwo", PyvtkFreeTypeTools_GetScaleToPowerTwo, METH_VARARGS,
   "V.GetScaleToPowerTwo() -> bool\nC++: virtual bool GetScaleToPowerTwo()\n\nSet whether the image produced should be scaled up to the nearest\npower of\n2. This is normally required for older graphics cards where all\n   textures must be a power of 2. This defaults to false, and\n   should be fine on modern hardware.\n"},
  {"ScaleToPowerTwoOn", PyvtkFreeTypeTools_ScaleToPowerTwoOn, METH_VARARGS,
   "V.ScaleToPowerTwoOn()\nC++: virtual void ScaleToPowerTwoOn()\n\nSet whether the image produced should be scaled up to the nearest\npower of\n2. This is normally required for older graphics cards where all\n   textures must be a power of 2. This defaults to false, and\n   should be fine on modern hardware.\n"},
  {"ScaleToPowerTwoOff", PyvtkFreeTypeTools_ScaleToPowerTwoOff, METH_VARARGS,
   "V.ScaleToPowerTwoOff()\nC++: virtual void ScaleToPowerTwoOff()\n\nSet whether the image produced should be scaled up to the nearest\npower of\n2. This is normally required for older graphics cards where all\n   textures must be a power of 2. This defaults to false, and\n   should be fine on modern hardware.\n"},
  {"SetForceCompiledFonts", PyvtkFreeTypeTools_SetForceCompiledFonts, METH_VARARGS,
   "V.SetForceCompiledFonts(bool)\nC++: virtual void SetForceCompiledFonts(bool _arg)\n\nForce use of the fonts compiled into VTK, ignoring any FontConfig\nor embedded fonts. Useful for generating test images consistently\nacross platforms. This flag is on by default.\n"},
  {"GetForceCompiledFonts", PyvtkFreeTypeTools_GetForceCompiledFonts, METH_VARARGS,
   "V.GetForceCompiledFonts() -> bool\nC++: virtual bool GetForceCompiledFonts()\n\nForce use of the fonts compiled into VTK, ignoring any FontConfig\nor embedded fonts. Useful for generating test images consistently\nacross platforms. This flag is on by default.\n"},
  {"ForceCompiledFontsOn", PyvtkFreeTypeTools_ForceCompiledFontsOn, METH_VARARGS,
   "V.ForceCompiledFontsOn()\nC++: virtual void ForceCompiledFontsOn()\n\nForce use of the fonts compiled into VTK, ignoring any FontConfig\nor embedded fonts. Useful for generating test images consistently\nacross platforms. This flag is on by default.\n"},
  {"ForceCompiledFontsOff", PyvtkFreeTypeTools_ForceCompiledFontsOff, METH_VARARGS,
   "V.ForceCompiledFontsOff()\nC++: virtual void ForceCompiledFontsOff()\n\nForce use of the fonts compiled into VTK, ignoring any FontConfig\nor embedded fonts. Useful for generating test images consistently\nacross platforms. This flag is on by default.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkFreeTypeTools_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingFreeTypePython.vtkFreeTypeTools", // tp_name
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
  PyvtkFreeTypeTools_Doc, // tp_doc
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

PyObject *PyvtkFreeTypeTools_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkFreeTypeTools_Type, PyvtkFreeTypeTools_Methods,
    "vtkFreeTypeTools",
 nullptr);

  PyTypeObject *pytype = &PyvtkFreeTypeTools_Type;

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

void PyVTKAddFile_vtkFreeTypeTools(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkFreeTypeToolsCleanup_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkFreeTypeToolsCleanup", o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkFreeTypeTools_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkFreeTypeTools", o) != 0)
  {
    Py_DECREF(o);
  }

}

