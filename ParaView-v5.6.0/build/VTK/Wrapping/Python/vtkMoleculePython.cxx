// python wrapper for vtkMolecule
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
#include "vtkAtom.h"
#include "vtkVector.h"
#include "vtkBond.h"
#include "vtkVector.h"
#include "vtkMolecule.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMolecule(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkMolecule_ClassNew(); }

#ifndef DECLARED_PyvtkUndirectedGraph_ClassNew
extern "C" { PyObject *PyvtkUndirectedGraph_ClassNew(); }
#define DECLARED_PyvtkUndirectedGraph_ClassNew
#endif

static const char *PyvtkMolecule_Doc =
  "vtkMolecule - class describing a molecule\n\n"
  "Superclass: vtkUndirectedGraph\n\n"
  "vtkMolecule and the convenience classes vtkAtom and vtkBond describe\n"
  "the geometry and connectivity of a molecule. The molecule can be\n"
  "constructed using the AppendAtom() and AppendBond() methods in one of\n"
  "two ways; either by fully specifying the atom/bond in a single call,\n"
  "or by incrementally setting the various attributes using the\n"
  "convenience vtkAtom and vtkBond classes:\n\n"
  "Single call:vtkMolecule *mol = vtkMolecule::New();\n"
  "vtkAtom h1 = mol->AppendAtom(1, 0.0, 0.0, -0.5);\n"
  "vtkAtom h2 = mol->AppendAtom(1, 0.0, 0.0,  0.5);\n"
  "vtkBond b  = mol->AppendBond(h1, h2, 1);\n\n"
  "Incremental:vtkMolecule *mol = vtkMolecule::New();\n\n"
  "vtkAtom h1 = mol->AppendAtom(); h1.SetAtomicNumber(1);\n"
  "h1.SetPosition(0.0, 0.0, -0.5);\n\n"
  "vtkAtom h2 = mol->AppendAtom(); h2.SetAtomicNumber(1); vtkVector3d\n"
  "displacement (0.0, 0.0, 1.0);\n"
  "h2.SetPosition(h1.GetPositionAsVector3d() + displacement);\n\n"
  "vtkBond b  = mol->AppendBond(h1, h2, 1);\n\n"
  "Both of the above methods will produce the same molecule, two\n"
  "hydrogens connected with a 1.0 Angstrom single bond, aligned to the\n"
  "z-axis. The second example also demonstrates the use of VTK's\n"
  "vtkVector class, which is fully supported by the Chemistry kit.\n\n"
  "The vtkMolecule object is intended to be used with the\n"
  "vtkMoleculeMapper class for visualizing molecular structure using\n"
  "common rendering techniques.\n\n"
  "\\warning While direct use of the underlying vtkUndirectedGraph\n"
  "structure is possible due to vtkMolecule's public inheritance, this\n"
  "should not be relied upon and may change in the future.\n\n"
  "@sa\n"
  "vtkAtom vtkBond vtkMoleculeMapper vtkPeriodicTable\n\n";


static PyObject *
PyvtkMolecule_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMolecule::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMolecule_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMolecule *op = static_cast<vtkMolecule *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMolecule::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMolecule_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMolecule *tempr = vtkMolecule::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMolecule_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMolecule *op = static_cast<vtkMolecule *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMolecule *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMolecule::NewInstance());

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
PyvtkMolecule_Initialize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMolecule *op = static_cast<vtkMolecule *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Initialize();
    }
    else
    {
      op->vtkMolecule::Initialize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMolecule_Initialize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMolecule *op = static_cast<vtkMolecule *>(vp);

  vtkPoints *temp0 = nullptr;
  vtkDataArray *temp1 = nullptr;
  vtkDataSetAttributes *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkPoints") &&
      ap.GetVTKObject(temp1, "vtkDataArray") &&
      ap.GetVTKObject(temp2, "vtkDataSetAttributes"))
  {
    int tempr = (ap.IsBound() ?
      op->Initialize(temp0, temp1, temp2) :
      op->vtkMolecule::Initialize(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMolecule_Initialize_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMolecule *op = static_cast<vtkMolecule *>(vp);

  vtkPoints *temp0 = nullptr;
  vtkDataSetAttributes *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkPoints") &&
      ap.GetVTKObject(temp1, "vtkDataSetAttributes"))
  {
    int tempr = (ap.IsBound() ?
      op->Initialize(temp0, temp1) :
      op->vtkMolecule::Initialize(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMolecule_Initialize_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMolecule *op = static_cast<vtkMolecule *>(vp);

  vtkMolecule *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMolecule"))
  {
    int tempr = (ap.IsBound() ?
      op->Initialize(temp0) :
      op->vtkMolecule::Initialize(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMolecule_Initialize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkMolecule_Initialize_s1(self, args);
    case 3:
      return PyvtkMolecule_Initialize_s2(self, args);
    case 2:
      return PyvtkMolecule_Initialize_s3(self, args);
    case 1:
      return PyvtkMolecule_Initialize_s4(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Initialize");
  return nullptr;
}



static PyObject *
PyvtkMolecule_GetDataObjectType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataObjectType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMolecule *op = static_cast<vtkMolecule *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataObjectType() :
      op->vtkMolecule::GetDataObjectType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMolecule_AppendAtom_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AppendAtom");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMolecule *op = static_cast<vtkMolecule *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAtom tempr = (ap.IsBound() ?
      op->AppendAtom() :
      op->vtkMolecule::AppendAtom());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkAtom");
    }
  }

  return result;
}

static PyObject *
PyvtkMolecule_AppendAtom_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AppendAtom");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMolecule *op = static_cast<vtkMolecule *>(vp);

  unsigned short temp0;
  vtkVector3f *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetSpecialObject(temp1, pobj1, "vtkVector3f"))
  {
    vtkAtom tempr = (ap.IsBound() ?
      op->AppendAtom(temp0, *temp1) :
      op->vtkMolecule::AppendAtom(temp0, *temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkAtom");
    }
  }

  Py_XDECREF(pobj1);

  return result;
}

static PyObject *
PyvtkMolecule_AppendAtom_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AppendAtom");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMolecule *op = static_cast<vtkMolecule *>(vp);

  unsigned short temp0;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    vtkAtom tempr = (ap.IsBound() ?
      op->AppendAtom(temp0, temp1, temp2, temp3) :
      op->vtkMolecule::AppendAtom(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkAtom");
    }
  }

  return result;
}

static PyObject *
PyvtkMolecule_AppendAtom(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkMolecule_AppendAtom_s1(self, args);
    case 2:
      return PyvtkMolecule_AppendAtom_s2(self, args);
    case 4:
      return PyvtkMolecule_AppendAtom_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "AppendAtom");
  return nullptr;
}



static PyObject *
PyvtkMolecule_GetAtom(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAtom");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMolecule *op = static_cast<vtkMolecule *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkAtom tempr = (ap.IsBound() ?
      op->GetAtom(temp0) :
      op->vtkMolecule::GetAtom(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkAtom");
    }
  }

  return result;
}


