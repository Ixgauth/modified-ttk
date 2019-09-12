// python wrapper for vtkPVCompositeOrthographicSliceRepresentation
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
#include "vtkPVCompositeOrthographicSliceRepresentation.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPVCompositeOrthographicSliceRepresentation(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPVCompositeOrthographicSliceRepresentation_ClassNew(); }

#ifndef DECLARED_PyvtkPVCompositeRepresentation_ClassNew
extern "C" { PyObject *PyvtkPVCompositeRepresentation_ClassNew(); }
#define DECLARED_PyvtkPVCompositeRepresentation_ClassNew
#endif

static const char *PyvtkPVCompositeOrthographicSliceRepresentation_Doc =
  "vtkPVCompositeOrthographicSliceRepresentation -\nvtkPVCompositeOrthographicSliceRepresentation is designed for use\nwith vtkPVOrthographicSliceView.\n\n"
  "Superclass: vtkPVCompositeRepresentation\n\n"
  "We add 3 vtkGeometrySliceRepresentation instances to render the 3\n"
  "slices in vtkPVOrthographicSliceView's orthographic views.\n\n";


static PyObject *
PyvtkPVCompositeOrthographicSliceRepresentation_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPVCompositeOrthographicSliceRepresentation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVCompositeOrthographicSliceRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeOrthographicSliceRepresentation *op = static_cast<vtkPVCompositeOrthographicSliceRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVCompositeOrthographicSliceRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVCompositeOrthographicSliceRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPVCompositeOrthographicSliceRepresentation *tempr = vtkPVCompositeOrthographicSliceRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVCompositeOrthographicSliceRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeOrthographicSliceRepresentation *op = static_cast<vtkPVCompositeOrthographicSliceRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVCompositeOrthographicSliceRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVCompositeOrthographicSliceRepresentation::NewInstance());

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
PyvtkPVCompositeOrthographicSliceRepresentation_SetSliceRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeOrthographicSliceRepresentation *op = static_cast<vtkPVCompositeOrthographicSliceRepresentation *>(vp);

  int temp0;
  vtkGeometrySliceRepresentation *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkGeometrySliceRepresentation"))
  {
    if (ap.IsBound())
    {
      op->SetSliceRepresentation(temp0, temp1);
    }
    else
    {
      op->vtkPVCompositeOrthographicSliceRepresentation::SetSliceRepresentation(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVCompositeOrthographicSliceRepresentation_SetSliceRepresentation0(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceRepresentation0");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeOrthographicSliceRepresentation *op = static_cast<vtkPVCompositeOrthographicSliceRepresentation *>(vp);

  vtkGeometrySliceRepresentation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkGeometrySliceRepresentation"))
  {
    if (ap.IsBound())
    {
      op->SetSliceRepresentation0(temp0);
    }
    else
    {
      op->vtkPVCompositeOrthographicSliceRepresentation::SetSliceRepresentation0(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVCompositeOrthographicSliceRepresentation_SetSliceRepresentation1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceRepresentation1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeOrthographicSliceRepresentation *op = static_cast<vtkPVCompositeOrthographicSliceRepresentation *>(vp);

  vtkGeometrySliceRepresentation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkGeometrySliceRepresentation"))
  {
    if (ap.IsBound())
    {
      op->SetSliceRepresentation1(temp0);
    }
    else
    {
      op->vtkPVCompositeOrthographicSliceRepresentation::SetSliceRepresentation1(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVCompositeOrthographicSliceRepresentation_SetSliceRepresentation2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceRepresentation2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeOrthographicSliceRepresentation *op = static_cast<vtkPVCompositeOrthographicSliceRepresentation *>(vp);

  vtkGeometrySliceRepresentation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkGeometrySliceRepresentation"))
  {
    if (ap.IsBound())
    {
      op->SetSliceRepresentation2(temp0);
    }
    else
    {
      op->vtkPVCompositeOrthographicSliceRepresentation::SetSliceRepresentation2(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVCompositeOrthographicSliceRepresentation_SetVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeOrthographicSliceRepresentation *op = static_cast<vtkPVCompositeOrthographicSliceRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVisibility(temp0);
    }
    else
    {
      op->vtkPVCompositeOrthographicSliceRepresentation::SetVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVCompositeOrthographicSliceRepresentation_SetInputConnection_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeOrthographicSliceRepresentation *op = static_cast<vtkPVCompositeOrthographicSliceRepresentation *>(vp);

  int temp0;
  vtkAlgorithmOutput *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkAlgorithmOutput"))
  {
    if (ap.IsBound())
    {
      op->SetInputConnection(temp0, temp1);
    }
    else
    {
      op->vtkPVCompositeOrthographicSliceRepresentation::SetInputConnection(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPVCompositeOrthographicSliceRepresentation_SetInputConnection_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeOrthographicSliceRepresentation *op = static_cast<vtkPVCompositeOrthographicSliceRepresentation *>(vp);

  vtkAlgorithmOutput *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
  {
    if (ap.IsBound())
    {
      op->SetInputConnection(temp0);
    }
    else
    {
      op->vtkPVCompositeOrthographicSliceRepresentation::SetInputConnection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPVCompositeOrthographicSliceRepresentation_SetInputConnection(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkPVCompositeOrthographicSliceRepresentation_SetInputConnection_s1(self, args);
    case 1:
      return PyvtkPVCompositeOrthographicSliceRepresentation_SetInputConnection_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetInputConnection");
  return nullptr;
}



static PyObject *
PyvtkPVCompositeOrthographicSliceRepresentation_AddInputConnection_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeOrthographicSliceRepresentation *op = static_cast<vtkPVCompositeOrthographicSliceRepresentation *>(vp);

  int temp0;
  vtkAlgorithmOutput *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkAlgorithmOutput"))
  {
    if (ap.IsBound())
    {
      op->AddInputConnection(temp0, temp1);
    }
    else
    {
      op->vtkPVCompositeOrthographicSliceRepresentation::AddInputConnection(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPVCompositeOrthographicSliceRepresentation_AddInputConnection_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeOrthographicSliceRepresentation *op = static_cast<vtkPVCompositeOrthographicSliceRepresentation *>(vp);

  vtkAlgorithmOutput *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
  {
    if (ap.IsBound())
    {
      op->AddInputConnection(temp0);
    }
    else
    {
      op->vtkPVCompositeOrthographicSliceRepresentation::AddInputConnection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPVCompositeOrthographicSliceRepresentation_AddInputConnection(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkPVCompositeOrthographicSliceRepresentation_AddInputConnection_s1(self, args);
    case 1:
      return PyvtkPVCompositeOrthographicSliceRepresentation_AddInputConnection_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "AddInputConnection");
  return nullptr;
}



static PyObject *
PyvtkPVCompositeOrthographicSliceRepresentation_RemoveInputConnection_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeOrthographicSliceRepresentation *op = static_cast<vtkPVCompositeOrthographicSliceRepresentation *>(vp);

  int temp0;
  vtkAlgorithmOutput *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkAlgorithmOutput"))
  {
    if (ap.IsBound())
    {
      op->RemoveInputConnection(temp0, temp1);
    }
    else
    {
      op->vtkPVCompositeOrthographicSliceRepresentation::RemoveInputConnection(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPVCompositeOrthographicSliceRepresentation_RemoveInputConnection_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeOrthographicSliceRepresentation *op = static_cast<vtkPVCompositeOrthographicSliceRepresentation *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->RemoveInputConnection(temp0, temp1);
    }
    else
    {
      op->vtkPVCompositeOrthographicSliceRepresentation::RemoveInputConnection(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPVCompositeOrthographicSliceRepresentation_RemoveInputConnection_Methods[] = {
  {nullptr, PyvtkPVCompositeOrthographicSliceRepresentation_RemoveInputConnection_s1, METH_VARARGS,
   "@iV *vtkAlgorithmOutput"},
  {nullptr, PyvtkPVCompositeOrthographicSliceRepresentation_RemoveInputConnection_s2, METH_VARARGS,
   "@ii"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkPVCompositeOrthographicSliceRepresentation_RemoveInputConnection(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkPVCompositeOrthographicSliceRepresentation_RemoveInputConnection_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "RemoveInputConnection");
  return nullptr;
}



static PyObject *
PyvtkPVCompositeOrthographicSliceRepresentation_MarkModified(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MarkModified");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeOrthographicSliceRepresentation *op = static_cast<vtkPVCompositeOrthographicSliceRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MarkModified();
    }
    else
    {
      op->vtkPVCompositeOrthographicSliceRepresentation::MarkModified();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVCompositeOrthographicSliceRepresentation_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeOrthographicSliceRepresentation *op = static_cast<vtkPVCompositeOrthographicSliceRepresentation *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->Initialize(temp0, temp1) :
      op->vtkPVCompositeOrthographicSliceRepresentation::Initialize(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPVCompositeOrthographicSliceRepresentation_Methods[] = {
  {"IsTypeOf", PyvtkPVCompositeOrthographicSliceRepresentation_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPVCompositeOrthographicSliceRepresentation_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPVCompositeOrthographicSliceRepresentation_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase)\n    -> vtkPVCompositeOrthographicSliceRepresentation\nC++: static vtkPVCompositeOrthographicSliceRepresentation *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPVCompositeOrthographicSliceRepresentation_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPVCompositeOrthographicSliceRepresentation\nC++: vtkPVCompositeOrthographicSliceRepresentation *NewInstance()\n\n"},
  {"SetSliceRepresentation", PyvtkPVCompositeOrthographicSliceRepresentation_SetSliceRepresentation, METH_VARARGS,
   "V.SetSliceRepresentation(int, vtkGeometrySliceRepresentation)\nC++: void SetSliceRepresentation(int index,\n    vtkGeometrySliceRepresentation *)\n\n"},
  {"SetSliceRepresentation0", PyvtkPVCompositeOrthographicSliceRepresentation_SetSliceRepresentation0, METH_VARARGS,
   "V.SetSliceRepresentation0(vtkGeometrySliceRepresentation)\nC++: void SetSliceRepresentation0(\n    vtkGeometrySliceRepresentation *repr)\n\n"},
  {"SetSliceRepresentation1", PyvtkPVCompositeOrthographicSliceRepresentation_SetSliceRepresentation1, METH_VARARGS,
   "V.SetSliceRepresentation1(vtkGeometrySliceRepresentation)\nC++: void SetSliceRepresentation1(\n    vtkGeometrySliceRepresentation *repr)\n\n"},
  {"SetSliceRepresentation2", PyvtkPVCompositeOrthographicSliceRepresentation_SetSliceRepresentation2, METH_VARARGS,
   "V.SetSliceRepresentation2(vtkGeometrySliceRepresentation)\nC++: void SetSliceRepresentation2(\n    vtkGeometrySliceRepresentation *repr)\n\n"},
  {"SetVisibility", PyvtkPVCompositeOrthographicSliceRepresentation_SetVisibility, METH_VARARGS,
   "V.SetVisibility(bool)\nC++: void SetVisibility(bool visible) override;\n\nSet visibility of the representation. Overridden to update the\ncube-axes and selection visibilities.\n"},
  {"SetInputConnection", PyvtkPVCompositeOrthographicSliceRepresentation_SetInputConnection, METH_VARARGS,
   "V.SetInputConnection(int, vtkAlgorithmOutput)\nC++: void SetInputConnection(int port, vtkAlgorithmOutput *input)\n    override;\nV.SetInputConnection(vtkAlgorithmOutput)\nC++: void SetInputConnection(vtkAlgorithmOutput *input) override;\n\nOverridden to simply pass the input to the internal\nrepresentations. We won't need this if vtkDataRepresentation\ncorrectly respected in the arguments passed to it during\nProcessRequest() etc.\n"},
  {"AddInputConnection", PyvtkPVCompositeOrthographicSliceRepresentation_AddInputConnection, METH_VARARGS,
   "V.AddInputConnection(int, vtkAlgorithmOutput)\nC++: void AddInputConnection(int port, vtkAlgorithmOutput *input)\n    override;\nV.AddInputConnection(vtkAlgorithmOutput)\nC++: void AddInputConnection(vtkAlgorithmOutput *input) override;\n\nOverridden to simply pass the input to the internal\nrepresentations. We won't need this if vtkDataRepresentation\ncorrectly respected in the arguments passed to it during\nProcessRequest() etc.\n"},
  {"RemoveInputConnection", PyvtkPVCompositeOrthographicSliceRepresentation_RemoveInputConnection, METH_VARARGS,
   "V.RemoveInputConnection(int, vtkAlgorithmOutput)\nC++: void RemoveInputConnection(int port,\n    vtkAlgorithmOutput *input) override;\nV.RemoveInputConnection(int, int)\nC++: void RemoveInputConnection(int port, int index) override;\n\nOverridden to simply pass the input to the internal\nrepresentations. We won't need this if vtkDataRepresentation\ncorrectly respected in the arguments passed to it during\nProcessRequest() etc.\n"},
  {"MarkModified", PyvtkPVCompositeOrthographicSliceRepresentation_MarkModified, METH_VARARGS,
   "V.MarkModified()\nC++: void MarkModified() override;\n\nPropagate the modification to all internal representations.\n"},
  {"Initialize", PyvtkPVCompositeOrthographicSliceRepresentation_Initialize, METH_VARARGS,
   "V.Initialize(int, int) -> int\nC++: unsigned int Initialize(unsigned int minIdAvailable,\n    unsigned int maxIdAvailable) override;\n\nOverride because of internal composite representations that need\nto be initialized as well.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPVCompositeOrthographicSliceRepresentation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVClientServerCoreRenderingPython.vtkPVCompositeOrthographicSliceRepresentation", // tp_name
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
  PyvtkPVCompositeOrthographicSliceRepresentation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPVCompositeOrthographicSliceRepresentation_StaticNew()
{
  return vtkPVCompositeOrthographicSliceRepresentation::New();
}

PyObject *PyvtkPVCompositeOrthographicSliceRepresentation_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPVCompositeOrthographicSliceRepresentation_Type, PyvtkPVCompositeOrthographicSliceRepresentation_Methods,
    "vtkPVCompositeOrthographicSliceRepresentation",
 &PyvtkPVCompositeOrthographicSliceRepresentation_StaticNew);

  PyTypeObject *pytype = &PyvtkPVCompositeOrthographicSliceRepresentation_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPVCompositeRepresentation_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPVCompositeOrthographicSliceRepresentation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPVCompositeOrthographicSliceRepresentation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPVCompositeOrthographicSliceRepresentation", o) != 0)
  {
    Py_DECREF(o);
  }

}

