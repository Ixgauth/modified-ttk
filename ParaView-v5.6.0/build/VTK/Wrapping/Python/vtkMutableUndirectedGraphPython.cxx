// python wrapper for vtkMutableUndirectedGraph
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
#include "vtkGraph.h"
#include "vtkMutableUndirectedGraph.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMutableUndirectedGraph(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkMutableUndirectedGraph_ClassNew(); }

#ifndef DECLARED_PyvtkUndirectedGraph_ClassNew
extern "C" { PyObject *PyvtkUndirectedGraph_ClassNew(); }
#define DECLARED_PyvtkUndirectedGraph_ClassNew
#endif

static const char *PyvtkMutableUndirectedGraph_Doc =
  "vtkMutableUndirectedGraph - An editable undirected graph.\n\n"
  "Superclass: vtkUndirectedGraph\n\n"
  "vtkMutableUndirectedGraph is an undirected graph with additional\n"
  "functions for adding vertices and edges. ShallowCopy(), DeepCopy(),\n"
  "CheckedShallowCopy(), and CheckedDeepCopy() will succeed when the\n"
  "argument is a vtkUndirectedGraph or vtkMutableUndirectedGraph.\n\n"
  "@sa\n"
  "vtkUndirectedGraph vtkGraph\n\n";


static PyObject *
PyvtkMutableUndirectedGraph_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMutableUndirectedGraph::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMutableUndirectedGraph_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMutableUndirectedGraph *op = static_cast<vtkMutableUndirectedGraph *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMutableUndirectedGraph::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMutableUndirectedGraph_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMutableUndirectedGraph *tempr = vtkMutableUndirectedGraph::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMutableUndirectedGraph_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMutableUndirectedGraph *op = static_cast<vtkMutableUndirectedGraph *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMutableUndirectedGraph *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMutableUndirectedGraph::NewInstance());

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
PyvtkMutableUndirectedGraph_SetNumberOfVertices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfVertices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMutableUndirectedGraph *op = static_cast<vtkMutableUndirectedGraph *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->SetNumberOfVertices(temp0) :
      op->vtkMutableUndirectedGraph::SetNumberOfVertices(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMutableUndirectedGraph_AddVertex_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddVertex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMutableUndirectedGraph *op = static_cast<vtkMutableUndirectedGraph *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->AddVertex() :
      op->vtkMutableUndirectedGraph::AddVertex());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMutableUndirectedGraph_AddVertex_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddVertex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMutableUndirectedGraph *op = static_cast<vtkMutableUndirectedGraph *>(vp);

  vtkVariantArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkVariantArray"))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->AddVertex(temp0) :
      op->vtkMutableUndirectedGraph::AddVertex(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMutableUndirectedGraph_AddVertex_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddVertex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMutableUndirectedGraph *op = static_cast<vtkMutableUndirectedGraph *>(vp);

  vtkVariant *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVariant"))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->AddVertex(*temp0) :
      op->vtkMutableUndirectedGraph::AddVertex(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkMutableUndirectedGraph_AddVertex_Methods[] = {
  {nullptr, PyvtkMutableUndirectedGraph_AddVertex_s2, METH_VARARGS,
   "@V *vtkVariantArray"},
  {nullptr, PyvtkMutableUndirectedGraph_AddVertex_s3, METH_VARARGS,
   "@W vtkVariant"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkMutableUndirectedGraph_AddVertex(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMutableUndirectedGraph_AddVertex_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkMutableUndirectedGraph_AddVertex_s1(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "AddVertex");
  return nullptr;
}



static PyObject *
PyvtkMutableUndirectedGraph_AddEdge_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddEdge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMutableUndirectedGraph *op = static_cast<vtkMutableUndirectedGraph *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkEdgeType tempr = (ap.IsBound() ?
      op->AddEdge(temp0, temp1) :
      op->vtkMutableUndirectedGraph::AddEdge(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkEdgeType");
    }
  }

  return result;
}

static PyObject *
PyvtkMutableUndirectedGraph_AddEdge_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddEdge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMutableUndirectedGraph *op = static_cast<vtkMutableUndirectedGraph *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkVariantArray *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkVariantArray"))
  {
    vtkEdgeType tempr = (ap.IsBound() ?
      op->AddEdge(temp0, temp1, temp2) :
      op->vtkMutableUndirectedGraph::AddEdge(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkEdgeType");
    }
  }

  return result;
}

static PyObject *
PyvtkMutableUndirectedGraph_AddEdge_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddEdge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMutableUndirectedGraph *op = static_cast<vtkMutableUndirectedGraph *>(vp);

  vtkVariant *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  vtkIdType temp1;
  vtkVariantArray *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVariant") &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp2, "vtkVariantArray")))
  {
    vtkEdgeType tempr = (ap.IsBound() ?
      op->AddEdge(*temp0, temp1, temp2) :
      op->vtkMutableUndirectedGraph::AddEdge(*temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkEdgeType");
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyObject *
PyvtkMutableUndirectedGraph_AddEdge_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddEdge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMutableUndirectedGraph *op = static_cast<vtkMutableUndirectedGraph *>(vp);

  vtkIdType temp0;
  vtkVariant *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  vtkVariantArray *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetValue(temp0) &&
      ap.GetSpecialObject(temp1, pobj1, "vtkVariant") &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp2, "vtkVariantArray")))
  {
    vtkEdgeType tempr = (ap.IsBound() ?
      op->AddEdge(temp0, *temp1, temp2) :
      op->vtkMutableUndirectedGraph::AddEdge(temp0, *temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkEdgeType");
    }
  }

  Py_XDECREF(pobj1);

  return result;
}

static PyObject *
PyvtkMutableUndirectedGraph_AddEdge_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddEdge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMutableUndirectedGraph *op = static_cast<vtkMutableUndirectedGraph *>(vp);

  vtkVariant *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  vtkVariant *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  vtkVariantArray *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVariant") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkVariant") &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp2, "vtkVariantArray")))
  {
    vtkEdgeType tempr = (ap.IsBound() ?
      op->AddEdge(*temp0, *temp1, temp2) :
      op->vtkMutableUndirectedGraph::AddEdge(*temp0, *temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkEdgeType");
    }
  }

  Py_XDECREF(pobj0);
  Py_XDECREF(pobj1);

  return result;
}

