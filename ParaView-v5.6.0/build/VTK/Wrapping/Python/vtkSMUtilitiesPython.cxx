// python wrapper for vtkSMUtilities
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
#include "vtkSMUtilities.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMUtilities(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMUtilities_ClassNew(); }

#ifndef DECLARED_PyvtkSMObject_ClassNew
extern "C" { PyObject *PyvtkSMObject_ClassNew(); }
#define DECLARED_PyvtkSMObject_ClassNew
#endif

static const char *PyvtkSMUtilities_Doc =
  "vtkSMUtilities - collection of utility methods.\n\n"
  "Superclass: vtkSMObject\n\n"
  "vtkSMUtilities defines a collection of useful static methods.\n\n";


static PyObject *
PyvtkSMUtilities_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMUtilities::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMUtilities_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMUtilities *op = static_cast<vtkSMUtilities *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMUtilities::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMUtilities_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMUtilities *tempr = vtkSMUtilities::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMUtilities_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMUtilities *op = static_cast<vtkSMUtilities *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMUtilities *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMUtilities::NewInstance());

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
PyvtkSMUtilities_SaveImage_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SaveImage");

  vtkImageData *temp0 = nullptr;
  const char *temp1 = nullptr;
  int temp2;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkImageData") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    int tempr = vtkSMUtilities::SaveImage(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMUtilities_SaveImage_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SaveImage");

  vtkImageData *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkImageData") &&
      ap.GetValue(temp1))
  {
    int tempr = vtkSMUtilities::SaveImage(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMUtilities_SaveImage_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SaveImage");

  vtkImageData *temp0 = nullptr;
  const char *temp1 = nullptr;
  const char *temp2 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkImageData") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    int tempr = vtkSMUtilities::SaveImage(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSMUtilities_SaveImage_Methods[] = {
  {nullptr, PyvtkSMUtilities_SaveImage_s1, METH_VARARGS | METH_STATIC,
   "Vzi *vtkImageData"},
  {nullptr, PyvtkSMUtilities_SaveImage_s3, METH_VARARGS | METH_STATIC,
   "Vzz *vtkImageData"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSMUtilities_SaveImage(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSMUtilities_SaveImage_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 2:
      return PyvtkSMUtilities_SaveImage_s2(self, args);
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SaveImage");
  return nullptr;
}



static PyObject *
PyvtkSMUtilities_SaveImageOnProcessZero(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SaveImageOnProcessZero");

  vtkImageData *temp0 = nullptr;
  const char *temp1 = nullptr;
  const char *temp2 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkImageData") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    int tempr = vtkSMUtilities::SaveImageOnProcessZero(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMUtilities_CreateOrbit_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "CreateOrbit");

  const size_t size0 = 3;
  double temp0[3];
  const size_t size1 = 3;
  double temp1[3];
  int temp2;
  const size_t size3 = 3;
  double temp3[3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3))
  {
    vtkPoints *tempr = vtkSMUtilities::CreateOrbit(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMUtilities_CreateOrbit_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "CreateOrbit");

  const size_t size0 = 3;
  double temp0[3];
  const size_t size1 = 3;
  double temp1[3];
  double temp2;
  int temp3;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    vtkPoints *tempr = vtkSMUtilities::CreateOrbit(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSMUtilities_CreateOrbit_Methods[] = {
  {nullptr, PyvtkSMUtilities_CreateOrbit_s1, METH_VARARGS | METH_STATIC,
   "PPiP *d *d *d"},
  {nullptr, PyvtkSMUtilities_CreateOrbit_s2, METH_VARARGS | METH_STATIC,
   "PPdi *d *d"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSMUtilities_CreateOrbit(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSMUtilities_CreateOrbit_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 4:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "CreateOrbit");
  return nullptr;
}



static PyObject *
PyvtkSMUtilities_Merge(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Merge");

  vtkImageData *temp0 = nullptr;
  vtkImageData *temp1 = nullptr;
  int temp2 = 0;
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<unsigned char> store3(size3);
  unsigned char *temp3 = store3.Data();
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2, 4) &&
      ap.GetVTKObject(temp0, "vtkImageData") &&
      ap.GetVTKObject(temp1, "vtkImageData") &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)) &&
      (ap.NoArgsLeft() || ap.GetArray(temp3, size3)))
  {
    vtkSMUtilities::Merge(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMUtilities_FillImage(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "FillImage");

  vtkImageData *temp0 = nullptr;
  const size_t size1 = 6;
  int temp1[6];
  const size_t size2 = 3;
  unsigned char temp2[3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkImageData") &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
  {
    vtkSMUtilities::FillImage(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSMUtilities_Methods[] = {
  {"IsTypeOf", PyvtkSMUtilities_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMUtilities_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMUtilities_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSMUtilities\nC++: static vtkSMUtilities *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMUtilities_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSMUtilities\nC++: vtkSMUtilities *NewInstance()\n\n"},
  {"SaveImage", PyvtkSMUtilities_SaveImage, METH_VARARGS,
   "V.SaveImage(vtkImageData, string, int) -> int\nC++: static int SaveImage(vtkImageData *image,\n    const char *filename, int quality)\nV.SaveImage(vtkImageData, string) -> int\nC++: static int SaveImage(vtkImageData *image,\n    const char *filename)\nV.SaveImage(vtkImageData, string, string) -> int\nC++: static int SaveImage(vtkImageData *image,\n    const char *filename, const char *writerName)\n\nSave the image to a file. The file is created on the process on\nwhich this method is called. Return vtkErrorCode::NoError (0) on\nsuccess, otherwise returns the error code. / quality [0,100] -- 0\n= low, 100=high, -1=default\n"},
  {"SaveImageOnProcessZero", PyvtkSMUtilities_SaveImageOnProcessZero, METH_VARARGS,
   "V.SaveImageOnProcessZero(vtkImageData, string, string) -> int\nC++: static int SaveImageOnProcessZero(vtkImageData *image,\n    const char *filename, const char *writerName)\n\nCalls SaveImage(image, filename, writerName) only on process 0.\nOther processes will receive the return code through a broadcast.\n"},
  {"CreateOrbit", PyvtkSMUtilities_CreateOrbit, METH_VARARGS,
   "V.CreateOrbit((float, float, float), (float, float, float), int, (\n    float, float, float)) -> vtkPoints\nC++: static vtkPoints *CreateOrbit(const double center[3],\n    const double normal[3], int resolution,\n    const double startPoint[3])\nV.CreateOrbit((float, float, float), (float, float, float), float,\n     int) -> vtkPoints\nC++: static vtkPoints *CreateOrbit(const double center[3],\n    const double normal[3], double radius, int resolution)\n\nReturns the points an orbit to revolve around the center at a\ndistance of radius in the plane defined by the center and the\nnormal. The number of points returned is equal to resolution.\nReturns a new instance of vtkPoints. The caller is responsible\nfor freeing the allocated memory.\n"},
  {"Merge", PyvtkSMUtilities_Merge, METH_VARARGS,
   "V.Merge(vtkImageData, vtkImageData, int, (int, ...))\nC++: static void Merge(vtkImageData *dest, vtkImageData *src,\n    int borderWidth=0, const unsigned char *borderColorRGB=NULL)\n\nConvenience method used to merge a smaller image ( src) into a\nlarger one ( dest). The location of the smaller image in the\nlarger image are determined by their extents.\n"},
  {"FillImage", PyvtkSMUtilities_FillImage, METH_VARARGS,
   "V.FillImage(vtkImageData, (int, int, int, int, int, int), (int,\n    int, int))\nC++: static void FillImage(vtkImageData *image,\n    const int extent[6], const unsigned char rgb[3])\n\nFill the specified extents in the image with the given color. If\nthe image is a 4 component image, then this method fills the 4th\ncomponent with 0xff.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMUtilities_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerRenderingPython.vtkSMUtilities", // tp_name
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
  PyvtkSMUtilities_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSMUtilities_StaticNew()
{
  return vtkSMUtilities::New();
}

PyObject *PyvtkSMUtilities_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMUtilities_Type, PyvtkSMUtilities_Methods,
    "vtkSMUtilities",
 &PyvtkSMUtilities_StaticNew);

  PyTypeObject *pytype = &PyvtkSMUtilities_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkSMObject_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSMUtilities(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMUtilities_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMUtilities", o) != 0)
  {
    Py_DECREF(o);
  }

}

