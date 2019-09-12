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
extern "C" void real_initvtkPVVTKExtensionsCorePython(const char *modulename);

void initvtkPVVTKExtensionsCorePython()
{
  static const char modulename[] = "vtkPVVTKExtensionsCorePython";
  real_initvtkPVVTKExtensionsCorePython(modulename);
}
#endif

extern void vtkAttributeDataReductionFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkCommunicationErrorCatcher_Init(vtkClientServerInterpreter* csi);
extern void vtkCompositeMultiProcessController_Init(vtkClientServerInterpreter* csi);
extern void vtkDistributedTrivialProducer_Init(vtkClientServerInterpreter* csi);
extern void vtkExtractHistogram_Init(vtkClientServerInterpreter* csi);
extern void vtkFileSeriesReader_Init(vtkClientServerInterpreter* csi);
extern void vtkFileSeriesWriter_Init(vtkClientServerInterpreter* csi);
extern void vtkImageFileSeriesReader_Init(vtkClientServerInterpreter* csi);
extern void vtkMemberFunctionCommand_Init(vtkClientServerInterpreter* csi);
extern void vtkMetaReader_Init(vtkClientServerInterpreter* csi);
extern void vtkMultiProcessControllerHelper_Init(vtkClientServerInterpreter* csi);
extern void vtkParallelSerialWriter_Init(vtkClientServerInterpreter* csi);
extern void vtkPExtractHistogram_Init(vtkClientServerInterpreter* csi);
extern void vtkPResourceFileLocator_Init(vtkClientServerInterpreter* csi);
extern void vtkPVCompositeDataPipeline_Init(vtkClientServerInterpreter* csi);
extern void vtkPVInformationKeys_Init(vtkClientServerInterpreter* csi);
extern void vtkPVNullSource_Init(vtkClientServerInterpreter* csi);
extern void vtkPVPostFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkPVPostFilterExecutive_Init(vtkClientServerInterpreter* csi);
extern void vtkPVTransform_Init(vtkClientServerInterpreter* csi);
extern void vtkPVTrivialProducer_Init(vtkClientServerInterpreter* csi);
extern void vtkRawImageFileSeriesReader_Init(vtkClientServerInterpreter* csi);
extern void vtkReductionFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkSelectionSerializer_Init(vtkClientServerInterpreter* csi);
extern void vtkUndoElement_Init(vtkClientServerInterpreter* csi);
extern void vtkUndoSet_Init(vtkClientServerInterpreter* csi);
extern void vtkUndoStack_Init(vtkClientServerInterpreter* csi);


extern "C" void VTK_WRAP_CS_EXPORT vtkPVVTKExtensionsCoreCS_Initialize(
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
    PyImport_AppendInittab("vtkPVVTKExtensionsCorePython", initvtkPVVTKExtensionsCorePython);
    }

  csi->Load("vtkPVVTKExtensionsCore");
#endif

  vtkAttributeDataReductionFilter_Init(csi);
  vtkCommunicationErrorCatcher_Init(csi);
  vtkCompositeMultiProcessController_Init(csi);
  vtkDistributedTrivialProducer_Init(csi);
  vtkExtractHistogram_Init(csi);
  vtkFileSeriesReader_Init(csi);
  vtkFileSeriesWriter_Init(csi);
  vtkImageFileSeriesReader_Init(csi);
  vtkMemberFunctionCommand_Init(csi);
  vtkMetaReader_Init(csi);
  vtkMultiProcessControllerHelper_Init(csi);
  vtkParallelSerialWriter_Init(csi);
  vtkPExtractHistogram_Init(csi);
  vtkPResourceFileLocator_Init(csi);
  vtkPVCompositeDataPipeline_Init(csi);
  vtkPVInformationKeys_Init(csi);
  vtkPVNullSource_Init(csi);
  vtkPVPostFilter_Init(csi);
  vtkPVPostFilterExecutive_Init(csi);
  vtkPVTransform_Init(csi);
  vtkPVTrivialProducer_Init(csi);
  vtkRawImageFileSeriesReader_Init(csi);
  vtkReductionFilter_Init(csi);
  vtkSelectionSerializer_Init(csi);
  vtkUndoElement_Init(csi);
  vtkUndoSet_Init(csi);
  vtkUndoStack_Init(csi);

}
