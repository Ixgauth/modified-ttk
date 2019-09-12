/*=========================================================================

  Program:   ParaView
  Module:    vtkPVInitializer.h.in

  Copyright (c) Kitware, Inc.
  All rights reserved.
  See Copyright.txt or http://www.paraview.org/HTML/Copyright.html for details.

     This software is distributed WITHOUT ANY WARRANTY; without even
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
     PURPOSE.  See the above copyright notice for more information.

=========================================================================*/
// THIS IS A GENERATED FILE -- DO NOT EDIT ---
#ifndef vtkPVInitializer_h
#define vtkPVInitializer_h
#include "vtkPVConfig.h"
#include "vtkSMGeneratedModules.h" // vtkPVConfig must be included before this
                                   // file.

#include "vtkPVPlugin.h"
#include "vtkPVServerManagerPluginInterface.h"

class vtkClientServerInterpreter;

extern "C" void vtkCommonCoreCS_Initialize(vtkClientServerInterpreter*);
extern "C" void vtkCommonMathCS_Initialize(vtkClientServerInterpreter*);
extern "C" void vtkCommonMiscCS_Initialize(vtkClientServerInterpreter*);
extern "C" void vtkCommonSystemCS_Initialize(vtkClientServerInterpreter*);
extern "C" void vtkCommonTransformsCS_Initialize(vtkClientServerInterpreter*);
extern "C" void vtkCommonDataModelCS_Initialize(vtkClientServerInterpreter*);
extern "C" void vtkCommonExecutionModelCS_Initialize(vtkClientServerInterpreter*);
extern "C" void vtkFiltersCoreCS_Initialize(vtkClientServerInterpreter*);
extern "C" void vtkCommonComputationalGeometryCS_Initialize(vtkClientServerInterpreter*);
extern "C" void vtkFiltersGeneralCS_Initialize(vtkClientServerInterpreter*);
extern "C" void vtkImagingCoreCS_Initialize(vtkClientServerInterpreter*);
extern "C" void vtkImagingFourierCS_Initialize(vtkClientServerInterpreter*);
extern "C" void vtkFiltersStatisticsCS_Initialize(vtkClientServerInterpreter*);
extern "C" void vtkFiltersExtractionCS_Initialize(vtkClientServerInterpreter*);
extern "C" void vtkFiltersSourcesCS_Initialize(vtkClientServerInterpreter*);
extern "C" void vtkCommonColorCS_Initialize(vtkClientServerInterpreter*);
extern "C" void vtkFiltersGeometryCS_Initialize(vtkClientServerInterpreter*);
extern "C" void vtkRenderingCoreCS_Initialize(vtkClientServerInterpreter*);
extern "C" void vtkInteractionStyleCS_Initialize(vtkClientServerInterpreter*);
extern "C" void vtkRenderingOpenGL2CS_Initialize(vtkClientServerInterpreter*);
extern "C" void vtkFiltersModelingCS_Initialize(vtkClientServerInterpreter*);
extern "C" void vtkIOCoreCS_Initialize(vtkClientServerInterpreter*);
extern "C" void vtkIOLegacyCS_Initialize(vtkClientServerInterpreter*);
extern "C" void vtkParallelCoreCS_Initialize(vtkClientServerInterpreter*);
extern "C" void vtkFiltersParallelCS_Initialize(vtkClientServerInterpreter*);
extern "C" void vtkFiltersProgrammableCS_Initialize(vtkClientServerInterpreter*);
extern "C" void vtkPythonInterpreterCS_Initialize(vtkClientServerInterpreter*);
extern "C" void vtkClientServerCS_Initialize(vtkClientServerInterpreter*);
extern "C" void vtkIOXMLParserCS_Initialize(vtkClientServerInterpreter*);
extern "C" void vtkPVCommonCS_Initialize(vtkClientServerInterpreter*);
extern "C" void vtkIOImageCS_Initialize(vtkClientServerInterpreter*);
extern "C" void vtkPVVTKExtensionsCoreCS_Initialize(vtkClientServerInterpreter*);
extern "C" void vtkPVVTKExtensionsSILCS_Initialize(vtkClientServerInterpreter*);
extern "C" void vtkPVClientServerCoreCoreCS_Initialize(vtkClientServerInterpreter*);
extern "C" void vtkPVServerImplementationCoreCS_Initialize(vtkClientServerInterpreter*);
extern "C" void vtkPVServerManagerCoreCS_Initialize(vtkClientServerInterpreter*);
extern "C" void vtkIOMovieCS_Initialize(vtkClientServerInterpreter*);
extern "C" void vtkIOXMLCS_Initialize(vtkClientServerInterpreter*);
extern "C" void vtkInfovisCoreCS_Initialize(vtkClientServerInterpreter*);
extern "C" void vtkIOInfovisCS_Initialize(vtkClientServerInterpreter*);
extern "C" void vtkAcceleratorsVTKmCS_Initialize(vtkClientServerInterpreter*);
extern "C" void vtkDomainsChemistryCS_Initialize(vtkClientServerInterpreter*);
extern "C" void vtkFiltersAMRCS_Initialize(vtkClientServerInterpreter*);
extern "C" void vtkRenderingFreeTypeCS_Initialize(vtkClientServerInterpreter*);
extern "C" void vtkRenderingContext2DCS_Initialize(vtkClientServerInterpreter*);
extern "C" void vtkChartsCoreCS_Initialize(vtkClientServerInterpreter*);
extern "C" void vtkFiltersParallelStatisticsCS_Initialize(vtkClientServerInterpreter*);
extern "C" void vtkIOEnSightCS_Initialize(vtkClientServerInterpreter*);
extern "C" void vtkIOImportCS_Initialize(vtkClientServerInterpreter*);
extern "C" void vtkIOPLYCS_Initialize(vtkClientServerInterpreter*);
extern "C" void vtkIOGeometryCS_Initialize(vtkClientServerInterpreter*);
extern "C" void vtkIONetCDFCS_Initialize(vtkClientServerInterpreter*);
extern "C" void vtkIOParallelCS_Initialize(vtkClientServerInterpreter*);
extern "C" void vtkIOExodusCS_Initialize(vtkClientServerInterpreter*);
extern "C" void vtkIOParallelExodusCS_Initialize(vtkClientServerInterpreter*);
extern "C" void vtkIOParallelXMLCS_Initialize(vtkClientServerInterpreter*);
extern "C" void vtkImagingSourcesCS_Initialize(vtkClientServerInterpreter*);
extern "C" void vtkFiltersHybridCS_Initialize(vtkClientServerInterpreter*);
extern "C" void vtkImagingColorCS_Initialize(vtkClientServerInterpreter*);
extern "C" void vtkImagingGeneralCS_Initialize(vtkClientServerInterpreter*);
extern "C" void vtkImagingHybridCS_Initialize(vtkClientServerInterpreter*);
extern "C" void vtkRenderingAnnotationCS_Initialize(vtkClientServerInterpreter*);
extern "C" void vtkRenderingVolumeCS_Initialize(vtkClientServerInterpreter*);
extern "C" void vtkInteractionWidgetsCS_Initialize(vtkClientServerInterpreter*);
extern "C" void vtkFiltersGenericCS_Initialize(vtkClientServerInterpreter*);
extern "C" void vtkFiltersHyperTreeCS_Initialize(vtkClientServerInterpreter*);
extern "C" void vtkRenderingGL2PSOpenGL2CS_Initialize(vtkClientServerInterpreter*);
extern "C" void vtkIOExportCS_Initialize(vtkClientServerInterpreter*);
extern "C" void vtkIOExportOpenGL2CS_Initialize(vtkClientServerInterpreter*);
extern "C" void vtkRenderingContextOpenGL2CS_Initialize(vtkClientServerInterpreter*);
extern "C" void vtkRenderingMatplotlibCS_Initialize(vtkClientServerInterpreter*);
extern "C" void vtkRenderingParallelCS_Initialize(vtkClientServerInterpreter*);
extern "C" void vtkImagingMathCS_Initialize(vtkClientServerInterpreter*);
extern "C" void vtkRenderingVolumeOpenGL2CS_Initialize(vtkClientServerInterpreter*);
extern "C" void vtkRenderingVolumeAMRCS_Initialize(vtkClientServerInterpreter*);
extern "C" void vtkPVVTKExtensionsRenderingCS_Initialize(vtkClientServerInterpreter*);
extern "C" void vtkPVVTKExtensionsDefaultCS_Initialize(vtkClientServerInterpreter*);
extern "C" void vtkRenderingLabelCS_Initialize(vtkClientServerInterpreter*);
extern "C" void vtkViewsCoreCS_Initialize(vtkClientServerInterpreter*);
extern "C" void vtkViewsContext2DCS_Initialize(vtkClientServerInterpreter*);
extern "C" void vtkPVClientServerCoreRenderingCS_Initialize(vtkClientServerInterpreter*);
extern "C" void vtkPVClientServerCoreDefaultCS_Initialize(vtkClientServerInterpreter*);
extern "C" void vtkPVServerImplementationRenderingCS_Initialize(vtkClientServerInterpreter*);
extern "C" void vtkPVServerManagerRenderingCS_Initialize(vtkClientServerInterpreter*);
extern "C" void vtkTestingRenderingCS_Initialize(vtkClientServerInterpreter*);
extern "C" void vtkPVServerManagerDefaultCS_Initialize(vtkClientServerInterpreter*);
extern "C" void vtkPVAnimationCS_Initialize(vtkClientServerInterpreter*);
extern "C" void vtkDomainsChemistryOpenGL2CS_Initialize(vtkClientServerInterpreter*);
extern "C" void vtkFiltersFlowPathsCS_Initialize(vtkClientServerInterpreter*);
extern "C" void vtkFiltersVerdictCS_Initialize(vtkClientServerInterpreter*);
extern "C" void vtkFiltersParallelVerdictCS_Initialize(vtkClientServerInterpreter*);
extern "C" void vtkFiltersPythonCS_Initialize(vtkClientServerInterpreter*);
extern "C" void vtkFiltersTextureCS_Initialize(vtkClientServerInterpreter*);
extern "C" void vtkIOAMRCS_Initialize(vtkClientServerInterpreter*);
extern "C" void vtkIOAsynchronousCS_Initialize(vtkClientServerInterpreter*);
extern "C" void vtkIOMotionFXCS_Initialize(vtkClientServerInterpreter*);
extern "C" void vtkIOLSDynaCS_Initialize(vtkClientServerInterpreter*);
extern "C" void vtkIOParallelLSDynaCS_Initialize(vtkClientServerInterpreter*);
extern "C" void vtkIOSegYCS_Initialize(vtkClientServerInterpreter*);
extern "C" void vtkIOTRUCHASCS_Initialize(vtkClientServerInterpreter*);
extern "C" void vtkIOTecplotTableCS_Initialize(vtkClientServerInterpreter*);
extern "C" void vtkIOVPICCS_Initialize(vtkClientServerInterpreter*);
extern "C" void vtkIOVeraOutCS_Initialize(vtkClientServerInterpreter*);
extern "C" void vtkIOXdmf2CS_Initialize(vtkClientServerInterpreter*);
extern "C" void vtkImagingMorphologicalCS_Initialize(vtkClientServerInterpreter*);
extern "C" void vtkInteractionImageCS_Initialize(vtkClientServerInterpreter*);
extern "C" void vtkPVCinemaReaderCS_Initialize(vtkClientServerInterpreter*);
extern "C" void vtkPVPythonAlgorithmCS_Initialize(vtkClientServerInterpreter*);
extern "C" void vtkPVVTKExtensionsCGNSReaderCS_Initialize(vtkClientServerInterpreter*);
extern "C" void vtkPVVTKExtensionsCGNSWriterCS_Initialize(vtkClientServerInterpreter*);
extern "C" void vtkPVVTKExtensionsH5PartReaderCS_Initialize(vtkClientServerInterpreter*);
extern "C" void vtkFiltersPointsCS_Initialize(vtkClientServerInterpreter*);
extern "C" void vtkPVVTKExtensionsPointsCS_Initialize(vtkClientServerInterpreter*);
extern "C" void vtkRenderingLICOpenGL2CS_Initialize(vtkClientServerInterpreter*);
extern "C" void vtkRenderingLODCS_Initialize(vtkClientServerInterpreter*);
extern "C" void vtkWebGLExporterCS_Initialize(vtkClientServerInterpreter*);
extern "C" void vtkWebCoreCS_Initialize(vtkClientServerInterpreter*);
extern "C" void vtkParaViewWebCoreCS_Initialize(vtkClientServerInterpreter*);

