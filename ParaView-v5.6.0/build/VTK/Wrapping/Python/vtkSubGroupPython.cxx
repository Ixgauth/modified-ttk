// python wrapper for vtkSubGroup
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
#include "vtkSubGroup.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSubGroup(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSubGroup_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkSubGroup_Doc =
  "vtkSubGroup - scalable collective communication for a\n     subset of members of a parallel VTK application\n\n"
  "Superclass: vtkObject\n\n"
  "This class provides scalable broadcast, reduce, etc. using\n"
  "    only a vtkMultiProcessController. It does not require MPI.\n"
  "    Users are vtkPKdTree and vtkDistributedDataFilter.\n\n"
  "@attention This class will be deprecated soon.  Instead of using this\n"
  "class, use the collective and subgrouping operations now built into\n"
  "vtkMultiProcessController.  The only reason this class is not\n"
  "deprecated already is because vtkPKdTree relies heavily on this class\n"
  "in ways that are not easy to work around.  Since vtkPKdTree is due\n"
  "for a major overhaul anyway, we are leaving things the way they are\n"
  "for now.\n\n"
  "@sa\n"
  "     vtkPKdTree vtkDistributedDataFilter\n\n";


static PyObject *
PyvtkSubGroup_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSubGroup::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSubGroup_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSubGroup *op = static_cast<vtkSubGroup *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSubGroup::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSubGroup_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSubGroup *tempr = vtkSubGroup::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSubGroup_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSubGroup *op = static_cast<vtkSubGroup *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSubGroup *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSubGroup::NewInstance());

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
PyvtkSubGroup_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSubGroup *op = static_cast<vtkSubGroup *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  vtkCommunicator *temp4 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetVTKObject(temp4, "vtkCommunicator"))
  {
    int tempr = (ap.IsBound() ?
      op->Initialize(temp0, temp1, temp2, temp3, temp4) :
      op->vtkSubGroup::Initialize(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSubGroup_Gather_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Gather");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSubGroup *op = static_cast<vtkSubGroup *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<int> store0(2*size0);
  int *temp0 = store0.Data();
  int *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<int> store1(2*size1);
  int *temp1 = store1.Data();
  int *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  int temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    ap.Save(temp0, save0, size0);
    ap.Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->Gather(temp0, temp1, temp2, temp3) :
      op->vtkSubGroup::Gather(temp0, temp1, temp2, temp3));

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
PyvtkSubGroup_Gather_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Gather");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSubGroup *op = static_cast<vtkSubGroup *>(vp);

  size_t size0 = ap.GetStringSize(0);
  vtkPythonArgs::Array<char> store0(2*size0 + 1);
  char *temp0 = store0.Data();
  char *save0 = temp0 + size0 + 1;
  size_t size1 = ap.GetStringSize(1);
  vtkPythonArgs::Array<char> store1(2*size1 + 1);
  char *temp1 = store1.Data();
  char *save1 = temp1 + size1 + 1;
  int temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    ap.Save(temp0, save0, size0);
    ap.Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->Gather(temp0, temp1, temp2, temp3) :
      op->vtkSubGroup::Gather(temp0, temp1, temp2, temp3));

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
PyvtkSubGroup_Gather_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Gather");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSubGroup *op = static_cast<vtkSubGroup *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<float> store0(2*size0);
  float *temp0 = store0.Data();
  float *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<float> store1(2*size1);
  float *temp1 = store1.Data();
  float *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  int temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    ap.Save(temp0, save0, size0);
    ap.Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->Gather(temp0, temp1, temp2, temp3) :
      op->vtkSubGroup::Gather(temp0, temp1, temp2, temp3));

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
PyvtkSubGroup_Gather_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Gather");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSubGroup *op = static_cast<vtkSubGroup *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<vtkIdType> store0(2*size0);
  vtkIdType *temp0 = store0.Data();
  vtkIdType *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<vtkIdType> store1(2*size1);
  vtkIdType *temp1 = store1.Data();
  vtkIdType *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  int temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    ap.Save(temp0, save0, size0);
    ap.Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->Gather(temp0, temp1, temp2, temp3) :
      op->vtkSubGroup::Gather(temp0, temp1, temp2, temp3));

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

