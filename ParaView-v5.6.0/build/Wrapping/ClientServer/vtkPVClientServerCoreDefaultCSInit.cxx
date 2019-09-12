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
extern "C" void real_initvtkPVClientServerCoreDefaultPython(const char *modulename);

void initvtkPVClientServerCoreDefaultPython()
{
  static const char modulename[] = "vtkPVClientServerCoreDefaultPython";
  real_initvtkPVClientServerCoreDefaultPython(modulename);
}
#endif

extern void vtkNetworkImageSource_Init(vtkClientServerInterpreter* csi);
extern void vtkPVCatalystChannelInformation_Init(vtkClientServerInterpreter* csi);
extern void vtkPVEnsembleDataReaderInformation_Init(vtkClientServerInterpreter* csi);
extern void vtkPVEnvironmentInformation_Init(vtkClientServerInterpreter* csi);
extern void vtkPVEnvironmentInformationHelper_Init(vtkClientServerInterpreter* csi);
extern void vtkPVFileInformation_Init(vtkClientServerInterpreter* csi);
extern void vtkPVSingleOutputExtractSelection_Init(vtkClientServerInterpreter* csi);
extern void vtkSliceAlongPolyPlane_Init(vtkClientServerInterpreter* csi);
extern void vtkAnnotateGlobalDataFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkPythonCalculator_Init(vtkClientServerInterpreter* csi);
extern void vtkAnnotateAttributeDataFilter_Init(vtkClientServerInterpreter* csi);


extern "C" void VTK_WRAP_CS_EXPORT vtkPVClientServerCoreDefaultCS_Initialize(
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
    PyImport_AppendInittab("vtkPVClientServerCoreDefaultPython", initvtkPVClientServerCoreDefaultPython);
    }

  csi->Load("vtkPVClientServerCoreDefault");
#endif

  vtkNetworkImageSource_Init(csi);
  vtkPVCatalystChannelInformation_Init(csi);
  vtkPVEnsembleDataReaderInformation_Init(csi);
  vtkPVEnvironmentInformation_Init(csi);
  vtkPVEnvironmentInformationHelper_Init(csi);
  vtkPVFileInformation_Init(csi);
  vtkPVSingleOutputExtractSelection_Init(csi);
  vtkSliceAlongPolyPlane_Init(csi);
  vtkAnnotateGlobalDataFilter_Init(csi);
  vtkPythonCalculator_Init(csi);
  vtkAnnotateAttributeDataFilter_Init(csi);

}
