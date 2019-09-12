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
extern "C" void real_initvtkFiltersPointsPython(const char *modulename);

void initvtkFiltersPointsPython()
{
  static const char modulename[] = "vtkFiltersPointsPython";
  real_initvtkFiltersPointsPython(modulename);
}
#endif

extern void vtkBoundedPointSource_Init(vtkClientServerInterpreter* csi);
extern void vtkConnectedPointsFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkDensifyPointCloudFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkEllipsoidalGaussianKernel_Init(vtkClientServerInterpreter* csi);
extern void vtkEuclideanClusterExtraction_Init(vtkClientServerInterpreter* csi);
extern void vtkExtractHierarchicalBins_Init(vtkClientServerInterpreter* csi);
extern void vtkExtractEnclosedPoints_Init(vtkClientServerInterpreter* csi);
extern void vtkExtractPointCloudPiece_Init(vtkClientServerInterpreter* csi);
extern void vtkExtractPoints_Init(vtkClientServerInterpreter* csi);
extern void vtkExtractSurface_Init(vtkClientServerInterpreter* csi);
extern void vtkFitImplicitFunction_Init(vtkClientServerInterpreter* csi);
extern void vtkGaussianKernel_Init(vtkClientServerInterpreter* csi);
extern void vtkGeneralizedKernel_Init(vtkClientServerInterpreter* csi);
extern void vtkHierarchicalBinningFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkInterpolationKernel_Init(vtkClientServerInterpreter* csi);
extern void vtkLinearKernel_Init(vtkClientServerInterpreter* csi);
extern void vtkMaskPointsFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkPCACurvatureEstimation_Init(vtkClientServerInterpreter* csi);
extern void vtkPCANormalEstimation_Init(vtkClientServerInterpreter* csi);
extern void vtkPointCloudFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkPointDensityFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkPointInterpolator_Init(vtkClientServerInterpreter* csi);
extern void vtkPointInterpolator2D_Init(vtkClientServerInterpreter* csi);
extern void vtkPointOccupancyFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkProbabilisticVoronoiKernel_Init(vtkClientServerInterpreter* csi);
extern void vtkRadiusOutlierRemoval_Init(vtkClientServerInterpreter* csi);
extern void vtkSPHInterpolator_Init(vtkClientServerInterpreter* csi);
extern void vtkSPHCubicKernel_Init(vtkClientServerInterpreter* csi);
extern void vtkSPHKernel_Init(vtkClientServerInterpreter* csi);
extern void vtkSPHQuarticKernel_Init(vtkClientServerInterpreter* csi);
extern void vtkSPHQuinticKernel_Init(vtkClientServerInterpreter* csi);
extern void vtkShepardKernel_Init(vtkClientServerInterpreter* csi);
extern void vtkSignedDistance_Init(vtkClientServerInterpreter* csi);
extern void vtkStatisticalOutlierRemoval_Init(vtkClientServerInterpreter* csi);
extern void vtkUnsignedDistance_Init(vtkClientServerInterpreter* csi);
extern void vtkVoxelGrid_Init(vtkClientServerInterpreter* csi);
extern void vtkVoronoiKernel_Init(vtkClientServerInterpreter* csi);
extern void vtkWendlandQuinticKernel_Init(vtkClientServerInterpreter* csi);


extern "C" void VTK_WRAP_CS_EXPORT vtkFiltersPointsCS_Initialize(
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
    PyImport_AppendInittab("vtkFiltersPointsPython", initvtkFiltersPointsPython);
    }

  csi->Load("vtkFiltersPoints");
#endif

  vtkBoundedPointSource_Init(csi);
  vtkConnectedPointsFilter_Init(csi);
  vtkDensifyPointCloudFilter_Init(csi);
  vtkEllipsoidalGaussianKernel_Init(csi);
  vtkEuclideanClusterExtraction_Init(csi);
  vtkExtractHierarchicalBins_Init(csi);
  vtkExtractEnclosedPoints_Init(csi);
  vtkExtractPointCloudPiece_Init(csi);
  vtkExtractPoints_Init(csi);
  vtkExtractSurface_Init(csi);
  vtkFitImplicitFunction_Init(csi);
  vtkGaussianKernel_Init(csi);
  vtkGeneralizedKernel_Init(csi);
  vtkHierarchicalBinningFilter_Init(csi);
  vtkInterpolationKernel_Init(csi);
  vtkLinearKernel_Init(csi);
  vtkMaskPointsFilter_Init(csi);
  vtkPCACurvatureEstimation_Init(csi);
  vtkPCANormalEstimation_Init(csi);
  vtkPointCloudFilter_Init(csi);
  vtkPointDensityFilter_Init(csi);
  vtkPointInterpolator_Init(csi);
  vtkPointInterpolator2D_Init(csi);
  vtkPointOccupancyFilter_Init(csi);
  vtkProbabilisticVoronoiKernel_Init(csi);
  vtkRadiusOutlierRemoval_Init(csi);
  vtkSPHInterpolator_Init(csi);
  vtkSPHCubicKernel_Init(csi);
  vtkSPHKernel_Init(csi);
  vtkSPHQuarticKernel_Init(csi);
  vtkSPHQuinticKernel_Init(csi);
  vtkShepardKernel_Init(csi);
  vtkSignedDistance_Init(csi);
  vtkStatisticalOutlierRemoval_Init(csi);
  vtkUnsignedDistance_Init(csi);
  vtkVoxelGrid_Init(csi);
  vtkVoronoiKernel_Init(csi);
  vtkWendlandQuinticKernel_Init(csi);

}
