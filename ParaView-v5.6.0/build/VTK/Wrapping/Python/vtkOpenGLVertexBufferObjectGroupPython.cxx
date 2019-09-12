// python wrapper for vtkOpenGLVertexBufferObjectGroup
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
#include "vtkOpenGLVertexBufferObjectGroup.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkOpenGLVertexBufferObjectGroup(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkOpenGLVertexBufferObjectGroup_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkOpenGLVertexBufferObjectGroup_Doc =
  "vtkOpenGLVertexBufferObjectGroup - manage vertex buffer objects\nshared within a mapper\n\n"
  "Superclass: vtkObject\n\n"
  "This class holds onto the VBOs that a mapper is using. The basic\n"
  "operation is that during the render process the mapper may cache a\n"
  "number of dataArrays as VBOs associated with attributes. This class\n"
  "keep track of freeing VBOs no longer used by the mapper and uploading\n"
  "new data as needed.\n\n"
  "When using CacheCataArray the same array can be set each time and\n"
  "this class will not rebuild or upload unless needed.\n\n"
  "When using the AppendDataArray API no caching is done and the VBOs\n"
  "will be rebuilt and uploaded each time. So when appending th emapper\n"
  "need to handle checking if the VBO should be updated.\n\n"
  "Use case:\n"
  "  make this an ivar of your mapper\n"
  "  vbg->CacheDataArray(\"vertexMC\", vtkDataArray);\n"
  "  vbg->BuildAllVBOs();\n"
  "  if (vbg->GetMTime() > your VAO update time)\n"
  "  {\n"
  "    vbg->AddAllAttributesToVAO(...);\n"
  "  }\n\n"
  "Appended Use case:\n"
  "  make this an ivar of your mapper\n"
  "  if (you need to update your VBOs)\n"
  "  {\n"
  "    vbg->ClearAllVBOs();\n"
  "    vbg->AppendDataArray(\"vertexMC\", vtkDataArray1);\n"
  "    vbg->AppendDataArray(\"vertexMC\", vtkDataArray2);\n"
  "    vbg->AppendDataArray(\"vertexMC\", vtkDataArray3);\n"
  "    vbg->BuildAllVBOs();\n"
  "    vbg->AddAllAttributesToVAO(...);\n"
  "  }\n\n"
  "use VAO\n\n";


