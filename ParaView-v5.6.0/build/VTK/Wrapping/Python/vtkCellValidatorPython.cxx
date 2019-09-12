// python wrapper for vtkCellValidator
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
#include "vtkCellValidator.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCellValidator(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkCellValidator_ClassNew(); }

#ifndef DECLARED_PyvtkDataSetAlgorithm_ClassNew
extern "C" { PyObject *PyvtkDataSetAlgorithm_ClassNew(); }
#define DECLARED_PyvtkDataSetAlgorithm_ClassNew
#endif

static const char *PyvtkCellValidator_Doc =
  "vtkCellValidator - validates cells in a dataset\n\n"
  "Superclass: vtkDataSetAlgorithm\n\n"
  "vtkCellValidator accepts as input a dataset and adds integral cell\n"
  "data to it corresponding to the \"validity\" of each cell. The validity\n"
  "field encodes a bitfield for identifying problems that prevent a cell\n"
  "from standard use, including:\n\n\n"
  "  WrongNumberOfPoints: filters assume that a cell has access to the\n"
  "                       appropriate number of points that comprise it.\n"
  "This\n"
  "                       assumption is often tacit, resulting in\n"
  "unexpected\n"
  "                       behavior when the condition is not met. This\n"
  "check\n"
  "                       simply confirms that the cell has the minimum\n"
  "number\n"
  "                       of points needed to describe it.\n\n\n"
  "  IntersectingEdges: cells that incorrectly describe the order of\n"
  "their\n"
  "                     points often manifest with intersecting edges or\n"
  "                     intersecting faces. Given a tolerance, this\n"
  "check\n"
  "                     ensures that two edges from a two-dimensional\n"
  "cell\n"
  "                     are separated by at least the tolerance\n"
  "(discounting\n"
  "                     end-to-end connections).\n\n\n"
  "  IntersectingFaces: cells that incorrectly describe the order of\n"
  "their\n"
  "                     points often manifest with intersecting edges or\n"
  "                     intersecting faces. Given a tolerance, this\n"
  "check\n"
  "                     ensures that two faces from a three-dimensional\n"
  "cell\n"
  "                     do not intersect.\n\n\n"
  "  NoncontiguousEdges: another symptom of incorrect point ordering\n"
  "within a\n"
  "                      cell is the presence of noncontiguous edges\n"
  "where\n"
  "                      contiguous edges are otherwise expected. Given\n"
  "a\n"
  "                      tolerance, this check ensures that edges around\n"
  "the\n"
  "                      perimeter of a two-dimensional cell are\n"
  "contiguous.\n\n\n"
  "  Nonconvex: many algorithms implicitly require that all input three-\n"
  "             dimensional cells be convex. This check uses the generic\n"
  "             convexity checkers implemented in vtkPolygon and\n"
  "vtkPolyhedron\n"
  "             to test this requirement.\n\n\n"
  "  FacesAreOrientedIncorrectly: All three-dimensional cells have an\n"
  "implicit\n"
  "                               expectation for the orientation of\n"
  "their\n"
  "                               faces. While the convention is\n"
  "unfortunately\n"
  "                               inconsistent across cell types, it is\n"
  "usually\n"
  "                               required that cell faces point\n"
  "outward. This\n"
  "                               check tests that the faces of a cell\n"
  "point in\n"
  "                               the direction required by the cell\n"
  "type,\n"
  "                               taking into account the cell types\n"
  "with\n"
  "                               nonstandard orientation requirements.\n\n"
  "@sa\n"
  "vtkCellQuality\n\n";

static PyTypeObject PyvtkCellValidator_State_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersGeneralPython.vtkCellValidator.State", // tp_name
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

