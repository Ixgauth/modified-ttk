// python wrapper for vtkPointSetToLabelHierarchy
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
#include "vtkPointSetToLabelHierarchy.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPointSetToLabelHierarchy(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPointSetToLabelHierarchy_ClassNew(); }

#ifndef DECLARED_PyvtkLabelHierarchyAlgorithm_ClassNew
extern "C" { PyObject *PyvtkLabelHierarchyAlgorithm_ClassNew(); }
#define DECLARED_PyvtkLabelHierarchyAlgorithm_ClassNew
#endif

static const char *PyvtkPointSetToLabelHierarchy_Doc =
  "vtkPointSetToLabelHierarchy - build a label hierarchy for a graph or\npoint set.\n\n"
  "Superclass: vtkLabelHierarchyAlgorithm\n\n"
  "Every point in the input vtkPoints object is taken to be an anchor\n"
  "point for a label. Statistics on the input points are used to\n"
  "subdivide an octree referencing the points until the points each\n"
  "octree node contains have a variance close to the node size and a\n"
  "limited population (< 100).\n\n";


static PyObject *
PyvtkPointSetToLabelHierarchy_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPointSetToLabelHierarchy::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointSetToLabelHierarchy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetToLabelHierarchy *op = static_cast<vtkPointSetToLabelHierarchy *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPointSetToLabelHierarchy::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointSetToLabelHierarchy_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPointSetToLabelHierarchy *tempr = vtkPointSetToLabelHierarchy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointSetToLabelHierarchy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetToLabelHierarchy *op = static_cast<vtkPointSetToLabelHierarchy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPointSetToLabelHierarchy *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPointSetToLabelHierarchy::NewInstance());

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
PyvtkPointSetToLabelHierarchy_SetTargetLabelCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTargetLabelCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetToLabelHierarchy *op = static_cast<vtkPointSetToLabelHierarchy *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTargetLabelCount(temp0);
    }
    else
    {
      op->vtkPointSetToLabelHierarchy::SetTargetLabelCount(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointSetToLabelHierarchy_GetTargetLabelCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTargetLabelCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetToLabelHierarchy *op = static_cast<vtkPointSetToLabelHierarchy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTargetLabelCount() :
      op->vtkPointSetToLabelHierarchy::GetTargetLabelCount());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointSetToLabelHierarchy_SetMaximumDepth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumDepth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetToLabelHierarchy *op = static_cast<vtkPointSetToLabelHierarchy *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaximumDepth(temp0);
    }
    else
    {
      op->vtkPointSetToLabelHierarchy::SetMaximumDepth(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointSetToLabelHierarchy_GetMaximumDepth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumDepth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetToLabelHierarchy *op = static_cast<vtkPointSetToLabelHierarchy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaximumDepth() :
      op->vtkPointSetToLabelHierarchy::GetMaximumDepth());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointSetToLabelHierarchy_SetUseUnicodeStrings(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseUnicodeStrings");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetToLabelHierarchy *op = static_cast<vtkPointSetToLabelHierarchy *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseUnicodeStrings(temp0);
    }
    else
    {
      op->vtkPointSetToLabelHierarchy::SetUseUnicodeStrings(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointSetToLabelHierarchy_GetUseUnicodeStrings(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseUnicodeStrings");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetToLabelHierarchy *op = static_cast<vtkPointSetToLabelHierarchy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseUnicodeStrings() :
      op->vtkPointSetToLabelHierarchy::GetUseUnicodeStrings());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointSetToLabelHierarchy_UseUnicodeStringsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseUnicodeStringsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetToLabelHierarchy *op = static_cast<vtkPointSetToLabelHierarchy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseUnicodeStringsOn();
    }
    else
    {
      op->vtkPointSetToLabelHierarchy::UseUnicodeStringsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointSetToLabelHierarchy_UseUnicodeStringsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseUnicodeStringsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetToLabelHierarchy *op = static_cast<vtkPointSetToLabelHierarchy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseUnicodeStringsOff();
    }
    else
    {
      op->vtkPointSetToLabelHierarchy::UseUnicodeStringsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointSetToLabelHierarchy_SetLabelArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetToLabelHierarchy *op = static_cast<vtkPointSetToLabelHierarchy *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLabelArrayName(temp0);
    }
    else
    {
      op->vtkPointSetToLabelHierarchy::SetLabelArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointSetToLabelHierarchy_GetLabelArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetToLabelHierarchy *op = static_cast<vtkPointSetToLabelHierarchy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetLabelArrayName() :
      op->vtkPointSetToLabelHierarchy::GetLabelArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointSetToLabelHierarchy_SetSizeArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSizeArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetToLabelHierarchy *op = static_cast<vtkPointSetToLabelHierarchy *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSizeArrayName(temp0);
    }
    else
    {
      op->vtkPointSetToLabelHierarchy::SetSizeArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointSetToLabelHierarchy_GetSizeArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSizeArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetToLabelHierarchy *op = static_cast<vtkPointSetToLabelHierarchy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetSizeArrayName() :
      op->vtkPointSetToLabelHierarchy::GetSizeArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointSetToLabelHierarchy_SetPriorityArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPriorityArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetToLabelHierarchy *op = static_cast<vtkPointSetToLabelHierarchy *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPriorityArrayName(temp0);
    }
    else
    {
      op->vtkPointSetToLabelHierarchy::SetPriorityArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointSetToLabelHierarchy_GetPriorityArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPriorityArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetToLabelHierarchy *op = static_cast<vtkPointSetToLabelHierarchy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetPriorityArrayName() :
      op->vtkPointSetToLabelHierarchy::GetPriorityArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointSetToLabelHierarchy_SetIconIndexArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIconIndexArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetToLabelHierarchy *op = static_cast<vtkPointSetToLabelHierarchy *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetIconIndexArrayName(temp0);
    }
    else
    {
      op->vtkPointSetToLabelHierarchy::SetIconIndexArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointSetToLabelHierarchy_GetIconIndexArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIconIndexArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetToLabelHierarchy *op = static_cast<vtkPointSetToLabelHierarchy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetIconIndexArrayName() :
      op->vtkPointSetToLabelHierarchy::GetIconIndexArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointSetToLabelHierarchy_SetOrientationArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientationArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetToLabelHierarchy *op = static_cast<vtkPointSetToLabelHierarchy *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOrientationArrayName(temp0);
    }
    else
    {
      op->vtkPointSetToLabelHierarchy::SetOrientationArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointSetToLabelHierarchy_GetOrientationArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrientationArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetToLabelHierarchy *op = static_cast<vtkPointSetToLabelHierarchy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetOrientationArrayName() :
      op->vtkPointSetToLabelHierarchy::GetOrientationArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointSetToLabelHierarchy_SetBoundedSizeArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBoundedSizeArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetToLabelHierarchy *op = static_cast<vtkPointSetToLabelHierarchy *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBoundedSizeArrayName(temp0);
    }
    else
    {
      op->vtkPointSetToLabelHierarchy::SetBoundedSizeArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointSetToLabelHierarchy_GetBoundedSizeArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBoundedSizeArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetToLabelHierarchy *op = static_cast<vtkPointSetToLabelHierarchy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetBoundedSizeArrayName() :
      op->vtkPointSetToLabelHierarchy::GetBoundedSizeArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointSetToLabelHierarchy_SetTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetToLabelHierarchy *op = static_cast<vtkPointSetToLabelHierarchy *>(vp);

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
      op->vtkPointSetToLabelHierarchy::SetTextProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointSetToLabelHierarchy_GetTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetToLabelHierarchy *op = static_cast<vtkPointSetToLabelHierarchy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetTextProperty() :
      op->vtkPointSetToLabelHierarchy::GetTextProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPointSetToLabelHierarchy_Methods[] = {
  {"IsTypeOf", PyvtkPointSetToLabelHierarchy_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPointSetToLabelHierarchy_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPointSetToLabelHierarchy_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPointSetToLabelHierarchy\nC++: static vtkPointSetToLabelHierarchy *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPointSetToLabelHierarchy_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPointSetToLabelHierarchy\nC++: vtkPointSetToLabelHierarchy *NewInstance()\n\n"},
  {"SetTargetLabelCount", PyvtkPointSetToLabelHierarchy_SetTargetLabelCount, METH_VARARGS,
   "V.SetTargetLabelCount(int)\nC++: virtual void SetTargetLabelCount(int _arg)\n\nSet/get the \"ideal\" number of labels to associate with each node\nin the output hierarchy.\n"},
  {"GetTargetLabelCount", PyvtkPointSetToLabelHierarchy_GetTargetLabelCount, METH_VARARGS,
   "V.GetTargetLabelCount() -> int\nC++: virtual int GetTargetLabelCount()\n\nSet/get the \"ideal\" number of labels to associate with each node\nin the output hierarchy.\n"},
  {"SetMaximumDepth", PyvtkPointSetToLabelHierarchy_SetMaximumDepth, METH_VARARGS,
   "V.SetMaximumDepth(int)\nC++: virtual void SetMaximumDepth(int _arg)\n\nSet/get the maximum tree depth in the output hierarchy.\n"},
  {"GetMaximumDepth", PyvtkPointSetToLabelHierarchy_GetMaximumDepth, METH_VARARGS,
   "V.GetMaximumDepth() -> int\nC++: virtual int GetMaximumDepth()\n\nSet/get the maximum tree depth in the output hierarchy.\n"},
  {"SetUseUnicodeStrings", PyvtkPointSetToLabelHierarchy_SetUseUnicodeStrings, METH_VARARGS,
   "V.SetUseUnicodeStrings(bool)\nC++: virtual void SetUseUnicodeStrings(bool _arg)\n\nWhether to use unicode strings.\n"},
  {"GetUseUnicodeStrings", PyvtkPointSetToLabelHierarchy_GetUseUnicodeStrings, METH_VARARGS,
   "V.GetUseUnicodeStrings() -> bool\nC++: virtual bool GetUseUnicodeStrings()\n\nWhether to use unicode strings.\n"},
  {"UseUnicodeStringsOn", PyvtkPointSetToLabelHierarchy_UseUnicodeStringsOn, METH_VARARGS,
   "V.UseUnicodeStringsOn()\nC++: virtual void UseUnicodeStringsOn()\n\nWhether to use unicode strings.\n"},
  {"UseUnicodeStringsOff", PyvtkPointSetToLabelHierarchy_UseUnicodeStringsOff, METH_VARARGS,
   "V.UseUnicodeStringsOff()\nC++: virtual void UseUnicodeStringsOff()\n\nWhether to use unicode strings.\n"},
  {"SetLabelArrayName", PyvtkPointSetToLabelHierarchy_SetLabelArrayName, METH_VARARGS,
   "V.SetLabelArrayName(string)\nC++: virtual void SetLabelArrayName(const char *name)\n\nSet/get the label array name.\n"},
  {"GetLabelArrayName", PyvtkPointSetToLabelHierarchy_GetLabelArrayName, METH_VARARGS,
   "V.GetLabelArrayName() -> string\nC++: virtual const char *GetLabelArrayName()\n\nSet/get the label array name.\n"},
  {"SetSizeArrayName", PyvtkPointSetToLabelHierarchy_SetSizeArrayName, METH_VARARGS,
   "V.SetSizeArrayName(string)\nC++: virtual void SetSizeArrayName(const char *name)\n\nSet/get the priority array name.\n"},
  {"GetSizeArrayName", PyvtkPointSetToLabelHierarchy_GetSizeArrayName, METH_VARARGS,
   "V.GetSizeArrayName() -> string\nC++: virtual const char *GetSizeArrayName()\n\nSet/get the priority array name.\n"},
  {"SetPriorityArrayName", PyvtkPointSetToLabelHierarchy_SetPriorityArrayName, METH_VARARGS,
   "V.SetPriorityArrayName(string)\nC++: virtual void SetPriorityArrayName(const char *name)\n\nSet/get the priority array name.\n"},
  {"GetPriorityArrayName", PyvtkPointSetToLabelHierarchy_GetPriorityArrayName, METH_VARARGS,
   "V.GetPriorityArrayName() -> string\nC++: virtual const char *GetPriorityArrayName()\n\nSet/get the priority array name.\n"},
  {"SetIconIndexArrayName", PyvtkPointSetToLabelHierarchy_SetIconIndexArrayName, METH_VARARGS,
   "V.SetIconIndexArrayName(string)\nC++: virtual void SetIconIndexArrayName(const char *name)\n\nSet/get the icon index array name.\n"},
  {"GetIconIndexArrayName", PyvtkPointSetToLabelHierarchy_GetIconIndexArrayName, METH_VARARGS,
   "V.GetIconIndexArrayName() -> string\nC++: virtual const char *GetIconIndexArrayName()\n\nSet/get the icon index array name.\n"},
  {"SetOrientationArrayName", PyvtkPointSetToLabelHierarchy_SetOrientationArrayName, METH_VARARGS,
   "V.SetOrientationArrayName(string)\nC++: virtual void SetOrientationArrayName(const char *name)\n\nSet/get the text orientation array name.\n"},
  {"GetOrientationArrayName", PyvtkPointSetToLabelHierarchy_GetOrientationArrayName, METH_VARARGS,
   "V.GetOrientationArrayName() -> string\nC++: virtual const char *GetOrientationArrayName()\n\nSet/get the text orientation array name.\n"},
  {"SetBoundedSizeArrayName", PyvtkPointSetToLabelHierarchy_SetBoundedSizeArrayName, METH_VARARGS,
   "V.SetBoundedSizeArrayName(string)\nC++: virtual void SetBoundedSizeArrayName(const char *name)\n\nSet/get the maximum text width (in world coordinates) array name.\n"},
  {"GetBoundedSizeArrayName", PyvtkPointSetToLabelHierarchy_GetBoundedSizeArrayName, METH_VARARGS,
   "V.GetBoundedSizeArrayName() -> string\nC++: virtual const char *GetBoundedSizeArrayName()\n\nSet/get the maximum text width (in world coordinates) array name.\n"},
  {"SetTextProperty", PyvtkPointSetToLabelHierarchy_SetTextProperty, METH_VARARGS,
   "V.SetTextProperty(vtkTextProperty)\nC++: virtual void SetTextProperty(vtkTextProperty *tprop)\n\nSet/get the text property assigned to the hierarchy.\n"},
  {"GetTextProperty", PyvtkPointSetToLabelHierarchy_GetTextProperty, METH_VARARGS,
   "V.GetTextProperty() -> vtkTextProperty\nC++: virtual vtkTextProperty *GetTextProperty()\n\nSet/get the text property assigned to the hierarchy.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPointSetToLabelHierarchy_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingLabelPython.vtkPointSetToLabelHierarchy", // tp_name
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
  PyvtkPointSetToLabelHierarchy_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPointSetToLabelHierarchy_StaticNew()
{
  return vtkPointSetToLabelHierarchy::New();
}

PyObject *PyvtkPointSetToLabelHierarchy_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPointSetToLabelHierarchy_Type, PyvtkPointSetToLabelHierarchy_Methods,
    "vtkPointSetToLabelHierarchy",
 &PyvtkPointSetToLabelHierarchy_StaticNew);

  PyTypeObject *pytype = &PyvtkPointSetToLabelHierarchy_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkLabelHierarchyAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPointSetToLabelHierarchy(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPointSetToLabelHierarchy_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPointSetToLabelHierarchy", o) != 0)
  {
    Py_DECREF(o);
  }

}

