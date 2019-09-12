// python wrapper for vtkSubsetInclusionLattice
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
#include "vtkStdString.h"
#include "vtkSubsetInclusionLattice.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSubsetInclusionLattice(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSubsetInclusionLattice_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkSubsetInclusionLattice_Doc =
  "vtkSubsetInclusionLattice - A directed acyclic graph to manage data\nhierarchy and relationships\n       between hierarchy nodes.\n\n"
  "Superclass: vtkObject\n\n"
  "vtkSubsetInclusionLattice is designed to help readers to describe\n"
  "hierarchical relationships in data-blocks in the file as well as\n"
  "offer the user ability to select data-blocks to read (or not read).\n\n"
  "vtkSubsetInclusionLattice provides API to build a hierarchical\n"
  "description of the data-blocks. It internally uses XML to store a\n"
  "directed-acyclic graph of relations between blocks using nodes the\n"
  "XML. Parent-child links are directly stored in XML as such. However,\n"
  "that is not sufficient for readers with different ways of selecting\n"
  "blocks e.g. CGNS reader supports selecting block using block names or\n"
  "families. To support such cases, the approach used is to have a\n"
  "subtree for each \"class\" of control and then support cross links\n"
  "between subtrees. The construction API, which includes `AddNode`, and\n"
  "`AddCrossLink` allows building of such subtrees with cross links.\n\n"
  "The selection API allows selecting nodes. The selection API provided\n"
  "by vtkSubsetInclusionLattice is fairly basic and not most intuitive\n"
  "for the users. Readers are expected to subclass\n"
  "vtkSubsetInclusionLattice to provide selection API relevant to the\n"
  "file format using the terminology natural to the file format users.\n\n"
  "Typically, an instance of vtkSubsetInclusionLattice is constructed by\n"
  "the reader using information in the file in\n"
  "`Reader::RequestInformation`. Then, users can query the\n"
  "vtkSubsetInclusionLattice (or subclass) for information about various\n"
  "classifications and then select blocks. In an ideal world,\n"
  "`Reader::RequestInformation` will be called before user makes\n"
  "selection requests i.e. the vtkSubsetInclusionLattice will be\n"
  "constructed using construction API before using any of the selection\n"
  "API. However, that may not always be the case. Hence, when `Select`\n"
  "or `Deselect` methods are called with a path string as the argument,\n"
  "they add new nodes to the tree.\n\n"
  "@par Events\n\n"
  "vtkSubsetInclusionLattice fires the following events\n"
  "\\li `vtkCommand::ModifiedEvent` is fired whenever the structure is\n"
  "    modified e.g. new\n"
  "nodes or links are added, or state is restored using `Deserialize`.\n"
  "\\li `vtkCommand::StateChangedEvent` is fired whenever the selection\n"
  "    state for\n"
  "any node changes. The calldata points to the `int` which is the\n"
  "node's id.\n\n"
  "@sa vtkCGNSSubsetInclusionLattice\n\n";

static PyTypeObject PyvtkSubsetInclusionLattice_SelectionStates_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsSILPython.vtkSubsetInclusionLattice.SelectionStates", // tp_name
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