static PyMethodDef PyvtkMutableUndirectedGraph_AddEdge_Methods[] = {
  {nullptr, PyvtkMutableUndirectedGraph_AddEdge_s1, METH_VARARGS,
   "@kk"},
  {nullptr, PyvtkMutableUndirectedGraph_AddEdge_s2, METH_VARARGS,
   "@kkV *vtkVariantArray"},
  {nullptr, PyvtkMutableUndirectedGraph_AddEdge_s3, METH_VARARGS,
   "@Wk|V vtkVariant *vtkVariantArray"},
  {nullptr, PyvtkMutableUndirectedGraph_AddEdge_s4, METH_VARARGS,
   "@kW|V vtkVariant *vtkVariantArray"},
  {nullptr, PyvtkMutableUndirectedGraph_AddEdge_s5, METH_VARARGS,
   "@WW|V vtkVariant vtkVariant *vtkVariantArray"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkMutableUndirectedGraph_AddEdge(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMutableUndirectedGraph_AddEdge_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "AddEdge");
  return nullptr;
}



static PyObject *
PyvtkMutableUndirectedGraph_LazyAddVertex_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LazyAddVertex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMutableUndirectedGraph *op = static_cast<vtkMutableUndirectedGraph *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LazyAddVertex();
    }
    else
    {
      op->vtkMutableUndirectedGraph::LazyAddVertex();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMutableUndirectedGraph_LazyAddVertex_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LazyAddVertex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMutableUndirectedGraph *op = static_cast<vtkMutableUndirectedGraph *>(vp);

  vtkVariantArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkVariantArray"))
  {
    if (ap.IsBound())
    {
      op->LazyAddVertex(temp0);
    }
    else
    {
      op->vtkMutableUndirectedGraph::LazyAddVertex(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMutableUndirectedGraph_LazyAddVertex_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LazyAddVertex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMutableUndirectedGraph *op = static_cast<vtkMutableUndirectedGraph *>(vp);

  vtkVariant *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVariant"))
  {
    if (ap.IsBound())
    {
      op->LazyAddVertex(*temp0);
    }
    else
    {
      op->vtkMutableUndirectedGraph::LazyAddVertex(*temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkMutableUndirectedGraph_LazyAddVertex_Methods[] = {
  {nullptr, PyvtkMutableUndirectedGraph_LazyAddVertex_s2, METH_VARARGS,
   "@V *vtkVariantArray"},
  {nullptr, PyvtkMutableUndirectedGraph_LazyAddVertex_s3, METH_VARARGS,
   "@W vtkVariant"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkMutableUndirectedGraph_LazyAddVertex(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMutableUndirectedGraph_LazyAddVertex_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkMutableUndirectedGraph_LazyAddVertex_s1(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "LazyAddVertex");
  return nullptr;
}



static PyObject *
PyvtkMutableUndirectedGraph_LazyAddEdge_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LazyAddEdge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMutableUndirectedGraph *op = static_cast<vtkMutableUndirectedGraph *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->LazyAddEdge(temp0, temp1);
    }
    else
    {
      op->vtkMutableUndirectedGraph::LazyAddEdge(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMutableUndirectedGraph_LazyAddEdge_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LazyAddEdge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMutableUndirectedGraph *op = static_cast<vtkMutableUndirectedGraph *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkVariantArray *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkVariantArray"))
  {
    if (ap.IsBound())
    {
      op->LazyAddEdge(temp0, temp1, temp2);
    }
    else
    {
      op->vtkMutableUndirectedGraph::LazyAddEdge(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMutableUndirectedGraph_LazyAddEdge_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LazyAddEdge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMutableUndirectedGraph *op = static_cast<vtkMutableUndirectedGraph *>(vp);

  vtkVariant *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  vtkIdType temp1;
  vtkVariantArray *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVariant") &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp2, "vtkVariantArray")))
  {
    if (ap.IsBound())
    {
      op->LazyAddEdge(*temp0, temp1, temp2);
    }
    else
    {
      op->vtkMutableUndirectedGraph::LazyAddEdge(*temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyObject *
PyvtkMutableUndirectedGraph_LazyAddEdge_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LazyAddEdge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMutableUndirectedGraph *op = static_cast<vtkMutableUndirectedGraph *>(vp);

  vtkIdType temp0;
  vtkVariant *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  vtkVariantArray *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetValue(temp0) &&
      ap.GetSpecialObject(temp1, pobj1, "vtkVariant") &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp2, "vtkVariantArray")))
  {
    if (ap.IsBound())
    {
      op->LazyAddEdge(temp0, *temp1, temp2);
    }
    else
    {
      op->vtkMutableUndirectedGraph::LazyAddEdge(temp0, *temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj1);

  return result;
}

static PyObject *
PyvtkMutableUndirectedGraph_LazyAddEdge_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LazyAddEdge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMutableUndirectedGraph *op = static_cast<vtkMutableUndirectedGraph *>(vp);

  vtkVariant *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  vtkVariant *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  vtkVariantArray *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVariant") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkVariant") &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp2, "vtkVariantArray")))
  {
    if (ap.IsBound())
    {
      op->LazyAddEdge(*temp0, *temp1, temp2);
    }
    else
    {
      op->vtkMutableUndirectedGraph::LazyAddEdge(*temp0, *temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);
  Py_XDECREF(pobj1);

  return result;
}

static PyMethodDef PyvtkMutableUndirectedGraph_LazyAddEdge_Methods[] = {
  {nullptr, PyvtkMutableUndirectedGraph_LazyAddEdge_s1, METH_VARARGS,
   "@kk"},
  {nullptr, PyvtkMutableUndirectedGraph_LazyAddEdge_s2, METH_VARARGS,
   "@kkV *vtkVariantArray"},
  {nullptr, PyvtkMutableUndirectedGraph_LazyAddEdge_s3, METH_VARARGS,
   "@Wk|V vtkVariant *vtkVariantArray"},
  {nullptr, PyvtkMutableUndirectedGraph_LazyAddEdge_s4, METH_VARARGS,
   "@kW|V vtkVariant *vtkVariantArray"},
  {nullptr, PyvtkMutableUndirectedGraph_LazyAddEdge_s5, METH_VARARGS,
   "@WW|V vtkVariant vtkVariant *vtkVariantArray"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkMutableUndirectedGraph_LazyAddEdge(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMutableUndirectedGraph_LazyAddEdge_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "LazyAddEdge");
  return nullptr;
}



static PyObject *
PyvtkMutableUndirectedGraph_AddGraphEdge(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddGraphEdge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMutableUndirectedGraph *op = static_cast<vtkMutableUndirectedGraph *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkGraphEdge *tempr = (ap.IsBound() ?
      op->AddGraphEdge(temp0, temp1) :
      op->vtkMutableUndirectedGraph::AddGraphEdge(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMutableUndirectedGraph_RemoveVertex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveVertex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMutableUndirectedGraph *op = static_cast<vtkMutableUndirectedGraph *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RemoveVertex(temp0);
    }
    else
    {
      op->vtkMutableUndirectedGraph::RemoveVertex(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMutableUndirectedGraph_RemoveEdge(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveEdge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMutableUndirectedGraph *op = static_cast<vtkMutableUndirectedGraph *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RemoveEdge(temp0);
    }
    else
    {
      op->vtkMutableUndirectedGraph::RemoveEdge(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMutableUndirectedGraph_RemoveVertices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveVertices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMutableUndirectedGraph *op = static_cast<vtkMutableUndirectedGraph *>(vp);

  vtkIdTypeArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkIdTypeArray"))
  {
    if (ap.IsBound())
    {
      op->RemoveVertices(temp0);
    }
    else
    {
      op->vtkMutableUndirectedGraph::RemoveVertices(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMutableUndirectedGraph_RemoveEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMutableUndirectedGraph *op = static_cast<vtkMutableUndirectedGraph *>(vp);

  vtkIdTypeArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkIdTypeArray"))
  {
    if (ap.IsBound())
    {
      op->RemoveEdges(temp0);
    }
    else
    {
      op->vtkMutableUndirectedGraph::RemoveEdges(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkMutableUndirectedGraph_Methods[] = {
  {"IsTypeOf", PyvtkMutableUndirectedGraph_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMutableUndirectedGraph_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMutableUndirectedGraph_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkMutableUndirectedGraph\nC++: static vtkMutableUndirectedGraph *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMutableUndirectedGraph_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkMutableUndirectedGraph\nC++: vtkMutableUndirectedGraph *NewInstance()\n\n"},
  {"SetNumberOfVertices", PyvtkMutableUndirectedGraph_SetNumberOfVertices, METH_VARARGS,
   "V.SetNumberOfVertices(int) -> int\nC++: virtual vtkIdType SetNumberOfVertices(vtkIdType numVerts)\n\nAllocates space for the specified number of vertices in the\ngraph's internal data structures. The previous number of vertices\nis returned on success and -1 is returned on failure.\n\n* This has no effect on the number of vertex coordinate tuples or\n* vertex attribute tuples allocated; you are responsible for\n* guaranteeing these match.\n* Also, this call is not implemented for distributed-memory\n  graphs since\n* the semantics are unclear; calling this function on a graph\n  with a\n* non-nullptr DistributedGraphHelper will generate an error\n  message,\n* no allocation will be performed, and a value of -1 will be\n  returned.\n"},
  {"AddVertex", PyvtkMutableUndirectedGraph_AddVertex, METH_VARARGS,
   "V.AddVertex() -> int\nC++: vtkIdType AddVertex()\nV.AddVertex(vtkVariantArray) -> int\nC++: vtkIdType AddVertex(vtkVariantArray *propertyArr)\nV.AddVertex(vtkVariant) -> int\nC++: vtkIdType AddVertex(const vtkVariant &pedigreeId)\n\nAdds a vertex to the graph and returns the index of the new\nvertex.\n\n*\n\note In a distributed graph (i.e. a graph whose DistributedHelper\n* is non-null), this routine cannot be used to add a vertex\n* if the vertices in the graph have pedigree IDs, because this\n  routine\n* will always add the vertex locally, which may conflict with the\n* proper location of the vertex based on the distribution of the\n* pedigree IDs.\n"},
  {"AddEdge", PyvtkMutableUndirectedGraph_AddEdge, METH_VARARGS,
   "V.AddEdge(int, int) -> vtkEdgeType\nC++: vtkEdgeType AddEdge(vtkIdType u, vtkIdType v)\nV.AddEdge(int, int, vtkVariantArray) -> vtkEdgeType\nC++: vtkEdgeType AddEdge(vtkIdType u, vtkIdType v,\n    vtkVariantArray *propertyArr)\nV.AddEdge(vtkVariant, int, vtkVariantArray) -> vtkEdgeType\nC++: vtkEdgeType AddEdge(const vtkVariant &u, vtkIdType v,\n    vtkVariantArray *propertyArr=nullptr)\nV.AddEdge(int, vtkVariant, vtkVariantArray) -> vtkEdgeType\nC++: vtkEdgeType AddEdge(vtkIdType u, const vtkVariant &v,\n    vtkVariantArray *propertyArr=nullptr)\nV.AddEdge(vtkVariant, vtkVariant, vtkVariantArray) -> vtkEdgeType\nC++: vtkEdgeType AddEdge(const vtkVariant &u, const vtkVariant &v,\n     vtkVariantArray *propertyArr=nullptr)\n\nAdds an undirected edge from u to v, where u and v are vertex\nindices, and returns a vtkEdgeType structure describing that\nedge.\n\n* vtkEdgeType contains fields for Source vertex index,\n* Target vertex index, and edge index Id.\n"},
  {"LazyAddVertex", PyvtkMutableUndirectedGraph_LazyAddVertex, METH_VARARGS,
   "V.LazyAddVertex()\nC++: void LazyAddVertex()\nV.LazyAddVertex(vtkVariantArray)\nC++: void LazyAddVertex(vtkVariantArray *propertyArr)\nV.LazyAddVertex(vtkVariant)\nC++: void LazyAddVertex(const vtkVariant &pedigreeId)\n\nAdds a vertex to the graph.\n\n* This method is lazily evaluated for distributed graphs (i.e.\n  graphs\n* whose DistributedHelper is non-null) the next time Synchronize\n  is\n* called on the helper.\n"},
  {"LazyAddEdge", PyvtkMutableUndirectedGraph_LazyAddEdge, METH_VARARGS,
   "V.LazyAddEdge(int, int)\nC++: void LazyAddEdge(vtkIdType u, vtkIdType v)\nV.LazyAddEdge(int, int, vtkVariantArray)\nC++: void LazyAddEdge(vtkIdType u, vtkIdType v,\n    vtkVariantArray *propertyArr)\nV.LazyAddEdge(vtkVariant, int, vtkVariantArray)\nC++: void LazyAddEdge(const vtkVariant &u, vtkIdType v,\n    vtkVariantArray *propertyArr=nullptr)\nV.LazyAddEdge(int, vtkVariant, vtkVariantArray)\nC++: void LazyAddEdge(vtkIdType u, const vtkVariant &v,\n    vtkVariantArray *propertyArr=nullptr)\nV.LazyAddEdge(vtkVariant, vtkVariant, vtkVariantArray)\nC++: void LazyAddEdge(const vtkVariant &u, const vtkVariant &v,\n    vtkVariantArray *propertyArr=nullptr)\n\nAdds an undirected edge from u to v, where u and v are vertex\nindices.\n\n* This method is lazily evaluated for distributed graphs (i.e.\n  graphs\n* whose DistributedHelper is non-null) the next time Synchronize\n  is\n* called on the helper.\n"},
  {"AddGraphEdge", PyvtkMutableUndirectedGraph_AddGraphEdge, METH_VARARGS,
   "V.AddGraphEdge(int, int) -> vtkGraphEdge\nC++: vtkGraphEdge *AddGraphEdge(vtkIdType u, vtkIdType v)\n\nVariant of AddEdge() that returns a heavyweight vtkGraphEdge\nobject. The graph owns the reference of the edge and will replace\nits contents on the next call to AddGraphEdge().\n\n*\n\note This is a less efficient method for use with wrappers.\n* In C++ you should use the faster AddEdge().\n"},
  {"RemoveVertex", PyvtkMutableUndirectedGraph_RemoveVertex, METH_VARARGS,
   "V.RemoveVertex(int)\nC++: void RemoveVertex(vtkIdType v)\n\nRemoves the vertex from the graph along with any connected edges.\nNote: This invalidates the last vertex index, which is reassigned\nto v.\n"},
  {"RemoveEdge", PyvtkMutableUndirectedGraph_RemoveEdge, METH_VARARGS,
   "V.RemoveEdge(int)\nC++: void RemoveEdge(vtkIdType e)\n\nRemoves the edge from the graph. Note: This invalidates the last\nedge index, which is reassigned to e.\n"},
  {"RemoveVertices", PyvtkMutableUndirectedGraph_RemoveVertices, METH_VARARGS,
   "V.RemoveVertices(vtkIdTypeArray)\nC++: void RemoveVertices(vtkIdTypeArray *arr)\n\nRemoves a collection of vertices from the graph along with any\nconnected edges.\n"},
  {"RemoveEdges", PyvtkMutableUndirectedGraph_RemoveEdges, METH_VARARGS,
   "V.RemoveEdges(vtkIdTypeArray)\nC++: void RemoveEdges(vtkIdTypeArray *arr)\n\nRemoves a collection of edges from the graph.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkMutableUndirectedGraph_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonDataModelPython.vtkMutableUndirectedGraph", // tp_name
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
  PyvtkMutableUndirectedGraph_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMutableUndirectedGraph_StaticNew()
{
  return vtkMutableUndirectedGraph::New();
}

PyObject *PyvtkMutableUndirectedGraph_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkMutableUndirectedGraph_Type, PyvtkMutableUndirectedGraph_Methods,
    "vtkMutableUndirectedGraph",
 &PyvtkMutableUndirectedGraph_StaticNew);

  PyTypeObject *pytype = &PyvtkMutableUndirectedGraph_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkUndirectedGraph_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMutableUndirectedGraph(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMutableUndirectedGraph_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMutableUndirectedGraph", o) != 0)
  {
    Py_DECREF(o);
  }

}

