// python wrapper for vtkUnicodeString
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkStdString.h"
#include "vtkUnicodeString.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkUnicodeString(PyObject *); }

static const char *PyvtkUnicodeString_Doc =
  "vtkUnicodeString - String class that stores Unicode text.\n\n"
  "vtkUnicodeString provides storage for Unicode text.  Conceptually, it\n"
  "acts as a container for a sequence of Unicode characters, providing a\n"
  "public interface similar to basic_string.  For character-oriented\n"
  "operations, this means reading / writing 32-bit UTF-32 / UCS-4\n"
  "characters. Internally, characters may be stored using\n"
  "variable-length encodings for efficiency. Explicit conversions\n"
  "to-and-from other encodings are provided, and implicit conversions\n"
  "are deliberately avoided, to avoid confusion.\n\n"
  "Note that, because vtkUnicodeString uses variable-length encodings\n"
  "for storage, character-oriented operations will generally provide\n"
  "O(N) access instead of O(1).\n\n"
  "The current implementation stores the sequence with UTF-8 encoding,\n"
  "but this choice is subject to change and might become a compile-time\n"
  "or run-time option.\n\n"
  "@par Thanks: Developed by Timothy M. Shead (tshead@sandia.gov) at\n"
  "Sandia National Laboratories.\n\n"
  "vtkUnicodeString()\n"
  "vtkUnicodeString(const vtkUnicodeString &)\n";


static PyObject *
PyvtkUnicodeString_is_utf8(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "is_utf8");

  std::string temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = vtkUnicodeString::is_utf8(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnicodeString_from_utf8_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "from_utf8");

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkUnicodeString tempr = vtkUnicodeString::from_utf8(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkUnicodeString_from_utf8_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "from_utf8");

  std::string temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkUnicodeString tempr = vtkUnicodeString::from_utf8(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkUnicodeString_from_utf8(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 2:
      return PyvtkUnicodeString_from_utf8_s1(self, args);
    case 1:
      return PyvtkUnicodeString_from_utf8_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "from_utf8");
  return nullptr;
}



static PyObject *
PyvtkUnicodeString_from_utf16(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "from_utf16");

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<unsigned short> store0(size0);
  unsigned short *temp0 = store0.Data();
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkUnicodeString tempr = vtkUnicodeString::from_utf16(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnicodeString_utf8_str_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "utf8_str");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkUnicodeString *op = static_cast<vtkUnicodeString *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = op->utf8_str();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkUnicodeString_utf8_str_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "utf8_str");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkUnicodeString *op = static_cast<vtkUnicodeString *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->utf8_str(temp0);

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(0, temp0);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkUnicodeString_utf8_str(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkUnicodeString_utf8_str_s1(self, args);
    case 1:
      return PyvtkUnicodeString_utf8_str_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "utf8_str");
  return nullptr;
}



