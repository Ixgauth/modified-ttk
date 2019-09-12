// python wrapper for vtkUnstructuredGridQuadricDecimation
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
#include "vtkUnstructuredGridQuadricDecimation.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkUnstructuredGridQuadricDecimation(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkUnstructuredGridQuadricDecimation_ClassNew(); }

#ifndef DECLARED_PyvtkUnstructuredGridAlgorithm_ClassNew
extern "C" { PyObject *PyvtkUnstructuredGridAlgorithm_ClassNew(); }
#define DECLARED_PyvtkUnstructuredGridAlgorithm_ClassNew
#endif

static const char *PyvtkUnstructuredGridQuadricDecimation_Doc =
  "vtkUnstructuredGridQuadricDecimation - reduce the number of\ntetrahedra in a mesh\n\n"
  "Superclass: vtkUnstructuredGridAlgorithm\n\n"
  "vtkUnstructuredGridQuadricDecimation is a class that simplifies\n"
  "tetrahedral meshes using randomized multiple choice edge collapses.\n"
  "The input to this filter is a vtkUnstructuredGrid object with a\n"
  "single scalar field (specifying in the ScalarsName attribute). Users\n"
  "can determine the size of the output mesh by either setting the value\n"
  "of TargetReduction or NumberOfTetsOutput. The BoundaryWeight can be\n"
  "set to control how well the mesh boundary should be preserved. The\n"
  "implementation uses Michael Garland's generalized Quadric Error\n"
  "Metrics, the Corner Table representation and the Standard Conjugate\n"
  "Gradient Method to order the edge collapse sequence.\n\n"
  "Instead of using the traditional priority queue, the algorithm uses a\n"
  "randomized approach to yield faster performance with comparable\n"
  "quality. At each step, a set of 8 random candidate edges are examined\n"
  "to select the best edge to collapse. This number can also be changed\n"
  "by users through NumberOfCandidates.\n\n"
  "For more information as well as the streaming version of this\n"
  "algorithm see:\n\n"
  "\"Streaming Simplification of Tetrahedral Meshes\" by H. T. Vo, S. P.\n"
  "Callahan, P. Lindstrom, V. Pascucci and C. T. Silva, IEEE\n"
  "Transactions on Visualization and Computer Graphics, 13(1):145-155,\n"
  "2007.\n\n"
  "@par Acknowledgments: This code was developed by Huy T. Vo under the\n"
  "supervision of Prof. Claudio T. Silva. The code also contains\n"
  "contributions from Peter Lindstrom and Steven P. Callahan.\n\n"
  "@par Acknowledgments: The work was supported by grants, contracts,\n"
  "and gifts from the National Science Foundation, the Department of\n"
  "Energy and IBM.\n\n";


