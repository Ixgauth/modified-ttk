/********************************************************************************
** Form generated from reading UI file 'pqHelpWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQHELPWINDOW_H
#define UI_PQHELPWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_pqHelpWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QDockWidget *contentsDock;
    QWidget *dockWidgetContents;
    QDockWidget *searchDock;
    QWidget *dockWidgetContents_3;

    void setupUi(QMainWindow *pqHelpWindow)
    {
        if (pqHelpWindow->objectName().isEmpty())
            pqHelpWindow->setObjectName(QStringLiteral("pqHelpWindow"));
        pqHelpWindow->resize(1024, 768);
        centralwidget = new QWidget(pqHelpWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        pqHelpWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(pqHelpWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1024, 26));
        pqHelpWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(pqHelpWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        pqHelpWindow->setStatusBar(statusbar);
        contentsDock = new QDockWidget(pqHelpWindow);
        contentsDock->setObjectName(QStringLiteral("contentsDock"));
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        contentsDock->setWidget(dockWidgetContents);
        pqHelpWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(1), contentsDock);
        searchDock = new QDockWidget(pqHelpWindow);
        searchDock->setObjectName(QStringLiteral("searchDock"));
        dockWidgetContents_3 = new QWidget();
        dockWidgetContents_3->setObjectName(QStringLiteral("dockWidgetContents_3"));
        searchDock->setWidget(dockWidgetContents_3);
        pqHelpWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(1), searchDock);

        retranslateUi(pqHelpWindow);

        QMetaObject::connectSlotsByName(pqHelpWindow);
    } // setupUi

    void retranslateUi(QMainWindow *pqHelpWindow)
    {
        pqHelpWindow->setWindowTitle(QApplication::translate("pqHelpWindow", "Online Documentation", Q_NULLPTR));
        contentsDock->setWindowTitle(QApplication::translate("pqHelpWindow", "Contents", Q_NULLPTR));
        searchDock->setWindowTitle(QApplication::translate("pqHelpWindow", "Search", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class pqHelpWindow: public Ui_pqHelpWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQHELPWINDOW_H
