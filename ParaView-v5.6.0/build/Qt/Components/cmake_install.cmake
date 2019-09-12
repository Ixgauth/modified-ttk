# Install script for directory: /home/ian/ttk/ParaView-v5.6.0/Qt/Components

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
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkpqComponents-pv5.6.so.1"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkpqComponents-pv5.6.so"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/home/ian/ttk/ParaView-v5.6.0/build/lib/libvtkpqComponents-pv5.6.so.1"
    "/home/ian/ttk/ParaView-v5.6.0/build/lib/libvtkpqComponents-pv5.6.so"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkpqComponents-pv5.6.so.1"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvtkpqComponents-pv5.6.so"
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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/paraview-5.6/Modules" TYPE FILE FILES "/home/ian/ttk/ParaView-v5.6.0/build/Qt/Components//CMakeFiles/pqComponents.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xDevelopmentx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/paraview-5.6" TYPE FILE FILES
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqAboutDialog.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqActionGroupInterface.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqActiveObjects.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqAnimatablePropertiesComboBox.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqAnimatableProxyComboBox.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqAnimationManager.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqAnimationViewWidget.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqArrayListDomain.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqArraySelectionWidget.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqArrayStatusPropertyWidget.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqFavoritesDialog.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqFavoritesTreeWidget.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqCalculatorWidget.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqCameraDialog.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqCameraKeyFrameWidget.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqChangeInputDialog.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqCollaborationPanel.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqColorChooserButtonWithPalettes.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqComboBoxDomain.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqCommandPropertyWidget.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqComparativeCueWidget.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqComparativeVisPanel.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqComponentsInit.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqComponentsTestUtility.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqCompositeDataInformationTreeModel.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqCompositePropertyWidgetDecorator.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqCompositeTreePropertyWidget.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqCustomFilterDefinitionModel.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqCustomFilterDefinitionWizard.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqCustomFilterManager.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqCustomFilterManagerModel.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqCustomViewpointButtonDialog.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqDataInformationModel.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqDataInformationWidget.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqDialog.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqDisplayColorWidget.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqDisplayPanel.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqDisplayPanelInterface.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqDisplayPanelPropertyWidget.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqDisplayRepresentationWidget.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqDockWindowInterface.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqDoubleVectorPropertyWidget.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqFieldSelectionAdaptor.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqFileChooserWidget.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqFindDataCreateSelectionFrame.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqFindDataCurrentSelectionFrame.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqFindDataSelectionDisplayFrame.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqFindDataDialog.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqHighlightItemDelegate.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqImageTip.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqIndexSelectionWidget.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqInputSelectorWidget.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqIntMaskPropertyWidget.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqIntRangeWidget.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqIntVectorPropertyWidget.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqItemViewSearchWidget.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqItemViewSearchWidgetEventPlayer.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqKeyFrameEditor.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqKeyFrameTimeValidator.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqKeyFrameTypeWidget.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqLabel.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqLightsEditor.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqLightsInspector.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqLinksEditor.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqLinksManager.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqLiveInsituManager.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqLiveInsituVisualizationManager.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqLockViewSizeCustomDialog.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqMemoryInspectorPanel.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqMultiBlockInspectorWidget.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqMultiViewWidget.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqSplitter.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqOrbitCreatorDialog.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqOutputPortComboBox.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqPipelineAnnotationFilterModel.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqPipelineBrowserWidget.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqPipelineInputComboBox.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqPipelineModel.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqPipelineModelSelectionAdaptor.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqPipelineTimeKeyFrameEditor.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqPluginDialog.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqPluginTreeWidgetEventPlayer.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqPluginTreeWidgetEventTranslator.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqPluginTreeWidget.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqPopOutWidget.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqPresetDialog.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqPresetToPixmap.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqPropertiesPanel.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqPropertyGroupWidget.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqPropertyWidget.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqPropertyWidgetDecorator.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqPropertyWidgetInterface.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqProxiesWidget.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqProxyEditorPropertyWidget.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqProxyInformationWidget.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqProxyPropertyWidget.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqProxySelectionWidget.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqProxySILModel.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqProxyWidget.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqProxyWidgetDialog.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqQueryClauseWidget.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqRecentFilesMenu.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqRemoteCommandDialog.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqRemoteCommandTemplateDialog.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqRescaleRange.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqSampleScalarAddRangeDialog.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqSampleScalarWidget.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqScalarSetModel.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqScalarValueListPropertyWidget.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqSearchBox.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqSelectionAdaptor.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqSelectionInputWidget.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqSelectionLinkDialog.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqSelectionManager.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqSelectReaderDialog.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqServerConfigurationImporter.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqServerConnectDialog.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqServerLauncher.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqSetBreakpointDialog.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqSettingsDialog.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqShaderReplacementsComboBox.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqShaderReplacementsSelectorPropertyWidget.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqSignalAdaptorKeyFrameType.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqSignalAdaptorSelectionTreeWidget.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqSignalAdaptorTreeWidget.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqSILModel.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqSILWidget.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqSMSignalAdaptors.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqStringVectorPropertyWidget.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqSubsetInclusionLatticeTreeModel.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqSubsetInclusionLatticeWidget.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqTabbedMultiViewWidget.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqTextureComboBox.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqTextureSelectorPropertyWidget.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqTimerLogDisplay.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqToolBarInterface.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqToolTipTrapper.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqTransferFunctionWidget.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqTriggerOnIdleHelper.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqUndoStackBuilder.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqVariableType.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqVCRController.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqViewContextMenuHandler.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqViewContextMenuManager.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqViewFrameActionsInterface.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqViewFrame.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqViewManager.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqWidgetRangeDomain.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqAbstractItemSelectionModel.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqImageOutputInfo.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqCatalystExportStateWizard.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqCinemaTrack.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqCinemaConfiguration.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqExportViewSelection.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqCinemaTrackSelection.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqSGExportStateWizard.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqSGPluginManager.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqSGWritersMenuManager.h"
    "/home/ian/ttk/ParaView-v5.6.0/Qt/Components/pqExodusIIVariableSelectionWidget.h"
    "/home/ian/ttk/ParaView-v5.6.0/build/Qt/Components/pqComponentsModule.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/paraview-5.6" TYPE FILE FILES "/home/ian/ttk/ParaView-v5.6.0/build/Qt/Components/ui_pqExportStateWizard.h")
endif()