static PyObject *
PyvtkUnicodeString_empty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "empty");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkUnicodeString *op = static_cast<vtkUnicodeString *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = op->empty();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnicodeString_push_back(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "push_back");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkUnicodeString *op = static_cast<vtkUnicodeString *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->push_back(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnicodeString_append(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "append");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkUnicodeString *op = static_cast<vtkUnicodeString *>(vp);

  vtkUnicodeString temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->append(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnicodeString_assign(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "assign");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkUnicodeString *op = static_cast<vtkUnicodeString *>(vp);

  vtkUnicodeString temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->assign(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnicodeString_clear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "clear");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkUnicodeString *op = static_cast<vtkUnicodeString *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    op->clear();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnicodeString_fold_case(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "fold_case");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkUnicodeString *op = static_cast<vtkUnicodeString *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkUnicodeString tempr = op->fold_case();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnicodeString_compare(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "compare");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkUnicodeString *op = static_cast<vtkUnicodeString *>(vp);

  vtkUnicodeString temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = op->compare(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnicodeString_swap(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "swap");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkUnicodeString *op = static_cast<vtkUnicodeString *>(vp);

  vtkUnicodeString temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->swap(temp0);

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(0, temp0);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkUnicodeString_Methods[] = {
  {"is_utf8", PyvtkUnicodeString_is_utf8, METH_VARARGS,
   "V.is_utf8(string) -> bool\nC++: static bool is_utf8(const std::string &)\n\nTests a sequence of bytes, returning true iff they are a valid\nUTF-8 sequence.\n"},
  {"from_utf8", PyvtkUnicodeString_from_utf8, METH_VARARGS,
   "V.from_utf8(string, string) -> unicode\nC++: static vtkUnicodeString from_utf8(const char *begin,\n    const char *end)\nV.from_utf8(string) -> unicode\nC++: static vtkUnicodeString from_utf8(const std::string &)\n\n"},
  {"from_utf16", PyvtkUnicodeString_from_utf16, METH_VARARGS,
   "V.from_utf16((int, ...)) -> unicode\nC++: static vtkUnicodeString from_utf16(const vtkTypeUInt16 *)\n\nConstructs a string from a null-terminated sequence of UTF-16\nencoded characters.\n"},
  {"utf8_str", PyvtkUnicodeString_utf8_str, METH_VARARGS,
   "V.utf8_str() -> string\nC++: const char *utf8_str()\nV.utf8_str(string)\nC++: void utf8_str(std::string &result)\n\nReturns the sequence as a null-terminated sequence of UTF-8\nencoded characters.\n"},
  {"empty", PyvtkUnicodeString_empty, METH_VARARGS,
   "V.empty() -> bool\nC++: bool empty()\n\nReturns true if the string contains an empty sequence.\n"},
  {"push_back", PyvtkUnicodeString_push_back, METH_VARARGS,
   "V.push_back(int)\nC++: void push_back(value_type)\n\nAppend a Unicode character to the end of the sequence.\n"},
  {"append", PyvtkUnicodeString_append, METH_VARARGS,
   "V.append(unicode)\nC++: void append(const vtkUnicodeString &value)\n\nAppend Unicode to the current sequence.\n"},
  {"assign", PyvtkUnicodeString_assign, METH_VARARGS,
   "V.assign(unicode)\nC++: void assign(const vtkUnicodeString &value)\n\nReplace the current sequence with another.\n"},
  {"clear", PyvtkUnicodeString_clear, METH_VARARGS,
   "V.clear()\nC++: void clear()\n\nResets the string to an empty sequence\n"},
  {"fold_case", PyvtkUnicodeString_fold_case, METH_VARARGS,
   "V.fold_case() -> unicode\nC++: vtkUnicodeString fold_case()\n\nReturns a copy of the current sequence, modified so that\ndifferences in case are eliminated.  Thus, you can run\nfold_case() on two strings and then comparse them to obtain a\ncase-insensitive comparison.  Note that the string returned by\nfold_case() may be larger than the original source sequence,\n\n* See http://www.unicode.org/Public/UNIDATA/CaseFolding.txt for\n  details.\n"},
  {"compare", PyvtkUnicodeString_compare, METH_VARARGS,
   "V.compare(unicode) -> int\nC++: int compare(const vtkUnicodeString &)\n\nReturns a negative value if the sequence compares less-than the\noperand sequence, zero if the two sequences compare equal, or a\npositive value otherwise.  Note that the definition of\n\"less-than\" is undefined, so you should use some other method if\nyou wish to establish a specific ordering (such as alphabetical).\n"},
  {"swap", PyvtkUnicodeString_swap, METH_VARARGS,
   "V.swap(unicode)\nC++: void swap(vtkUnicodeString &)\n\nSwap the sequences stored by two strings.\n"},
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkUnicodeString_vtkUnicodeString_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkUnicodeString");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkUnicodeString *op = new vtkUnicodeString();

    result = PyVTKSpecialObject_New("vtkUnicodeString", op);
  }

  return result;
}

static PyObject *
PyvtkUnicodeString_vtkUnicodeString_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkUnicodeString");

  vtkUnicodeString temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkUnicodeString *op = new vtkUnicodeString(temp0);

    result = PyVTKSpecialObject_New("vtkUnicodeString", op);
  }

  return result;
}

static PyMethodDef PyvtkUnicodeString_vtkUnicodeString_Methods[] = {
  {nullptr, PyvtkUnicodeString_vtkUnicodeString_s2, METH_VARARGS,
   "@u"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkUnicodeString_vtkUnicodeString(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkUnicodeString_vtkUnicodeString_s1(self, args);
    case 1:
      return PyvtkUnicodeString_vtkUnicodeString_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkUnicodeString");
  return nullptr;
}


static PyObject *
PyvtkUnicodeString_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkUnicodeString_vtkUnicodeString(nullptr, args);
}

static void PyvtkUnicodeString_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkUnicodeString *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkUnicodeString_Hash(PyObject *self)
{
#if PY_VERSION_HEX >= 0x020600B2
  return PyObject_HashNotImplemented(self);
#else
  char text[256];
  sprintf(text, "unhashable type: '%s'", Py_TYPE(self)->tp_name);
  PyErr_SetString(PyExc_TypeError, text);
  return -1;
#endif
}

static PyTypeObject PyvtkUnicodeString_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkUnicodeString", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkUnicodeString_Delete, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkUnicodeString_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkUnicodeString_Doc, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  nullptr, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  PyvtkUnicodeString_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkUnicodeString_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkUnicodeString(*static_cast<const vtkUnicodeString*>(obj));
  }
  return 0;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkUnicodeString_TypeNew(); }

PyObject *PyvtkUnicodeString_TypeNew()
{
  PyVTKSpecialType_Add(
    &PyvtkUnicodeString_Type,
    PyvtkUnicodeString_Methods,
    PyvtkUnicodeString_vtkUnicodeString_Methods,
    &PyvtkUnicodeString_CCopy);

  PyTypeObject *pytype = &PyvtkUnicodeString_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkUnicodeString(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkUnicodeString_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkUnicodeString", o) != 0)
  {
    Py_DECREF(o);
  }

}

