// python wrapper for vtkPVXMLElement
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
#include "vtkPVXMLElement.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPVXMLElement(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPVXMLElement_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkPVXMLElement_Doc =
  "vtkPVXMLElement - This is used by vtkPVXMLParser to represent an XML\ndocument starting at the root element.\n\n"
  "Superclass: vtkObject\n\n"
;


static PyObject *
PyvtkPVXMLElement_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPVXMLElement::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVXMLElement_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXMLElement *op = static_cast<vtkPVXMLElement *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVXMLElement::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVXMLElement_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPVXMLElement *tempr = vtkPVXMLElement::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVXMLElement_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXMLElement *op = static_cast<vtkPVXMLElement *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVXMLElement *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVXMLElement::NewInstance());

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
PyvtkPVXMLElement_SetName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXMLElement *op = static_cast<vtkPVXMLElement *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetName(temp0);
    }
    else
    {
      op->vtkPVXMLElement::SetName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXMLElement_GetName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXMLElement *op = static_cast<vtkPVXMLElement *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetName() :
      op->vtkPVXMLElement::GetName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVXMLElement_GetId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXMLElement *op = static_cast<vtkPVXMLElement *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetId() :
      op->vtkPVXMLElement::GetId());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVXMLElement_GetAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXMLElement *op = static_cast<vtkPVXMLElement *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetAttribute(temp0) :
      op->vtkPVXMLElement::GetAttribute(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVXMLElement_GetAttributeOrEmpty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributeOrEmpty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXMLElement *op = static_cast<vtkPVXMLElement *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetAttributeOrEmpty(temp0) :
      op->vtkPVXMLElement::GetAttributeOrEmpty(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVXMLElement_GetAttributeOrDefault(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributeOrDefault");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXMLElement *op = static_cast<vtkPVXMLElement *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetAttributeOrDefault(temp0, temp1) :
      op->vtkPVXMLElement::GetAttributeOrDefault(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVXMLElement_GetCharacterData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCharacterData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXMLElement *op = static_cast<vtkPVXMLElement *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetCharacterData() :
      op->vtkPVXMLElement::GetCharacterData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVXMLElement_GetScalarAttribute_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXMLElement *op = static_cast<vtkPVXMLElement *>(vp);

  const char *temp0 = nullptr;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<int> store1(2*size1);
  int *temp1 = store1.Data();
  int *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->GetScalarAttribute(temp0, temp1) :
      op->vtkPVXMLElement::GetScalarAttribute(temp0, temp1));

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
PyvtkPVXMLElement_GetScalarAttribute_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXMLElement *op = static_cast<vtkPVXMLElement *>(vp);

  const char *temp0 = nullptr;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->GetScalarAttribute(temp0, temp1) :
      op->vtkPVXMLElement::GetScalarAttribute(temp0, temp1));

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
PyvtkPVXMLElement_GetScalarAttribute_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXMLElement *op = static_cast<vtkPVXMLElement *>(vp);

  const char *temp0 = nullptr;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<vtkIdType> store1(2*size1);
  vtkIdType *temp1 = store1.Data();
  vtkIdType *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->GetScalarAttribute(temp0, temp1) :
      op->vtkPVXMLElement::GetScalarAttribute(temp0, temp1));

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

static PyMethodDef PyvtkPVXMLElement_GetScalarAttribute_Methods[] = {
  {nullptr, PyvtkPVXMLElement_GetScalarAttribute_s1, METH_VARARGS,
   "@zP *i"},
  {nullptr, PyvtkPVXMLElement_GetScalarAttribute_s2, METH_VARARGS,
   "@zP *d"},
  {nullptr, PyvtkPVXMLElement_GetScalarAttribute_s3, METH_VARARGS,
   "@zP *k"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkPVXMLElement_GetScalarAttribute(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkPVXMLElement_GetScalarAttribute_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetScalarAttribute");
  return nullptr;
}



static PyObject *
PyvtkPVXMLElement_GetVectorAttribute_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXMLElement *op = static_cast<vtkPVXMLElement *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<int> store2(2*size2);
  int *temp2 = store2.Data();
  int *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2))
  {
    ap.Save(temp2, save2, size2);

    int tempr = (ap.IsBound() ?
      op->GetVectorAttribute(temp0, temp1, temp2) :
      op->vtkPVXMLElement::GetVectorAttribute(temp0, temp1, temp2));

    if (ap.HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPVXMLElement_GetVectorAttribute_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXMLElement *op = static_cast<vtkPVXMLElement *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<double> store2(2*size2);
  double *temp2 = store2.Data();
  double *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2))
  {
    ap.Save(temp2, save2, size2);

    int tempr = (ap.IsBound() ?
      op->GetVectorAttribute(temp0, temp1, temp2) :
      op->vtkPVXMLElement::GetVectorAttribute(temp0, temp1, temp2));

    if (ap.HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPVXMLElement_GetVectorAttribute_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXMLElement *op = static_cast<vtkPVXMLElement *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<vtkIdType> store2(2*size2);
  vtkIdType *temp2 = store2.Data();
  vtkIdType *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2))
  {
    ap.Save(temp2, save2, size2);

    int tempr = (ap.IsBound() ?
      op->GetVectorAttribute(temp0, temp1, temp2) :
      op->vtkPVXMLElement::GetVectorAttribute(temp0, temp1, temp2));

    if (ap.HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPVXMLElement_GetVectorAttribute_Methods[] = {
  {nullptr, PyvtkPVXMLElement_GetVectorAttribute_s1, METH_VARARGS,
   "@ziP *i"},
  {nullptr, PyvtkPVXMLElement_GetVectorAttribute_s2, METH_VARARGS,
   "@ziP *d"},
  {nullptr, PyvtkPVXMLElement_GetVectorAttribute_s3, METH_VARARGS,
   "@ziP *k"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkPVXMLElement_GetVectorAttribute(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkPVXMLElement_GetVectorAttribute_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetVectorAttribute");
  return nullptr;
}



static PyObject *
PyvtkPVXMLElement_GetCharacterDataAsVector_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCharacterDataAsVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXMLElement *op = static_cast<vtkPVXMLElement *>(vp);

  int temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<int> store1(2*size1);
  int *temp1 = store1.Data();
  int *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->GetCharacterDataAsVector(temp0, temp1) :
      op->vtkPVXMLElement::GetCharacterDataAsVector(temp0, temp1));

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
PyvtkPVXMLElement_GetCharacterDataAsVector_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCharacterDataAsVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXMLElement *op = static_cast<vtkPVXMLElement *>(vp);

  int temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->GetCharacterDataAsVector(temp0, temp1) :
      op->vtkPVXMLElement::GetCharacterDataAsVector(temp0, temp1));

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
PyvtkPVXMLElement_GetCharacterDataAsVector_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCharacterDataAsVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXMLElement *op = static_cast<vtkPVXMLElement *>(vp);

  int temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<vtkIdType> store1(2*size1);
  vtkIdType *temp1 = store1.Data();
  vtkIdType *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->GetCharacterDataAsVector(temp0, temp1) :
      op->vtkPVXMLElement::GetCharacterDataAsVector(temp0, temp1));

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

static PyMethodDef PyvtkPVXMLElement_GetCharacterDataAsVector_Methods[] = {
  {nullptr, PyvtkPVXMLElement_GetCharacterDataAsVector_s1, METH_VARARGS,
   "@iP *i"},
  {nullptr, PyvtkPVXMLElement_GetCharacterDataAsVector_s2, METH_VARARGS,
   "@iP *d"},
  {nullptr, PyvtkPVXMLElement_GetCharacterDataAsVector_s3, METH_VARARGS,
   "@iP *k"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkPVXMLElement_GetCharacterDataAsVector(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkPVXMLElement_GetCharacterDataAsVector_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetCharacterDataAsVector");
  return nullptr;
}



static PyObject *
PyvtkPVXMLElement_GetParent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXMLElement *op = static_cast<vtkPVXMLElement *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVXMLElement *tempr = (ap.IsBound() ?
      op->GetParent() :
      op->vtkPVXMLElement::GetParent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVXMLElement_GetNumberOfNestedElements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfNestedElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXMLElement *op = static_cast<vtkPVXMLElement *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfNestedElements() :
      op->vtkPVXMLElement::GetNumberOfNestedElements());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVXMLElement_GetNestedElement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNestedElement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXMLElement *op = static_cast<vtkPVXMLElement *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkPVXMLElement *tempr = (ap.IsBound() ?
      op->GetNestedElement(temp0) :
      op->vtkPVXMLElement::GetNestedElement(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVXMLElement_FindNestedElement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindNestedElement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXMLElement *op = static_cast<vtkPVXMLElement *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkPVXMLElement *tempr = (ap.IsBound() ?
      op->FindNestedElement(temp0) :
      op->vtkPVXMLElement::FindNestedElement(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVXMLElement_FindNestedElementByName_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindNestedElementByName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXMLElement *op = static_cast<vtkPVXMLElement *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkPVXMLElement *tempr = (ap.IsBound() ?
      op->FindNestedElementByName(temp0) :
      op->vtkPVXMLElement::FindNestedElementByName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPVXMLElement_FindNestedElementByName_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindNestedElementByName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXMLElement *op = static_cast<vtkPVXMLElement *>(vp);

  const char *temp0 = nullptr;
  vtkCollection *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkCollection"))
  {
    if (ap.IsBound())
    {
      op->FindNestedElementByName(temp0, temp1);
    }
    else
    {
      op->vtkPVXMLElement::FindNestedElementByName(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPVXMLElement_FindNestedElementByName(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkPVXMLElement_FindNestedElementByName_s1(self, args);
    case 2:
      return PyvtkPVXMLElement_FindNestedElementByName_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "FindNestedElementByName");
  return nullptr;
}



static PyObject *
PyvtkPVXMLElement_RemoveAllNestedElements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllNestedElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXMLElement *op = static_cast<vtkPVXMLElement *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllNestedElements();
    }
    else
    {
      op->vtkPVXMLElement::RemoveAllNestedElements();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXMLElement_RemoveNestedElement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveNestedElement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXMLElement *op = static_cast<vtkPVXMLElement *>(vp);

  vtkPVXMLElement *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVXMLElement"))
  {
    if (ap.IsBound())
    {
      op->RemoveNestedElement(temp0);
    }
    else
    {
      op->vtkPVXMLElement::RemoveNestedElement(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXMLElement_LookupElement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LookupElement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXMLElement *op = static_cast<vtkPVXMLElement *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkPVXMLElement *tempr = (ap.IsBound() ?
      op->LookupElement(temp0) :
      op->vtkPVXMLElement::LookupElement(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVXMLElement_AddAttribute_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXMLElement *op = static_cast<vtkPVXMLElement *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->AddAttribute(temp0, temp1);
    }
    else
    {
      op->vtkPVXMLElement::AddAttribute(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPVXMLElement_AddAttribute_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXMLElement *op = static_cast<vtkPVXMLElement *>(vp);

  const char *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->AddAttribute(temp0, temp1);
    }
    else
    {
      op->vtkPVXMLElement::AddAttribute(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPVXMLElement_AddAttribute_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXMLElement *op = static_cast<vtkPVXMLElement *>(vp);

  const char *temp0 = nullptr;
  double temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->AddAttribute(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPVXMLElement::AddAttribute(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPVXMLElement_AddAttribute_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXMLElement *op = static_cast<vtkPVXMLElement *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->AddAttribute(temp0, temp1);
    }
    else
    {
      op->vtkPVXMLElement::AddAttribute(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPVXMLElement_AddAttribute_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXMLElement *op = static_cast<vtkPVXMLElement *>(vp);

  const char *temp0 = nullptr;
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->AddAttribute(temp0, temp1);
    }
    else
    {
      op->vtkPVXMLElement::AddAttribute(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPVXMLElement_AddAttribute_Methods[] = {
  {nullptr, PyvtkPVXMLElement_AddAttribute_s1, METH_VARARGS,
   "@zz"},
  {nullptr, PyvtkPVXMLElement_AddAttribute_s2, METH_VARARGS,
   "@zd"},
  {nullptr, PyvtkPVXMLElement_AddAttribute_s4, METH_VARARGS,
   "@zi"},
  {nullptr, PyvtkPVXMLElement_AddAttribute_s5, METH_VARARGS,
   "@zk"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkPVXMLElement_AddAttribute(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkPVXMLElement_AddAttribute_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkPVXMLElement_AddAttribute_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "AddAttribute");
  return nullptr;
}



static PyObject *
PyvtkPVXMLElement_RemoveAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXMLElement *op = static_cast<vtkPVXMLElement *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RemoveAttribute(temp0);
    }
    else
    {
      op->vtkPVXMLElement::RemoveAttribute(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXMLElement_SetAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXMLElement *op = static_cast<vtkPVXMLElement *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetAttribute(temp0, temp1);
    }
    else
    {
      op->vtkPVXMLElement::SetAttribute(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXMLElement_AddNestedElement_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddNestedElement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXMLElement *op = static_cast<vtkPVXMLElement *>(vp);

  vtkPVXMLElement *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkPVXMLElement") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->AddNestedElement(temp0, temp1);
    }
    else
    {
      op->vtkPVXMLElement::AddNestedElement(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPVXMLElement_AddNestedElement_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddNestedElement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXMLElement *op = static_cast<vtkPVXMLElement *>(vp);

  vtkPVXMLElement *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVXMLElement"))
  {
    if (ap.IsBound())
    {
      op->AddNestedElement(temp0);
    }
    else
    {
      op->vtkPVXMLElement::AddNestedElement(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPVXMLElement_AddNestedElement(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkPVXMLElement_AddNestedElement_s1(self, args);
    case 1:
      return PyvtkPVXMLElement_AddNestedElement_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "AddNestedElement");
  return nullptr;
}



static PyObject *
PyvtkPVXMLElement_PrintXML(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PrintXML");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXMLElement *op = static_cast<vtkPVXMLElement *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PrintXML();
    }
    else
    {
      op->vtkPVXMLElement::PrintXML();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXMLElement_Merge(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Merge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXMLElement *op = static_cast<vtkPVXMLElement *>(vp);

  vtkPVXMLElement *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkPVXMLElement") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->Merge(temp0, temp1);
    }
    else
    {
      op->vtkPVXMLElement::Merge(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXMLElement_GetElementsByName_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetElementsByName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXMLElement *op = static_cast<vtkPVXMLElement *>(vp);

  const char *temp0 = nullptr;
  vtkCollection *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkCollection"))
  {
    if (ap.IsBound())
    {
      op->GetElementsByName(temp0, temp1);
    }
    else
    {
      op->vtkPVXMLElement::GetElementsByName(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPVXMLElement_GetElementsByName_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetElementsByName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXMLElement *op = static_cast<vtkPVXMLElement *>(vp);

  const char *temp0 = nullptr;
  vtkCollection *temp1 = nullptr;
  bool temp2 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkCollection") &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->GetElementsByName(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPVXMLElement::GetElementsByName(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPVXMLElement_GetElementsByName(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkPVXMLElement_GetElementsByName_s1(self, args);
    case 3:
      return PyvtkPVXMLElement_GetElementsByName_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetElementsByName");
  return nullptr;
}



static PyObject *
PyvtkPVXMLElement_Encode(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Encode");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkStdString tempr = vtkPVXMLElement::Encode(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVXMLElement_Equals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Equals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXMLElement *op = static_cast<vtkPVXMLElement *>(vp);

  vtkPVXMLElement *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVXMLElement"))
  {
    bool tempr = (ap.IsBound() ?
      op->Equals(temp0) :
      op->vtkPVXMLElement::Equals(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVXMLElement_CopyTo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyTo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXMLElement *op = static_cast<vtkPVXMLElement *>(vp);

  vtkPVXMLElement *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVXMLElement"))
  {
    if (ap.IsBound())
    {
      op->CopyTo(temp0);
    }
    else
    {
      op->vtkPVXMLElement::CopyTo(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVXMLElement_CopyAttributesTo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyAttributesTo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXMLElement *op = static_cast<vtkPVXMLElement *>(vp);

  vtkPVXMLElement *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVXMLElement"))
  {
    if (ap.IsBound())
    {
      op->CopyAttributesTo(temp0);
    }
    else
    {
      op->vtkPVXMLElement::CopyAttributesTo(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPVXMLElement_Methods[] = {
  {"IsTypeOf", PyvtkPVXMLElement_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPVXMLElement_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPVXMLElement_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPVXMLElement\nC++: static vtkPVXMLElement *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPVXMLElement_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPVXMLElement\nC++: vtkPVXMLElement *NewInstance()\n\n"},
  {"SetName", PyvtkPVXMLElement_SetName, METH_VARARGS,
   "V.SetName(string)\nC++: virtual void SetName(const char *_arg)\n\nSet/Get the name of the element.  This is its XML tag. (\n\\<Name/>).\n"},
  {"GetName", PyvtkPVXMLElement_GetName, METH_VARARGS,
   "V.GetName() -> string\nC++: virtual char *GetName()\n\nSet/Get the name of the element.  This is its XML tag. (\n\\<Name/>).\n"},
  {"GetId", PyvtkPVXMLElement_GetId, METH_VARARGS,
   "V.GetId() -> string\nC++: virtual char *GetId()\n\nGet the id of the element. This is assigned by the XML parser and\ncan be used as an identifier to an element.\n"},
  {"GetAttribute", PyvtkPVXMLElement_GetAttribute, METH_VARARGS,
   "V.GetAttribute(string) -> string\nC++: const char *GetAttribute(const char *name)\n\nGet the attribute with the given name.  If it doesn't exist,\nreturns NULL.\n"},
  {"GetAttributeOrEmpty", PyvtkPVXMLElement_GetAttributeOrEmpty, METH_VARARGS,
   "V.GetAttributeOrEmpty(string) -> string\nC++: const char *GetAttributeOrEmpty(const char *name)\n\nGet the attribute with the given name.  If it doesn't exist,\nreturns \"\".\n"},
  {"GetAttributeOrDefault", PyvtkPVXMLElement_GetAttributeOrDefault, METH_VARARGS,
   "V.GetAttributeOrDefault(string, string) -> string\nC++: const char *GetAttributeOrDefault(const char *name,\n    const char *notFound)\n\nGet the attribute with the given name. If it doesn't exist,\nreturns the provided notFound value.\n"},
  {"GetCharacterData", PyvtkPVXMLElement_GetCharacterData, METH_VARARGS,
   "V.GetCharacterData() -> string\nC++: const char *GetCharacterData()\n\nGet the character data for the element.\n"},
  {"GetScalarAttribute", PyvtkPVXMLElement_GetScalarAttribute, METH_VARARGS,
   "V.GetScalarAttribute(string, [int, ...]) -> int\nC++: int GetScalarAttribute(const char *name, int *value)\nV.GetScalarAttribute(string, [float, ...]) -> int\nC++: int GetScalarAttribute(const char *name, double *value)\nV.GetScalarAttribute(string, [int, ...]) -> int\nC++: int GetScalarAttribute(const char *name, vtkIdType *value)\n\nGet the attribute with the given name converted to a scalar\nvalue.  Returns whether value was extracted.\n"},
  {"GetVectorAttribute", PyvtkPVXMLElement_GetVectorAttribute, METH_VARARGS,
   "V.GetVectorAttribute(string, int, [int, ...]) -> int\nC++: int GetVectorAttribute(const char *name, int length,\n    int *value)\nV.GetVectorAttribute(string, int, [float, ...]) -> int\nC++: int GetVectorAttribute(const char *name, int length,\n    double *value)\nV.GetVectorAttribute(string, int, [int, ...]) -> int\nC++: int GetVectorAttribute(const char *name, int length,\n    vtkIdType *value)\n\nGet the attribute with the given name converted to a scalar\nvalue.  Returns length of vector read.\n"},
  {"GetCharacterDataAsVector", PyvtkPVXMLElement_GetCharacterDataAsVector, METH_VARARGS,
   "V.GetCharacterDataAsVector(int, [int, ...]) -> int\nC++: int GetCharacterDataAsVector(int length, int *value)\nV.GetCharacterDataAsVector(int, [float, ...]) -> int\nC++: int GetCharacterDataAsVector(int length, double *value)\nV.GetCharacterDataAsVector(int, [int, ...]) -> int\nC++: int GetCharacterDataAsVector(int length, vtkIdType *value)\n\nGet the character data converted to a scalar value.  Returns\nlength of vector read.\n"},
  {"GetParent", PyvtkPVXMLElement_GetParent, METH_VARARGS,
   "V.GetParent() -> vtkPVXMLElement\nC++: vtkPVXMLElement *GetParent()\n\nGet the parent of this element.\n"},
  {"GetNumberOfNestedElements", PyvtkPVXMLElement_GetNumberOfNestedElements, METH_VARARGS,
   "V.GetNumberOfNestedElements() -> int\nC++: unsigned int GetNumberOfNestedElements()\n\nGet the number of elements nested in this one.\n"},
  {"GetNestedElement", PyvtkPVXMLElement_GetNestedElement, METH_VARARGS,
   "V.GetNestedElement(int) -> vtkPVXMLElement\nC++: vtkPVXMLElement *GetNestedElement(unsigned int index)\n\nGet the element nested in this one at the given index.\n"},
  {"FindNestedElement", PyvtkPVXMLElement_FindNestedElement, METH_VARARGS,
   "V.FindNestedElement(string) -> vtkPVXMLElement\nC++: vtkPVXMLElement *FindNestedElement(const char *id)\n\nFind a nested element with the given id. Not that this searches\nonly the immediate children of this vtkPVXMLElement.\n"},
  {"FindNestedElementByName", PyvtkPVXMLElement_FindNestedElementByName, METH_VARARGS,
   "V.FindNestedElementByName(string) -> vtkPVXMLElement\nC++: vtkPVXMLElement *FindNestedElementByName(const char *name)\nV.FindNestedElementByName(string, vtkCollection)\nC++: void FindNestedElementByName(const char *name,\n    vtkCollection *elements)\n\nLocate a nested element with the given tag name.\n"},
  {"RemoveAllNestedElements", PyvtkPVXMLElement_RemoveAllNestedElements, METH_VARARGS,
   "V.RemoveAllNestedElements()\nC++: void RemoveAllNestedElements()\n\nRemoves all nested elements.\n"},
  {"RemoveNestedElement", PyvtkPVXMLElement_RemoveNestedElement, METH_VARARGS,
   "V.RemoveNestedElement(vtkPVXMLElement)\nC++: void RemoveNestedElement(vtkPVXMLElement *)\n\nRemove a particular element.\n"},
  {"LookupElement", PyvtkPVXMLElement_LookupElement, METH_VARARGS,
   "V.LookupElement(string) -> vtkPVXMLElement\nC++: vtkPVXMLElement *LookupElement(const char *id)\n\nLookup the element with the given id, starting at this scope.\n"},
  {"AddAttribute", PyvtkPVXMLElement_AddAttribute, METH_VARARGS,
   "V.AddAttribute(string, string)\nC++: void AddAttribute(const char *attrName,\n    const char *attrValue)\nV.AddAttribute(string, float)\nC++: void AddAttribute(const char *attrName, double attrValue)\nV.AddAttribute(string, float, int)\nC++: void AddAttribute(const char *attrName, double attrValue,\n    int precision)\nV.AddAttribute(string, int)\nC++: void AddAttribute(const char *attrName, int attrValue)\nV.AddAttribute(string, int)\nC++: void AddAttribute(const char *attrName, vtkIdType attrValue)\n\nGiven it's name and value, add an attribute.\n"},
  {"RemoveAttribute", PyvtkPVXMLElement_RemoveAttribute, METH_VARARGS,
   "V.RemoveAttribute(string)\nC++: void RemoveAttribute(const char *attrName)\n\nRemove the attribute from the current element\n"},
  {"SetAttribute", PyvtkPVXMLElement_SetAttribute, METH_VARARGS,
   "V.SetAttribute(string, string)\nC++: void SetAttribute(const char *attrName,\n    const char *attrValue)\n\nGiven it's name and value, set an attribute. If an attribute with\nthe given name already exists, it replaces the old attribute.\nchars that need to be XML escaped will be done so internally for\nexample \" will be converted to &quot;\n"},
  {"AddNestedElement", PyvtkPVXMLElement_AddNestedElement, METH_VARARGS,
   "V.AddNestedElement(vtkPVXMLElement, int)\nC++: void AddNestedElement(vtkPVXMLElement *element, int setPrent)\nV.AddNestedElement(vtkPVXMLElement)\nC++: void AddNestedElement(vtkPVXMLElement *element)\n\nAdd a sub-element. The parent element keeps a reference to\nsub-element. If setParent is true, the nested element's parent is\nset as this.\n"},
  {"PrintXML", PyvtkPVXMLElement_PrintXML, METH_VARARGS,
   "V.PrintXML()\nC++: void PrintXML()\n\nSerialize (as XML) in the given stream.\n"},
  {"Merge", PyvtkPVXMLElement_Merge, METH_VARARGS,
   "V.Merge(vtkPVXMLElement, string)\nC++: void Merge(vtkPVXMLElement *element,\n    const char *attributeName)\n\nMerges another element with this one, both having the same name.\nIf any attribute, character data or nested element exists in\nboth, the passed in one will override this one's.  If they don't\nexist, they'll be added.  If nested elements have the same names,\nthe optional attributeName maybe passed in as another criteria to\ndetermine what to merge in case of same names.\n"},
  {"GetElementsByName", PyvtkPVXMLElement_GetElementsByName, METH_VARARGS,
   "V.GetElementsByName(string, vtkCollection)\nC++: void GetElementsByName(const char *name,\n    vtkCollection *elements)\nV.GetElementsByName(string, vtkCollection, bool)\nC++: void GetElementsByName(const char *name,\n    vtkCollection *elements, bool recursively)\n\nSimilar to DOM sepecific getElementsByTagName(). Returns a list\nof vtkPVXMLElements with the given name in the order in which\nthey will be encountered in a preorder traversal of the sub-tree\nunder this node. The elements are populated in the vtkCollection\npassed as an argument.\n"},
  {"Encode", PyvtkPVXMLElement_Encode, METH_VARARGS,
   "V.Encode(string) -> string\nC++: static vtkStdString Encode(const char *plaintext)\n\nEncode a string.\n"},
  {"Equals", PyvtkPVXMLElement_Equals, METH_VARARGS,
   "V.Equals(vtkPVXMLElement) -> bool\nC++: bool Equals(vtkPVXMLElement *other)\n\nReturn true if the current object has the same content as the\nother. The comparison implementation is pretty weak in the mean\nthat we compare resulting XML string.\n"},
  {"CopyTo", PyvtkPVXMLElement_CopyTo, METH_VARARGS,
   "V.CopyTo(vtkPVXMLElement)\nC++: void CopyTo(vtkPVXMLElement *other)\n\nCopy the current XML element content into the provided one\n"},
  {"CopyAttributesTo", PyvtkPVXMLElement_CopyAttributesTo, METH_VARARGS,
   "V.CopyAttributesTo(vtkPVXMLElement)\nC++: void CopyAttributesTo(vtkPVXMLElement *other)\n\nCopy the attributes from current XML element content into the\nprovided one.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPVXMLElement_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVCommonPython.vtkPVXMLElement", // tp_name
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
  PyvtkPVXMLElement_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPVXMLElement_StaticNew()
{
  return vtkPVXMLElement::New();
}

PyObject *PyvtkPVXMLElement_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPVXMLElement_Type, PyvtkPVXMLElement_Methods,
    "vtkPVXMLElement",
 &PyvtkPVXMLElement_StaticNew);

  PyTypeObject *pytype = &PyvtkPVXMLElement_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkObject_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPVXMLElement(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPVXMLElement_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPVXMLElement", o) != 0)
  {
    Py_DECREF(o);
  }

}

