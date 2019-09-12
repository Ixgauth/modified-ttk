/* #undef PARAVIEW_USE_UNIFIED_BINDINGS */
/* #undef NO_PYTHON_BINDINGS_AVAILABLE */
#ifdef NO_PYTHON_BINDINGS_AVAILABLE
#undef PARAVIEW_USE_UNIFIED_BINDINGS
#endif
#ifdef PARAVIEW_USE_UNIFIED_BINDINGS
#include "vtkPython.h"
#include "vtkPythonInterpreter.h"
#endif

#include "vtkClientServerInterpreter.h"

#ifndef PARAVIEW_BUILD_SHARED_LIBS
#define PARAVIEW_BUILD_SHARED_LIBS
#endif
#if defined(PARAVIEW_BUILD_SHARED_LIBS) && defined(_WIN32)
# define VTK_WRAP_CS_EXPORT __declspec(dllexport)
#else
# define VTK_WRAP_CS_EXPORT
#endif

#ifdef PARAVIEW_USE_UNIFIED_BINDINGS
extern "C" void real_initvtkFiltersExtractionPython(const char *modulename);

void initvtkFiltersExtractionPython()
{
  static const char modulename[] = "vtkFiltersExtractionPython";
  real_initvtkFiltersExtractionPython(modulename);
}
#endif

extern void vtkBlockSelector_Init(vtkClientServerInterpreter* csi);
extern void vtkConvertSelection_Init(vtkClientServerInterpreter* csi);
extern void vtkExtractBlock_Init(vtkClientServerInterpreter* csi);
extern void vtkExtractCells_Init(vtkClientServerInterpreter* csi);
extern void vtkExtractDataArraysOverTime_Init(vtkClientServerInterpreter* csi);
extern void vtkExtractDataOverTime_Init(vtkClientServerInterpreter* csi);
extern void vtkExtractDataSets_Init(vtkClientServerInterpreter* csi);
extern void vtkExtractEdges_Init(vtkClientServerInterpreter* csi);
extern void vtkExtractGeometry_Init(vtkClientServerInterpreter* csi);
extern void vtkExtractGrid_Init(vtkClientServerInterpreter* csi);
extern void vtkExtractLevel_Init(vtkClientServerInterpreter* csi);
extern void vtkExtractPolyDataGeometry_Init(vtkClientServerInterpreter* csi);
extern void vtkExtractRectilinearGrid_Init(vtkClientServerInterpreter* csi);
extern void vtkExtractSelectedArraysOverTime_Init(vtkClientServerInterpreter* csi);
extern void vtkExtractSelectedBlock_Init(vtkClientServerInterpreter* csi);
extern void vtkExtractSelectedIds_Init(vtkClientServerInterpreter* csi);
extern void vtkExtractSelectedLocations_Init(vtkClientServerInterpreter* csi);
extern void vtkExtractSelectedPolyDataIds_Init(vtkClientServerInterpreter* csi);
extern void vtkExtractSelectedRows_Init(vtkClientServerInterpreter* csi);
extern void vtkExtractSelectedThresholds_Init(vtkClientServerInterpreter* csi);
extern void vtkExtractSelection_Init(vtkClientServerInterpreter* csi);
extern void vtkExtractTemporalFieldData_Init(vtkClientServerInterpreter* csi);
extern void vtkExtractTensorComponents_Init(vtkClientServerInterpreter* csi);
extern void vtkExtractTimeSteps_Init(vtkClientServerInterpreter* csi);
extern void vtkExtractUnstructuredGrid_Init(vtkClientServerInterpreter* csi);
extern void vtkExtractVectorComponents_Init(vtkClientServerInterpreter* csi);
extern void vtkFrustumSelector_Init(vtkClientServerInterpreter* csi);
extern void vtkHierarchicalDataExtractDataSets_Init(vtkClientServerInterpreter* csi);
extern void vtkHierarchicalDataExtractLevel_Init(vtkClientServerInterpreter* csi);
extern void vtkLocationSelector_Init(vtkClientServerInterpreter* csi);
extern void vtkProbeSelectedLocations_Init(vtkClientServerInterpreter* csi);
extern void vtkSelector_Init(vtkClientServerInterpreter* csi);
extern void vtkValueSelector_Init(vtkClientServerInterpreter* csi);
extern void vtkExtractArraysOverTime_Init(vtkClientServerInterpreter* csi);
extern void vtkExtractSelectionLegacy_Init(vtkClientServerInterpreter* csi);


extern "C" void VTK_WRAP_CS_EXPORT vtkFiltersExtractionCS_Initialize(
  vtkClientServerInterpreter *csi)
{
  // silence unreferenced var warning.
  (void) csi;

#ifdef PARAVIEW_USE_UNIFIED_BINDINGS
  if (!vtkPythonInterpreter::IsInitialized())
    {
    vtkPythonInterpreter::Initialize();
    }

  static bool initialized = false;

  if (!initialized)
    {
    initialized = true;
    PyImport_AppendInittab("vtkFiltersExtractionPython", initvtkFiltersExtractionPython);
    }

  csi->Load("vtkFiltersExtraction");
#endif

  vtkBlockSelector_Init(csi);
  vtkConvertSelection_Init(csi);
  vtkExtractBlock_Init(csi);
  vtkExtractCells_Init(csi);
  vtkExtractDataArraysOverTime_Init(csi);
  vtkExtractDataOverTime_Init(csi);
  vtkExtractDataSets_Init(csi);
  vtkExtractEdges_Init(csi);
  vtkExtractGeometry_Init(csi);
  vtkExtractGrid_Init(csi);
  vtkExtractLevel_Init(csi);
  vtkExtractPolyDataGeometry_Init(csi);
  vtkExtractRectilinearGrid_Init(csi);
  vtkExtractSelectedArraysOverTime_Init(csi);
  vtkExtractSelectedBlock_Init(csi);
  vtkExtractSelectedIds_Init(csi);
  vtkExtractSelectedLocations_Init(csi);
  vtkExtractSelectedPolyDataIds_Init(csi);
  vtkExtractSelectedRows_Init(csi);
  vtkExtractSelectedThresholds_Init(csi);
  vtkExtractSelection_Init(csi);
  vtkExtractTemporalFieldData_Init(csi);
  vtkExtractTensorComponents_Init(csi);
  vtkExtractTimeSteps_Init(csi);
  vtkExtractUnstructuredGrid_Init(csi);
  vtkExtractVectorComponents_Init(csi);
  vtkFrustumSelector_Init(csi);
  vtkHierarchicalDataExtractDataSets_Init(csi);
  vtkHierarchicalDataExtractLevel_Init(csi);
  vtkLocationSelector_Init(csi);
  vtkProbeSelectedLocations_Init(csi);
  vtkSelector_Init(csi);
  vtkValueSelector_Init(csi);
  vtkExtractArraysOverTime_Init(csi);
  vtkExtractSelectionLegacy_Init(csi);

}
