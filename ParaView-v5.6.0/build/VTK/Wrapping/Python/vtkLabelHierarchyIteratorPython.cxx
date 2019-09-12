// python wrapper for vtkLabelHierarchyIterator
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
#include "vtkLabelHierarchyIterator.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkLabelHierarchyIterator(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkLabelHierarchyIterator_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkLabelHierarchyIterator_Doc =
  "vtkLabelHierarchyIterator - iterator over vtkLabelHierarchy\n\n"
  "Superclass: vtkObject\n\n"
  "Abstract superclass for iterators over vtkLabelHierarchy.\n\n";


static PyObject *
PyvtkLabelHierarchyIterator_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkLabelHierarchyIterator::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabelHierarchyIterator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchyIterator *op = static_cast<vtkLabelHierarchyIterator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkLabelHierarchyIterator::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabelHierarchyIterator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkLabelHierarchyIterator *tempr = vtkLabelHierarchyIterator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabelHierarchyIterator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchyIterator *op = static_cast<vtkLabelHierarchyIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkLabelHierarchyIterator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkLabelHierarchyIterator::NewInstance());

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
PyvtkLabelHierarchyIterator_Begin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Begin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchyIterator *op = static_cast<vtkLabelHierarchyIterator *>(vp);

  vtkIdTypeArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkIdTypeArray"))
  {
    if (ap.IsBound())
    {
      op->Begin(temp0);
    }
    else
    {
      op->vtkLabelHierarchyIterator::Begin(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabelHierarchyIterator_Next(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Next");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchyIterator *op = static_cast<vtkLabelHierarchyIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Next();
    }
    else
    {
      op->vtkLabelHierarchyIterator::Next();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabelHierarchyIterator_IsAtEnd(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsAtEnd");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchyIterator *op = static_cast<vtkLabelHierarchyIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsAtEnd() :
      op->vtkLabelHierarchyIterator::IsAtEnd());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabelHierarchyIterator_GetPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchyIterator *op = static_cast<vtkLabelHierarchyIterator *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetPoint(temp0);
    }
    else
    {
      op->vtkLabelHierarchyIterator::GetPoint(temp0);
    }

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabelHierarchyIterator_GetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchyIterator *op = static_cast<vtkLabelHierarchyIterator *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  double save0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetSize(temp0);
    }
    else
    {
      op->vtkLabelHierarchyIterator::GetSize(temp0);
    }

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabelHierarchyIterator_GetBoundedSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBoundedSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchyIterator *op = static_cast<vtkLabelHierarchyIterator *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  double save0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetBoundedSize(temp0);
    }
    else
    {
      op->vtkLabelHierarchyIterator::GetBoundedSize(temp0);
    }

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabelHierarchyIterator_GetType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchyIterator *op = static_cast<vtkLabelHierarchyIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetType() :
      op->vtkLabelHierarchyIterator::GetType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabelHierarchyIterator_GetLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchyIterator *op = static_cast<vtkLabelHierarchyIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStdString tempr = (ap.IsBound() ?
      op->GetLabel() :
      op->vtkLabelHierarchyIterator::GetLabel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabelHierarchyIterator_GetUnicodeLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUnicodeLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchyIterator *op = static_cast<vtkLabelHierarchyIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkUnicodeString tempr = (ap.IsBound() ?
      op->GetUnicodeLabel() :
      op->vtkLabelHierarchyIterator::GetUnicodeLabel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabelHierarchyIterator_GetOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchyIterator *op = static_cast<vtkLabelHierarchyIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetOrientation() :
      op->vtkLabelHierarchyIterator::GetOrientation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabelHierarchyIterator_GetLabelId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchyIterator *op = static_cast<vtkLabelHierarchyIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetLabelId() :
      op->vtkLabelHierarchyIterator::GetLabelId());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabelHierarchyIterator_GetHierarchy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHierarchy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchyIterator *op = static_cast<vtkLabelHierarchyIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkLabelHierarchy *tempr = (ap.IsBound() ?
      op->GetHierarchy() :
      op->vtkLabelHierarchyIterator::GetHierarchy());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabelHierarchyIterator_SetTraversedBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTraversedBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchyIterator *op = static_cast<vtkLabelHierarchyIterator *>(vp);

  vtkPolyData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPolyData"))
  {
    if (ap.IsBound())
    {
      op->SetTraversedBounds(temp0);
    }
    else
    {
      op->vtkLabelHierarchyIterator::SetTraversedBounds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabelHierarchyIterator_GetNodeGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchyIterator *op = static_cast<vtkLabelHierarchyIterator *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  double temp1;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
  {
    ap.Save(temp0, save0, size0);

    op->GetNodeGeometry(temp0, temp1);

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabelHierarchyIterator_BoxNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BoxNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchyIterator *op = static_cast<vtkLabelHierarchyIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BoxNode();
    }
    else
    {
      op->vtkLabelHierarchyIterator::BoxNode();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabelHierarchyIterator_BoxAllNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BoxAllNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchyIterator *op = static_cast<vtkLabelHierarchyIterator *>(vp);

  vtkPolyData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPolyData"))
  {
    if (ap.IsBound())
    {
      op->BoxAllNodes(temp0);
    }
    else
    {
      op->vtkLabelHierarchyIterator::BoxAllNodes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabelHierarchyIterator_SetAllBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAllBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchyIterator *op = static_cast<vtkLabelHierarchyIterator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAllBounds(temp0);
    }
    else
    {
      op->vtkLabelHierarchyIterator::SetAllBounds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabelHierarchyIterator_GetAllBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAllBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchyIterator *op = static_cast<vtkLabelHierarchyIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAllBounds() :
      op->vtkLabelHierarchyIterator::GetAllBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkLabelHierarchyIterator_Methods[] = {
  {"IsTypeOf", PyvtkLabelHierarchyIterator_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkLabelHierarchyIterator_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkLabelHierarchyIterator_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkLabelHierarchyIterator\nC++: static vtkLabelHierarchyIterator *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkLabelHierarchyIterator_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkLabelHierarchyIterator\nC++: vtkLabelHierarchyIterator *NewInstance()\n\n"},
  {"Begin", PyvtkLabelHierarchyIterator_Begin, METH_VARARGS,
   "V.Begin(vtkIdTypeArray)\nC++: virtual void Begin(vtkIdTypeArray *)\n\nInitializes the iterator. lastLabels is an array holding labels\nwhich should be traversed before any other labels in the\nhierarchy. This could include labels placed during a previous\nrendering or a label located under the mouse pointer. You may\npass a null pointer.\n"},
  {"Next", PyvtkLabelHierarchyIterator_Next, METH_VARARGS,
   "V.Next()\nC++: virtual void Next()\n\nAdvance the iterator.\n"},
  {"IsAtEnd", PyvtkLabelHierarchyIterator_IsAtEnd, METH_VARARGS,
   "V.IsAtEnd() -> bool\nC++: virtual bool IsAtEnd()\n\nReturns true if the iterator is at the end.\n"},
  {"GetPoint", PyvtkLabelHierarchyIterator_GetPoint, METH_VARARGS,
   "V.GetPoint([float, float, float])\nC++: virtual void GetPoint(double x[3])\n\nRetrieves the current label location.\n"},
  {"GetSize", PyvtkLabelHierarchyIterator_GetSize, METH_VARARGS,
   "V.GetSize([float, float])\nC++: virtual void GetSize(double sz[2])\n\nRetrieves the current label size.\n"},
  {"GetBoundedSize", PyvtkLabelHierarchyIterator_GetBoundedSize, METH_VARARGS,
   "V.GetBoundedSize([float, float])\nC++: virtual void GetBoundedSize(double sz[2])\n\nRetrieves the current label maximum width in world coordinates.\n"},
  {"GetType", PyvtkLabelHierarchyIterator_GetType, METH_VARARGS,
   "V.GetType() -> int\nC++: virtual int GetType()\n\nRetrieves the current label type.\n"},
  {"GetLabel", PyvtkLabelHierarchyIterator_GetLabel, METH_VARARGS,
   "V.GetLabel() -> string\nC++: virtual vtkStdString GetLabel()\n\nRetrieves the current label string.\n"},
  {"GetUnicodeLabel", PyvtkLabelHierarchyIterator_GetUnicodeLabel, METH_VARARGS,
   "V.GetUnicodeLabel() -> unicode\nC++: virtual vtkUnicodeString GetUnicodeLabel()\n\nRetrieves the current label as a unicode string.\n"},
  {"GetOrientation", PyvtkLabelHierarchyIterator_GetOrientation, METH_VARARGS,
   "V.GetOrientation() -> float\nC++: virtual double GetOrientation()\n\nRetrieves the current label orientation.\n"},
  {"GetLabelId", PyvtkLabelHierarchyIterator_GetLabelId, METH_VARARGS,
   "V.GetLabelId() -> int\nC++: virtual vtkIdType GetLabelId()\n\nRetrieves the current label id.\n"},
  {"GetHierarchy", PyvtkLabelHierarchyIterator_GetHierarchy, METH_VARARGS,
   "V.GetHierarchy() -> vtkLabelHierarchy\nC++: virtual vtkLabelHierarchy *GetHierarchy()\n\nGet the label hierarchy associated with the current label.\n"},
  {"SetTraversedBounds", PyvtkLabelHierarchyIterator_SetTraversedBounds, METH_VARARGS,
   "V.SetTraversedBounds(vtkPolyData)\nC++: virtual void SetTraversedBounds(vtkPolyData *)\n\nSets a polydata to fill with geometry representing the bounding\nboxes of the traversed octree nodes.\n"},
  {"GetNodeGeometry", PyvtkLabelHierarchyIterator_GetNodeGeometry, METH_VARARGS,
   "V.GetNodeGeometry([float, float, float], float)\nC++: virtual void GetNodeGeometry(double ctr[3], double &size)\n\nRetrieve the coordinates of the center of the current hierarchy\nnode and the size of the node. Nodes are n-cubes, so the size is\nthe length of any edge of the cube. This is used by BoxNode().\n"},
  {"BoxNode", PyvtkLabelHierarchyIterator_BoxNode, METH_VARARGS,
   "V.BoxNode()\nC++: virtual void BoxNode()\n\nAdd a representation to TraversedBounds for the current octree\nnode. This should be called by subclasses inside Next(). Does\nnothing if TraversedBounds is NULL.\n"},
  {"BoxAllNodes", PyvtkLabelHierarchyIterator_BoxAllNodes, METH_VARARGS,
   "V.BoxAllNodes(vtkPolyData)\nC++: virtual void BoxAllNodes(vtkPolyData *)\n\nAdd a representation for all existing octree nodes to the\nspecified polydata. This is equivalent to setting\nTraversedBounds, iterating over the entire hierarchy, and then\nresetting TraversedBounds to its original value.\n"},
  {"SetAllBounds", PyvtkLabelHierarchyIterator_SetAllBounds, METH_VARARGS,
   "V.SetAllBounds(int)\nC++: virtual void SetAllBounds(int _arg)\n\nSet/get whether all nodes in the hierarchy should be added to the\nTraversedBounds polydata or only those traversed. When non-zero,\nall nodes will be added. By default, AllBounds is 0.\n"},
  {"GetAllBounds", PyvtkLabelHierarchyIterator_GetAllBounds, METH_VARARGS,
   "V.GetAllBounds() -> int\nC++: virtual int GetAllBounds()\n\nSet/get whether all nodes in the hierarchy should be added to the\nTraversedBounds polydata or only those traversed. When non-zero,\nall nodes will be added. By default, AllBounds is 0.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkLabelHierarchyIterator_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingLabelPython.vtkLabelHierarchyIterator", // tp_name
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
  PyvtkLabelHierarchyIterator_Doc, // tp_doc
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

PyObject *PyvtkLabelHierarchyIterator_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkLabelHierarchyIterator_Type, PyvtkLabelHierarchyIterator_Methods,
    "vtkLabelHierarchyIterator",
 nullptr);

  PyTypeObject *pytype = &PyvtkLabelHierarchyIterator_Type;

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

void PyVTKAddFile_vtkLabelHierarchyIterator(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkLabelHierarchyIterator_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkLabelHierarchyIterator", o) != 0)
  {
    Py_DECREF(o);
  }

}

