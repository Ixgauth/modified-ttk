// python wrapper for vtkXMLDataElement
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
#include "vtkXMLDataElement.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkXMLDataElement(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkXMLDataElement_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkXMLDataElement_Doc =
  "vtkXMLDataElement - Represents an XML element and those nested inside.\n\n"
  "Superclass: vtkObject\n\n"
  "vtkXMLDataElement is used by vtkXMLDataParser to represent an XML\n"
  "element.  It provides methods to access the element's attributes and\n"
  "nested elements in a convenient manner.  This allows easy traversal\n"
  "of an input XML file by vtkXMLReader and its subclasses.\n\n"
  "@sa\n"
  "vtkXMLDataParser\n\n";


static PyObject *
PyvtkXMLDataElement_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkXMLDataElement::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLDataElement_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataElement *op = static_cast<vtkXMLDataElement *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkXMLDataElement::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLDataElement_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkXMLDataElement *tempr = vtkXMLDataElement::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLDataElement_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataElement *op = static_cast<vtkXMLDataElement *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkXMLDataElement *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkXMLDataElement::NewInstance());

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
PyvtkXMLDataElement_GetName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataElement *op = static_cast<vtkXMLDataElement *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetName() :
      op->vtkXMLDataElement::GetName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLDataElement_SetName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataElement *op = static_cast<vtkXMLDataElement *>(vp);

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
      op->vtkXMLDataElement::SetName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLDataElement_GetId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataElement *op = static_cast<vtkXMLDataElement *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetId() :
      op->vtkXMLDataElement::GetId());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLDataElement_SetId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataElement *op = static_cast<vtkXMLDataElement *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetId(temp0);
    }
    else
    {
      op->vtkXMLDataElement::SetId(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLDataElement_GetAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataElement *op = static_cast<vtkXMLDataElement *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetAttribute(temp0) :
      op->vtkXMLDataElement::GetAttribute(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLDataElement_SetAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataElement *op = static_cast<vtkXMLDataElement *>(vp);

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
      op->vtkXMLDataElement::SetAttribute(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLDataElement_SetCharacterData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCharacterData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataElement *op = static_cast<vtkXMLDataElement *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetCharacterData(temp0, temp1);
    }
    else
    {
      op->vtkXMLDataElement::SetCharacterData(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLDataElement_AddCharacterData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddCharacterData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataElement *op = static_cast<vtkXMLDataElement *>(vp);

  const char *temp0 = nullptr;
  size_t temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->AddCharacterData(temp0, temp1);
    }
    else
    {
      op->vtkXMLDataElement::AddCharacterData(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLDataElement_GetCharacterData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCharacterData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataElement *op = static_cast<vtkXMLDataElement *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetCharacterData() :
      op->vtkXMLDataElement::GetCharacterData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLDataElement_GetScalarAttribute_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataElement *op = static_cast<vtkXMLDataElement *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->GetScalarAttribute(temp0, temp1) :
      op->vtkXMLDataElement::GetScalarAttribute(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkXMLDataElement_GetScalarAttribute_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataElement *op = static_cast<vtkXMLDataElement *>(vp);

  const char *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->GetScalarAttribute(temp0, temp1) :
      op->vtkXMLDataElement::GetScalarAttribute(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkXMLDataElement_GetScalarAttribute_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataElement *op = static_cast<vtkXMLDataElement *>(vp);

  const char *temp0 = nullptr;
  long temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->GetScalarAttribute(temp0, temp1) :
      op->vtkXMLDataElement::GetScalarAttribute(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkXMLDataElement_GetScalarAttribute_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataElement *op = static_cast<vtkXMLDataElement *>(vp);

  const char *temp0 = nullptr;
  long long temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->GetScalarAttribute(temp0, temp1) :
      op->vtkXMLDataElement::GetScalarAttribute(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkXMLDataElement_GetScalarAttribute_Methods[] = {
  {nullptr, PyvtkXMLDataElement_GetScalarAttribute_s1, METH_VARARGS,
   "@zi"},
  {nullptr, PyvtkXMLDataElement_GetScalarAttribute_s2, METH_VARARGS,
   "@zd"},
  {nullptr, PyvtkXMLDataElement_GetScalarAttribute_s3, METH_VARARGS,
   "@zl"},
  {nullptr, PyvtkXMLDataElement_GetScalarAttribute_s4, METH_VARARGS,
   "@zk"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkXMLDataElement_GetScalarAttribute(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkXMLDataElement_GetScalarAttribute_Methods;
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
PyvtkXMLDataElement_SetIntAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataElement *op = static_cast<vtkXMLDataElement *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetIntAttribute(temp0, temp1);
    }
    else
    {
      op->vtkXMLDataElement::SetIntAttribute(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLDataElement_SetFloatAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFloatAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataElement *op = static_cast<vtkXMLDataElement *>(vp);

  const char *temp0 = nullptr;
  float temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetFloatAttribute(temp0, temp1);
    }
    else
    {
      op->vtkXMLDataElement::SetFloatAttribute(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLDataElement_SetDoubleAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDoubleAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataElement *op = static_cast<vtkXMLDataElement *>(vp);

  const char *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetDoubleAttribute(temp0, temp1);
    }
    else
    {
      op->vtkXMLDataElement::SetDoubleAttribute(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLDataElement_SetUnsignedLongAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUnsignedLongAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataElement *op = static_cast<vtkXMLDataElement *>(vp);

  const char *temp0 = nullptr;
  unsigned long temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetUnsignedLongAttribute(temp0, temp1);
    }
    else
    {
      op->vtkXMLDataElement::SetUnsignedLongAttribute(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLDataElement_GetVectorAttribute_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataElement *op = static_cast<vtkXMLDataElement *>(vp);

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
      op->vtkXMLDataElement::GetVectorAttribute(temp0, temp1, temp2));

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
PyvtkXMLDataElement_GetVectorAttribute_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataElement *op = static_cast<vtkXMLDataElement *>(vp);

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
      op->vtkXMLDataElement::GetVectorAttribute(temp0, temp1, temp2));

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
PyvtkXMLDataElement_GetVectorAttribute_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataElement *op = static_cast<vtkXMLDataElement *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<long> store2(2*size2);
  long *temp2 = store2.Data();
  long *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2))
  {
    ap.Save(temp2, save2, size2);

    int tempr = (ap.IsBound() ?
      op->GetVectorAttribute(temp0, temp1, temp2) :
      op->vtkXMLDataElement::GetVectorAttribute(temp0, temp1, temp2));

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
PyvtkXMLDataElement_GetVectorAttribute_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataElement *op = static_cast<vtkXMLDataElement *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<long long> store2(2*size2);
  long long *temp2 = store2.Data();
  long long *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2))
  {
    ap.Save(temp2, save2, size2);

    int tempr = (ap.IsBound() ?
      op->GetVectorAttribute(temp0, temp1, temp2) :
      op->vtkXMLDataElement::GetVectorAttribute(temp0, temp1, temp2));

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

static PyMethodDef PyvtkXMLDataElement_GetVectorAttribute_Methods[] = {
  {nullptr, PyvtkXMLDataElement_GetVectorAttribute_s1, METH_VARARGS,
   "@ziP *i"},
  {nullptr, PyvtkXMLDataElement_GetVectorAttribute_s2, METH_VARARGS,
   "@ziP *d"},
  {nullptr, PyvtkXMLDataElement_GetVectorAttribute_s3, METH_VARARGS,
   "@ziP *l"},
  {nullptr, PyvtkXMLDataElement_GetVectorAttribute_s4, METH_VARARGS,
   "@ziP *k"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkXMLDataElement_GetVectorAttribute(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkXMLDataElement_GetVectorAttribute_Methods;
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
PyvtkXMLDataElement_SetVectorAttribute_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVectorAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataElement *op = static_cast<vtkXMLDataElement *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<int> store2(size2);
  int *temp2 = store2.Data();
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2))
  {
    if (ap.IsBound())
    {
      op->SetVectorAttribute(temp0, temp1, temp2);
    }
    else
    {
      op->vtkXMLDataElement::SetVectorAttribute(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkXMLDataElement_SetVectorAttribute_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVectorAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataElement *op = static_cast<vtkXMLDataElement *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<double> store2(size2);
  double *temp2 = store2.Data();
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2))
  {
    if (ap.IsBound())
    {
      op->SetVectorAttribute(temp0, temp1, temp2);
    }
    else
    {
      op->vtkXMLDataElement::SetVectorAttribute(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkXMLDataElement_SetVectorAttribute_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVectorAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataElement *op = static_cast<vtkXMLDataElement *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<unsigned long> store2(size2);
  unsigned long *temp2 = store2.Data();
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2))
  {
    if (ap.IsBound())
    {
      op->SetVectorAttribute(temp0, temp1, temp2);
    }
    else
    {
      op->vtkXMLDataElement::SetVectorAttribute(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkXMLDataElement_SetVectorAttribute_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVectorAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataElement *op = static_cast<vtkXMLDataElement *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<long long> store2(size2);
  long long *temp2 = store2.Data();
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2))
  {
    if (ap.IsBound())
    {
      op->SetVectorAttribute(temp0, temp1, temp2);
    }
    else
    {
      op->vtkXMLDataElement::SetVectorAttribute(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkXMLDataElement_SetVectorAttribute_Methods[] = {
  {nullptr, PyvtkXMLDataElement_SetVectorAttribute_s1, METH_VARARGS,
   "@ziP *i"},
  {nullptr, PyvtkXMLDataElement_SetVectorAttribute_s2, METH_VARARGS,
   "@ziP *d"},
  {nullptr, PyvtkXMLDataElement_SetVectorAttribute_s3, METH_VARARGS,
   "@ziP *L"},
  {nullptr, PyvtkXMLDataElement_SetVectorAttribute_s4, METH_VARARGS,
   "@ziP *k"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkXMLDataElement_SetVectorAttribute(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkXMLDataElement_SetVectorAttribute_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetVectorAttribute");
  return nullptr;
}



static PyObject *
PyvtkXMLDataElement_GetWordTypeAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWordTypeAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataElement *op = static_cast<vtkXMLDataElement *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->GetWordTypeAttribute(temp0, temp1) :
      op->vtkXMLDataElement::GetWordTypeAttribute(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLDataElement_GetNumberOfAttributes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfAttributes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataElement *op = static_cast<vtkXMLDataElement *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfAttributes() :
      op->vtkXMLDataElement::GetNumberOfAttributes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLDataElement_GetAttributeName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributeName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataElement *op = static_cast<vtkXMLDataElement *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetAttributeName(temp0) :
      op->vtkXMLDataElement::GetAttributeName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLDataElement_GetAttributeValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributeValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataElement *op = static_cast<vtkXMLDataElement *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetAttributeValue(temp0) :
      op->vtkXMLDataElement::GetAttributeValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLDataElement_RemoveAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataElement *op = static_cast<vtkXMLDataElement *>(vp);

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
      op->vtkXMLDataElement::RemoveAttribute(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLDataElement_RemoveAllAttributes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllAttributes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataElement *op = static_cast<vtkXMLDataElement *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllAttributes();
    }
    else
    {
      op->vtkXMLDataElement::RemoveAllAttributes();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLDataElement_GetParent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataElement *op = static_cast<vtkXMLDataElement *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkXMLDataElement *tempr = (ap.IsBound() ?
      op->GetParent() :
      op->vtkXMLDataElement::GetParent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLDataElement_SetParent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataElement *op = static_cast<vtkXMLDataElement *>(vp);

  vtkXMLDataElement *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkXMLDataElement"))
  {
    if (ap.IsBound())
    {
      op->SetParent(temp0);
    }
    else
    {
      op->vtkXMLDataElement::SetParent(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLDataElement_GetRoot(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRoot");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataElement *op = static_cast<vtkXMLDataElement *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkXMLDataElement *tempr = (ap.IsBound() ?
      op->GetRoot() :
      op->vtkXMLDataElement::GetRoot());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLDataElement_GetNumberOfNestedElements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfNestedElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataElement *op = static_cast<vtkXMLDataElement *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfNestedElements() :
      op->vtkXMLDataElement::GetNumberOfNestedElements());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLDataElement_GetNestedElement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNestedElement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataElement *op = static_cast<vtkXMLDataElement *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkXMLDataElement *tempr = (ap.IsBound() ?
      op->GetNestedElement(temp0) :
      op->vtkXMLDataElement::GetNestedElement(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLDataElement_AddNestedElement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddNestedElement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataElement *op = static_cast<vtkXMLDataElement *>(vp);

  vtkXMLDataElement *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkXMLDataElement"))
  {
    if (ap.IsBound())
    {
      op->AddNestedElement(temp0);
    }
    else
    {
      op->vtkXMLDataElement::AddNestedElement(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLDataElement_RemoveNestedElement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveNestedElement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataElement *op = static_cast<vtkXMLDataElement *>(vp);

  vtkXMLDataElement *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkXMLDataElement"))
  {
    if (ap.IsBound())
    {
      op->RemoveNestedElement(temp0);
    }
    else
    {
      op->vtkXMLDataElement::RemoveNestedElement(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLDataElement_RemoveAllNestedElements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllNestedElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataElement *op = static_cast<vtkXMLDataElement *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllNestedElements();
    }
    else
    {
      op->vtkXMLDataElement::RemoveAllNestedElements();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLDataElement_FindNestedElement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindNestedElement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataElement *op = static_cast<vtkXMLDataElement *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkXMLDataElement *tempr = (ap.IsBound() ?
      op->FindNestedElement(temp0) :
      op->vtkXMLDataElement::FindNestedElement(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLDataElement_FindNestedElementWithName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindNestedElementWithName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataElement *op = static_cast<vtkXMLDataElement *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkXMLDataElement *tempr = (ap.IsBound() ?
      op->FindNestedElementWithName(temp0) :
      op->vtkXMLDataElement::FindNestedElementWithName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLDataElement_FindNestedElementWithNameAndId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindNestedElementWithNameAndId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataElement *op = static_cast<vtkXMLDataElement *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkXMLDataElement *tempr = (ap.IsBound() ?
      op->FindNestedElementWithNameAndId(temp0, temp1) :
      op->vtkXMLDataElement::FindNestedElementWithNameAndId(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLDataElement_FindNestedElementWithNameAndAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindNestedElementWithNameAndAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataElement *op = static_cast<vtkXMLDataElement *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  const char *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    vtkXMLDataElement *tempr = (ap.IsBound() ?
      op->FindNestedElementWithNameAndAttribute(temp0, temp1, temp2) :
      op->vtkXMLDataElement::FindNestedElementWithNameAndAttribute(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLDataElement_LookupElementWithName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LookupElementWithName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataElement *op = static_cast<vtkXMLDataElement *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkXMLDataElement *tempr = (ap.IsBound() ?
      op->LookupElementWithName(temp0) :
      op->vtkXMLDataElement::LookupElementWithName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLDataElement_LookupElement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LookupElement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataElement *op = static_cast<vtkXMLDataElement *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkXMLDataElement *tempr = (ap.IsBound() ?
      op->LookupElement(temp0) :
      op->vtkXMLDataElement::LookupElement(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLDataElement_GetXMLByteIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXMLByteIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataElement *op = static_cast<vtkXMLDataElement *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetXMLByteIndex() :
      op->vtkXMLDataElement::GetXMLByteIndex());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLDataElement_SetXMLByteIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXMLByteIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataElement *op = static_cast<vtkXMLDataElement *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetXMLByteIndex(temp0);
    }
    else
    {
      op->vtkXMLDataElement::SetXMLByteIndex(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLDataElement_IsEqualTo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsEqualTo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataElement *op = static_cast<vtkXMLDataElement *>(vp);

  vtkXMLDataElement *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkXMLDataElement"))
  {
    int tempr = (ap.IsBound() ?
      op->IsEqualTo(temp0) :
      op->vtkXMLDataElement::IsEqualTo(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLDataElement_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataElement *op = static_cast<vtkXMLDataElement *>(vp);

  vtkXMLDataElement *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkXMLDataElement"))
  {
    if (ap.IsBound())
    {
      op->DeepCopy(temp0);
    }
    else
    {
      op->vtkXMLDataElement::DeepCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLDataElement_SetAttributeEncoding(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAttributeEncoding");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataElement *op = static_cast<vtkXMLDataElement *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAttributeEncoding(temp0);
    }
    else
    {
      op->vtkXMLDataElement::SetAttributeEncoding(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLDataElement_GetAttributeEncodingMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributeEncodingMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataElement *op = static_cast<vtkXMLDataElement *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAttributeEncodingMinValue() :
      op->vtkXMLDataElement::GetAttributeEncodingMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLDataElement_GetAttributeEncodingMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributeEncodingMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataElement *op = static_cast<vtkXMLDataElement *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAttributeEncodingMaxValue() :
      op->vtkXMLDataElement::GetAttributeEncodingMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLDataElement_GetAttributeEncoding(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributeEncoding");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataElement *op = static_cast<vtkXMLDataElement *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAttributeEncoding() :
      op->vtkXMLDataElement::GetAttributeEncoding());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLDataElement_PrintXML(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PrintXML");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataElement *op = static_cast<vtkXMLDataElement *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->PrintXML(temp0);
    }
    else
    {
      op->vtkXMLDataElement::PrintXML(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLDataElement_GetCharacterDataWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCharacterDataWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataElement *op = static_cast<vtkXMLDataElement *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCharacterDataWidth() :
      op->vtkXMLDataElement::GetCharacterDataWidth());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLDataElement_SetCharacterDataWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCharacterDataWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataElement *op = static_cast<vtkXMLDataElement *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCharacterDataWidth(temp0);
    }
    else
    {
      op->vtkXMLDataElement::SetCharacterDataWidth(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkXMLDataElement_Methods[] = {
  {"IsTypeOf", PyvtkXMLDataElement_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkXMLDataElement_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkXMLDataElement_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkXMLDataElement\nC++: static vtkXMLDataElement *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkXMLDataElement_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkXMLDataElement\nC++: vtkXMLDataElement *NewInstance()\n\n"},
  {"GetName", PyvtkXMLDataElement_GetName, METH_VARARGS,
   "V.GetName() -> string\nC++: virtual char *GetName()\n\nSet/Get the name of the element.  This is its XML tag.\n"},
  {"SetName", PyvtkXMLDataElement_SetName, METH_VARARGS,
   "V.SetName(string)\nC++: virtual void SetName(const char *_arg)\n\nSet/Get the name of the element.  This is its XML tag.\n"},
  {"GetId", PyvtkXMLDataElement_GetId, METH_VARARGS,
   "V.GetId() -> string\nC++: virtual char *GetId()\n\nSet/Get the value of the id attribute of the element, if any.\n"},
  {"SetId", PyvtkXMLDataElement_SetId, METH_VARARGS,
   "V.SetId(string)\nC++: virtual void SetId(const char *_arg)\n\nSet/Get the value of the id attribute of the element, if any.\n"},
  {"GetAttribute", PyvtkXMLDataElement_GetAttribute, METH_VARARGS,
   "V.GetAttribute(string) -> string\nC++: const char *GetAttribute(const char *name)\n\nGet the attribute with the given name.  If it doesn't exist,\nreturns 0.\n"},
  {"SetAttribute", PyvtkXMLDataElement_SetAttribute, METH_VARARGS,
   "V.SetAttribute(string, string)\nC++: void SetAttribute(const char *name, const char *value)\n\nSet the attribute with the given name and value. If it doesn't\nexist, adds it.\n"},
  {"SetCharacterData", PyvtkXMLDataElement_SetCharacterData, METH_VARARGS,
   "V.SetCharacterData(string, int)\nC++: void SetCharacterData(const char *c, int length)\n\nSet/Get the character data between XML start/end tags.\n"},
  {"AddCharacterData", PyvtkXMLDataElement_AddCharacterData, METH_VARARGS,
   "V.AddCharacterData(string, int)\nC++: void AddCharacterData(const char *c, size_t length)\n\nSet/Get the character data between XML start/end tags.\n"},
  {"GetCharacterData", PyvtkXMLDataElement_GetCharacterData, METH_VARARGS,
   "V.GetCharacterData() -> string\nC++: virtual char *GetCharacterData()\n\nSet/Get the character data between XML start/end tags.\n"},
  {"GetScalarAttribute", PyvtkXMLDataElement_GetScalarAttribute, METH_VARARGS,
   "V.GetScalarAttribute(string, int) -> int\nC++: int GetScalarAttribute(const char *name, int &value)\nV.GetScalarAttribute(string, float) -> int\nC++: int GetScalarAttribute(const char *name, double &value)\nV.GetScalarAttribute(string, int) -> int\nC++: int GetScalarAttribute(const char *name, long &value)\nV.GetScalarAttribute(string, int) -> int\nC++: int GetScalarAttribute(const char *name, long long &value)\n\nGet the attribute with the given name and converted to a scalar\nvalue.  Returns whether value was extracted.\n"},
  {"SetIntAttribute", PyvtkXMLDataElement_SetIntAttribute, METH_VARARGS,
   "V.SetIntAttribute(string, int)\nC++: void SetIntAttribute(const char *name, int value)\n\nSet the attribute with the given name. We can not use the same\nGetScalarAttribute() construct since the compiler will not be\nable to resolve between SetAttribute(..., int) and\nSetAttribute(..., unsigned long).\n"},
  {"SetFloatAttribute", PyvtkXMLDataElement_SetFloatAttribute, METH_VARARGS,
   "V.SetFloatAttribute(string, float)\nC++: void SetFloatAttribute(const char *name, float value)\n\nSet the attribute with the given name. We can not use the same\nGetScalarAttribute() construct since the compiler will not be\nable to resolve between SetAttribute(..., int) and\nSetAttribute(..., unsigned long).\n"},
  {"SetDoubleAttribute", PyvtkXMLDataElement_SetDoubleAttribute, METH_VARARGS,
   "V.SetDoubleAttribute(string, float)\nC++: void SetDoubleAttribute(const char *name, double value)\n\nSet the attribute with the given name. We can not use the same\nGetScalarAttribute() construct since the compiler will not be\nable to resolve between SetAttribute(..., int) and\nSetAttribute(..., unsigned long).\n"},
  {"SetUnsignedLongAttribute", PyvtkXMLDataElement_SetUnsignedLongAttribute, METH_VARARGS,
   "V.SetUnsignedLongAttribute(string, int)\nC++: void SetUnsignedLongAttribute(const char *name,\n    unsigned long value)\n\nSet the attribute with the given name. We can not use the same\nGetScalarAttribute() construct since the compiler will not be\nable to resolve between SetAttribute(..., int) and\nSetAttribute(..., unsigned long).\n"},
  {"GetVectorAttribute", PyvtkXMLDataElement_GetVectorAttribute, METH_VARARGS,
   "V.GetVectorAttribute(string, int, [int, ...]) -> int\nC++: int GetVectorAttribute(const char *name, int length,\n    int *value)\nV.GetVectorAttribute(string, int, [float, ...]) -> int\nC++: int GetVectorAttribute(const char *name, int length,\n    double *value)\nV.GetVectorAttribute(string, int, [int, ...]) -> int\nC++: int GetVectorAttribute(const char *name, int length,\n    long *value)\nV.GetVectorAttribute(string, int, [int, ...]) -> int\nC++: int GetVectorAttribute(const char *name, int length,\n    long long *value)\n\nGet the attribute with the given name and converted to a scalar\nvalue.  Returns length of vector read.\n"},
  {"SetVectorAttribute", PyvtkXMLDataElement_SetVectorAttribute, METH_VARARGS,
   "V.SetVectorAttribute(string, int, (int, ...))\nC++: void SetVectorAttribute(const char *name, int length,\n    const int *value)\nV.SetVectorAttribute(string, int, (float, ...))\nC++: void SetVectorAttribute(const char *name, int length,\n    const double *value)\nV.SetVectorAttribute(string, int, (int, ...))\nC++: void SetVectorAttribute(const char *name, int length,\n    const unsigned long *value)\nV.SetVectorAttribute(string, int, (int, ...))\nC++: void SetVectorAttribute(const char *name, int length,\n    long long const *value)\n\nSet the attribute with the given name.\n"},
  {"GetWordTypeAttribute", PyvtkXMLDataElement_GetWordTypeAttribute, METH_VARARGS,
   "V.GetWordTypeAttribute(string, int) -> int\nC++: int GetWordTypeAttribute(const char *name, int &value)\n\nGet the attribute with the given name and converted to a word\ntype such as VTK_FLOAT or VTK_UNSIGNED_LONG.\n"},
  {"GetNumberOfAttributes", PyvtkXMLDataElement_GetNumberOfAttributes, METH_VARARGS,
   "V.GetNumberOfAttributes() -> int\nC++: virtual int GetNumberOfAttributes()\n\nGet the number of attributes.\n"},
  {"GetAttributeName", PyvtkXMLDataElement_GetAttributeName, METH_VARARGS,
   "V.GetAttributeName(int) -> string\nC++: const char *GetAttributeName(int idx)\n\nGet the n-th attribute name. Returns 0 if there is no such\nattribute.\n"},
  {"GetAttributeValue", PyvtkXMLDataElement_GetAttributeValue, METH_VARARGS,
   "V.GetAttributeValue(int) -> string\nC++: const char *GetAttributeValue(int idx)\n\nGet the n-th attribute value. Returns 0 if there is no such\nattribute.\n"},
  {"RemoveAttribute", PyvtkXMLDataElement_RemoveAttribute, METH_VARARGS,
   "V.RemoveAttribute(string)\nC++: virtual void RemoveAttribute(const char *name)\n\nRemove one or all attributes.\n"},
  {"RemoveAllAttributes", PyvtkXMLDataElement_RemoveAllAttributes, METH_VARARGS,
   "V.RemoveAllAttributes()\nC++: virtual void RemoveAllAttributes()\n\nRemove one or all attributes.\n"},
  {"GetParent", PyvtkXMLDataElement_GetParent, METH_VARARGS,
   "V.GetParent() -> vtkXMLDataElement\nC++: vtkXMLDataElement *GetParent()\n\nSet/Get the parent of this element.\n"},
  {"SetParent", PyvtkXMLDataElement_SetParent, METH_VARARGS,
   "V.SetParent(vtkXMLDataElement)\nC++: void SetParent(vtkXMLDataElement *parent)\n\nSet/Get the parent of this element.\n"},
  {"GetRoot", PyvtkXMLDataElement_GetRoot, METH_VARARGS,
   "V.GetRoot() -> vtkXMLDataElement\nC++: virtual vtkXMLDataElement *GetRoot()\n\nGet root of the XML tree this element is part of.\n"},
  {"GetNumberOfNestedElements", PyvtkXMLDataElement_GetNumberOfNestedElements, METH_VARARGS,
   "V.GetNumberOfNestedElements() -> int\nC++: int GetNumberOfNestedElements()\n\nGet the number of elements nested in this one.\n"},
  {"GetNestedElement", PyvtkXMLDataElement_GetNestedElement, METH_VARARGS,
   "V.GetNestedElement(int) -> vtkXMLDataElement\nC++: vtkXMLDataElement *GetNestedElement(int index)\n\nGet the element nested in this one at the given index.\n"},
  {"AddNestedElement", PyvtkXMLDataElement_AddNestedElement, METH_VARARGS,
   "V.AddNestedElement(vtkXMLDataElement)\nC++: void AddNestedElement(vtkXMLDataElement *element)\n\nAdd nested element\n"},
  {"RemoveNestedElement", PyvtkXMLDataElement_RemoveNestedElement, METH_VARARGS,
   "V.RemoveNestedElement(vtkXMLDataElement)\nC++: virtual void RemoveNestedElement(vtkXMLDataElement *)\n\nRemove nested element.\n"},
  {"RemoveAllNestedElements", PyvtkXMLDataElement_RemoveAllNestedElements, METH_VARARGS,
   "V.RemoveAllNestedElements()\nC++: virtual void RemoveAllNestedElements()\n\nRemove all nested elements.\n"},
  {"FindNestedElement", PyvtkXMLDataElement_FindNestedElement, METH_VARARGS,
   "V.FindNestedElement(string) -> vtkXMLDataElement\nC++: vtkXMLDataElement *FindNestedElement(const char *id)\n\nFind the first nested element with the given id, given name, or\ngiven name and id. WARNING: the search is only performed on the\nchildren, not the grand-children.\n"},
  {"FindNestedElementWithName", PyvtkXMLDataElement_FindNestedElementWithName, METH_VARARGS,
   "V.FindNestedElementWithName(string) -> vtkXMLDataElement\nC++: vtkXMLDataElement *FindNestedElementWithName(\n    const char *name)\n\nFind the first nested element with the given id, given name, or\ngiven name and id. WARNING: the search is only performed on the\nchildren, not the grand-children.\n"},
  {"FindNestedElementWithNameAndId", PyvtkXMLDataElement_FindNestedElementWithNameAndId, METH_VARARGS,
   "V.FindNestedElementWithNameAndId(string, string)\n    -> vtkXMLDataElement\nC++: vtkXMLDataElement *FindNestedElementWithNameAndId(\n    const char *name, const char *id)\n\nFind the first nested element with the given id, given name, or\ngiven name and id. WARNING: the search is only performed on the\nchildren, not the grand-children.\n"},
  {"FindNestedElementWithNameAndAttribute", PyvtkXMLDataElement_FindNestedElementWithNameAndAttribute, METH_VARARGS,
   "V.FindNestedElementWithNameAndAttribute(string, string, string)\n    -> vtkXMLDataElement\nC++: vtkXMLDataElement *FindNestedElementWithNameAndAttribute(\n    const char *name, const char *att_name, const char *att_value)\n\nFind the first nested element with the given id, given name, or\ngiven name and id. WARNING: the search is only performed on the\nchildren, not the grand-children.\n"},
  {"LookupElementWithName", PyvtkXMLDataElement_LookupElementWithName, METH_VARARGS,
   "V.LookupElementWithName(string) -> vtkXMLDataElement\nC++: vtkXMLDataElement *LookupElementWithName(const char *name)\n\nFind the first nested element with given name. WARNING: the\nsearch is performed on the whole XML tree.\n"},
  {"LookupElement", PyvtkXMLDataElement_LookupElement, METH_VARARGS,
   "V.LookupElement(string) -> vtkXMLDataElement\nC++: vtkXMLDataElement *LookupElement(const char *id)\n\nLookup the element with the given id, starting at this scope.\n"},
  {"GetXMLByteIndex", PyvtkXMLDataElement_GetXMLByteIndex, METH_VARARGS,
   "V.GetXMLByteIndex() -> int\nC++: virtual vtkTypeInt64 GetXMLByteIndex()\n\nSet/Get the offset from the beginning of the XML document to this\nelement.\n"},
  {"SetXMLByteIndex", PyvtkXMLDataElement_SetXMLByteIndex, METH_VARARGS,
   "V.SetXMLByteIndex(int)\nC++: virtual void SetXMLByteIndex(vtkTypeInt64 _arg)\n\nSet/Get the offset from the beginning of the XML document to this\nelement.\n"},
  {"IsEqualTo", PyvtkXMLDataElement_IsEqualTo, METH_VARARGS,
   "V.IsEqualTo(vtkXMLDataElement) -> int\nC++: virtual int IsEqualTo(vtkXMLDataElement *elem)\n\nCheck if the instance has the same name, attributes, character\ndata and nested elements contents than the given element (this\nmethod is applied recursively on the nested elements, and they\nmust be stored in the same order). Warning: Id, Parent,\nXMLByteIndex are ignored.\n"},
  {"DeepCopy", PyvtkXMLDataElement_DeepCopy, METH_VARARGS,
   "V.DeepCopy(vtkXMLDataElement)\nC++: virtual void DeepCopy(vtkXMLDataElement *elem)\n\nCopy this element from another of the same type (elem),\nrecursively. Old attributes and nested elements are removed, new\nones are created given the contents of 'elem'. Warning: Parent is\nignored.\n"},
  {"SetAttributeEncoding", PyvtkXMLDataElement_SetAttributeEncoding, METH_VARARGS,
   "V.SetAttributeEncoding(int)\nC++: virtual void SetAttributeEncoding(int _arg)\n\nGet/Set the internal character encoding of the attributes.\nDefault type is VTK_ENCODING_UTF_8. Note that a vtkXMLDataParser\nhas its own AttributesEncoding ivar. If this ivar is set to\nsomething other than VTK_ENCODING_NONE, it will be used to set\nthe attribute encoding of each vtkXMLDataElement created by this\nvtkXMLDataParser.\n"},
  {"GetAttributeEncodingMinValue", PyvtkXMLDataElement_GetAttributeEncodingMinValue, METH_VARARGS,
   "V.GetAttributeEncodingMinValue() -> int\nC++: virtual int GetAttributeEncodingMinValue()\n\nGet/Set the internal character encoding of the attributes.\nDefault type is VTK_ENCODING_UTF_8. Note that a vtkXMLDataParser\nhas its own AttributesEncoding ivar. If this ivar is set to\nsomething other than VTK_ENCODING_NONE, it will be used to set\nthe attribute encoding of each vtkXMLDataElement created by this\nvtkXMLDataParser.\n"},
  {"GetAttributeEncodingMaxValue", PyvtkXMLDataElement_GetAttributeEncodingMaxValue, METH_VARARGS,
   "V.GetAttributeEncodingMaxValue() -> int\nC++: virtual int GetAttributeEncodingMaxValue()\n\nGet/Set the internal character encoding of the attributes.\nDefault type is VTK_ENCODING_UTF_8. Note that a vtkXMLDataParser\nhas its own AttributesEncoding ivar. If this ivar is set to\nsomething other than VTK_ENCODING_NONE, it will be used to set\nthe attribute encoding of each vtkXMLDataElement created by this\nvtkXMLDataParser.\n"},
  {"GetAttributeEncoding", PyvtkXMLDataElement_GetAttributeEncoding, METH_VARARGS,
   "V.GetAttributeEncoding() -> int\nC++: virtual int GetAttributeEncoding()\n\nGet/Set the internal character encoding of the attributes.\nDefault type is VTK_ENCODING_UTF_8. Note that a vtkXMLDataParser\nhas its own AttributesEncoding ivar. If this ivar is set to\nsomething other than VTK_ENCODING_NONE, it will be used to set\nthe attribute encoding of each vtkXMLDataElement created by this\nvtkXMLDataParser.\n"},
  {"PrintXML", PyvtkXMLDataElement_PrintXML, METH_VARARGS,
   "V.PrintXML(string)\nC++: void PrintXML(const char *fname)\n\nPrints element tree as XML.\n"},
  {"GetCharacterDataWidth", PyvtkXMLDataElement_GetCharacterDataWidth, METH_VARARGS,
   "V.GetCharacterDataWidth() -> int\nC++: virtual int GetCharacterDataWidth()\n\nGet/Set the width (in number of fields) that character data (that\nbetween open and closing tags ie. ... ) is printed. If the width\nis less than one the tag's character data is printed all on one\nline. If it is greater than one the character data is streamed\ninsterting line feeds every width number of fields. See PrintXML.\n"},
  {"SetCharacterDataWidth", PyvtkXMLDataElement_SetCharacterDataWidth, METH_VARARGS,
   "V.SetCharacterDataWidth(int)\nC++: virtual void SetCharacterDataWidth(int _arg)\n\nGet/Set the width (in number of fields) that character data (that\nbetween open and closing tags ie. ... ) is printed. If the width\nis less than one the tag's character data is printed all on one\nline. If it is greater than one the character data is streamed\ninsterting line feeds every width number of fields. See PrintXML.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkXMLDataElement_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonDataModelPython.vtkXMLDataElement", // tp_name
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
  PyvtkXMLDataElement_Doc, // tp_doc
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

static vtkObjectBase *PyvtkXMLDataElement_StaticNew()
{
  return vtkXMLDataElement::New();
}

PyObject *PyvtkXMLDataElement_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkXMLDataElement_Type, PyvtkXMLDataElement_Methods,
    "vtkXMLDataElement",
 &PyvtkXMLDataElement_StaticNew);

  PyTypeObject *pytype = &PyvtkXMLDataElement_Type;

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

void PyVTKAddFile_vtkXMLDataElement(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkXMLDataElement_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkXMLDataElement", o) != 0)
  {
    Py_DECREF(o);
  }

}

