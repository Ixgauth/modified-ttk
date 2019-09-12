// python wrapper for vtkHyperTreeGridCursor
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
#include "vtkHyperTreeGridCursor.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkHyperTreeGridCursor(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkHyperTreeGridCursor_ClassNew(); }

#ifndef DECLARED_PyvtkHyperTreeCursor_ClassNew
extern "C" { PyObject *PyvtkHyperTreeCursor_ClassNew(); }
#define DECLARED_PyvtkHyperTreeCursor_ClassNew
#endif

static const char *PyvtkHyperTreeGridCursor_Doc =
  "vtkHyperTreeGridCursor - Objects for depth-first traversal\nHyperTreeGrids.\n\n"
  "Superclass: vtkHyperTreeCursor\n\n"
  "Objects that can perform depth-first traversal of hyper tree grids,\n"
  "take into account more parameters (related to the grid structure)\n"
  "than\n"
  " the compact hyper tree cursor implemented in vtkHyperTree can. This\n"
  "is an abstract class. Cursors are created by the HyperTreeGrid\n"
  "implementation.\n\n"
  "@sa\n"
  "vtkHyperTreeCursor vtkHyperTree vtkHyperTreeGrid\n\n"
  "@par Thanks: This class was written by Gu\303\251nol\303\251 Harel and\n"
  "Jacques-Bernard Lekien, 2014 This class was re-written by Philippe\n"
  "Pebay, 2016 This work was supported by Commissariat a l'Energie\n"
  "Atomique (CEA/DIF)\n\n";


