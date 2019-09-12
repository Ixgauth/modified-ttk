// python wrapper for vtkSMCompositeTreeDomain
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
#include "vtkSMCompositeTreeDomain.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMCompositeTreeDomain(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMCompositeTreeDomain_ClassNew(); }

#ifndef DECLARED_PyvtkSMDomain_ClassNew
extern "C" { PyObject *PyvtkSMDomain_ClassNew(); }
#define DECLARED_PyvtkSMDomain_ClassNew
#endif

static const char *PyvtkSMCompositeTreeDomain_Doc =
  "vtkSMCompositeTreeDomain - domain used to restrict an\nvtkSMIntVectorProperty values to valid flat-index for a\nvtkCompositeDataSet.\n\n"
  "Superclass: vtkSMDomain\n\n"
  "vtkSMCompositeTreeDomain can be added to a vtkSMIntVectorProperty.\n"
  "This domain requires a vtkSMInputProperty which is used to provide\n"
  "the input to the filter. This domain obtains data information from\n"
  "the input selected on the required input property and then decides\n"
  "the range for values the property can have.\n\n"
  "Broadly speaking, there are two ways of identifying unique node in a\n"
  "composite dataset: `flat-index` (also called `composite-index`) and\n"
  "`level-block-index`. `flat-index` applies to all types of composite\n"
  "datasets while `level-block-index` (or just `level-index`) applies\n"
  "only to AMR datasets. `flat-index` for any node in an arbitrary\n"
  "composite-dataset is simply the index of that node in a pre-order\n"
  "traversal of the tree with the root composite-dataset getting the\n"
  "index 0. `level-index` for an AMR dataset is the AMR level number\n"
  "while `level-block-index` is a pair of the AMR level number and block\n"
  "number for the node in that level.\n\n"
  "The type of index the property expects, is defined by the domain's\n"
  "mode. Supported modes are:\n"
  "-# vtkSMCompositeTreeDomain::ALL: (default)\n\n\n"
  "    The property uses `flat-index` and can accept index for any node\n"
  "(leaf or non-leaf).\n"
  "    This can be specified in XML using the `mode=\"all\"`.\n\n"
  "-# vtkSMCompositeTreeDomain::LEAVES:\n\n\n"
  "    The property uses `flat-index` however can only accept\n"
  "flat-indices for\n"
  "    leaf-nodes.\n"
  "    This can be specified in XML using the `mode=\"leaves\"`.\n\n"
  "-# vtkSMCompositeTreeDomain::AMR:\n\n\n"
  "    The property uses `level-index` i.e. AMR level number or\n"
  "    `level-block-index`. If the property has 2 elements (or for\n"
  "repeatable\n"
  "    properties, if number of elements per command is 2) then\n"
  "    `level-block-index` is used, otherwise simply the `level-index`\n"
  "is used.\n"
  "    This only makes sense for filters dealing with AMR datasets.\n"
  "    This can be specified in XML using the `mode=\"amr\"`.\n\n"
  "-# vtkSMCompositeTreeDomain::NON_LEAVES: (deprecated)\n\n\n"
  "    No longer supported (as of ParaView 5.4) and simply interpreted\n"
  "as\n"
  "    vtkSMCompositeTreeDomain::ALL.\n"
  "    This used to be specified in XML using the `mode=\"non-leaves\"`.\n\n"
  "vtkSMCompositeTreeDomain also provides ability to set default value\n"
  "on the property. If mode is LEAVES, then the default value selected\n"
  "is the first non-null leaf node. If mode is ALL, the same behaviour\n"
  "for default value is possible by using `default_mode=\"nonempty-leaf\"`\n"
  "in XML. e.g.{.xml}\n"
  "  <CompositeTreeDomain name=\"tree\" mode=\"all\"\n"
  "default_mode=\"nonempty-leaf\">\n"
  "    \n"
  "      <Property function=\"Input\" name=\"Input\" />\n"
  "    \n"
  "  \n\n";

static PyTypeObject PyvtkSMCompositeTreeDomain_DefaultModes_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerCorePython.vtkSMCompositeTreeDomain.DefaultModes", // tp_name
  sizeof(PyIntObject), // tp_basicsize
  0, // tp_itemsize
  nullptr, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  nullptr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  nullptr, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  nullptr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  nullptr, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  &PyInt_Type, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  nullptr, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