static PyObject *
PyvtkMolecule_GetNumberOfAtoms(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfAtoms");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMolecule *op = static_cast<vtkMolecule *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfAtoms() :
      op->vtkMolecule::GetNumberOfAtoms());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMolecule_AppendBond_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AppendBond");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMolecule *op = static_cast<vtkMolecule *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  unsigned short temp2 = 1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    vtkBond tempr = (ap.IsBound() ?
      op->AppendBond(temp0, temp1, temp2) :
      op->vtkMolecule::AppendBond(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkBond");
    }
  }

  return result;
}

static PyObject *
PyvtkMolecule_AppendBond_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AppendBond");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMolecule *op = static_cast<vtkMolecule *>(vp);

  vtkAtom *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  vtkAtom *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  unsigned short temp2 = 1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkAtom") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkAtom") &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    vtkBond tempr = (ap.IsBound() ?
      op->AppendBond(*temp0, *temp1, temp2) :
      op->vtkMolecule::AppendBond(*temp0, *temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkBond");
    }
  }

  Py_XDECREF(pobj0);
  Py_XDECREF(pobj1);

  return result;
}

static PyMethodDef PyvtkMolecule_AppendBond_Methods[] = {
  {nullptr, PyvtkMolecule_AppendBond_s1, METH_VARARGS,
   "@kk|H"},
  {nullptr, PyvtkMolecule_AppendBond_s2, METH_VARARGS,
   "@WW|H vtkAtom vtkAtom"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkMolecule_AppendBond(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMolecule_AppendBond_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "AppendBond");
  return nullptr;
}



static PyObject *
PyvtkMolecule_GetBond(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBond");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMolecule *op = static_cast<vtkMolecule *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkBond tempr = (ap.IsBound() ?
      op->GetBond(temp0) :
      op->vtkMolecule::GetBond(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkBond");
    }
  }

  return result;
}


