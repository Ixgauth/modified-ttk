// python wrapper for vtkLabelRenderStrategy
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
#include "vtkUnicodeString.h"
#include "vtkLabelRenderStrategy.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkLabelRenderStrategy(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkLabelRenderStrategy_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkLabelRenderStrategy_Doc =
  "vtkLabelRenderStrategy - Superclass for label rendering\nimplementations.\n\n"
  "Superclass: vtkObject\n\n"
  "These methods should only be called within a mapper.\n\n";


static PyObject *
PyvtkLabelRenderStrategy_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkLabelRenderStrategy::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabelRenderStrategy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelRenderStrategy *op = static_cast<vtkLabelRenderStrategy *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkLabelRenderStrategy::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabelRenderStrategy_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkLabelRenderStrategy *tempr = vtkLabelRenderStrategy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabelRenderStrategy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelRenderStrategy *op = static_cast<vtkLabelRenderStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkLabelRenderStrategy *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkLabelRenderStrategy::NewInstance());

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
PyvtkLabelRenderStrategy_SupportsRotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SupportsRotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelRenderStrategy *op = static_cast<vtkLabelRenderStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->SupportsRotation() :
      op->vtkLabelRenderStrategy::SupportsRotation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabelRenderStrategy_SupportsBoundedSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SupportsBoundedSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelRenderStrategy *op = static_cast<vtkLabelRenderStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->SupportsBoundedSize() :
      op->vtkLabelRenderStrategy::SupportsBoundedSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabelRenderStrategy_SetRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelRenderStrategy *op = static_cast<vtkLabelRenderStrategy *>(vp);

  vtkRenderer *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
  {
    if (ap.IsBound())
    {
      op->SetRenderer(temp0);
    }
    else
    {
      op->vtkLabelRenderStrategy::SetRenderer(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabelRenderStrategy_GetRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelRenderStrategy *op = static_cast<vtkLabelRenderStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderer *tempr = (ap.IsBound() ?
      op->GetRenderer() :
      op->vtkLabelRenderStrategy::GetRenderer());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabelRenderStrategy_SetDefaultTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDefaultTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelRenderStrategy *op = static_cast<vtkLabelRenderStrategy *>(vp);

  vtkTextProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextProperty"))
  {
    if (ap.IsBound())
    {
      op->SetDefaultTextProperty(temp0);
    }
    else
    {
      op->vtkLabelRenderStrategy::SetDefaultTextProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabelRenderStrategy_GetDefaultTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelRenderStrategy *op = static_cast<vtkLabelRenderStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetDefaultTextProperty() :
      op->vtkLabelRenderStrategy::GetDefaultTextProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabelRenderStrategy_ComputeLabelBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeLabelBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelRenderStrategy *op = static_cast<vtkLabelRenderStrategy *>(vp);

  vtkTextProperty *temp0 = nullptr;
  vtkStdString temp1;
  const size_t size2 = 4;
  double temp2[4];
  double save2[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkTextProperty") &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2))
  {
    ap.Save(temp2, save2, size2);

    if (ap.IsBound())
    {
      op->ComputeLabelBounds(temp0, temp1, temp2);
    }
    else
    {
      op->vtkLabelRenderStrategy::ComputeLabelBounds(temp0, temp1, temp2);
    }

    if (ap.HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkLabelRenderStrategy_ComputeLabelBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeLabelBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelRenderStrategy *op = static_cast<vtkLabelRenderStrategy *>(vp);

  vtkTextProperty *temp0 = nullptr;
  vtkUnicodeString temp1;
  const size_t size2 = 4;
  double temp2[4];
  double save2[4];
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkTextProperty") &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2))
  {
    ap.Save(temp2, save2, size2);

    op->ComputeLabelBounds(temp0, temp1, temp2);

    if (ap.HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkLabelRenderStrategy_ComputeLabelBounds_Methods[] = {
  {nullptr, PyvtkLabelRenderStrategy_ComputeLabelBounds_s1, METH_VARARGS,
   "@VsP *vtkTextProperty *d"},
  {nullptr, PyvtkLabelRenderStrategy_ComputeLabelBounds_s2, METH_VARARGS,
   "@VuP *vtkTextProperty *d"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkLabelRenderStrategy_ComputeLabelBounds(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkLabelRenderStrategy_ComputeLabelBounds_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "ComputeLabelBounds");
  return nullptr;
}



static PyObject *
PyvtkLabelRenderStrategy_RenderLabel_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelRenderStrategy *op = static_cast<vtkLabelRenderStrategy *>(vp);

  const size_t size0 = 2;
  int temp0[2];
  int save0[2];
  vtkTextProperty *temp1 = nullptr;
  vtkStdString temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetVTKObject(temp1, "vtkTextProperty") &&
      ap.GetValue(temp2))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->RenderLabel(temp0, temp1, temp2);
    }
    else
    {
      op->vtkLabelRenderStrategy::RenderLabel(temp0, temp1, temp2);
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
PyvtkLabelRenderStrategy_RenderLabel_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelRenderStrategy *op = static_cast<vtkLabelRenderStrategy *>(vp);

  const size_t size0 = 2;
  int temp0[2];
  int save0[2];
  vtkTextProperty *temp1 = nullptr;
  vtkStdString temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetVTKObject(temp1, "vtkTextProperty") &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->RenderLabel(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkLabelRenderStrategy::RenderLabel(temp0, temp1, temp2, temp3);
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
PyvtkLabelRenderStrategy_RenderLabel_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelRenderStrategy *op = static_cast<vtkLabelRenderStrategy *>(vp);

  const size_t size0 = 2;
  int temp0[2];
  int save0[2];
  vtkTextProperty *temp1 = nullptr;
  vtkUnicodeString temp2;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetVTKObject(temp1, "vtkTextProperty") &&
      ap.GetValue(temp2))
  {
    ap.Save(temp0, save0, size0);

    op->RenderLabel(temp0, temp1, temp2);

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
PyvtkLabelRenderStrategy_RenderLabel_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelRenderStrategy *op = static_cast<vtkLabelRenderStrategy *>(vp);

  const size_t size0 = 2;
  int temp0[2];
  int save0[2];
  vtkTextProperty *temp1 = nullptr;
  vtkUnicodeString temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetVTKObject(temp1, "vtkTextProperty") &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->RenderLabel(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkLabelRenderStrategy::RenderLabel(temp0, temp1, temp2, temp3);
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

static PyMethodDef PyvtkLabelRenderStrategy_RenderLabel_Methods[] = {
  {nullptr, PyvtkLabelRenderStrategy_RenderLabel_s1, METH_VARARGS,
   "@PVs *i *vtkTextProperty"},
  {nullptr, PyvtkLabelRenderStrategy_RenderLabel_s2, METH_VARARGS,
   "@PVsi *i *vtkTextProperty"},
  {nullptr, PyvtkLabelRenderStrategy_RenderLabel_s3, METH_VARARGS,
   "@PVu *i *vtkTextProperty"},
  {nullptr, PyvtkLabelRenderStrategy_RenderLabel_s4, METH_VARARGS,
   "@PVui *i *vtkTextProperty"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkLabelRenderStrategy_RenderLabel(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkLabelRenderStrategy_RenderLabel_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
    case 4:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "RenderLabel");
  return nullptr;
}



static PyObject *
PyvtkLabelRenderStrategy_StartFrame(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartFrame");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelRenderStrategy *op = static_cast<vtkLabelRenderStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->StartFrame();
    }
    else
    {
      op->vtkLabelRenderStrategy::StartFrame();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabelRenderStrategy_EndFrame(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EndFrame");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelRenderStrategy *op = static_cast<vtkLabelRenderStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EndFrame();
    }
    else
    {
      op->vtkLabelRenderStrategy::EndFrame();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabelRenderStrategy_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelRenderStrategy *op = static_cast<vtkLabelRenderStrategy *>(vp);

  vtkWindow *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkWindow"))
  {
    if (ap.IsBound())
    {
      op->ReleaseGraphicsResources(temp0);
    }
    else
    {
      op->vtkLabelRenderStrategy::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkLabelRenderStrategy_Methods[] = {
  {"IsTypeOf", PyvtkLabelRenderStrategy_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkLabelRenderStrategy_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkLabelRenderStrategy_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkLabelRenderStrategy\nC++: static vtkLabelRenderStrategy *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkLabelRenderStrategy_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkLabelRenderStrategy\nC++: vtkLabelRenderStrategy *NewInstance()\n\n"},
  {"SupportsRotation", PyvtkLabelRenderStrategy_SupportsRotation, METH_VARARGS,
   "V.SupportsRotation() -> bool\nC++: virtual bool SupportsRotation()\n\nWhether the text rendering strategy supports rotation. The\nsuperclass returns true. Subclasses should override this to\nreturn the appropriate value.\n"},
  {"SupportsBoundedSize", PyvtkLabelRenderStrategy_SupportsBoundedSize, METH_VARARGS,
   "V.SupportsBoundedSize() -> bool\nC++: virtual bool SupportsBoundedSize()\n\nWhether the text rendering strategy supports bounded size. The\nsuperclass returns true. Subclasses should override this to\nreturn the appropriate value. Subclasses that return true from\nthis method should implement the version of RenderLabel() that\ntakes a maximum size (see RenderLabel()).\n"},
  {"SetRenderer", PyvtkLabelRenderStrategy_SetRenderer, METH_VARARGS,
   "V.SetRenderer(vtkRenderer)\nC++: virtual void SetRenderer(vtkRenderer *ren)\n\nSet the renderer associated with this strategy.\n"},
  {"GetRenderer", PyvtkLabelRenderStrategy_GetRenderer, METH_VARARGS,
   "V.GetRenderer() -> vtkRenderer\nC++: virtual vtkRenderer *GetRenderer()\n\nSet the renderer associated with this strategy.\n"},
  {"SetDefaultTextProperty", PyvtkLabelRenderStrategy_SetDefaultTextProperty, METH_VARARGS,
   "V.SetDefaultTextProperty(vtkTextProperty)\nC++: virtual void SetDefaultTextProperty(vtkTextProperty *tprop)\n\nSet the default text property for the strategy.\n"},
  {"GetDefaultTextProperty", PyvtkLabelRenderStrategy_GetDefaultTextProperty, METH_VARARGS,
   "V.GetDefaultTextProperty() -> vtkTextProperty\nC++: virtual vtkTextProperty *GetDefaultTextProperty()\n\nSet the default text property for the strategy.\n"},
  {"ComputeLabelBounds", PyvtkLabelRenderStrategy_ComputeLabelBounds, METH_VARARGS,
   "V.ComputeLabelBounds(vtkTextProperty, string, [float, float,\n    float, float])\nC++: virtual void ComputeLabelBounds(vtkTextProperty *tprop,\n    vtkStdString label, double bds[4])\nV.ComputeLabelBounds(vtkTextProperty, unicode, [float, float,\n    float, float])\nC++: virtual void ComputeLabelBounds(vtkTextProperty *tprop,\n    vtkUnicodeString label, double bds[4])\n\nCompute the bounds of a label. Must be performed after the\nrenderer is set. Only the unicode string version must be\nimplemented in subclasses.\n"},
  {"RenderLabel", PyvtkLabelRenderStrategy_RenderLabel, METH_VARARGS,
   "V.RenderLabel([int, int], vtkTextProperty, string)\nC++: virtual void RenderLabel(int x[2], vtkTextProperty *tprop,\n    vtkStdString label)\nV.RenderLabel([int, int], vtkTextProperty, string, int)\nC++: virtual void RenderLabel(int x[2], vtkTextProperty *tprop,\n    vtkStdString label, int maxWidth)\nV.RenderLabel([int, int], vtkTextProperty, unicode)\nC++: virtual void RenderLabel(int x[2], vtkTextProperty *tprop,\n    vtkUnicodeString label)\nV.RenderLabel([int, int], vtkTextProperty, unicode, int)\nC++: virtual void RenderLabel(int x[2], vtkTextProperty *tprop,\n    vtkUnicodeString label, int maxWidth)\n\nRender a label at a location in display coordinates. Must be\nperformed between StartFrame() and EndFrame() calls. Only the\nunicode string version must be implemented in subclasses. The\noptional final parameter maxWidth specifies a maximum width for\nthe label. Longer labels can be shorted with an ellipsis (...).\nOnly renderer strategies that return true from\nSupportsBoundedSize must implement this version of th method.\n"},
  {"StartFrame", PyvtkLabelRenderStrategy_StartFrame, METH_VARARGS,
   "V.StartFrame()\nC++: virtual void StartFrame()\n\nStart a rendering frame. Renderer must be set.\n"},
  {"EndFrame", PyvtkLabelRenderStrategy_EndFrame, METH_VARARGS,
   "V.EndFrame()\nC++: virtual void EndFrame()\n\nEnd a rendering frame.\n"},
  {"ReleaseGraphicsResources", PyvtkLabelRenderStrategy_ReleaseGraphicsResources, METH_VARARGS,
   "V.ReleaseGraphicsResources(vtkWindow)\nC++: virtual void ReleaseGraphicsResources(vtkWindow *)\n\nRelease any graphics resources that are being consumed by this\nstrategy. The parameter window could be used to determine which\ngraphic resources to release.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkLabelRenderStrategy_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingLabelPython.vtkLabelRenderStrategy", // tp_name
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
  PyvtkLabelRenderStrategy_Doc, // tp_doc
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

PyObject *PyvtkLabelRenderStrategy_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkLabelRenderStrategy_Type, PyvtkLabelRenderStrategy_Methods,
    "vtkLabelRenderStrategy",
 nullptr);

  PyTypeObject *pytype = &PyvtkLabelRenderStrategy_Type;

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

void PyVTKAddFile_vtkLabelRenderStrategy(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkLabelRenderStrategy_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkLabelRenderStrategy", o) != 0)
  {
    Py_DECREF(o);
  }

}

