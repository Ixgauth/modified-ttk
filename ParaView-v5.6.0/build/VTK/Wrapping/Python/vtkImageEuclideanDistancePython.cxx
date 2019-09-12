// python wrapper for vtkImageEuclideanDistance
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
#include "vtkInformationVector.h"
#include "vtkImageEuclideanDistance.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImageEuclideanDistance(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkImageEuclideanDistance_ClassNew(); }

#ifndef DECLARED_PyvtkImageDecomposeFilter_ClassNew
extern "C" { PyObject *PyvtkImageDecomposeFilter_ClassNew(); }
#define DECLARED_PyvtkImageDecomposeFilter_ClassNew
#endif

static const char *PyvtkImageEuclideanDistance_Doc =
  "vtkImageEuclideanDistance - computes 3D Euclidean DT\n\n"
  "Superclass: vtkImageDecomposeFilter\n\n"
  "vtkImageEuclideanDistance implements the Euclidean DT using Saito's\n"
  "algorithm. The distance map produced contains the square of the\n"
  "Euclidean distance values.\n\n"
  "The algorithm has a o(n^(D+1)) complexity over nxnx...xn images in D\n"
  "dimensions. It is very efficient on relatively small images.\n"
  "Cuisenaire's algorithms should be used instead if n >> 500. These are\n"
  "not implemented yet.\n\n"
  "For the special case of images where the slice-size is a multiple of\n"
  "2^N with a large N (typically for 256x256 slices), Saito's algorithm\n"
  "encounters a lot of cache conflicts during the 3rd iteration which\n"
  "can slow it very significantly. In that case, one should use\n"
  "::SetAlgorithmToSaitoCached() instead for better performance.\n\n"
  "References:\n\n"
  "T. Saito and J.I. Toriwaki. New algorithms for Euclidean distance\n"
  "transformations of an n-dimensional digitised picture with\n"
  "applications. Pattern Recognition, 27(11). pp. 1551--1565, 1994.\n\n"
  "O. Cuisenaire. Distance Transformation: fast algorithms and\n"
  "applications to medical image processing. PhD Thesis, Universite\n"
  "catholique de Louvain, October 1999.\n"
  "http://ltswww.epfl.ch/~cuisenai/papers/oc_thesis.pdf\n\n";


