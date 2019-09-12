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
extern "C" void real_initvtkCommonCorePython(const char *modulename);

void initvtkCommonCorePython()
{
  static const char modulename[] = "vtkCommonCorePython";
  real_initvtkCommonCorePython(modulename);
}
#endif

extern void vtkAOSDataArrayTemplate_Init(vtkClientServerInterpreter* csi);
extern void vtkAbstractArray_Init(vtkClientServerInterpreter* csi);
extern void vtkAnimationCue_Init(vtkClientServerInterpreter* csi);
extern void vtkArray_Init(vtkClientServerInterpreter* csi);
extern void vtkArrayCoordinates_Init(vtkClientServerInterpreter* csi);
extern void vtkArrayExtents_Init(vtkClientServerInterpreter* csi);
extern void vtkArrayExtentsList_Init(vtkClientServerInterpreter* csi);
extern void vtkArrayIterator_Init(vtkClientServerInterpreter* csi);
extern void vtkArrayIteratorTemplate_Init(vtkClientServerInterpreter* csi);
extern void vtkArrayRange_Init(vtkClientServerInterpreter* csi);
extern void vtkArraySort_Init(vtkClientServerInterpreter* csi);
extern void vtkArrayWeights_Init(vtkClientServerInterpreter* csi);
extern void vtkBitArray_Init(vtkClientServerInterpreter* csi);
extern void vtkBitArrayIterator_Init(vtkClientServerInterpreter* csi);
extern void vtkBoxMuellerRandomSequence_Init(vtkClientServerInterpreter* csi);
extern void vtkBreakPoint_Init(vtkClientServerInterpreter* csi);
extern void vtkByteSwap_Init(vtkClientServerInterpreter* csi);
extern void vtkCallbackCommand_Init(vtkClientServerInterpreter* csi);
extern void vtkCharArray_Init(vtkClientServerInterpreter* csi);
extern void vtkCollection_Init(vtkClientServerInterpreter* csi);
extern void vtkCollectionIterator_Init(vtkClientServerInterpreter* csi);
extern void vtkCommand_Init(vtkClientServerInterpreter* csi);
extern void vtkCommonInformationKeyManager_Init(vtkClientServerInterpreter* csi);
extern void vtkConditionVariable_Init(vtkClientServerInterpreter* csi);
extern void vtkCriticalSection_Init(vtkClientServerInterpreter* csi);
extern void vtkDataArray_Init(vtkClientServerInterpreter* csi);
extern void vtkDataArrayCollection_Init(vtkClientServerInterpreter* csi);
extern void vtkDataArrayCollectionIterator_Init(vtkClientServerInterpreter* csi);
extern void vtkDataArraySelection_Init(vtkClientServerInterpreter* csi);
extern void vtkDebugLeaks_Init(vtkClientServerInterpreter* csi);
extern void vtkDebugLeaksManager_Init(vtkClientServerInterpreter* csi);
extern void vtkDenseArray_Init(vtkClientServerInterpreter* csi);
extern void vtkDoubleArray_Init(vtkClientServerInterpreter* csi);
extern void vtkDynamicLoader_Init(vtkClientServerInterpreter* csi);
extern void vtkEventForwarderCommand_Init(vtkClientServerInterpreter* csi);
extern void vtkFileOutputWindow_Init(vtkClientServerInterpreter* csi);
extern void vtkFloatArray_Init(vtkClientServerInterpreter* csi);
extern void vtkFloatingPointExceptions_Init(vtkClientServerInterpreter* csi);
extern void vtkGarbageCollector_Init(vtkClientServerInterpreter* csi);
extern void vtkGarbageCollectorManager_Init(vtkClientServerInterpreter* csi);
extern void vtkGaussianRandomSequence_Init(vtkClientServerInterpreter* csi);
extern void vtkGenericDataArray_Init(vtkClientServerInterpreter* csi);
extern void vtkIdList_Init(vtkClientServerInterpreter* csi);
extern void vtkIdListCollection_Init(vtkClientServerInterpreter* csi);
extern void vtkIdTypeArray_Init(vtkClientServerInterpreter* csi);
extern void vtkIndent_Init(vtkClientServerInterpreter* csi);
extern void vtkInformation_Init(vtkClientServerInterpreter* csi);
extern void vtkInformationDataObjectKey_Init(vtkClientServerInterpreter* csi);
extern void vtkInformationDoubleKey_Init(vtkClientServerInterpreter* csi);
extern void vtkInformationDoubleVectorKey_Init(vtkClientServerInterpreter* csi);
extern void vtkInformationIdTypeKey_Init(vtkClientServerInterpreter* csi);
extern void vtkInformationInformationKey_Init(vtkClientServerInterpreter* csi);
extern void vtkInformationInformationVectorKey_Init(vtkClientServerInterpreter* csi);
extern void vtkInformationIntegerKey_Init(vtkClientServerInterpreter* csi);
extern void vtkInformationIntegerPointerKey_Init(vtkClientServerInterpreter* csi);
extern void vtkInformationIntegerVectorKey_Init(vtkClientServerInterpreter* csi);
extern void vtkInformationIterator_Init(vtkClientServerInterpreter* csi);
extern void vtkInformationKey_Init(vtkClientServerInterpreter* csi);
extern void vtkInformationKeyLookup_Init(vtkClientServerInterpreter* csi);
extern void vtkInformationKeyVectorKey_Init(vtkClientServerInterpreter* csi);
extern void vtkInformationObjectBaseKey_Init(vtkClientServerInterpreter* csi);
extern void vtkInformationObjectBaseVectorKey_Init(vtkClientServerInterpreter* csi);
extern void vtkInformationRequestKey_Init(vtkClientServerInterpreter* csi);
extern void vtkInformationStringKey_Init(vtkClientServerInterpreter* csi);
extern void vtkInformationStringVectorKey_Init(vtkClientServerInterpreter* csi);
extern void vtkInformationUnsignedLongKey_Init(vtkClientServerInterpreter* csi);
extern void vtkInformationVariantKey_Init(vtkClientServerInterpreter* csi);
extern void vtkInformationVariantVectorKey_Init(vtkClientServerInterpreter* csi);
extern void vtkInformationVector_Init(vtkClientServerInterpreter* csi);
extern void vtkIntArray_Init(vtkClientServerInterpreter* csi);
extern void vtkLargeInteger_Init(vtkClientServerInterpreter* csi);
extern void vtkLongArray_Init(vtkClientServerInterpreter* csi);
extern void vtkLongLongArray_Init(vtkClientServerInterpreter* csi);
extern void vtkLookupTable_Init(vtkClientServerInterpreter* csi);
extern void vtkMappedDataArray_Init(vtkClientServerInterpreter* csi);
extern void vtkMath_Init(vtkClientServerInterpreter* csi);
extern void vtkMersenneTwister_Init(vtkClientServerInterpreter* csi);
extern void vtkMinimalStandardRandomSequence_Init(vtkClientServerInterpreter* csi);
extern void vtkMultiThreader_Init(vtkClientServerInterpreter* csi);
extern void vtkMutexLock_Init(vtkClientServerInterpreter* csi);
extern void vtkOStrStreamWrapper_Init(vtkClientServerInterpreter* csi);
extern void vtkOStreamWrapper_Init(vtkClientServerInterpreter* csi);
extern void vtkObject_Init(vtkClientServerInterpreter* csi);
extern void vtkObjectBase_Init(vtkClientServerInterpreter* csi);
extern void vtkObjectFactory_Init(vtkClientServerInterpreter* csi);
extern void vtkObjectFactoryCollection_Init(vtkClientServerInterpreter* csi);
extern void vtkOldStyleCallbackCommand_Init(vtkClientServerInterpreter* csi);
extern void vtkOutputWindow_Init(vtkClientServerInterpreter* csi);
extern void vtkOverrideInformation_Init(vtkClientServerInterpreter* csi);
extern void vtkOverrideInformationCollection_Init(vtkClientServerInterpreter* csi);
extern void vtkPoints_Init(vtkClientServerInterpreter* csi);
extern void vtkPoints2D_Init(vtkClientServerInterpreter* csi);
extern void vtkPriorityQueue_Init(vtkClientServerInterpreter* csi);
extern void vtkRandomPool_Init(vtkClientServerInterpreter* csi);
extern void vtkRandomSequence_Init(vtkClientServerInterpreter* csi);
extern void vtkReferenceCount_Init(vtkClientServerInterpreter* csi);
extern void vtkSOADataArrayTemplate_Init(vtkClientServerInterpreter* csi);
extern void vtkScalarsToColors_Init(vtkClientServerInterpreter* csi);
extern void vtkShortArray_Init(vtkClientServerInterpreter* csi);
extern void vtkSignedCharArray_Init(vtkClientServerInterpreter* csi);
extern void vtkSimpleCriticalSection_Init(vtkClientServerInterpreter* csi);
extern void vtkSmartPointerBase_Init(vtkClientServerInterpreter* csi);
extern void vtkSortDataArray_Init(vtkClientServerInterpreter* csi);
extern void vtkSparseArray_Init(vtkClientServerInterpreter* csi);
extern void vtkStdString_Init(vtkClientServerInterpreter* csi);
extern void vtkStringArray_Init(vtkClientServerInterpreter* csi);
extern void vtkStringOutputWindow_Init(vtkClientServerInterpreter* csi);
extern void vtkSystemIncludes_Init(vtkClientServerInterpreter* csi);
extern void vtkTimePointUtility_Init(vtkClientServerInterpreter* csi);
extern void vtkTimeStamp_Init(vtkClientServerInterpreter* csi);
extern void vtkType_Init(vtkClientServerInterpreter* csi);
extern void vtkTypedArray_Init(vtkClientServerInterpreter* csi);
extern void vtkTypedDataArray_Init(vtkClientServerInterpreter* csi);
extern void vtkUnicodeString_Init(vtkClientServerInterpreter* csi);
extern void vtkUnicodeStringArray_Init(vtkClientServerInterpreter* csi);
extern void vtkUnsignedCharArray_Init(vtkClientServerInterpreter* csi);
extern void vtkUnsignedIntArray_Init(vtkClientServerInterpreter* csi);
extern void vtkUnsignedLongArray_Init(vtkClientServerInterpreter* csi);
extern void vtkUnsignedLongLongArray_Init(vtkClientServerInterpreter* csi);
extern void vtkUnsignedShortArray_Init(vtkClientServerInterpreter* csi);
extern void vtkVariant_Init(vtkClientServerInterpreter* csi);
extern void vtkVariantArray_Init(vtkClientServerInterpreter* csi);
extern void vtkVersion_Init(vtkClientServerInterpreter* csi);
extern void vtkVoidArray_Init(vtkClientServerInterpreter* csi);
extern void vtkWeakPointerBase_Init(vtkClientServerInterpreter* csi);
extern void vtkWeakReference_Init(vtkClientServerInterpreter* csi);
extern void vtkWindow_Init(vtkClientServerInterpreter* csi);
extern void vtkWrappingHints_Init(vtkClientServerInterpreter* csi);
extern void vtkXMLFileOutputWindow_Init(vtkClientServerInterpreter* csi);
extern void vtkConfigure_Init(vtkClientServerInterpreter* csi);
extern void vtkMathConfigure_Init(vtkClientServerInterpreter* csi);
extern void vtkVersionMacros_Init(vtkClientServerInterpreter* csi);
extern void vtkTypeInt8Array_Init(vtkClientServerInterpreter* csi);
extern void vtkTypeInt16Array_Init(vtkClientServerInterpreter* csi);
extern void vtkTypeInt32Array_Init(vtkClientServerInterpreter* csi);
extern void vtkTypeInt64Array_Init(vtkClientServerInterpreter* csi);
extern void vtkTypeUInt8Array_Init(vtkClientServerInterpreter* csi);
extern void vtkTypeUInt16Array_Init(vtkClientServerInterpreter* csi);
extern void vtkTypeUInt32Array_Init(vtkClientServerInterpreter* csi);
extern void vtkTypeUInt64Array_Init(vtkClientServerInterpreter* csi);
extern void vtkTypeFloat32Array_Init(vtkClientServerInterpreter* csi);
extern void vtkTypeFloat64Array_Init(vtkClientServerInterpreter* csi);


