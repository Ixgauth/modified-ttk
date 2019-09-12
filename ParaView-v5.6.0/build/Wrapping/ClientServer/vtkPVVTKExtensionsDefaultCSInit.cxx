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
extern "C" void real_initvtkPVVTKExtensionsDefaultPython(const char *modulename);

void initvtkPVVTKExtensionsDefaultPython()
{
  static const char modulename[] = "vtkPVVTKExtensionsDefaultPython";
  real_initvtkPVVTKExtensionsDefaultPython(modulename);
}
#endif

extern void vtkAdditionalFieldReader_Init(vtkClientServerInterpreter* csi);
extern void vtkAMRConnectivity_Init(vtkClientServerInterpreter* csi);
extern void vtkAMRDualClip_Init(vtkClientServerInterpreter* csi);
extern void vtkAMRDualContour_Init(vtkClientServerInterpreter* csi);
extern void vtkAMRDualGridHelper_Init(vtkClientServerInterpreter* csi);
extern void vtkAMRFileSeriesReader_Init(vtkClientServerInterpreter* csi);
extern void vtkAMRFragmentIntegration_Init(vtkClientServerInterpreter* csi);
extern void vtkAMRFragmentsFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkAppendRectilinearGrid_Init(vtkClientServerInterpreter* csi);
extern void vtkCellIntegrator_Init(vtkClientServerInterpreter* csi);
extern void vtkCleanUnstructuredGridCells_Init(vtkClientServerInterpreter* csi);
extern void vtkCleanUnstructuredGrid_Init(vtkClientServerInterpreter* csi);
extern void vtkCSVWriter_Init(vtkClientServerInterpreter* csi);
extern void vtkEnsembleDataReader_Init(vtkClientServerInterpreter* csi);
extern void vtkEquivalenceSet_Init(vtkClientServerInterpreter* csi);
extern void vtkExodusFileSeriesReader_Init(vtkClientServerInterpreter* csi);
extern void vtkExtractScatterPlot_Init(vtkClientServerInterpreter* csi);
extern void vtkExtractSelectionRange_Init(vtkClientServerInterpreter* csi);
extern void vtkFileSequenceParser_Init(vtkClientServerInterpreter* csi);
extern void vtkFlashContour_Init(vtkClientServerInterpreter* csi);
extern void vtkGridAxes2DActor_Init(vtkClientServerInterpreter* csi);
extern void vtkGridAxes3DActor_Init(vtkClientServerInterpreter* csi);
extern void vtkGridAxesHelper_Init(vtkClientServerInterpreter* csi);
extern void vtkGridAxesPlane2DActor_Init(vtkClientServerInterpreter* csi);
extern void vtkGridConnectivity_Init(vtkClientServerInterpreter* csi);
extern void vtkHierarchicalFractal_Init(vtkClientServerInterpreter* csi);
extern void vtkHybridProbeFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkImageSimpleSource_Init(vtkClientServerInterpreter* csi);
extern void vtkIntegrateFlowThroughSurface_Init(vtkClientServerInterpreter* csi);
extern void vtkIntersectFragments_Init(vtkClientServerInterpreter* csi);
extern void vtkIsoVolume_Init(vtkClientServerInterpreter* csi);
extern void vtkMaterialInterfaceCommBuffer_Init(vtkClientServerInterpreter* csi);
extern void vtkMaterialInterfaceFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkMaterialInterfaceIdList_Init(vtkClientServerInterpreter* csi);
extern void vtkMaterialInterfacePieceLoading_Init(vtkClientServerInterpreter* csi);
extern void vtkMaterialInterfacePieceTransaction_Init(vtkClientServerInterpreter* csi);
extern void vtkMaterialInterfacePieceTransactionMatrix_Init(vtkClientServerInterpreter* csi);
extern void vtkMaterialInterfaceProcessLoading_Init(vtkClientServerInterpreter* csi);
extern void vtkMaterialInterfaceProcessRing_Init(vtkClientServerInterpreter* csi);
extern void vtkMaterialInterfaceToProcMap_Init(vtkClientServerInterpreter* csi);
extern void vtkMergeArrays_Init(vtkClientServerInterpreter* csi);
extern void vtkMergeCompositeDataSet_Init(vtkClientServerInterpreter* csi);
extern void vtkMinMax_Init(vtkClientServerInterpreter* csi);
extern void vtkPEnSightGoldBinaryReader_Init(vtkClientServerInterpreter* csi);
extern void vtkPEnSightGoldReader_Init(vtkClientServerInterpreter* csi);
extern void vtkPEnSightReader_Init(vtkClientServerInterpreter* csi);
extern void vtkPEquivalenceSet_Init(vtkClientServerInterpreter* csi);
extern void vtkPExtractTemporalFieldData_Init(vtkClientServerInterpreter* csi);
extern void vtkPGenericEnSightReader_Init(vtkClientServerInterpreter* csi);
extern void vtkPhastaReader_Init(vtkClientServerInterpreter* csi);
extern void vtkPlotEdges_Init(vtkClientServerInterpreter* csi);
extern void vtkPointHandleRepresentationSphere_Init(vtkClientServerInterpreter* csi);
extern void vtkPolyLineToRectilinearGridFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkPPhastaReader_Init(vtkClientServerInterpreter* csi);
extern void vtkPSciVizContingencyStats_Init(vtkClientServerInterpreter* csi);
extern void vtkPSciVizDescriptiveStats_Init(vtkClientServerInterpreter* csi);
extern void vtkPSciVizKMeans_Init(vtkClientServerInterpreter* csi);
extern void vtkPSciVizMultiCorrelativeStats_Init(vtkClientServerInterpreter* csi);
extern void vtkPSciVizPCAStats_Init(vtkClientServerInterpreter* csi);
extern void vtkPVAMRDualClip_Init(vtkClientServerInterpreter* csi);
extern void vtkPVAMRDualContour_Init(vtkClientServerInterpreter* csi);
extern void vtkPVAMRFragmentIntegration_Init(vtkClientServerInterpreter* csi);
extern void vtkPVArrayCalculator_Init(vtkClientServerInterpreter* csi);
extern void vtkPVBox_Init(vtkClientServerInterpreter* csi);
extern void vtkPVClipClosedSurface_Init(vtkClientServerInterpreter* csi);
extern void vtkPVClipDataSet_Init(vtkClientServerInterpreter* csi);
extern void vtkPVConnectivityFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkPVContourFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkPVCylinder_Init(vtkClientServerInterpreter* csi);
extern void vtkPVDataSetAlgorithmSelectorFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkPVDReader_Init(vtkClientServerInterpreter* csi);
extern void vtkPVEnSightMasterServerReader2_Init(vtkClientServerInterpreter* csi);
extern void vtkPVEnSightMasterServerReader_Init(vtkClientServerInterpreter* csi);
extern void vtkPVEnSightMasterServerTranslator_Init(vtkClientServerInterpreter* csi);
extern void vtkPVExtractBagPlots_Init(vtkClientServerInterpreter* csi);
extern void vtkPVExtractComponent_Init(vtkClientServerInterpreter* csi);
extern void vtkPVExtractVOI_Init(vtkClientServerInterpreter* csi);
extern void vtkPVFrustumActor_Init(vtkClientServerInterpreter* csi);
extern void vtkPVGlyphFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkPVGlyphFilterLegacy_Init(vtkClientServerInterpreter* csi);
extern void vtkPVGridAxes3DActor_Init(vtkClientServerInterpreter* csi);
extern void vtkPVImageReader_Init(vtkClientServerInterpreter* csi);
extern void vtkPVLinearExtrusionFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkPVMetaClipDataSet_Init(vtkClientServerInterpreter* csi);
extern void vtkPVMetaSliceDataSet_Init(vtkClientServerInterpreter* csi);
extern void vtkPVPlane_Init(vtkClientServerInterpreter* csi);
extern void vtkPVPLYWriter_Init(vtkClientServerInterpreter* csi);
extern void vtkPVSelectionSource_Init(vtkClientServerInterpreter* csi);
extern void vtkPVTextSource_Init(vtkClientServerInterpreter* csi);
extern void vtkPVTransposeTable_Init(vtkClientServerInterpreter* csi);
extern void vtkRulerLineForInput_Init(vtkClientServerInterpreter* csi);
extern void vtkQuerySelectionSource_Init(vtkClientServerInterpreter* csi);
extern void vtkRectilinearGridConnectivity_Init(vtkClientServerInterpreter* csi);
extern void vtkSciVizStatistics_Init(vtkClientServerInterpreter* csi);
extern void vtkSpyPlotBlock_Init(vtkClientServerInterpreter* csi);
extern void vtkSpyPlotBlockIterator_Init(vtkClientServerInterpreter* csi);
extern void vtkSpyPlotFileSeriesReader_Init(vtkClientServerInterpreter* csi);
extern void vtkSpyPlotHistoryReader_Init(vtkClientServerInterpreter* csi);
extern void vtkSpyPlotIStream_Init(vtkClientServerInterpreter* csi);
extern void vtkSpyPlotReader_Init(vtkClientServerInterpreter* csi);
extern void vtkSpyPlotReaderMap_Init(vtkClientServerInterpreter* csi);
extern void vtkSpyPlotUniReader_Init(vtkClientServerInterpreter* csi);
extern void vtkSurfaceVectors_Init(vtkClientServerInterpreter* csi);
extern void vtkTimeStepProgressFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkTimeToTextConvertor_Init(vtkClientServerInterpreter* csi);
extern void vtkUnstructuredPOPReader_Init(vtkClientServerInterpreter* csi);
extern void vtkVRMLSource_Init(vtkClientServerInterpreter* csi);
extern void vtkXMLCollectionReader_Init(vtkClientServerInterpreter* csi);
extern void vtkXMLPVDWriter_Init(vtkClientServerInterpreter* csi);


