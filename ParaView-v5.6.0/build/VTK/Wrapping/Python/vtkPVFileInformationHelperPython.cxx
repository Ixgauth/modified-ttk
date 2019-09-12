// python wrapper for vtkPVFileInformationHelper
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
#include "vtkPVFileInformationHelper.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPVFileInformationHelper(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPVFileInformationHelper_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkPVFileInformationHelper_Doc =
  "vtkPVFileInformationHelper - server side object used to gather\ninformation from, by vtkPVFileInformation.\n\n"
  "Superclass: vtkObject\n\n"
  "When collection information, ProcessModule cannot pass parameters to\n"
  "the information object. In case of vtkPVFileInformation, we need data\n"
  "on the server side such as which directory/file are we concerned\n"
  "with. To make such information available, we use\n"
  "vtkPVFileInformationHelper. One creates a server side representation\n"
  "of vtkPVFileInformationHelper and sets attributes on it, then\n"
  "requests a gather information on the helper object.\n\n";


static PyObject *
PyvtkPVFileInformationHelper_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPVFileInformationHelper::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVFileInformationHelper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVFileInformationHelper *op = static_cast<vtkPVFileInformationHelper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVFileInformationHelper::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVFileInformationHelper_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPVFileInformationHelper *tempr = vtkPVFileInformationHelper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVFileInformationHelper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVFileInformationHelper *op = static_cast<vtkPVFileInformationHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVFileInformationHelper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVFileInformationHelper::NewInstance());

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
PyvtkPVFileInformationHelper_SetPath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVFileInformationHelper *op = static_cast<vtkPVFileInformationHelper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPath(temp0);
    }
    else
    {
      op->vtkPVFileInformationHelper::SetPath(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVFileInformationHelper_GetPath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVFileInformationHelper *op = static_cast<vtkPVFileInformationHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetPath() :
      op->vtkPVFileInformationHelper::GetPath());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVFileInformationHelper_SetWorkingDirectory(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWorkingDirectory");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVFileInformationHelper *op = static_cast<vtkPVFileInformationHelper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetWorkingDirectory(temp0);
    }
    else
    {
      op->vtkPVFileInformationHelper::SetWorkingDirectory(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVFileInformationHelper_GetWorkingDirectory(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWorkingDirectory");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVFileInformationHelper *op = static_cast<vtkPVFileInformationHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetWorkingDirectory() :
      op->vtkPVFileInformationHelper::GetWorkingDirectory());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVFileInformationHelper_GetDirectoryListing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDirectoryListing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVFileInformationHelper *op = static_cast<vtkPVFileInformationHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDirectoryListing() :
      op->vtkPVFileInformationHelper::GetDirectoryListing());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVFileInformationHelper_SetDirectoryListing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDirectoryListing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVFileInformationHelper *op = static_cast<vtkPVFileInformationHelper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDirectoryListing(temp0);
    }
    else
    {
      op->vtkPVFileInformationHelper::SetDirectoryListing(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVFileInformationHelper_DirectoryListingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DirectoryListingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVFileInformationHelper *op = static_cast<vtkPVFileInformationHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DirectoryListingOn();
    }
    else
    {
      op->vtkPVFileInformationHelper::DirectoryListingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVFileInformationHelper_DirectoryListingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DirectoryListingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVFileInformationHelper *op = static_cast<vtkPVFileInformationHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DirectoryListingOff();
    }
    else
    {
      op->vtkPVFileInformationHelper::DirectoryListingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVFileInformationHelper_GetSpecialDirectories(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSpecialDirectories");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVFileInformationHelper *op = static_cast<vtkPVFileInformationHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSpecialDirectories() :
      op->vtkPVFileInformationHelper::GetSpecialDirectories());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVFileInformationHelper_SetSpecialDirectories(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSpecialDirectories");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVFileInformationHelper *op = static_cast<vtkPVFileInformationHelper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSpecialDirectories(temp0);
    }
    else
    {
      op->vtkPVFileInformationHelper::SetSpecialDirectories(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVFileInformationHelper_SpecialDirectoriesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SpecialDirectoriesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVFileInformationHelper *op = static_cast<vtkPVFileInformationHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SpecialDirectoriesOn();
    }
    else
    {
      op->vtkPVFileInformationHelper::SpecialDirectoriesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVFileInformationHelper_SpecialDirectoriesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SpecialDirectoriesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVFileInformationHelper *op = static_cast<vtkPVFileInformationHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SpecialDirectoriesOff();
    }
    else
    {
      op->vtkPVFileInformationHelper::SpecialDirectoriesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVFileInformationHelper_GetFastFileTypeDetection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFastFileTypeDetection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVFileInformationHelper *op = static_cast<vtkPVFileInformationHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFastFileTypeDetection() :
      op->vtkPVFileInformationHelper::GetFastFileTypeDetection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVFileInformationHelper_SetFastFileTypeDetection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFastFileTypeDetection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVFileInformationHelper *op = static_cast<vtkPVFileInformationHelper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFastFileTypeDetection(temp0);
    }
    else
    {
      op->vtkPVFileInformationHelper::SetFastFileTypeDetection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVFileInformationHelper_GetPathSeparator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPathSeparator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVFileInformationHelper *op = static_cast<vtkPVFileInformationHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetPathSeparator() :
      op->vtkPVFileInformationHelper::GetPathSeparator());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVFileInformationHelper_GetActiveFileIsReadable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActiveFileIsReadable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVFileInformationHelper *op = static_cast<vtkPVFileInformationHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetActiveFileIsReadable() :
      op->vtkPVFileInformationHelper::GetActiveFileIsReadable());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVFileInformationHelper_GetActiveFileIsDirectory(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActiveFileIsDirectory");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVFileInformationHelper *op = static_cast<vtkPVFileInformationHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetActiveFileIsDirectory() :
      op->vtkPVFileInformationHelper::GetActiveFileIsDirectory());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVFileInformationHelper_LocalToUtf8Win32(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "LocalToUtf8Win32");

  std::string temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    std::string tempr = vtkPVFileInformationHelper::LocalToUtf8Win32(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVFileInformationHelper_Utf8ToLocalWin32(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Utf8ToLocalWin32");

  std::string temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    std::string tempr = vtkPVFileInformationHelper::Utf8ToLocalWin32(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVFileInformationHelper_GetReadDetailedFileInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReadDetailedFileInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVFileInformationHelper *op = static_cast<vtkPVFileInformationHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetReadDetailedFileInformation() :
      op->vtkPVFileInformationHelper::GetReadDetailedFileInformation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVFileInformationHelper_SetReadDetailedFileInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReadDetailedFileInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVFileInformationHelper *op = static_cast<vtkPVFileInformationHelper *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetReadDetailedFileInformation(temp0);
    }
    else
    {
      op->vtkPVFileInformationHelper::SetReadDetailedFileInformation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPVFileInformationHelper_Methods[] = {
  {"IsTypeOf", PyvtkPVFileInformationHelper_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPVFileInformationHelper_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPVFileInformationHelper_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPVFileInformationHelper\nC++: static vtkPVFileInformationHelper *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPVFileInformationHelper_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPVFileInformationHelper\nC++: vtkPVFileInformationHelper *NewInstance()\n\n"},
  {"SetPath", PyvtkPVFileInformationHelper_SetPath, METH_VARARGS,
   "V.SetPath(string)\nC++: virtual void SetPath(const char *_arg)\n\nGet/Set the path to the directory/file whose information we are\ninterested in. This is ignored when SpecialDirectories is set to\nTrue.\n"},
  {"GetPath", PyvtkPVFileInformationHelper_GetPath, METH_VARARGS,
   "V.GetPath() -> string\nC++: virtual char *GetPath()\n\nGet/Set the path to the directory/file whose information we are\ninterested in. This is ignored when SpecialDirectories is set to\nTrue.\n"},
  {"SetWorkingDirectory", PyvtkPVFileInformationHelper_SetWorkingDirectory, METH_VARARGS,
   "V.SetWorkingDirectory(string)\nC++: virtual void SetWorkingDirectory(const char *_arg)\n\nGet/Set the current working directory. This is needed if Path is\nrelative. The relative path will be converted to absolute path\nusing the working directory specified before obtaining\ninformation about it. If 0 (default), then the application's\ncurrent working directory will be used to flatten relative paths.\n"},
  {"GetWorkingDirectory", PyvtkPVFileInformationHelper_GetWorkingDirectory, METH_VARARGS,
   "V.GetWorkingDirectory() -> string\nC++: virtual char *GetWorkingDirectory()\n\nGet/Set the current working directory. This is needed if Path is\nrelative. The relative path will be converted to absolute path\nusing the working directory specified before obtaining\ninformation about it. If 0 (default), then the application's\ncurrent working directory will be used to flatten relative paths.\n"},
  {"GetDirectoryListing", PyvtkPVFileInformationHelper_GetDirectoryListing, METH_VARARGS,
   "V.GetDirectoryListing() -> int\nC++: virtual int GetDirectoryListing()\n\nGet/Set if the we should attempt to get the information of\ncontents if Path is a directory. Default value is 0. This is\nignored when SpecialDirectories is set to True.\n"},
  {"SetDirectoryListing", PyvtkPVFileInformationHelper_SetDirectoryListing, METH_VARARGS,
   "V.SetDirectoryListing(int)\nC++: virtual void SetDirectoryListing(int _arg)\n\nGet/Set if the we should attempt to get the information of\ncontents if Path is a directory. Default value is 0. This is\nignored when SpecialDirectories is set to True.\n"},
  {"DirectoryListingOn", PyvtkPVFileInformationHelper_DirectoryListingOn, METH_VARARGS,
   "V.DirectoryListingOn()\nC++: virtual void DirectoryListingOn()\n\nGet/Set if the we should attempt to get the information of\ncontents if Path is a directory. Default value is 0. This is\nignored when SpecialDirectories is set to True.\n"},
  {"DirectoryListingOff", PyvtkPVFileInformationHelper_DirectoryListingOff, METH_VARARGS,
   "V.DirectoryListingOff()\nC++: virtual void DirectoryListingOff()\n\nGet/Set if the we should attempt to get the information of\ncontents if Path is a directory. Default value is 0. This is\nignored when SpecialDirectories is set to True.\n"},
  {"GetSpecialDirectories", PyvtkPVFileInformationHelper_GetSpecialDirectories, METH_VARARGS,
   "V.GetSpecialDirectories() -> int\nC++: virtual int GetSpecialDirectories()\n\nGet/Set if the query is for special directories. Off by default.\nIf set to true, Path and DirectoryListing are ignored and the\nvtkPVFileInformation object is populated with information about\nspecial directories such as \"My Documents\", \"Desktop\" etc on\nWindows systems and \"Home\" on Unix based systems.\n"},
  {"SetSpecialDirectories", PyvtkPVFileInformationHelper_SetSpecialDirectories, METH_VARARGS,
   "V.SetSpecialDirectories(int)\nC++: virtual void SetSpecialDirectories(int _arg)\n\nGet/Set if the query is for special directories. Off by default.\nIf set to true, Path and DirectoryListing are ignored and the\nvtkPVFileInformation object is populated with information about\nspecial directories such as \"My Documents\", \"Desktop\" etc on\nWindows systems and \"Home\" on Unix based systems.\n"},
  {"SpecialDirectoriesOn", PyvtkPVFileInformationHelper_SpecialDirectoriesOn, METH_VARARGS,
   "V.SpecialDirectoriesOn()\nC++: virtual void SpecialDirectoriesOn()\n\nGet/Set if the query is for special directories. Off by default.\nIf set to true, Path and DirectoryListing are ignored and the\nvtkPVFileInformation object is populated with information about\nspecial directories such as \"My Documents\", \"Desktop\" etc on\nWindows systems and \"Home\" on Unix based systems.\n"},
  {"SpecialDirectoriesOff", PyvtkPVFileInformationHelper_SpecialDirectoriesOff, METH_VARARGS,
   "V.SpecialDirectoriesOff()\nC++: virtual void SpecialDirectoriesOff()\n\nGet/Set if the query is for special directories. Off by default.\nIf set to true, Path and DirectoryListing are ignored and the\nvtkPVFileInformation object is populated with information about\nspecial directories such as \"My Documents\", \"Desktop\" etc on\nWindows systems and \"Home\" on Unix based systems.\n"},
  {"GetFastFileTypeDetection", PyvtkPVFileInformationHelper_GetFastFileTypeDetection, METH_VARARGS,
   "V.GetFastFileTypeDetection() -> int\nC++: virtual int GetFastFileTypeDetection()\n\nWhen on, while listing a directory, whenever a group of files is\nencountered, we verify the type/accessibility of only the first\nfile in the group and assume that all other have similar\npermissions. On by default.\n"},
  {"SetFastFileTypeDetection", PyvtkPVFileInformationHelper_SetFastFileTypeDetection, METH_VARARGS,
   "V.SetFastFileTypeDetection(int)\nC++: virtual void SetFastFileTypeDetection(int _arg)\n\nWhen on, while listing a directory, whenever a group of files is\nencountered, we verify the type/accessibility of only the first\nfile in the group and assume that all other have similar\npermissions. On by default.\n"},
  {"GetPathSeparator", PyvtkPVFileInformationHelper_GetPathSeparator, METH_VARARGS,
   "V.GetPathSeparator() -> string\nC++: virtual char *GetPathSeparator()\n\nReturns the platform specific path separator.\n"},
  {"GetActiveFileIsReadable", PyvtkPVFileInformationHelper_GetActiveFileIsReadable, METH_VARARGS,
   "V.GetActiveFileIsReadable() -> bool\nC++: bool GetActiveFileIsReadable()\n\nReturns if this->Path is a readable file.\n"},
  {"GetActiveFileIsDirectory", PyvtkPVFileInformationHelper_GetActiveFileIsDirectory, METH_VARARGS,
   "V.GetActiveFileIsDirectory() -> bool\nC++: bool GetActiveFileIsDirectory()\n\nReturns if this->Path is a directory.\n"},
  {"LocalToUtf8Win32", PyvtkPVFileInformationHelper_LocalToUtf8Win32, METH_VARARGS,
   "V.LocalToUtf8Win32(string) -> string\nC++: static std::string LocalToUtf8Win32(const std::string &path)\n\nTransform local code page string to UTF8 string on windows only,\npass through otherwise\n"},
  {"Utf8ToLocalWin32", PyvtkPVFileInformationHelper_Utf8ToLocalWin32, METH_VARARGS,
   "V.Utf8ToLocalWin32(string) -> string\nC++: static std::string Utf8ToLocalWin32(const std::string &path)\n\nTransform utf8 string to local code page string on windows only,\npass through otherwise\n"},
  {"GetReadDetailedFileInformation", PyvtkPVFileInformationHelper_GetReadDetailedFileInformation, METH_VARARGS,
   "V.GetReadDetailedFileInformation() -> bool\nC++: virtual bool GetReadDetailedFileInformation()\n\nWhen off, while listing a directory we skip the expensive fstat\ncall on every file and instead return only their names and basic\ninformation about them. Defaults to off. To enable the detailed\ninformation like file size and modified time turn this on.\n"},
  {"SetReadDetailedFileInformation", PyvtkPVFileInformationHelper_SetReadDetailedFileInformation, METH_VARARGS,
   "V.SetReadDetailedFileInformation(bool)\nC++: virtual void SetReadDetailedFileInformation(bool _arg)\n\nWhen off, while listing a directory we skip the expensive fstat\ncall on every file and instead return only their names and basic\ninformation about them. Defaults to off. To enable the detailed\ninformation like file size and modified time turn this on.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPVFileInformationHelper_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVClientServerCoreCorePython.vtkPVFileInformationHelper", // tp_name
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
  PyvtkPVFileInformationHelper_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPVFileInformationHelper_StaticNew()
{
  return vtkPVFileInformationHelper::New();
}

PyObject *PyvtkPVFileInformationHelper_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPVFileInformationHelper_Type, PyvtkPVFileInformationHelper_Methods,
    "vtkPVFileInformationHelper",
 &PyvtkPVFileInformationHelper_StaticNew);

  PyTypeObject *pytype = &PyvtkPVFileInformationHelper_Type;

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

void PyVTKAddFile_vtkPVFileInformationHelper(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPVFileInformationHelper_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPVFileInformationHelper", o) != 0)
  {
    Py_DECREF(o);
  }

}