PyObject *PyvtkCellValidator_State_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkCellValidator_State_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkCellValidator_State_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkCellValidator_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCellValidator::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellValidator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellValidator *op = static_cast<vtkCellValidator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCellValidator::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellValidator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCellValidator *tempr = vtkCellValidator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellValidator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellValidator *op = static_cast<vtkCellValidator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCellValidator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCellValidator::NewInstance());

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
PyvtkCellValidator_Check_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Check");

  vtkGenericCell *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkGenericCell") &&
      ap.GetValue(temp1))
  {
    typedef vtkCellValidator::State tempr_type;
  tempr_type tempr = vtkCellValidator::Check(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = PyvtkCellValidator_State_FromEnum(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCellValidator_Check_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Check");

  vtkCell *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkCell") &&
      ap.GetValue(temp1))
  {
    typedef vtkCellValidator::State tempr_type;
  tempr_type tempr = vtkCellValidator::Check(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = PyvtkCellValidator_State_FromEnum(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCellValidator_Check_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Check");

  vtkEmptyCell *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkEmptyCell") &&
      ap.GetValue(temp1))
  {
    typedef vtkCellValidator::State tempr_type;
  tempr_type tempr = vtkCellValidator::Check(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = PyvtkCellValidator_State_FromEnum(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCellValidator_Check_s4(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Check");

  vtkVertex *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkVertex") &&
      ap.GetValue(temp1))
  {
    typedef vtkCellValidator::State tempr_type;
  tempr_type tempr = vtkCellValidator::Check(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = PyvtkCellValidator_State_FromEnum(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCellValidator_Check_s5(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Check");

  vtkPolyVertex *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkPolyVertex") &&
      ap.GetValue(temp1))
  {
    typedef vtkCellValidator::State tempr_type;
  tempr_type tempr = vtkCellValidator::Check(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = PyvtkCellValidator_State_FromEnum(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCellValidator_Check_s6(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Check");

  vtkLine *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkLine") &&
      ap.GetValue(temp1))
  {
    typedef vtkCellValidator::State tempr_type;
  tempr_type tempr = vtkCellValidator::Check(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = PyvtkCellValidator_State_FromEnum(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCellValidator_Check_s7(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Check");

  vtkPolyLine *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkPolyLine") &&
      ap.GetValue(temp1))
  {
    typedef vtkCellValidator::State tempr_type;
  tempr_type tempr = vtkCellValidator::Check(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = PyvtkCellValidator_State_FromEnum(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCellValidator_Check_s8(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Check");

  vtkTriangle *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkTriangle") &&
      ap.GetValue(temp1))
  {
    typedef vtkCellValidator::State tempr_type;
  tempr_type tempr = vtkCellValidator::Check(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = PyvtkCellValidator_State_FromEnum(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCellValidator_Check_s9(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Check");

  vtkTriangleStrip *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkTriangleStrip") &&
      ap.GetValue(temp1))
  {
    typedef vtkCellValidator::State tempr_type;
  tempr_type tempr = vtkCellValidator::Check(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = PyvtkCellValidator_State_FromEnum(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCellValidator_Check_s10(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Check");

  vtkPolygon *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkPolygon") &&
      ap.GetValue(temp1))
  {
    typedef vtkCellValidator::State tempr_type;
  tempr_type tempr = vtkCellValidator::Check(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = PyvtkCellValidator_State_FromEnum(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCellValidator_Check_s11(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Check");

  vtkPixel *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkPixel") &&
      ap.GetValue(temp1))
  {
    typedef vtkCellValidator::State tempr_type;
  tempr_type tempr = vtkCellValidator::Check(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = PyvtkCellValidator_State_FromEnum(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCellValidator_Check_s12(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Check");

  vtkQuad *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkQuad") &&
      ap.GetValue(temp1))
  {
    typedef vtkCellValidator::State tempr_type;
  tempr_type tempr = vtkCellValidator::Check(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = PyvtkCellValidator_State_FromEnum(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCellValidator_Check_s13(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Check");

  vtkTetra *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkTetra") &&
      ap.GetValue(temp1))
  {
    typedef vtkCellValidator::State tempr_type;
  tempr_type tempr = vtkCellValidator::Check(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = PyvtkCellValidator_State_FromEnum(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCellValidator_Check_s14(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Check");

  vtkVoxel *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkVoxel") &&
      ap.GetValue(temp1))
  {
    typedef vtkCellValidator::State tempr_type;
  tempr_type tempr = vtkCellValidator::Check(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = PyvtkCellValidator_State_FromEnum(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCellValidator_Check_s15(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Check");

  vtkHexahedron *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkHexahedron") &&
      ap.GetValue(temp1))
  {
    typedef vtkCellValidator::State tempr_type;
  tempr_type tempr = vtkCellValidator::Check(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = PyvtkCellValidator_State_FromEnum(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCellValidator_Check_s16(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Check");

  vtkWedge *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkWedge") &&
      ap.GetValue(temp1))
  {
    typedef vtkCellValidator::State tempr_type;
  tempr_type tempr = vtkCellValidator::Check(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = PyvtkCellValidator_State_FromEnum(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCellValidator_Check_s17(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Check");

  vtkPyramid *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkPyramid") &&
      ap.GetValue(temp1))
  {
    typedef vtkCellValidator::State tempr_type;
  tempr_type tempr = vtkCellValidator::Check(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = PyvtkCellValidator_State_FromEnum(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCellValidator_Check_s18(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Check");

  vtkPentagonalPrism *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkPentagonalPrism") &&
      ap.GetValue(temp1))
  {
    typedef vtkCellValidator::State tempr_type;
  tempr_type tempr = vtkCellValidator::Check(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = PyvtkCellValidator_State_FromEnum(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCellValidator_Check_s19(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Check");

  vtkHexagonalPrism *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkHexagonalPrism") &&
      ap.GetValue(temp1))
  {
    typedef vtkCellValidator::State tempr_type;
  tempr_type tempr = vtkCellValidator::Check(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = PyvtkCellValidator_State_FromEnum(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCellValidator_Check_s20(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Check");

  vtkQuadraticEdge *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkQuadraticEdge") &&
      ap.GetValue(temp1))
  {
    typedef vtkCellValidator::State tempr_type;
  tempr_type tempr = vtkCellValidator::Check(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = PyvtkCellValidator_State_FromEnum(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCellValidator_Check_s21(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Check");

  vtkQuadraticTriangle *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkQuadraticTriangle") &&
      ap.GetValue(temp1))
  {
    typedef vtkCellValidator::State tempr_type;
  tempr_type tempr = vtkCellValidator::Check(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = PyvtkCellValidator_State_FromEnum(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCellValidator_Check_s22(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Check");

  vtkQuadraticQuad *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkQuadraticQuad") &&
      ap.GetValue(temp1))
  {
    typedef vtkCellValidator::State tempr_type;
  tempr_type tempr = vtkCellValidator::Check(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = PyvtkCellValidator_State_FromEnum(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCellValidator_Check_s23(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Check");

  vtkQuadraticPolygon *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkQuadraticPolygon") &&
      ap.GetValue(temp1))
  {
    typedef vtkCellValidator::State tempr_type;
  tempr_type tempr = vtkCellValidator::Check(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = PyvtkCellValidator_State_FromEnum(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCellValidator_Check_s24(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Check");

  vtkQuadraticTetra *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkQuadraticTetra") &&
      ap.GetValue(temp1))
  {
    typedef vtkCellValidator::State tempr_type;
  tempr_type tempr = vtkCellValidator::Check(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = PyvtkCellValidator_State_FromEnum(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCellValidator_Check_s25(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Check");

  vtkQuadraticHexahedron *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkQuadraticHexahedron") &&
      ap.GetValue(temp1))
  {
    typedef vtkCellValidator::State tempr_type;
  tempr_type tempr = vtkCellValidator::Check(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = PyvtkCellValidator_State_FromEnum(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCellValidator_Check_s26(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Check");

  vtkQuadraticWedge *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkQuadraticWedge") &&
      ap.GetValue(temp1))
  {
    typedef vtkCellValidator::State tempr_type;
  tempr_type tempr = vtkCellValidator::Check(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = PyvtkCellValidator_State_FromEnum(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCellValidator_Check_s27(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Check");

  vtkQuadraticPyramid *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkQuadraticPyramid") &&
      ap.GetValue(temp1))
  {
    typedef vtkCellValidator::State tempr_type;
  tempr_type tempr = vtkCellValidator::Check(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = PyvtkCellValidator_State_FromEnum(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCellValidator_Check_s28(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Check");

  vtkBiQuadraticQuad *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkBiQuadraticQuad") &&
      ap.GetValue(temp1))
  {
    typedef vtkCellValidator::State tempr_type;
  tempr_type tempr = vtkCellValidator::Check(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = PyvtkCellValidator_State_FromEnum(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCellValidator_Check_s29(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Check");

  vtkTriQuadraticHexahedron *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkTriQuadraticHexahedron") &&
      ap.GetValue(temp1))
  {
    typedef vtkCellValidator::State tempr_type;
  tempr_type tempr = vtkCellValidator::Check(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = PyvtkCellValidator_State_FromEnum(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCellValidator_Check_s30(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Check");

  vtkQuadraticLinearQuad *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkQuadraticLinearQuad") &&
      ap.GetValue(temp1))
  {
    typedef vtkCellValidator::State tempr_type;
  tempr_type tempr = vtkCellValidator::Check(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = PyvtkCellValidator_State_FromEnum(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCellValidator_Check_s31(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Check");

  vtkQuadraticLinearWedge *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkQuadraticLinearWedge") &&
      ap.GetValue(temp1))
  {
    typedef vtkCellValidator::State tempr_type;
  tempr_type tempr = vtkCellValidator::Check(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = PyvtkCellValidator_State_FromEnum(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCellValidator_Check_s32(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Check");

  vtkBiQuadraticQuadraticWedge *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkBiQuadraticQuadraticWedge") &&
      ap.GetValue(temp1))
  {
    typedef vtkCellValidator::State tempr_type;
  tempr_type tempr = vtkCellValidator::Check(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = PyvtkCellValidator_State_FromEnum(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCellValidator_Check_s33(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Check");

  vtkBiQuadraticQuadraticHexahedron *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkBiQuadraticQuadraticHexahedron") &&
      ap.GetValue(temp1))
  {
    typedef vtkCellValidator::State tempr_type;
  tempr_type tempr = vtkCellValidator::Check(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = PyvtkCellValidator_State_FromEnum(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCellValidator_Check_s34(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Check");

  vtkBiQuadraticTriangle *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkBiQuadraticTriangle") &&
      ap.GetValue(temp1))
  {
    typedef vtkCellValidator::State tempr_type;
  tempr_type tempr = vtkCellValidator::Check(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = PyvtkCellValidator_State_FromEnum(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCellValidator_Check_s35(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Check");

  vtkCubicLine *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkCubicLine") &&
      ap.GetValue(temp1))
  {
    typedef vtkCellValidator::State tempr_type;
  tempr_type tempr = vtkCellValidator::Check(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = PyvtkCellValidator_State_FromEnum(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCellValidator_Check_s36(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Check");

  vtkConvexPointSet *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkConvexPointSet") &&
      ap.GetValue(temp1))
  {
    typedef vtkCellValidator::State tempr_type;
  tempr_type tempr = vtkCellValidator::Check(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = PyvtkCellValidator_State_FromEnum(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCellValidator_Check_s37(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Check");

  vtkPolyhedron *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkPolyhedron") &&
      ap.GetValue(temp1))
  {
    typedef vtkCellValidator::State tempr_type;
  tempr_type tempr = vtkCellValidator::Check(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = PyvtkCellValidator_State_FromEnum(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCellValidator_Check_s38(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Check");

  vtkLagrangeCurve *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkLagrangeCurve") &&
      ap.GetValue(temp1))
  {
    typedef vtkCellValidator::State tempr_type;
  tempr_type tempr = vtkCellValidator::Check(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = PyvtkCellValidator_State_FromEnum(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCellValidator_Check_s39(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Check");

  vtkLagrangeTriangle *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkLagrangeTriangle") &&
      ap.GetValue(temp1))
  {
    typedef vtkCellValidator::State tempr_type;
  tempr_type tempr = vtkCellValidator::Check(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = PyvtkCellValidator_State_FromEnum(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCellValidator_Check_s40(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Check");

  vtkLagrangeQuadrilateral *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkLagrangeQuadrilateral") &&
      ap.GetValue(temp1))
  {
    typedef vtkCellValidator::State tempr_type;
  tempr_type tempr = vtkCellValidator::Check(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = PyvtkCellValidator_State_FromEnum(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCellValidator_Check_s41(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Check");

  vtkLagrangeTetra *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkLagrangeTetra") &&
      ap.GetValue(temp1))
  {
    typedef vtkCellValidator::State tempr_type;
  tempr_type tempr = vtkCellValidator::Check(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = PyvtkCellValidator_State_FromEnum(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCellValidator_Check_s42(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Check");

  vtkLagrangeHexahedron *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkLagrangeHexahedron") &&
      ap.GetValue(temp1))
  {
    typedef vtkCellValidator::State tempr_type;
  tempr_type tempr = vtkCellValidator::Check(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = PyvtkCellValidator_State_FromEnum(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCellValidator_Check_s43(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Check");

  vtkLagrangeWedge *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkLagrangeWedge") &&
      ap.GetValue(temp1))
  {
    typedef vtkCellValidator::State tempr_type;
  tempr_type tempr = vtkCellValidator::Check(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = PyvtkCellValidator_State_FromEnum(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkCellValidator_Check_Methods[] = {
  {nullptr, PyvtkCellValidator_Check_s1, METH_VARARGS | METH_STATIC,
   "Vd *vtkGenericCell"},
  {nullptr, PyvtkCellValidator_Check_s2, METH_VARARGS | METH_STATIC,
   "Vd *vtkCell"},
  {nullptr, PyvtkCellValidator_Check_s3, METH_VARARGS | METH_STATIC,
   "Vd *vtkEmptyCell"},
  {nullptr, PyvtkCellValidator_Check_s4, METH_VARARGS | METH_STATIC,
   "Vd *vtkVertex"},
  {nullptr, PyvtkCellValidator_Check_s5, METH_VARARGS | METH_STATIC,
   "Vd *vtkPolyVertex"},
  {nullptr, PyvtkCellValidator_Check_s6, METH_VARARGS | METH_STATIC,
   "Vd *vtkLine"},
  {nullptr, PyvtkCellValidator_Check_s7, METH_VARARGS | METH_STATIC,
   "Vd *vtkPolyLine"},
  {nullptr, PyvtkCellValidator_Check_s8, METH_VARARGS | METH_STATIC,
   "Vd *vtkTriangle"},
  {nullptr, PyvtkCellValidator_Check_s9, METH_VARARGS | METH_STATIC,
   "Vd *vtkTriangleStrip"},
  {nullptr, PyvtkCellValidator_Check_s10, METH_VARARGS | METH_STATIC,
   "Vd *vtkPolygon"},
  {nullptr, PyvtkCellValidator_Check_s11, METH_VARARGS | METH_STATIC,
   "Vd *vtkPixel"},
  {nullptr, PyvtkCellValidator_Check_s12, METH_VARARGS | METH_STATIC,
   "Vd *vtkQuad"},
  {nullptr, PyvtkCellValidator_Check_s13, METH_VARARGS | METH_STATIC,
   "Vd *vtkTetra"},
  {nullptr, PyvtkCellValidator_Check_s14, METH_VARARGS | METH_STATIC,
   "Vd *vtkVoxel"},
  {nullptr, PyvtkCellValidator_Check_s15, METH_VARARGS | METH_STATIC,
   "Vd *vtkHexahedron"},
  {nullptr, PyvtkCellValidator_Check_s16, METH_VARARGS | METH_STATIC,
   "Vd *vtkWedge"},
  {nullptr, PyvtkCellValidator_Check_s17, METH_VARARGS | METH_STATIC,
   "Vd *vtkPyramid"},
  {nullptr, PyvtkCellValidator_Check_s18, METH_VARARGS | METH_STATIC,
   "Vd *vtkPentagonalPrism"},
  {nullptr, PyvtkCellValidator_Check_s19, METH_VARARGS | METH_STATIC,
   "Vd *vtkHexagonalPrism"},
  {nullptr, PyvtkCellValidator_Check_s20, METH_VARARGS | METH_STATIC,
   "Vd *vtkQuadraticEdge"},
  {nullptr, PyvtkCellValidator_Check_s21, METH_VARARGS | METH_STATIC,
   "Vd *vtkQuadraticTriangle"},
  {nullptr, PyvtkCellValidator_Check_s22, METH_VARARGS | METH_STATIC,
   "Vd *vtkQuadraticQuad"},
  {nullptr, PyvtkCellValidator_Check_s23, METH_VARARGS | METH_STATIC,
   "Vd *vtkQuadraticPolygon"},
  {nullptr, PyvtkCellValidator_Check_s24, METH_VARARGS | METH_STATIC,
   "Vd *vtkQuadraticTetra"},
  {nullptr, PyvtkCellValidator_Check_s25, METH_VARARGS | METH_STATIC,
   "Vd *vtkQuadraticHexahedron"},
  {nullptr, PyvtkCellValidator_Check_s26, METH_VARARGS | METH_STATIC,
   "Vd *vtkQuadraticWedge"},
  {nullptr, PyvtkCellValidator_Check_s27, METH_VARARGS | METH_STATIC,
   "Vd *vtkQuadraticPyramid"},
  {nullptr, PyvtkCellValidator_Check_s28, METH_VARARGS | METH_STATIC,
   "Vd *vtkBiQuadraticQuad"},
  {nullptr, PyvtkCellValidator_Check_s29, METH_VARARGS | METH_STATIC,
   "Vd *vtkTriQuadraticHexahedron"},
  {nullptr, PyvtkCellValidator_Check_s30, METH_VARARGS | METH_STATIC,
   "Vd *vtkQuadraticLinearQuad"},
  {nullptr, PyvtkCellValidator_Check_s31, METH_VARARGS | METH_STATIC,
   "Vd *vtkQuadraticLinearWedge"},
  {nullptr, PyvtkCellValidator_Check_s32, METH_VARARGS | METH_STATIC,
   "Vd *vtkBiQuadraticQuadraticWedge"},
  {nullptr, PyvtkCellValidator_Check_s33, METH_VARARGS | METH_STATIC,
   "Vd *vtkBiQuadraticQuadraticHexahedron"},
  {nullptr, PyvtkCellValidator_Check_s34, METH_VARARGS | METH_STATIC,
   "Vd *vtkBiQuadraticTriangle"},
  {nullptr, PyvtkCellValidator_Check_s35, METH_VARARGS | METH_STATIC,
   "Vd *vtkCubicLine"},
  {nullptr, PyvtkCellValidator_Check_s36, METH_VARARGS | METH_STATIC,
   "Vd *vtkConvexPointSet"},
  {nullptr, PyvtkCellValidator_Check_s37, METH_VARARGS | METH_STATIC,
   "Vd *vtkPolyhedron"},
  {nullptr, PyvtkCellValidator_Check_s38, METH_VARARGS | METH_STATIC,
   "Vd *vtkLagrangeCurve"},
  {nullptr, PyvtkCellValidator_Check_s39, METH_VARARGS | METH_STATIC,
   "Vd *vtkLagrangeTriangle"},
  {nullptr, PyvtkCellValidator_Check_s40, METH_VARARGS | METH_STATIC,
   "Vd *vtkLagrangeQuadrilateral"},
  {nullptr, PyvtkCellValidator_Check_s41, METH_VARARGS | METH_STATIC,
   "Vd *vtkLagrangeTetra"},
  {nullptr, PyvtkCellValidator_Check_s42, METH_VARARGS | METH_STATIC,
   "Vd *vtkLagrangeHexahedron"},
  {nullptr, PyvtkCellValidator_Check_s43, METH_VARARGS | METH_STATIC,
   "Vd *vtkLagrangeWedge"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkCellValidator_Check(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkCellValidator_Check_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Check");
  return nullptr;
}



static PyObject *
PyvtkCellValidator_SetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellValidator *op = static_cast<vtkCellValidator *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTolerance(temp0);
    }
    else
    {
      op->vtkCellValidator::SetTolerance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellValidator_GetToleranceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetToleranceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellValidator *op = static_cast<vtkCellValidator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetToleranceMinValue() :
      op->vtkCellValidator::GetToleranceMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellValidator_GetToleranceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetToleranceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellValidator *op = static_cast<vtkCellValidator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetToleranceMaxValue() :
      op->vtkCellValidator::GetToleranceMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellValidator_GetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellValidator *op = static_cast<vtkCellValidator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTolerance() :
      op->vtkCellValidator::GetTolerance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkCellValidator_Methods[] = {
  {"IsTypeOf", PyvtkCellValidator_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCellValidator_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCellValidator_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkCellValidator\nC++: static vtkCellValidator *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCellValidator_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkCellValidator\nC++: vtkCellValidator *NewInstance()\n\n"},
  {"Check", PyvtkCellValidator_Check, METH_VARARGS,
   "V.Check(vtkGenericCell, float) -> State\nC++: static State Check(vtkGenericCell *, double tolerance)\nV.Check(vtkCell, float) -> State\nC++: static State Check(vtkCell *, double tolerance)\nV.Check(vtkEmptyCell, float) -> State\nC++: static State Check(vtkEmptyCell *, double tolerance)\nV.Check(vtkVertex, float) -> State\nC++: static State Check(vtkVertex *, double tolerance)\nV.Check(vtkPolyVertex, float) -> State\nC++: static State Check(vtkPolyVertex *, double tolerance)\nV.Check(vtkLine, float) -> State\nC++: static State Check(vtkLine *, double tolerance)\nV.Check(vtkPolyLine, float) -> State\nC++: static State Check(vtkPolyLine *, double tolerance)\nV.Check(vtkTriangle, float) -> State\nC++: static State Check(vtkTriangle *, double tolerance)\nV.Check(vtkTriangleStrip, float) -> State\nC++: static State Check(vtkTriangleStrip *, double tolerance)\nV.Check(vtkPolygon, float) -> State\nC++: static State Check(vtkPolygon *, double tolerance)\nV.Check(vtkPixel, float) -> State\nC++: static State Check(vtkPixel *, double tolerance)\nV.Check(vtkQuad, float) -> State\nC++: static State Check(vtkQuad *, double tolerance)\nV.Check(vtkTetra, float) -> State\nC++: static State Check(vtkTetra *, double tolerance)\nV.Check(vtkVoxel, float) -> State\nC++: static State Check(vtkVoxel *, double tolerance)\nV.Check(vtkHexahedron, float) -> State\nC++: static State Check(vtkHexahedron *, double tolerance)\nV.Check(vtkWedge, float) -> State\nC++: static State Check(vtkWedge *, double tolerance)\nV.Check(vtkPyramid, float) -> State\nC++: static State Check(vtkPyramid *, double tolerance)\nV.Check(vtkPentagonalPrism, float) -> State\nC++: static State Check(vtkPentagonalPrism *, double tolerance)\nV.Check(vtkHexagonalPrism, float) -> State\nC++: static State Check(vtkHexagonalPrism *, double tolerance)\nV.Check(vtkQuadraticEdge, float) -> State\nC++: static State Check(vtkQuadraticEdge *, double tolerance)\n\n"},
  {"SetTolerance", PyvtkCellValidator_SetTolerance, METH_VARARGS,
   "V.SetTolerance(float)\nC++: virtual void SetTolerance(double _arg)\n\nSet/Get the tolerance. This value is used as an epsilon for\nfloating point equality checks throughout the cell checking\nprocess. The default value is FLT_EPSILON.\n"},
  {"GetToleranceMinValue", PyvtkCellValidator_GetToleranceMinValue, METH_VARARGS,
   "V.GetToleranceMinValue() -> float\nC++: virtual double GetToleranceMinValue()\n\nSet/Get the tolerance. This value is used as an epsilon for\nfloating point equality checks throughout the cell checking\nprocess. The default value is FLT_EPSILON.\n"},
  {"GetToleranceMaxValue", PyvtkCellValidator_GetToleranceMaxValue, METH_VARARGS,
   "V.GetToleranceMaxValue() -> float\nC++: virtual double GetToleranceMaxValue()\n\nSet/Get the tolerance. This value is used as an epsilon for\nfloating point equality checks throughout the cell checking\nprocess. The default value is FLT_EPSILON.\n"},
  {"GetTolerance", PyvtkCellValidator_GetTolerance, METH_VARARGS,
   "V.GetTolerance() -> float\nC++: virtual double GetTolerance()\n\nSet/Get the tolerance. This value is used as an epsilon for\nfloating point equality checks throughout the cell checking\nprocess. The default value is FLT_EPSILON.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkCellValidator_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersGeneralPython.vtkCellValidator", // tp_name
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
  PyvtkCellValidator_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCellValidator_StaticNew()
{
  return vtkCellValidator::New();
}

PyObject *PyvtkCellValidator_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkCellValidator_Type, PyvtkCellValidator_Methods,
    "vtkCellValidator",
 &PyvtkCellValidator_StaticNew);

  PyTypeObject *pytype = &PyvtkCellValidator_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkDataSetAlgorithm_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkCellValidator_State_Type);
  PyvtkCellValidator_State_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkCellValidator_State_Type);

  o = (PyObject *)&PyvtkCellValidator_State_Type;
  if (PyDict_SetItemString(d, "State", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 7; c++)
  {
    typedef vtkCellValidator::State cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[7] = {
        { "Valid", vtkCellValidator::Valid },
        { "WrongNumberOfPoints", vtkCellValidator::WrongNumberOfPoints },
        { "IntersectingEdges", vtkCellValidator::IntersectingEdges },
        { "IntersectingFaces", vtkCellValidator::IntersectingFaces },
        { "NoncontiguousEdges", vtkCellValidator::NoncontiguousEdges },
        { "Nonconvex", vtkCellValidator::Nonconvex },
        { "FacesAreOrientedIncorrectly", vtkCellValidator::FacesAreOrientedIncorrectly },
      };

    o = PyvtkCellValidator_State_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCellValidator(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCellValidator_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCellValidator", o) != 0)
  {
    Py_DECREF(o);
  }

}