static PyObject *
PyvtkImageEuclideanDistance_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImageEuclideanDistance::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageEuclideanDistance_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageEuclideanDistance *op = static_cast<vtkImageEuclideanDistance *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageEuclideanDistance::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageEuclideanDistance_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImageEuclideanDistance *tempr = vtkImageEuclideanDistance::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageEuclideanDistance_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageEuclideanDistance *op = static_cast<vtkImageEuclideanDistance *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageEuclideanDistance *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageEuclideanDistance::NewInstance());

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
PyvtkImageEuclideanDistance_SetInitialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInitialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageEuclideanDistance *op = static_cast<vtkImageEuclideanDistance *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInitialize(temp0);
    }
    else
    {
      op->vtkImageEuclideanDistance::SetInitialize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageEuclideanDistance_GetInitialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInitialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageEuclideanDistance *op = static_cast<vtkImageEuclideanDistance *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInitialize() :
      op->vtkImageEuclideanDistance::GetInitialize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageEuclideanDistance_InitializeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitializeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageEuclideanDistance *op = static_cast<vtkImageEuclideanDistance *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InitializeOn();
    }
    else
    {
      op->vtkImageEuclideanDistance::InitializeOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageEuclideanDistance_InitializeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitializeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageEuclideanDistance *op = static_cast<vtkImageEuclideanDistance *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InitializeOff();
    }
    else
    {
      op->vtkImageEuclideanDistance::InitializeOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageEuclideanDistance_SetConsiderAnisotropy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConsiderAnisotropy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageEuclideanDistance *op = static_cast<vtkImageEuclideanDistance *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetConsiderAnisotropy(temp0);
    }
    else
    {
      op->vtkImageEuclideanDistance::SetConsiderAnisotropy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageEuclideanDistance_GetConsiderAnisotropy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConsiderAnisotropy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageEuclideanDistance *op = static_cast<vtkImageEuclideanDistance *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetConsiderAnisotropy() :
      op->vtkImageEuclideanDistance::GetConsiderAnisotropy());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageEuclideanDistance_ConsiderAnisotropyOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConsiderAnisotropyOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageEuclideanDistance *op = static_cast<vtkImageEuclideanDistance *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ConsiderAnisotropyOn();
    }
    else
    {
      op->vtkImageEuclideanDistance::ConsiderAnisotropyOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageEuclideanDistance_ConsiderAnisotropyOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConsiderAnisotropyOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageEuclideanDistance *op = static_cast<vtkImageEuclideanDistance *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ConsiderAnisotropyOff();
    }
    else
    {
      op->vtkImageEuclideanDistance::ConsiderAnisotropyOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageEuclideanDistance_SetMaximumDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageEuclideanDistance *op = static_cast<vtkImageEuclideanDistance *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaximumDistance(temp0);
    }
    else
    {
      op->vtkImageEuclideanDistance::SetMaximumDistance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageEuclideanDistance_GetMaximumDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageEuclideanDistance *op = static_cast<vtkImageEuclideanDistance *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMaximumDistance() :
      op->vtkImageEuclideanDistance::GetMaximumDistance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageEuclideanDistance_SetAlgorithm(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAlgorithm");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageEuclideanDistance *op = static_cast<vtkImageEuclideanDistance *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAlgorithm(temp0);
    }
    else
    {
      op->vtkImageEuclideanDistance::SetAlgorithm(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageEuclideanDistance_GetAlgorithm(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAlgorithm");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageEuclideanDistance *op = static_cast<vtkImageEuclideanDistance *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAlgorithm() :
      op->vtkImageEuclideanDistance::GetAlgorithm());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageEuclideanDistance_SetAlgorithmToSaito(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAlgorithmToSaito");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageEuclideanDistance *op = static_cast<vtkImageEuclideanDistance *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetAlgorithmToSaito();
    }
    else
    {
      op->vtkImageEuclideanDistance::SetAlgorithmToSaito();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageEuclideanDistance_SetAlgorithmToSaitoCached(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAlgorithmToSaitoCached");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageEuclideanDistance *op = static_cast<vtkImageEuclideanDistance *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetAlgorithmToSaitoCached();
    }
    else
    {
      op->vtkImageEuclideanDistance::SetAlgorithmToSaitoCached();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkImageEuclideanDistance_Methods[] = {
  {"IsTypeOf", PyvtkImageEuclideanDistance_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nConstruct an instance of vtkImageDecomposeFilter filter with\ndefault dimensionality 3.\n"},
  {"IsA", PyvtkImageEuclideanDistance_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nConstruct an instance of vtkImageDecomposeFilter filter with\ndefault dimensionality 3.\n"},
  {"SafeDownCast", PyvtkImageEuclideanDistance_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkImageEuclideanDistance\nC++: static vtkImageEuclideanDistance *SafeDownCast(\n    vtkObjectBase *o)\n\nConstruct an instance of vtkImageDecomposeFilter filter with\ndefault dimensionality 3.\n"},
  {"NewInstance", PyvtkImageEuclideanDistance_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkImageEuclideanDistance\nC++: vtkImageEuclideanDistance *NewInstance()\n\nConstruct an instance of vtkImageDecomposeFilter filter with\ndefault dimensionality 3.\n"},
  {"SetInitialize", PyvtkImageEuclideanDistance_SetInitialize, METH_VARARGS,
   "V.SetInitialize(int)\nC++: virtual void SetInitialize(vtkTypeBool _arg)\n\nUsed to set all non-zero voxels to MaximumDistance before\nstarting the distance transformation. Setting Initialize off\nkeeps the current value in the input image as starting point.\nThis allows to superimpose several distance maps.\n"},
  {"GetInitialize", PyvtkImageEuclideanDistance_GetInitialize, METH_VARARGS,
   "V.GetInitialize() -> int\nC++: virtual vtkTypeBool GetInitialize()\n\nUsed to set all non-zero voxels to MaximumDistance before\nstarting the distance transformation. Setting Initialize off\nkeeps the current value in the input image as starting point.\nThis allows to superimpose several distance maps.\n"},
  {"InitializeOn", PyvtkImageEuclideanDistance_InitializeOn, METH_VARARGS,
   "V.InitializeOn()\nC++: virtual void InitializeOn()\n\nUsed to set all non-zero voxels to MaximumDistance before\nstarting the distance transformation. Setting Initialize off\nkeeps the current value in the input image as starting point.\nThis allows to superimpose several distance maps.\n"},
  {"InitializeOff", PyvtkImageEuclideanDistance_InitializeOff, METH_VARARGS,
   "V.InitializeOff()\nC++: virtual void InitializeOff()\n\nUsed to set all non-zero voxels to MaximumDistance before\nstarting the distance transformation. Setting Initialize off\nkeeps the current value in the input image as starting point.\nThis allows to superimpose several distance maps.\n"},
  {"SetConsiderAnisotropy", PyvtkImageEuclideanDistance_SetConsiderAnisotropy, METH_VARARGS,
   "V.SetConsiderAnisotropy(int)\nC++: virtual void SetConsiderAnisotropy(vtkTypeBool _arg)\n\nUsed to define whether Spacing should be used in the computation\nof the distances\n"},
  {"GetConsiderAnisotropy", PyvtkImageEuclideanDistance_GetConsiderAnisotropy, METH_VARARGS,
   "V.GetConsiderAnisotropy() -> int\nC++: virtual vtkTypeBool GetConsiderAnisotropy()\n\nUsed to define whether Spacing should be used in the computation\nof the distances\n"},
  {"ConsiderAnisotropyOn", PyvtkImageEuclideanDistance_ConsiderAnisotropyOn, METH_VARARGS,
   "V.ConsiderAnisotropyOn()\nC++: virtual void ConsiderAnisotropyOn()\n\nUsed to define whether Spacing should be used in the computation\nof the distances\n"},
  {"ConsiderAnisotropyOff", PyvtkImageEuclideanDistance_ConsiderAnisotropyOff, METH_VARARGS,
   "V.ConsiderAnisotropyOff()\nC++: virtual void ConsiderAnisotropyOff()\n\nUsed to define whether Spacing should be used in the computation\nof the distances\n"},
  {"SetMaximumDistance", PyvtkImageEuclideanDistance_SetMaximumDistance, METH_VARARGS,
   "V.SetMaximumDistance(float)\nC++: virtual void SetMaximumDistance(double _arg)\n\nAny distance bigger than this->MaximumDistance will not ne\ncomputed but set to this->MaximumDistance instead.\n"},
  {"GetMaximumDistance", PyvtkImageEuclideanDistance_GetMaximumDistance, METH_VARARGS,
   "V.GetMaximumDistance() -> float\nC++: virtual double GetMaximumDistance()\n\nAny distance bigger than this->MaximumDistance will not ne\ncomputed but set to this->MaximumDistance instead.\n"},
  {"SetAlgorithm", PyvtkImageEuclideanDistance_SetAlgorithm, METH_VARARGS,
   "V.SetAlgorithm(int)\nC++: virtual void SetAlgorithm(int _arg)\n\nSelects a Euclidean DT algorithm.\n1. Saito\n2. Saito-cached More algorithms will be added later on.\n"},
  {"GetAlgorithm", PyvtkImageEuclideanDistance_GetAlgorithm, METH_VARARGS,
   "V.GetAlgorithm() -> int\nC++: virtual int GetAlgorithm()\n\nSelects a Euclidean DT algorithm.\n1. Saito\n2. Saito-cached More algorithms will be added later on.\n"},
  {"SetAlgorithmToSaito", PyvtkImageEuclideanDistance_SetAlgorithmToSaito, METH_VARARGS,
   "V.SetAlgorithmToSaito()\nC++: void SetAlgorithmToSaito()\n\nSelects a Euclidean DT algorithm.\n1. Saito\n2. Saito-cached More algorithms will be added later on.\n"},
  {"SetAlgorithmToSaitoCached", PyvtkImageEuclideanDistance_SetAlgorithmToSaitoCached, METH_VARARGS,
   "V.SetAlgorithmToSaitoCached()\nC++: void SetAlgorithmToSaitoCached()\n\nSelects a Euclidean DT algorithm.\n1. Saito\n2. Saito-cached More algorithms will be added later on.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkImageEuclideanDistance_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkImagingGeneralPython.vtkImageEuclideanDistance", // tp_name
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
  PyvtkImageEuclideanDistance_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImageEuclideanDistance_StaticNew()
{
  return vtkImageEuclideanDistance::New();
}

PyObject *PyvtkImageEuclideanDistance_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkImageEuclideanDistance_Type, PyvtkImageEuclideanDistance_Methods,
    "vtkImageEuclideanDistance",
 &PyvtkImageEuclideanDistance_StaticNew);

  PyTypeObject *pytype = &PyvtkImageEuclideanDistance_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkImageDecomposeFilter_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkImageEuclideanDistance(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImageEuclideanDistance_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImageEuclideanDistance", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 2; c++)
  {
    static const struct { const char *name; int value; }
      constants[2] = {
        { "VTK_EDT_SAITO_CACHED", 0 },
        { "VTK_EDT_SAITO", 1 },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

