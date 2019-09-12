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
extern "C" void real_initvtkFiltersParallelPython(const char *modulename);

void initvtkFiltersParallelPython()
{
  static const char modulename[] = "vtkFiltersParallelPython";
  real_initvtkFiltersParallelPython(modulename);
}
#endif

extern void vtkAggregateDataSetFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkAngularPeriodicFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkCollectGraph_Init(vtkClientServerInterpreter* csi);
extern void vtkCollectPolyData_Init(vtkClientServerInterpreter* csi);
extern void vtkCollectTable_Init(vtkClientServerInterpreter* csi);
extern void vtkCutMaterial_Init(vtkClientServerInterpreter* csi);
extern void vtkDuplicatePolyData_Init(vtkClientServerInterpreter* csi);
extern void vtkExtractCTHPart_Init(vtkClientServerInterpreter* csi);
extern void vtkExtractPolyDataPiece_Init(vtkClientServerInterpreter* csi);
extern void vtkExtractUnstructuredGridPiece_Init(vtkClientServerInterpreter* csi);
extern void vtkExtractUserDefinedPiece_Init(vtkClientServerInterpreter* csi);
extern void vtkIntegrateAttributes_Init(vtkClientServerInterpreter* csi);
extern void vtkPassThroughFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkPCellDataToPointData_Init(vtkClientServerInterpreter* csi);
extern void vtkPeriodicFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkPExtractDataArraysOverTime_Init(vtkClientServerInterpreter* csi);
extern void vtkPExtractSelectedArraysOverTime_Init(vtkClientServerInterpreter* csi);
extern void vtkPieceRequestFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkPieceScalars_Init(vtkClientServerInterpreter* csi);
extern void vtkPipelineSize_Init(vtkClientServerInterpreter* csi);
extern void vtkPKdTree_Init(vtkClientServerInterpreter* csi);
extern void vtkPLinearExtrusionFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkPMaskPoints_Init(vtkClientServerInterpreter* csi);
extern void vtkPOutlineCornerFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkPOutlineFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkPOutlineFilterInternals_Init(vtkClientServerInterpreter* csi);
extern void vtkPPolyDataNormals_Init(vtkClientServerInterpreter* csi);
extern void vtkPProbeFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkPProjectSphereFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkPReflectionFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkPResampleFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkProcessIdScalars_Init(vtkClientServerInterpreter* csi);
extern void vtkPSphereSource_Init(vtkClientServerInterpreter* csi);
extern void vtkPYoungsMaterialInterface_Init(vtkClientServerInterpreter* csi);
extern void vtkRectilinearGridOutlineFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkRemoveGhosts_Init(vtkClientServerInterpreter* csi);
extern void vtkTransmitPolyDataPiece_Init(vtkClientServerInterpreter* csi);
extern void vtkTransmitRectilinearGridPiece_Init(vtkClientServerInterpreter* csi);
extern void vtkTransmitStructuredDataPiece_Init(vtkClientServerInterpreter* csi);
extern void vtkTransmitStructuredGridPiece_Init(vtkClientServerInterpreter* csi);
extern void vtkTransmitUnstructuredGridPiece_Init(vtkClientServerInterpreter* csi);
extern void vtkUnstructuredGridGhostCellsGenerator_Init(vtkClientServerInterpreter* csi);
extern void vtkPExtractArraysOverTime_Init(vtkClientServerInterpreter* csi);


extern "C" void VTK_WRAP_CS_EXPORT vtkFiltersParallelCS_Initialize(
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
    PyImport_AppendInittab("vtkFiltersParallelPython", initvtkFiltersParallelPython);
    }

  csi->Load("vtkFiltersParallel");
#endif

  vtkAggregateDataSetFilter_Init(csi);
  vtkAngularPeriodicFilter_Init(csi);
  vtkCollectGraph_Init(csi);
  vtkCollectPolyData_Init(csi);
  vtkCollectTable_Init(csi);
  vtkCutMaterial_Init(csi);
  vtkDuplicatePolyData_Init(csi);
  vtkExtractCTHPart_Init(csi);
  vtkExtractPolyDataPiece_Init(csi);
  vtkExtractUnstructuredGridPiece_Init(csi);
  vtkExtractUserDefinedPiece_Init(csi);
  vtkIntegrateAttributes_Init(csi);
  vtkPassThroughFilter_Init(csi);
  vtkPCellDataToPointData_Init(csi);
  vtkPeriodicFilter_Init(csi);
  vtkPExtractDataArraysOverTime_Init(csi);
  vtkPExtractSelectedArraysOverTime_Init(csi);
  vtkPieceRequestFilter_Init(csi);
  vtkPieceScalars_Init(csi);
  vtkPipelineSize_Init(csi);
  vtkPKdTree_Init(csi);
  vtkPLinearExtrusionFilter_Init(csi);
  vtkPMaskPoints_Init(csi);
  vtkPOutlineCornerFilter_Init(csi);
  vtkPOutlineFilter_Init(csi);
  vtkPOutlineFilterInternals_Init(csi);
  vtkPPolyDataNormals_Init(csi);
  vtkPProbeFilter_Init(csi);
  vtkPProjectSphereFilter_Init(csi);
  vtkPReflectionFilter_Init(csi);
  vtkPResampleFilter_Init(csi);
  vtkProcessIdScalars_Init(csi);
  vtkPSphereSource_Init(csi);
  vtkPYoungsMaterialInterface_Init(csi);
  vtkRectilinearGridOutlineFilter_Init(csi);
  vtkRemoveGhosts_Init(csi);
  vtkTransmitPolyDataPiece_Init(csi);
  vtkTransmitRectilinearGridPiece_Init(csi);
  vtkTransmitStructuredDataPiece_Init(csi);
  vtkTransmitStructuredGridPiece_Init(csi);
  vtkTransmitUnstructuredGridPiece_Init(csi);
  vtkUnstructuredGridGhostCellsGenerator_Init(csi);
  vtkPExtractArraysOverTime_Init(csi);

}