static PyMethodDef PyvtkSubGroup_Gather_Methods[] = {
  {nullptr, PyvtkSubGroup_Gather_s1, METH_VARARGS,
   "@PPii *i *i"},
  {nullptr, PyvtkSubGroup_Gather_s2, METH_VARARGS,
   "@zzii"},
  {nullptr, PyvtkSubGroup_Gather_s3, METH_VARARGS,
   "@PPii *f *f"},
  {nullptr, PyvtkSubGroup_Gather_s4, METH_VARARGS,
   "@PPii *k *k"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSubGroup_Gather(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSubGroup_Gather_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Gather");
  return nullptr;
}



static PyObject *
PyvtkSubGroup_Broadcast_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Broadcast");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSubGroup *op = static_cast<vtkSubGroup *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    ap.Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->Broadcast(temp0, temp1, temp2) :
      op->vtkSubGroup::Broadcast(temp0, temp1, temp2));

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSubGroup_Broadcast_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Broadcast");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSubGroup *op = static_cast<vtkSubGroup *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<int> store0(2*size0);
  int *temp0 = store0.Data();
  int *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    ap.Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->Broadcast(temp0, temp1, temp2) :
      op->vtkSubGroup::Broadcast(temp0, temp1, temp2));

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSubGroup_Broadcast_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Broadcast");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSubGroup *op = static_cast<vtkSubGroup *>(vp);

  size_t size0 = ap.GetStringSize(0);
  vtkPythonArgs::Array<char> store0(2*size0 + 1);
  char *temp0 = store0.Data();
  char *save0 = temp0 + size0 + 1;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    ap.Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->Broadcast(temp0, temp1, temp2) :
      op->vtkSubGroup::Broadcast(temp0, temp1, temp2));

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSubGroup_Broadcast_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Broadcast");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSubGroup *op = static_cast<vtkSubGroup *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<vtkIdType> store0(2*size0);
  vtkIdType *temp0 = store0.Data();
  vtkIdType *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    ap.Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->Broadcast(temp0, temp1, temp2) :
      op->vtkSubGroup::Broadcast(temp0, temp1, temp2));

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSubGroup_Broadcast_Methods[] = {
  {nullptr, PyvtkSubGroup_Broadcast_s1, METH_VARARGS,
   "@Pii *d"},
  {nullptr, PyvtkSubGroup_Broadcast_s2, METH_VARARGS,
   "@Pii *i"},
  {nullptr, PyvtkSubGroup_Broadcast_s3, METH_VARARGS,
   "@zii"},
  {nullptr, PyvtkSubGroup_Broadcast_s4, METH_VARARGS,
   "@Pii *k"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSubGroup_Broadcast(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSubGroup_Broadcast_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Broadcast");
  return nullptr;
}



static PyObject *
PyvtkSubGroup_ReduceSum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReduceSum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSubGroup *op = static_cast<vtkSubGroup *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<int> store0(2*size0);
  int *temp0 = store0.Data();
  int *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<int> store1(2*size1);
  int *temp1 = store1.Data();
  int *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  int temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    ap.Save(temp0, save0, size0);
    ap.Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->ReduceSum(temp0, temp1, temp2, temp3) :
      op->vtkSubGroup::ReduceSum(temp0, temp1, temp2, temp3));

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
PyvtkSubGroup_ReduceMax_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReduceMax");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSubGroup *op = static_cast<vtkSubGroup *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  int temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    ap.Save(temp0, save0, size0);
    ap.Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->ReduceMax(temp0, temp1, temp2, temp3) :
      op->vtkSubGroup::ReduceMax(temp0, temp1, temp2, temp3));

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
PyvtkSubGroup_ReduceMax_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReduceMax");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSubGroup *op = static_cast<vtkSubGroup *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<int> store0(2*size0);
  int *temp0 = store0.Data();
  int *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<int> store1(2*size1);
  int *temp1 = store1.Data();
  int *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  int temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    ap.Save(temp0, save0, size0);
    ap.Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->ReduceMax(temp0, temp1, temp2, temp3) :
      op->vtkSubGroup::ReduceMax(temp0, temp1, temp2, temp3));

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

