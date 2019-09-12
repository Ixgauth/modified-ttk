# Install script for directory: /home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Core

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xRuntimeLibrariesx" OR NOT CMAKE_INSTALL_COMPONENT)
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkPVServerManagerCore-pv5.6.so.1"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkPVServerManagerCore-pv5.6.so"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/home/ian/ttk/ParaView-v5.6.0/build/lib/libvtkPVServerManagerCore-pv5.6.so.1"
    "/home/ian/ttk/ParaView-v5.6.0/build/lib/libvtkPVServerManagerCore-pv5.6.so"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkPVServerManagerCore-pv5.6.so.1"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkPVServerManagerCore-pv5.6.so"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHANGE
           FILE "${file}"
           OLD_RPATH "/home/ian/ttk/ParaView-v5.6.0/build/lib:"
           NEW_RPATH "")
      if(CMAKE_INSTALL_DO_STRIP)
        execute_process(COMMAND "/usr/bin/strip" "${file}")
      endif()
    endif()
  endforeach()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xDevelopmentx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/paraview-5.6/Modules" TYPE FILE FILES "/home/ian/ttk/ParaView-v5.6.0/build/ParaViewCore/ServerManager/Core//CMakeFiles/vtkPVServerManagerCore.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xDevelopmentx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/paraview-5.6/Modules" TYPE FILE FILES "/home/ian/ttk/ParaView-v5.6.0/build/lib/cmake/paraview-5.6/Modules/vtkPVServerManagerCoreHierarchy.txt")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xDevelopmentx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/paraview-5.6" TYPE FILE FILES
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Core/vtkLiveInsituLink.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Core/vtkSMAMRLevelsDomain.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Core/vtkSMArrayListDomain.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Core/vtkSMArrayRangeDomain.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Core/vtkSMArraySelectionDomain.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Core/vtkSMBooleanDomain.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Core/vtkSMBoundsDomain.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Core/vtkSMCollaborationManager.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Core/vtkSMCompositeTreeDomain.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Core/vtkSMCompoundProxyDefinitionLoader.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Core/vtkSMCompoundSourceProxy.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Core/vtkSMCompoundSourceProxyDefinitionBuilder.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Core/vtkSMCoreUtilities.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Core/vtkSMDataSourceProxy.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Core/vtkSMDataTypeDomain.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Core/vtkSMDeserializer.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Core/vtkSMDeserializerProtobuf.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Core/vtkSMDeserializerXMLCache.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Core/vtkSMDeserializerXML.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Core/vtkSMDimensionsDomain.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Core/vtkSMDiscreteDoubleDomain.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Core/vtkSMDocumentation.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Core/vtkSMDomain.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Core/vtkSMDomainIterator.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Core/vtkSMDoubleMapProperty.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Core/vtkSMDoubleMapPropertyIterator.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Core/vtkSMDoubleRangeDomain.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Core/vtkSMDoubleVectorProperty.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Core/vtkSMEnumerationDomain.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Core/vtkSMExtentDomain.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Core/vtkSMExportProxyDepot.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Core/vtkSMFieldDataDomain.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Core/vtkSMFileListDomain.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Core/vtkSMInputFileNameDomain.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Core/vtkSMFixedTypeDomain.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Core/vtkSMGlobalPropertiesLinkUndoElement.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Core/vtkSMGlobalPropertiesProxy.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Core/vtkSMIdTypeVectorProperty.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Core/vtkSMIndexSelectionDomain.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Core/vtkSMInputArrayDomain.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Core/vtkSMInputProperty.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Core/vtkSMInsituStateLoader.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Core/vtkSMIntRangeDomain.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Core/vtkSMIntVectorProperty.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Core/vtkSMLink.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Core/vtkSMLiveInsituLinkProxy.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Core/vtkSMMapProperty.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Core/vtkSMNamedPropertyIterator.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Core/vtkSMNumberOfComponentsDomain.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Core/vtkSMObject.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Core/vtkSMOrderedPropertyIterator.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Core/vtkSMOutputPort.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Core/vtkSMParaViewPipelineController.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Core/vtkSMPWriterProxy.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Core/vtkSMPipelineState.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Core/vtkSMPluginLoaderProxy.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Core/vtkSMPluginManager.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Core/vtkSMProperty.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Core/vtkSMPropertyGroup.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Core/vtkSMPropertyHelper.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Core/vtkSMPropertyIterator.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Core/vtkSMNullProxy.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Core/vtkSMPropertyLink.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Core/vtkSMProxy.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Core/vtkSMProxyDefinitionManager.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Core/vtkSMProxyGroupDomain.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Core/vtkSMProxyInitializationHelper.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Core/vtkSMProxyIterator.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Core/vtkSMProxyLink.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Core/vtkSMProxyListDomain.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Core/vtkSMProxyLocator.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Core/vtkSMProxyManager.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Core/vtkSMProxyProperty.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Core/vtkSMProxySelectionModel.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Core/vtkSMRangeDomainTemplate.txx"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Core/vtkSMRangeDomainTemplate.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Core/vtkSMRangedTransferFunctionDomain.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Core/vtkSMReaderFactory.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Core/vtkSMRemoteObject.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Core/vtkSMRemoteObjectUpdateUndoElement.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Core/vtkSMSILDomain.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Core/vtkSMSILModel.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Core/vtkSMSelfGeneratingSourceProxy.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Core/vtkSMServerStateLocator.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Core/vtkSMSession.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Core/vtkSMSessionClient.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Core/vtkSMSessionObject.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Core/vtkSMSessionProxyManager.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Core/vtkSMSettings.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Core/vtkSMSettingsProxy.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Core/vtkSMSourceProxy.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Core/vtkSMStateLoader.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Core/vtkSMStateLocator.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Core/vtkSMStateVersionController.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Core/vtkSMStringListDomain.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Core/vtkSMStringVectorProperty.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Core/vtkSMSubsetInclusionLatticeDomain.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Core/vtkSMTimeKeeper.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Core/vtkSMTimeKeeperProxy.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Core/vtkSMTimeStepIndexDomain.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Core/vtkSMTrace.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Core/vtkSMUncheckedPropertyHelper.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Core/vtkSMUndoElement.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Core/vtkSMUndoStack.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Core/vtkSMUndoStackBuilder.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Core/vtkSMVectorProperty.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Core/vtkSMWriterFactory.h"
    "/home/ian/ttk/ParaView-v5.6.0/ParaViewCore/ServerManager/Core/vtkSMWriterProxy.h"
    "/home/ian/ttk/ParaView-v5.6.0/build/ParaViewCore/ServerManager/Core/vtkPVServerManagerCoreModule.h"
    )
endif()