static PyObject *
PyvtkOpenGLVertexBufferObjectGroup_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkOpenGLVertexBufferObjectGroup::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLVertexBufferObjectGroup_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLVertexBufferObjectGroup *op = static_cast<vtkOpenGLVertexBufferObjectGroup *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkOpenGLVertexBufferObjectGroup::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLVertexBufferObjectGroup_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkOpenGLVertexBufferObjectGroup *tempr = vtkOpenGLVertexBufferObjectGroup::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLVertexBufferObjectGroup_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLVertexBufferObjectGroup *op = static_cast<vtkOpenGLVertexBufferObjectGroup *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkOpenGLVertexBufferObjectGroup *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkOpenGLVertexBufferObjectGroup::NewInstance());

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
PyvtkOpenGLVertexBufferObjectGroup_GetNumberOfComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLVertexBufferObjectGroup *op = static_cast<vtkOpenGLVertexBufferObjectGroup *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfComponents(temp0) :
      op->vtkOpenGLVertexBufferObjectGroup::GetNumberOfComponents(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLVertexBufferObjectGroup_GetNumberOfTuples(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTuples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLVertexBufferObjectGroup *op = static_cast<vtkOpenGLVertexBufferObjectGroup *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfTuples(temp0) :
      op->vtkOpenGLVertexBufferObjectGroup::GetNumberOfTuples(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLVertexBufferObjectGroup_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLVertexBufferObjectGroup *op = static_cast<vtkOpenGLVertexBufferObjectGroup *>(vp);

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
      op->vtkOpenGLVertexBufferObjectGroup::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLVertexBufferObjectGroup_GetVBO(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVBO");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLVertexBufferObjectGroup *op = static_cast<vtkOpenGLVertexBufferObjectGroup *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkOpenGLVertexBufferObject *tempr = (ap.IsBound() ?
      op->GetVBO(temp0) :
      op->vtkOpenGLVertexBufferObjectGroup::GetVBO(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLVertexBufferObjectGroup_AddAllAttributesToVAO(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddAllAttributesToVAO");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLVertexBufferObjectGroup *op = static_cast<vtkOpenGLVertexBufferObjectGroup *>(vp);

  vtkShaderProgram *temp0 = nullptr;
  vtkOpenGLVertexArrayObject *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkShaderProgram") &&
      ap.GetVTKObject(temp1, "vtkOpenGLVertexArrayObject"))
  {
    if (ap.IsBound())
    {
      op->AddAllAttributesToVAO(temp0, temp1);
    }
    else
    {
      op->vtkOpenGLVertexBufferObjectGroup::AddAllAttributesToVAO(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLVertexBufferObjectGroup_RemoveAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLVertexBufferObjectGroup *op = static_cast<vtkOpenGLVertexBufferObjectGroup *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RemoveAttribute(temp0);
    }
    else
    {
      op->vtkOpenGLVertexBufferObjectGroup::RemoveAttribute(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLVertexBufferObjectGroup_CacheDataArray_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CacheDataArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLVertexBufferObjectGroup *op = static_cast<vtkOpenGLVertexBufferObjectGroup *>(vp);

  const char *temp0 = nullptr;
  vtkDataArray *temp1 = nullptr;
  vtkOpenGLVertexBufferObjectCache *temp2 = nullptr;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkDataArray") &&
      ap.GetVTKObject(temp2, "vtkOpenGLVertexBufferObjectCache") &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->CacheDataArray(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkOpenGLVertexBufferObjectGroup::CacheDataArray(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkOpenGLVertexBufferObjectGroup_CacheDataArray_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CacheDataArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLVertexBufferObjectGroup *op = static_cast<vtkOpenGLVertexBufferObjectGroup *>(vp);

  const char *temp0 = nullptr;
  vtkDataArray *temp1 = nullptr;
  vtkViewport *temp2 = nullptr;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkDataArray") &&
      ap.GetVTKObject(temp2, "vtkViewport") &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->CacheDataArray(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkOpenGLVertexBufferObjectGroup::CacheDataArray(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkOpenGLVertexBufferObjectGroup_CacheDataArray_Methods[] = {
  {nullptr, PyvtkOpenGLVertexBufferObjectGroup_CacheDataArray_s1, METH_VARARGS,
   "@zVVi *vtkDataArray *vtkOpenGLVertexBufferObjectCache"},
  {nullptr, PyvtkOpenGLVertexBufferObjectGroup_CacheDataArray_s2, METH_VARARGS,
   "@zVVi *vtkDataArray *vtkViewport"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkOpenGLVertexBufferObjectGroup_CacheDataArray(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkOpenGLVertexBufferObjectGroup_CacheDataArray_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "CacheDataArray");
  return nullptr;
}



static PyObject *
PyvtkOpenGLVertexBufferObjectGroup_ArrayExists(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ArrayExists");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLVertexBufferObjectGroup *op = static_cast<vtkOpenGLVertexBufferObjectGroup *>(vp);

  const char *temp0 = nullptr;
  vtkDataArray *temp1 = nullptr;
  vtkIdType temp2;
  vtkIdType temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkDataArray") &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    bool tempr = (ap.IsBound() ?
      op->ArrayExists(temp0, temp1, temp2, temp3) :
      op->vtkOpenGLVertexBufferObjectGroup::ArrayExists(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(2, temp2);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(3, temp3);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLVertexBufferObjectGroup_AppendDataArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AppendDataArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLVertexBufferObjectGroup *op = static_cast<vtkOpenGLVertexBufferObjectGroup *>(vp);

  const char *temp0 = nullptr;
  vtkDataArray *temp1 = nullptr;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkDataArray") &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->AppendDataArray(temp0, temp1, temp2);
    }
    else
    {
      op->vtkOpenGLVertexBufferObjectGroup::AppendDataArray(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLVertexBufferObjectGroup_BuildAllVBOs_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildAllVBOs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLVertexBufferObjectGroup *op = static_cast<vtkOpenGLVertexBufferObjectGroup *>(vp);

  vtkOpenGLVertexBufferObjectCache *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkOpenGLVertexBufferObjectCache"))
  {
    if (ap.IsBound())
    {
      op->BuildAllVBOs(temp0);
    }
    else
    {
      op->vtkOpenGLVertexBufferObjectGroup::BuildAllVBOs(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkOpenGLVertexBufferObjectGroup_BuildAllVBOs_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildAllVBOs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLVertexBufferObjectGroup *op = static_cast<vtkOpenGLVertexBufferObjectGroup *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    if (ap.IsBound())
    {
      op->BuildAllVBOs(temp0);
    }
    else
    {
      op->vtkOpenGLVertexBufferObjectGroup::BuildAllVBOs(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkOpenGLVertexBufferObjectGroup_BuildAllVBOs_Methods[] = {
  {nullptr, PyvtkOpenGLVertexBufferObjectGroup_BuildAllVBOs_s1, METH_VARARGS,
   "@V *vtkOpenGLVertexBufferObjectCache"},
  {nullptr, PyvtkOpenGLVertexBufferObjectGroup_BuildAllVBOs_s2, METH_VARARGS,
   "@V *vtkViewport"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkOpenGLVertexBufferObjectGroup_BuildAllVBOs(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkOpenGLVertexBufferObjectGroup_BuildAllVBOs_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "BuildAllVBOs");
  return nullptr;
}



static PyObject *
PyvtkOpenGLVertexBufferObjectGroup_ClearAllVBOs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearAllVBOs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLVertexBufferObjectGroup *op = static_cast<vtkOpenGLVertexBufferObjectGroup *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearAllVBOs();
    }
    else
    {
      op->vtkOpenGLVertexBufferObjectGroup::ClearAllVBOs();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLVertexBufferObjectGroup_ClearAllDataArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearAllDataArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLVertexBufferObjectGroup *op = static_cast<vtkOpenGLVertexBufferObjectGroup *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearAllDataArrays();
    }
    else
    {
      op->vtkOpenGLVertexBufferObjectGroup::ClearAllDataArrays();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLVertexBufferObjectGroup_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLVertexBufferObjectGroup *op = static_cast<vtkOpenGLVertexBufferObjectGroup *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkOpenGLVertexBufferObjectGroup::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkOpenGLVertexBufferObjectGroup_Methods[] = {
  {"IsTypeOf", PyvtkOpenGLVertexBufferObjectGroup_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkOpenGLVertexBufferObjectGroup_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkOpenGLVertexBufferObjectGroup_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkOpenGLVertexBufferObjectGroup\nC++: static vtkOpenGLVertexBufferObjectGroup *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkOpenGLVertexBufferObjectGroup_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkOpenGLVertexBufferObjectGroup\nC++: vtkOpenGLVertexBufferObjectGroup *NewInstance()\n\n"},
  {"GetNumberOfComponents", PyvtkOpenGLVertexBufferObjectGroup_GetNumberOfComponents, METH_VARARGS,
   "V.GetNumberOfComponents(string) -> int\nC++: int GetNumberOfComponents(const char *attribute)\n\nReturns the number of components for this attribute zero if the\nattribute does not exist\n"},
  {"GetNumberOfTuples", PyvtkOpenGLVertexBufferObjectGroup_GetNumberOfTuples, METH_VARARGS,
   "V.GetNumberOfTuples(string) -> int\nC++: int GetNumberOfTuples(const char *attribute)\n\nReturns the number of tuples for this attribute zero if the\nattribute does not exist\n"},
  {"ReleaseGraphicsResources", PyvtkOpenGLVertexBufferObjectGroup_ReleaseGraphicsResources, METH_VARARGS,
   "V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *)\n\nRelease any graphics resources that are being consumed by this\nmapper. The parameter window could be used to determine which\ngraphic resources to release.\n"},
  {"GetVBO", PyvtkOpenGLVertexBufferObjectGroup_GetVBO, METH_VARARGS,
   "V.GetVBO(string) -> vtkOpenGLVertexBufferObject\nC++: vtkOpenGLVertexBufferObject *GetVBO(const char *attribute)\n\nReturns the VBO for an attribute, NULL if it is not present.\n"},
  {"AddAllAttributesToVAO", PyvtkOpenGLVertexBufferObjectGroup_AddAllAttributesToVAO, METH_VARARGS,
   "V.AddAllAttributesToVAO(vtkShaderProgram,\n    vtkOpenGLVertexArrayObject)\nC++: void AddAllAttributesToVAO(vtkShaderProgram *program,\n    vtkOpenGLVertexArrayObject *vao)\n\nAttach all VBOs to their attributes\n"},
  {"RemoveAttribute", PyvtkOpenGLVertexBufferObjectGroup_RemoveAttribute, METH_VARARGS,
   "V.RemoveAttribute(string)\nC++: void RemoveAttribute(const char *attribute)\n\nused to remove a no longer needed attribute Calling\nCacheDataArray with a nullptr attribute will also work.\n"},
  {"CacheDataArray", PyvtkOpenGLVertexBufferObjectGroup_CacheDataArray, METH_VARARGS,
   "V.CacheDataArray(string, vtkDataArray,\n    vtkOpenGLVertexBufferObjectCache, int)\nC++: void CacheDataArray(const char *attribute, vtkDataArray *da,\n    vtkOpenGLVertexBufferObjectCache *cache, int destType)\nV.CacheDataArray(string, vtkDataArray, vtkViewport, int)\nC++: void CacheDataArray(const char *attribute, vtkDataArray *da,\n    vtkViewport *vp, int destType)\n\nSet the data array for an attribute in the VBO Group registers\nthe data array until build is called once this is called a valid\nVBO will exist\n"},
  {"ArrayExists", PyvtkOpenGLVertexBufferObjectGroup_ArrayExists, METH_VARARGS,
   "V.ArrayExists(string, vtkDataArray, int, int) -> bool\nC++: bool ArrayExists(const char *attribute, vtkDataArray *da,\n    vtkIdType &offset, vtkIdType &totalOffset)\n\nCheck if the array already exists. offset is the index of the\nfirst vertex of the array if it exists. totalOffset is the total\nnumber of vertices in the appended arrays. Note that if the array\ndoes not exist, offset is equal to totalOffset.\n"},
  {"AppendDataArray", PyvtkOpenGLVertexBufferObjectGroup_AppendDataArray, METH_VARARGS,
   "V.AppendDataArray(string, vtkDataArray, int)\nC++: void AppendDataArray(const char *attribute, vtkDataArray *da,\n     int destType)\n\nAppend a data array for an attribute in the VBO Group registers\nthe data array until build is called\n"},
  {"BuildAllVBOs", PyvtkOpenGLVertexBufferObjectGroup_BuildAllVBOs, METH_VARARGS,
   "V.BuildAllVBOs(vtkOpenGLVertexBufferObjectCache)\nC++: void BuildAllVBOs(vtkOpenGLVertexBufferObjectCache *)\nV.BuildAllVBOs(vtkViewport)\nC++: void BuildAllVBOs(vtkViewport *)\n\nusing the data arrays in this group build all the VBOs, once this\nhas been called the reference to the data arrays will be freed.\n"},
  {"ClearAllVBOs", PyvtkOpenGLVertexBufferObjectGroup_ClearAllVBOs, METH_VARARGS,
   "V.ClearAllVBOs()\nC++: void ClearAllVBOs()\n\nForce all the VBOs to be freed from this group. Call this prior\nto starting appending operations. Not needed for single array\ncaching.\n"},
  {"ClearAllDataArrays", PyvtkOpenGLVertexBufferObjectGroup_ClearAllDataArrays, METH_VARARGS,
   "V.ClearAllDataArrays()\nC++: void ClearAllDataArrays()\n\nClear all the data arrays. Typically an internal method.\nAutomatically called at the end of BuildAllVBOs to prepare for\nthe next set of attributes.\n"},
  {"GetMTime", PyvtkOpenGLVertexBufferObjectGroup_GetMTime, METH_VARARGS,
   "V.GetMTime() -> int\nC++: vtkMTimeType GetMTime() override;\n\nGet the mtime of this groups VBOs\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkOpenGLVertexBufferObjectGroup_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingOpenGL2Python.vtkOpenGLVertexBufferObjectGroup", // tp_name
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
  PyvtkOpenGLVertexBufferObjectGroup_Doc, // tp_doc
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

static vtkObjectBase *PyvtkOpenGLVertexBufferObjectGroup_StaticNew()
{
  return vtkOpenGLVertexBufferObjectGroup::New();
}

PyObject *PyvtkOpenGLVertexBufferObjectGroup_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkOpenGLVertexBufferObjectGroup_Type, PyvtkOpenGLVertexBufferObjectGroup_Methods,
    "vtkOpenGLVertexBufferObjectGroup",
 &PyvtkOpenGLVertexBufferObjectGroup_StaticNew);

  PyTypeObject *pytype = &PyvtkOpenGLVertexBufferObjectGroup_Type;

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

void PyVTKAddFile_vtkOpenGLVertexBufferObjectGroup(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkOpenGLVertexBufferObjectGroup_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkOpenGLVertexBufferObjectGroup", o) != 0)
  {
    Py_DECREF(o);
  }

}