static PyMethodDef PyvtkSubGroup_ReduceMax_Methods[] = {
  {nullptr, PyvtkSubGroup_ReduceMax_s1, METH_VARARGS,
   "@PPii *d *d"},
  {nullptr, PyvtkSubGroup_ReduceMax_s2, METH_VARARGS,
   "@PPii *i *i"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSubGroup_ReduceMax(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSubGroup_ReduceMax_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "ReduceMax");
  return nullptr;
}



static PyObject *
PyvtkSubGroup_ReduceMin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReduceMin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSubGroup *op = static_cast<vtkSubGroup *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  int temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    ap.Save(temp0, save0, size0);
    ap.Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->ReduceMin(temp0, temp1, temp2, temp3) :
      op->vtkSubGroup::ReduceMin(temp0, temp1, temp2, temp3));

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
PyvtkSubGroup_ReduceMin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReduceMin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSubGroup *op = static_cast<vtkSubGroup *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<int> store0(2*size0);
  int *temp0 = store0.Data();
  int *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<int> store1(2*size1);
  int *temp1 = store1.Data();
  int *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  int temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    ap.Save(temp0, save0, size0);
    ap.Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->ReduceMin(temp0, temp1, temp2, temp3) :
      op->vtkSubGroup::ReduceMin(temp0, temp1, temp2, temp3));

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

