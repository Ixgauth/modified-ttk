// python wrapper for vtkPropAssembly
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
#include "vtkPropAssembly.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPropAssembly(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPropAssembly_ClassNew(); }

#ifndef DECLARED_PyvtkProp_ClassNew
extern "C" { PyObject *PyvtkProp_ClassNew(); }
#define DECLARED_PyvtkProp_ClassNew
#endif

static const char *PyvtkPropAssembly_Doc =
  "vtkPropAssembly - create hierarchies of props\n\n"
  "Superclass: vtkProp\n\n"
  "vtkPropAssembly is an object that groups props and other prop\n"
  "assemblies into a tree-like hierarchy. The props can then be treated\n"
  "as a group (e.g., turning visibility on and off).\n\n"
  "A vtkPropAssembly object can be used in place of an vtkProp since it\n"
  "is a subclass of vtkProp. The difference is that vtkPropAssembly\n"
  "maintains a list of other prop and prop assembly instances (its\n"
  "\"parts\") that form the assembly. Note that this process is recursive:\n"
  "you can create groups consisting of prop assemblies to arbitrary\n"
  "depth.\n\n"
  "vtkPropAssembly's and vtkProp's that compose a prop assembly need not\n"
  "be added to a renderer's list of props, as long as the parent\n"
  "assembly is in the prop list. This is because they are automatically\n"
  "renderered during the hierarchical traversal process.\n\n"
  "@warning\n"
  "vtkPropAssemblies can consist of hierarchies of assemblies, where one\n"
  "actor or assembly used in one hierarchy is also used in other\n"
  "hierarchies. However, make that there are no cycles (e.g.,\n"
  "parent->child->parent), this will cause program failure.\n\n"
  "@sa\n"
  "vtkProp3D vtkActor vtkAssembly vtkActor2D vtkVolume\n\n";


