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
extern "C" void real_initvtkDomainsChemistryPython(const char *modulename);

void initvtkDomainsChemistryPython()
{
  static const char modulename[] = "vtkDomainsChemistryPython";
  real_initvtkDomainsChemistryPython(modulename);
}
#endif

extern void vtkBlueObeliskData_Init(vtkClientServerInterpreter* csi);
extern void vtkBlueObeliskDataInternal_Init(vtkClientServerInterpreter* csi);
extern void vtkBlueObeliskDataParser_Init(vtkClientServerInterpreter* csi);
extern void vtkCMLMoleculeReader_Init(vtkClientServerInterpreter* csi);
extern void vtkGaussianCubeReader2_Init(vtkClientServerInterpreter* csi);
extern void vtkMoleculeMapper_Init(vtkClientServerInterpreter* csi);
extern void vtkMoleculeToAtomBallFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkMoleculeToBondStickFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkMoleculeToLinesFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkMoleculeToPolyDataFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkPeriodicTable_Init(vtkClientServerInterpreter* csi);
extern void vtkPointSetToMoleculeFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkProgrammableElectronicData_Init(vtkClientServerInterpreter* csi);
extern void vtkProteinRibbonFilter_Init(vtkClientServerInterpreter* csi);
extern void vtkSimpleBondPerceiver_Init(vtkClientServerInterpreter* csi);
extern void vtkVASPAnimationReader_Init(vtkClientServerInterpreter* csi);
extern void vtkVASPTessellationReader_Init(vtkClientServerInterpreter* csi);
extern void vtkXYZMolReader2_Init(vtkClientServerInterpreter* csi);


extern "C" void VTK_WRAP_CS_EXPORT vtkDomainsChemistryCS_Initialize(
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
    PyImport_AppendInittab("vtkDomainsChemistryPython", initvtkDomainsChemistryPython);
    }

  csi->Load("vtkDomainsChemistry");
#endif

  vtkBlueObeliskData_Init(csi);
  vtkBlueObeliskDataInternal_Init(csi);
  vtkBlueObeliskDataParser_Init(csi);
  vtkCMLMoleculeReader_Init(csi);
  vtkGaussianCubeReader2_Init(csi);
  vtkMoleculeMapper_Init(csi);
  vtkMoleculeToAtomBallFilter_Init(csi);
  vtkMoleculeToBondStickFilter_Init(csi);
  vtkMoleculeToLinesFilter_Init(csi);
  vtkMoleculeToPolyDataFilter_Init(csi);
  vtkPeriodicTable_Init(csi);
  vtkPointSetToMoleculeFilter_Init(csi);
  vtkProgrammableElectronicData_Init(csi);
  vtkProteinRibbonFilter_Init(csi);
  vtkSimpleBondPerceiver_Init(csi);
  vtkVASPAnimationReader_Init(csi);
  vtkVASPTessellationReader_Init(csi);
  vtkXYZMolReader2_Init(csi);

}
