// python wrapper for vtkPVMetaClipDataSet
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
#include "vtkPVMetaClipDataSet.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPVMetaClipDataSet(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPVMetaClipDataSet_ClassNew(); }

#ifndef DECLARED_PyvtkPVDataSetAlgorithmSelectorFilter_ClassNew
extern "C" { PyObject *PyvtkPVDataSetAlgorithmSelectorFilter_ClassNew(); }
#define DECLARED_PyvtkPVDataSetAlgorithmSelectorFilter_ClassNew
#endif

static const char *PyvtkPVMetaClipDataSet_Doc =
  "vtkPVMetaClipDataSet - Meta class for clip filter that will allow the\nuser to switch between a regular clip filter or an extract cell by\nregion filter.\n\n"
  "Superclass: vtkPVDataSetAlgorithmSelectorFilter\n\n"
;


static PyObject *
PyvtkPVMetaClipDataSet_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPVMetaClipDataSet::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVMetaClipDataSet_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVMetaClipDataSet *op = static_cast<vtkPVMetaClipDataSet *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVMetaClipDataSet::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVMetaClipDataSet_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPVMetaClipDataSet *tempr = vtkPVMetaClipDataSet::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVMetaClipDataSet_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVMetaClipDataSet *op = static_cast<vtkPVMetaClipDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVMetaClipDataSet *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVMetaClipDataSet::NewInstance());

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
PyvtkPVMetaClipDataSet_PreserveInputCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PreserveInputCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVMetaClipDataSet *op = static_cast<vtkPVMetaClipDataSet *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->PreserveInputCells(temp0);
    }
    else
    {
      op->vtkPVMetaClipDataSet::PreserveInputCells(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVMetaClipDataSet_SetImplicitFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImplicitFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVMetaClipDataSet *op = static_cast<vtkPVMetaClipDataSet *>(vp);

  vtkImplicitFunction *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImplicitFunction"))
  {
    if (ap.IsBound())
    {
      op->SetImplicitFunction(temp0);
    }
    else
    {
      op->vtkPVMetaClipDataSet::SetImplicitFunction(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVMetaClipDataSet_SetInsideOut(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInsideOut");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVMetaClipDataSet *op = static_cast<vtkPVMetaClipDataSet *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInsideOut(temp0);
    }
    else
    {
      op->vtkPVMetaClipDataSet::SetInsideOut(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVMetaClipDataSet_SetClipFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClipFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVMetaClipDataSet *op = static_cast<vtkPVMetaClipDataSet *>(vp);

  vtkImplicitFunction *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImplicitFunction"))
  {
    if (ap.IsBound())
    {
      op->SetClipFunction(temp0);
    }
    else
    {
      op->vtkPVMetaClipDataSet::SetClipFunction(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVMetaClipDataSet_SetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVMetaClipDataSet *op = static_cast<vtkPVMetaClipDataSet *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetValue(temp0);
    }
    else
    {
      op->vtkPVMetaClipDataSet::SetValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVMetaClipDataSet_SetInputArrayToProcess_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputArrayToProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVMetaClipDataSet *op = static_cast<vtkPVMetaClipDataSet *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  const char *temp4 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    if (ap.IsBound())
    {
      op->SetInputArrayToProcess(temp0, temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkPVMetaClipDataSet::SetInputArrayToProcess(temp0, temp1, temp2, temp3, temp4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPVMetaClipDataSet_SetInputArrayToProcess_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputArrayToProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVMetaClipDataSet *op = static_cast<vtkPVMetaClipDataSet *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    if (ap.IsBound())
    {
      op->SetInputArrayToProcess(temp0, temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkPVMetaClipDataSet::SetInputArrayToProcess(temp0, temp1, temp2, temp3, temp4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPVMetaClipDataSet_SetInputArrayToProcess_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputArrayToProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVMetaClipDataSet *op = static_cast<vtkPVMetaClipDataSet *>(vp);

  int temp0;
  vtkInformation *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkInformation"))
  {
    if (ap.IsBound())
    {
      op->SetInputArrayToProcess(temp0, temp1);
    }
    else
    {
      op->vtkPVMetaClipDataSet::SetInputArrayToProcess(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPVMetaClipDataSet_SetInputArrayToProcess_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputArrayToProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVMetaClipDataSet *op = static_cast<vtkPVMetaClipDataSet *>(vp);

  int temp0;
  int temp1;
  int temp2;
  const char *temp3 = nullptr;
  const char *temp4 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    if (ap.IsBound())
    {
      op->SetInputArrayToProcess(temp0, temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkPVMetaClipDataSet::SetInputArrayToProcess(temp0, temp1, temp2, temp3, temp4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPVMetaClipDataSet_SetInputArrayToProcess_Methods[] = {
  {nullptr, PyvtkPVMetaClipDataSet_SetInputArrayToProcess_s1, METH_VARARGS,
   "@iiiiz"},
  {nullptr, PyvtkPVMetaClipDataSet_SetInputArrayToProcess_s2, METH_VARARGS,
   "@iiiii"},
  {nullptr, PyvtkPVMetaClipDataSet_SetInputArrayToProcess_s4, METH_VARARGS,
   "@iiizz"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkPVMetaClipDataSet_SetInputArrayToProcess(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkPVMetaClipDataSet_SetInputArrayToProcess_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkPVMetaClipDataSet_SetInputArrayToProcess_s3(self, args);
    case 5:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetInputArrayToProcess");
  return nullptr;
}



static PyObject *
PyvtkPVMetaClipDataSet_SetExactBoxClip(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExactBoxClip");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVMetaClipDataSet *op = static_cast<vtkPVMetaClipDataSet *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetExactBoxClip(temp0);
    }
    else
    {
      op->vtkPVMetaClipDataSet::SetExactBoxClip(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVMetaClipDataSet_GetExactBoxClip(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExactBoxClip");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVMetaClipDataSet *op = static_cast<vtkPVMetaClipDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetExactBoxClip() :
      op->vtkPVMetaClipDataSet::GetExactBoxClip());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVMetaClipDataSet_ExactBoxClipOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExactBoxClipOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVMetaClipDataSet *op = static_cast<vtkPVMetaClipDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ExactBoxClipOn();
    }
    else
    {
      op->vtkPVMetaClipDataSet::ExactBoxClipOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVMetaClipDataSet_ExactBoxClipOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExactBoxClipOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVMetaClipDataSet *op = static_cast<vtkPVMetaClipDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ExactBoxClipOff();
    }
    else
    {
      op->vtkPVMetaClipDataSet::ExactBoxClipOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVMetaClipDataSet_SetUseValueAsOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseValueAsOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVMetaClipDataSet *op = static_cast<vtkPVMetaClipDataSet *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseValueAsOffset(temp0);
    }
    else
    {
      op->vtkPVMetaClipDataSet::SetUseValueAsOffset(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVMetaClipDataSet_ProcessRequest(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessRequest");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVMetaClipDataSet *op = static_cast<vtkPVMetaClipDataSet *>(vp);

  vtkInformation *temp0 = nullptr;
  vtkCollection *temp1 = nullptr;
  vtkInformationVector *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkCollection") &&
      ap.GetVTKObject(temp2, "vtkInformationVector"))
  {
    int tempr = (ap.IsBound() ?
      op->ProcessRequest(temp0, temp1, temp2) :
      op->vtkPVMetaClipDataSet::ProcessRequest(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPVMetaClipDataSet_Methods[] = {
  {"IsTypeOf", PyvtkPVMetaClipDataSet_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPVMetaClipDataSet_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPVMetaClipDataSet_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPVMetaClipDataSet\nC++: static vtkPVMetaClipDataSet *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPVMetaClipDataSet_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPVMetaClipDataSet\nC++: vtkPVMetaClipDataSet *NewInstance()\n\n"},
  {"PreserveInputCells", PyvtkPVMetaClipDataSet_PreserveInputCells, METH_VARARGS,
   "V.PreserveInputCells(int)\nC++: void PreserveInputCells(int keepCellAsIs)\n\nEnable or disable the Extract Cells By Regions.\n"},
  {"SetImplicitFunction", PyvtkPVMetaClipDataSet_SetImplicitFunction, METH_VARARGS,
   "V.SetImplicitFunction(vtkImplicitFunction)\nC++: void SetImplicitFunction(vtkImplicitFunction *func)\n\n"},
  {"SetInsideOut", PyvtkPVMetaClipDataSet_SetInsideOut, METH_VARARGS,
   "V.SetInsideOut(int)\nC++: void SetInsideOut(int insideOut)\n\n"},
  {"SetClipFunction", PyvtkPVMetaClipDataSet_SetClipFunction, METH_VARARGS,
   "V.SetClipFunction(vtkImplicitFunction)\nC++: void SetClipFunction(vtkImplicitFunction *func)\n\nExpose method from vtkCutter\n"},
  {"SetValue", PyvtkPVMetaClipDataSet_SetValue, METH_VARARGS,
   "V.SetValue(float)\nC++: void SetValue(double value)\n\nExpose method from vtkClip\n"},
  {"SetInputArrayToProcess", PyvtkPVMetaClipDataSet_SetInputArrayToProcess, METH_VARARGS,
   "V.SetInputArrayToProcess(int, int, int, int, string)\nC++: void SetInputArrayToProcess(int idx, int port,\n    int connection, int fieldAssociation, const char *name)\n    override;\nV.SetInputArrayToProcess(int, int, int, int, int)\nC++: void SetInputArrayToProcess(int idx, int port,\n    int connection, int fieldAssociation, int fieldAttributeType)\n    override;\nV.SetInputArrayToProcess(int, vtkInformation)\nC++: void SetInputArrayToProcess(int idx, vtkInformation *info)\n    override;\nV.SetInputArrayToProcess(int, int, int, string, string)\nC++: void SetInputArrayToProcess(int idx, int port,\n    int connection, const char *fieldName, const char *fieldType)\n    override;\n\nSet the input data arrays that this algorithm will process.\nSpecifically the idx array that this algorithm will process\n(starting from 0) is the array on port, connection with the\nspecified association and name or attribute type (such as\nSCALARS). The fieldAssociation refers to which field in the data\nobject the array is stored. See vtkDataObject::FieldAssociations\nfor detail.\n"},
  {"SetExactBoxClip", PyvtkPVMetaClipDataSet_SetExactBoxClip, METH_VARARGS,
   "V.SetExactBoxClip(bool)\nC++: virtual void SetExactBoxClip(bool _arg)\n\nFor clipping a box we will only get an approximate box from the\nvtkPVBox implicit function which can give undesired results. In\norder to get the exact box geometry output we need to perform 6\nplane clips which is very expensive. The default is to not use\nthe exact option. Additionally, the exact box clip must have\ninside out enabled.\n"},
  {"GetExactBoxClip", PyvtkPVMetaClipDataSet_GetExactBoxClip, METH_VARARGS,
   "V.GetExactBoxClip() -> bool\nC++: virtual bool GetExactBoxClip()\n\nFor clipping a box we will only get an approximate box from the\nvtkPVBox implicit function which can give undesired results. In\norder to get the exact box geometry output we need to perform 6\nplane clips which is very expensive. The default is to not use\nthe exact option. Additionally, the exact box clip must have\ninside out enabled.\n"},
  {"ExactBoxClipOn", PyvtkPVMetaClipDataSet_ExactBoxClipOn, METH_VARARGS,
   "V.ExactBoxClipOn()\nC++: virtual void ExactBoxClipOn()\n\nFor clipping a box we will only get an approximate box from the\nvtkPVBox implicit function which can give undesired results. In\norder to get the exact box geometry output we need to perform 6\nplane clips which is very expensive. The default is to not use\nthe exact option. Additionally, the exact box clip must have\ninside out enabled.\n"},
  {"ExactBoxClipOff", PyvtkPVMetaClipDataSet_ExactBoxClipOff, METH_VARARGS,
   "V.ExactBoxClipOff()\nC++: virtual void ExactBoxClipOff()\n\nFor clipping a box we will only get an approximate box from the\nvtkPVBox implicit function which can give undesired results. In\norder to get the exact box geometry output we need to perform 6\nplane clips which is very expensive. The default is to not use\nthe exact option. Additionally, the exact box clip must have\ninside out enabled.\n"},
  {"SetUseValueAsOffset", PyvtkPVMetaClipDataSet_SetUseValueAsOffset, METH_VARARGS,
   "V.SetUseValueAsOffset(int)\nC++: void SetUseValueAsOffset(int)\n\nExpose method from vtkClip\n"},
  {"ProcessRequest", PyvtkPVMetaClipDataSet_ProcessRequest, METH_VARARGS,
   "V.ProcessRequest(vtkInformation, vtkCollection,\n    vtkInformationVector) -> int\nC++: int ProcessRequest(vtkInformation *request,\n    vtkCollection *inInfo, vtkInformationVector *outInfo)\n    override;\n\nForward those methods to the underneath filters\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPVMetaClipDataSet_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsDefaultPython.vtkPVMetaClipDataSet", // tp_name
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
  PyvtkPVMetaClipDataSet_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPVMetaClipDataSet_StaticNew()
{
  return vtkPVMetaClipDataSet::New();
}

PyObject *PyvtkPVMetaClipDataSet_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPVMetaClipDataSet_Type, PyvtkPVMetaClipDataSet_Methods,
    "vtkPVMetaClipDataSet",
 &PyvtkPVMetaClipDataSet_StaticNew);

  PyTypeObject *pytype = &PyvtkPVMetaClipDataSet_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPVDataSetAlgorithmSelectorFilter_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPVMetaClipDataSet(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPVMetaClipDataSet_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPVMetaClipDataSet", o) != 0)
  {
    Py_DECREF(o);
  }

}

