// python wrapper for vtkLabelHierarchy
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
#include "vtkLabelHierarchy.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkLabelHierarchy(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkLabelHierarchy_ClassNew(); }

#ifndef DECLARED_PyvtkPointSet_ClassNew
extern "C" { PyObject *PyvtkPointSet_ClassNew(); }
#define DECLARED_PyvtkPointSet_ClassNew
#endif

static const char *PyvtkLabelHierarchy_Doc =
  "vtkLabelHierarchy - contains an octree of labels\n\n"
  "Superclass: vtkPointSet\n\n"
  "This class represents labels in a hierarchy used to denote rendering\n"
  "priority. A binary tree of labels is maintained that subdivides the\n"
  "bounds of the of the label anchors spatially. Which level of the tree\n"
  "a label occupies determines its priority; those at higher levels of\n"
  "the tree will be more likely to render than those at lower levels of\n"
  "the tree.\n\n"
  "Pass vtkLabelHierarchy objects to a vtkLabelPlacementMapper filter\n"
  "for dynamic, non-overlapping, per-frame placement of labels.\n\n"
  "Note that if we have a d-dimensional binary tree and we want a fixed\n"
  "number $n $ of labels in each node (all nodes, not just leaves), we\n"
  "can compute the depth of tree required assuming a uniform\n"
  "distribution of points. Given a total of $N $ points we know\n"
  "that$\\frac{N}{|T|} = n $, where $|T| $ is the cardinality of the tree\n"
  "(i.e., the number of nodes it contains). Because we have a uniform\n"
  "distribution, the tree will be uniformly subdivided and thus $|T| = 1\n"
  "+ 2^d + \\left(2^d\\right)^2 + \\cdots + \\left(2^d\\right)^k $, where $d $\n"
  "is the dimensionality of the input points (fixed at 3 for now). As $k $\n"
  "becomes large, $|T|\\approx 2 \\left(2^d\\right)^k $. Using this\n"
  "approximation, we can solve for $k $:\\[ k =\n"
  "\\frac{\\log{\\frac{N}{2n}}}{\\log{2^d}} \\] Given a set of $N $ input\n"
  "label anchors, we'll compute $k $ and then bin the anchors into tree\n"
  "nodes at level $k $ of the tree. After this, all the nodes will be in\n"
  "the leaves of the tree and those leaves will be at the $k $-th level;\n"
  "no anchors will be in levels $1, 2, \\ldots, k-1 $. To fix that, we'll\n"
  "choose to move some anchors upwards. The exact number to move upwards\n"
  "depends on TargetLabelCount. We'll move as many up as required to\n"
  "have TargetLabelCount at each node.\n\n"
  "You should avoid situations where MaximumDepth does not allow\n"
  "forTargetLabelCount or fewer entries at each node. The MaximumDepth\n"
  "is a hard limit while TargetLabelCount is a suggested optimum. You\n"
  "will end up with many more than TargetLabelCount entries per node and\n"
  "things will be sloooow.\n\n";

static PyTypeObject PyvtkLabelHierarchy_IteratorType_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingLabelPython.vtkLabelHierarchy.IteratorType", // tp_name
  sizeof(PyIntObject), // tp_basicsize
  0, // tp_itemsize
  nullptr, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  nullptr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  nullptr, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  nullptr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  nullptr, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  &PyInt_Type, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  nullptr, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