void PARAVIEW_CSSTREAMS_INITIALIZE(vtkClientServerInterpreter* interp)
{
  vtkCommonCoreCS_Initialize(interp);
  vtkCommonMathCS_Initialize(interp);
  vtkCommonMiscCS_Initialize(interp);
  vtkCommonSystemCS_Initialize(interp);
  vtkCommonTransformsCS_Initialize(interp);
  vtkCommonDataModelCS_Initialize(interp);
  vtkCommonExecutionModelCS_Initialize(interp);
  vtkFiltersCoreCS_Initialize(interp);
  vtkCommonComputationalGeometryCS_Initialize(interp);
  vtkFiltersGeneralCS_Initialize(interp);
  vtkImagingCoreCS_Initialize(interp);
  vtkImagingFourierCS_Initialize(interp);
  vtkFiltersStatisticsCS_Initialize(interp);
  vtkFiltersExtractionCS_Initialize(interp);
  vtkFiltersSourcesCS_Initialize(interp);
  vtkCommonColorCS_Initialize(interp);
  vtkFiltersGeometryCS_Initialize(interp);
  vtkRenderingCoreCS_Initialize(interp);
  vtkInteractionStyleCS_Initialize(interp);
  vtkRenderingOpenGL2CS_Initialize(interp);
  vtkFiltersModelingCS_Initialize(interp);
  vtkIOCoreCS_Initialize(interp);
  vtkIOLegacyCS_Initialize(interp);
  vtkParallelCoreCS_Initialize(interp);
  vtkFiltersParallelCS_Initialize(interp);
  vtkFiltersProgrammableCS_Initialize(interp);
  vtkPythonInterpreterCS_Initialize(interp);
  vtkClientServerCS_Initialize(interp);
  vtkIOXMLParserCS_Initialize(interp);
  vtkPVCommonCS_Initialize(interp);
  vtkIOImageCS_Initialize(interp);
  vtkPVVTKExtensionsCoreCS_Initialize(interp);
  vtkPVVTKExtensionsSILCS_Initialize(interp);
  vtkPVClientServerCoreCoreCS_Initialize(interp);
  vtkPVServerImplementationCoreCS_Initialize(interp);
  vtkPVServerManagerCoreCS_Initialize(interp);
  vtkIOMovieCS_Initialize(interp);
  vtkIOXMLCS_Initialize(interp);
  vtkInfovisCoreCS_Initialize(interp);
  vtkIOInfovisCS_Initialize(interp);
  vtkAcceleratorsVTKmCS_Initialize(interp);
  vtkDomainsChemistryCS_Initialize(interp);
  vtkFiltersAMRCS_Initialize(interp);
  vtkRenderingFreeTypeCS_Initialize(interp);
  vtkRenderingContext2DCS_Initialize(interp);
  vtkChartsCoreCS_Initialize(interp);
  vtkFiltersParallelStatisticsCS_Initialize(interp);
  vtkIOEnSightCS_Initialize(interp);
  vtkIOImportCS_Initialize(interp);
  vtkIOPLYCS_Initialize(interp);
  vtkIOGeometryCS_Initialize(interp);
  vtkIONetCDFCS_Initialize(interp);
  vtkIOParallelCS_Initialize(interp);
  vtkIOExodusCS_Initialize(interp);
  vtkIOParallelExodusCS_Initialize(interp);
  vtkIOParallelXMLCS_Initialize(interp);
  vtkImagingSourcesCS_Initialize(interp);
  vtkFiltersHybridCS_Initialize(interp);
  vtkImagingColorCS_Initialize(interp);
  vtkImagingGeneralCS_Initialize(interp);
  vtkImagingHybridCS_Initialize(interp);
  vtkRenderingAnnotationCS_Initialize(interp);
  vtkRenderingVolumeCS_Initialize(interp);
  vtkInteractionWidgetsCS_Initialize(interp);
  vtkFiltersGenericCS_Initialize(interp);
  vtkFiltersHyperTreeCS_Initialize(interp);
  vtkRenderingGL2PSOpenGL2CS_Initialize(interp);
  vtkIOExportCS_Initialize(interp);
  vtkIOExportOpenGL2CS_Initialize(interp);
  vtkRenderingContextOpenGL2CS_Initialize(interp);
  vtkRenderingMatplotlibCS_Initialize(interp);
  vtkRenderingParallelCS_Initialize(interp);
  vtkImagingMathCS_Initialize(interp);
  vtkRenderingVolumeOpenGL2CS_Initialize(interp);
  vtkRenderingVolumeAMRCS_Initialize(interp);
  vtkPVVTKExtensionsRenderingCS_Initialize(interp);
  vtkPVVTKExtensionsDefaultCS_Initialize(interp);
  vtkRenderingLabelCS_Initialize(interp);
  vtkViewsCoreCS_Initialize(interp);
  vtkViewsContext2DCS_Initialize(interp);
  vtkPVClientServerCoreRenderingCS_Initialize(interp);
  vtkPVClientServerCoreDefaultCS_Initialize(interp);
  vtkPVServerImplementationRenderingCS_Initialize(interp);
  vtkPVServerManagerRenderingCS_Initialize(interp);
  vtkTestingRenderingCS_Initialize(interp);
  vtkPVServerManagerDefaultCS_Initialize(interp);
  vtkPVAnimationCS_Initialize(interp);
  vtkDomainsChemistryOpenGL2CS_Initialize(interp);
  vtkFiltersFlowPathsCS_Initialize(interp);
  vtkFiltersVerdictCS_Initialize(interp);
  vtkFiltersParallelVerdictCS_Initialize(interp);
  vtkFiltersPythonCS_Initialize(interp);
  vtkFiltersTextureCS_Initialize(interp);
  vtkIOAMRCS_Initialize(interp);
  vtkIOAsynchronousCS_Initialize(interp);
  vtkIOMotionFXCS_Initialize(interp);
  vtkIOLSDynaCS_Initialize(interp);
  vtkIOParallelLSDynaCS_Initialize(interp);
  vtkIOSegYCS_Initialize(interp);
  vtkIOTRUCHASCS_Initialize(interp);
  vtkIOTecplotTableCS_Initialize(interp);
  vtkIOVPICCS_Initialize(interp);
  vtkIOVeraOutCS_Initialize(interp);
  vtkIOXdmf2CS_Initialize(interp);
  vtkImagingMorphologicalCS_Initialize(interp);
  vtkInteractionImageCS_Initialize(interp);
  vtkPVCinemaReaderCS_Initialize(interp);
  vtkPVPythonAlgorithmCS_Initialize(interp);
  vtkPVVTKExtensionsCGNSReaderCS_Initialize(interp);
  vtkPVVTKExtensionsCGNSWriterCS_Initialize(interp);
  vtkPVVTKExtensionsH5PartReaderCS_Initialize(interp);
  vtkFiltersPointsCS_Initialize(interp);
  vtkPVVTKExtensionsPointsCS_Initialize(interp);
  vtkRenderingLICOpenGL2CS_Initialize(interp);
  vtkRenderingLODCS_Initialize(interp);
  vtkWebGLExporterCS_Initialize(interp);
  vtkWebCoreCS_Initialize(interp);
  vtkParaViewWebCoreCS_Initialize(interp);

}

