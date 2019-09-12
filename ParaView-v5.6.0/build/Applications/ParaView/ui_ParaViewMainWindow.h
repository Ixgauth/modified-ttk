/********************************************************************************
** Form generated from reading UI file 'ParaViewMainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PARAVIEWMAINWINDOW_H
#define UI_PARAVIEWMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "pqCatalystExportInspector.h"
#include "pqCollaborationPanel.h"
#include "pqColorMapEditor.h"
#include "pqComparativeVisPanel.h"
#include "pqDataInformationWidget.h"
#include "pqFindDataSelectionDisplayFrame.h"
#include "pqLightsInspector.h"
#include "pqMemoryInspectorPanel.h"
#include "pqMultiBlockInspectorWidget.h"
#include "pqOutputWidget.h"
#include "pqPVAnimationWidget.h"
#include "pqPipelineBrowserWidget.h"
#include "pqPropertiesPanel.h"
#include "pqProxyInformationWidget.h"
#include "pqStatusBar.h"
#include "pqTabbedMultiViewWidget.h"
#include "pqTimeInspectorWidget.h"

QT_BEGIN_NAMESPACE

class Ui_pqClientMainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    pqTabbedMultiViewWidget *MultiViewWidget;
    QMenuBar *menubar;
    QMenu *menu_File;
    QMenu *menuSources;
    QMenu *menuFilters;
    QMenu *menu_Edit;
    QMenu *menu_View;
    QMenu *menuTools;
    QMenu *menu_Help;
    QMenu *menu_Macros;
    QMenu *menu_Catalyst;
    pqStatusBar *statusbar;
    QDockWidget *pipelineBrowserDock;
    pqPipelineBrowserWidget *pipelineBrowser;
    QDockWidget *statisticsDock;
    pqDataInformationWidget *statisticsView;
    QDockWidget *animationViewDock;
    pqPVAnimationWidget *animationView;
    QDockWidget *comparativePanelDock;
    pqComparativeVisPanel *comparativeVisPanel;
    QDockWidget *collaborationPanelDock;
    pqCollaborationPanel *collaborationPanel;
    QDockWidget *informationDock;
    QWidget *informationWidgetFrame;
    QVBoxLayout *verticalLayout_2;
    QScrollArea *informationScrollArea;
    pqProxyInformationWidget *informationWidget;
    QDockWidget *memoryInspectorDock;
    pqMemoryInspectorPanel *dockWidgetContents;
    QDockWidget *propertiesDock;
    pqPropertiesPanel *propertiesPanel;
    QDockWidget *multiBlockInspectorDock;
    pqMultiBlockInspectorWidget *multiBlockInspectorPanel;
    QDockWidget *lightInspectorDock;
    pqLightsInspector *lightInspectorPanel;
    QDockWidget *catalystInspectorDock;
    QDockWidget *colorMapEditorDock;
    pqColorMapEditor *colorMapEditorPanel;
    QDockWidget *selectionDisplayDock;
    pqFindDataSelectionDisplayFrame *selectionDisplayWidget;
    QDockWidget *displayPropertiesDock;
    pqPropertiesPanel *displayPropertiesPanel;
    QDockWidget *viewPropertiesDock;
    pqPropertiesPanel *viewPropertiesPanel;
    QDockWidget *timeInspectorDock;
    pqTimeInspectorWidget *timeInspectorPanel;
    QDockWidget *outputWidgetDock;
    pqOutputWidget *outputWidget;
    QDockWidget *pythonShellDock;
    QWidget *pythonShellDummy;
    QHBoxLayout *horizontalLayout;
    QLabel *label;

    void setupUi(QMainWindow *pqClientMainWindow)
    {
        if (pqClientMainWindow->objectName().isEmpty())
            pqClientMainWindow->setObjectName(QStringLiteral("pqClientMainWindow"));
        pqClientMainWindow->resize(1152, 762);
        pqClientMainWindow->setAcceptDrops(true);
        QIcon icon;
        icon.addFile(QStringLiteral(":/pqWidgets/Icons/pvIcon512.png"), QSize(), QIcon::Normal, QIcon::Off);
        pqClientMainWindow->setWindowIcon(icon);
        centralwidget = new QWidget(pqClientMainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        MultiViewWidget = new pqTabbedMultiViewWidget(centralwidget);
        MultiViewWidget->setObjectName(QStringLiteral("MultiViewWidget"));

        gridLayout->addWidget(MultiViewWidget, 0, 0, 1, 1);

        pqClientMainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(pqClientMainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1152, 25));
        menu_File = new QMenu(menubar);
        menu_File->setObjectName(QStringLiteral("menu_File"));
        menuSources = new QMenu(menubar);
        menuSources->setObjectName(QStringLiteral("menuSources"));
        menuFilters = new QMenu(menubar);
        menuFilters->setObjectName(QStringLiteral("menuFilters"));
        menu_Edit = new QMenu(menubar);
        menu_Edit->setObjectName(QStringLiteral("menu_Edit"));
        menu_View = new QMenu(menubar);
        menu_View->setObjectName(QStringLiteral("menu_View"));
        menuTools = new QMenu(menubar);
        menuTools->setObjectName(QStringLiteral("menuTools"));
        menu_Help = new QMenu(menubar);
        menu_Help->setObjectName(QStringLiteral("menu_Help"));
        menu_Macros = new QMenu(menubar);
        menu_Macros->setObjectName(QStringLiteral("menu_Macros"));
        menu_Catalyst = new QMenu(menubar);
        menu_Catalyst->setObjectName(QStringLiteral("menu_Catalyst"));
        pqClientMainWindow->setMenuBar(menubar);
        statusbar = new pqStatusBar(pqClientMainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        pqClientMainWindow->setStatusBar(statusbar);
        pipelineBrowserDock = new QDockWidget(pqClientMainWindow);
        pipelineBrowserDock->setObjectName(QStringLiteral("pipelineBrowserDock"));
        pipelineBrowserDock->setAllowedAreas(Qt::LeftDockWidgetArea|Qt::RightDockWidgetArea);
        pipelineBrowser = new pqPipelineBrowserWidget();
        pipelineBrowser->setObjectName(QStringLiteral("pipelineBrowser"));
        pipelineBrowser->setContextMenuPolicy(Qt::DefaultContextMenu);
        pipelineBrowserDock->setWidget(pipelineBrowser);
        pqClientMainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(1), pipelineBrowserDock);
        statisticsDock = new QDockWidget(pqClientMainWindow);
        statisticsDock->setObjectName(QStringLiteral("statisticsDock"));
        statisticsDock->setAllowedAreas(Qt::BottomDockWidgetArea|Qt::LeftDockWidgetArea|Qt::RightDockWidgetArea);
        statisticsView = new pqDataInformationWidget();
        statisticsView->setObjectName(QStringLiteral("statisticsView"));
        statisticsDock->setWidget(statisticsView);
        pqClientMainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(8), statisticsDock);
        animationViewDock = new QDockWidget(pqClientMainWindow);
        animationViewDock->setObjectName(QStringLiteral("animationViewDock"));
        animationView = new pqPVAnimationWidget();
        animationView->setObjectName(QStringLiteral("animationView"));
        animationViewDock->setWidget(animationView);
        pqClientMainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(8), animationViewDock);
        comparativePanelDock = new QDockWidget(pqClientMainWindow);
        comparativePanelDock->setObjectName(QStringLiteral("comparativePanelDock"));
        comparativePanelDock->setAllowedAreas(Qt::LeftDockWidgetArea|Qt::RightDockWidgetArea);
        comparativeVisPanel = new pqComparativeVisPanel();
        comparativeVisPanel->setObjectName(QStringLiteral("comparativeVisPanel"));
        comparativePanelDock->setWidget(comparativeVisPanel);
        pqClientMainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(2), comparativePanelDock);
        collaborationPanelDock = new QDockWidget(pqClientMainWindow);
        collaborationPanelDock->setObjectName(QStringLiteral("collaborationPanelDock"));
        collaborationPanelDock->setAllowedAreas(Qt::LeftDockWidgetArea|Qt::RightDockWidgetArea);
        collaborationPanel = new pqCollaborationPanel();
        collaborationPanel->setObjectName(QStringLiteral("collaborationPanel"));
        collaborationPanelDock->setWidget(collaborationPanel);
        pqClientMainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(2), collaborationPanelDock);
        informationDock = new QDockWidget(pqClientMainWindow);
        informationDock->setObjectName(QStringLiteral("informationDock"));
        informationDock->setAllowedAreas(Qt::LeftDockWidgetArea|Qt::RightDockWidgetArea);
        informationWidgetFrame = new QWidget();
        informationWidgetFrame->setObjectName(QStringLiteral("informationWidgetFrame"));
        verticalLayout_2 = new QVBoxLayout(informationWidgetFrame);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        informationScrollArea = new QScrollArea(informationWidgetFrame);
        informationScrollArea->setObjectName(QStringLiteral("informationScrollArea"));
        informationScrollArea->setWidgetResizable(true);
        informationWidget = new pqProxyInformationWidget();
        informationWidget->setObjectName(QStringLiteral("informationWidget"));
        informationWidget->setGeometry(QRect(0, 0, 78, 154));
        informationScrollArea->setWidget(informationWidget);

        verticalLayout_2->addWidget(informationScrollArea);

        informationDock->setWidget(informationWidgetFrame);
        pqClientMainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(1), informationDock);
        memoryInspectorDock = new QDockWidget(pqClientMainWindow);
        memoryInspectorDock->setObjectName(QStringLiteral("memoryInspectorDock"));
        memoryInspectorDock->setAllowedAreas(Qt::LeftDockWidgetArea|Qt::RightDockWidgetArea);
        dockWidgetContents = new pqMemoryInspectorPanel();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        memoryInspectorDock->setWidget(dockWidgetContents);
        pqClientMainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(2), memoryInspectorDock);
        propertiesDock = new QDockWidget(pqClientMainWindow);
        propertiesDock->setObjectName(QStringLiteral("propertiesDock"));
        propertiesDock->setMinimumSize(QSize(80, 41));
        propertiesDock->setAllowedAreas(Qt::LeftDockWidgetArea|Qt::RightDockWidgetArea);
        propertiesPanel = new pqPropertiesPanel();
        propertiesPanel->setObjectName(QStringLiteral("propertiesPanel"));
        propertiesDock->setWidget(propertiesPanel);
        pqClientMainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(1), propertiesDock);
        multiBlockInspectorDock = new QDockWidget(pqClientMainWindow);
        multiBlockInspectorDock->setObjectName(QStringLiteral("multiBlockInspectorDock"));
        multiBlockInspectorDock->setAllowedAreas(Qt::LeftDockWidgetArea|Qt::RightDockWidgetArea);
        multiBlockInspectorPanel = new pqMultiBlockInspectorWidget();
        multiBlockInspectorPanel->setObjectName(QStringLiteral("multiBlockInspectorPanel"));
        multiBlockInspectorDock->setWidget(multiBlockInspectorPanel);
        pqClientMainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(1), multiBlockInspectorDock);
        lightInspectorDock = new QDockWidget(pqClientMainWindow);
        lightInspectorDock->setObjectName(QStringLiteral("lightInspectorDock"));
        lightInspectorDock->setAllowedAreas(Qt::LeftDockWidgetArea|Qt::RightDockWidgetArea);
        lightInspectorPanel = new pqLightsInspector();
        lightInspectorPanel->setObjectName(QStringLiteral("lightInspectorPanel"));
        lightInspectorDock->setWidget(lightInspectorPanel);
        pqClientMainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(1), lightInspectorDock);
        catalystInspectorDock = new QDockWidget(pqClientMainWindow);
        catalystInspectorDock->setObjectName(QStringLiteral("catalystInspectorDock"));
        catalystInspectorDock->setAllowedAreas(Qt::LeftDockWidgetArea|Qt::RightDockWidgetArea);
        pqClientMainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(1), catalystInspectorDock);
        colorMapEditorDock = new QDockWidget(pqClientMainWindow);
        colorMapEditorDock->setObjectName(QStringLiteral("colorMapEditorDock"));
        colorMapEditorDock->setAllowedAreas(Qt::LeftDockWidgetArea|Qt::RightDockWidgetArea);
        colorMapEditorPanel = new pqColorMapEditor();
        colorMapEditorPanel->setObjectName(QStringLiteral("colorMapEditorPanel"));
        colorMapEditorDock->setWidget(colorMapEditorPanel);
        pqClientMainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(2), colorMapEditorDock);
        selectionDisplayDock = new QDockWidget(pqClientMainWindow);
        selectionDisplayDock->setObjectName(QStringLiteral("selectionDisplayDock"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(selectionDisplayDock->sizePolicy().hasHeightForWidth());
        selectionDisplayDock->setSizePolicy(sizePolicy);
        selectionDisplayDock->setAllowedAreas(Qt::LeftDockWidgetArea|Qt::RightDockWidgetArea);
        selectionDisplayWidget = new pqFindDataSelectionDisplayFrame();
        selectionDisplayWidget->setObjectName(QStringLiteral("selectionDisplayWidget"));
        selectionDisplayWidget->setProperty("useVerticalLayout", QVariant(true));
        selectionDisplayDock->setWidget(selectionDisplayWidget);
        pqClientMainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(2), selectionDisplayDock);
        displayPropertiesDock = new QDockWidget(pqClientMainWindow);
        displayPropertiesDock->setObjectName(QStringLiteral("displayPropertiesDock"));
        displayPropertiesDock->setAllowedAreas(Qt::LeftDockWidgetArea|Qt::RightDockWidgetArea);
        displayPropertiesPanel = new pqPropertiesPanel();
        displayPropertiesPanel->setObjectName(QStringLiteral("displayPropertiesPanel"));
        displayPropertiesPanel->setProperty("panelMode", QVariant(2));
        displayPropertiesDock->setWidget(displayPropertiesPanel);
        pqClientMainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(1), displayPropertiesDock);
        viewPropertiesDock = new QDockWidget(pqClientMainWindow);
        viewPropertiesDock->setObjectName(QStringLiteral("viewPropertiesDock"));
        viewPropertiesDock->setAllowedAreas(Qt::LeftDockWidgetArea|Qt::RightDockWidgetArea);
        viewPropertiesPanel = new pqPropertiesPanel();
        viewPropertiesPanel->setObjectName(QStringLiteral("viewPropertiesPanel"));
        viewPropertiesPanel->setProperty("panelMode", QVariant(4));
        viewPropertiesDock->setWidget(viewPropertiesPanel);
        pqClientMainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(1), viewPropertiesDock);
        timeInspectorDock = new QDockWidget(pqClientMainWindow);
        timeInspectorDock->setObjectName(QStringLiteral("timeInspectorDock"));
        timeInspectorDock->setAllowedAreas(Qt::AllDockWidgetAreas);
        timeInspectorPanel = new pqTimeInspectorWidget();
        timeInspectorPanel->setObjectName(QStringLiteral("timeInspectorPanel"));
        timeInspectorDock->setWidget(timeInspectorPanel);
        pqClientMainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(2), timeInspectorDock);
        outputWidgetDock = new QDockWidget(pqClientMainWindow);
        outputWidgetDock->setObjectName(QStringLiteral("outputWidgetDock"));
        outputWidgetDock->setFloating(false);
        outputWidget = new pqOutputWidget();
        outputWidget->setObjectName(QStringLiteral("outputWidget"));
        outputWidgetDock->setWidget(outputWidget);
        pqClientMainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(8), outputWidgetDock);
        pythonShellDock = new QDockWidget(pqClientMainWindow);
        pythonShellDock->setObjectName(QStringLiteral("pythonShellDock"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pythonShellDock->sizePolicy().hasHeightForWidth());
        pythonShellDock->setSizePolicy(sizePolicy1);
        pythonShellDock->setFloating(false);
        pythonShellDummy = new QWidget();
        pythonShellDummy->setObjectName(QStringLiteral("pythonShellDummy"));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pythonShellDummy->sizePolicy().hasHeightForWidth());
        pythonShellDummy->setSizePolicy(sizePolicy2);
        horizontalLayout = new QHBoxLayout(pythonShellDummy);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(pythonShellDummy);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label);

        pythonShellDock->setWidget(pythonShellDummy);
        pqClientMainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(8), pythonShellDock);

        menubar->addAction(menu_File->menuAction());
        menubar->addAction(menu_Edit->menuAction());
        menubar->addAction(menu_View->menuAction());
        menubar->addAction(menuSources->menuAction());
        menubar->addAction(menuFilters->menuAction());
        menubar->addAction(menuTools->menuAction());
        menubar->addAction(menu_Catalyst->menuAction());
        menubar->addAction(menu_Macros->menuAction());
        menubar->addAction(menu_Help->menuAction());

        retranslateUi(pqClientMainWindow);

        QMetaObject::connectSlotsByName(pqClientMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *pqClientMainWindow)
    {
        pqClientMainWindow->setWindowTitle(QApplication::translate("pqClientMainWindow", "MainWindow", Q_NULLPTR));
        menu_File->setTitle(QApplication::translate("pqClientMainWindow", "&File", Q_NULLPTR));
        menuSources->setTitle(QApplication::translate("pqClientMainWindow", "&Sources", Q_NULLPTR));
        menuFilters->setTitle(QApplication::translate("pqClientMainWindow", "Fi&lters", Q_NULLPTR));
        menu_Edit->setTitle(QApplication::translate("pqClientMainWindow", "&Edit", Q_NULLPTR));
        menu_View->setTitle(QApplication::translate("pqClientMainWindow", "&View", Q_NULLPTR));
        menuTools->setTitle(QApplication::translate("pqClientMainWindow", "&Tools", Q_NULLPTR));
        menu_Help->setTitle(QApplication::translate("pqClientMainWindow", "&Help", Q_NULLPTR));
        menu_Macros->setTitle(QApplication::translate("pqClientMainWindow", "&Macros", Q_NULLPTR));
        menu_Catalyst->setTitle(QApplication::translate("pqClientMainWindow", "&Catalyst", Q_NULLPTR));
        pipelineBrowserDock->setWindowTitle(QApplication::translate("pqClientMainWindow", "Pipeline Browser", Q_NULLPTR));
        statisticsDock->setWindowTitle(QApplication::translate("pqClientMainWindow", "Statistics Inspector", Q_NULLPTR));
        animationViewDock->setWindowTitle(QApplication::translate("pqClientMainWindow", "Animation View", Q_NULLPTR));
        comparativePanelDock->setWindowTitle(QApplication::translate("pqClientMainWindow", "Comparative View Inspector", Q_NULLPTR));
        collaborationPanelDock->setWindowTitle(QApplication::translate("pqClientMainWindow", "Collaboration Panel", Q_NULLPTR));
        informationDock->setWindowTitle(QApplication::translate("pqClientMainWindow", "Information", Q_NULLPTR));
        memoryInspectorDock->setWindowTitle(QApplication::translate("pqClientMainWindow", "Memory Inspector", Q_NULLPTR));
        propertiesDock->setWindowTitle(QApplication::translate("pqClientMainWindow", "Properties", Q_NULLPTR));
        multiBlockInspectorDock->setWindowTitle(QApplication::translate("pqClientMainWindow", "Multi-block Inspector", Q_NULLPTR));
        lightInspectorDock->setWindowTitle(QApplication::translate("pqClientMainWindow", "Light Inspector", Q_NULLPTR));
        catalystInspectorDock->setWindowTitle(QApplication::translate("pqClientMainWindow", "Catalyst Export Inspector", Q_NULLPTR));
        colorMapEditorDock->setWindowTitle(QApplication::translate("pqClientMainWindow", "Color Map Editor", Q_NULLPTR));
        selectionDisplayDock->setWindowTitle(QApplication::translate("pqClientMainWindow", "Selection Display Inspector", Q_NULLPTR));
        displayPropertiesDock->setWindowTitle(QApplication::translate("pqClientMainWindow", "Display", Q_NULLPTR));
        viewPropertiesDock->setWindowTitle(QApplication::translate("pqClientMainWindow", "View", Q_NULLPTR));
        timeInspectorDock->setWindowTitle(QApplication::translate("pqClientMainWindow", "Time Inspector", Q_NULLPTR));
        outputWidgetDock->setWindowTitle(QApplication::translate("pqClientMainWindow", "Output Messages", Q_NULLPTR));
        outputWidget->setProperty("settingsKey", QVariant(QApplication::translate("pqClientMainWindow", "OutputMessages", Q_NULLPTR)));
        pythonShellDock->setWindowTitle(QApplication::translate("pqClientMainWindow", "Python Shell", Q_NULLPTR));
        label->setText(QApplication::translate("pqClientMainWindow", "Python support not available!", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class pqClientMainWindow: public Ui_pqClientMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PARAVIEWMAINWINDOW_H