static PyObject *
PyvtkHyperTreeGridCursor_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkHyperTreeGridCursor::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridCursor_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridCursor *op = static_cast<vtkHyperTreeGridCursor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkHyperTreeGridCursor::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridCursor_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkHyperTreeGridCursor *tempr = vtkHyperTreeGridCursor::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridCursor_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridCursor *op = static_cast<vtkHyperTreeGridCursor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkHyperTreeGridCursor *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkHyperTreeGridCursor::NewInstance());

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
PyvtkHyperTreeGridCursor_Clone(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Clone");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridCursor *op = static_cast<vtkHyperTreeGridCursor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkHyperTreeGridCursor *tempr = (ap.IsBound() ?
      op->Clone() :
      op->vtkHyperTreeGridCursor::Clone());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridCursor_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridCursor *op = static_cast<vtkHyperTreeGridCursor *>(vp);

  vtkHyperTreeGrid *temp0 = nullptr;
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkHyperTreeGrid") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->Initialize(temp0, temp1);
    }
    else
    {
      op->vtkHyperTreeGridCursor::Initialize(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridCursor_SetGrid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGrid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridCursor *op = static_cast<vtkHyperTreeGridCursor *>(vp);

  vtkHyperTreeGrid *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkHyperTreeGrid"))
  {
    if (ap.IsBound())
    {
      op->SetGrid(temp0);
    }
    else
    {
      op->vtkHyperTreeGridCursor::SetGrid(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridCursor_GetGrid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGrid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridCursor *op = static_cast<vtkHyperTreeGridCursor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkHyperTreeGrid *tempr = (ap.IsBound() ?
      op->GetGrid() :
      op->vtkHyperTreeGridCursor::GetGrid());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridCursor_SetTree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridCursor *op = static_cast<vtkHyperTreeGridCursor *>(vp);

  vtkHyperTree *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkHyperTree"))
  {
    if (ap.IsBound())
    {
      op->SetTree(temp0);
    }
    else
    {
      op->vtkHyperTreeGridCursor::SetTree(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridCursor_GetTree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridCursor *op = static_cast<vtkHyperTreeGridCursor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkHyperTree *tempr = (ap.IsBound() ?
      op->GetTree() :
      op->vtkHyperTreeGridCursor::GetTree());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridCursor_GetVertexId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVertexId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridCursor *op = static_cast<vtkHyperTreeGridCursor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetVertexId() :
      op->vtkHyperTreeGridCursor::GetVertexId());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridCursor_GetGlobalNodeIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGlobalNodeIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridCursor *op = static_cast<vtkHyperTreeGridCursor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetGlobalNodeIndex() :
      op->vtkHyperTreeGridCursor::GetGlobalNodeIndex());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridCursor_IsLeaf(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsLeaf");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridCursor *op = static_cast<vtkHyperTreeGridCursor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsLeaf() :
      op->vtkHyperTreeGridCursor::IsLeaf());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridCursor_IsRoot(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsRoot");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridCursor *op = static_cast<vtkHyperTreeGridCursor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsRoot() :
      op->vtkHyperTreeGridCursor::IsRoot());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridCursor_GetLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridCursor *op = static_cast<vtkHyperTreeGridCursor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetLevel() :
      op->vtkHyperTreeGridCursor::GetLevel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridCursor_GetChildIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetChildIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridCursor *op = static_cast<vtkHyperTreeGridCursor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetChildIndex() :
      op->vtkHyperTreeGridCursor::GetChildIndex());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridCursor_ToRoot(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ToRoot");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridCursor *op = static_cast<vtkHyperTreeGridCursor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ToRoot();
    }
    else
    {
      op->vtkHyperTreeGridCursor::ToRoot();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridCursor_ToParent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ToParent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridCursor *op = static_cast<vtkHyperTreeGridCursor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ToParent();
    }
    else
    {
      op->vtkHyperTreeGridCursor::ToParent();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridCursor_ToChild(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ToChild");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridCursor *op = static_cast<vtkHyperTreeGridCursor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->ToChild(temp0);
    }
    else
    {
      op->vtkHyperTreeGridCursor::ToChild(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridCursor_ToSameVertex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ToSameVertex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridCursor *op = static_cast<vtkHyperTreeGridCursor *>(vp);

  vtkHyperTreeCursor *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkHyperTreeCursor"))
  {
    if (ap.IsBound())
    {
      op->ToSameVertex(temp0);
    }
    else
    {
      op->vtkHyperTreeGridCursor::ToSameVertex(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridCursor_IsEqual(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsEqual");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridCursor *op = static_cast<vtkHyperTreeGridCursor *>(vp);

  vtkHyperTreeCursor *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkHyperTreeCursor"))
  {
    bool tempr = (ap.IsBound() ?
      op->IsEqual(temp0) :
      op->vtkHyperTreeGridCursor::IsEqual(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridCursor_SameTree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SameTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridCursor *op = static_cast<vtkHyperTreeGridCursor *>(vp);

  vtkHyperTreeCursor *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkHyperTreeCursor"))
  {
    int tempr = (ap.IsBound() ?
      op->SameTree(temp0) :
      op->vtkHyperTreeGridCursor::SameTree(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridCursor_GetNumberOfChildren(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfChildren");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridCursor *op = static_cast<vtkHyperTreeGridCursor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfChildren() :
      op->vtkHyperTreeGridCursor::GetNumberOfChildren());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridCursor_GetDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridCursor *op = static_cast<vtkHyperTreeGridCursor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDimension() :
      op->vtkHyperTreeGridCursor::GetDimension());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridCursor_GetOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridCursor *op = static_cast<vtkHyperTreeGridCursor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetOrigin() :
      op->vtkHyperTreeGridCursor::GetOrigin());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridCursor_GetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridCursor *op = static_cast<vtkHyperTreeGridCursor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetSize() :
      op->vtkHyperTreeGridCursor::GetSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridCursor_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridCursor *op = static_cast<vtkHyperTreeGridCursor *>(vp);

  const size_t size0 = 6;
  double temp0[6];
  double save0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetBounds(temp0);
    }
    else
    {
      op->vtkHyperTreeGridCursor::GetBounds(temp0);
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
PyvtkHyperTreeGridCursor_GetPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridCursor *op = static_cast<vtkHyperTreeGridCursor *>(vp);

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
      op->vtkHyperTreeGridCursor::GetPoint(temp0);
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
PyvtkHyperTreeGridCursor_GetNumberOfCursors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCursors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridCursor *op = static_cast<vtkHyperTreeGridCursor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfCursors() :
      op->vtkHyperTreeGridCursor::GetNumberOfCursors());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridCursor_GetCursor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCursor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridCursor *op = static_cast<vtkHyperTreeGridCursor *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkHyperTreeGridCursor *tempr = (ap.IsBound() ?
      op->GetCursor(temp0) :
      op->vtkHyperTreeGridCursor::GetCursor(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridCursor_GetCornerCursors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCornerCursors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridCursor *op = static_cast<vtkHyperTreeGridCursor *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  vtkIdList *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkIdList"))
  {
    bool tempr = (ap.IsBound() ?
      op->GetCornerCursors(temp0, temp1, temp2) :
      op->vtkHyperTreeGridCursor::GetCornerCursors(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkHyperTreeGridCursor_Methods[] = {
  {"IsTypeOf", PyvtkHyperTreeGridCursor_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkHyperTreeGridCursor_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkHyperTreeGridCursor_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkHyperTreeGridCursor\nC++: static vtkHyperTreeGridCursor *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkHyperTreeGridCursor_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkHyperTreeGridCursor\nC++: vtkHyperTreeGridCursor *NewInstance()\n\n"},
  {"Clone", PyvtkHyperTreeGridCursor_Clone, METH_VARARGS,
   "V.Clone() -> vtkHyperTreeGridCursor\nC++: vtkHyperTreeGridCursor *Clone() override;\n\nCreate a copy of `this'.\n\\post results_exists:result!=0\n"},
  {"Initialize", PyvtkHyperTreeGridCursor_Initialize, METH_VARARGS,
   "V.Initialize(vtkHyperTreeGrid, int)\nC++: virtual void Initialize(vtkHyperTreeGrid *, vtkIdType)\n\nInitialize cursor at root of given tree index in grid.\n"},
  {"SetGrid", PyvtkHyperTreeGridCursor_SetGrid, METH_VARARGS,
   "V.SetGrid(vtkHyperTreeGrid)\nC++: virtual void SetGrid(vtkHyperTreeGrid *)\n\nSet the hyper tree grid to which the cursor is pointing.\n"},
  {"GetGrid", PyvtkHyperTreeGridCursor_GetGrid, METH_VARARGS,
   "V.GetGrid() -> vtkHyperTreeGrid\nC++: virtual vtkHyperTreeGrid *GetGrid()\n\nSet the hyper tree grid to which the cursor is pointing.\n"},
  {"SetTree", PyvtkHyperTreeGridCursor_SetTree, METH_VARARGS,
   "V.SetTree(vtkHyperTree)\nC++: void SetTree(vtkHyperTree *) override;\n\nSet the hyper tree to which the cursor is pointing.\n"},
  {"GetTree", PyvtkHyperTreeGridCursor_GetTree, METH_VARARGS,
   "V.GetTree() -> vtkHyperTree\nC++: vtkHyperTree *GetTree() override;\n\nSet the hyper tree to which the cursor is pointing.\n"},
  {"GetVertexId", PyvtkHyperTreeGridCursor_GetVertexId, METH_VARARGS,
   "V.GetVertexId() -> int\nC++: vtkIdType GetVertexId() override;\n\nReturn the index of the current vertex in the tree.\n"},
  {"GetGlobalNodeIndex", PyvtkHyperTreeGridCursor_GetGlobalNodeIndex, METH_VARARGS,
   "V.GetGlobalNodeIndex() -> int\nC++: virtual vtkIdType GetGlobalNodeIndex()\n\nReturn the global index (relative to the grid) of the current\nvertex in the tree.\n"},
  {"IsLeaf", PyvtkHyperTreeGridCursor_IsLeaf, METH_VARARGS,
   "V.IsLeaf() -> bool\nC++: bool IsLeaf() override;\n\nIs the cursor pointing to a leaf?\n"},
  {"IsRoot", PyvtkHyperTreeGridCursor_IsRoot, METH_VARARGS,
   "V.IsRoot() -> bool\nC++: bool IsRoot() override;\n\nIs the cursor at tree root?\n"},
  {"GetLevel", PyvtkHyperTreeGridCursor_GetLevel, METH_VARARGS,
   "V.GetLevel() -> int\nC++: unsigned int GetLevel() override;\n\nGet the level of the tree vertex pointed by the cursor.\n"},
  {"GetChildIndex", PyvtkHyperTreeGridCursor_GetChildIndex, METH_VARARGS,
   "V.GetChildIndex() -> int\nC++: int GetChildIndex() override;\n\nReturn the child number of the current vertex relative to its\nparent.\n\\pre not_root: !IsRoot().\n\\post valid_range: result>=0 && result<GetNumberOfChildren()\n"},
  {"ToRoot", PyvtkHyperTreeGridCursor_ToRoot, METH_VARARGS,
   "V.ToRoot()\nC++: void ToRoot() override;\n\nMove the cursor to the root vertex.\n\\pre can be root\n\\post is_root: IsRoot()\n"},
  {"ToParent", PyvtkHyperTreeGridCursor_ToParent, METH_VARARGS,
   "V.ToParent()\nC++: void ToParent() override;\n\nMove the cursor to the parent of the current vertex.\n\\pre not_root: !IsRoot()\n"},
  {"ToChild", PyvtkHyperTreeGridCursor_ToChild, METH_VARARGS,
   "V.ToChild(int)\nC++: void ToChild(int child) override;\n\nMove the cursor to child `child' of the current vertex.\n\\pre not_leaf: !IsLeaf()\n\\pre valid_child: child>=0 && child<this->GetNumberOfChildren()\n"},
  {"ToSameVertex", PyvtkHyperTreeGridCursor_ToSameVertex, METH_VARARGS,
   "V.ToSameVertex(vtkHyperTreeCursor)\nC++: void ToSameVertex(vtkHyperTreeCursor *other) override;\n\nMove the cursor to the same vertex pointed by `other'.\n\\pre other_exists: other!=0\n\\pre same_hypertree: this->SameTree(other);\n\\post equal: this->IsEqual(other)\nNB: not implemented\n"},
  {"IsEqual", PyvtkHyperTreeGridCursor_IsEqual, METH_VARARGS,
   "V.IsEqual(vtkHyperTreeCursor) -> bool\nC++: bool IsEqual(vtkHyperTreeCursor *other) override;\n\nIs `this' equal to `other'?\n\\pre other_exists: other!=0\n\\pre same_hypertree: this->SameTree(other);\nNB: not implemented\n"},
  {"SameTree", PyvtkHyperTreeGridCursor_SameTree, METH_VARARGS,
   "V.SameTree(vtkHyperTreeCursor) -> int\nC++: int SameTree(vtkHyperTreeCursor *other) override;\n\nAre `this' and `other' pointing on the same hypertree?\n\\pre other_exists: other!=0\nNB: not implemented\n"},
  {"GetNumberOfChildren", PyvtkHyperTreeGridCursor_GetNumberOfChildren, METH_VARARGS,
   "V.GetNumberOfChildren() -> int\nC++: int GetNumberOfChildren() override;\n\nReturn the number of children for each node (non-vertex leaf) of\nthe tree.\n\\post positive_number: result>0\n"},
  {"GetDimension", PyvtkHyperTreeGridCursor_GetDimension, METH_VARARGS,
   "V.GetDimension() -> int\nC++: int GetDimension() override;\n\nReturn the dimension of the tree.\n\\post positive_result: result>0\n"},
  {"GetOrigin", PyvtkHyperTreeGridCursor_GetOrigin, METH_VARARGS,
   "V.GetOrigin() -> (float, ...)\nC++: virtual double *GetOrigin()\n\nCompute the origin of the cursor. NB: The basic hyper tree grid\ncursor does not have an origin.\n"},
  {"GetSize", PyvtkHyperTreeGridCursor_GetSize, METH_VARARGS,
   "V.GetSize() -> (float, ...)\nC++: virtual double *GetSize()\n\nCompute the size of the cursor. NB: The basic hyper tree grid\ncursor does not have a size.\n"},
  {"GetBounds", PyvtkHyperTreeGridCursor_GetBounds, METH_VARARGS,
   "V.GetBounds([float, float, float, float, float, float])\nC++: virtual void GetBounds(double pt[6])\n\nCompute the bounds of the cursor. NB: The basic hyper tree grid\ncursor does not have bounds.\n"},
  {"GetPoint", PyvtkHyperTreeGridCursor_GetPoint, METH_VARARGS,
   "V.GetPoint([float, float, float])\nC++: virtual void GetPoint(double pt[3])\n\nCompute the center coordinates of the cursor. NB: The basic hyper\ntree grid cursor is always centered at 0.\n"},
  {"GetNumberOfCursors", PyvtkHyperTreeGridCursor_GetNumberOfCursors, METH_VARARGS,
   "V.GetNumberOfCursors() -> int\nC++: virtual unsigned int GetNumberOfCursors()\n\nReturn the number of neighborhood cursors The neighborhood\ndefinition depends on the type of cursor. NB: Only super cursors\nkeep track of neighborhoods.\n"},
  {"GetCursor", PyvtkHyperTreeGridCursor_GetCursor, METH_VARARGS,
   "V.GetCursor(int) -> vtkHyperTreeGridCursor\nC++: virtual vtkHyperTreeGridCursor *GetCursor(unsigned int)\n\nReturn the cursor pointing into i-th neighbor. The neighborhood\ndefinition depends on the type of cursor. NB: Only super cursors\nkeep track of neighborhoods.\n"},
  {"GetCornerCursors", PyvtkHyperTreeGridCursor_GetCornerCursors, METH_VARARGS,
   "V.GetCornerCursors(int, int, vtkIdList) -> bool\nC++: virtual bool GetCornerCursors(unsigned int, unsigned int,\n    vtkIdList *)\n\nReturn the list of cursors pointing to the leaves touching a\ngiven corner of the cell. Return whether the considered cell is\nthe owner of said corner. NB: Only the Moore super cursor\nimplements this functionality.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkHyperTreeGridCursor_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonDataModelPython.vtkHyperTreeGridCursor", // tp_name
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
  PyvtkHyperTreeGridCursor_Doc, // tp_doc
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

static vtkObjectBase *PyvtkHyperTreeGridCursor_StaticNew()
{
  return vtkHyperTreeGridCursor::New();
}

PyObject *PyvtkHyperTreeGridCursor_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkHyperTreeGridCursor_Type, PyvtkHyperTreeGridCursor_Methods,
    "vtkHyperTreeGridCursor",
 &PyvtkHyperTreeGridCursor_StaticNew);

  PyTypeObject *pytype = &PyvtkHyperTreeGridCursor_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkHyperTreeCursor_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkHyperTreeGridCursor(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkHyperTreeGridCursor_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkHyperTreeGridCursor", o) != 0)
  {
    Py_DECREF(o);
  }

}