class vtkPVInitializerPlugin : public vtkPVPlugin,
  public vtkPVServerManagerPluginInterface
{
  const char* GetPluginName() override { return "vtkPVInitializerPlugin"; }
  const char* GetPluginVersionString() override { return "0.0"; }
  bool GetRequiredOnServer() override { return false; }
  bool GetRequiredOnClient() override { return false; }
  const char* GetRequiredPlugins() override { return ""; }
  void GetBinaryResources(std::vector<std::string>&) override { }
  const char* GetEULA() override { return nullptr; }

  void GetXMLs(std::vector<std::string> &xmls) override
  {
    (void) xmls;
    char* init_string = NULL;
    
  init_string =  vtkSMDefaultModules3d_widgetsGetInterfaces();
  xmls.push_back(init_string);
  delete[] init_string; init_string = NULL;
  init_string =  vtkSMDefaultModulesfiltersGetInterfaces();
  xmls.push_back(init_string);
  delete[] init_string; init_string = NULL;
  init_string =  vtkSMDefaultModulesinternal_writersGetInterfaces();
  xmls.push_back(init_string);
  delete[] init_string; init_string = NULL;
  init_string =  vtkSMDefaultModulesreadersGetInterfaces();
  xmls.push_back(init_string);
  delete[] init_string; init_string = NULL;
  init_string =  vtkSMDefaultModulesrenderingGetInterfaces();
  xmls.push_back(init_string);
  delete[] init_string; init_string = NULL;
  init_string =  vtkSMDefaultModulessourcesGetInterfaces();
  xmls.push_back(init_string);
  delete[] init_string; init_string = NULL;
  init_string =  vtkSMDefaultModulesutilitiesGetInterfaces();
  xmls.push_back(init_string);
  delete[] init_string; init_string = NULL;
  init_string =  vtkSMDefaultModulesviews_and_representationsGetInterfaces();
  xmls.push_back(init_string);
  delete[] init_string; init_string = NULL;
  init_string =  vtkSMDefaultModuleswritersGetInterfaces();
  xmls.push_back(init_string);
  delete[] init_string; init_string = NULL;
  init_string =  vtkSMDefaultModulessettingsGetInterfaces();
  xmls.push_back(init_string);
  delete[] init_string; init_string = NULL;
  init_string =  vtkSMDefaultModulesanimationGetInterfaces();
  xmls.push_back(init_string);
  delete[] init_string; init_string = NULL;
  init_string =  vtkSMDefaultModulesanimation_oggtheoraGetInterfaces();
  xmls.push_back(init_string);
  delete[] init_string; init_string = NULL;
  init_string =  vtkSMDefaultModulescinemareaderGetInterfaces();
  xmls.push_back(init_string);
  delete[] init_string; init_string = NULL;
  init_string =  vtkSMDefaultModulesCGNSReaderGetInterfaces();
  xmls.push_back(init_string);
  delete[] init_string; init_string = NULL;
  init_string =  vtkSMDefaultModulesCGNSWriterGetInterfaces();
  xmls.push_back(init_string);
  delete[] init_string; init_string = NULL;
  init_string =  vtkSMDefaultModulesH5PartServerManagerGetInterfaces();
  xmls.push_back(init_string);
  delete[] init_string; init_string = NULL;
  init_string =  vtkSMDefaultModulespointsGetInterfaces();
  xmls.push_back(init_string);
  delete[] init_string; init_string = NULL;
  init_string =  vtkSMDefaultModulesproxies_xdmf2GetInterfaces();
  xmls.push_back(init_string);
  delete[] init_string; init_string = NULL;
  init_string =  vtkSMDefaultModulesproxies_segyGetInterfaces();
  xmls.push_back(init_string);
  delete[] init_string; init_string = NULL;
  init_string =  vtkSMDefaultModulesproxies_motionfxGetInterfaces();
  xmls.push_back(init_string);
  delete[] init_string; init_string = NULL;
  init_string =  vtkSMDefaultModulespythonfilterGetInterfaces();
  xmls.push_back(init_string);
  delete[] init_string; init_string = NULL;
    (void) init_string;
  }

  vtkClientServerInterpreterInitializer::InterpreterInitializationCallback
    GetInitializeInterpreterCallback() override
  {
    return PARAVIEW_CSSTREAMS_INITIALIZE;
  }
};

void PARAVIEW_INITIALIZE()
{
  static vtkPVInitializerPlugin instance;
  vtkPVPlugin::ImportPlugin(&instance);
}

#endif
// THIS IS A GENERATED FILE -- DO NOT EDIT ---
