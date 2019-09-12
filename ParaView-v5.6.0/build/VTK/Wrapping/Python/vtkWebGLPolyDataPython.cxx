// python wrapper for vtkWebGLPolyData
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
#include "vtkWebGLPolyData.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkWebGLPolyData(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkWebGLPolyData_ClassNew(); }

#ifndef DECLARED_PyvtkWebGLObject_ClassNew
extern "C" { PyObject *PyvtkWebGLObject_ClassNew(); }
#define DECLARED_PyvtkWebGLObject_ClassNew
#endif

static const char *PyvtkWebGLPolyData_Doc =
  "vtkWebGLPolyData - PolyData representation for WebGL.\n\n"
  "Superclass: vtkWebGLObject\n\n"
;


static PyObject *
PyvtkWebGLPolyData_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkWebGLPolyData::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWebGLPolyData_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLPolyData *op = static_cast<vtkWebGLPolyData *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkWebGLPolyData::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWebGLPolyData_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkWebGLPolyData *tempr = vtkWebGLPolyData::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWebGLPolyData_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLPolyData *op = static_cast<vtkWebGLPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkWebGLPolyData *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkWebGLPolyData::NewInstance());

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
PyvtkWebGLPolyData_GenerateBinaryData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateBinaryData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLPolyData *op = static_cast<vtkWebGLPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateBinaryData();
    }
    else
    {
      op->vtkWebGLPolyData::GenerateBinaryData();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWebGLPolyData_GetBinaryData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBinaryData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLPolyData *op = static_cast<vtkWebGLPolyData *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    unsigned char *tempr = (ap.IsBound() ?
      op->GetBinaryData(temp0) :
      op->vtkWebGLPolyData::GetBinaryData(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWebGLPolyData_GetBinarySize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBinarySize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLPolyData *op = static_cast<vtkWebGLPolyData *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBinarySize(temp0) :
      op->vtkWebGLPolyData::GetBinarySize(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWebGLPolyData_GetNumberOfParts(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfParts");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLPolyData *op = static_cast<vtkWebGLPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfParts() :
      op->vtkWebGLPolyData::GetNumberOfParts());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWebGLPolyData_GetPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLPolyData *op = static_cast<vtkWebGLPolyData *>(vp);

  vtkTriangleFilter *temp0 = nullptr;
  vtkActor *temp1 = nullptr;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkTriangleFilter") &&
      ap.GetVTKObject(temp1, "vtkActor") &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->GetPoints(temp0, temp1, temp2);
    }
    else
    {
      op->vtkWebGLPolyData::GetPoints(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWebGLPolyData_GetLinesFromPolygon(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLinesFromPolygon");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLPolyData *op = static_cast<vtkWebGLPolyData *>(vp);

  vtkMapper *temp0 = nullptr;
  vtkActor *temp1 = nullptr;
  int temp2;
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<double> store3(2*size3);
  double *temp3 = store3.Data();
  double *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkMapper") &&
      ap.GetVTKObject(temp1, "vtkActor") &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3))
  {
    ap.Save(temp3, save3, size3);

    if (ap.IsBound())
    {
      op->GetLinesFromPolygon(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkWebGLPolyData::GetLinesFromPolygon(temp0, temp1, temp2, temp3);
    }

    if (ap.HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWebGLPolyData_GetLines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLPolyData *op = static_cast<vtkWebGLPolyData *>(vp);

  vtkTriangleFilter *temp0 = nullptr;
  vtkActor *temp1 = nullptr;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkTriangleFilter") &&
      ap.GetVTKObject(temp1, "vtkActor") &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->GetLines(temp0, temp1, temp2);
    }
    else
    {
      op->vtkWebGLPolyData::GetLines(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWebGLPolyData_GetColorsFromPolyData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorsFromPolyData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLPolyData *op = static_cast<vtkWebGLPolyData *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<unsigned char> store0(2*size0);
  unsigned char *temp0 = store0.Data();
  unsigned char *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  vtkPolyData *temp1 = nullptr;
  vtkActor *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetVTKObject(temp1, "vtkPolyData") &&
      ap.GetVTKObject(temp2, "vtkActor"))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetColorsFromPolyData(temp0, temp1, temp2);
    }
    else
    {
      op->vtkWebGLPolyData::GetColorsFromPolyData(temp0, temp1, temp2);
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
PyvtkWebGLPolyData_GetPolygonsFromPointData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolygonsFromPointData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLPolyData *op = static_cast<vtkWebGLPolyData *>(vp);

  vtkTriangleFilter *temp0 = nullptr;
  vtkActor *temp1 = nullptr;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkTriangleFilter") &&
      ap.GetVTKObject(temp1, "vtkActor") &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->GetPolygonsFromPointData(temp0, temp1, temp2);
    }
    else
    {
      op->vtkWebGLPolyData::GetPolygonsFromPointData(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWebGLPolyData_GetPolygonsFromCellData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolygonsFromCellData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLPolyData *op = static_cast<vtkWebGLPolyData *>(vp);

  vtkTriangleFilter *temp0 = nullptr;
  vtkActor *temp1 = nullptr;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkTriangleFilter") &&
      ap.GetVTKObject(temp1, "vtkActor") &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->GetPolygonsFromCellData(temp0, temp1, temp2);
    }
    else
    {
      op->vtkWebGLPolyData::GetPolygonsFromCellData(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWebGLPolyData_GetColorsFromPointData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorsFromPointData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLPolyData *op = static_cast<vtkWebGLPolyData *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<unsigned char> store0(2*size0);
  unsigned char *temp0 = store0.Data();
  unsigned char *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  vtkPointData *temp1 = nullptr;
  vtkPolyData *temp2 = nullptr;
  vtkActor *temp3 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetVTKObject(temp1, "vtkPointData") &&
      ap.GetVTKObject(temp2, "vtkPolyData") &&
      ap.GetVTKObject(temp3, "vtkActor"))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetColorsFromPointData(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkWebGLPolyData::GetColorsFromPointData(temp0, temp1, temp2, temp3);
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
PyvtkWebGLPolyData_SetMesh(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMesh");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLPolyData *op = static_cast<vtkWebGLPolyData *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<float> store0(2*size0);
  float *temp0 = store0.Data();
  float *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  int temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<int> store2(2*size2);
  int *temp2 = store2.Data();
  int *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  int temp3;
  size_t size4 = ap.GetArgSize(4);
  vtkPythonArgs::Array<float> store4(2*size4);
  float *temp4 = store4.Data();
  float *save4 = (size4 == 0 ? nullptr : temp4 + size4);
  size_t size5 = ap.GetArgSize(5);
  vtkPythonArgs::Array<unsigned char> store5(2*size5);
  unsigned char *temp5 = store5.Data();
  unsigned char *save5 = (size5 == 0 ? nullptr : temp5 + size5);
  size_t size6 = ap.GetArgSize(6);
  vtkPythonArgs::Array<float> store6(2*size6);
  float *temp6 = store6.Data();
  float *save6 = (size6 == 0 ? nullptr : temp6 + size6);
  int temp7;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(8) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetValue(temp3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetArray(temp5, size5) &&
      ap.GetArray(temp6, size6) &&
      ap.GetValue(temp7))
  {
    ap.Save(temp0, save0, size0);
    ap.Save(temp2, save2, size2);
    ap.Save(temp4, save4, size4);
    ap.Save(temp5, save5, size5);
    ap.Save(temp6, save6, size6);

    if (ap.IsBound())
    {
      op->SetMesh(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7);
    }
    else
    {
      op->vtkWebGLPolyData::SetMesh(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7);
    }

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (ap.HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (ap.HasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(4, temp4, size4);
    }

    if (ap.HasChanged(temp5, save5, size5) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(5, temp5, size5);
    }

    if (ap.HasChanged(temp6, save6, size6) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(6, temp6, size6);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWebGLPolyData_SetLine(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLPolyData *op = static_cast<vtkWebGLPolyData *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<float> store0(2*size0);
  float *temp0 = store0.Data();
  float *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  int temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<int> store2(2*size2);
  int *temp2 = store2.Data();
  int *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  int temp3;
  size_t size4 = ap.GetArgSize(4);
  vtkPythonArgs::Array<unsigned char> store4(2*size4);
  unsigned char *temp4 = store4.Data();
  unsigned char *save4 = (size4 == 0 ? nullptr : temp4 + size4);
  int temp5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetValue(temp3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetValue(temp5))
  {
    ap.Save(temp0, save0, size0);
    ap.Save(temp2, save2, size2);
    ap.Save(temp4, save4, size4);

    if (ap.IsBound())
    {
      op->SetLine(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkWebGLPolyData::SetLine(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (ap.HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (ap.HasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(4, temp4, size4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWebGLPolyData_SetPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLPolyData *op = static_cast<vtkWebGLPolyData *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<float> store0(2*size0);
  float *temp0 = store0.Data();
  float *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  int temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<unsigned char> store2(2*size2);
  unsigned char *temp2 = store2.Data();
  unsigned char *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetValue(temp3))
  {
    ap.Save(temp0, save0, size0);
    ap.Save(temp2, save2, size2);

    if (ap.IsBound())
    {
      op->SetPoints(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkWebGLPolyData::SetPoints(temp0, temp1, temp2, temp3);
    }

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (ap.HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWebGLPolyData_SetTransformationMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTransformationMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLPolyData *op = static_cast<vtkWebGLPolyData *>(vp);

  vtkMatrix4x4 *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4"))
  {
    if (ap.IsBound())
    {
      op->SetTransformationMatrix(temp0);
    }
    else
    {
      op->vtkWebGLPolyData::SetTransformationMatrix(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkWebGLPolyData_Methods[] = {
  {"IsTypeOf", PyvtkWebGLPolyData_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkWebGLPolyData_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkWebGLPolyData_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkWebGLPolyData\nC++: static vtkWebGLPolyData *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkWebGLPolyData_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkWebGLPolyData\nC++: vtkWebGLPolyData *NewInstance()\n\n"},
  {"GenerateBinaryData", PyvtkWebGLPolyData_GenerateBinaryData, METH_VARARGS,
   "V.GenerateBinaryData()\nC++: void GenerateBinaryData() override;\n\n"},
  {"GetBinaryData", PyvtkWebGLPolyData_GetBinaryData, METH_VARARGS,
   "V.GetBinaryData(int) -> (int, ...)\nC++: unsigned char *GetBinaryData(int part) override;\n\n"},
  {"GetBinarySize", PyvtkWebGLPolyData_GetBinarySize, METH_VARARGS,
   "V.GetBinarySize(int) -> int\nC++: int GetBinarySize(int part) override;\n\n"},
  {"GetNumberOfParts", PyvtkWebGLPolyData_GetNumberOfParts, METH_VARARGS,
   "V.GetNumberOfParts() -> int\nC++: int GetNumberOfParts() override;\n\n"},
  {"GetPoints", PyvtkWebGLPolyData_GetPoints, METH_VARARGS,
   "V.GetPoints(vtkTriangleFilter, vtkActor, int)\nC++: void GetPoints(vtkTriangleFilter *polydata, vtkActor *actor,\n    int maxSize)\n\n"},
  {"GetLinesFromPolygon", PyvtkWebGLPolyData_GetLinesFromPolygon, METH_VARARGS,
   "V.GetLinesFromPolygon(vtkMapper, vtkActor, int, [float, ...])\nC++: void GetLinesFromPolygon(vtkMapper *mapper, vtkActor *actor,\n    int lineMaxSize, double *edgeColor)\n\n"},
  {"GetLines", PyvtkWebGLPolyData_GetLines, METH_VARARGS,
   "V.GetLines(vtkTriangleFilter, vtkActor, int)\nC++: void GetLines(vtkTriangleFilter *polydata, vtkActor *actor,\n    int lineMaxSize)\n\n"},
  {"GetColorsFromPolyData", PyvtkWebGLPolyData_GetColorsFromPolyData, METH_VARARGS,
   "V.GetColorsFromPolyData([int, ...], vtkPolyData, vtkActor)\nC++: void GetColorsFromPolyData(unsigned char *color,\n    vtkPolyData *polydata, vtkActor *actor)\n\n"},
  {"GetPolygonsFromPointData", PyvtkWebGLPolyData_GetPolygonsFromPointData, METH_VARARGS,
   "V.GetPolygonsFromPointData(vtkTriangleFilter, vtkActor, int)\nC++: void GetPolygonsFromPointData(vtkTriangleFilter *polydata,\n    vtkActor *actor, int maxSize)\n\n"},
  {"GetPolygonsFromCellData", PyvtkWebGLPolyData_GetPolygonsFromCellData, METH_VARARGS,
   "V.GetPolygonsFromCellData(vtkTriangleFilter, vtkActor, int)\nC++: void GetPolygonsFromCellData(vtkTriangleFilter *polydata,\n    vtkActor *actor, int maxSize)\n\n"},
  {"GetColorsFromPointData", PyvtkWebGLPolyData_GetColorsFromPointData, METH_VARARGS,
   "V.GetColorsFromPointData([int, ...], vtkPointData, vtkPolyData,\n    vtkActor)\nC++: void GetColorsFromPointData(unsigned char *color,\n    vtkPointData *pointdata, vtkPolyData *polydata,\n    vtkActor *actor)\n\n"},
  {"SetMesh", PyvtkWebGLPolyData_SetMesh, METH_VARARGS,
   "V.SetMesh([float, ...], int, [int, ...], int, [float, ...], [int,\n    ...], [float, ...], int)\nC++: void SetMesh(float *_vertices, int _numberOfVertices,\n    int *_index, int _numberOfIndexes, float *_normals,\n    unsigned char *_colors, float *_tcoords, int maxSize)\n\n"},
  {"SetLine", PyvtkWebGLPolyData_SetLine, METH_VARARGS,
   "V.SetLine([float, ...], int, [int, ...], int, [int, ...], int)\nC++: void SetLine(float *_points, int _numberOfPoints,\n    int *_index, int _numberOfIndex, unsigned char *_colors,\n    int maxSize)\n\n"},
  {"SetPoints", PyvtkWebGLPolyData_SetPoints, METH_VARARGS,
   "V.SetPoints([float, ...], int, [int, ...], int)\nC++: void SetPoints(float *points, int numberOfPoints,\n    unsigned char *colors, int maxSize)\n\n"},
  {"SetTransformationMatrix", PyvtkWebGLPolyData_SetTransformationMatrix, METH_VARARGS,
   "V.SetTransformationMatrix(vtkMatrix4x4)\nC++: void SetTransformationMatrix(vtkMatrix4x4 *m)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkWebGLPolyData_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkWebGLExporterPython.vtkWebGLPolyData", // tp_name
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
  PyvtkWebGLPolyData_Doc, // tp_doc
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

static vtkObjectBase *PyvtkWebGLPolyData_StaticNew()
{
  return vtkWebGLPolyData::New();
}

PyObject *PyvtkWebGLPolyData_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkWebGLPolyData_Type, PyvtkWebGLPolyData_Methods,
    "vtkWebGLPolyData",
 &PyvtkWebGLPolyData_StaticNew);

  PyTypeObject *pytype = &PyvtkWebGLPolyData_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkWebGLObject_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkWebGLPolyData(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkWebGLPolyData_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkWebGLPolyData", o) != 0)
  {
    Py_DECREF(o);
  }

}

