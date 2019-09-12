// python wrapper for vtkRectilinearGridConnectivity
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
#include "vtkRectilinearGridConnectivity.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkRectilinearGridConnectivity(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkRectilinearGridConnectivity_ClassNew(); }

#ifndef DECLARED_PyvtkMultiBlockDataSetAlgorithm_ClassNew
extern "C" { PyObject *PyvtkMultiBlockDataSetAlgorithm_ClassNew(); }
#define DECLARED_PyvtkMultiBlockDataSetAlgorithm_ClassNew
#endif

static const char *PyvtkRectilinearGridConnectivity_Doc =
  "vtkRectilinearGridConnectivity - Extracts material fragments from\n multi-block vtkRectilinearGrid datasets based on the selected volume\n fraction array(s) and a fraction isovalue and integrates the\nassociated\n attributes.\n\n"
  "Superclass: vtkMultiBlockDataSetAlgorithm\n\n"
  "Given one or multiple vtkRectilinearGrid datasets with one or\n"
  "multiple\n"
  " volume fraction arrays (representing some materials) and possibly\n"
  "other\n"
  " attributes (like pressure, density, and et al) as the cell data,\n"
  "this\n"
  " filter extracts fragments from the dual grids (with the\n"
  "aforementioned\n"
  " values as the point data) based on the (at least one) selected\n"
  "fraction\n"
  " array(s) in combination with a specified fraction value and\n"
  "integrates\n"
  " the attributes (e.g., volume, pressure, density) across the surface\n"
  "of\n"
  " each fragment. Each material, made up of one or multiple\n"
  "disconnected\n"
  " fragments, is exported to the output vtkMultiBlockDataSet as a\n"
  "single\n"
  " block that is a vtkPolyData storing the exterior polygons of the\n"
  "fragment\n"
  " (s) and the associated cell data attributes as the integrated result\n"
  "(of\n"
  " the fragment) in terms of the volume, pressure, density, and et al.\n\n\n"
  " This filter differs from a closely related filter\n"
  "vtkGridConnectivity in\n"
  " that the former extracts fragments at a sub-cell resolution to\n"
  "create\n"
  " relatively smooth surfaces while the latter works at the cell\n"
  "granularity\n"
  " (a whole cell is taken as either inside or outside a fragment) to\n"
  "cause\n"
  " staircasing artifacts. In fact, an extended 256-entry marching cubes\n"
  " LUT is designed for generating cube faces (either truncated by\n"
  "iso-lines\n"
  " or not) in addition to iso-triangles. These two kinds of polygons in\n"
  " combination represent the surface(s) of the greater-than-isovalue\n"
  "sub-\n"
  " volume(s) extracted in a cube.\n\n\n"
  " vtkRectilinearGridConnectivity performs fragments extraction using a\n"
  " three-level mechanism, i.e., intra-process intra-block,\n"
  "intra-process\n"
  " inter-block, and inter-process in increasing order, with the\n"
  "fragments\n"
  " extracted (in the form of polygons stored as a vtkPolyData) at a\n"
  "lower\n"
  " level submitted to its upper level for further extraction\n"
  "(specifically\n"
  " by combining multiple disconnected fragments into a single one\n"
  "wherever\n"
  " possible). Since a fragment is represented by means of its exterior\n"
  "faces\n"
  " / polygons, extracting fragments turns into the task of detecting\n"
  "and\n"
  " removing internal faces (an internal face is the one shared by two\n"
  "sub-\n"
  " volumes or fragments) in a way of combining the associated\n"
  "sub-volumes or\n"
  " fragments. For the fragemnts extraction conducted at any level, the\n"
  " polygons of the input (e.g., greater-than-isovalue sub-volumes\n"
  "resulting\n"
  " from marching cubes for the lowest level extraction) are pushed to a\n"
  "face\n"
  " hash (that accepts the three smallest point Ids of a polygon:\n"
  "triangle,\n"
  " quad, or pentagon) on a per sub-volume or fragment basis. Once the\n"
  "face\n"
  " hash detects an internal face, an entry is added to an equivalence\n"
  "set\n"
  " (by means of class vtkEquivalenceSet) to correlate the two fragment\n"
  "Ids\n"
  " that are attached to the two associated sub-volumes or fragments'\n"
  "polygons.\n"
  " After resolving the equivalence set, each face that remains in the\n"
  "face\n"
  " hash (internal faces are masked as invalid) is updated with a\n"
  "resolved\n"
  " fragment Id. In this way the original complete polygons (triangles,\n"
  "quads,\n"
  " pentagons) pointed to by the remaining hashed faces with the same\n"
  "resolved\n"
  " fragment Id are retrieved from the input vtkPolyData and hence\n"
  "combined by\n"
  " means of the same fragemnt Id.\n\n"
  "@sa\n"
  " vtkGridConnectivity vtkExtractCTHPart vtkPolyData vtkRectilinearGrid\n"
  " vtkMultiBlockDataSetAlgorithm\n\n";


