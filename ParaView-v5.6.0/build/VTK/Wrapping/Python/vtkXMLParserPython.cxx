// python wrapper for vtkXMLParser
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
#include "vtkXMLParser.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkXMLParser(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkXMLParser_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkXMLParser_Doc =
  "vtkXMLParser - Parse XML to handle element tags and attributes.\n\n"
  "Superclass: vtkObject\n\n"
  "vtkXMLParser reads a stream and parses XML element tags and\n"
  "corresponding attributes.  Each element begin tag and its attributes\n"
  "are sent to the StartElement method.  Each element end tag is sent to\n"
  "the EndElement method.  Subclasses should replace these methods to\n"
  "actually use the tags.\n\n";


static PyObject *
PyvtkXMLParser_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkXMLParser::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLParser_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLParser *op = static_cast<vtkXMLParser *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkXMLParser::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLParser_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkXMLParser *tempr = vtkXMLParser::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLParser_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLParser *op = static_cast<vtkXMLParser *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkXMLParser *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkXMLParser::NewInstance());

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
PyvtkXMLParser_TellG(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TellG");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLParser *op = static_cast<vtkXMLParser *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->TellG() :
      op->vtkXMLParser::TellG());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLParser_SeekG(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SeekG");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLParser *op = static_cast<vtkXMLParser *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SeekG(temp0);
    }
    else
    {
      op->vtkXMLParser::SeekG(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLParser_Parse_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Parse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLParser *op = static_cast<vtkXMLParser *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->Parse() :
      op->vtkXMLParser::Parse());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkXMLParser_Parse_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Parse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLParser *op = static_cast<vtkXMLParser *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->Parse(temp0) :
      op->vtkXMLParser::Parse(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkXMLParser_Parse_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Parse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLParser *op = static_cast<vtkXMLParser *>(vp);

  const char *temp0 = nullptr;
  unsigned int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->Parse(temp0, temp1) :
      op->vtkXMLParser::Parse(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkXMLParser_Parse(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkXMLParser_Parse_s1(self, args);
    case 1:
      return PyvtkXMLParser_Parse_s2(self, args);
    case 2:
      return PyvtkXMLParser_Parse_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Parse");
  return nullptr;
}



static PyObject *
PyvtkXMLParser_InitializeParser(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitializeParser");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLParser *op = static_cast<vtkXMLParser *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->InitializeParser() :
      op->vtkXMLParser::InitializeParser());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLParser_ParseChunk(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ParseChunk");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLParser *op = static_cast<vtkXMLParser *>(vp);

  const char *temp0 = nullptr;
  unsigned int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->ParseChunk(temp0, temp1) :
      op->vtkXMLParser::ParseChunk(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLParser_CleanupParser(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CleanupParser");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLParser *op = static_cast<vtkXMLParser *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->CleanupParser() :
      op->vtkXMLParser::CleanupParser());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLParser_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLParser *op = static_cast<vtkXMLParser *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFileName(temp0);
    }
    else
    {
      op->vtkXMLParser::SetFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLParser_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLParser *op = static_cast<vtkXMLParser *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkXMLParser::GetFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLParser_SetIgnoreCharacterData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIgnoreCharacterData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLParser *op = static_cast<vtkXMLParser *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetIgnoreCharacterData(temp0);
    }
    else
    {
      op->vtkXMLParser::SetIgnoreCharacterData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLParser_GetIgnoreCharacterData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIgnoreCharacterData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLParser *op = static_cast<vtkXMLParser *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetIgnoreCharacterData() :
      op->vtkXMLParser::GetIgnoreCharacterData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLParser_SetEncoding(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEncoding");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLParser *op = static_cast<vtkXMLParser *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEncoding(temp0);
    }
    else
    {
      op->vtkXMLParser::SetEncoding(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLParser_GetEncoding(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEncoding");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLParser *op = static_cast<vtkXMLParser *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetEncoding() :
      op->vtkXMLParser::GetEncoding());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkXMLParser_Methods[] = {
  {"IsTypeOf", PyvtkXMLParser_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkXMLParser_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkXMLParser_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkXMLParser\nC++: static vtkXMLParser *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkXMLParser_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkXMLParser\nC++: vtkXMLParser *NewInstance()\n\n"},
  {"TellG", PyvtkXMLParser_TellG, METH_VARARGS,
   "V.TellG() -> int\nC++: vtkTypeInt64 TellG()\n\nUsed by subclasses and their supporting classes.  These methods\nwrap around the tellg and seekg methods of the input stream to\nwork-around stream bugs on various platforms.\n"},
  {"SeekG", PyvtkXMLParser_SeekG, METH_VARARGS,
   "V.SeekG(int)\nC++: void SeekG(vtkTypeInt64 position)\n\nUsed by subclasses and their supporting classes.  These methods\nwrap around the tellg and seekg methods of the input stream to\nwork-around stream bugs on various platforms.\n"},
  {"Parse", PyvtkXMLParser_Parse, METH_VARARGS,
   "V.Parse() -> int\nC++: virtual int Parse()\nV.Parse(string) -> int\nC++: virtual int Parse(const char *inputString)\nV.Parse(string, int) -> int\nC++: virtual int Parse(const char *inputString,\n    unsigned int length)\n\nParse the XML input.\n"},
  {"InitializeParser", PyvtkXMLParser_InitializeParser, METH_VARARGS,
   "V.InitializeParser() -> int\nC++: virtual int InitializeParser()\n\nWhen parsing fragments of XML, or when streaming XML, use the\nfollowing three methods:\n- InitializeParser() initializes the parser but does not perform\n  any actual parsing.\n- ParseChunk() parses a fragment of XML; this has to match to\n  what was already parsed.\n- CleanupParser() finishes parsing; if there were errors, it will\nreport them.\n"},
  {"ParseChunk", PyvtkXMLParser_ParseChunk, METH_VARARGS,
   "V.ParseChunk(string, int) -> int\nC++: virtual int ParseChunk(const char *inputString,\n    unsigned int length)\n\nWhen parsing fragments of XML, or when streaming XML, use the\nfollowing three methods:\n- InitializeParser() initializes the parser but does not perform\n  any actual parsing.\n- ParseChunk() parses a fragment of XML; this has to match to\n  what was already parsed.\n- CleanupParser() finishes parsing; if there were errors, it will\nreport them.\n"},
  {"CleanupParser", PyvtkXMLParser_CleanupParser, METH_VARARGS,
   "V.CleanupParser() -> int\nC++: virtual int CleanupParser()\n\nWhen parsing fragments of XML, or when streaming XML, use the\nfollowing three methods:\n- InitializeParser() initializes the parser but does not perform\n  any actual parsing.\n- ParseChunk() parses a fragment of XML; this has to match to\n  what was already parsed.\n- CleanupParser() finishes parsing; if there were errors, it will\nreport them.\n"},
  {"SetFileName", PyvtkXMLParser_SetFileName, METH_VARARGS,
   "V.SetFileName(string)\nC++: virtual void SetFileName(const char *_arg)\n\nSet and get file name.\n"},
  {"GetFileName", PyvtkXMLParser_GetFileName, METH_VARARGS,
   "V.GetFileName() -> string\nC++: virtual char *GetFileName()\n\nSet and get file name.\n"},
  {"SetIgnoreCharacterData", PyvtkXMLParser_SetIgnoreCharacterData, METH_VARARGS,
   "V.SetIgnoreCharacterData(int)\nC++: virtual void SetIgnoreCharacterData(int _arg)\n\nIf this is off (the default), CharacterDataHandler will be called\nto process text within XML Elements. If this is on, the text will\nbe ignored.\n"},
  {"GetIgnoreCharacterData", PyvtkXMLParser_GetIgnoreCharacterData, METH_VARARGS,
   "V.GetIgnoreCharacterData() -> int\nC++: virtual int GetIgnoreCharacterData()\n\nIf this is off (the default), CharacterDataHandler will be called\nto process text within XML Elements. If this is on, the text will\nbe ignored.\n"},
  {"SetEncoding", PyvtkXMLParser_SetEncoding, METH_VARARGS,
   "V.SetEncoding(string)\nC++: virtual void SetEncoding(const char *_arg)\n\nSet and get the encoding the parser should expect (nullptr\ndefaults to Expat's own default encoder, i.e UTF-8). This should\nbe set before parsing (i.e. a call to Parse()) or even\ninitializing the parser (i.e. a call to InitializeParser())\n"},
  {"GetEncoding", PyvtkXMLParser_GetEncoding, METH_VARARGS,
   "V.GetEncoding() -> string\nC++: virtual char *GetEncoding()\n\nSet and get the encoding the parser should expect (nullptr\ndefaults to Expat's own default encoder, i.e UTF-8). This should\nbe set before parsing (i.e. a call to Parse()) or even\ninitializing the parser (i.e. a call to InitializeParser())\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkXMLParser_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOXMLParserPython.vtkXMLParser", // tp_name
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
  PyvtkXMLParser_Doc, // tp_doc
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

static vtkObjectBase *PyvtkXMLParser_StaticNew()
{
  return vtkXMLParser::New();
}

PyObject *PyvtkXMLParser_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkXMLParser_Type, PyvtkXMLParser_Methods,
    "vtkXMLParser",
 &PyvtkXMLParser_StaticNew);

  PyTypeObject *pytype = &PyvtkXMLParser_Type;

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

void PyVTKAddFile_vtkXMLParser(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkXMLParser_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkXMLParser", o) != 0)
  {
    Py_DECREF(o);
  }

}

