// python wrapper for vtkImageSeedConnectivity
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
#include "vtkImageSeedConnectivity.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImageSeedConnectivity(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkImageSeedConnectivity_ClassNew(); }

#ifndef DECLARED_PyvtkImageAlgorithm_ClassNew
extern "C" { PyObject *PyvtkImageAlgorithm_ClassNew(); }
#define DECLARED_PyvtkImageAlgorithm_ClassNew
#endif

static const char *PyvtkImageSeedConnectivity_Doc =
  "vtkImageSeedConnectivity - SeedConnectivity with user defined seeds.\n\n"
  "Superclass: vtkImageAlgorithm\n\n"
  "vtkImageSeedConnectivity marks pixels connected to user supplied\n"
  "seeds. The input must be unsigned char, and the output is also\n"
  "unsigned char.  If a seed supplied by the user does not have pixel\n"
  "value \"InputTrueValue\", then the image is scanned +x, +y, +z until a\n"
  "pixel is encountered with value \"InputTrueValue\".  This new pixel is\n"
  "used as the seed .  Any pixel with out value \"InputTrueValue\" is\n"
  "consider off.  The output pixels values are 0 for any off pixel in\n"
  "input, \"OutputTrueValue\" for any pixels connected to seeds, and\n"
  "\"OutputUnconnectedValue\" for any on pixels not connected to seeds. \n"
  "The same seeds are used for all images in the image set.\n\n";