static PyMethodDef PyvtkSubGroup_ReduceMin_Methods[] = {
  {nullptr, PyvtkSubGroup_ReduceMin_s1, METH_VARARGS,
   "@PPii *d *d"},
  {nullptr, PyvtkSubGroup_ReduceMin_s2, METH_VARARGS,
   "@PPii *i *i"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSubGroup_ReduceMin(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSubGroup_ReduceMin_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "ReduceMin");
  return nullptr;
}



static PyObject *
PyvtkSubGroup_setGatherPattern(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "setGatherPattern");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSubGroup *op = static_cast<vtkSubGroup *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->setGatherPattern(temp0, temp1);
    }
    else
    {
      op->vtkSubGroup::setGatherPattern(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSubGroup_getLocalRank(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "getLocalRank");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSubGroup *op = static_cast<vtkSubGroup *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->getLocalRank(temp0) :
      op->vtkSubGroup::getLocalRank(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSubGroup_Barrier(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Barrier");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSubGroup *op = static_cast<vtkSubGroup *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->Barrier() :
      op->vtkSubGroup::Barrier());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSubGroup_PrintSubGroup(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PrintSubGroup");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSubGroup *op = static_cast<vtkSubGroup *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PrintSubGroup();
    }
    else
    {
      op->vtkSubGroup::PrintSubGroup();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSubGroup_Methods[] = {
  {"IsTypeOf", PyvtkSubGroup_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSubGroup_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSubGroup_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSubGroup\nC++: static vtkSubGroup *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSubGroup_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSubGroup\nC++: vtkSubGroup *NewInstance()\n\n"},
  {"Initialize", PyvtkSubGroup_Initialize, METH_VARARGS,
   "V.Initialize(int, int, int, int, vtkCommunicator) -> int\nC++: int Initialize(int p0, int p1, int me, int tag,\n    vtkCommunicator *c)\n\nInitialize a communication subgroup for the processes with rank\np0 through p1 of the given communicator.  (So vtkSubGroup is\nlimited to working with subgroups that are identified by a\ncontiguous set of rank IDs.) The third argument is the callers\nrank, which must in the range from p0 through p1.\n"},
  {"Gather", PyvtkSubGroup_Gather, METH_VARARGS,
   "V.Gather([int, ...], [int, ...], int, int) -> int\nC++: int Gather(int *data, int *to, int length, int root)\nV.Gather(string, string, int, int) -> int\nC++: int Gather(char *data, char *to, int length, int root)\nV.Gather([float, ...], [float, ...], int, int) -> int\nC++: int Gather(float *data, float *to, int length, int root)\nV.Gather([int, ...], [int, ...], int, int) -> int\nC++: int Gather(vtkIdType *data, vtkIdType *to, int length,\n    int root)\n\n"},
  {"Broadcast", PyvtkSubGroup_Broadcast, METH_VARARGS,
   "V.Broadcast([float, ...], int, int) -> int\nC++: int Broadcast(double *data, int length, int root)\nV.Broadcast([int, ...], int, int) -> int\nC++: int Broadcast(int *data, int length, int root)\nV.Broadcast(string, int, int) -> int\nC++: int Broadcast(char *data, int length, int root)\nV.Broadcast([int, ...], int, int) -> int\nC++: int Broadcast(vtkIdType *data, int length, int root)\n\n"},
  {"ReduceSum", PyvtkSubGroup_ReduceSum, METH_VARARGS,
   "V.ReduceSum([int, ...], [int, ...], int, int) -> int\nC++: int ReduceSum(int *data, int *to, int length, int root)\n\n"},
  {"ReduceMax", PyvtkSubGroup_ReduceMax, METH_VARARGS,
   "V.ReduceMax([float, ...], [float, ...], int, int) -> int\nC++: int ReduceMax(double *data, double *to, int length, int root)\nV.ReduceMax([int, ...], [int, ...], int, int) -> int\nC++: int ReduceMax(int *data, int *to, int length, int root)\n\n"},
  {"ReduceMin", PyvtkSubGroup_ReduceMin, METH_VARARGS,
   "V.ReduceMin([float, ...], [float, ...], int, int) -> int\nC++: int ReduceMin(double *data, double *to, int length, int root)\nV.ReduceMin([int, ...], [int, ...], int, int) -> int\nC++: int ReduceMin(int *data, int *to, int length, int root)\n\n"},
  {"setGatherPattern", PyvtkSubGroup_setGatherPattern, METH_VARARGS,
   "V.setGatherPattern(int, int)\nC++: void setGatherPattern(int root, int length)\n\n"},
  {"getLocalRank", PyvtkSubGroup_getLocalRank, METH_VARARGS,
   "V.getLocalRank(int) -> int\nC++: int getLocalRank(int processID)\n\n"},
  {"Barrier", PyvtkSubGroup_Barrier, METH_VARARGS,
   "V.Barrier() -> int\nC++: int Barrier()\n\n"},
  {"PrintSubGroup", PyvtkSubGroup_PrintSubGroup, METH_VARARGS,
   "V.PrintSubGroup()\nC++: void PrintSubGroup()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSubGroup_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkParallelCorePython.vtkSubGroup", // tp_name
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
  PyvtkSubGroup_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSubGroup_StaticNew()
{
  return vtkSubGroup::New();
}

PyObject *PyvtkSubGroup_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSubGroup_Type, PyvtkSubGroup_Methods,
    "vtkSubGroup",
 &PyvtkSubGroup_StaticNew);

  PyTypeObject *pytype = &PyvtkSubGroup_Type;

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

  for (int c = 0; c < 3; c++)
  {
    static const struct { const char *name; int value; }
      constants[3] = {
        { "MINOP", vtkSubGroup::MINOP },
        { "MAXOP", vtkSubGroup::MAXOP },
        { "SUMOP", vtkSubGroup::SUMOP },
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

void PyVTKAddFile_vtkSubGroup(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSubGroup_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSubGroup", o) != 0)
  {
    Py_DECREF(o);
  }

}