static PyObject *
PyvtkMolecule_GetNumberOfBonds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfBonds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMolecule *op = static_cast<vtkMolecule *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfBonds() :
      op->vtkMolecule::GetNumberOfBonds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMolecule_GetAtomAtomicNumber(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAtomAtomicNumber");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMolecule *op = static_cast<vtkMolecule *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    unsigned short tempr = (ap.IsBound() ?
      op->GetAtomAtomicNumber(temp0) :
      op->vtkMolecule::GetAtomAtomicNumber(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMolecule_SetAtomAtomicNumber(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAtomAtomicNumber");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMolecule *op = static_cast<vtkMolecule *>(vp);

  vtkIdType temp0;
  unsigned short temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetAtomAtomicNumber(temp0, temp1);
    }
    else
    {
      op->vtkMolecule::SetAtomAtomicNumber(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMolecule_SetAtomPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAtomPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMolecule *op = static_cast<vtkMolecule *>(vp);

  vtkIdType temp0;
  vtkVector3f *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetSpecialObject(temp1, pobj1, "vtkVector3f"))
  {
    if (ap.IsBound())
    {
      op->SetAtomPosition(temp0, *temp1);
    }
    else
    {
      op->vtkMolecule::SetAtomPosition(temp0, *temp1);
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
PyvtkMolecule_SetAtomPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAtomPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMolecule *op = static_cast<vtkMolecule *>(vp);

  vtkIdType temp0;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->SetAtomPosition(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkMolecule::SetAtomPosition(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMolecule_SetAtomPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkMolecule_SetAtomPosition_s1(self, args);
    case 4:
      return PyvtkMolecule_SetAtomPosition_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetAtomPosition");
  return nullptr;
}



static PyObject *
PyvtkMolecule_GetAtomPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAtomPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMolecule *op = static_cast<vtkMolecule *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkVector3f tempr = (ap.IsBound() ?
      op->GetAtomPosition(temp0) :
      op->vtkMolecule::GetAtomPosition(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVector3f");
    }
  }

  return result;
}

static PyObject *
PyvtkMolecule_GetAtomPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAtomPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMolecule *op = static_cast<vtkMolecule *>(vp);

  vtkIdType temp0;
  const size_t size1 = 3;
  float temp1[3];
  float save1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->GetAtomPosition(temp0, temp1);
    }
    else
    {
      op->vtkMolecule::GetAtomPosition(temp0, temp1);
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
PyvtkMolecule_GetAtomPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkMolecule_GetAtomPosition_s1(self, args);
    case 2:
      return PyvtkMolecule_GetAtomPosition_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetAtomPosition");
  return nullptr;
}



static PyObject *
PyvtkMolecule_SetBondOrder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBondOrder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMolecule *op = static_cast<vtkMolecule *>(vp);

  vtkIdType temp0;
  unsigned short temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetBondOrder(temp0, temp1);
    }
    else
    {
      op->vtkMolecule::SetBondOrder(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMolecule_GetBondOrder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBondOrder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMolecule *op = static_cast<vtkMolecule *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    unsigned short tempr = (ap.IsBound() ?
      op->GetBondOrder(temp0) :
      op->vtkMolecule::GetBondOrder(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMolecule_GetBondLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBondLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMolecule *op = static_cast<vtkMolecule *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double tempr = (ap.IsBound() ?
      op->GetBondLength(temp0) :
      op->vtkMolecule::GetBondLength(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMolecule_GetAtomicPositionArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAtomicPositionArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMolecule *op = static_cast<vtkMolecule *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPoints *tempr = (ap.IsBound() ?
      op->GetAtomicPositionArray() :
      op->vtkMolecule::GetAtomicPositionArray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMolecule_GetAtomicNumberArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAtomicNumberArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMolecule *op = static_cast<vtkMolecule *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkUnsignedShortArray *tempr = (ap.IsBound() ?
      op->GetAtomicNumberArray() :
      op->vtkMolecule::GetAtomicNumberArray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMolecule_GetBondOrdersArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBondOrdersArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMolecule *op = static_cast<vtkMolecule *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkUnsignedShortArray *tempr = (ap.IsBound() ?
      op->GetBondOrdersArray() :
      op->vtkMolecule::GetBondOrdersArray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMolecule_GetElectronicData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetElectronicData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMolecule *op = static_cast<vtkMolecule *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractElectronicData *tempr = (ap.IsBound() ?
      op->GetElectronicData() :
      op->vtkMolecule::GetElectronicData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMolecule_SetElectronicData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetElectronicData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMolecule *op = static_cast<vtkMolecule *>(vp);

  vtkAbstractElectronicData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractElectronicData"))
  {
    if (ap.IsBound())
    {
      op->SetElectronicData(temp0);
    }
    else
    {
      op->vtkMolecule::SetElectronicData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMolecule_CheckedShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CheckedShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMolecule *op = static_cast<vtkMolecule *>(vp);

  vtkGraph *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkGraph"))
  {
    bool tempr = (ap.IsBound() ?
      op->CheckedShallowCopy(temp0) :
      op->vtkMolecule::CheckedShallowCopy(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMolecule_CheckedDeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CheckedDeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMolecule *op = static_cast<vtkMolecule *>(vp);

  vtkGraph *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkGraph"))
  {
    bool tempr = (ap.IsBound() ?
      op->CheckedDeepCopy(temp0) :
      op->vtkMolecule::CheckedDeepCopy(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMolecule_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMolecule *op = static_cast<vtkMolecule *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->ShallowCopy(temp0);
    }
    else
    {
      op->vtkMolecule::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMolecule_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMolecule *op = static_cast<vtkMolecule *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->DeepCopy(temp0);
    }
    else
    {
      op->vtkMolecule::DeepCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMolecule_ShallowCopyStructure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopyStructure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMolecule *op = static_cast<vtkMolecule *>(vp);

  vtkMolecule *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMolecule"))
  {
    if (ap.IsBound())
    {
      op->ShallowCopyStructure(temp0);
    }
    else
    {
      op->vtkMolecule::ShallowCopyStructure(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMolecule_DeepCopyStructure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopyStructure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMolecule *op = static_cast<vtkMolecule *>(vp);

  vtkMolecule *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMolecule"))
  {
    if (ap.IsBound())
    {
      op->DeepCopyStructure(temp0);
    }
    else
    {
      op->vtkMolecule::DeepCopyStructure(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMolecule_ShallowCopyAttributes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopyAttributes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMolecule *op = static_cast<vtkMolecule *>(vp);

  vtkMolecule *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMolecule"))
  {
    if (ap.IsBound())
    {
      op->ShallowCopyAttributes(temp0);
    }
    else
    {
      op->vtkMolecule::ShallowCopyAttributes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMolecule_DeepCopyAttributes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopyAttributes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMolecule *op = static_cast<vtkMolecule *>(vp);

  vtkMolecule *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMolecule"))
  {
    if (ap.IsBound())
    {
      op->DeepCopyAttributes(temp0);
    }
    else
    {
      op->vtkMolecule::DeepCopyAttributes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMolecule_GetPlaneFromBond_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetPlaneFromBond");

  vtkBond *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  vtkVector3f *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  vtkPlane *temp2 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkBond") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkVector3f") &&
      ap.GetVTKObject(temp2, "vtkPlane"))
  {
    bool tempr = vtkMolecule::GetPlaneFromBond(*temp0, *temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);
  Py_XDECREF(pobj1);

  return result;
}

static PyObject *
PyvtkMolecule_GetPlaneFromBond_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetPlaneFromBond");

  vtkAtom *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  vtkAtom *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  vtkVector3f *temp2 = nullptr;
  PyObject *pobj2 = nullptr;
  vtkPlane *temp3 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(4) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkAtom") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkAtom") &&
      ap.GetSpecialObject(temp2, pobj2, "vtkVector3f") &&
      ap.GetVTKObject(temp3, "vtkPlane"))
  {
    bool tempr = vtkMolecule::GetPlaneFromBond(*temp0, *temp1, *temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);
  Py_XDECREF(pobj1);
  Py_XDECREF(pobj2);

  return result;
}

static PyObject *
PyvtkMolecule_GetPlaneFromBond(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 3:
      return PyvtkMolecule_GetPlaneFromBond_s1(self, args);
    case 4:
      return PyvtkMolecule_GetPlaneFromBond_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetPlaneFromBond");
  return nullptr;
}



static PyObject *
PyvtkMolecule_HasLattice(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasLattice");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMolecule *op = static_cast<vtkMolecule *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasLattice() :
      op->vtkMolecule::HasLattice());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMolecule_ClearLattice(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearLattice");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMolecule *op = static_cast<vtkMolecule *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearLattice();
    }
    else
    {
      op->vtkMolecule::ClearLattice();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMolecule_SetLattice_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLattice");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMolecule *op = static_cast<vtkMolecule *>(vp);

  vtkMatrix3x3 *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix3x3"))
  {
    if (ap.IsBound())
    {
      op->SetLattice(temp0);
    }
    else
    {
      op->vtkMolecule::SetLattice(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMolecule_SetLattice_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLattice");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMolecule *op = static_cast<vtkMolecule *>(vp);

  vtkVector3d *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  vtkVector3d *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  vtkVector3d *temp2 = nullptr;
  PyObject *pobj2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector3d") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkVector3d") &&
      ap.GetSpecialObject(temp2, pobj2, "vtkVector3d"))
  {
    if (ap.IsBound())
    {
      op->SetLattice(*temp0, *temp1, *temp2);
    }
    else
    {
      op->vtkMolecule::SetLattice(*temp0, *temp1, *temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);
  Py_XDECREF(pobj1);
  Py_XDECREF(pobj2);

  return result;
}

static PyObject *
PyvtkMolecule_SetLattice(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkMolecule_SetLattice_s1(self, args);
    case 3:
      return PyvtkMolecule_SetLattice_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetLattice");
  return nullptr;
}



static PyObject *
PyvtkMolecule_GetLattice_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLattice");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMolecule *op = static_cast<vtkMolecule *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMatrix3x3 *tempr = (ap.IsBound() ?
      op->GetLattice() :
      op->vtkMolecule::GetLattice());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMolecule_GetLattice_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLattice");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMolecule *op = static_cast<vtkMolecule *>(vp);

  vtkVector3d *temp0 = nullptr;
  vtkVector3d *temp1 = nullptr;
  vtkVector3d *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetSpecialObject(temp0, "vtkVector3d") &&
      ap.GetSpecialObject(temp1, "vtkVector3d") &&
      ap.GetSpecialObject(temp2, "vtkVector3d"))
  {
    if (ap.IsBound())
    {
      op->GetLattice(*temp0, *temp1, *temp2);
    }
    else
    {
      op->vtkMolecule::GetLattice(*temp0, *temp1, *temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMolecule_GetLattice_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLattice");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMolecule *op = static_cast<vtkMolecule *>(vp);

  vtkVector3d *temp0 = nullptr;
  vtkVector3d *temp1 = nullptr;
  vtkVector3d *temp2 = nullptr;
  vtkVector3d *temp3 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetSpecialObject(temp0, "vtkVector3d") &&
      ap.GetSpecialObject(temp1, "vtkVector3d") &&
      ap.GetSpecialObject(temp2, "vtkVector3d") &&
      ap.GetSpecialObject(temp3, "vtkVector3d"))
  {
    if (ap.IsBound())
    {
      op->GetLattice(*temp0, *temp1, *temp2, *temp3);
    }
    else
    {
      op->vtkMolecule::GetLattice(*temp0, *temp1, *temp2, *temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMolecule_GetLattice(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkMolecule_GetLattice_s1(self, args);
    case 3:
      return PyvtkMolecule_GetLattice_s2(self, args);
    case 4:
      return PyvtkMolecule_GetLattice_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetLattice");
  return nullptr;
}



static PyObject *
PyvtkMolecule_GetLatticeOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLatticeOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMolecule *op = static_cast<vtkMolecule *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkVector3d tempr = (ap.IsBound() ?
      op->GetLatticeOrigin() :
      op->vtkMolecule::GetLatticeOrigin());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVector3d");
    }
  }

  return result;
}


static PyObject *
PyvtkMolecule_SetLatticeOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLatticeOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMolecule *op = static_cast<vtkMolecule *>(vp);

  vtkVector3d *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector3d"))
  {
    if (ap.IsBound())
    {
      op->SetLatticeOrigin(*temp0);
    }
    else
    {
      op->vtkMolecule::SetLatticeOrigin(*temp0);
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
PyvtkMolecule_GetAtomGhostArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAtomGhostArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMolecule *op = static_cast<vtkMolecule *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkUnsignedCharArray *tempr = (ap.IsBound() ?
      op->GetAtomGhostArray() :
      op->vtkMolecule::GetAtomGhostArray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMolecule_AllocateAtomGhostArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllocateAtomGhostArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMolecule *op = static_cast<vtkMolecule *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AllocateAtomGhostArray();
    }
    else
    {
      op->vtkMolecule::AllocateAtomGhostArray();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMolecule_GetBondGhostArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBondGhostArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMolecule *op = static_cast<vtkMolecule *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkUnsignedCharArray *tempr = (ap.IsBound() ?
      op->GetBondGhostArray() :
      op->vtkMolecule::GetBondGhostArray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMolecule_AllocateBondGhostArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllocateBondGhostArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMolecule *op = static_cast<vtkMolecule *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AllocateBondGhostArray();
    }
    else
    {
      op->vtkMolecule::AllocateBondGhostArray();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMolecule_GetData_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
  {
    vtkMolecule *tempr = vtkMolecule::GetData(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMolecule_GetData_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformationVector *temp0 = nullptr;
  int temp1 = 0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkInformationVector") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    vtkMolecule *tempr = vtkMolecule::GetData(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMolecule_GetData_Methods[] = {
  {nullptr, PyvtkMolecule_GetData_s1, METH_VARARGS | METH_STATIC,
   "V *vtkInformation"},
  {nullptr, PyvtkMolecule_GetData_s2, METH_VARARGS | METH_STATIC,
   "V|i *vtkInformationVector"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkMolecule_GetData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMolecule_GetData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 2:
      return PyvtkMolecule_GetData_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetData");
  return nullptr;
}



static PyObject *
PyvtkMolecule_GetAtomData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAtomData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMolecule *op = static_cast<vtkMolecule *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataSetAttributes *tempr = (ap.IsBound() ?
      op->GetAtomData() :
      op->vtkMolecule::GetAtomData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMolecule_GetBondData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBondData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMolecule *op = static_cast<vtkMolecule *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataSetAttributes *tempr = (ap.IsBound() ?
      op->GetBondData() :
      op->vtkMolecule::GetBondData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMolecule_GetBondId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBondId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMolecule *op = static_cast<vtkMolecule *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetBondId(temp0, temp1) :
      op->vtkMolecule::GetBondId(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMolecule_SetAtomicNumberArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAtomicNumberArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMolecule *op = static_cast<vtkMolecule *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAtomicNumberArrayName(temp0);
    }
    else
    {
      op->vtkMolecule::SetAtomicNumberArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMolecule_GetAtomicNumberArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAtomicNumberArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMolecule *op = static_cast<vtkMolecule *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetAtomicNumberArrayName() :
      op->vtkMolecule::GetAtomicNumberArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMolecule_SetBondOrdersArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBondOrdersArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMolecule *op = static_cast<vtkMolecule *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBondOrdersArrayName(temp0);
    }
    else
    {
      op->vtkMolecule::SetBondOrdersArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMolecule_GetBondOrdersArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBondOrdersArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMolecule *op = static_cast<vtkMolecule *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetBondOrdersArrayName() :
      op->vtkMolecule::GetBondOrdersArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMolecule_Methods[] = {
  {"IsTypeOf", PyvtkMolecule_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMolecule_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMolecule_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkMolecule\nC++: static vtkMolecule *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMolecule_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkMolecule\nC++: vtkMolecule *NewInstance()\n\n"},
  {"Initialize", PyvtkMolecule_Initialize, METH_VARARGS,
   "V.Initialize()\nC++: void Initialize() override;\nV.Initialize(vtkPoints, vtkDataArray, vtkDataSetAttributes) -> int\nC++: int Initialize(vtkPoints *atomPositions,\n    vtkDataArray *atomicNumberArray,\n    vtkDataSetAttributes *atomData)\nV.Initialize(vtkPoints, vtkDataSetAttributes) -> int\nC++: int Initialize(vtkPoints *atomPositions,\n    vtkDataSetAttributes *atomData)\nV.Initialize(vtkMolecule) -> int\nC++: int Initialize(vtkMolecule *molecule)\n\nInitialize to an empty graph.\n"},
  {"GetDataObjectType", PyvtkMolecule_GetDataObjectType, METH_VARARGS,
   "V.GetDataObjectType() -> int\nC++: int GetDataObjectType() override;\n\nReturn what type of dataset this is.\n"},
  {"AppendAtom", PyvtkMolecule_AppendAtom, METH_VARARGS,
   "V.AppendAtom() -> vtkAtom\nC++: vtkAtom AppendAtom()\nV.AppendAtom(int, vtkVector3f) -> vtkAtom\nC++: vtkAtom AppendAtom(unsigned short atomicNumber,\n    const vtkVector3f &pos)\nV.AppendAtom(int, float, float, float) -> vtkAtom\nC++: vtkAtom AppendAtom(unsigned short atomicNumber, double x,\n    double y, double z)\n\nAdd new atom with atomic number 0 (dummy atom) at origin. Return\na vtkAtom that refers to the new atom.\n"},
  {"GetAtom", PyvtkMolecule_GetAtom, METH_VARARGS,
   "V.GetAtom(int) -> vtkAtom\nC++: vtkAtom GetAtom(vtkIdType atomId)\n\nReturn a vtkAtom that refers to the atom with the specified id.\n"},
  {"GetNumberOfAtoms", PyvtkMolecule_GetNumberOfAtoms, METH_VARARGS,
   "V.GetNumberOfAtoms() -> int\nC++: vtkIdType GetNumberOfAtoms()\n\nReturn the number of atoms in the molecule.\n"},
  {"AppendBond", PyvtkMolecule_AppendBond, METH_VARARGS,
   "V.AppendBond(int, int, int) -> vtkBond\nC++: vtkBond AppendBond(vtkIdType atom1, vtkIdType atom2,\n    unsigned short order=1)\nV.AppendBond(vtkAtom, vtkAtom, int) -> vtkBond\nC++: vtkBond AppendBond(const vtkAtom &atom1,\n    const vtkAtom &atom2, unsigned short order=1)\n\nAdd a bond between the specified atoms, optionally setting the\nbond order (default: 1). Return a vtkBond object referring to the\nnew bond.\n"},
  {"GetBond", PyvtkMolecule_GetBond, METH_VARARGS,
   "V.GetBond(int) -> vtkBond\nC++: vtkBond GetBond(vtkIdType bondId)\n\nReturn a vtkAtom that refers to the bond with the specified id.\n"},
  {"GetNumberOfBonds", PyvtkMolecule_GetNumberOfBonds, METH_VARARGS,
   "V.GetNumberOfBonds() -> int\nC++: vtkIdType GetNumberOfBonds()\n\nReturn the number of bonds in the molecule.\n"},
  {"GetAtomAtomicNumber", PyvtkMolecule_GetAtomAtomicNumber, METH_VARARGS,
   "V.GetAtomAtomicNumber(int) -> int\nC++: unsigned short GetAtomAtomicNumber(vtkIdType atomId)\n\nReturn the atomic number of the atom with the specified id.\n"},
  {"SetAtomAtomicNumber", PyvtkMolecule_SetAtomAtomicNumber, METH_VARARGS,
   "V.SetAtomAtomicNumber(int, int)\nC++: void SetAtomAtomicNumber(vtkIdType atomId,\n    unsigned short atomicNum)\n\nSet the atomic number of the atom with the specified id.\n"},
  {"SetAtomPosition", PyvtkMolecule_SetAtomPosition, METH_VARARGS,
   "V.SetAtomPosition(int, vtkVector3f)\nC++: void SetAtomPosition(vtkIdType atomId,\n    const vtkVector3f &pos)\nV.SetAtomPosition(int, float, float, float)\nC++: void SetAtomPosition(vtkIdType atomId, double x, double y,\n    double z)\n\nSet the position of the atom with the specified id.\n"},
  {"GetAtomPosition", PyvtkMolecule_GetAtomPosition, METH_VARARGS,
   "V.GetAtomPosition(int) -> vtkVector3f\nC++: vtkVector3f GetAtomPosition(vtkIdType atomId)\nV.GetAtomPosition(int, [float, float, float])\nC++: void GetAtomPosition(vtkIdType atomId, float pos[3])\n\nGet the position of the atom with the specified id.\n"},
  {"SetBondOrder", PyvtkMolecule_SetBondOrder, METH_VARARGS,
   "V.SetBondOrder(int, int)\nC++: void SetBondOrder(vtkIdType bondId, unsigned short order)\n\nGet/Set the bond order of the bond with the specified id\n"},
  {"GetBondOrder", PyvtkMolecule_GetBondOrder, METH_VARARGS,
   "V.GetBondOrder(int) -> int\nC++: unsigned short GetBondOrder(vtkIdType bondId)\n\nGet/Set the bond order of the bond with the specified id\n"},
  {"GetBondLength", PyvtkMolecule_GetBondLength, METH_VARARGS,
   "V.GetBondLength(int) -> float\nC++: double GetBondLength(vtkIdType bondId)\n\nGet the bond length of the bond with the specified id\n\n*\n\note If the associated vtkBond object is already available,\n* vtkBond::GetBondLength is potentially much faster than this\n* function, as a list of all bonds may need to be constructed to\n* locate the appropriate bond.\n* \\sa UpdateBondList()\n"},
  {"GetAtomicPositionArray", PyvtkMolecule_GetAtomicPositionArray, METH_VARARGS,
   "V.GetAtomicPositionArray() -> vtkPoints\nC++: vtkPoints *GetAtomicPositionArray()\n\nAccess the raw arrays used in this vtkMolecule instance\n"},
  {"GetAtomicNumberArray", PyvtkMolecule_GetAtomicNumberArray, METH_VARARGS,
   "V.GetAtomicNumberArray() -> vtkUnsignedShortArray\nC++: vtkUnsignedShortArray *GetAtomicNumberArray()\n\nAccess the raw arrays used in this vtkMolecule instance\n"},
  {"GetBondOrdersArray", PyvtkMolecule_GetBondOrdersArray, METH_VARARGS,
   "V.GetBondOrdersArray() -> vtkUnsignedShortArray\nC++: vtkUnsignedShortArray *GetBondOrdersArray()\n\nAccess the raw arrays used in this vtkMolecule instance\n"},
  {"GetElectronicData", PyvtkMolecule_GetElectronicData, METH_VARARGS,
   "V.GetElectronicData() -> vtkAbstractElectronicData\nC++: virtual vtkAbstractElectronicData *GetElectronicData()\n\nSet/Get the AbstractElectronicData-subclassed object for this\nmolecule.\n"},
  {"SetElectronicData", PyvtkMolecule_SetElectronicData, METH_VARARGS,
   "V.SetElectronicData(vtkAbstractElectronicData)\nC++: virtual void SetElectronicData(vtkAbstractElectronicData *)\n\nSet/Get the AbstractElectronicData-subclassed object for this\nmolecule.\n"},
  {"CheckedShallowCopy", PyvtkMolecule_CheckedShallowCopy, METH_VARARGS,
   "V.CheckedShallowCopy(vtkGraph) -> bool\nC++: bool CheckedShallowCopy(vtkGraph *g) override;\n\nPerforms the same operation as ShallowCopy(), but instead of\nreporting an error for an incompatible graph, returns false.\n"},
  {"CheckedDeepCopy", PyvtkMolecule_CheckedDeepCopy, METH_VARARGS,
   "V.CheckedDeepCopy(vtkGraph) -> bool\nC++: bool CheckedDeepCopy(vtkGraph *g) override;\n\nPerforms the same operation as DeepCopy(), but instead of\nreporting an error for an incompatible graph, returns false.\n"},
  {"ShallowCopy", PyvtkMolecule_ShallowCopy, METH_VARARGS,
   "V.ShallowCopy(vtkDataObject)\nC++: void ShallowCopy(vtkDataObject *obj) override;\n\nShallow copies the data object into this molecule.\n"},
  {"DeepCopy", PyvtkMolecule_DeepCopy, METH_VARARGS,
   "V.DeepCopy(vtkDataObject)\nC++: void DeepCopy(vtkDataObject *obj) override;\n\nDeep copies the data object into this molecule.\n"},
  {"ShallowCopyStructure", PyvtkMolecule_ShallowCopyStructure, METH_VARARGS,
   "V.ShallowCopyStructure(vtkMolecule)\nC++: virtual void ShallowCopyStructure(vtkMolecule *m)\n\nShallow copies the atoms and bonds from m into this.\n"},
  {"DeepCopyStructure", PyvtkMolecule_DeepCopyStructure, METH_VARARGS,
   "V.DeepCopyStructure(vtkMolecule)\nC++: virtual void DeepCopyStructure(vtkMolecule *m)\n\nDeep copies the atoms and bonds from m into this.\n"},
  {"ShallowCopyAttributes", PyvtkMolecule_ShallowCopyAttributes, METH_VARARGS,
   "V.ShallowCopyAttributes(vtkMolecule)\nC++: virtual void ShallowCopyAttributes(vtkMolecule *m)\n\nShallow copies attributes (i.e. everything besides atoms and\nbonds) fromm into this.\n"},
  {"DeepCopyAttributes", PyvtkMolecule_DeepCopyAttributes, METH_VARARGS,
   "V.DeepCopyAttributes(vtkMolecule)\nC++: virtual void DeepCopyAttributes(vtkMolecule *m)\n\nDeep copies attributes (i.e. everything besides atoms and bonds)\nfromm into this.\n"},
  {"GetPlaneFromBond", PyvtkMolecule_GetPlaneFromBond, METH_VARARGS,
   "V.GetPlaneFromBond(vtkBond, vtkVector3f, vtkPlane) -> bool\nC++: static bool GetPlaneFromBond(const vtkBond &bond,\n    const vtkVector3f &normal, vtkPlane *plane)\nV.GetPlaneFromBond(vtkAtom, vtkAtom, vtkVector3f, vtkPlane)\n    -> bool\nC++: static bool GetPlaneFromBond(const vtkAtom &atom1,\n    const vtkAtom &atom2, const vtkVector3f &normal,\n    vtkPlane *plane)\n\nObtain the plane that passes through the indicated bond with the\ngiven normal. If the plane is set successfully, the function\nreturns true.\n\n* If the normal is not orthogonal to the bond, a new normal will\n  be\n* constructed in such a way that the plane will be orthogonal to\n* the plane spanned by the bond vector and the input normal\n  vector.\n\n* This ensures that the plane passes through the bond, and the\n* normal is more of a \"hint\" indicating the orientation of the\n  plane.\n\n* The new normal (n) is defined as the input normal vector (n_i)\n  minus\n* the projection of itself (proj[n_i]_v) onto the bond vector\n  (v):\n\n* \n * v ^\n * |  n = (n_i - proj[n_j]_v)\n * proj[n_i]_v ^  |----x\n * |  |   /\n * |  |  / n_i\n * |  | /\n * |  |/\n * \n\n* If n_i is parallel to v, a warning will be printed and no plane\nwill be\n* added. Obviously, n_i must not be parallel to v.\n"},
  {"HasLattice", PyvtkMolecule_HasLattice, METH_VARARGS,
   "V.HasLattice() -> bool\nC++: bool HasLattice()\n\nReturn true if a unit cell lattice is defined.\n"},
  {"ClearLattice", PyvtkMolecule_ClearLattice, METH_VARARGS,
   "V.ClearLattice()\nC++: void ClearLattice()\n\nRemove any unit cell lattice information from the molecule.\n"},
  {"SetLattice", PyvtkMolecule_SetLattice, METH_VARARGS,
   "V.SetLattice(vtkMatrix3x3)\nC++: void SetLattice(vtkMatrix3x3 *matrix)\nV.SetLattice(vtkVector3d, vtkVector3d, vtkVector3d)\nC++: void SetLattice(const vtkVector3d &a, const vtkVector3d &b,\n    const vtkVector3d &c)\n\nThe unit cell vectors. The matrix is stored using a row-major\nlayout, with the vectors encoded as columns.\n"},
  {"GetLattice", PyvtkMolecule_GetLattice, METH_VARARGS,
   "V.GetLattice() -> vtkMatrix3x3\nC++: vtkMatrix3x3 *GetLattice()\nV.GetLattice(vtkVector3d, vtkVector3d, vtkVector3d)\nC++: void GetLattice(vtkVector3d &a, vtkVector3d &b,\n    vtkVector3d &c)\nV.GetLattice(vtkVector3d, vtkVector3d, vtkVector3d, vtkVector3d)\nC++: void GetLattice(vtkVector3d &a, vtkVector3d &b,\n    vtkVector3d &c, vtkVector3d &origin)\n\nGet the unit cell lattice vectors. The matrix is stored using a\nrow-major layout, with the vectors encoded as columns. Will\nreturn nullptr if no unit cell information is available.\n@sa GetLatticeOrigin\n"},
  {"GetLatticeOrigin", PyvtkMolecule_GetLatticeOrigin, METH_VARARGS,
   "V.GetLatticeOrigin() -> vtkVector3d\nC++: virtual vtkVector3d GetLatticeOrigin()\n\nGet the unit cell origin (for rendering purposes).\n"},
  {"SetLatticeOrigin", PyvtkMolecule_SetLatticeOrigin, METH_VARARGS,
   "V.SetLatticeOrigin(vtkVector3d)\nC++: virtual void SetLatticeOrigin(vtkVector3d _arg)\n\nGet the unit cell origin (for rendering purposes).\n"},
  {"GetAtomGhostArray", PyvtkMolecule_GetAtomGhostArray, METH_VARARGS,
   "V.GetAtomGhostArray() -> vtkUnsignedCharArray\nC++: vtkUnsignedCharArray *GetAtomGhostArray()\n\nGet the array that defines the ghost type of each atom.\n"},
  {"AllocateAtomGhostArray", PyvtkMolecule_AllocateAtomGhostArray, METH_VARARGS,
   "V.AllocateAtomGhostArray()\nC++: void AllocateAtomGhostArray()\n\nAllocate ghost array for atoms.\n"},
  {"GetBondGhostArray", PyvtkMolecule_GetBondGhostArray, METH_VARARGS,
   "V.GetBondGhostArray() -> vtkUnsignedCharArray\nC++: vtkUnsignedCharArray *GetBondGhostArray()\n\nGet the array that defines the ghost type of each bond.\n"},
  {"AllocateBondGhostArray", PyvtkMolecule_AllocateBondGhostArray, METH_VARARGS,
   "V.AllocateBondGhostArray()\nC++: void AllocateBondGhostArray()\n\nAllocate ghost array for bonds.\n"},
  {"GetData", PyvtkMolecule_GetData, METH_VARARGS,
   "V.GetData(vtkInformation) -> vtkMolecule\nC++: static vtkMolecule *GetData(vtkInformation *info)\nV.GetData(vtkInformationVector, int) -> vtkMolecule\nC++: static vtkMolecule *GetData(vtkInformationVector *v, int i=0)\n\nRetrieve a molecule from an information vector.\n"},
  {"GetAtomData", PyvtkMolecule_GetAtomData, METH_VARARGS,
   "V.GetAtomData() -> vtkDataSetAttributes\nC++: vtkDataSetAttributes *GetAtomData()\n\nReturn the VertexData of the underlying graph\n"},
  {"GetBondData", PyvtkMolecule_GetBondData, METH_VARARGS,
   "V.GetBondData() -> vtkDataSetAttributes\nC++: vtkDataSetAttributes *GetBondData()\n\nReturn the EdgeData of the underlying graph\n"},
  {"GetBondId", PyvtkMolecule_GetBondId, METH_VARARGS,
   "V.GetBondId(int, int) -> int\nC++: vtkIdType GetBondId(vtkIdType a, vtkIdType b)\n\nReturn the edge id from the underlying graph.\n"},
  {"SetAtomicNumberArrayName", PyvtkMolecule_SetAtomicNumberArrayName, METH_VARARGS,
   "V.SetAtomicNumberArrayName(string)\nC++: virtual void SetAtomicNumberArrayName(const char *_arg)\n\nGet/Set the atomic number array name.\n"},
  {"GetAtomicNumberArrayName", PyvtkMolecule_GetAtomicNumberArrayName, METH_VARARGS,
   "V.GetAtomicNumberArrayName() -> string\nC++: virtual char *GetAtomicNumberArrayName()\n\nGet/Set the atomic number array name.\n"},
  {"SetBondOrdersArrayName", PyvtkMolecule_SetBondOrdersArrayName, METH_VARARGS,
   "V.SetBondOrdersArrayName(string)\nC++: virtual void SetBondOrdersArrayName(const char *_arg)\n\nGet/Set the bond orders array name.\n"},
  {"GetBondOrdersArrayName", PyvtkMolecule_GetBondOrdersArrayName, METH_VARARGS,
   "V.GetBondOrdersArrayName() -> string\nC++: virtual char *GetBondOrdersArrayName()\n\nGet/Set the bond orders array name.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkMolecule_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonDataModelPython.vtkMolecule", // tp_name
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
  PyvtkMolecule_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMolecule_StaticNew()
{
  return vtkMolecule::New();
}

PyObject *PyvtkMolecule_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkMolecule_Type, PyvtkMolecule_Methods,
    "vtkMolecule",
 &PyvtkMolecule_StaticNew);

  PyTypeObject *pytype = &PyvtkMolecule_Type;

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

void PyVTKAddFile_vtkMolecule(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMolecule_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMolecule", o) != 0)
  {
    Py_DECREF(o);
  }

}