static PyObject *
PyvtkImageSeedConnectivity_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImageSeedConnectivity::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageSeedConnectivity_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSeedConnectivity *op = static_cast<vtkImageSeedConnectivity *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageSeedConnectivity::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageSeedConnectivity_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImageSeedConnectivity *tempr = vtkImageSeedConnectivity::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageSeedConnectivity_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSeedConnectivity *op = static_cast<vtkImageSeedConnectivity *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageSeedConnectivity *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageSeedConnectivity::NewInstance());

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
PyvtkImageSeedConnectivity_RemoveAllSeeds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllSeeds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSeedConnectivity *op = static_cast<vtkImageSeedConnectivity *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllSeeds();
    }
    else
    {
      op->vtkImageSeedConnectivity::RemoveAllSeeds();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageSeedConnectivity_AddSeed_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddSeed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSeedConnectivity *op = static_cast<vtkImageSeedConnectivity *>(vp);

  int temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<int> store1(2*size1);
  int *temp1 = store1.Data();
  int *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->AddSeed(temp0, temp1);
    }
    else
    {
      op->vtkImageSeedConnectivity::AddSeed(temp0, temp1);
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
PyvtkImageSeedConnectivity_AddSeed_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddSeed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSeedConnectivity *op = static_cast<vtkImageSeedConnectivity *>(vp);

  int temp0;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->AddSeed(temp0, temp1, temp2);
    }
    else
    {
      op->vtkImageSeedConnectivity::AddSeed(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageSeedConnectivity_AddSeed_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddSeed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSeedConnectivity *op = static_cast<vtkImageSeedConnectivity *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->AddSeed(temp0, temp1);
    }
    else
    {
      op->vtkImageSeedConnectivity::AddSeed(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkImageSeedConnectivity_AddSeed_Methods[] = {
  {nullptr, PyvtkImageSeedConnectivity_AddSeed_s1, METH_VARARGS,
   "@iP *i"},
  {nullptr, PyvtkImageSeedConnectivity_AddSeed_s3, METH_VARARGS,
   "@ii"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkImageSeedConnectivity_AddSeed(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkImageSeedConnectivity_AddSeed_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkImageSeedConnectivity_AddSeed_s2(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "AddSeed");
  return nullptr;
}



static PyObject *
PyvtkImageSeedConnectivity_SetInputConnectValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputConnectValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSeedConnectivity *op = static_cast<vtkImageSeedConnectivity *>(vp);

  unsigned char temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInputConnectValue(temp0);
    }
    else
    {
      op->vtkImageSeedConnectivity::SetInputConnectValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageSeedConnectivity_GetInputConnectValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputConnectValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSeedConnectivity *op = static_cast<vtkImageSeedConnectivity *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned char tempr = (ap.IsBound() ?
      op->GetInputConnectValue() :
      op->vtkImageSeedConnectivity::GetInputConnectValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageSeedConnectivity_SetOutputConnectedValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputConnectedValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSeedConnectivity *op = static_cast<vtkImageSeedConnectivity *>(vp);

  unsigned char temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOutputConnectedValue(temp0);
    }
    else
    {
      op->vtkImageSeedConnectivity::SetOutputConnectedValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageSeedConnectivity_GetOutputConnectedValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputConnectedValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSeedConnectivity *op = static_cast<vtkImageSeedConnectivity *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned char tempr = (ap.IsBound() ?
      op->GetOutputConnectedValue() :
      op->vtkImageSeedConnectivity::GetOutputConnectedValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageSeedConnectivity_SetOutputUnconnectedValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputUnconnectedValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSeedConnectivity *op = static_cast<vtkImageSeedConnectivity *>(vp);

  unsigned char temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOutputUnconnectedValue(temp0);
    }
    else
    {
      op->vtkImageSeedConnectivity::SetOutputUnconnectedValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageSeedConnectivity_GetOutputUnconnectedValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputUnconnectedValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSeedConnectivity *op = static_cast<vtkImageSeedConnectivity *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned char tempr = (ap.IsBound() ?
      op->GetOutputUnconnectedValue() :
      op->vtkImageSeedConnectivity::GetOutputUnconnectedValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageSeedConnectivity_GetConnector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConnector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSeedConnectivity *op = static_cast<vtkImageSeedConnectivity *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageConnector *tempr = (ap.IsBound() ?
      op->GetConnector() :
      op->vtkImageSeedConnectivity::GetConnector());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageSeedConnectivity_SetDimensionality(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDimensionality");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSeedConnectivity *op = static_cast<vtkImageSeedConnectivity *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDimensionality(temp0);
    }
    else
    {
      op->vtkImageSeedConnectivity::SetDimensionality(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageSeedConnectivity_GetDimensionality(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimensionality");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSeedConnectivity *op = static_cast<vtkImageSeedConnectivity *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDimensionality() :
      op->vtkImageSeedConnectivity::GetDimensionality());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkImageSeedConnectivity_Methods[] = {
  {"IsTypeOf", PyvtkImageSeedConnectivity_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImageSeedConnectivity_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImageSeedConnectivity_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkImageSeedConnectivity\nC++: static vtkImageSeedConnectivity *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImageSeedConnectivity_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkImageSeedConnectivity\nC++: vtkImageSeedConnectivity *NewInstance()\n\n"},
  {"RemoveAllSeeds", PyvtkImageSeedConnectivity_RemoveAllSeeds, METH_VARARGS,
   "V.RemoveAllSeeds()\nC++: void RemoveAllSeeds()\n\nMethods for manipulating the seed pixels.\n"},
  {"AddSeed", PyvtkImageSeedConnectivity_AddSeed, METH_VARARGS,
   "V.AddSeed(int, [int, ...])\nC++: void AddSeed(int num, int *index)\nV.AddSeed(int, int, int)\nC++: void AddSeed(int i0, int i1, int i2)\nV.AddSeed(int, int)\nC++: void AddSeed(int i0, int i1)\n\nMethods for manipulating the seed pixels.\n"},
  {"SetInputConnectValue", PyvtkImageSeedConnectivity_SetInputConnectValue, METH_VARARGS,
   "V.SetInputConnectValue(int)\nC++: virtual void SetInputConnectValue(unsigned char _arg)\n\nSet/Get what value is considered as connecting pixels.\n"},
  {"GetInputConnectValue", PyvtkImageSeedConnectivity_GetInputConnectValue, METH_VARARGS,
   "V.GetInputConnectValue() -> int\nC++: virtual unsigned char GetInputConnectValue()\n\nSet/Get what value is considered as connecting pixels.\n"},
  {"SetOutputConnectedValue", PyvtkImageSeedConnectivity_SetOutputConnectedValue, METH_VARARGS,
   "V.SetOutputConnectedValue(int)\nC++: virtual void SetOutputConnectedValue(unsigned char _arg)\n\nSet/Get the value to set connected pixels to.\n"},
  {"GetOutputConnectedValue", PyvtkImageSeedConnectivity_GetOutputConnectedValue, METH_VARARGS,
   "V.GetOutputConnectedValue() -> int\nC++: virtual unsigned char GetOutputConnectedValue()\n\nSet/Get the value to set connected pixels to.\n"},
  {"SetOutputUnconnectedValue", PyvtkImageSeedConnectivity_SetOutputUnconnectedValue, METH_VARARGS,
   "V.SetOutputUnconnectedValue(int)\nC++: virtual void SetOutputUnconnectedValue(unsigned char _arg)\n\nSet/Get the value to set unconnected pixels to.\n"},
  {"GetOutputUnconnectedValue", PyvtkImageSeedConnectivity_GetOutputUnconnectedValue, METH_VARARGS,
   "V.GetOutputUnconnectedValue() -> int\nC++: virtual unsigned char GetOutputUnconnectedValue()\n\nSet/Get the value to set unconnected pixels to.\n"},
  {"GetConnector", PyvtkImageSeedConnectivity_GetConnector, METH_VARARGS,
   "V.GetConnector() -> vtkImageConnector\nC++: virtual vtkImageConnector *GetConnector()\n\nGet the vtkImageCOnnector used by this filter.\n"},
  {"SetDimensionality", PyvtkImageSeedConnectivity_SetDimensionality, METH_VARARGS,
   "V.SetDimensionality(int)\nC++: virtual void SetDimensionality(int _arg)\n\nSet the number of axes to use in connectivity.\n"},
  {"GetDimensionality", PyvtkImageSeedConnectivity_GetDimensionality, METH_VARARGS,
   "V.GetDimensionality() -> int\nC++: virtual int GetDimensionality()\n\nSet the number of axes to use in connectivity.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkImageSeedConnectivity_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkImagingMorphologicalPython.vtkImageSeedConnectivity", // tp_name
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
  PyvtkImageSeedConnectivity_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImageSeedConnectivity_StaticNew()
{
  return vtkImageSeedConnectivity::New();
}

PyObject *PyvtkImageSeedConnectivity_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkImageSeedConnectivity_Type, PyvtkImageSeedConnectivity_Methods,
    "vtkImageSeedConnectivity",
 &PyvtkImageSeedConnectivity_StaticNew);

  PyTypeObject *pytype = &PyvtkImageSeedConnectivity_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkImageAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkImageSeedConnectivity(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImageSeedConnectivity_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImageSeedConnectivity", o) != 0)
  {
    Py_DECREF(o);
  }

}

