// python wrapper for vtkCellTypes
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
#include "vtkCellTypes.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCellTypes(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkCellTypes_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkCellTypes_Doc =
  "vtkCellTypes - object provides direct access to cells in vtkCellArray\nand type information\n\n"
  "Superclass: vtkObject\n\n"
  "This class is a supplemental object to vtkCellArray to allow random\n"
  "access into cells as well as representing cell type information.  The\n"
  "\"location\" field is the location in the vtkCellArray list in terms of\n"
  "an integer offset.  An integer offset was used instead of a pointer\n"
  "for easy storage and inter-process communication. The type\n"
  "information is defined in the file vtkCellType.h.\n\n"
  "@warning\n"
  "Sometimes this class is used to pass type information independent of\n"
  "the random access (i.e., location) information. For example, see\n"
  "vtkDataSet::GetCellTypes(). If you use the class in this way, you can\n"
  "use a location value of -1.\n\n"
  "@sa\n"
  "vtkCellArray vtkCellLinks\n\n";


static PyObject *
PyvtkCellTypes_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCellTypes::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellTypes_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellTypes *op = static_cast<vtkCellTypes *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCellTypes::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellTypes_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCellTypes *tempr = vtkCellTypes::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellTypes_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellTypes *op = static_cast<vtkCellTypes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCellTypes *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCellTypes::NewInstance());

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
PyvtkCellTypes_Allocate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Allocate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellTypes *op = static_cast<vtkCellTypes *>(vp);

  int temp0 = 512;
  int temp1 = 1000;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 2) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    int tempr = (ap.IsBound() ?
      op->Allocate(temp0, temp1) :
      op->vtkCellTypes::Allocate(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellTypes_InsertCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellTypes *op = static_cast<vtkCellTypes *>(vp);

  vtkIdType temp0;
  unsigned char temp1;
  vtkIdType temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->InsertCell(temp0, temp1, temp2);
    }
    else
    {
      op->vtkCellTypes::InsertCell(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellTypes_InsertNextCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellTypes *op = static_cast<vtkCellTypes *>(vp);

  unsigned char temp0;
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->InsertNextCell(temp0, temp1) :
      op->vtkCellTypes::InsertNextCell(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellTypes_SetCellTypes_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellTypes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellTypes *op = static_cast<vtkCellTypes *>(vp);

  vtkIdType temp0;
  vtkUnsignedCharArray *temp1 = nullptr;
  vtkIdTypeArray *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkUnsignedCharArray") &&
      ap.GetVTKObject(temp2, "vtkIdTypeArray"))
  {
    if (ap.IsBound())
    {
      op->SetCellTypes(temp0, temp1, temp2);
    }
    else
    {
      op->vtkCellTypes::SetCellTypes(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCellTypes_SetCellTypes_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellTypes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellTypes *op = static_cast<vtkCellTypes *>(vp);

  vtkIdType temp0;
  vtkUnsignedCharArray *temp1 = nullptr;
  vtkIntArray *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkUnsignedCharArray") &&
      ap.GetVTKObject(temp2, "vtkIntArray"))
  {
    if (ap.IsBound())
    {
      op->SetCellTypes(temp0, temp1, temp2);
    }
    else
    {
      op->vtkCellTypes::SetCellTypes(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkCellTypes_SetCellTypes_Methods[] = {
  {nullptr, PyvtkCellTypes_SetCellTypes_s1, METH_VARARGS,
   "@kVV *vtkUnsignedCharArray *vtkIdTypeArray"},
  {nullptr, PyvtkCellTypes_SetCellTypes_s2, METH_VARARGS,
   "@kVV *vtkUnsignedCharArray *vtkIntArray"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkCellTypes_SetCellTypes(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkCellTypes_SetCellTypes_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetCellTypes");
  return nullptr;
}



static PyObject *
PyvtkCellTypes_GetCellLocation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellTypes *op = static_cast<vtkCellTypes *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetCellLocation(temp0) :
      op->vtkCellTypes::GetCellLocation(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellTypes_DeleteCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeleteCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellTypes *op = static_cast<vtkCellTypes *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->DeleteCell(temp0);
    }
    else
    {
      op->vtkCellTypes::DeleteCell(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellTypes_GetNumberOfTypes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTypes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellTypes *op = static_cast<vtkCellTypes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfTypes() :
      op->vtkCellTypes::GetNumberOfTypes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellTypes_IsType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellTypes *op = static_cast<vtkCellTypes *>(vp);

  unsigned char temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsType(temp0) :
      op->vtkCellTypes::IsType(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellTypes_InsertNextType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellTypes *op = static_cast<vtkCellTypes *>(vp);

  unsigned char temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->InsertNextType(temp0) :
      op->vtkCellTypes::InsertNextType(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellTypes_GetCellType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellTypes *op = static_cast<vtkCellTypes *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    unsigned char tempr = (ap.IsBound() ?
      op->GetCellType(temp0) :
      op->vtkCellTypes::GetCellType(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellTypes_Squeeze(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Squeeze");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellTypes *op = static_cast<vtkCellTypes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Squeeze();
    }
    else
    {
      op->vtkCellTypes::Squeeze();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellTypes_Reset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellTypes *op = static_cast<vtkCellTypes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Reset();
    }
    else
    {
      op->vtkCellTypes::Reset();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellTypes_GetActualMemorySize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActualMemorySize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellTypes *op = static_cast<vtkCellTypes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetActualMemorySize() :
      op->vtkCellTypes::GetActualMemorySize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellTypes_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellTypes *op = static_cast<vtkCellTypes *>(vp);

  vtkCellTypes *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCellTypes"))
  {
    if (ap.IsBound())
    {
      op->DeepCopy(temp0);
    }
    else
    {
      op->vtkCellTypes::DeepCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellTypes_GetClassNameFromTypeId(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetClassNameFromTypeId");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = vtkCellTypes::GetClassNameFromTypeId(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellTypes_GetTypeIdFromClassName(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetTypeIdFromClassName");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCellTypes::GetTypeIdFromClassName(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellTypes_IsLinear(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsLinear");

  unsigned char temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCellTypes::IsLinear(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkCellTypes_Methods[] = {
  {"IsTypeOf", PyvtkCellTypes_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCellTypes_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCellTypes_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkCellTypes\nC++: static vtkCellTypes *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCellTypes_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkCellTypes\nC++: vtkCellTypes *NewInstance()\n\n"},
  {"Allocate", PyvtkCellTypes_Allocate, METH_VARARGS,
   "V.Allocate(int, int) -> int\nC++: int Allocate(int sz=512, int ext=1000)\n\nAllocate memory for this array. Delete old storage only if\nnecessary.\n"},
  {"InsertCell", PyvtkCellTypes_InsertCell, METH_VARARGS,
   "V.InsertCell(int, int, int)\nC++: void InsertCell(vtkIdType id, unsigned char type,\n    vtkIdType loc)\n\nAdd a cell at specified id.\n"},
  {"InsertNextCell", PyvtkCellTypes_InsertNextCell, METH_VARARGS,
   "V.InsertNextCell(int, int) -> int\nC++: vtkIdType InsertNextCell(unsigned char type, vtkIdType loc)\n\nAdd a cell to the object in the next available slot.\n"},
  {"SetCellTypes", PyvtkCellTypes_SetCellTypes, METH_VARARGS,
   "V.SetCellTypes(int, vtkUnsignedCharArray, vtkIdTypeArray)\nC++: void SetCellTypes(vtkIdType ncells,\n    vtkUnsignedCharArray *cellTypes,\n    vtkIdTypeArray *cellLocations)\nV.SetCellTypes(int, vtkUnsignedCharArray, vtkIntArray)\nC++: void SetCellTypes(vtkIdType ncells,\n    vtkUnsignedCharArray *cellTypes, vtkIntArray *cellLocations)\n\nSpecify a group of cell types.\n"},
  {"GetCellLocation", PyvtkCellTypes_GetCellLocation, METH_VARARGS,
   "V.GetCellLocation(int) -> int\nC++: vtkIdType GetCellLocation(vtkIdType cellId)\n\nReturn the location of the cell in the associated vtkCellArray.\n"},
  {"DeleteCell", PyvtkCellTypes_DeleteCell, METH_VARARGS,
   "V.DeleteCell(int)\nC++: void DeleteCell(vtkIdType cellId)\n\nDelete cell by setting to nullptr cell type.\n"},
  {"GetNumberOfTypes", PyvtkCellTypes_GetNumberOfTypes, METH_VARARGS,
   "V.GetNumberOfTypes() -> int\nC++: vtkIdType GetNumberOfTypes()\n\nReturn the number of types in the list.\n"},
  {"IsType", PyvtkCellTypes_IsType, METH_VARARGS,
   "V.IsType(int) -> int\nC++: int IsType(unsigned char type)\n\nReturn 1 if type specified is contained in list; 0 otherwise.\n"},
  {"InsertNextType", PyvtkCellTypes_InsertNextType, METH_VARARGS,
   "V.InsertNextType(int) -> int\nC++: vtkIdType InsertNextType(unsigned char type)\n\nAdd the type specified to the end of the list. Range checking is\nperformed.\n"},
  {"GetCellType", PyvtkCellTypes_GetCellType, METH_VARARGS,
   "V.GetCellType(int) -> int\nC++: unsigned char GetCellType(vtkIdType cellId)\n\nReturn the type of cell.\n"},
  {"Squeeze", PyvtkCellTypes_Squeeze, METH_VARARGS,
   "V.Squeeze()\nC++: void Squeeze()\n\nReclaim any extra memory.\n"},
  {"Reset", PyvtkCellTypes_Reset, METH_VARARGS,
   "V.Reset()\nC++: void Reset()\n\nInitialize object without releasing memory.\n"},
  {"GetActualMemorySize", PyvtkCellTypes_GetActualMemorySize, METH_VARARGS,
   "V.GetActualMemorySize() -> int\nC++: unsigned long GetActualMemorySize()\n\nReturn the memory in kibibytes (1024 bytes) consumed by this cell\ntype array. Used to support streaming and reading/writing data.\nThe value returned is guaranteed to be greater than or equal to\nthe memory required to actually represent the data represented by\nthis object. The information returned is valid only after the\npipeline has been updated.\n"},
  {"DeepCopy", PyvtkCellTypes_DeepCopy, METH_VARARGS,
   "V.DeepCopy(vtkCellTypes)\nC++: void DeepCopy(vtkCellTypes *src)\n\nStandard DeepCopy method.  Since this object contains no\nreference to other objects, there is no ShallowCopy.\n"},
  {"GetClassNameFromTypeId", PyvtkCellTypes_GetClassNameFromTypeId, METH_VARARGS,
   "V.GetClassNameFromTypeId(int) -> string\nC++: static const char *GetClassNameFromTypeId(int typeId)\n\nGiven an int (as defined in vtkCellType.h) identifier for a class\nreturn it's classname.\n"},
  {"GetTypeIdFromClassName", PyvtkCellTypes_GetTypeIdFromClassName, METH_VARARGS,
   "V.GetTypeIdFromClassName(string) -> int\nC++: static int GetTypeIdFromClassName(const char *classname)\n\nGiven a data object classname, return it's int identified (as\ndefined in vtkCellType.h)\n"},
  {"IsLinear", PyvtkCellTypes_IsLinear, METH_VARARGS,
   "V.IsLinear(int) -> int\nC++: static int IsLinear(unsigned char type)\n\nThis convenience method is a fast check to determine if a cell\ntype represents a linear or nonlinear cell.  This is generally\nmuch more efficient than getting the appropriate vtkCell and\nchecking its IsLinear method.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkCellTypes_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonDataModelPython.vtkCellTypes", // tp_name
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
  PyvtkCellTypes_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCellTypes_StaticNew()
{
  return vtkCellTypes::New();
}

PyObject *PyvtkCellTypes_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkCellTypes_Type, PyvtkCellTypes_Methods,
    "vtkCellTypes",
 &PyvtkCellTypes_StaticNew);

  PyTypeObject *pytype = &PyvtkCellTypes_Type;

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

void PyVTKAddFile_vtkCellTypes(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCellTypes_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCellTypes", o) != 0)
  {
    Py_DECREF(o);
  }

}

