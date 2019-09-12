// python wrapper for vtkPolyDataMapper
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
#include "vtkPolyDataMapper.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPolyDataMapper(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPolyDataMapper_ClassNew(); }

#ifndef DECLARED_PyvtkMapper_ClassNew
extern "C" { PyObject *PyvtkMapper_ClassNew(); }
#define DECLARED_PyvtkMapper_ClassNew
#endif

static const char *PyvtkPolyDataMapper_Doc =
  "vtkPolyDataMapper - map vtkPolyData to graphics primitives\n\n"
  "Superclass: vtkMapper\n\n"
  "vtkPolyDataMapper is a class that maps polygonal data (i.e.,\n"
  "vtkPolyData) to graphics primitives. vtkPolyDataMapper serves as a\n"
  "superclass for device-specific poly data mappers, that actually do\n"
  "the mapping to the rendering/graphics hardware/software.\n\n";


static PyObject *
PyvtkPolyDataMapper_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPolyDataMapper::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataMapper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper *op = static_cast<vtkPolyDataMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPolyDataMapper::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataMapper_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPolyDataMapper *tempr = vtkPolyDataMapper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataMapper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper *op = static_cast<vtkPolyDataMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPolyDataMapper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPolyDataMapper::NewInstance());

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
PyvtkPolyDataMapper_RenderPiece(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderPiece");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper *op = static_cast<vtkPolyDataMapper *>(vp);

  vtkRenderer *temp0 = nullptr;
  vtkActor *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkActor"))
  {
    op->RenderPiece(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataMapper_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper *op = static_cast<vtkPolyDataMapper *>(vp);

  vtkRenderer *temp0 = nullptr;
  vtkActor *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkActor"))
  {
    if (ap.IsBound())
    {
      op->Render(temp0, temp1);
    }
    else
    {
      op->vtkPolyDataMapper::Render(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataMapper_SetInputData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper *op = static_cast<vtkPolyDataMapper *>(vp);

  vtkPolyData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPolyData"))
  {
    if (ap.IsBound())
    {
      op->SetInputData(temp0);
    }
    else
    {
      op->vtkPolyDataMapper::SetInputData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataMapper_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper *op = static_cast<vtkPolyDataMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetInput() :
      op->vtkPolyDataMapper::GetInput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataMapper_Update_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper *op = static_cast<vtkPolyDataMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->Update(temp0);
    }
    else
    {
      op->vtkPolyDataMapper::Update(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPolyDataMapper_Update_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper *op = static_cast<vtkPolyDataMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Update();
    }
    else
    {
      op->vtkPolyDataMapper::Update();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPolyDataMapper_Update_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper *op = static_cast<vtkPolyDataMapper *>(vp);

  int temp0;
  vtkInformationVector *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkInformationVector"))
  {
    int tempr = (ap.IsBound() ?
      op->Update(temp0, temp1) :
      op->vtkPolyDataMapper::Update(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPolyDataMapper_Update_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper *op = static_cast<vtkPolyDataMapper *>(vp);

  vtkInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
  {
    int tempr = (ap.IsBound() ?
      op->Update(temp0) :
      op->vtkPolyDataMapper::Update(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPolyDataMapper_Update_Methods[] = {
  {nullptr, PyvtkPolyDataMapper_Update_s1, METH_VARARGS,
   "@i"},
  {nullptr, PyvtkPolyDataMapper_Update_s4, METH_VARARGS,
   "@V *vtkInformation"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkPolyDataMapper_Update(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkPolyDataMapper_Update_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkPolyDataMapper_Update_s2(self, args);
    case 2:
      return PyvtkPolyDataMapper_Update_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Update");
  return nullptr;
}



static PyObject *
PyvtkPolyDataMapper_SetPiece(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPiece");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper *op = static_cast<vtkPolyDataMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPiece(temp0);
    }
    else
    {
      op->vtkPolyDataMapper::SetPiece(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataMapper_GetPiece(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPiece");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper *op = static_cast<vtkPolyDataMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPiece() :
      op->vtkPolyDataMapper::GetPiece());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataMapper_SetNumberOfPieces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfPieces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper *op = static_cast<vtkPolyDataMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfPieces(temp0);
    }
    else
    {
      op->vtkPolyDataMapper::SetNumberOfPieces(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataMapper_GetNumberOfPieces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPieces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper *op = static_cast<vtkPolyDataMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPieces() :
      op->vtkPolyDataMapper::GetNumberOfPieces());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataMapper_SetNumberOfSubPieces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfSubPieces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper *op = static_cast<vtkPolyDataMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfSubPieces(temp0);
    }
    else
    {
      op->vtkPolyDataMapper::SetNumberOfSubPieces(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataMapper_GetNumberOfSubPieces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfSubPieces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper *op = static_cast<vtkPolyDataMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfSubPieces() :
      op->vtkPolyDataMapper::GetNumberOfSubPieces());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataMapper_SetGhostLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGhostLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper *op = static_cast<vtkPolyDataMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGhostLevel(temp0);
    }
    else
    {
      op->vtkPolyDataMapper::SetGhostLevel(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataMapper_GetGhostLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGhostLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper *op = static_cast<vtkPolyDataMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGhostLevel() :
      op->vtkPolyDataMapper::GetGhostLevel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataMapper_GetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper *op = static_cast<vtkPolyDataMapper *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkPolyDataMapper::GetBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkPolyDataMapper_GetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper *op = static_cast<vtkPolyDataMapper *>(vp);

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
      op->vtkPolyDataMapper::GetBounds(temp0);
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
PyvtkPolyDataMapper_GetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkPolyDataMapper_GetBounds_s1(self, args);
    case 1:
      return PyvtkPolyDataMapper_GetBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetBounds");
  return nullptr;
}



static PyObject *
PyvtkPolyDataMapper_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper *op = static_cast<vtkPolyDataMapper *>(vp);

  vtkAbstractMapper *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractMapper"))
  {
    if (ap.IsBound())
    {
      op->ShallowCopy(temp0);
    }
    else
    {
      op->vtkPolyDataMapper::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataMapper_MapDataArrayToVertexAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MapDataArrayToVertexAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper *op = static_cast<vtkPolyDataMapper *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  int temp2;
  int temp3 = -1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3, 4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
  {
    if (ap.IsBound())
    {
      op->MapDataArrayToVertexAttribute(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkPolyDataMapper::MapDataArrayToVertexAttribute(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataMapper_MapDataArrayToMultiTextureAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MapDataArrayToMultiTextureAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper *op = static_cast<vtkPolyDataMapper *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  int temp2;
  int temp3 = -1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3, 4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
  {
    if (ap.IsBound())
    {
      op->MapDataArrayToMultiTextureAttribute(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkPolyDataMapper::MapDataArrayToMultiTextureAttribute(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataMapper_RemoveVertexAttributeMapping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveVertexAttributeMapping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper *op = static_cast<vtkPolyDataMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RemoveVertexAttributeMapping(temp0);
    }
    else
    {
      op->vtkPolyDataMapper::RemoveVertexAttributeMapping(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataMapper_RemoveAllVertexAttributeMappings(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllVertexAttributeMappings");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper *op = static_cast<vtkPolyDataMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllVertexAttributeMappings();
    }
    else
    {
      op->vtkPolyDataMapper::RemoveAllVertexAttributeMappings();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPolyDataMapper_Methods[] = {
  {"IsTypeOf", PyvtkPolyDataMapper_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPolyDataMapper_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPolyDataMapper_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPolyDataMapper\nC++: static vtkPolyDataMapper *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPolyDataMapper_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPolyDataMapper\nC++: vtkPolyDataMapper *NewInstance()\n\n"},
  {"RenderPiece", PyvtkPolyDataMapper_RenderPiece, METH_VARARGS,
   "V.RenderPiece(vtkRenderer, vtkActor)\nC++: virtual void RenderPiece(vtkRenderer *ren, vtkActor *act)\n\nImplemented by sub classes. Actual rendering is done here.\n"},
  {"Render", PyvtkPolyDataMapper_Render, METH_VARARGS,
   "V.Render(vtkRenderer, vtkActor)\nC++: void Render(vtkRenderer *ren, vtkActor *act) override;\n\nThis calls RenderPiece (in a for loop if streaming is necessary).\n"},
  {"SetInputData", PyvtkPolyDataMapper_SetInputData, METH_VARARGS,
   "V.SetInputData(vtkPolyData)\nC++: void SetInputData(vtkPolyData *in)\n\nSpecify the input data to map.\n"},
  {"GetInput", PyvtkPolyDataMapper_GetInput, METH_VARARGS,
   "V.GetInput() -> vtkPolyData\nC++: vtkPolyData *GetInput()\n\nSpecify the input data to map.\n"},
  {"Update", PyvtkPolyDataMapper_Update, METH_VARARGS,
   "V.Update(int)\nC++: void Update(int port) override;\nV.Update()\nC++: void Update() override;\nV.Update(int, vtkInformationVector) -> int\nC++: int Update(int port, vtkInformationVector *requests)\n    override;\nV.Update(vtkInformation) -> int\nC++: int Update(vtkInformation *requests) override;\n\nBring this algorithm's outputs up-to-date.\n"},
  {"SetPiece", PyvtkPolyDataMapper_SetPiece, METH_VARARGS,
   "V.SetPiece(int)\nC++: virtual void SetPiece(int _arg)\n\nIf you want only a part of the data, specify by setting the\npiece.\n"},
  {"GetPiece", PyvtkPolyDataMapper_GetPiece, METH_VARARGS,
   "V.GetPiece() -> int\nC++: virtual int GetPiece()\n\nIf you want only a part of the data, specify by setting the\npiece.\n"},
  {"SetNumberOfPieces", PyvtkPolyDataMapper_SetNumberOfPieces, METH_VARARGS,
   "V.SetNumberOfPieces(int)\nC++: virtual void SetNumberOfPieces(int _arg)\n\nIf you want only a part of the data, specify by setting the\npiece.\n"},
  {"GetNumberOfPieces", PyvtkPolyDataMapper_GetNumberOfPieces, METH_VARARGS,
   "V.GetNumberOfPieces() -> int\nC++: virtual int GetNumberOfPieces()\n\nIf you want only a part of the data, specify by setting the\npiece.\n"},
  {"SetNumberOfSubPieces", PyvtkPolyDataMapper_SetNumberOfSubPieces, METH_VARARGS,
   "V.SetNumberOfSubPieces(int)\nC++: virtual void SetNumberOfSubPieces(int _arg)\n\nIf you want only a part of the data, specify by setting the\npiece.\n"},
  {"GetNumberOfSubPieces", PyvtkPolyDataMapper_GetNumberOfSubPieces, METH_VARARGS,
   "V.GetNumberOfSubPieces() -> int\nC++: virtual int GetNumberOfSubPieces()\n\nIf you want only a part of the data, specify by setting the\npiece.\n"},
  {"SetGhostLevel", PyvtkPolyDataMapper_SetGhostLevel, METH_VARARGS,
   "V.SetGhostLevel(int)\nC++: virtual void SetGhostLevel(int _arg)\n\nSet the number of ghost cells to return.\n"},
  {"GetGhostLevel", PyvtkPolyDataMapper_GetGhostLevel, METH_VARARGS,
   "V.GetGhostLevel() -> int\nC++: virtual int GetGhostLevel()\n\nSet the number of ghost cells to return.\n"},
  {"GetBounds", PyvtkPolyDataMapper_GetBounds, METH_VARARGS,
   "V.GetBounds() -> (float, float, float, float, float, float)\nC++: double *GetBounds() override;\nV.GetBounds([float, float, float, float, float, float])\nC++: void GetBounds(double bounds[6]) override;\n\nReturn bounding box (array of six doubles) of data expressed as\n(xmin,xmax, ymin,ymax, zmin,zmax).\n"},
  {"ShallowCopy", PyvtkPolyDataMapper_ShallowCopy, METH_VARARGS,
   "V.ShallowCopy(vtkAbstractMapper)\nC++: void ShallowCopy(vtkAbstractMapper *m)\n\nMake a shallow copy of this mapper.\n"},
  {"MapDataArrayToVertexAttribute", PyvtkPolyDataMapper_MapDataArrayToVertexAttribute, METH_VARARGS,
   "V.MapDataArrayToVertexAttribute(string, string, int, int)\nC++: virtual void MapDataArrayToVertexAttribute(\n    const char *vertexAttributeName, const char *dataArrayName,\n    int fieldAssociation, int componentno=-1)\n\nSelect a data array from the point/cell data and map it to a\ngeneric vertex attribute. vertexAttributeName is the name of the\nvertex attribute. dataArrayName is the name of the data array.\nfieldAssociation indicates when the data array is a point data\narray or cell data array (vtkDataObject::FIELD_ASSOCIATION_POINTS\nor (vtkDataObject::FIELD_ASSOCIATION_CELLS). componentno\nindicates which component from the data array must be passed as\nthe attribute. If -1, then all components are passed. Currently\nonly point data is supported.\n"},
  {"MapDataArrayToMultiTextureAttribute", PyvtkPolyDataMapper_MapDataArrayToMultiTextureAttribute, METH_VARARGS,
   "V.MapDataArrayToMultiTextureAttribute(string, string, int, int)\nC++: virtual void MapDataArrayToMultiTextureAttribute(\n    const char *textureName, const char *dataArrayName,\n    int fieldAssociation, int componentno=-1)\n\n"},
  {"RemoveVertexAttributeMapping", PyvtkPolyDataMapper_RemoveVertexAttributeMapping, METH_VARARGS,
   "V.RemoveVertexAttributeMapping(string)\nC++: virtual void RemoveVertexAttributeMapping(\n    const char *vertexAttributeName)\n\nRemove a vertex attribute mapping.\n"},
  {"RemoveAllVertexAttributeMappings", PyvtkPolyDataMapper_RemoveAllVertexAttributeMappings, METH_VARARGS,
   "V.RemoveAllVertexAttributeMappings()\nC++: virtual void RemoveAllVertexAttributeMappings()\n\nRemove all vertex attributes.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPolyDataMapper_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingCorePython.vtkPolyDataMapper", // tp_name
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
  PyvtkPolyDataMapper_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPolyDataMapper_StaticNew()
{
  return vtkPolyDataMapper::New();
}

PyObject *PyvtkPolyDataMapper_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPolyDataMapper_Type, PyvtkPolyDataMapper_Methods,
    "vtkPolyDataMapper",
 &PyvtkPolyDataMapper_StaticNew);

  PyTypeObject *pytype = &PyvtkPolyDataMapper_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkMapper_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPolyDataMapper(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPolyDataMapper_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPolyDataMapper", o) != 0)
  {
    Py_DECREF(o);
  }

}

