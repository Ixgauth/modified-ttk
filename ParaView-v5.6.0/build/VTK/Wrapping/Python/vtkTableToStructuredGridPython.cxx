// python wrapper for vtkTableToStructuredGrid
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
#include "vtkTableToStructuredGrid.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkTableToStructuredGrid(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkTableToStructuredGrid_ClassNew(); }

#ifndef DECLARED_PyvtkStructuredGridAlgorithm_ClassNew
extern "C" { PyObject *PyvtkStructuredGridAlgorithm_ClassNew(); }
#define DECLARED_PyvtkStructuredGridAlgorithm_ClassNew
#endif

static const char *PyvtkTableToStructuredGrid_Doc =
  "vtkTableToStructuredGrid - converts vtkTable to a vtkStructuredGrid.\n\n"
  "Superclass: vtkStructuredGridAlgorithm\n\n"
  "vtkTableToStructuredGrid is a filter that converts an input vtkTable\n"
  "to a vtkStructuredGrid. It provides API to select columns to use as\n"
  "points in the output structured grid. The specified dimensions of the\n"
  "output (specified using SetWholeExtent()) must match the number of\n"
  "rows in the input table.\n\n";


static PyObject *
PyvtkTableToStructuredGrid_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTableToStructuredGrid::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableToStructuredGrid_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToStructuredGrid *op = static_cast<vtkTableToStructuredGrid *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTableToStructuredGrid::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableToStructuredGrid_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTableToStructuredGrid *tempr = vtkTableToStructuredGrid::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableToStructuredGrid_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToStructuredGrid *op = static_cast<vtkTableToStructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTableToStructuredGrid *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTableToStructuredGrid::NewInstance());

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
PyvtkTableToStructuredGrid_SetWholeExtent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToStructuredGrid *op = static_cast<vtkTableToStructuredGrid *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  int temp5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
  {
    if (ap.IsBound())
    {
      op->SetWholeExtent(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkTableToStructuredGrid::SetWholeExtent(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTableToStructuredGrid_SetWholeExtent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToStructuredGrid *op = static_cast<vtkTableToStructuredGrid *>(vp);

  const size_t size0 = 6;
  int temp0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetWholeExtent(temp0);
    }
    else
    {
      op->vtkTableToStructuredGrid::SetWholeExtent(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTableToStructuredGrid_SetWholeExtent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkTableToStructuredGrid_SetWholeExtent_s1(self, args);
    case 1:
      return PyvtkTableToStructuredGrid_SetWholeExtent_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetWholeExtent");
  return nullptr;
}



static PyObject *
PyvtkTableToStructuredGrid_GetWholeExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToStructuredGrid *op = static_cast<vtkTableToStructuredGrid *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetWholeExtent() :
      op->vtkTableToStructuredGrid::GetWholeExtent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkTableToStructuredGrid_SetXColumn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXColumn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToStructuredGrid *op = static_cast<vtkTableToStructuredGrid *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetXColumn(temp0);
    }
    else
    {
      op->vtkTableToStructuredGrid::SetXColumn(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTableToStructuredGrid_GetXColumn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXColumn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToStructuredGrid *op = static_cast<vtkTableToStructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetXColumn() :
      op->vtkTableToStructuredGrid::GetXColumn());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableToStructuredGrid_SetXComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToStructuredGrid *op = static_cast<vtkTableToStructuredGrid *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetXComponent(temp0);
    }
    else
    {
      op->vtkTableToStructuredGrid::SetXComponent(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTableToStructuredGrid_GetXComponentMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXComponentMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToStructuredGrid *op = static_cast<vtkTableToStructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetXComponentMinValue() :
      op->vtkTableToStructuredGrid::GetXComponentMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableToStructuredGrid_GetXComponentMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXComponentMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToStructuredGrid *op = static_cast<vtkTableToStructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetXComponentMaxValue() :
      op->vtkTableToStructuredGrid::GetXComponentMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableToStructuredGrid_GetXComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToStructuredGrid *op = static_cast<vtkTableToStructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetXComponent() :
      op->vtkTableToStructuredGrid::GetXComponent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableToStructuredGrid_SetYColumn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYColumn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToStructuredGrid *op = static_cast<vtkTableToStructuredGrid *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetYColumn(temp0);
    }
    else
    {
      op->vtkTableToStructuredGrid::SetYColumn(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTableToStructuredGrid_GetYColumn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYColumn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToStructuredGrid *op = static_cast<vtkTableToStructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetYColumn() :
      op->vtkTableToStructuredGrid::GetYColumn());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableToStructuredGrid_SetYComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToStructuredGrid *op = static_cast<vtkTableToStructuredGrid *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetYComponent(temp0);
    }
    else
    {
      op->vtkTableToStructuredGrid::SetYComponent(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTableToStructuredGrid_GetYComponentMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYComponentMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToStructuredGrid *op = static_cast<vtkTableToStructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetYComponentMinValue() :
      op->vtkTableToStructuredGrid::GetYComponentMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableToStructuredGrid_GetYComponentMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYComponentMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToStructuredGrid *op = static_cast<vtkTableToStructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetYComponentMaxValue() :
      op->vtkTableToStructuredGrid::GetYComponentMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableToStructuredGrid_GetYComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToStructuredGrid *op = static_cast<vtkTableToStructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetYComponent() :
      op->vtkTableToStructuredGrid::GetYComponent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableToStructuredGrid_SetZColumn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZColumn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToStructuredGrid *op = static_cast<vtkTableToStructuredGrid *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetZColumn(temp0);
    }
    else
    {
      op->vtkTableToStructuredGrid::SetZColumn(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTableToStructuredGrid_GetZColumn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZColumn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToStructuredGrid *op = static_cast<vtkTableToStructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetZColumn() :
      op->vtkTableToStructuredGrid::GetZColumn());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableToStructuredGrid_SetZComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToStructuredGrid *op = static_cast<vtkTableToStructuredGrid *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetZComponent(temp0);
    }
    else
    {
      op->vtkTableToStructuredGrid::SetZComponent(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTableToStructuredGrid_GetZComponentMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZComponentMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToStructuredGrid *op = static_cast<vtkTableToStructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetZComponentMinValue() :
      op->vtkTableToStructuredGrid::GetZComponentMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableToStructuredGrid_GetZComponentMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZComponentMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToStructuredGrid *op = static_cast<vtkTableToStructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetZComponentMaxValue() :
      op->vtkTableToStructuredGrid::GetZComponentMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableToStructuredGrid_GetZComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToStructuredGrid *op = static_cast<vtkTableToStructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetZComponent() :
      op->vtkTableToStructuredGrid::GetZComponent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkTableToStructuredGrid_Methods[] = {
  {"IsTypeOf", PyvtkTableToStructuredGrid_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkTableToStructuredGrid_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkTableToStructuredGrid_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkTableToStructuredGrid\nC++: static vtkTableToStructuredGrid *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkTableToStructuredGrid_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkTableToStructuredGrid\nC++: vtkTableToStructuredGrid *NewInstance()\n\n"},
  {"SetWholeExtent", PyvtkTableToStructuredGrid_SetWholeExtent, METH_VARARGS,
   "V.SetWholeExtent(int, int, int, int, int, int)\nC++: void SetWholeExtent(int, int, int, int, int, int)\nV.SetWholeExtent((int, int, int, int, int, int))\nC++: void SetWholeExtent(int a[6])\n\n"},
  {"GetWholeExtent", PyvtkTableToStructuredGrid_GetWholeExtent, METH_VARARGS,
   "V.GetWholeExtent() -> (int, int, int, int, int, int)\nC++: int *GetWholeExtent()\n\n"},
  {"SetXColumn", PyvtkTableToStructuredGrid_SetXColumn, METH_VARARGS,
   "V.SetXColumn(string)\nC++: virtual void SetXColumn(const char *_arg)\n\nSet the name of the column to use as the X coordinate for the\npoints.\n"},
  {"GetXColumn", PyvtkTableToStructuredGrid_GetXColumn, METH_VARARGS,
   "V.GetXColumn() -> string\nC++: virtual char *GetXColumn()\n\nSet the name of the column to use as the X coordinate for the\npoints.\n"},
  {"SetXComponent", PyvtkTableToStructuredGrid_SetXComponent, METH_VARARGS,
   "V.SetXComponent(int)\nC++: virtual void SetXComponent(int _arg)\n\nSpecify the component for the column specified using SetXColumn()\nto use as the xcoordinate in case the column is a multi-component\narray. Default is 0.\n"},
  {"GetXComponentMinValue", PyvtkTableToStructuredGrid_GetXComponentMinValue, METH_VARARGS,
   "V.GetXComponentMinValue() -> int\nC++: virtual int GetXComponentMinValue()\n\nSpecify the component for the column specified using SetXColumn()\nto use as the xcoordinate in case the column is a multi-component\narray. Default is 0.\n"},
  {"GetXComponentMaxValue", PyvtkTableToStructuredGrid_GetXComponentMaxValue, METH_VARARGS,
   "V.GetXComponentMaxValue() -> int\nC++: virtual int GetXComponentMaxValue()\n\nSpecify the component for the column specified using SetXColumn()\nto use as the xcoordinate in case the column is a multi-component\narray. Default is 0.\n"},
  {"GetXComponent", PyvtkTableToStructuredGrid_GetXComponent, METH_VARARGS,
   "V.GetXComponent() -> int\nC++: virtual int GetXComponent()\n\nSpecify the component for the column specified using SetXColumn()\nto use as the xcoordinate in case the column is a multi-component\narray. Default is 0.\n"},
  {"SetYColumn", PyvtkTableToStructuredGrid_SetYColumn, METH_VARARGS,
   "V.SetYColumn(string)\nC++: virtual void SetYColumn(const char *_arg)\n\nSet the name of the column to use as the Y coordinate for the\npoints. Default is 0.\n"},
  {"GetYColumn", PyvtkTableToStructuredGrid_GetYColumn, METH_VARARGS,
   "V.GetYColumn() -> string\nC++: virtual char *GetYColumn()\n\nSet the name of the column to use as the Y coordinate for the\npoints. Default is 0.\n"},
  {"SetYComponent", PyvtkTableToStructuredGrid_SetYComponent, METH_VARARGS,
   "V.SetYComponent(int)\nC++: virtual void SetYComponent(int _arg)\n\nSpecify the component for the column specified using SetYColumn()\nto use as the Ycoordinate in case the column is a multi-component\narray.\n"},
  {"GetYComponentMinValue", PyvtkTableToStructuredGrid_GetYComponentMinValue, METH_VARARGS,
   "V.GetYComponentMinValue() -> int\nC++: virtual int GetYComponentMinValue()\n\nSpecify the component for the column specified using SetYColumn()\nto use as the Ycoordinate in case the column is a multi-component\narray.\n"},
  {"GetYComponentMaxValue", PyvtkTableToStructuredGrid_GetYComponentMaxValue, METH_VARARGS,
   "V.GetYComponentMaxValue() -> int\nC++: virtual int GetYComponentMaxValue()\n\nSpecify the component for the column specified using SetYColumn()\nto use as the Ycoordinate in case the column is a multi-component\narray.\n"},
  {"GetYComponent", PyvtkTableToStructuredGrid_GetYComponent, METH_VARARGS,
   "V.GetYComponent() -> int\nC++: virtual int GetYComponent()\n\nSpecify the component for the column specified using SetYColumn()\nto use as the Ycoordinate in case the column is a multi-component\narray.\n"},
  {"SetZColumn", PyvtkTableToStructuredGrid_SetZColumn, METH_VARARGS,
   "V.SetZColumn(string)\nC++: virtual void SetZColumn(const char *_arg)\n\nSet the name of the column to use as the Z coordinate for the\npoints. Default is 0.\n"},
  {"GetZColumn", PyvtkTableToStructuredGrid_GetZColumn, METH_VARARGS,
   "V.GetZColumn() -> string\nC++: virtual char *GetZColumn()\n\nSet the name of the column to use as the Z coordinate for the\npoints. Default is 0.\n"},
  {"SetZComponent", PyvtkTableToStructuredGrid_SetZComponent, METH_VARARGS,
   "V.SetZComponent(int)\nC++: virtual void SetZComponent(int _arg)\n\nSpecify the component for the column specified using SetZColumn()\nto use as the Zcoordinate in case the column is a multi-component\narray.\n"},
  {"GetZComponentMinValue", PyvtkTableToStructuredGrid_GetZComponentMinValue, METH_VARARGS,
   "V.GetZComponentMinValue() -> int\nC++: virtual int GetZComponentMinValue()\n\nSpecify the component for the column specified using SetZColumn()\nto use as the Zcoordinate in case the column is a multi-component\narray.\n"},
  {"GetZComponentMaxValue", PyvtkTableToStructuredGrid_GetZComponentMaxValue, METH_VARARGS,
   "V.GetZComponentMaxValue() -> int\nC++: virtual int GetZComponentMaxValue()\n\nSpecify the component for the column specified using SetZColumn()\nto use as the Zcoordinate in case the column is a multi-component\narray.\n"},
  {"GetZComponent", PyvtkTableToStructuredGrid_GetZComponent, METH_VARARGS,
   "V.GetZComponent() -> int\nC++: virtual int GetZComponent()\n\nSpecify the component for the column specified using SetZColumn()\nto use as the Zcoordinate in case the column is a multi-component\narray.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkTableToStructuredGrid_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersGeneralPython.vtkTableToStructuredGrid", // tp_name
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
  PyvtkTableToStructuredGrid_Doc, // tp_doc
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

static vtkObjectBase *PyvtkTableToStructuredGrid_StaticNew()
{
  return vtkTableToStructuredGrid::New();
}

PyObject *PyvtkTableToStructuredGrid_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkTableToStructuredGrid_Type, PyvtkTableToStructuredGrid_Methods,
    "vtkTableToStructuredGrid",
 &PyvtkTableToStructuredGrid_StaticNew);

  PyTypeObject *pytype = &PyvtkTableToStructuredGrid_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkStructuredGridAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkTableToStructuredGrid(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkTableToStructuredGrid_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkTableToStructuredGrid", o) != 0)
  {
    Py_DECREF(o);
  }

}