static PyObject *
PyvtkRectilinearGridConnectivity_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkRectilinearGridConnectivity::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRectilinearGridConnectivity_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGridConnectivity *op = static_cast<vtkRectilinearGridConnectivity *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkRectilinearGridConnectivity::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRectilinearGridConnectivity_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkRectilinearGridConnectivity *tempr = vtkRectilinearGridConnectivity::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRectilinearGridConnectivity_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGridConnectivity *op = static_cast<vtkRectilinearGridConnectivity *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRectilinearGridConnectivity *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkRectilinearGridConnectivity::NewInstance());

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
PyvtkRectilinearGridConnectivity_SetVolumeFractionSurfaceValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVolumeFractionSurfaceValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGridConnectivity *op = static_cast<vtkRectilinearGridConnectivity *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVolumeFractionSurfaceValue(temp0);
    }
    else
    {
      op->vtkRectilinearGridConnectivity::SetVolumeFractionSurfaceValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRectilinearGridConnectivity_GetVolumeFractionSurfaceValueMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVolumeFractionSurfaceValueMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGridConnectivity *op = static_cast<vtkRectilinearGridConnectivity *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetVolumeFractionSurfaceValueMinValue() :
      op->vtkRectilinearGridConnectivity::GetVolumeFractionSurfaceValueMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRectilinearGridConnectivity_GetVolumeFractionSurfaceValueMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVolumeFractionSurfaceValueMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGridConnectivity *op = static_cast<vtkRectilinearGridConnectivity *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetVolumeFractionSurfaceValueMaxValue() :
      op->vtkRectilinearGridConnectivity::GetVolumeFractionSurfaceValueMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRectilinearGridConnectivity_GetVolumeFractionSurfaceValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVolumeFractionSurfaceValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGridConnectivity *op = static_cast<vtkRectilinearGridConnectivity *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetVolumeFractionSurfaceValue() :
      op->vtkRectilinearGridConnectivity::GetVolumeFractionSurfaceValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRectilinearGridConnectivity_RemoveAllVolumeArrayNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllVolumeArrayNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGridConnectivity *op = static_cast<vtkRectilinearGridConnectivity *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllVolumeArrayNames();
    }
    else
    {
      op->vtkRectilinearGridConnectivity::RemoveAllVolumeArrayNames();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRectilinearGridConnectivity_RemoveDoubleVolumeArrayNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveDoubleVolumeArrayNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGridConnectivity *op = static_cast<vtkRectilinearGridConnectivity *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveDoubleVolumeArrayNames();
    }
    else
    {
      op->vtkRectilinearGridConnectivity::RemoveDoubleVolumeArrayNames();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRectilinearGridConnectivity_RemoveFloatVolumeArrayNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveFloatVolumeArrayNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGridConnectivity *op = static_cast<vtkRectilinearGridConnectivity *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveFloatVolumeArrayNames();
    }
    else
    {
      op->vtkRectilinearGridConnectivity::RemoveFloatVolumeArrayNames();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRectilinearGridConnectivity_RemoveUnsignedCharVolumeArrayNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveUnsignedCharVolumeArrayNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGridConnectivity *op = static_cast<vtkRectilinearGridConnectivity *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveUnsignedCharVolumeArrayNames();
    }
    else
    {
      op->vtkRectilinearGridConnectivity::RemoveUnsignedCharVolumeArrayNames();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRectilinearGridConnectivity_AddDoubleVolumeArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddDoubleVolumeArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGridConnectivity *op = static_cast<vtkRectilinearGridConnectivity *>(vp);

  size_t size0 = ap.GetStringSize(0);
  vtkPythonArgs::Array<char> store0(2*size0 + 1);
  char *temp0 = store0.Data();
  char *save0 = temp0 + size0 + 1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->AddDoubleVolumeArrayName(temp0);
    }
    else
    {
      op->vtkRectilinearGridConnectivity::AddDoubleVolumeArrayName(temp0);
    }

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRectilinearGridConnectivity_AddFloatVolumeArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddFloatVolumeArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGridConnectivity *op = static_cast<vtkRectilinearGridConnectivity *>(vp);

  size_t size0 = ap.GetStringSize(0);
  vtkPythonArgs::Array<char> store0(2*size0 + 1);
  char *temp0 = store0.Data();
  char *save0 = temp0 + size0 + 1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->AddFloatVolumeArrayName(temp0);
    }
    else
    {
      op->vtkRectilinearGridConnectivity::AddFloatVolumeArrayName(temp0);
    }

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRectilinearGridConnectivity_AddUnsignedCharVolumeArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddUnsignedCharVolumeArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGridConnectivity *op = static_cast<vtkRectilinearGridConnectivity *>(vp);

  size_t size0 = ap.GetStringSize(0);
  vtkPythonArgs::Array<char> store0(2*size0 + 1);
  char *temp0 = store0.Data();
  char *save0 = temp0 + size0 + 1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->AddUnsignedCharVolumeArrayName(temp0);
    }
    else
    {
      op->vtkRectilinearGridConnectivity::AddUnsignedCharVolumeArrayName(temp0);
    }

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRectilinearGridConnectivity_AddVolumeArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddVolumeArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGridConnectivity *op = static_cast<vtkRectilinearGridConnectivity *>(vp);

  size_t size0 = ap.GetStringSize(0);
  vtkPythonArgs::Array<char> store0(2*size0 + 1);
  char *temp0 = store0.Data();
  char *save0 = temp0 + size0 + 1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->AddVolumeArrayName(temp0);
    }
    else
    {
      op->vtkRectilinearGridConnectivity::AddVolumeArrayName(temp0);
    }

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkRectilinearGridConnectivity_Methods[] = {
  {"IsTypeOf", PyvtkRectilinearGridConnectivity_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkRectilinearGridConnectivity_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkRectilinearGridConnectivity_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkRectilinearGridConnectivity\nC++: static vtkRectilinearGridConnectivity *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkRectilinearGridConnectivity_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkRectilinearGridConnectivity\nC++: vtkRectilinearGridConnectivity *NewInstance()\n\n"},
  {"SetVolumeFractionSurfaceValue", PyvtkRectilinearGridConnectivity_SetVolumeFractionSurfaceValue, METH_VARARGS,
   "V.SetVolumeFractionSurfaceValue(float)\nC++: virtual void SetVolumeFractionSurfaceValue(double _arg)\n\nSet / get the volume fraction value [0, 1] used for extracting\nfragments.\n"},
  {"GetVolumeFractionSurfaceValueMinValue", PyvtkRectilinearGridConnectivity_GetVolumeFractionSurfaceValueMinValue, METH_VARARGS,
   "V.GetVolumeFractionSurfaceValueMinValue() -> float\nC++: virtual double GetVolumeFractionSurfaceValueMinValue()\n\nSet / get the volume fraction value [0, 1] used for extracting\nfragments.\n"},
  {"GetVolumeFractionSurfaceValueMaxValue", PyvtkRectilinearGridConnectivity_GetVolumeFractionSurfaceValueMaxValue, METH_VARARGS,
   "V.GetVolumeFractionSurfaceValueMaxValue() -> float\nC++: virtual double GetVolumeFractionSurfaceValueMaxValue()\n\nSet / get the volume fraction value [0, 1] used for extracting\nfragments.\n"},
  {"GetVolumeFractionSurfaceValue", PyvtkRectilinearGridConnectivity_GetVolumeFractionSurfaceValue, METH_VARARGS,
   "V.GetVolumeFractionSurfaceValue() -> float\nC++: virtual double GetVolumeFractionSurfaceValue()\n\nSet / get the volume fraction value [0, 1] used for extracting\nfragments.\n"},
  {"RemoveAllVolumeArrayNames", PyvtkRectilinearGridConnectivity_RemoveAllVolumeArrayNames, METH_VARARGS,
   "V.RemoveAllVolumeArrayNames()\nC++: void RemoveAllVolumeArrayNames()\n\nRemove all volume array names.\n"},
  {"RemoveDoubleVolumeArrayNames", PyvtkRectilinearGridConnectivity_RemoveDoubleVolumeArrayNames, METH_VARARGS,
   "V.RemoveDoubleVolumeArrayNames()\nC++: void RemoveDoubleVolumeArrayNames()\n\nRemove double-type volume array names.\n"},
  {"RemoveFloatVolumeArrayNames", PyvtkRectilinearGridConnectivity_RemoveFloatVolumeArrayNames, METH_VARARGS,
   "V.RemoveFloatVolumeArrayNames()\nC++: void RemoveFloatVolumeArrayNames()\n\nRemove float-type volume array names.\n"},
  {"RemoveUnsignedCharVolumeArrayNames", PyvtkRectilinearGridConnectivity_RemoveUnsignedCharVolumeArrayNames, METH_VARARGS,
   "V.RemoveUnsignedCharVolumeArrayNames()\nC++: void RemoveUnsignedCharVolumeArrayNames()\n\nRemove unsigned char-type volume array names.\n"},
  {"AddDoubleVolumeArrayName", PyvtkRectilinearGridConnectivity_AddDoubleVolumeArrayName, METH_VARARGS,
   "V.AddDoubleVolumeArrayName(string)\nC++: void AddDoubleVolumeArrayName(char *arayName)\n\nAdd a double-type volume array name to the selection list.\n"},
  {"AddFloatVolumeArrayName", PyvtkRectilinearGridConnectivity_AddFloatVolumeArrayName, METH_VARARGS,
   "V.AddFloatVolumeArrayName(string)\nC++: void AddFloatVolumeArrayName(char *arayName)\n\nAdd a float-type volume array name to the selection list.\n"},
  {"AddUnsignedCharVolumeArrayName", PyvtkRectilinearGridConnectivity_AddUnsignedCharVolumeArrayName, METH_VARARGS,
   "V.AddUnsignedCharVolumeArrayName(string)\nC++: void AddUnsignedCharVolumeArrayName(char *arayName)\n\nAdd an unsigned char-type volume array name to the selection\nlist.\n"},
  {"AddVolumeArrayName", PyvtkRectilinearGridConnectivity_AddVolumeArrayName, METH_VARARGS,
   "V.AddVolumeArrayName(string)\nC++: void AddVolumeArrayName(char *arayName)\n\nAdd a volume array (of any type) name to the selection list.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkRectilinearGridConnectivity_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsDefaultPython.vtkRectilinearGridConnectivity", // tp_name
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
  PyvtkRectilinearGridConnectivity_Doc, // tp_doc
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

static vtkObjectBase *PyvtkRectilinearGridConnectivity_StaticNew()
{
  return vtkRectilinearGridConnectivity::New();
}

PyObject *PyvtkRectilinearGridConnectivity_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkRectilinearGridConnectivity_Type, PyvtkRectilinearGridConnectivity_Methods,
    "vtkRectilinearGridConnectivity",
 &PyvtkRectilinearGridConnectivity_StaticNew);

  PyTypeObject *pytype = &PyvtkRectilinearGridConnectivity_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkMultiBlockDataSetAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkRectilinearGridConnectivity(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkRectilinearGridConnectivity_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkRectilinearGridConnectivity", o) != 0)
  {
    Py_DECREF(o);
  }

}