PyObject *PyvtkSMCompositeTreeDomain_DefaultModes_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkSMCompositeTreeDomain_DefaultModes_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkSMCompositeTreeDomain_DefaultModes_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkSMCompositeTreeDomain_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMCompositeTreeDomain::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMCompositeTreeDomain_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCompositeTreeDomain *op = static_cast<vtkSMCompositeTreeDomain *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMCompositeTreeDomain::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMCompositeTreeDomain_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMCompositeTreeDomain *tempr = vtkSMCompositeTreeDomain::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMCompositeTreeDomain_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCompositeTreeDomain *op = static_cast<vtkSMCompositeTreeDomain *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMCompositeTreeDomain *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMCompositeTreeDomain::NewInstance());

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
PyvtkSMCompositeTreeDomain_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCompositeTreeDomain *op = static_cast<vtkSMCompositeTreeDomain *>(vp);

  vtkSMProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProperty"))
  {
    if (ap.IsBound())
    {
      op->Update(temp0);
    }
    else
    {
      op->vtkSMCompositeTreeDomain::Update(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMCompositeTreeDomain_GetInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCompositeTreeDomain *op = static_cast<vtkSMCompositeTreeDomain *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVDataInformation *tempr = (ap.IsBound() ?
      op->GetInformation() :
      op->vtkSMCompositeTreeDomain::GetInformation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMCompositeTreeDomain_GetSource(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSource");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCompositeTreeDomain *op = static_cast<vtkSMCompositeTreeDomain *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMSourceProxy *tempr = (ap.IsBound() ?
      op->GetSource() :
      op->vtkSMCompositeTreeDomain::GetSource());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMCompositeTreeDomain_GetSourcePort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSourcePort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCompositeTreeDomain *op = static_cast<vtkSMCompositeTreeDomain *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSourcePort() :
      op->vtkSMCompositeTreeDomain::GetSourcePort());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMCompositeTreeDomain_IsInDomain(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsInDomain");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCompositeTreeDomain *op = static_cast<vtkSMCompositeTreeDomain *>(vp);

  vtkSMProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProperty"))
  {
    int tempr = (ap.IsBound() ?
      op->IsInDomain(temp0) :
      op->vtkSMCompositeTreeDomain::IsInDomain(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMCompositeTreeDomain_GetMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCompositeTreeDomain *op = static_cast<vtkSMCompositeTreeDomain *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMode() :
      op->vtkSMCompositeTreeDomain::GetMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMCompositeTreeDomain_SetMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCompositeTreeDomain *op = static_cast<vtkSMCompositeTreeDomain *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMode(temp0);
    }
    else
    {
      op->vtkSMCompositeTreeDomain::SetMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMCompositeTreeDomain_GetDefaultMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCompositeTreeDomain *op = static_cast<vtkSMCompositeTreeDomain *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDefaultMode() :
      op->vtkSMCompositeTreeDomain::GetDefaultMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMCompositeTreeDomain_SetDefaultMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDefaultMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCompositeTreeDomain *op = static_cast<vtkSMCompositeTreeDomain *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDefaultMode(temp0);
    }
    else
    {
      op->vtkSMCompositeTreeDomain::SetDefaultMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMCompositeTreeDomain_SetDefaultValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDefaultValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCompositeTreeDomain *op = static_cast<vtkSMCompositeTreeDomain *>(vp);

  vtkSMProperty *temp0 = nullptr;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMProperty") &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->SetDefaultValues(temp0, temp1) :
      op->vtkSMCompositeTreeDomain::SetDefaultValues(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSMCompositeTreeDomain_Methods[] = {
  {"IsTypeOf", PyvtkSMCompositeTreeDomain_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMCompositeTreeDomain_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMCompositeTreeDomain_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSMCompositeTreeDomain\nC++: static vtkSMCompositeTreeDomain *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMCompositeTreeDomain_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSMCompositeTreeDomain\nC++: vtkSMCompositeTreeDomain *NewInstance()\n\n"},
  {"Update", PyvtkSMCompositeTreeDomain_Update, METH_VARARGS,
   "V.Update(vtkSMProperty)\nC++: void Update(vtkSMProperty *input) override;\n\nCalled when the 'required-property' is modified. The property\nmust be a vtkSMInputProperty. This will obtain the composite data\ninformation for the input source and then determine the valid\nrange for the flat-index.\n"},
  {"GetInformation", PyvtkSMCompositeTreeDomain_GetInformation, METH_VARARGS,
   "V.GetInformation() -> vtkPVDataInformation\nC++: virtual vtkPVDataInformation *GetInformation()\n\nGet the vtkPVDataInformation which provides the tree structure\nfor the composite dataset.\n"},
  {"GetSource", PyvtkSMCompositeTreeDomain_GetSource, METH_VARARGS,
   "V.GetSource() -> vtkSMSourceProxy\nC++: vtkSMSourceProxy *GetSource()\n\nReturns the source proxy whose data information is returned by\nGetInformation().\n"},
  {"GetSourcePort", PyvtkSMCompositeTreeDomain_GetSourcePort, METH_VARARGS,
   "V.GetSourcePort() -> int\nC++: virtual int GetSourcePort()\n\nReturns the port for the source proxy from which the data\ninformation is obtained by GetInformation().\n"},
  {"IsInDomain", PyvtkSMCompositeTreeDomain_IsInDomain, METH_VARARGS,
   "V.IsInDomain(vtkSMProperty) -> int\nC++: int IsInDomain(vtkSMProperty *property) override;\n\nIs the (unchecked) value of the property in the domain?\nOverwritten by sub-classes.\n"},
  {"GetMode", PyvtkSMCompositeTreeDomain_GetMode, METH_VARARGS,
   "V.GetMode() -> int\nC++: virtual int GetMode()\n\nMode indicates if the property is interested in all nodes, leaves\nonly or non-leaves only. Can be configured in XML using the\n\"mode\" attribute. Values can be \"all\", \"leaves\", \"non-leaves\".\nDefault is all nodes.\n"},
  {"SetMode", PyvtkSMCompositeTreeDomain_SetMode, METH_VARARGS,
   "V.SetMode(int)\nC++: virtual void SetMode(int _arg)\n\nMode indicates if the property is interested in all nodes, leaves\nonly or non-leaves only. Can be configured in XML using the\n\"mode\" attribute. Values can be \"all\", \"leaves\", \"non-leaves\".\nDefault is all nodes.\n"},
  {"GetDefaultMode", PyvtkSMCompositeTreeDomain_GetDefaultMode, METH_VARARGS,
   "V.GetDefaultMode() -> int\nC++: virtual int GetDefaultMode()\n\nDefaultMode controls how the default value for the property is\nset by SetDefaultValues(). DEFAULT implies the default value is\npicked based on the default strategy for the selected Mode.\nNONEMPTY_LEAF indicates that the first non-empty leaf node is set\nas the default value, if possible.\n"},
  {"SetDefaultMode", PyvtkSMCompositeTreeDomain_SetDefaultMode, METH_VARARGS,
   "V.SetDefaultMode(int)\nC++: virtual void SetDefaultMode(int _arg)\n\nDefaultMode controls how the default value for the property is\nset by SetDefaultValues(). DEFAULT implies the default value is\npicked based on the default strategy for the selected Mode.\nNONEMPTY_LEAF indicates that the first non-empty leaf node is set\nas the default value, if possible.\n"},
  {"SetDefaultValues", PyvtkSMCompositeTreeDomain_SetDefaultValues, METH_VARARGS,
   "V.SetDefaultValues(vtkSMProperty, bool) -> int\nC++: int SetDefaultValues(vtkSMProperty *,\n    bool use_unchecked_values) override;\n\nA vtkSMProperty is often defined with a default value in the XML\nitself. However, many times, the default value must be determined\nat run time. To facilitate this, domains can override this method\nto compute and set the default value for the property. Note that\nunlike the compile-time default values, the application must\nexplicitly call this method to initialize the property. Returns 1\nif the domain updated the property.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMCompositeTreeDomain_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerCorePython.vtkSMCompositeTreeDomain", // tp_name
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
  PyvtkSMCompositeTreeDomain_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSMCompositeTreeDomain_StaticNew()
{
  return vtkSMCompositeTreeDomain::New();
}

PyObject *PyvtkSMCompositeTreeDomain_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMCompositeTreeDomain_Type, PyvtkSMCompositeTreeDomain_Methods,
    "vtkSMCompositeTreeDomain",
 &PyvtkSMCompositeTreeDomain_StaticNew);

  PyTypeObject *pytype = &PyvtkSMCompositeTreeDomain_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkSMDomain_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkSMCompositeTreeDomain_DefaultModes_Type);
  PyvtkSMCompositeTreeDomain_DefaultModes_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkSMCompositeTreeDomain_DefaultModes_Type);

  o = (PyObject *)&PyvtkSMCompositeTreeDomain_DefaultModes_Type;
  if (PyDict_SetItemString(d, "DefaultModes", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 5; c++)
  {
    static const struct { const char *name; int value; }
      constants[5] = {
        { "ALL", vtkSMCompositeTreeDomain::ALL },
        { "LEAVES", vtkSMCompositeTreeDomain::LEAVES },
        { "NON_LEAVES", vtkSMCompositeTreeDomain::NON_LEAVES },
        { "NONE", vtkSMCompositeTreeDomain::NONE },
        { "AMR", vtkSMCompositeTreeDomain::AMR },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 2; c++)
  {
    typedef vtkSMCompositeTreeDomain::DefaultModes cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[2] = {
        { "DEFAULT", vtkSMCompositeTreeDomain::DEFAULT },
        { "NONEMPTY_LEAF", vtkSMCompositeTreeDomain::NONEMPTY_LEAF },
      };

    o = PyvtkSMCompositeTreeDomain_DefaultModes_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSMCompositeTreeDomain(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMCompositeTreeDomain_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMCompositeTreeDomain", o) != 0)
  {
    Py_DECREF(o);
  }

}

