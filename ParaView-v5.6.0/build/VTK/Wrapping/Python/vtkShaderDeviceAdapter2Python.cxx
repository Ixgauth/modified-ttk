// python wrapper for vtkShaderDeviceAdapter2
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
#include "vtkShaderDeviceAdapter2.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkShaderDeviceAdapter2(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkShaderDeviceAdapter2_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkShaderDeviceAdapter2_Doc =
  "vtkShaderDeviceAdapter2 - an adapter to pass generic vertex\nattributes to the rendering pipeline.\n\n"
  "Superclass: vtkObject\n\n"
  ":\n\n"
  "This class is an adapter used to pass generic vertex attributes to\n"
  "the rendering pipeline. Since this changes based on the shading\n"
  "language used, this class merely defines the API and subclasses\n"
  "provide implementations for Cg and GL.\n\n";


static PyObject *
PyvtkShaderDeviceAdapter2_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkShaderDeviceAdapter2::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkShaderDeviceAdapter2_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShaderDeviceAdapter2 *op = static_cast<vtkShaderDeviceAdapter2 *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkShaderDeviceAdapter2::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkShaderDeviceAdapter2_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkShaderDeviceAdapter2 *tempr = vtkShaderDeviceAdapter2::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkShaderDeviceAdapter2_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShaderDeviceAdapter2 *op = static_cast<vtkShaderDeviceAdapter2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkShaderDeviceAdapter2 *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkShaderDeviceAdapter2::NewInstance());

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
PyvtkShaderDeviceAdapter2_SendAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SendAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShaderDeviceAdapter2 *op = static_cast<vtkShaderDeviceAdapter2 *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  int temp2;
  void  *temp3 = nullptr;
  Py_buffer pbuf3 = VTK_PYBUFFER_INITIALIZER;
  unsigned long temp4 = 0;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(4, 5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetBuffer(temp3, &pbuf3) &&
      (ap.NoArgsLeft() || ap.GetValue(temp4)))
  {
    op->SendAttribute(temp0, temp1, temp2, temp3, temp4);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

#if PY_VERSION_HEX >= 0x02060000
  if (pbuf3.obj != 0)
  {
    PyBuffer_Release(&pbuf3);
  }
#endif
  return result;
}


static PyObject *
PyvtkShaderDeviceAdapter2_SetShaderProgram(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShaderProgram");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShaderDeviceAdapter2 *op = static_cast<vtkShaderDeviceAdapter2 *>(vp);

  vtkShaderProgram2 *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkShaderProgram2"))
  {
    if (ap.IsBound())
    {
      op->SetShaderProgram(temp0);
    }
    else
    {
      op->vtkShaderDeviceAdapter2::SetShaderProgram(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkShaderDeviceAdapter2_GetShaderProgram(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShaderProgram");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShaderDeviceAdapter2 *op = static_cast<vtkShaderDeviceAdapter2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkShaderProgram2 *tempr = (ap.IsBound() ?
      op->GetShaderProgram() :
      op->vtkShaderDeviceAdapter2::GetShaderProgram());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkShaderDeviceAdapter2_PrepareForRender(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PrepareForRender");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShaderDeviceAdapter2 *op = static_cast<vtkShaderDeviceAdapter2 *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    op->PrepareForRender();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkShaderDeviceAdapter2_Methods[] = {
  {"IsTypeOf", PyvtkShaderDeviceAdapter2_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkShaderDeviceAdapter2_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkShaderDeviceAdapter2_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkShaderDeviceAdapter2\nC++: static vtkShaderDeviceAdapter2 *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkShaderDeviceAdapter2_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkShaderDeviceAdapter2\nC++: vtkShaderDeviceAdapter2 *NewInstance()\n\n"},
  {"SendAttribute", PyvtkShaderDeviceAdapter2_SendAttribute, METH_VARARGS,
   "V.SendAttribute(string, int, int, void, int)\nC++: virtual void SendAttribute(const char *attrname,\n    int components, int type, const void *attribute,\n    unsigned long offset=0)\n\nSends a single attribute to the graphics card. The attrname\nparameter identifies the name of attribute. The components\nparameter gives the number of components in the attribute.  In\ngeneral, components must be between 1-4, but a rendering system\nmay impose even more constraints.  The type parameter is a VTK\ntype enumeration (VTK_FLOAT, VTK_INT, etc.). Again, a rendering\nsystem may not support all types for all attributes.  The\nattribute parameter is the actual data for the attribute. If\noffset is specified, it is added to attribute pointer after it\nhas been casted to the proper type.\n"},
  {"SetShaderProgram", PyvtkShaderDeviceAdapter2_SetShaderProgram, METH_VARARGS,
   "V.SetShaderProgram(vtkShaderProgram2)\nC++: void SetShaderProgram(vtkShaderProgram2 *program)\n\nSet the shader program which is being updated by this device\nadapter. The shader program is not reference counted to avoid\nreference loops.\n"},
  {"GetShaderProgram", PyvtkShaderDeviceAdapter2_GetShaderProgram, METH_VARARGS,
   "V.GetShaderProgram() -> vtkShaderProgram2\nC++: virtual vtkShaderProgram2 *GetShaderProgram()\n\n"},
  {"PrepareForRender", PyvtkShaderDeviceAdapter2_PrepareForRender, METH_VARARGS,
   "V.PrepareForRender()\nC++: virtual void PrepareForRender()\n\nThis method is called before rendering. This gives the shader\ndevice adapter an opportunity to collect information, such as\nattribute indices that it will need while rendering.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkShaderDeviceAdapter2_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingCorePython.vtkShaderDeviceAdapter2", // tp_name
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
  PyvtkShaderDeviceAdapter2_Doc, // tp_doc
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

PyObject *PyvtkShaderDeviceAdapter2_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkShaderDeviceAdapter2_Type, PyvtkShaderDeviceAdapter2_Methods,
    "vtkShaderDeviceAdapter2",
 nullptr);

  PyTypeObject *pytype = &PyvtkShaderDeviceAdapter2_Type;

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

void PyVTKAddFile_vtkShaderDeviceAdapter2(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkShaderDeviceAdapter2_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkShaderDeviceAdapter2", o) != 0)
  {
    Py_DECREF(o);
  }

}

