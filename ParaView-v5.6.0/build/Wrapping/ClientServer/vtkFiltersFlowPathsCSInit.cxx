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
extern "C" void real_initvtkFiltersFlowPathsPython(const char *modulename);

void initvtkFiltersFlowPathsPython()
{
  static const char modulename[] = "vtkFiltersFlowPathsPython";
  real_initvtkFiltersFlowPathsPython(modulename);
}
#endif

extern void vtkAbstractInterpolatedVelocityField_Init(vtkClientServerInterpreter* csi);
extern void vtkAMRInterpolatedVelocityField_Init(vtkClientServerInterpreter* csi);
extern void vtkCachingInterpolatedVelocityField_Init(vtkClientServerInterpreter* csi);
extern void vtkCellLocatorInterpolatedVelocityField_Init(vtkClientServerInterpreter* csi);
extern void vtkCompositeInterpolatedVelocityField_Init(vtkClientServerInterpreter* csi);
extern void vtkEvenlySpacedStreamlines2D_Init(vtkClientServerInterpreter* csi);
extern void vtkInterpolatedVelocityField_Init(vtkClientServerInterpreter* csi);
extern void vtkLagrangianParticleTracker_Init(vtkClientServerInterpreter* csi);
extern void vtkLagrangianBasicIntegrationModel_Init(vtkClientServerInterpreter* csi);
extern void vtkLagrangianParticle_Init(vtkClientServerInterpreter* csi);
extern void vtkLagrangianMatidaIntegrationModel_Init(vtkClientServerInterpreter* csi);
extern void vtkModifiedBSPTree_Init(vtkClientServerInterpreter* csi);
extern void vtkParticlePathFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkParticleTracer_Init(vtkClientServerInterpreter* csi);
extern void vtkParticleTracerBase_Init(vtkClientServerInterpreter* csi);
extern void vtkStreaklineFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkStreamTracer_Init(vtkClientServerInterpreter* csi);
extern void vtkTemporalInterpolatedVelocityField_Init(vtkClientServerInterpreter* csi);
extern void vtkTemporalStreamTracer_Init(vtkClientServerInterpreter* csi);


extern "C" void VTK_WRAP_CS_EXPORT vtkFiltersFlowPathsCS_Initialize(
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
    PyImport_AppendInittab("vtkFiltersFlowPathsPython", initvtkFiltersFlowPathsPython);
    }

  csi->Load("vtkFiltersFlowPaths");
#endif

  vtkAbstractInterpolatedVelocityField_Init(csi);
  vtkAMRInterpolatedVelocityField_Init(csi);
  vtkCachingInterpolatedVelocityField_Init(csi);
  vtkCellLocatorInterpolatedVelocityField_Init(csi);
  vtkCompositeInterpolatedVelocityField_Init(csi);
  vtkEvenlySpacedStreamlines2D_Init(csi);
  vtkInterpolatedVelocityField_Init(csi);
  vtkLagrangianParticleTracker_Init(csi);
  vtkLagrangianBasicIntegrationModel_Init(csi);
  vtkLagrangianParticle_Init(csi);
  vtkLagrangianMatidaIntegrationModel_Init(csi);
  vtkModifiedBSPTree_Init(csi);
  vtkParticlePathFilter_Init(csi);
  vtkParticleTracer_Init(csi);
  vtkParticleTracerBase_Init(csi);
  vtkStreaklineFilter_Init(csi);
  vtkStreamTracer_Init(csi);
  vtkTemporalInterpolatedVelocityField_Init(csi);
  vtkTemporalStreamTracer_Init(csi);

}