PyObject *PyvtkSubsetInclusionLattice_SelectionStates_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkSubsetInclusionLattice_SelectionStates_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkSubsetInclusionLattice_SelectionStates_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkSubsetInclusionLattice_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSubsetInclusionLattice::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSubsetInclusionLattice_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSubsetInclusionLattice *op = static_cast<vtkSubsetInclusionLattice *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSubsetInclusionLattice::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSubsetInclusionLattice_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSubsetInclusionLattice *tempr = vtkSubsetInclusionLattice::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSubsetInclusionLattice_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSubsetInclusionLattice *op = static_cast<vtkSubsetInclusionLattice *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSubsetInclusionLattice *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSubsetInclusionLattice::NewInstance());

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
PyvtkSubsetInclusionLattice_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSubsetInclusionLattice *op = static_cast<vtkSubsetInclusionLattice *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Initialize();
    }
    else
    {
      op->vtkSubsetInclusionLattice::Initialize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSubsetInclusionLattice_Serialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Serialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSubsetInclusionLattice *op = static_cast<vtkSubsetInclusionLattice *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->Serialize() :
      op->vtkSubsetInclusionLattice::Serialize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSubsetInclusionLattice_Deserialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Deserialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSubsetInclusionLattice *op = static_cast<vtkSubsetInclusionLattice *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->Deserialize(temp0) :
      op->vtkSubsetInclusionLattice::Deserialize(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSubsetInclusionLattice_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSubsetInclusionLattice *op = static_cast<vtkSubsetInclusionLattice *>(vp);

  vtkSubsetInclusionLattice *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSubsetInclusionLattice"))
  {
    if (ap.IsBound())
    {
      op->DeepCopy(temp0);
    }
    else
    {
      op->vtkSubsetInclusionLattice::DeepCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSubsetInclusionLattice_Merge_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Merge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSubsetInclusionLattice *op = static_cast<vtkSubsetInclusionLattice *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->Merge(temp0);
    }
    else
    {
      op->vtkSubsetInclusionLattice::Merge(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSubsetInclusionLattice_Merge_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Merge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSubsetInclusionLattice *op = static_cast<vtkSubsetInclusionLattice *>(vp);

  vtkSubsetInclusionLattice *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSubsetInclusionLattice"))
  {
    if (ap.IsBound())
    {
      op->Merge(temp0);
    }
    else
    {
      op->vtkSubsetInclusionLattice::Merge(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSubsetInclusionLattice_Merge_Methods[] = {
  {nullptr, PyvtkSubsetInclusionLattice_Merge_s1, METH_VARARGS,
   "@s"},
  {nullptr, PyvtkSubsetInclusionLattice_Merge_s2, METH_VARARGS,
   "@V *vtkSubsetInclusionLattice"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSubsetInclusionLattice_Merge(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSubsetInclusionLattice_Merge_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Merge");
  return nullptr;
}



static PyObject *
PyvtkSubsetInclusionLattice_AddNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSubsetInclusionLattice *op = static_cast<vtkSubsetInclusionLattice *>(vp);

  const char *temp0 = nullptr;
  int temp1 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    int tempr = (ap.IsBound() ?
      op->AddNode(temp0, temp1) :
      op->vtkSubsetInclusionLattice::AddNode(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSubsetInclusionLattice_AddNodeAtPath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddNodeAtPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSubsetInclusionLattice *op = static_cast<vtkSubsetInclusionLattice *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->AddNodeAtPath(temp0) :
      op->vtkSubsetInclusionLattice::AddNodeAtPath(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSubsetInclusionLattice_AddCrossLink(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddCrossLink");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSubsetInclusionLattice *op = static_cast<vtkSubsetInclusionLattice *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    bool tempr = (ap.IsBound() ?
      op->AddCrossLink(temp0, temp1) :
      op->vtkSubsetInclusionLattice::AddCrossLink(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSubsetInclusionLattice_FindNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSubsetInclusionLattice *op = static_cast<vtkSubsetInclusionLattice *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->FindNode(temp0) :
      op->vtkSubsetInclusionLattice::FindNode(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSubsetInclusionLattice_GetSelectionState_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectionState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSubsetInclusionLattice *op = static_cast<vtkSubsetInclusionLattice *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    typedef vtkSubsetInclusionLattice::SelectionStates tempr_type;
  tempr_type tempr = (ap.IsBound() ?
      op->GetSelectionState(temp0) :
      op->vtkSubsetInclusionLattice::GetSelectionState(temp0));

    if (!ap.ErrorOccurred())
    {
      result = PyvtkSubsetInclusionLattice_SelectionStates_FromEnum(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSubsetInclusionLattice_GetSelectionState_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectionState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSubsetInclusionLattice *op = static_cast<vtkSubsetInclusionLattice *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    typedef vtkSubsetInclusionLattice::SelectionStates tempr_type;
  tempr_type tempr = (ap.IsBound() ?
      op->GetSelectionState(temp0) :
      op->vtkSubsetInclusionLattice::GetSelectionState(temp0));

    if (!ap.ErrorOccurred())
    {
      result = PyvtkSubsetInclusionLattice_SelectionStates_FromEnum(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSubsetInclusionLattice_GetSelectionState_Methods[] = {
  {nullptr, PyvtkSubsetInclusionLattice_GetSelectionState_s1, METH_VARARGS,
   "@i"},
  {nullptr, PyvtkSubsetInclusionLattice_GetSelectionState_s2, METH_VARARGS,
   "@z"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSubsetInclusionLattice_GetSelectionState(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSubsetInclusionLattice_GetSelectionState_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetSelectionState");
  return nullptr;
}



static PyObject *
PyvtkSubsetInclusionLattice_Select_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Select");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSubsetInclusionLattice *op = static_cast<vtkSubsetInclusionLattice *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->Select(temp0) :
      op->vtkSubsetInclusionLattice::Select(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSubsetInclusionLattice_Select_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Select");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSubsetInclusionLattice *op = static_cast<vtkSubsetInclusionLattice *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->Select(temp0) :
      op->vtkSubsetInclusionLattice::Select(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSubsetInclusionLattice_Select_Methods[] = {
  {nullptr, PyvtkSubsetInclusionLattice_Select_s1, METH_VARARGS,
   "@z"},
  {nullptr, PyvtkSubsetInclusionLattice_Select_s2, METH_VARARGS,
   "@i"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSubsetInclusionLattice_Select(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSubsetInclusionLattice_Select_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Select");
  return nullptr;
}



static PyObject *
PyvtkSubsetInclusionLattice_Deselect_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Deselect");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSubsetInclusionLattice *op = static_cast<vtkSubsetInclusionLattice *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->Deselect(temp0) :
      op->vtkSubsetInclusionLattice::Deselect(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSubsetInclusionLattice_Deselect_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Deselect");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSubsetInclusionLattice *op = static_cast<vtkSubsetInclusionLattice *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->Deselect(temp0) :
      op->vtkSubsetInclusionLattice::Deselect(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSubsetInclusionLattice_Deselect_Methods[] = {
  {nullptr, PyvtkSubsetInclusionLattice_Deselect_s1, METH_VARARGS,
   "@z"},
  {nullptr, PyvtkSubsetInclusionLattice_Deselect_s2, METH_VARARGS,
   "@i"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSubsetInclusionLattice_Deselect(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSubsetInclusionLattice_Deselect_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Deselect");
  return nullptr;
}



static PyObject *
PyvtkSubsetInclusionLattice_ClearSelections(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearSelections");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSubsetInclusionLattice *op = static_cast<vtkSubsetInclusionLattice *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearSelections();
    }
    else
    {
      op->vtkSubsetInclusionLattice::ClearSelections();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSubsetInclusionLattice_SelectAll(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectAll");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSubsetInclusionLattice *op = static_cast<vtkSubsetInclusionLattice *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->SelectAll(temp0) :
      op->vtkSubsetInclusionLattice::SelectAll(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSubsetInclusionLattice_DeselectAll(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeselectAll");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSubsetInclusionLattice *op = static_cast<vtkSubsetInclusionLattice *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->DeselectAll(temp0) :
      op->vtkSubsetInclusionLattice::DeselectAll(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSubsetInclusionLattice_GetSelectionChangeTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectionChangeTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSubsetInclusionLattice *op = static_cast<vtkSubsetInclusionLattice *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetSelectionChangeTime() :
      op->vtkSubsetInclusionLattice::GetSelectionChangeTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSubsetInclusionLattice_GetParent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSubsetInclusionLattice *op = static_cast<vtkSubsetInclusionLattice *>(vp);

  int temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<int> store1(2*size1);
  int *temp1 = store1.Data();
  int *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetArray(temp1, size1)))
  {
    ap.Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->GetParent(temp0, temp1) :
      op->vtkSubsetInclusionLattice::GetParent(temp0, temp1));

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
PyvtkSubsetInclusionLattice_GetNodeName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSubsetInclusionLattice *op = static_cast<vtkSubsetInclusionLattice *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetNodeName(temp0) :
      op->vtkSubsetInclusionLattice::GetNodeName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSubsetInclusionLattice_Modified(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Modified");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSubsetInclusionLattice *op = static_cast<vtkSubsetInclusionLattice *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Modified();
    }
    else
    {
      op->vtkSubsetInclusionLattice::Modified();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSubsetInclusionLattice_SUBSET_INCLUSION_LATTICE(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SUBSET_INCLUSION_LATTICE");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationObjectBaseKey *tempr = vtkSubsetInclusionLattice::SUBSET_INCLUSION_LATTICE();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSubsetInclusionLattice_GetSIL_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetSIL");

  vtkInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
  {
    vtkSubsetInclusionLattice *tempr = vtkSubsetInclusionLattice::GetSIL(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSubsetInclusionLattice_GetSIL_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetSIL");

  vtkInformationVector *temp0 = nullptr;
  int temp1 = 0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkInformationVector") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    vtkSubsetInclusionLattice *tempr = vtkSubsetInclusionLattice::GetSIL(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSubsetInclusionLattice_GetSIL_Methods[] = {
  {nullptr, PyvtkSubsetInclusionLattice_GetSIL_s1, METH_VARARGS | METH_STATIC,
   "V *vtkInformation"},
  {nullptr, PyvtkSubsetInclusionLattice_GetSIL_s2, METH_VARARGS | METH_STATIC,
   "V|i *vtkInformationVector"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSubsetInclusionLattice_GetSIL(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSubsetInclusionLattice_GetSIL_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 2:
      return PyvtkSubsetInclusionLattice_GetSIL_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetSIL");
  return nullptr;
}


static PyMethodDef PyvtkSubsetInclusionLattice_Methods[] = {
  {"IsTypeOf", PyvtkSubsetInclusionLattice_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSubsetInclusionLattice_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSubsetInclusionLattice_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSubsetInclusionLattice\nC++: static vtkSubsetInclusionLattice *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSubsetInclusionLattice_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSubsetInclusionLattice\nC++: vtkSubsetInclusionLattice *NewInstance()\n\n"},
  {"Initialize", PyvtkSubsetInclusionLattice_Initialize, METH_VARARGS,
   "V.Initialize()\nC++: void Initialize()\n\nInitializes the SIL.\n"},
  {"Serialize", PyvtkSubsetInclusionLattice_Serialize, METH_VARARGS,
   "V.Serialize() -> string\nC++: std::string Serialize()\n\nSaves the SIL state to a string.\n"},
  {"Deserialize", PyvtkSubsetInclusionLattice_Deserialize, METH_VARARGS,
   "V.Deserialize(string) -> bool\nC++: bool Deserialize(const std::string &data)\n\nDeserializes the SIL state from a string.\n"},
  {"DeepCopy", PyvtkSubsetInclusionLattice_DeepCopy, METH_VARARGS,
   "V.DeepCopy(vtkSubsetInclusionLattice)\nC++: void DeepCopy(const vtkSubsetInclusionLattice *other)\n\nCopies the contents from `other`.\n"},
  {"Merge", PyvtkSubsetInclusionLattice_Merge, METH_VARARGS,
   "V.Merge(string)\nC++: void Merge(const std::string &state)\nV.Merge(vtkSubsetInclusionLattice)\nC++: void Merge(const vtkSubsetInclusionLattice *other)\n\nMerges with state from another instance.\n"},
  {"AddNode", PyvtkSubsetInclusionLattice_AddNode, METH_VARARGS,
   "V.AddNode(string, int) -> int\nC++: int AddNode(const char *name, int parent=0)\n\nAdd a node to the SIL.\n\n@param[in] name name for the node. There is no requirement that\n    names are\n                unique.\n@param[in] parent the id for the parent node. Default is the root\nof the\n           SIL.\n@return the id for the newly added node on success, or -1 on\n    failure.\n"},
  {"AddNodeAtPath", PyvtkSubsetInclusionLattice_AddNodeAtPath, METH_VARARGS,
   "V.AddNodeAtPath(string) -> int\nC++: int AddNodeAtPath(const char *path)\n\nAdd a node to the SIL at the given path. Unlike path for\n`FindNode` which can be incomplete, the path for here must be\nfully qualified i.e. start with `/` and cannot have a `//`.\n"},
  {"AddCrossLink", PyvtkSubsetInclusionLattice_AddCrossLink, METH_VARARGS,
   "V.AddCrossLink(int, int) -> bool\nC++: bool AddCrossLink(int src, int dst)\n\nA cross link is directed link between nodes in two sub-trees.\nCare must be taken to avoid cycles. The current implementation\ndoes not check for cycles although such a capability can be added\nin the future.\n\n@param[in] src id for the source node.\n@param[out] dst id for the destination node.\n@returns true on success, else false. May fail if either of the\n    ids\nspecified are invalid.\n"},
  {"FindNode", PyvtkSubsetInclusionLattice_FindNode, METH_VARARGS,
   "V.FindNode(string) -> int\nC++: int FindNode(const char *path)\n\nFind the id for a node given a path expression to locate it. Path\ncan be specified as a fully or partially qualified, '/'-separated\nlocation of the node.\n\ne.g.\n\\li `/Block0`\n\\li `/Assembly/Component0/Block0`\n\\li `/Assembly//Block0`\n\\li `//Block0`\n\note a valid patch must begin with `/` or a `//`.\n\n@param[in] path path for the node to find.\n@return index of the node or -1 if not found.\n"},
  {"GetSelectionState", PyvtkSubsetInclusionLattice_GetSelectionState, METH_VARARGS,
   "V.GetSelectionState(int) -> SelectionStates\nC++: SelectionStates GetSelectionState(int node)\nV.GetSelectionState(string) -> SelectionStates\nC++: SelectionStates GetSelectionState(const char *path)\n\nGet the current state for a specific node.\n\n@param[in] node the id for the node of interest.\n@returns the status of the node. Will return\n    `SelectionStates::NotSelected`\nif the node is invalid.\n"},
  {"Select", PyvtkSubsetInclusionLattice_Select, METH_VARARGS,
   "V.Select(string) -> bool\nC++: bool Select(const char *path)\nV.Select(int) -> bool\nC++: bool Select(int node)\n\nSelect a node. A new node will be added at the path indicated if\nnone exists.\n"},
  {"Deselect", PyvtkSubsetInclusionLattice_Deselect, METH_VARARGS,
   "V.Deselect(string) -> bool\nC++: bool Deselect(const char *path)\nV.Deselect(int) -> bool\nC++: bool Deselect(int node)\n\nDeselect a node. A new node will be added at the path indicated\nif none exists.\n"},
  {"ClearSelections", PyvtkSubsetInclusionLattice_ClearSelections, METH_VARARGS,
   "V.ClearSelections()\nC++: void ClearSelections()\n\nClears all selection statuses.\n"},
  {"SelectAll", PyvtkSubsetInclusionLattice_SelectAll, METH_VARARGS,
   "V.SelectAll(string) -> bool\nC++: bool SelectAll(const char *path)\n\nSelect/Deselect all nodes that match the path. This is useful to\nbulk select/deselect nodes. Note, however, that this cannot be\nused to add new nodes to the structure, unlike `Select` and\n`Deselect` calls.\n\n@returns true if a matching node was found and its state was\n    changed.\n"},
  {"DeselectAll", PyvtkSubsetInclusionLattice_DeselectAll, METH_VARARGS,
   "V.DeselectAll(string) -> bool\nC++: bool DeselectAll(const char *path)\n\nSelect/Deselect all nodes that match the path. This is useful to\nbulk select/deselect nodes. Note, however, that this cannot be\nused to add new nodes to the structure, unlike `Select` and\n`Deselect` calls.\n\n@returns true if a matching node was found and its state was\n    changed.\n"},
  {"GetSelectionChangeTime", PyvtkSubsetInclusionLattice_GetSelectionChangeTime, METH_VARARGS,
   "V.GetSelectionChangeTime() -> int\nC++: virtual vtkMTimeType GetSelectionChangeTime()\n\nReturns the time stamp for the most recent selection state\nchange.\n"},
  {"GetParent", PyvtkSubsetInclusionLattice_GetParent, METH_VARARGS,
   "V.GetParent(int, [int, ...]) -> int\nC++: int GetParent(int node, int *childIndex=nullptr)\n\nReturns the id for the parent of a node.\n-1 is returned for the parent of the root node.\n"},
  {"GetNodeName", PyvtkSubsetInclusionLattice_GetNodeName, METH_VARARGS,
   "V.GetNodeName(int) -> string\nC++: const char *GetNodeName(int node)\n\nReturns a node's name. nullptr if not valid.\n"},
  {"Modified", PyvtkSubsetInclusionLattice_Modified, METH_VARARGS,
   "V.Modified()\nC++: void Modified() override;\n\nOverridden to modify SelectionChangeTime, since any time the SIL\nstructure is modified, it's akin to selection states being\nmodified.\n"},
  {"SUBSET_INCLUSION_LATTICE", PyvtkSubsetInclusionLattice_SUBSET_INCLUSION_LATTICE, METH_VARARGS,
   "V.SUBSET_INCLUSION_LATTICE() -> vtkInformationObjectBaseKey\nC++: static vtkInformationObjectBaseKey *SUBSET_INCLUSION_LATTICE(\n    )\n\nKey used to provide an instance of vtkSubsetInclusionLattice in\nthe output information during `vtkAlgorithm`'s\n`RequestInformation` pass.\n\n@ingroup InformationKeys\n"},
  {"GetSIL", PyvtkSubsetInclusionLattice_GetSIL, METH_VARARGS,
   "V.GetSIL(vtkInformation) -> vtkSubsetInclusionLattice\nC++: static vtkSubsetInclusionLattice *GetSIL(\n    vtkInformation *info)\nV.GetSIL(vtkInformationVector, int) -> vtkSubsetInclusionLattice\nC++: static vtkSubsetInclusionLattice *GetSIL(\n    vtkInformationVector *v, int i=0)\n\nRetrieve an instance of this class from an information object.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSubsetInclusionLattice_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsSILPython.vtkSubsetInclusionLattice", // tp_name
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
  PyvtkSubsetInclusionLattice_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSubsetInclusionLattice_StaticNew()
{
  return vtkSubsetInclusionLattice::New();
}

PyObject *PyvtkSubsetInclusionLattice_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSubsetInclusionLattice_Type, PyvtkSubsetInclusionLattice_Methods,
    "vtkSubsetInclusionLattice",
 &PyvtkSubsetInclusionLattice_StaticNew);

  PyTypeObject *pytype = &PyvtkSubsetInclusionLattice_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkObject_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkSubsetInclusionLattice_SelectionStates_Type);
  PyvtkSubsetInclusionLattice_SelectionStates_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkSubsetInclusionLattice_SelectionStates_Type);

  o = (PyObject *)&PyvtkSubsetInclusionLattice_SelectionStates_Type;
  if (PyDict_SetItemString(d, "SelectionStates", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 3; c++)
  {
    typedef vtkSubsetInclusionLattice::SelectionStates cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[3] = {
        { "NotSelected", vtkSubsetInclusionLattice::NotSelected },
        { "Selected", vtkSubsetInclusionLattice::Selected },
        { "PartiallySelected", vtkSubsetInclusionLattice::PartiallySelected },
      };

    o = PyvtkSubsetInclusionLattice_SelectionStates_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSubsetInclusionLattice(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSubsetInclusionLattice_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSubsetInclusionLattice", o) != 0)
  {
    Py_DECREF(o);
  }

}

