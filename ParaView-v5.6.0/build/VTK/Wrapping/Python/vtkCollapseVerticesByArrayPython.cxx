// python wrapper for vtkCollapseVerticesByArray
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
#include "vtkCollapseVerticesByArray.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCollapseVerticesByArray(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkCollapseVerticesByArray_ClassNew(); }

#ifndef DECLARED_PyvtkGraphAlgorithm_ClassNew
extern "C" { PyObject *PyvtkGraphAlgorithm_ClassNew(); }
#define DECLARED_PyvtkGraphAlgorithm_ClassNew
#endif

static const char *PyvtkCollapseVerticesByArray_Doc =
  "vtkCollapseVerticesByArray - Collapse the graph given a vertex array\n\n"
  "Superclass: vtkGraphAlgorithm\n\n"
  "vtkCollapseVerticesByArray is a class which collapses the graph using\n"
  "a vertex array as the key. So if the graph has vertices sharing\n"
  "common traits then this class combines all these vertices into one.\n"
  "This class does not perform aggregation on vertex data but allow to\n"
  "do so for edge data. Users can choose one or more edge data arrays\n"
  "for aggregation using AddAggregateEdgeArray function.\n\n";


static PyObject *
PyvtkCollapseVerticesByArray_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCollapseVerticesByArray::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCollapseVerticesByArray_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollapseVerticesByArray *op = static_cast<vtkCollapseVerticesByArray *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCollapseVerticesByArray::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCollapseVerticesByArray_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCollapseVerticesByArray *tempr = vtkCollapseVerticesByArray::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCollapseVerticesByArray_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollapseVerticesByArray *op = static_cast<vtkCollapseVerticesByArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCollapseVerticesByArray *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCollapseVerticesByArray::NewInstance());

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
PyvtkCollapseVerticesByArray_GetAllowSelfLoops(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAllowSelfLoops");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollapseVerticesByArray *op = static_cast<vtkCollapseVerticesByArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetAllowSelfLoops() :
      op->vtkCollapseVerticesByArray::GetAllowSelfLoops());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCollapseVerticesByArray_SetAllowSelfLoops(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAllowSelfLoops");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollapseVerticesByArray *op = static_cast<vtkCollapseVerticesByArray *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAllowSelfLoops(temp0);
    }
    else
    {
      op->vtkCollapseVerticesByArray::SetAllowSelfLoops(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCollapseVerticesByArray_AllowSelfLoopsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllowSelfLoopsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollapseVerticesByArray *op = static_cast<vtkCollapseVerticesByArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AllowSelfLoopsOn();
    }
    else
    {
      op->vtkCollapseVerticesByArray::AllowSelfLoopsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCollapseVerticesByArray_AllowSelfLoopsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllowSelfLoopsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollapseVerticesByArray *op = static_cast<vtkCollapseVerticesByArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AllowSelfLoopsOff();
    }
    else
    {
      op->vtkCollapseVerticesByArray::AllowSelfLoopsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCollapseVerticesByArray_AddAggregateEdgeArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddAggregateEdgeArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollapseVerticesByArray *op = static_cast<vtkCollapseVerticesByArray *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->AddAggregateEdgeArray(temp0);
    }
    else
    {
      op->vtkCollapseVerticesByArray::AddAggregateEdgeArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCollapseVerticesByArray_ClearAggregateEdgeArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearAggregateEdgeArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollapseVerticesByArray *op = static_cast<vtkCollapseVerticesByArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearAggregateEdgeArray();
    }
    else
    {
      op->vtkCollapseVerticesByArray::ClearAggregateEdgeArray();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCollapseVerticesByArray_GetVertexArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVertexArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollapseVerticesByArray *op = static_cast<vtkCollapseVerticesByArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetVertexArray() :
      op->vtkCollapseVerticesByArray::GetVertexArray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCollapseVerticesByArray_SetVertexArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVertexArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollapseVerticesByArray *op = static_cast<vtkCollapseVerticesByArray *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVertexArray(temp0);
    }
    else
    {
      op->vtkCollapseVerticesByArray::SetVertexArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCollapseVerticesByArray_GetCountEdgesCollapsed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCountEdgesCollapsed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollapseVerticesByArray *op = static_cast<vtkCollapseVerticesByArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetCountEdgesCollapsed() :
      op->vtkCollapseVerticesByArray::GetCountEdgesCollapsed());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCollapseVerticesByArray_SetCountEdgesCollapsed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCountEdgesCollapsed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollapseVerticesByArray *op = static_cast<vtkCollapseVerticesByArray *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCountEdgesCollapsed(temp0);
    }
    else
    {
      op->vtkCollapseVerticesByArray::SetCountEdgesCollapsed(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCollapseVerticesByArray_CountEdgesCollapsedOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CountEdgesCollapsedOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollapseVerticesByArray *op = static_cast<vtkCollapseVerticesByArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CountEdgesCollapsedOn();
    }
    else
    {
      op->vtkCollapseVerticesByArray::CountEdgesCollapsedOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCollapseVerticesByArray_CountEdgesCollapsedOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CountEdgesCollapsedOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollapseVerticesByArray *op = static_cast<vtkCollapseVerticesByArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CountEdgesCollapsedOff();
    }
    else
    {
      op->vtkCollapseVerticesByArray::CountEdgesCollapsedOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCollapseVerticesByArray_GetEdgesCollapsedArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgesCollapsedArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollapseVerticesByArray *op = static_cast<vtkCollapseVerticesByArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetEdgesCollapsedArray() :
      op->vtkCollapseVerticesByArray::GetEdgesCollapsedArray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCollapseVerticesByArray_SetEdgesCollapsedArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgesCollapsedArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollapseVerticesByArray *op = static_cast<vtkCollapseVerticesByArray *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEdgesCollapsedArray(temp0);
    }
    else
    {
      op->vtkCollapseVerticesByArray::SetEdgesCollapsedArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCollapseVerticesByArray_GetCountVerticesCollapsed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCountVerticesCollapsed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollapseVerticesByArray *op = static_cast<vtkCollapseVerticesByArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetCountVerticesCollapsed() :
      op->vtkCollapseVerticesByArray::GetCountVerticesCollapsed());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCollapseVerticesByArray_SetCountVerticesCollapsed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCountVerticesCollapsed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollapseVerticesByArray *op = static_cast<vtkCollapseVerticesByArray *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCountVerticesCollapsed(temp0);
    }
    else
    {
      op->vtkCollapseVerticesByArray::SetCountVerticesCollapsed(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCollapseVerticesByArray_CountVerticesCollapsedOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CountVerticesCollapsedOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollapseVerticesByArray *op = static_cast<vtkCollapseVerticesByArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CountVerticesCollapsedOn();
    }
    else
    {
      op->vtkCollapseVerticesByArray::CountVerticesCollapsedOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCollapseVerticesByArray_CountVerticesCollapsedOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CountVerticesCollapsedOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollapseVerticesByArray *op = static_cast<vtkCollapseVerticesByArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CountVerticesCollapsedOff();
    }
    else
    {
      op->vtkCollapseVerticesByArray::CountVerticesCollapsedOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCollapseVerticesByArray_GetVerticesCollapsedArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVerticesCollapsedArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollapseVerticesByArray *op = static_cast<vtkCollapseVerticesByArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetVerticesCollapsedArray() :
      op->vtkCollapseVerticesByArray::GetVerticesCollapsedArray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCollapseVerticesByArray_SetVerticesCollapsedArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVerticesCollapsedArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollapseVerticesByArray *op = static_cast<vtkCollapseVerticesByArray *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVerticesCollapsedArray(temp0);
    }
    else
    {
      op->vtkCollapseVerticesByArray::SetVerticesCollapsedArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkCollapseVerticesByArray_Methods[] = {
  {"IsTypeOf", PyvtkCollapseVerticesByArray_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCollapseVerticesByArray_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCollapseVerticesByArray_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkCollapseVerticesByArray\nC++: static vtkCollapseVerticesByArray *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCollapseVerticesByArray_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkCollapseVerticesByArray\nC++: vtkCollapseVerticesByArray *NewInstance()\n\n"},
  {"GetAllowSelfLoops", PyvtkCollapseVerticesByArray_GetAllowSelfLoops, METH_VARARGS,
   "V.GetAllowSelfLoops() -> bool\nC++: virtual bool GetAllowSelfLoops()\n\nBoolean to allow self loops during collapse.\n"},
  {"SetAllowSelfLoops", PyvtkCollapseVerticesByArray_SetAllowSelfLoops, METH_VARARGS,
   "V.SetAllowSelfLoops(bool)\nC++: virtual void SetAllowSelfLoops(bool _arg)\n\nBoolean to allow self loops during collapse.\n"},
  {"AllowSelfLoopsOn", PyvtkCollapseVerticesByArray_AllowSelfLoopsOn, METH_VARARGS,
   "V.AllowSelfLoopsOn()\nC++: virtual void AllowSelfLoopsOn()\n\nBoolean to allow self loops during collapse.\n"},
  {"AllowSelfLoopsOff", PyvtkCollapseVerticesByArray_AllowSelfLoopsOff, METH_VARARGS,
   "V.AllowSelfLoopsOff()\nC++: virtual void AllowSelfLoopsOff()\n\nBoolean to allow self loops during collapse.\n"},
  {"AddAggregateEdgeArray", PyvtkCollapseVerticesByArray_AddAggregateEdgeArray, METH_VARARGS,
   "V.AddAggregateEdgeArray(string)\nC++: void AddAggregateEdgeArray(const char *arrName)\n\nAdd arrays on which aggregation of data is allowed. Default if\nreplaced by the last value.\n"},
  {"ClearAggregateEdgeArray", PyvtkCollapseVerticesByArray_ClearAggregateEdgeArray, METH_VARARGS,
   "V.ClearAggregateEdgeArray()\nC++: void ClearAggregateEdgeArray()\n\nClear the list of arrays on which aggregation was set to allow.\n"},
  {"GetVertexArray", PyvtkCollapseVerticesByArray_GetVertexArray, METH_VARARGS,
   "V.GetVertexArray() -> string\nC++: virtual char *GetVertexArray()\n\nSet the array using which perform the collapse.\n"},
  {"SetVertexArray", PyvtkCollapseVerticesByArray_SetVertexArray, METH_VARARGS,
   "V.SetVertexArray(string)\nC++: virtual void SetVertexArray(const char *_arg)\n\nSet the array using which perform the collapse.\n"},
  {"GetCountEdgesCollapsed", PyvtkCollapseVerticesByArray_GetCountEdgesCollapsed, METH_VARARGS,
   "V.GetCountEdgesCollapsed() -> bool\nC++: virtual bool GetCountEdgesCollapsed()\n\nSet if count should be made of how many edges collapsed.\n"},
  {"SetCountEdgesCollapsed", PyvtkCollapseVerticesByArray_SetCountEdgesCollapsed, METH_VARARGS,
   "V.SetCountEdgesCollapsed(bool)\nC++: virtual void SetCountEdgesCollapsed(bool _arg)\n\nSet if count should be made of how many edges collapsed.\n"},
  {"CountEdgesCollapsedOn", PyvtkCollapseVerticesByArray_CountEdgesCollapsedOn, METH_VARARGS,
   "V.CountEdgesCollapsedOn()\nC++: virtual void CountEdgesCollapsedOn()\n\nSet if count should be made of how many edges collapsed.\n"},
  {"CountEdgesCollapsedOff", PyvtkCollapseVerticesByArray_CountEdgesCollapsedOff, METH_VARARGS,
   "V.CountEdgesCollapsedOff()\nC++: virtual void CountEdgesCollapsedOff()\n\nSet if count should be made of how many edges collapsed.\n"},
  {"GetEdgesCollapsedArray", PyvtkCollapseVerticesByArray_GetEdgesCollapsedArray, METH_VARARGS,
   "V.GetEdgesCollapsedArray() -> string\nC++: virtual char *GetEdgesCollapsedArray()\n\nName of the array where the count of how many edges collapsed\nwill be stored.By default the name of array is\n\"EdgesCollapsedCountArray\".\n"},
  {"SetEdgesCollapsedArray", PyvtkCollapseVerticesByArray_SetEdgesCollapsedArray, METH_VARARGS,
   "V.SetEdgesCollapsedArray(string)\nC++: virtual void SetEdgesCollapsedArray(const char *_arg)\n\nName of the array where the count of how many edges collapsed\nwill be stored.By default the name of array is\n\"EdgesCollapsedCountArray\".\n"},
  {"GetCountVerticesCollapsed", PyvtkCollapseVerticesByArray_GetCountVerticesCollapsed, METH_VARARGS,
   "V.GetCountVerticesCollapsed() -> bool\nC++: virtual bool GetCountVerticesCollapsed()\n\nGet/Set if count should be made of how many vertices collapsed.\n"},
  {"SetCountVerticesCollapsed", PyvtkCollapseVerticesByArray_SetCountVerticesCollapsed, METH_VARARGS,
   "V.SetCountVerticesCollapsed(bool)\nC++: virtual void SetCountVerticesCollapsed(bool _arg)\n\nGet/Set if count should be made of how many vertices collapsed.\n"},
  {"CountVerticesCollapsedOn", PyvtkCollapseVerticesByArray_CountVerticesCollapsedOn, METH_VARARGS,
   "V.CountVerticesCollapsedOn()\nC++: virtual void CountVerticesCollapsedOn()\n\nGet/Set if count should be made of how many vertices collapsed.\n"},
  {"CountVerticesCollapsedOff", PyvtkCollapseVerticesByArray_CountVerticesCollapsedOff, METH_VARARGS,
   "V.CountVerticesCollapsedOff()\nC++: virtual void CountVerticesCollapsedOff()\n\nGet/Set if count should be made of how many vertices collapsed.\n"},
  {"GetVerticesCollapsedArray", PyvtkCollapseVerticesByArray_GetVerticesCollapsedArray, METH_VARARGS,
   "V.GetVerticesCollapsedArray() -> string\nC++: virtual char *GetVerticesCollapsedArray()\n\nName of the array where the count of how many vertices collapsed\nwill be stored. By default name of the array is\n\"VerticesCollapsedCountArray\".\n"},
  {"SetVerticesCollapsedArray", PyvtkCollapseVerticesByArray_SetVerticesCollapsedArray, METH_VARARGS,
   "V.SetVerticesCollapsedArray(string)\nC++: virtual void SetVerticesCollapsedArray(const char *_arg)\n\nName of the array where the count of how many vertices collapsed\nwill be stored. By default name of the array is\n\"VerticesCollapsedCountArray\".\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkCollapseVerticesByArray_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInfovisCorePython.vtkCollapseVerticesByArray", // tp_name
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
  PyvtkCollapseVerticesByArray_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCollapseVerticesByArray_StaticNew()
{
  return vtkCollapseVerticesByArray::New();
}

PyObject *PyvtkCollapseVerticesByArray_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkCollapseVerticesByArray_Type, PyvtkCollapseVerticesByArray_Methods,
    "vtkCollapseVerticesByArray",
 &PyvtkCollapseVerticesByArray_StaticNew);

  PyTypeObject *pytype = &PyvtkCollapseVerticesByArray_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkGraphAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCollapseVerticesByArray(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCollapseVerticesByArray_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCollapseVerticesByArray", o) != 0)
  {
    Py_DECREF(o);
  }

}