static PyObject *
PyvtkPropAssembly_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPropAssembly::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPropAssembly_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPropAssembly *op = static_cast<vtkPropAssembly *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPropAssembly::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPropAssembly_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPropAssembly *tempr = vtkPropAssembly::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPropAssembly_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPropAssembly *op = static_cast<vtkPropAssembly *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPropAssembly *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPropAssembly::NewInstance());

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
PyvtkPropAssembly_AddPart(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddPart");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPropAssembly *op = static_cast<vtkPropAssembly *>(vp);

  vtkProp *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp"))
  {
    if (ap.IsBound())
    {
      op->AddPart(temp0);
    }
    else
    {
      op->vtkPropAssembly::AddPart(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPropAssembly_RemovePart(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemovePart");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPropAssembly *op = static_cast<vtkPropAssembly *>(vp);

  vtkProp *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp"))
  {
    if (ap.IsBound())
    {
      op->RemovePart(temp0);
    }
    else
    {
      op->vtkPropAssembly::RemovePart(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPropAssembly_GetParts(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParts");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPropAssembly *op = static_cast<vtkPropAssembly *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPropCollection *tempr = (ap.IsBound() ?
      op->GetParts() :
      op->vtkPropAssembly::GetParts());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPropAssembly_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPropAssembly *op = static_cast<vtkPropAssembly *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkPropAssembly::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPropAssembly_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPropAssembly *op = static_cast<vtkPropAssembly *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderTranslucentPolygonalGeometry(temp0) :
      op->vtkPropAssembly::RenderTranslucentPolygonalGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPropAssembly_RenderVolumetricGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderVolumetricGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPropAssembly *op = static_cast<vtkPropAssembly *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderVolumetricGeometry(temp0) :
      op->vtkPropAssembly::RenderVolumetricGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPropAssembly_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPropAssembly *op = static_cast<vtkPropAssembly *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOverlay(temp0) :
      op->vtkPropAssembly::RenderOverlay(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPropAssembly_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPropAssembly *op = static_cast<vtkPropAssembly *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->HasTranslucentPolygonalGeometry() :
      op->vtkPropAssembly::HasTranslucentPolygonalGeometry());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPropAssembly_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPropAssembly *op = static_cast<vtkPropAssembly *>(vp);

  vtkWindow *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkWindow"))
  {
    if (ap.IsBound())
    {
      op->ReleaseGraphicsResources(temp0);
    }
    else
    {
      op->vtkPropAssembly::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPropAssembly_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPropAssembly *op = static_cast<vtkPropAssembly *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkPropAssembly::GetBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkPropAssembly_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPropAssembly *op = static_cast<vtkPropAssembly *>(vp);

  vtkProp *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp"))
  {
    if (ap.IsBound())
    {
      op->ShallowCopy(temp0);
    }
    else
    {
      op->vtkPropAssembly::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPropAssembly_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPropAssembly *op = static_cast<vtkPropAssembly *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkPropAssembly::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPropAssembly_InitPathTraversal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitPathTraversal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPropAssembly *op = static_cast<vtkPropAssembly *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InitPathTraversal();
    }
    else
    {
      op->vtkPropAssembly::InitPathTraversal();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPropAssembly_GetNextPath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNextPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPropAssembly *op = static_cast<vtkPropAssembly *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAssemblyPath *tempr = (ap.IsBound() ?
      op->GetNextPath() :
      op->vtkPropAssembly::GetNextPath());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPropAssembly_GetNumberOfPaths(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPaths");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPropAssembly *op = static_cast<vtkPropAssembly *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPaths() :
      op->vtkPropAssembly::GetNumberOfPaths());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPropAssembly_BuildPaths(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildPaths");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPropAssembly *op = static_cast<vtkPropAssembly *>(vp);

  vtkAssemblyPaths *temp0 = nullptr;
  vtkAssemblyPath *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkAssemblyPaths") &&
      ap.GetVTKObject(temp1, "vtkAssemblyPath"))
  {
    if (ap.IsBound())
    {
      op->BuildPaths(temp0, temp1);
    }
    else
    {
      op->vtkPropAssembly::BuildPaths(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPropAssembly_Methods[] = {
  {"IsTypeOf", PyvtkPropAssembly_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPropAssembly_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPropAssembly_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPropAssembly\nC++: static vtkPropAssembly *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPropAssembly_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPropAssembly\nC++: vtkPropAssembly *NewInstance()\n\n"},
  {"AddPart", PyvtkPropAssembly_AddPart, METH_VARARGS,
   "V.AddPart(vtkProp)\nC++: void AddPart(vtkProp *)\n\nAdd a part to the list of parts.\n"},
  {"RemovePart", PyvtkPropAssembly_RemovePart, METH_VARARGS,
   "V.RemovePart(vtkProp)\nC++: void RemovePart(vtkProp *)\n\nRemove a part from the list of parts,\n"},
  {"GetParts", PyvtkPropAssembly_GetParts, METH_VARARGS,
   "V.GetParts() -> vtkPropCollection\nC++: vtkPropCollection *GetParts()\n\nReturn the list of parts.\n"},
  {"RenderOpaqueGeometry", PyvtkPropAssembly_RenderOpaqueGeometry, METH_VARARGS,
   "V.RenderOpaqueGeometry(vtkViewport) -> int\nC++: int RenderOpaqueGeometry(vtkViewport *ren) override;\n\nRender this assembly and all its parts.  The rendering process is\nrecursive. The parts of each assembly are rendered only if the\nvisibility for the prop is turned on.\n"},
  {"RenderTranslucentPolygonalGeometry", PyvtkPropAssembly_RenderTranslucentPolygonalGeometry, METH_VARARGS,
   "V.RenderTranslucentPolygonalGeometry(vtkViewport) -> int\nC++: int RenderTranslucentPolygonalGeometry(vtkViewport *ren)\n    override;\n\nRender this assembly and all its parts.  The rendering process is\nrecursive. The parts of each assembly are rendered only if the\nvisibility for the prop is turned on.\n"},
  {"RenderVolumetricGeometry", PyvtkPropAssembly_RenderVolumetricGeometry, METH_VARARGS,
   "V.RenderVolumetricGeometry(vtkViewport) -> int\nC++: int RenderVolumetricGeometry(vtkViewport *ren) override;\n\nRender this assembly and all its parts.  The rendering process is\nrecursive. The parts of each assembly are rendered only if the\nvisibility for the prop is turned on.\n"},
  {"RenderOverlay", PyvtkPropAssembly_RenderOverlay, METH_VARARGS,
   "V.RenderOverlay(vtkViewport) -> int\nC++: int RenderOverlay(vtkViewport *ren) override;\n\nRender this assembly and all its parts.  The rendering process is\nrecursive. The parts of each assembly are rendered only if the\nvisibility for the prop is turned on.\n"},
  {"HasTranslucentPolygonalGeometry", PyvtkPropAssembly_HasTranslucentPolygonalGeometry, METH_VARARGS,
   "V.HasTranslucentPolygonalGeometry() -> int\nC++: int HasTranslucentPolygonalGeometry() override;\n\nDoes this prop have some translucent polygonal geometry?\n"},
  {"ReleaseGraphicsResources", PyvtkPropAssembly_ReleaseGraphicsResources, METH_VARARGS,
   "V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nRelease any graphics resources that are being consumed by this\nactor. The parameter window could be used to determine which\ngraphic resources to release.\n"},
  {"GetBounds", PyvtkPropAssembly_GetBounds, METH_VARARGS,
   "V.GetBounds() -> (float, float, float, float, float, float)\nC++: double *GetBounds() override;\n\nGet the bounds for this prop assembly as\n(Xmin,Xmax,Ymin,Ymax,Zmin,Zmax). May return NULL in some cases\n(meaning the bounds is undefined).\n"},
  {"ShallowCopy", PyvtkPropAssembly_ShallowCopy, METH_VARARGS,
   "V.ShallowCopy(vtkProp)\nC++: void ShallowCopy(vtkProp *Prop) override;\n\nShallow copy of this vtkPropAssembly.\n"},
  {"GetMTime", PyvtkPropAssembly_GetMTime, METH_VARARGS,
   "V.GetMTime() -> int\nC++: vtkMTimeType GetMTime() override;\n\nOverride default GetMTime method to also consider all of the prop\nassembly's parts.\n"},
  {"InitPathTraversal", PyvtkPropAssembly_InitPathTraversal, METH_VARARGS,
   "V.InitPathTraversal()\nC++: void InitPathTraversal() override;\n\nMethods to traverse the paths (i.e., leaf nodes) of a prop\nassembly. These methods should be contrasted to those that\ntraverse the list of parts using GetParts().  GetParts() returns\na list of children of this assembly, not necessarily the leaf\nnodes of the assembly. To use the methods below - first invoke\nInitPathTraversal() followed by repeated calls to GetNextPath(). \nGetNextPath() returns a NULL pointer when the list is exhausted.\n(See the superclass vtkProp for more information about paths.)\n"},
  {"GetNextPath", PyvtkPropAssembly_GetNextPath, METH_VARARGS,
   "V.GetNextPath() -> vtkAssemblyPath\nC++: vtkAssemblyPath *GetNextPath() override;\n\nMethods to traverse the paths (i.e., leaf nodes) of a prop\nassembly. These methods should be contrasted to those that\ntraverse the list of parts using GetParts().  GetParts() returns\na list of children of this assembly, not necessarily the leaf\nnodes of the assembly. To use the methods below - first invoke\nInitPathTraversal() followed by repeated calls to GetNextPath(). \nGetNextPath() returns a NULL pointer when the list is exhausted.\n(See the superclass vtkProp for more information about paths.)\n"},
  {"GetNumberOfPaths", PyvtkPropAssembly_GetNumberOfPaths, METH_VARARGS,
   "V.GetNumberOfPaths() -> int\nC++: int GetNumberOfPaths() override;\n\nMethods to traverse the paths (i.e., leaf nodes) of a prop\nassembly. These methods should be contrasted to those that\ntraverse the list of parts using GetParts().  GetParts() returns\na list of children of this assembly, not necessarily the leaf\nnodes of the assembly. To use the methods below - first invoke\nInitPathTraversal() followed by repeated calls to GetNextPath(). \nGetNextPath() returns a NULL pointer when the list is exhausted.\n(See the superclass vtkProp for more information about paths.)\n"},
  {"BuildPaths", PyvtkPropAssembly_BuildPaths, METH_VARARGS,
   "V.BuildPaths(vtkAssemblyPaths, vtkAssemblyPath)\nC++: void BuildPaths(vtkAssemblyPaths *paths,\n    vtkAssemblyPath *path) override;\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THIS METHOD OUTSIDE OF THE RENDERING PROCESS Overload the\nsuperclass' vtkProp BuildPaths() method.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPropAssembly_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingCorePython.vtkPropAssembly", // tp_name
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
  PyvtkPropAssembly_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPropAssembly_StaticNew()
{
  return vtkPropAssembly::New();
}

PyObject *PyvtkPropAssembly_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPropAssembly_Type, PyvtkPropAssembly_Methods,
    "vtkPropAssembly",
 &PyvtkPropAssembly_StaticNew);

  PyTypeObject *pytype = &PyvtkPropAssembly_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkProp_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPropAssembly(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPropAssembly_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPropAssembly", o) != 0)
  {
    Py_DECREF(o);
  }

}