static PyObject *
PyvtkUnstructuredGridQuadricDecimation_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkUnstructuredGridQuadricDecimation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridQuadricDecimation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridQuadricDecimation *op = static_cast<vtkUnstructuredGridQuadricDecimation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkUnstructuredGridQuadricDecimation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridQuadricDecimation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkUnstructuredGridQuadricDecimation *tempr = vtkUnstructuredGridQuadricDecimation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridQuadricDecimation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridQuadricDecimation *op = static_cast<vtkUnstructuredGridQuadricDecimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkUnstructuredGridQuadricDecimation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkUnstructuredGridQuadricDecimation::NewInstance());

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
PyvtkUnstructuredGridQuadricDecimation_SetTargetReduction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTargetReduction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridQuadricDecimation *op = static_cast<vtkUnstructuredGridQuadricDecimation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTargetReduction(temp0);
    }
    else
    {
      op->vtkUnstructuredGridQuadricDecimation::SetTargetReduction(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridQuadricDecimation_GetTargetReduction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTargetReduction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridQuadricDecimation *op = static_cast<vtkUnstructuredGridQuadricDecimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTargetReduction() :
      op->vtkUnstructuredGridQuadricDecimation::GetTargetReduction());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridQuadricDecimation_SetNumberOfTetsOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfTetsOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridQuadricDecimation *op = static_cast<vtkUnstructuredGridQuadricDecimation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfTetsOutput(temp0);
    }
    else
    {
      op->vtkUnstructuredGridQuadricDecimation::SetNumberOfTetsOutput(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridQuadricDecimation_GetNumberOfTetsOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTetsOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridQuadricDecimation *op = static_cast<vtkUnstructuredGridQuadricDecimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfTetsOutput() :
      op->vtkUnstructuredGridQuadricDecimation::GetNumberOfTetsOutput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridQuadricDecimation_SetNumberOfEdgesToDecimate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfEdgesToDecimate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridQuadricDecimation *op = static_cast<vtkUnstructuredGridQuadricDecimation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfEdgesToDecimate(temp0);
    }
    else
    {
      op->vtkUnstructuredGridQuadricDecimation::SetNumberOfEdgesToDecimate(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridQuadricDecimation_GetNumberOfEdgesToDecimate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfEdgesToDecimate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridQuadricDecimation *op = static_cast<vtkUnstructuredGridQuadricDecimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfEdgesToDecimate() :
      op->vtkUnstructuredGridQuadricDecimation::GetNumberOfEdgesToDecimate());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridQuadricDecimation_SetNumberOfCandidates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfCandidates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridQuadricDecimation *op = static_cast<vtkUnstructuredGridQuadricDecimation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfCandidates(temp0);
    }
    else
    {
      op->vtkUnstructuredGridQuadricDecimation::SetNumberOfCandidates(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridQuadricDecimation_GetNumberOfCandidates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCandidates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridQuadricDecimation *op = static_cast<vtkUnstructuredGridQuadricDecimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfCandidates() :
      op->vtkUnstructuredGridQuadricDecimation::GetNumberOfCandidates());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridQuadricDecimation_SetAutoAddCandidates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAutoAddCandidates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridQuadricDecimation *op = static_cast<vtkUnstructuredGridQuadricDecimation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAutoAddCandidates(temp0);
    }
    else
    {
      op->vtkUnstructuredGridQuadricDecimation::SetAutoAddCandidates(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridQuadricDecimation_GetAutoAddCandidates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutoAddCandidates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridQuadricDecimation *op = static_cast<vtkUnstructuredGridQuadricDecimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAutoAddCandidates() :
      op->vtkUnstructuredGridQuadricDecimation::GetAutoAddCandidates());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridQuadricDecimation_SetAutoAddCandidatesThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAutoAddCandidatesThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridQuadricDecimation *op = static_cast<vtkUnstructuredGridQuadricDecimation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAutoAddCandidatesThreshold(temp0);
    }
    else
    {
      op->vtkUnstructuredGridQuadricDecimation::SetAutoAddCandidatesThreshold(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridQuadricDecimation_GetAutoAddCandidatesThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutoAddCandidatesThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridQuadricDecimation *op = static_cast<vtkUnstructuredGridQuadricDecimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetAutoAddCandidatesThreshold() :
      op->vtkUnstructuredGridQuadricDecimation::GetAutoAddCandidatesThreshold());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridQuadricDecimation_SetBoundaryWeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBoundaryWeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridQuadricDecimation *op = static_cast<vtkUnstructuredGridQuadricDecimation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBoundaryWeight(temp0);
    }
    else
    {
      op->vtkUnstructuredGridQuadricDecimation::SetBoundaryWeight(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridQuadricDecimation_GetBoundaryWeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBoundaryWeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridQuadricDecimation *op = static_cast<vtkUnstructuredGridQuadricDecimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetBoundaryWeight() :
      op->vtkUnstructuredGridQuadricDecimation::GetBoundaryWeight());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridQuadricDecimation_SetScalarsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridQuadricDecimation *op = static_cast<vtkUnstructuredGridQuadricDecimation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScalarsName(temp0);
    }
    else
    {
      op->vtkUnstructuredGridQuadricDecimation::SetScalarsName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridQuadricDecimation_GetScalarsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridQuadricDecimation *op = static_cast<vtkUnstructuredGridQuadricDecimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetScalarsName() :
      op->vtkUnstructuredGridQuadricDecimation::GetScalarsName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkUnstructuredGridQuadricDecimation_Methods[] = {
  {"IsTypeOf", PyvtkUnstructuredGridQuadricDecimation_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkUnstructuredGridQuadricDecimation_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkUnstructuredGridQuadricDecimation_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase)\n    -> vtkUnstructuredGridQuadricDecimation\nC++: static vtkUnstructuredGridQuadricDecimation *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkUnstructuredGridQuadricDecimation_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkUnstructuredGridQuadricDecimation\nC++: vtkUnstructuredGridQuadricDecimation *NewInstance()\n\n"},
  {"SetTargetReduction", PyvtkUnstructuredGridQuadricDecimation_SetTargetReduction, METH_VARARGS,
   "V.SetTargetReduction(float)\nC++: virtual void SetTargetReduction(double _arg)\n\nSet/Get the desired reduction (expressed as a fraction of the\noriginal number of tetrehedra)\n"},
  {"GetTargetReduction", PyvtkUnstructuredGridQuadricDecimation_GetTargetReduction, METH_VARARGS,
   "V.GetTargetReduction() -> float\nC++: virtual double GetTargetReduction()\n\nSet/Get the desired reduction (expressed as a fraction of the\noriginal number of tetrehedra)\n"},
  {"SetNumberOfTetsOutput", PyvtkUnstructuredGridQuadricDecimation_SetNumberOfTetsOutput, METH_VARARGS,
   "V.SetNumberOfTetsOutput(int)\nC++: virtual void SetNumberOfTetsOutput(int _arg)\n\nSet/Get the desired number of tetrahedra to be outputted\n"},
  {"GetNumberOfTetsOutput", PyvtkUnstructuredGridQuadricDecimation_GetNumberOfTetsOutput, METH_VARARGS,
   "V.GetNumberOfTetsOutput() -> int\nC++: virtual int GetNumberOfTetsOutput()\n\nSet/Get the desired number of tetrahedra to be outputted\n"},
  {"SetNumberOfEdgesToDecimate", PyvtkUnstructuredGridQuadricDecimation_SetNumberOfEdgesToDecimate, METH_VARARGS,
   "V.SetNumberOfEdgesToDecimate(int)\nC++: virtual void SetNumberOfEdgesToDecimate(int _arg)\n\nSet/Get the desired number of edge to collapse\n"},
  {"GetNumberOfEdgesToDecimate", PyvtkUnstructuredGridQuadricDecimation_GetNumberOfEdgesToDecimate, METH_VARARGS,
   "V.GetNumberOfEdgesToDecimate() -> int\nC++: virtual int GetNumberOfEdgesToDecimate()\n\nSet/Get the desired number of edge to collapse\n"},
  {"SetNumberOfCandidates", PyvtkUnstructuredGridQuadricDecimation_SetNumberOfCandidates, METH_VARARGS,
   "V.SetNumberOfCandidates(int)\nC++: virtual void SetNumberOfCandidates(int _arg)\n\nSet/Get the number of candidates selected for each randomized set\nbefore performing an edge collapse. Increasing this number can\nhelp producing higher quality output but it will be slower.\nDefault is 8.\n"},
  {"GetNumberOfCandidates", PyvtkUnstructuredGridQuadricDecimation_GetNumberOfCandidates, METH_VARARGS,
   "V.GetNumberOfCandidates() -> int\nC++: virtual int GetNumberOfCandidates()\n\nSet/Get the number of candidates selected for each randomized set\nbefore performing an edge collapse. Increasing this number can\nhelp producing higher quality output but it will be slower.\nDefault is 8.\n"},
  {"SetAutoAddCandidates", PyvtkUnstructuredGridQuadricDecimation_SetAutoAddCandidates, METH_VARARGS,
   "V.SetAutoAddCandidates(int)\nC++: virtual void SetAutoAddCandidates(int _arg)\n\nEnable(1)/Disable(0) the feature of temporarily doubling the\nnumber of candidates for each randomized set if the quadric error\nwas significantly increased over the last edge collapse, i.e. if\nthe ratio between the error difference and the last error is over\nsome threshold. Basically, we are trying to make up for cases\nwhen random selection returns so many 'bad' edges. By doing this\nwe can achieve a higher quality output with much less time than\njust double the NumberOfCandidates. Default is Enabled(1)\n"},
  {"GetAutoAddCandidates", PyvtkUnstructuredGridQuadricDecimation_GetAutoAddCandidates, METH_VARARGS,
   "V.GetAutoAddCandidates() -> int\nC++: virtual int GetAutoAddCandidates()\n\nEnable(1)/Disable(0) the feature of temporarily doubling the\nnumber of candidates for each randomized set if the quadric error\nwas significantly increased over the last edge collapse, i.e. if\nthe ratio between the error difference and the last error is over\nsome threshold. Basically, we are trying to make up for cases\nwhen random selection returns so many 'bad' edges. By doing this\nwe can achieve a higher quality output with much less time than\njust double the NumberOfCandidates. Default is Enabled(1)\n"},
  {"SetAutoAddCandidatesThreshold", PyvtkUnstructuredGridQuadricDecimation_SetAutoAddCandidatesThreshold, METH_VARARGS,
   "V.SetAutoAddCandidatesThreshold(float)\nC++: virtual void SetAutoAddCandidatesThreshold(double _arg)\n\nSet/Get the threshold that decides when to double the set size.\nDefault is 0.4.\n"},
  {"GetAutoAddCandidatesThreshold", PyvtkUnstructuredGridQuadricDecimation_GetAutoAddCandidatesThreshold, METH_VARARGS,
   "V.GetAutoAddCandidatesThreshold() -> float\nC++: virtual double GetAutoAddCandidatesThreshold()\n\nSet/Get the threshold that decides when to double the set size.\nDefault is 0.4.\n"},
  {"SetBoundaryWeight", PyvtkUnstructuredGridQuadricDecimation_SetBoundaryWeight, METH_VARARGS,
   "V.SetBoundaryWeight(float)\nC++: virtual void SetBoundaryWeight(double _arg)\n\nSet/Get the weight of the boundary on the quadric metrics. The\nlarger the number, the better the boundary is preserved.\n"},
  {"GetBoundaryWeight", PyvtkUnstructuredGridQuadricDecimation_GetBoundaryWeight, METH_VARARGS,
   "V.GetBoundaryWeight() -> float\nC++: virtual double GetBoundaryWeight()\n\nSet/Get the weight of the boundary on the quadric metrics. The\nlarger the number, the better the boundary is preserved.\n"},
  {"SetScalarsName", PyvtkUnstructuredGridQuadricDecimation_SetScalarsName, METH_VARARGS,
   "V.SetScalarsName(string)\nC++: virtual void SetScalarsName(const char *_arg)\n\nSet/Get the scalar field name used for simplification\n"},
  {"GetScalarsName", PyvtkUnstructuredGridQuadricDecimation_GetScalarsName, METH_VARARGS,
   "V.GetScalarsName() -> string\nC++: virtual char *GetScalarsName()\n\nSet/Get the scalar field name used for simplification\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkUnstructuredGridQuadricDecimation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersCorePython.vtkUnstructuredGridQuadricDecimation", // tp_name
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
  PyvtkUnstructuredGridQuadricDecimation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkUnstructuredGridQuadricDecimation_StaticNew()
{
  return vtkUnstructuredGridQuadricDecimation::New();
}

PyObject *PyvtkUnstructuredGridQuadricDecimation_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkUnstructuredGridQuadricDecimation_Type, PyvtkUnstructuredGridQuadricDecimation_Methods,
    "vtkUnstructuredGridQuadricDecimation",
 &PyvtkUnstructuredGridQuadricDecimation_StaticNew);

  PyTypeObject *pytype = &PyvtkUnstructuredGridQuadricDecimation_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkUnstructuredGridAlgorithm_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 4; c++)
  {
    static const struct { const char *name; int value; }
      constants[4] = {
        { "NO_ERROR", vtkUnstructuredGridQuadricDecimation::NO_ERROR },
        { "NON_TETRAHEDRA", vtkUnstructuredGridQuadricDecimation::NON_TETRAHEDRA },
        { "NO_SCALARS", vtkUnstructuredGridQuadricDecimation::NO_SCALARS },
        { "NO_CELLS", vtkUnstructuredGridQuadricDecimation::NO_CELLS },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkUnstructuredGridQuadricDecimation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkUnstructuredGridQuadricDecimation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkUnstructuredGridQuadricDecimation", o) != 0)
  {
    Py_DECREF(o);
  }

}

