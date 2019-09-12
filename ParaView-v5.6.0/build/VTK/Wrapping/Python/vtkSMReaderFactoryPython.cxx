// python wrapper for vtkSMReaderFactory
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
#include "vtkSMReaderFactory.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMReaderFactory(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMReaderFactory_ClassNew(); }

#ifndef DECLARED_PyvtkSMObject_ClassNew
extern "C" { PyObject *PyvtkSMObject_ClassNew(); }
#define DECLARED_PyvtkSMObject_ClassNew
#endif

static const char *PyvtkSMReaderFactory_Doc =
  "vtkSMReaderFactory - is a factory for creating a reader proxy based\non the filename/extension.\n\n"
  "Superclass: vtkSMObject\n\n"
  "vtkSMReaderFactory is a factory for creating a reader that reads a\n"
  "particular file. The reader factory needs to be configured to\n"
  "register the reader prototypes supported by the application. This is\n"
  "done automatically when the reader's proxy definition is registered\n"
  "AND if it has the extensions specified in the Hints section of the\n"
  "XML proxy definition. It is done with the following format:\n"
  " <ReaderFactory extensions=\"[list of expected extensions]\"\n"
  "     file_description=\"[description of the file]\" />\n"
  " \n\n"
  "Once the factory has been configured, the API to create readers, get\n"
  "available readers etc. can be used.\n\n";