PyObject *PyvtkLabelHierarchy_IteratorType_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkLabelHierarchy_IteratorType_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkLabelHierarchy_IteratorType_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkLabelHierarchy_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkLabelHierarchy::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabelHierarchy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchy *op = static_cast<vtkLabelHierarchy *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkLabelHierarchy::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabelHierarchy_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkLabelHierarchy *tempr = vtkLabelHierarchy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabelHierarchy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchy *op = static_cast<vtkLabelHierarchy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkLabelHierarchy *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkLabelHierarchy::NewInstance());

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
PyvtkLabelHierarchy_SetPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchy *op = static_cast<vtkLabelHierarchy *>(vp);

  vtkPoints *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPoints"))
  {
    if (ap.IsBound())
    {
      op->SetPoints(temp0);
    }
    else
    {
      op->vtkLabelHierarchy::SetPoints(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabelHierarchy_ComputeHierarchy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeHierarchy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchy *op = static_cast<vtkLabelHierarchy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeHierarchy();
    }
    else
    {
      op->vtkLabelHierarchy::ComputeHierarchy();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabelHierarchy_SetTargetLabelCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTargetLabelCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchy *op = static_cast<vtkLabelHierarchy *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTargetLabelCount(temp0);
    }
    else
    {
      op->vtkLabelHierarchy::SetTargetLabelCount(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabelHierarchy_GetTargetLabelCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTargetLabelCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchy *op = static_cast<vtkLabelHierarchy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTargetLabelCount() :
      op->vtkLabelHierarchy::GetTargetLabelCount());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabelHierarchy_SetMaximumDepth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumDepth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchy *op = static_cast<vtkLabelHierarchy *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaximumDepth(temp0);
    }
    else
    {
      op->vtkLabelHierarchy::SetMaximumDepth(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabelHierarchy_GetMaximumDepth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumDepth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchy *op = static_cast<vtkLabelHierarchy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaximumDepth() :
      op->vtkLabelHierarchy::GetMaximumDepth());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabelHierarchy_SetTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchy *op = static_cast<vtkLabelHierarchy *>(vp);

  vtkTextProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextProperty"))
  {
    if (ap.IsBound())
    {
      op->SetTextProperty(temp0);
    }
    else
    {
      op->vtkLabelHierarchy::SetTextProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabelHierarchy_GetTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchy *op = static_cast<vtkLabelHierarchy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetTextProperty() :
      op->vtkLabelHierarchy::GetTextProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabelHierarchy_SetPriorities(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPriorities");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchy *op = static_cast<vtkLabelHierarchy *>(vp);

  vtkDataArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataArray"))
  {
    if (ap.IsBound())
    {
      op->SetPriorities(temp0);
    }
    else
    {
      op->vtkLabelHierarchy::SetPriorities(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabelHierarchy_GetPriorities(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPriorities");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchy *op = static_cast<vtkLabelHierarchy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArray *tempr = (ap.IsBound() ?
      op->GetPriorities() :
      op->vtkLabelHierarchy::GetPriorities());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabelHierarchy_SetLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchy *op = static_cast<vtkLabelHierarchy *>(vp);

  vtkAbstractArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractArray"))
  {
    if (ap.IsBound())
    {
      op->SetLabels(temp0);
    }
    else
    {
      op->vtkLabelHierarchy::SetLabels(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabelHierarchy_GetLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchy *op = static_cast<vtkLabelHierarchy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractArray *tempr = (ap.IsBound() ?
      op->GetLabels() :
      op->vtkLabelHierarchy::GetLabels());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabelHierarchy_SetOrientations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchy *op = static_cast<vtkLabelHierarchy *>(vp);

  vtkDataArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataArray"))
  {
    if (ap.IsBound())
    {
      op->SetOrientations(temp0);
    }
    else
    {
      op->vtkLabelHierarchy::SetOrientations(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabelHierarchy_GetOrientations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrientations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchy *op = static_cast<vtkLabelHierarchy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArray *tempr = (ap.IsBound() ?
      op->GetOrientations() :
      op->vtkLabelHierarchy::GetOrientations());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabelHierarchy_SetIconIndices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIconIndices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchy *op = static_cast<vtkLabelHierarchy *>(vp);

  vtkIntArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkIntArray"))
  {
    if (ap.IsBound())
    {
      op->SetIconIndices(temp0);
    }
    else
    {
      op->vtkLabelHierarchy::SetIconIndices(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabelHierarchy_GetIconIndices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIconIndices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchy *op = static_cast<vtkLabelHierarchy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIntArray *tempr = (ap.IsBound() ?
      op->GetIconIndices() :
      op->vtkLabelHierarchy::GetIconIndices());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabelHierarchy_SetSizes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSizes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchy *op = static_cast<vtkLabelHierarchy *>(vp);

  vtkDataArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataArray"))
  {
    if (ap.IsBound())
    {
      op->SetSizes(temp0);
    }
    else
    {
      op->vtkLabelHierarchy::SetSizes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabelHierarchy_GetSizes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSizes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchy *op = static_cast<vtkLabelHierarchy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArray *tempr = (ap.IsBound() ?
      op->GetSizes() :
      op->vtkLabelHierarchy::GetSizes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabelHierarchy_SetBoundedSizes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBoundedSizes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchy *op = static_cast<vtkLabelHierarchy *>(vp);

  vtkDataArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataArray"))
  {
    if (ap.IsBound())
    {
      op->SetBoundedSizes(temp0);
    }
    else
    {
      op->vtkLabelHierarchy::SetBoundedSizes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabelHierarchy_GetBoundedSizes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBoundedSizes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchy *op = static_cast<vtkLabelHierarchy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArray *tempr = (ap.IsBound() ?
      op->GetBoundedSizes() :
      op->vtkLabelHierarchy::GetBoundedSizes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabelHierarchy_NewIterator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewIterator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchy *op = static_cast<vtkLabelHierarchy *>(vp);

  int temp0;
  vtkRenderer *temp1 = nullptr;
  vtkCamera *temp2 = nullptr;
  const size_t size3 = 24;
  double temp3[24];
  double save3[24];
  bool temp4 = false;
  const size_t size5 = 2;
  float temp5[2];
  float save5[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkRenderer") &&
      ap.GetVTKObject(temp2, "vtkCamera") &&
      ap.GetArray(temp3, size3) &&
      ap.GetValue(temp4) &&
      ap.GetArray(temp5, size5))
  {
    ap.Save(temp3, save3, size3);
    ap.Save(temp5, save5, size5);

    vtkLabelHierarchyIterator *tempr = (ap.IsBound() ?
      op->NewIterator(temp0, temp1, temp2, temp3, temp4, temp5) :
      op->vtkLabelHierarchy::NewIterator(temp0, temp1, temp2, temp3, temp4, temp5));

    if (ap.HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (ap.HasChanged(temp5, save5, size5) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(5, temp5, size5);
    }

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
PyvtkLabelHierarchy_GetDiscreteNodeCoordinatesFromWorldPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDiscreteNodeCoordinatesFromWorldPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchy *op = static_cast<vtkLabelHierarchy *>(vp);

  const size_t size0 = 3;
  int temp0[3];
  int save0[3];
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2))
  {
    ap.Save(temp0, save0, size0);
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->GetDiscreteNodeCoordinatesFromWorldPoint(temp0, temp1, temp2);
    }
    else
    {
      op->vtkLabelHierarchy::GetDiscreteNodeCoordinatesFromWorldPoint(temp0, temp1, temp2);
    }

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabelHierarchy_GetPathForNodalCoordinates(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetPathForNodalCoordinates");

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<int> store0(2*size0);
  int *temp0 = store0.Data();
  int *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  const size_t size1 = 3;
  int temp1[3];
  int save1[3];
  int temp2;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2))
  {
    ap.Save(temp0, save0, size0);
    ap.Save(temp1, save1, size1);

    bool tempr = vtkLabelHierarchy::GetPathForNodalCoordinates(temp0, temp1, temp2);

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabelHierarchy_GetNumberOfCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchy *op = static_cast<vtkLabelHierarchy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfCells() :
      op->vtkLabelHierarchy::GetNumberOfCells());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabelHierarchy_GetCell_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchy *op = static_cast<vtkLabelHierarchy *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkCell *tempr = (ap.IsBound() ?
      op->GetCell(temp0) :
      op->vtkLabelHierarchy::GetCell(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkLabelHierarchy_GetCell_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchy *op = static_cast<vtkLabelHierarchy *>(vp);

  vtkIdType temp0;
  vtkGenericCell *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkGenericCell"))
  {
    if (ap.IsBound())
    {
      op->GetCell(temp0, temp1);
    }
    else
    {
      op->vtkLabelHierarchy::GetCell(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkLabelHierarchy_GetCell_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchy *op = static_cast<vtkLabelHierarchy *>(vp);

  int temp0;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    vtkCell *tempr = (ap.IsBound() ?
      op->GetCell(temp0, temp1, temp2) :
      op->vtkLabelHierarchy::GetCell(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkLabelHierarchy_GetCell(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkLabelHierarchy_GetCell_s1(self, args);
    case 2:
      return PyvtkLabelHierarchy_GetCell_s2(self, args);
    case 3:
      return PyvtkLabelHierarchy_GetCell_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetCell");
  return nullptr;
}



static PyObject *
PyvtkLabelHierarchy_GetCellType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchy *op = static_cast<vtkLabelHierarchy *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCellType(temp0) :
      op->vtkLabelHierarchy::GetCellType(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabelHierarchy_GetCellPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchy *op = static_cast<vtkLabelHierarchy *>(vp);

  vtkIdType temp0;
  vtkIdList *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkIdList"))
  {
    if (ap.IsBound())
    {
      op->GetCellPoints(temp0, temp1);
    }
    else
    {
      op->vtkLabelHierarchy::GetCellPoints(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabelHierarchy_GetPointCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchy *op = static_cast<vtkLabelHierarchy *>(vp);

  vtkIdType temp0;
  vtkIdList *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkIdList"))
  {
    if (ap.IsBound())
    {
      op->GetPointCells(temp0, temp1);
    }
    else
    {
      op->vtkLabelHierarchy::GetPointCells(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabelHierarchy_FindCell_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchy *op = static_cast<vtkLabelHierarchy *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  vtkCell *temp1 = nullptr;
  vtkIdType temp2;
  double temp3;
  int temp4;
  const size_t size5 = 3;
  double temp5[3];
  double save5[3];
  size_t size6 = ap.GetArgSize(6);
  vtkPythonArgs::Array<double> store6(2*size6);
  double *temp6 = store6.Data();
  double *save6 = (size6 == 0 ? nullptr : temp6 + size6);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(7) &&
      ap.GetArray(temp0, size0) &&
      ap.GetVTKObject(temp1, "vtkCell") &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetArray(temp5, size5) &&
      ap.GetArray(temp6, size6))
  {
    ap.Save(temp0, save0, size0);
    ap.Save(temp5, save5, size5);
    ap.Save(temp6, save6, size6);

    vtkIdType tempr = (ap.IsBound() ?
      op->FindCell(temp0, temp1, temp2, temp3, temp4, temp5, temp6) :
      op->vtkLabelHierarchy::FindCell(temp0, temp1, temp2, temp3, temp4, temp5, temp6));

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(4, temp4);
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
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkLabelHierarchy_FindCell_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchy *op = static_cast<vtkLabelHierarchy *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  vtkCell *temp1 = nullptr;
  vtkGenericCell *temp2 = nullptr;
  vtkIdType temp3;
  double temp4;
  int temp5;
  const size_t size6 = 3;
  double temp6[3];
  double save6[3];
  size_t size7 = ap.GetArgSize(7);
  vtkPythonArgs::Array<double> store7(2*size7);
  double *temp7 = store7.Data();
  double *save7 = (size7 == 0 ? nullptr : temp7 + size7);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(8) &&
      ap.GetArray(temp0, size0) &&
      ap.GetVTKObject(temp1, "vtkCell") &&
      ap.GetVTKObject(temp2, "vtkGenericCell") &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetArray(temp6, size6) &&
      ap.GetArray(temp7, size7))
  {
    ap.Save(temp0, save0, size0);
    ap.Save(temp6, save6, size6);
    ap.Save(temp7, save7, size7);

    vtkIdType tempr = (ap.IsBound() ?
      op->FindCell(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7) :
      op->vtkLabelHierarchy::FindCell(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7));

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(5, temp5);
    }
    if (ap.HasChanged(temp6, save6, size6) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(6, temp6, size6);
    }

    if (ap.HasChanged(temp7, save7, size7) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(7, temp7, size7);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkLabelHierarchy_FindCell(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 7:
      return PyvtkLabelHierarchy_FindCell_s1(self, args);
    case 8:
      return PyvtkLabelHierarchy_FindCell_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "FindCell");
  return nullptr;
}



static PyObject *
PyvtkLabelHierarchy_GetMaxCellSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxCellSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchy *op = static_cast<vtkLabelHierarchy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaxCellSize() :
      op->vtkLabelHierarchy::GetMaxCellSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabelHierarchy_GetCenterPts(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenterPts");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchy *op = static_cast<vtkLabelHierarchy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPoints *tempr = (ap.IsBound() ?
      op->GetCenterPts() :
      op->vtkLabelHierarchy::GetCenterPts());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabelHierarchy_GetCoincidentPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoincidentPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchy *op = static_cast<vtkLabelHierarchy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCoincidentPoints *tempr = (ap.IsBound() ?
      op->GetCoincidentPoints() :
      op->vtkLabelHierarchy::GetCoincidentPoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkLabelHierarchy_Methods[] = {
  {"IsTypeOf", PyvtkLabelHierarchy_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkLabelHierarchy_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkLabelHierarchy_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkLabelHierarchy\nC++: static vtkLabelHierarchy *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkLabelHierarchy_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkLabelHierarchy\nC++: vtkLabelHierarchy *NewInstance()\n\n"},
  {"SetPoints", PyvtkLabelHierarchy_SetPoints, METH_VARARGS,
   "V.SetPoints(vtkPoints)\nC++: void SetPoints(vtkPoints *) override;\n\nOverride SetPoints so we can reset the hierarchy when the points\nchange.\n"},
  {"ComputeHierarchy", PyvtkLabelHierarchy_ComputeHierarchy, METH_VARARGS,
   "V.ComputeHierarchy()\nC++: virtual void ComputeHierarchy()\n\nFill the hierarchy with the input labels.\n"},
  {"SetTargetLabelCount", PyvtkLabelHierarchy_SetTargetLabelCount, METH_VARARGS,
   "V.SetTargetLabelCount(int)\nC++: virtual void SetTargetLabelCount(int _arg)\n\nThe number of labels that is ideally present at any octree node.\nIt is best if this is a multiple of $2^d $.\n"},
  {"GetTargetLabelCount", PyvtkLabelHierarchy_GetTargetLabelCount, METH_VARARGS,
   "V.GetTargetLabelCount() -> int\nC++: virtual int GetTargetLabelCount()\n\nThe number of labels that is ideally present at any octree node.\nIt is best if this is a multiple of $2^d $.\n"},
  {"SetMaximumDepth", PyvtkLabelHierarchy_SetMaximumDepth, METH_VARARGS,
   "V.SetMaximumDepth(int)\nC++: virtual void SetMaximumDepth(int _arg)\n\nThe maximum depth of the octree.\n"},
  {"GetMaximumDepth", PyvtkLabelHierarchy_GetMaximumDepth, METH_VARARGS,
   "V.GetMaximumDepth() -> int\nC++: virtual int GetMaximumDepth()\n\nThe maximum depth of the octree.\n"},
  {"SetTextProperty", PyvtkLabelHierarchy_SetTextProperty, METH_VARARGS,
   "V.SetTextProperty(vtkTextProperty)\nC++: virtual void SetTextProperty(vtkTextProperty *tprop)\n\nThe default text property assigned to labels in this hierarchy.\n"},
  {"GetTextProperty", PyvtkLabelHierarchy_GetTextProperty, METH_VARARGS,
   "V.GetTextProperty() -> vtkTextProperty\nC++: virtual vtkTextProperty *GetTextProperty()\n\nThe default text property assigned to labels in this hierarchy.\n"},
  {"SetPriorities", PyvtkLabelHierarchy_SetPriorities, METH_VARARGS,
   "V.SetPriorities(vtkDataArray)\nC++: virtual void SetPriorities(vtkDataArray *arr)\n\nSet/get the array specifying the importance (priority) of each\nlabel.\n"},
  {"GetPriorities", PyvtkLabelHierarchy_GetPriorities, METH_VARARGS,
   "V.GetPriorities() -> vtkDataArray\nC++: virtual vtkDataArray *GetPriorities()\n\nSet/get the array specifying the importance (priority) of each\nlabel.\n"},
  {"SetLabels", PyvtkLabelHierarchy_SetLabels, METH_VARARGS,
   "V.SetLabels(vtkAbstractArray)\nC++: virtual void SetLabels(vtkAbstractArray *arr)\n\nSet/get the array specifying the text of each label.\n"},
  {"GetLabels", PyvtkLabelHierarchy_GetLabels, METH_VARARGS,
   "V.GetLabels() -> vtkAbstractArray\nC++: virtual vtkAbstractArray *GetLabels()\n\nSet/get the array specifying the text of each label.\n"},
  {"SetOrientations", PyvtkLabelHierarchy_SetOrientations, METH_VARARGS,
   "V.SetOrientations(vtkDataArray)\nC++: virtual void SetOrientations(vtkDataArray *arr)\n\nSet/get the array specifying the orientation of each label.\n"},
  {"GetOrientations", PyvtkLabelHierarchy_GetOrientations, METH_VARARGS,
   "V.GetOrientations() -> vtkDataArray\nC++: virtual vtkDataArray *GetOrientations()\n\nSet/get the array specifying the orientation of each label.\n"},
  {"SetIconIndices", PyvtkLabelHierarchy_SetIconIndices, METH_VARARGS,
   "V.SetIconIndices(vtkIntArray)\nC++: virtual void SetIconIndices(vtkIntArray *arr)\n\nSet/get the array specifying the icon index of each label.\n"},
  {"GetIconIndices", PyvtkLabelHierarchy_GetIconIndices, METH_VARARGS,
   "V.GetIconIndices() -> vtkIntArray\nC++: virtual vtkIntArray *GetIconIndices()\n\nSet/get the array specifying the icon index of each label.\n"},
  {"SetSizes", PyvtkLabelHierarchy_SetSizes, METH_VARARGS,
   "V.SetSizes(vtkDataArray)\nC++: virtual void SetSizes(vtkDataArray *arr)\n\nSet/get the array specifying the size of each label.\n"},
  {"GetSizes", PyvtkLabelHierarchy_GetSizes, METH_VARARGS,
   "V.GetSizes() -> vtkDataArray\nC++: virtual vtkDataArray *GetSizes()\n\nSet/get the array specifying the size of each label.\n"},
  {"SetBoundedSizes", PyvtkLabelHierarchy_SetBoundedSizes, METH_VARARGS,
   "V.SetBoundedSizes(vtkDataArray)\nC++: virtual void SetBoundedSizes(vtkDataArray *arr)\n\nSet/get the array specifying the maximum width and height in\nworld coordinates of each label.\n"},
  {"GetBoundedSizes", PyvtkLabelHierarchy_GetBoundedSizes, METH_VARARGS,
   "V.GetBoundedSizes() -> vtkDataArray\nC++: virtual vtkDataArray *GetBoundedSizes()\n\nSet/get the array specifying the maximum width and height in\nworld coordinates of each label.\n"},
  {"NewIterator", PyvtkLabelHierarchy_NewIterator, METH_VARARGS,
   "V.NewIterator(int, vtkRenderer, vtkCamera, [float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float, float, float, float, float, float, float, float,\n    float, float, float, float], bool, [float, float])\n    -> vtkLabelHierarchyIterator\nC++: vtkLabelHierarchyIterator *NewIterator(int type,\n    vtkRenderer *ren, vtkCamera *cam, double frustumPlanes[24],\n    bool positionsAsNormals, float bucketSize[2])\n\nReturns an iterator for this data object. positionsAsNormals\nshould only be true when labels are on a sphere centered at the\norigin (3D world).\n@param type - the type should be one of FULL_SORT, QUEUE,\n    DEPTH_FIRST, or FRUSTUM.\n@param ren - the current renderer (used for viewport information)\n@param cam - the current camera.\n@param frustumPlanes - should be the output of the camera's\n    frustum planes.\n@param positionsAsNormals - throws out octree nodes on the\n    opposite side of the origin.\n@param bucketSize - an array of 2 integers describing the width\n    and height of label placer buckets.\n"},
  {"GetDiscreteNodeCoordinatesFromWorldPoint", PyvtkLabelHierarchy_GetDiscreteNodeCoordinatesFromWorldPoint, METH_VARARGS,
   "V.GetDiscreteNodeCoordinatesFromWorldPoint([int, int, int],\n    [float, float, float], int)\nC++: void GetDiscreteNodeCoordinatesFromWorldPoint(int ijk[3],\n    double pt[3], int level)\n\nGiven a depth in the hierarchy ( level) and a point pt in world\nspace, compute ijk. This is used to find other octree nodes at\nthe same level that are within the search radius for candidate\nlabels to be placed. It is called with pt set to the camera eye\npoint and pythagorean quadruples increasingly distant from the\norigin are added to ijk to identify octree nodes whose labels\nshould be placed.\n@param[out] ijk - discrete coordinates of the octree node at\n    level containing pt.\n@param[in]  pt - input world point coordinates\n@param[in]  level - input octree level to be considered\n"},
  {"GetPathForNodalCoordinates", PyvtkLabelHierarchy_GetPathForNodalCoordinates, METH_VARARGS,
   "V.GetPathForNodalCoordinates([int, ...], [int, int, int], int)\n    -> bool\nC++: static bool GetPathForNodalCoordinates(int *path, int ijk[3],\n     int level)\n\nGiven a level of the tree and ijk coordinates in a lattice,\ncompute a path down the tree to reach the corresponding lattice\nnode. If the lattice coordinates are outside the tree, this\nreturns false. Otherwise it returns true. This does notguarantee\nthat the path exists in the hierarchy.\n@param[out] path - a vector of level integers specifying which\n    child to descend at each level to reach ijk\n@param[in] ijk - discrete coordinates of the octree node at level\n@param[in] level - input octree level to be considered\n"},
  {"GetNumberOfCells", PyvtkLabelHierarchy_GetNumberOfCells, METH_VARARGS,
   "V.GetNumberOfCells() -> int\nC++: vtkIdType GetNumberOfCells() override;\n\nInherited members (from vtkDataSet)\n"},
  {"GetCell", PyvtkLabelHierarchy_GetCell, METH_VARARGS,
   "V.GetCell(int) -> vtkCell\nC++: vtkCell *GetCell(vtkIdType) override;\nV.GetCell(int, vtkGenericCell)\nC++: void GetCell(vtkIdType, vtkGenericCell *) override;\nV.GetCell(int, int, int) -> vtkCell\nC++: virtual vtkCell *GetCell(int i, int j, int k)\n\nInherited members (from vtkDataSet)\n"},
  {"GetCellType", PyvtkLabelHierarchy_GetCellType, METH_VARARGS,
   "V.GetCellType(int) -> int\nC++: int GetCellType(vtkIdType) override;\n\nInherited members (from vtkDataSet)\n"},
  {"GetCellPoints", PyvtkLabelHierarchy_GetCellPoints, METH_VARARGS,
   "V.GetCellPoints(int, vtkIdList)\nC++: void GetCellPoints(vtkIdType, vtkIdList *) override;\n\nInherited members (from vtkDataSet)\n"},
  {"GetPointCells", PyvtkLabelHierarchy_GetPointCells, METH_VARARGS,
   "V.GetPointCells(int, vtkIdList)\nC++: void GetPointCells(vtkIdType, vtkIdList *) override;\n\nInherited members (from vtkDataSet)\n"},
  {"FindCell", PyvtkLabelHierarchy_FindCell, METH_VARARGS,
   "V.FindCell([float, float, float], vtkCell, int, float, int,\n    [float, float, float], [float, ...]) -> int\nC++: vtkIdType FindCell(double *, vtkCell *, vtkIdType, double,\n    int &, double *, double *) override;\nV.FindCell([float, float, float], vtkCell, vtkGenericCell, int,\n    float, int, [float, float, float], [float, ...]) -> int\nC++: vtkIdType FindCell(double *, vtkCell *, vtkGenericCell *,\n    vtkIdType, double, int &, double *, double *) override;\n\nInherited members (from vtkDataSet)\n"},
  {"GetMaxCellSize", PyvtkLabelHierarchy_GetMaxCellSize, METH_VARARGS,
   "V.GetMaxCellSize() -> int\nC++: int GetMaxCellSize() override;\n\nInherited members (from vtkDataSet)\n"},
  {"GetCenterPts", PyvtkLabelHierarchy_GetCenterPts, METH_VARARGS,
   "V.GetCenterPts() -> vtkPoints\nC++: virtual vtkPoints *GetCenterPts()\n\nProvide access to original coordinates of sets of coincident\npoints\n"},
  {"GetCoincidentPoints", PyvtkLabelHierarchy_GetCoincidentPoints, METH_VARARGS,
   "V.GetCoincidentPoints() -> vtkCoincidentPoints\nC++: virtual vtkCoincidentPoints *GetCoincidentPoints()\n\nProvide access to the set of coincident points that have been\nperturbed by the hierarchy in order to render labels for each\nwithout overlap.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkLabelHierarchy_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingLabelPython.vtkLabelHierarchy", // tp_name
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
  PyvtkLabelHierarchy_Doc, // tp_doc
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

static vtkObjectBase *PyvtkLabelHierarchy_StaticNew()
{
  return vtkLabelHierarchy::New();
}

PyObject *PyvtkLabelHierarchy_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkLabelHierarchy_Type, PyvtkLabelHierarchy_Methods,
    "vtkLabelHierarchy",
 &PyvtkLabelHierarchy_StaticNew);

  PyTypeObject *pytype = &PyvtkLabelHierarchy_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPointSet_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkLabelHierarchy_IteratorType_Type);
  PyvtkLabelHierarchy_IteratorType_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkLabelHierarchy_IteratorType_Type);

  o = (PyObject *)&PyvtkLabelHierarchy_IteratorType_Type;
  if (PyDict_SetItemString(d, "IteratorType", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 4; c++)
  {
    typedef vtkLabelHierarchy::IteratorType cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[4] = {
        { "FULL_SORT", vtkLabelHierarchy::FULL_SORT },
        { "QUEUE", vtkLabelHierarchy::QUEUE },
        { "DEPTH_FIRST", vtkLabelHierarchy::DEPTH_FIRST },
        { "FRUSTUM", vtkLabelHierarchy::FRUSTUM },
      };

    o = PyvtkLabelHierarchy_IteratorType_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkLabelHierarchy(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkLabelHierarchy_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkLabelHierarchy", o) != 0)
  {
    Py_DECREF(o);
  }

}

