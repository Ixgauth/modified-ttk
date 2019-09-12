// python wrapper for vtkCellTypeSource
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
#include "vtkCellTypeSource.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCellTypeSource(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkCellTypeSource_ClassNew(); }

#ifndef DECLARED_PyvtkUnstructuredGridAlgorithm_ClassNew
extern "C" { PyObject *PyvtkUnstructuredGridAlgorithm_ClassNew(); }
#define DECLARED_PyvtkUnstructuredGridAlgorithm_ClassNew
#endif

static const char *PyvtkCellTypeSource_Doc =
  "vtkCellTypeSource - Create cells of a given type\n\n"
  "Superclass: vtkUnstructuredGridAlgorithm\n\n"
  "vtkCellTypeSource is a source object that creates cells of the given\n"
  "input type. BlocksDimensions specifies the number of cell \"blocks\" in\n"
  "each direction. A cell block may be divided into multiple cells based\n"
  "on the chosen cell type (e.g. 6 pyramid cells make up a single cell\n"
  "block). If a 1D cell is selected then only the first dimension is\n"
  "used to specify how many cells are generated. If a 2D cell is\n"
  "selected then only the first and second dimensions are used to\n"
  "determine how many cells are created. The source respects pieces.\n\n";


static PyObject *
PyvtkCellTypeSource_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCellTypeSource::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellTypeSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellTypeSource *op = static_cast<vtkCellTypeSource *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCellTypeSource::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellTypeSource_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCellTypeSource *tempr = vtkCellTypeSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellTypeSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellTypeSource *op = static_cast<vtkCellTypeSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCellTypeSource *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCellTypeSource::NewInstance());

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
PyvtkCellTypeSource_SetCellType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellTypeSource *op = static_cast<vtkCellTypeSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCellType(temp0);
    }
    else
    {
      op->vtkCellTypeSource::SetCellType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellTypeSource_GetCellType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellTypeSource *op = static_cast<vtkCellTypeSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCellType() :
      op->vtkCellTypeSource::GetCellType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellTypeSource_SetCellOrder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellOrder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellTypeSource *op = static_cast<vtkCellTypeSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCellOrder(temp0);
    }
    else
    {
      op->vtkCellTypeSource::SetCellOrder(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellTypeSource_GetCellOrder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellOrder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellTypeSource *op = static_cast<vtkCellTypeSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCellOrder() :
      op->vtkCellTypeSource::GetCellOrder());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellTypeSource_SetCompleteQuadraticSimplicialElements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCompleteQuadraticSimplicialElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellTypeSource *op = static_cast<vtkCellTypeSource *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCompleteQuadraticSimplicialElements(temp0);
    }
    else
    {
      op->vtkCellTypeSource::SetCompleteQuadraticSimplicialElements(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellTypeSource_GetCompleteQuadraticSimplicialElements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCompleteQuadraticSimplicialElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellTypeSource *op = static_cast<vtkCellTypeSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetCompleteQuadraticSimplicialElements() :
      op->vtkCellTypeSource::GetCompleteQuadraticSimplicialElements());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellTypeSource_CompleteQuadraticSimplicialElementsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CompleteQuadraticSimplicialElementsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellTypeSource *op = static_cast<vtkCellTypeSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CompleteQuadraticSimplicialElementsOn();
    }
    else
    {
      op->vtkCellTypeSource::CompleteQuadraticSimplicialElementsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellTypeSource_CompleteQuadraticSimplicialElementsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CompleteQuadraticSimplicialElementsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellTypeSource *op = static_cast<vtkCellTypeSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CompleteQuadraticSimplicialElementsOff();
    }
    else
    {
      op->vtkCellTypeSource::CompleteQuadraticSimplicialElementsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellTypeSource_SetPolynomialFieldOrder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPolynomialFieldOrder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellTypeSource *op = static_cast<vtkCellTypeSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPolynomialFieldOrder(temp0);
    }
    else
    {
      op->vtkCellTypeSource::SetPolynomialFieldOrder(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellTypeSource_GetPolynomialFieldOrderMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolynomialFieldOrderMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellTypeSource *op = static_cast<vtkCellTypeSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPolynomialFieldOrderMinValue() :
      op->vtkCellTypeSource::GetPolynomialFieldOrderMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellTypeSource_GetPolynomialFieldOrderMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolynomialFieldOrderMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellTypeSource *op = static_cast<vtkCellTypeSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPolynomialFieldOrderMaxValue() :
      op->vtkCellTypeSource::GetPolynomialFieldOrderMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellTypeSource_GetPolynomialFieldOrder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolynomialFieldOrder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellTypeSource *op = static_cast<vtkCellTypeSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPolynomialFieldOrder() :
      op->vtkCellTypeSource::GetPolynomialFieldOrder());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellTypeSource_GetCellDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellTypeSource *op = static_cast<vtkCellTypeSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCellDimension() :
      op->vtkCellTypeSource::GetCellDimension());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellTypeSource_SetOutputPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellTypeSource *op = static_cast<vtkCellTypeSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOutputPrecision(temp0);
    }
    else
    {
      op->vtkCellTypeSource::SetOutputPrecision(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellTypeSource_GetOutputPrecisionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPrecisionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellTypeSource *op = static_cast<vtkCellTypeSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputPrecisionMinValue() :
      op->vtkCellTypeSource::GetOutputPrecisionMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellTypeSource_GetOutputPrecisionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPrecisionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellTypeSource *op = static_cast<vtkCellTypeSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputPrecisionMaxValue() :
      op->vtkCellTypeSource::GetOutputPrecisionMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellTypeSource_GetOutputPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellTypeSource *op = static_cast<vtkCellTypeSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputPrecision() :
      op->vtkCellTypeSource::GetOutputPrecision());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellTypeSource_SetBlocksDimensions_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlocksDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellTypeSource *op = static_cast<vtkCellTypeSource *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<int> store0(2*size0);
  int *temp0 = store0.Data();
  int *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetBlocksDimensions(temp0);
    }
    else
    {
      op->vtkCellTypeSource::SetBlocksDimensions(temp0);
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
PyvtkCellTypeSource_SetBlocksDimensions_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlocksDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellTypeSource *op = static_cast<vtkCellTypeSource *>(vp);

  int temp0;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetBlocksDimensions(temp0, temp1, temp2);
    }
    else
    {
      op->vtkCellTypeSource::SetBlocksDimensions(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCellTypeSource_SetBlocksDimensions(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkCellTypeSource_SetBlocksDimensions_s1(self, args);
    case 3:
      return PyvtkCellTypeSource_SetBlocksDimensions_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetBlocksDimensions");
  return nullptr;
}



static PyObject *
PyvtkCellTypeSource_GetBlocksDimensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlocksDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellTypeSource *op = static_cast<vtkCellTypeSource *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetBlocksDimensions() :
      op->vtkCellTypeSource::GetBlocksDimensions());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyMethodDef PyvtkCellTypeSource_Methods[] = {
  {"IsTypeOf", PyvtkCellTypeSource_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard methods for instantiation, obtaining type and printing\ninstance values.\n"},
  {"IsA", PyvtkCellTypeSource_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard methods for instantiation, obtaining type and printing\ninstance values.\n"},
  {"SafeDownCast", PyvtkCellTypeSource_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkCellTypeSource\nC++: static vtkCellTypeSource *SafeDownCast(vtkObjectBase *o)\n\nStandard methods for instantiation, obtaining type and printing\ninstance values.\n"},
  {"NewInstance", PyvtkCellTypeSource_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkCellTypeSource\nC++: vtkCellTypeSource *NewInstance()\n\nStandard methods for instantiation, obtaining type and printing\ninstance values.\n"},
  {"SetCellType", PyvtkCellTypeSource_SetCellType, METH_VARARGS,
   "V.SetCellType(int)\nC++: void SetCellType(int cellType)\n\nSet/Get the type of cells to be generated.\n"},
  {"GetCellType", PyvtkCellTypeSource_GetCellType, METH_VARARGS,
   "V.GetCellType() -> int\nC++: virtual int GetCellType()\n\nSet/Get the type of cells to be generated.\n"},
  {"SetCellOrder", PyvtkCellTypeSource_SetCellOrder, METH_VARARGS,
   "V.SetCellOrder(int)\nC++: virtual void SetCellOrder(int _arg)\n\nSet/Get the order of Lagrange interpolation to be used.\n\nThis is only used when the cell type is a Lagrange element. The\ndefault is cubic (order 3). Lagrange elements are the same order\nalong all axes (i.e., you cannot specify a different\ninterpolation order for the i, j, and k axes of a hexahedron).\n"},
  {"GetCellOrder", PyvtkCellTypeSource_GetCellOrder, METH_VARARGS,
   "V.GetCellOrder() -> int\nC++: virtual int GetCellOrder()\n\nSet/Get the order of Lagrange interpolation to be used.\n\nThis is only used when the cell type is a Lagrange element. The\ndefault is cubic (order 3). Lagrange elements are the same order\nalong all axes (i.e., you cannot specify a different\ninterpolation order for the i, j, and k axes of a hexahedron).\n"},
  {"SetCompleteQuadraticSimplicialElements", PyvtkCellTypeSource_SetCompleteQuadraticSimplicialElements, METH_VARARGS,
   "V.SetCompleteQuadraticSimplicialElements(bool)\nC++: virtual void SetCompleteQuadraticSimplicialElements(\n    bool _arg)\n\nSet/Get whether quadratic cells with simplicial shapes should be\n\"completed\".\n\nBy default, quadratic Lagrange cells with simplicial shapes do\nnot completely span the basis of all polynomial of the maximal\ndegree. This can be corrected by adding mid-face and\nbody-centered nodes. Setting this option to true will generate\ncells with these additional nodes.\n\nThis is only used when (1) the cell type is a Lagrange triangle,\ntetrahedron, or wedge; and (2) CellOrder is set to 2 (quadratic\nelements). The default is false.\n\nWhen true, generated (1) triangles will have 7 nodes instead of\n6; (2) tetrahedra will have 15 nodes instead of 10; (3) wedges\nwill have 21 nodes instead of 18.\n"},
  {"GetCompleteQuadraticSimplicialElements", PyvtkCellTypeSource_GetCompleteQuadraticSimplicialElements, METH_VARARGS,
   "V.GetCompleteQuadraticSimplicialElements() -> bool\nC++: virtual bool GetCompleteQuadraticSimplicialElements()\n\nSet/Get whether quadratic cells with simplicial shapes should be\n\"completed\".\n\nBy default, quadratic Lagrange cells with simplicial shapes do\nnot completely span the basis of all polynomial of the maximal\ndegree. This can be corrected by adding mid-face and\nbody-centered nodes. Setting this option to true will generate\ncells with these additional nodes.\n\nThis is only used when (1) the cell type is a Lagrange triangle,\ntetrahedron, or wedge; and (2) CellOrder is set to 2 (quadratic\nelements). The default is false.\n\nWhen true, generated (1) triangles will have 7 nodes instead of\n6; (2) tetrahedra will have 15 nodes instead of 10; (3) wedges\nwill have 21 nodes instead of 18.\n"},
  {"CompleteQuadraticSimplicialElementsOn", PyvtkCellTypeSource_CompleteQuadraticSimplicialElementsOn, METH_VARARGS,
   "V.CompleteQuadraticSimplicialElementsOn()\nC++: virtual void CompleteQuadraticSimplicialElementsOn()\n\nSet/Get whether quadratic cells with simplicial shapes should be\n\"completed\".\n\nBy default, quadratic Lagrange cells with simplicial shapes do\nnot completely span the basis of all polynomial of the maximal\ndegree. This can be corrected by adding mid-face and\nbody-centered nodes. Setting this option to true will generate\ncells with these additional nodes.\n\nThis is only used when (1) the cell type is a Lagrange triangle,\ntetrahedron, or wedge; and (2) CellOrder is set to 2 (quadratic\nelements). The default is false.\n\nWhen true, generated (1) triangles will have 7 nodes instead of\n6; (2) tetrahedra will have 15 nodes instead of 10; (3) wedges\nwill have 21 nodes instead of 18.\n"},
  {"CompleteQuadraticSimplicialElementsOff", PyvtkCellTypeSource_CompleteQuadraticSimplicialElementsOff, METH_VARARGS,
   "V.CompleteQuadraticSimplicialElementsOff()\nC++: virtual void CompleteQuadraticSimplicialElementsOff()\n\nSet/Get whether quadratic cells with simplicial shapes should be\n\"completed\".\n\nBy default, quadratic Lagrange cells with simplicial shapes do\nnot completely span the basis of all polynomial of the maximal\ndegree. This can be corrected by adding mid-face and\nbody-centered nodes. Setting this option to true will generate\ncells with these additional nodes.\n\nThis is only used when (1) the cell type is a Lagrange triangle,\ntetrahedron, or wedge; and (2) CellOrder is set to 2 (quadratic\nelements). The default is false.\n\nWhen true, generated (1) triangles will have 7 nodes instead of\n6; (2) tetrahedra will have 15 nodes instead of 10; (3) wedges\nwill have 21 nodes instead of 18.\n"},
  {"SetPolynomialFieldOrder", PyvtkCellTypeSource_SetPolynomialFieldOrder, METH_VARARGS,
   "V.SetPolynomialFieldOrder(int)\nC++: virtual void SetPolynomialFieldOrder(int _arg)\n\nSet/Get the polynomial order of the \"Polynomial\" point field. The\ndefault is 1.\n"},
  {"GetPolynomialFieldOrderMinValue", PyvtkCellTypeSource_GetPolynomialFieldOrderMinValue, METH_VARARGS,
   "V.GetPolynomialFieldOrderMinValue() -> int\nC++: virtual int GetPolynomialFieldOrderMinValue()\n\nSet/Get the polynomial order of the \"Polynomial\" point field. The\ndefault is 1.\n"},
  {"GetPolynomialFieldOrderMaxValue", PyvtkCellTypeSource_GetPolynomialFieldOrderMaxValue, METH_VARARGS,
   "V.GetPolynomialFieldOrderMaxValue() -> int\nC++: virtual int GetPolynomialFieldOrderMaxValue()\n\nSet/Get the polynomial order of the \"Polynomial\" point field. The\ndefault is 1.\n"},
  {"GetPolynomialFieldOrder", PyvtkCellTypeSource_GetPolynomialFieldOrder, METH_VARARGS,
   "V.GetPolynomialFieldOrder() -> int\nC++: virtual int GetPolynomialFieldOrder()\n\nSet/Get the polynomial order of the \"Polynomial\" point field. The\ndefault is 1.\n"},
  {"GetCellDimension", PyvtkCellTypeSource_GetCellDimension, METH_VARARGS,
   "V.GetCellDimension() -> int\nC++: int GetCellDimension()\n\nGet the dimension of the cell blocks to be generated\n"},
  {"SetOutputPrecision", PyvtkCellTypeSource_SetOutputPrecision, METH_VARARGS,
   "V.SetOutputPrecision(int)\nC++: virtual void SetOutputPrecision(int _arg)\n\nSet/get the desired precision for the output points.\nvtkAlgorithm::SINGLE_PRECISION (0) - Output single-precision\nfloating point. vtkAlgorithm::DOUBLE_PRECISION (1) - Output\ndouble-precision floating point.\n"},
  {"GetOutputPrecisionMinValue", PyvtkCellTypeSource_GetOutputPrecisionMinValue, METH_VARARGS,
   "V.GetOutputPrecisionMinValue() -> int\nC++: virtual int GetOutputPrecisionMinValue()\n\nSet/get the desired precision for the output points.\nvtkAlgorithm::SINGLE_PRECISION (0) - Output single-precision\nfloating point. vtkAlgorithm::DOUBLE_PRECISION (1) - Output\ndouble-precision floating point.\n"},
  {"GetOutputPrecisionMaxValue", PyvtkCellTypeSource_GetOutputPrecisionMaxValue, METH_VARARGS,
   "V.GetOutputPrecisionMaxValue() -> int\nC++: virtual int GetOutputPrecisionMaxValue()\n\nSet/get the desired precision for the output points.\nvtkAlgorithm::SINGLE_PRECISION (0) - Output single-precision\nfloating point. vtkAlgorithm::DOUBLE_PRECISION (1) - Output\ndouble-precision floating point.\n"},
  {"GetOutputPrecision", PyvtkCellTypeSource_GetOutputPrecision, METH_VARARGS,
   "V.GetOutputPrecision() -> int\nC++: virtual int GetOutputPrecision()\n\nSet/get the desired precision for the output points.\nvtkAlgorithm::SINGLE_PRECISION (0) - Output single-precision\nfloating point. vtkAlgorithm::DOUBLE_PRECISION (1) - Output\ndouble-precision floating point.\n"},
  {"SetBlocksDimensions", PyvtkCellTypeSource_SetBlocksDimensions, METH_VARARGS,
   "V.SetBlocksDimensions([int, ...])\nC++: void SetBlocksDimensions(int *)\nV.SetBlocksDimensions(int, int, int)\nC++: void SetBlocksDimensions(int, int, int)\n\nSet the number of cells in each direction. If a 1D cell type is\nselected then only the first dimension is used and if a 2D cell\ntype is selected then the first and second dimensions are used.\nDefault is (1, 1, 1), which results in a single block of cells.\n"},
  {"GetBlocksDimensions", PyvtkCellTypeSource_GetBlocksDimensions, METH_VARARGS,
   "V.GetBlocksDimensions() -> (int, int, int)\nC++: int *GetBlocksDimensions()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkCellTypeSource_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersSourcesPython.vtkCellTypeSource", // tp_name
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
  PyvtkCellTypeSource_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCellTypeSource_StaticNew()
{
  return vtkCellTypeSource::New();
}

PyObject *PyvtkCellTypeSource_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkCellTypeSource_Type, PyvtkCellTypeSource_Methods,
    "vtkCellTypeSource",
 &PyvtkCellTypeSource_StaticNew);

  PyTypeObject *pytype = &PyvtkCellTypeSource_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkUnstructuredGridAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCellTypeSource(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCellTypeSource_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCellTypeSource", o) != 0)
  {
    Py_DECREF(o);
  }

}