extern "C" void VTK_WRAP_CS_EXPORT vtkPVVTKExtensionsDefaultCS_Initialize(
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
    PyImport_AppendInittab("vtkPVVTKExtensionsDefaultPython", initvtkPVVTKExtensionsDefaultPython);
    }

  csi->Load("vtkPVVTKExtensionsDefault");
#endif

  vtkAdditionalFieldReader_Init(csi);
  vtkAMRConnectivity_Init(csi);
  vtkAMRDualClip_Init(csi);
  vtkAMRDualContour_Init(csi);
  vtkAMRDualGridHelper_Init(csi);
  vtkAMRFileSeriesReader_Init(csi);
  vtkAMRFragmentIntegration_Init(csi);
  vtkAMRFragmentsFilter_Init(csi);
  vtkAppendRectilinearGrid_Init(csi);
  vtkCellIntegrator_Init(csi);
  vtkCleanUnstructuredGridCells_Init(csi);
  vtkCleanUnstructuredGrid_Init(csi);
  vtkCSVWriter_Init(csi);
  vtkEnsembleDataReader_Init(csi);
  vtkEquivalenceSet_Init(csi);
  vtkExodusFileSeriesReader_Init(csi);
  vtkExtractScatterPlot_Init(csi);
  vtkExtractSelectionRange_Init(csi);
  vtkFileSequenceParser_Init(csi);
  vtkFlashContour_Init(csi);
  vtkGridAxes2DActor_Init(csi);
  vtkGridAxes3DActor_Init(csi);
  vtkGridAxesHelper_Init(csi);
  vtkGridAxesPlane2DActor_Init(csi);
  vtkGridConnectivity_Init(csi);
  vtkHierarchicalFractal_Init(csi);
  vtkHybridProbeFilter_Init(csi);
  vtkImageSimpleSource_Init(csi);
  vtkIntegrateFlowThroughSurface_Init(csi);
  vtkIntersectFragments_Init(csi);
  vtkIsoVolume_Init(csi);
  vtkMaterialInterfaceCommBuffer_Init(csi);
  vtkMaterialInterfaceFilter_Init(csi);
  vtkMaterialInterfaceIdList_Init(csi);
  vtkMaterialInterfacePieceLoading_Init(csi);
  vtkMaterialInterfacePieceTransaction_Init(csi);
  vtkMaterialInterfacePieceTransactionMatrix_Init(csi);
  vtkMaterialInterfaceProcessLoading_Init(csi);
  vtkMaterialInterfaceProcessRing_Init(csi);
  vtkMaterialInterfaceToProcMap_Init(csi);
  vtkMergeArrays_Init(csi);
  vtkMergeCompositeDataSet_Init(csi);
  vtkMinMax_Init(csi);
  vtkPEnSightGoldBinaryReader_Init(csi);
  vtkPEnSightGoldReader_Init(csi);
  vtkPEnSightReader_Init(csi);
  vtkPEquivalenceSet_Init(csi);
  vtkPExtractTemporalFieldData_Init(csi);
  vtkPGenericEnSightReader_Init(csi);
  vtkPhastaReader_Init(csi);
  vtkPlotEdges_Init(csi);
  vtkPointHandleRepresentationSphere_Init(csi);
  vtkPolyLineToRectilinearGridFilter_Init(csi);
  vtkPPhastaReader_Init(csi);
  vtkPSciVizContingencyStats_Init(csi);
  vtkPSciVizDescriptiveStats_Init(csi);
  vtkPSciVizKMeans_Init(csi);
  vtkPSciVizMultiCorrelativeStats_Init(csi);
  vtkPSciVizPCAStats_Init(csi);
  vtkPVAMRDualClip_Init(csi);
  vtkPVAMRDualContour_Init(csi);
  vtkPVAMRFragmentIntegration_Init(csi);
  vtkPVArrayCalculator_Init(csi);
  vtkPVBox_Init(csi);
  vtkPVClipClosedSurface_Init(csi);
  vtkPVClipDataSet_Init(csi);
  vtkPVConnectivityFilter_Init(csi);
  vtkPVContourFilter_Init(csi);
  vtkPVCylinder_Init(csi);
  vtkPVDataSetAlgorithmSelectorFilter_Init(csi);
  vtkPVDReader_Init(csi);
  vtkPVEnSightMasterServerReader2_Init(csi);
  vtkPVEnSightMasterServerReader_Init(csi);
  vtkPVEnSightMasterServerTranslator_Init(csi);
  vtkPVExtractBagPlots_Init(csi);
  vtkPVExtractComponent_Init(csi);
  vtkPVExtractVOI_Init(csi);
  vtkPVFrustumActor_Init(csi);
  vtkPVGlyphFilter_Init(csi);
  vtkPVGlyphFilterLegacy_Init(csi);
  vtkPVGridAxes3DActor_Init(csi);
  vtkPVImageReader_Init(csi);
  vtkPVLinearExtrusionFilter_Init(csi);
  vtkPVMetaClipDataSet_Init(csi);
  vtkPVMetaSliceDataSet_Init(csi);
  vtkPVPlane_Init(csi);
  vtkPVPLYWriter_Init(csi);
  vtkPVSelectionSource_Init(csi);
  vtkPVTextSource_Init(csi);
  vtkPVTransposeTable_Init(csi);
  vtkRulerLineForInput_Init(csi);
  vtkQuerySelectionSource_Init(csi);
  vtkRectilinearGridConnectivity_Init(csi);
  vtkSciVizStatistics_Init(csi);
  vtkSpyPlotBlock_Init(csi);
  vtkSpyPlotBlockIterator_Init(csi);
  vtkSpyPlotFileSeriesReader_Init(csi);
  vtkSpyPlotHistoryReader_Init(csi);
  vtkSpyPlotIStream_Init(csi);
  vtkSpyPlotReader_Init(csi);
  vtkSpyPlotReaderMap_Init(csi);
  vtkSpyPlotUniReader_Init(csi);
  vtkSurfaceVectors_Init(csi);
  vtkTimeStepProgressFilter_Init(csi);
  vtkTimeToTextConvertor_Init(csi);
  vtkUnstructuredPOPReader_Init(csi);
  vtkVRMLSource_Init(csi);
  vtkXMLCollectionReader_Init(csi);
  vtkXMLPVDWriter_Init(csi);

}