static PyObject *
PyvtkSMReaderFactory_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMReaderFactory::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMReaderFactory_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMReaderFactory *op = static_cast<vtkSMReaderFactory *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMReaderFactory::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMReaderFactory_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMReaderFactory *tempr = vtkSMReaderFactory::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMReaderFactory_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMReaderFactory *op = static_cast<vtkSMReaderFactory *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMReaderFactory *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMReaderFactory::NewInstance());

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
PyvtkSMReaderFactory_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMReaderFactory *op = static_cast<vtkSMReaderFactory *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Initialize();
    }
    else
    {
      op->vtkSMReaderFactory::Initialize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMReaderFactory_RegisterPrototype(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegisterPrototype");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMReaderFactory *op = static_cast<vtkSMReaderFactory *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->RegisterPrototype(temp0, temp1);
    }
    else
    {
      op->vtkSMReaderFactory::RegisterPrototype(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMReaderFactory_CanReadFile_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanReadFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMReaderFactory *op = static_cast<vtkSMReaderFactory *>(vp);

  const char *temp0 = nullptr;
  vtkSMSession *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkSMSession"))
  {
    bool tempr = (ap.IsBound() ?
      op->CanReadFile(temp0, temp1) :
      op->vtkSMReaderFactory::CanReadFile(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMReaderFactory_CanReadFile_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "CanReadFile");

  const char *temp0 = nullptr;
  vtkSMProxy *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkSMProxy"))
  {
    bool tempr = vtkSMReaderFactory::CanReadFile(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMReaderFactory_CanReadFile_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "CanReadFile");

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  const char *temp2 = nullptr;
  vtkSMSession *temp3 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetVTKObject(temp3, "vtkSMSession"))
  {
    bool tempr = vtkSMReaderFactory::CanReadFile(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSMReaderFactory_CanReadFile_Methods[] = {
  {nullptr, PyvtkSMReaderFactory_CanReadFile_s1, METH_VARARGS,
   "@zV *vtkSMSession"},
  {nullptr, PyvtkSMReaderFactory_CanReadFile_s2, METH_VARARGS | METH_STATIC,
   "zV *vtkSMProxy"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSMReaderFactory_CanReadFile(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSMReaderFactory_CanReadFile_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 4:
      return PyvtkSMReaderFactory_CanReadFile_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "CanReadFile");
  return nullptr;
}



static PyObject *
PyvtkSMReaderFactory_GetReaderName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReaderName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMReaderFactory *op = static_cast<vtkSMReaderFactory *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetReaderName() :
      op->vtkSMReaderFactory::GetReaderName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMReaderFactory_GetReaderGroup(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReaderGroup");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMReaderFactory *op = static_cast<vtkSMReaderFactory *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetReaderGroup() :
      op->vtkSMReaderFactory::GetReaderGroup());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMReaderFactory_GetPossibleReaders(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPossibleReaders");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMReaderFactory *op = static_cast<vtkSMReaderFactory *>(vp);

  const char *temp0 = nullptr;
  vtkSMSession *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkSMSession"))
  {
    vtkStringList *tempr = (ap.IsBound() ?
      op->GetPossibleReaders(temp0, temp1) :
      op->vtkSMReaderFactory::GetPossibleReaders(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMReaderFactory_GetReaders_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReaders");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMReaderFactory *op = static_cast<vtkSMReaderFactory *>(vp);

  vtkSMSession *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMSession"))
  {
    vtkStringList *tempr = (ap.IsBound() ?
      op->GetReaders(temp0) :
      op->vtkSMReaderFactory::GetReaders(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMReaderFactory_GetReaders_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReaders");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMReaderFactory *op = static_cast<vtkSMReaderFactory *>(vp);

  const char *temp0 = nullptr;
  vtkSMSession *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkSMSession"))
  {
    vtkStringList *tempr = (ap.IsBound() ?
      op->GetReaders(temp0, temp1) :
      op->vtkSMReaderFactory::GetReaders(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMReaderFactory_GetReaders(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkSMReaderFactory_GetReaders_s1(self, args);
    case 2:
      return PyvtkSMReaderFactory_GetReaders_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetReaders");
  return nullptr;
}



static PyObject *
PyvtkSMReaderFactory_TestFileReadability(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "TestFileReadability");

  const char *temp0 = nullptr;
  vtkSMSession *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkSMSession"))
  {
    bool tempr = vtkSMReaderFactory::TestFileReadability(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMReaderFactory_GetSupportedFileTypes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSupportedFileTypes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMReaderFactory *op = static_cast<vtkSMReaderFactory *>(vp);

  vtkSMSession *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMSession"))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetSupportedFileTypes(temp0) :
      op->vtkSMReaderFactory::GetSupportedFileTypes(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMReaderFactory_GetNumberOfRegisteredPrototypes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfRegisteredPrototypes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMReaderFactory *op = static_cast<vtkSMReaderFactory *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfRegisteredPrototypes() :
      op->vtkSMReaderFactory::GetNumberOfRegisteredPrototypes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMReaderFactory_UpdateAvailableReaders(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateAvailableReaders");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMReaderFactory *op = static_cast<vtkSMReaderFactory *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UpdateAvailableReaders();
    }
    else
    {
      op->vtkSMReaderFactory::UpdateAvailableReaders();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMReaderFactory_AddGroup(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddGroup");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMReaderFactory *op = static_cast<vtkSMReaderFactory *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->AddGroup(temp0);
    }
    else
    {
      op->vtkSMReaderFactory::AddGroup(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMReaderFactory_RemoveGroup(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveGroup");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMReaderFactory *op = static_cast<vtkSMReaderFactory *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RemoveGroup(temp0);
    }
    else
    {
      op->vtkSMReaderFactory::RemoveGroup(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMReaderFactory_GetGroups(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGroups");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMReaderFactory *op = static_cast<vtkSMReaderFactory *>(vp);

  vtkStringList *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkStringList"))
  {
    if (ap.IsBound())
    {
      op->GetGroups(temp0);
    }
    else
    {
      op->vtkSMReaderFactory::GetGroups(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMReaderFactory_AddReaderToWhitelist(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "AddReaderToWhitelist");

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkSMReaderFactory::AddReaderToWhitelist(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSMReaderFactory_Methods[] = {
  {"IsTypeOf", PyvtkSMReaderFactory_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMReaderFactory_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMReaderFactory_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSMReaderFactory\nC++: static vtkSMReaderFactory *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMReaderFactory_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSMReaderFactory\nC++: vtkSMReaderFactory *NewInstance()\n\n"},
  {"Initialize", PyvtkSMReaderFactory_Initialize, METH_VARARGS,
   "V.Initialize()\nC++: void Initialize()\n\nCleanup all registered prototypes.\n"},
  {"RegisterPrototype", PyvtkSMReaderFactory_RegisterPrototype, METH_VARARGS,
   "V.RegisterPrototype(string, string)\nC++: void RegisterPrototype(const char *xmlgroup,\n    const char *xmlname)\n\nRegister a prototype. If it is already registered this becomes a\nno-op.\n"},
  {"CanReadFile", PyvtkSMReaderFactory_CanReadFile, METH_VARARGS,
   "V.CanReadFile(string, vtkSMSession) -> bool\nC++: bool CanReadFile(const char *filename, vtkSMSession *session)\nV.CanReadFile(string, vtkSMProxy) -> bool\nC++: static bool CanReadFile(const char *filename,\n    vtkSMProxy *reader)\nV.CanReadFile(string, string, string, vtkSMSession) -> bool\nC++: static bool CanReadFile(const char *filename,\n    const char *readerxmlgroup, const char *readerxmlname,\n    vtkSMSession *session)\n\nReturns true if a reader can be determined that can read the\nfile. When this returns true, one can use GetReaderGroup() and\nGetReaderName() to obtain the xmlgroup and xmlname for the reader\nthat can read the file. When this returns false, use\nGetPossibleReaders() to get the list of readers that can possibly\nread the file.\n"},
  {"GetReaderName", PyvtkSMReaderFactory_GetReaderName, METH_VARARGS,
   "V.GetReaderName() -> string\nC++: virtual char *GetReaderName()\n\nReturns the xml-name for the reader that can read the file\nqueried by the most recent CanReadFile() call. This is valid only\nif CanReadFile() returned true.\n"},
  {"GetReaderGroup", PyvtkSMReaderFactory_GetReaderGroup, METH_VARARGS,
   "V.GetReaderGroup() -> string\nC++: virtual char *GetReaderGroup()\n\nReturns the xml-group for the reader that can read the file\nqueried by the most recent CanReadFile() call. This is valid only\nif CanReadFile() returned true.\n"},
  {"GetPossibleReaders", PyvtkSMReaderFactory_GetPossibleReaders, METH_VARARGS,
   "V.GetPossibleReaders(string, vtkSMSession) -> vtkStringList\nC++: vtkStringList *GetPossibleReaders(const char *filename,\n    vtkSMSession *session)\n\nGet the list of readers that can possibly read the file. This is\nused when the factory cannot determine which reader to use for\nreading the file. The user can then choose from the provided\noptions. Returns a list of 3-tuples where the 1st string is the\ngroup, the 2nd string is the reader name and the 3rd string is\nthe reader description Note that the extension test is skipped in\nthis case.\n"},
  {"GetReaders", PyvtkSMReaderFactory_GetReaders, METH_VARARGS,
   "V.GetReaders(vtkSMSession) -> vtkStringList\nC++: vtkStringList *GetReaders(vtkSMSession *session)\nV.GetReaders(string, vtkSMSession) -> vtkStringList\nC++: vtkStringList *GetReaders(const char *filename,\n    vtkSMSession *session)\n\nReturns a list of 3-tuples where the 1st string is the group, the\n2nd string is the reader name and the 3rd string is the reader\ndescription This returns all the possible readers with a given\nconnection id.\n"},
  {"TestFileReadability", PyvtkSMReaderFactory_TestFileReadability, METH_VARARGS,
   "V.TestFileReadability(string, vtkSMSession) -> bool\nC++: static bool TestFileReadability(const char *filename,\n    vtkSMSession *session)\n\nHelper method to test is a file is readable on the server side.\nThis has nothing to do with the whether the file is readable by a\nreader, just test the file permissions etc. Internally uses the\nServerFileListing proxy.\n"},
  {"GetSupportedFileTypes", PyvtkSMReaderFactory_GetSupportedFileTypes, METH_VARARGS,
   "V.GetSupportedFileTypes(vtkSMSession) -> string\nC++: const char *GetSupportedFileTypes(vtkSMSession *session)\n\nReturns a formatted string with all supported file types.cid is\nnot used currently. An example returned string would look like:\n \"Supported Files (*.vtk *.pvd);;PVD Files (*.pvd);;VTK Files (*.vtk)\"\n \n"},
  {"GetNumberOfRegisteredPrototypes", PyvtkSMReaderFactory_GetNumberOfRegisteredPrototypes, METH_VARARGS,
   "V.GetNumberOfRegisteredPrototypes() -> int\nC++: unsigned int GetNumberOfRegisteredPrototypes()\n\nReturns the number of registered prototypes.\n"},
  {"UpdateAvailableReaders", PyvtkSMReaderFactory_UpdateAvailableReaders, METH_VARARGS,
   "V.UpdateAvailableReaders()\nC++: void UpdateAvailableReaders()\n\nEvery time a new proxy definition is added we check to see if it\nis a reader and then we add it to the list of available readers.\n"},
  {"AddGroup", PyvtkSMReaderFactory_AddGroup, METH_VARARGS,
   "V.AddGroup(string)\nC++: void AddGroup(const char *groupName)\n\nAdd/remove a group name to look for readers in. By default\n\"source\" is included.\n"},
  {"RemoveGroup", PyvtkSMReaderFactory_RemoveGroup, METH_VARARGS,
   "V.RemoveGroup(string)\nC++: void RemoveGroup(const char *groupName)\n\nAdd/remove a group name to look for readers in. By default\n\"source\" is included.\n"},
  {"GetGroups", PyvtkSMReaderFactory_GetGroups, METH_VARARGS,
   "V.GetGroups(vtkStringList)\nC++: void GetGroups(vtkStringList *groups)\n\nAdd/remove a group name to look for readers in. By default\n\"source\" is included.\n"},
  {"AddReaderToWhitelist", PyvtkSMReaderFactory_AddReaderToWhitelist, METH_VARARGS,
   "V.AddReaderToWhitelist(string, string)\nC++: static void AddReaderToWhitelist(const char *readerxmlgroup,\n    const char *readerxmlname)\n\nThis function is for ParaView based applications that only wish\nto expose a subset of the readers.  If this function is never\ncalled, the reader factory will expose all the readers as it has\nin the past.  However, if any readers are specified by passing\ntheir group name and reader name to this function, then only\nthose readers will be available in any reader factories created\nby the application.  This is intended to be called at the\nbeginning of the application's execution before any sessions are\ncreated.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMReaderFactory_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerCorePython.vtkSMReaderFactory", // tp_name
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
  PyvtkSMReaderFactory_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSMReaderFactory_StaticNew()
{
  return vtkSMReaderFactory::New();
}

PyObject *PyvtkSMReaderFactory_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMReaderFactory_Type, PyvtkSMReaderFactory_Methods,
    "vtkSMReaderFactory",
 &PyvtkSMReaderFactory_StaticNew);

  PyTypeObject *pytype = &PyvtkSMReaderFactory_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkSMObject_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSMReaderFactory(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMReaderFactory_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMReaderFactory", o) != 0)
  {
    Py_DECREF(o);
  }

}