extern "C" void VTK_WRAP_CS_EXPORT vtkCommonCoreCS_Initialize(
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
    PyImport_AppendInittab("vtkCommonCorePython", initvtkCommonCorePython);
    }

  csi->Load("vtkCommonCore");
#endif

  vtkAOSDataArrayTemplate_Init(csi);
  vtkAbstractArray_Init(csi);
  vtkAnimationCue_Init(csi);
  vtkArray_Init(csi);
  vtkArrayCoordinates_Init(csi);
  vtkArrayExtents_Init(csi);
  vtkArrayExtentsList_Init(csi);
  vtkArrayIterator_Init(csi);
  vtkArrayIteratorTemplate_Init(csi);
  vtkArrayRange_Init(csi);
  vtkArraySort_Init(csi);
  vtkArrayWeights_Init(csi);
  vtkBitArray_Init(csi);
  vtkBitArrayIterator_Init(csi);
  vtkBoxMuellerRandomSequence_Init(csi);
  vtkBreakPoint_Init(csi);
  vtkByteSwap_Init(csi);
  vtkCallbackCommand_Init(csi);
  vtkCharArray_Init(csi);
  vtkCollection_Init(csi);
  vtkCollectionIterator_Init(csi);
  vtkCommand_Init(csi);
  vtkCommonInformationKeyManager_Init(csi);
  vtkConditionVariable_Init(csi);
  vtkCriticalSection_Init(csi);
  vtkDataArray_Init(csi);
  vtkDataArrayCollection_Init(csi);
  vtkDataArrayCollectionIterator_Init(csi);
  vtkDataArraySelection_Init(csi);
  vtkDebugLeaks_Init(csi);
  vtkDebugLeaksManager_Init(csi);
  vtkDenseArray_Init(csi);
  vtkDoubleArray_Init(csi);
  vtkDynamicLoader_Init(csi);
  vtkEventForwarderCommand_Init(csi);
  vtkFileOutputWindow_Init(csi);
  vtkFloatArray_Init(csi);
  vtkFloatingPointExceptions_Init(csi);
  vtkGarbageCollector_Init(csi);
  vtkGarbageCollectorManager_Init(csi);
  vtkGaussianRandomSequence_Init(csi);
  vtkGenericDataArray_Init(csi);
  vtkIdList_Init(csi);
  vtkIdListCollection_Init(csi);
  vtkIdTypeArray_Init(csi);
  vtkIndent_Init(csi);
  vtkInformation_Init(csi);
  vtkInformationDataObjectKey_Init(csi);
  vtkInformationDoubleKey_Init(csi);
  vtkInformationDoubleVectorKey_Init(csi);
  vtkInformationIdTypeKey_Init(csi);
  vtkInformationInformationKey_Init(csi);
  vtkInformationInformationVectorKey_Init(csi);
  vtkInformationIntegerKey_Init(csi);
  vtkInformationIntegerPointerKey_Init(csi);
  vtkInformationIntegerVectorKey_Init(csi);
  vtkInformationIterator_Init(csi);
  vtkInformationKey_Init(csi);
  vtkInformationKeyLookup_Init(csi);
  vtkInformationKeyVectorKey_Init(csi);
  vtkInformationObjectBaseKey_Init(csi);
  vtkInformationObjectBaseVectorKey_Init(csi);
  vtkInformationRequestKey_Init(csi);
  vtkInformationStringKey_Init(csi);
  vtkInformationStringVectorKey_Init(csi);
  vtkInformationUnsignedLongKey_Init(csi);
  vtkInformationVariantKey_Init(csi);
  vtkInformationVariantVectorKey_Init(csi);
  vtkInformationVector_Init(csi);
  vtkIntArray_Init(csi);
  vtkLargeInteger_Init(csi);
  vtkLongArray_Init(csi);
  vtkLongLongArray_Init(csi);
  vtkLookupTable_Init(csi);
  vtkMappedDataArray_Init(csi);
  vtkMath_Init(csi);
  vtkMersenneTwister_Init(csi);
  vtkMinimalStandardRandomSequence_Init(csi);
  vtkMultiThreader_Init(csi);
  vtkMutexLock_Init(csi);
  vtkOStrStreamWrapper_Init(csi);
  vtkOStreamWrapper_Init(csi);
  vtkObject_Init(csi);
  vtkObjectBase_Init(csi);
  vtkObjectFactory_Init(csi);
  vtkObjectFactoryCollection_Init(csi);
  vtkOldStyleCallbackCommand_Init(csi);
  vtkOutputWindow_Init(csi);
  vtkOverrideInformation_Init(csi);
  vtkOverrideInformationCollection_Init(csi);
  vtkPoints_Init(csi);
  vtkPoints2D_Init(csi);
  vtkPriorityQueue_Init(csi);
  vtkRandomPool_Init(csi);
  vtkRandomSequence_Init(csi);
  vtkReferenceCount_Init(csi);
  vtkSOADataArrayTemplate_Init(csi);
  vtkScalarsToColors_Init(csi);
  vtkShortArray_Init(csi);
  vtkSignedCharArray_Init(csi);
  vtkSimpleCriticalSection_Init(csi);
  vtkSmartPointerBase_Init(csi);
  vtkSortDataArray_Init(csi);
  vtkSparseArray_Init(csi);
  vtkStdString_Init(csi);
  vtkStringArray_Init(csi);
  vtkStringOutputWindow_Init(csi);
  vtkSystemIncludes_Init(csi);
  vtkTimePointUtility_Init(csi);
  vtkTimeStamp_Init(csi);
  vtkType_Init(csi);
  vtkTypedArray_Init(csi);
  vtkTypedDataArray_Init(csi);
  vtkUnicodeString_Init(csi);
  vtkUnicodeStringArray_Init(csi);
  vtkUnsignedCharArray_Init(csi);
  vtkUnsignedIntArray_Init(csi);
  vtkUnsignedLongArray_Init(csi);
  vtkUnsignedLongLongArray_Init(csi);
  vtkUnsignedShortArray_Init(csi);
  vtkVariant_Init(csi);
  vtkVariantArray_Init(csi);
  vtkVersion_Init(csi);
  vtkVoidArray_Init(csi);
  vtkWeakPointerBase_Init(csi);
  vtkWeakReference_Init(csi);
  vtkWindow_Init(csi);
  vtkWrappingHints_Init(csi);
  vtkXMLFileOutputWindow_Init(csi);
  vtkConfigure_Init(csi);
  vtkMathConfigure_Init(csi);
  vtkVersionMacros_Init(csi);
  vtkTypeInt8Array_Init(csi);
  vtkTypeInt16Array_Init(csi);
  vtkTypeInt32Array_Init(csi);
  vtkTypeInt64Array_Init(csi);
  vtkTypeUInt8Array_Init(csi);
  vtkTypeUInt16Array_Init(csi);
  vtkTypeUInt32Array_Init(csi);
  vtkTypeUInt64Array_Init(csi);
  vtkTypeFloat32Array_Init(csi);
  vtkTypeFloat64Array_Init(csi);

}
