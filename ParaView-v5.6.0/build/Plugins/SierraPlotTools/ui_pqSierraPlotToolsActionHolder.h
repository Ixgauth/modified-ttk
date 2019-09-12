/********************************************************************************
** Form generated from reading UI file 'pqSierraPlotToolsActionHolder.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQSIERRAPLOTTOOLSACTIONHOLDER_H
#define UI_PQSIERRAPLOTTOOLSACTIONHOLDER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_pqSierraPlotToolsActionHolder
{
public:
    QAction *actionDataLoadManager;
    QAction *actionSolidMesh;
    QAction *actionWireframeSolidMesh;
    QAction *actionWireframeAndBackMesh;
    QAction *actionToggleBackgroundBW;
    QAction *actionPlotVars;
    QAction *actionPlotDEBUG;

    void setupUi(QWidget *pqSierraPlotToolsActionHolder)
    {
        if (pqSierraPlotToolsActionHolder->objectName().isEmpty())
            pqSierraPlotToolsActionHolder->setObjectName(QStringLiteral("pqSierraPlotToolsActionHolder"));
        pqSierraPlotToolsActionHolder->resize(425, 316);
        actionDataLoadManager = new QAction(pqSierraPlotToolsActionHolder);
        actionDataLoadManager->setObjectName(QStringLiteral("actionDataLoadManager"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/SierraPlotToolsTools/Icons/DataLoadManager.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDataLoadManager->setIcon(icon);
        actionSolidMesh = new QAction(pqSierraPlotToolsActionHolder);
        actionSolidMesh->setObjectName(QStringLiteral("actionSolidMesh"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/SierraPlotToolsTools/Icons/ShowSolid.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSolidMesh->setIcon(icon1);
        actionWireframeSolidMesh = new QAction(pqSierraPlotToolsActionHolder);
        actionWireframeSolidMesh->setObjectName(QStringLiteral("actionWireframeSolidMesh"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/SierraPlotToolsTools/Icons/ShowWireframeSolid.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionWireframeSolidMesh->setIcon(icon2);
        actionWireframeAndBackMesh = new QAction(pqSierraPlotToolsActionHolder);
        actionWireframeAndBackMesh->setObjectName(QStringLiteral("actionWireframeAndBackMesh"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/SierraPlotToolsTools/Icons/ShowWireframeAndBack.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionWireframeAndBackMesh->setIcon(icon3);
        actionToggleBackgroundBW = new QAction(pqSierraPlotToolsActionHolder);
        actionToggleBackgroundBW->setObjectName(QStringLiteral("actionToggleBackgroundBW"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/SierraPlotToolsTools/Icons/BackgroundBW.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionToggleBackgroundBW->setIcon(icon4);
        actionPlotVars = new QAction(pqSierraPlotToolsActionHolder);
        actionPlotVars->setObjectName(QStringLiteral("actionPlotVars"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/SierraPlotToolsTools/Icons/plotVarsCurve-32x32.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPlotVars->setIcon(icon5);
        actionPlotDEBUG = new QAction(pqSierraPlotToolsActionHolder);
        actionPlotDEBUG->setObjectName(QStringLiteral("actionPlotDEBUG"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/SierraPlotToolsTools/Icons/DEBUG.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPlotDEBUG->setIcon(icon6);

        retranslateUi(pqSierraPlotToolsActionHolder);

        QMetaObject::connectSlotsByName(pqSierraPlotToolsActionHolder);
    } // setupUi

    void retranslateUi(QWidget *pqSierraPlotToolsActionHolder)
    {
        pqSierraPlotToolsActionHolder->setWindowTitle(QApplication::translate("pqSierraPlotToolsActionHolder", "Form", Q_NULLPTR));
        actionDataLoadManager->setText(QApplication::translate("pqSierraPlotToolsActionHolder", "Data Load Manager", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionDataLoadManager->setToolTip(QApplication::translate("pqSierraPlotToolsActionHolder", "Sierra Plot Tools (SPT) Load Data", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionSolidMesh->setText(QApplication::translate("pqSierraPlotToolsActionHolder", "Solid Mesh", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionSolidMesh->setToolTip(QApplication::translate("pqSierraPlotToolsActionHolder", "Show Mesh as Solid Surface", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionWireframeSolidMesh->setText(QApplication::translate("pqSierraPlotToolsActionHolder", "Wireframe Solid Mesh", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionWireframeSolidMesh->setToolTip(QApplication::translate("pqSierraPlotToolsActionHolder", "Show Mesh as Solid with Wireframe", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionWireframeAndBackMesh->setText(QApplication::translate("pqSierraPlotToolsActionHolder", "Wireframe Front and Solid Back", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionWireframeAndBackMesh->setToolTip(QApplication::translate("pqSierraPlotToolsActionHolder", "Show Wireframe Front and Solid Back", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionToggleBackgroundBW->setText(QApplication::translate("pqSierraPlotToolsActionHolder", "Toggle Background B/W", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionToggleBackgroundBW->setToolTip(QApplication::translate("pqSierraPlotToolsActionHolder", "Toggle the Background Between Black and White", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionPlotVars->setText(QApplication::translate("pqSierraPlotToolsActionHolder", "Plot Vars", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionPlotVars->setToolTip(QApplication::translate("pqSierraPlotToolsActionHolder", "Plot Variables", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionPlotDEBUG->setText(QApplication::translate("pqSierraPlotToolsActionHolder", "Plot DEBUG", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionPlotDEBUG->setToolTip(QApplication::translate("pqSierraPlotToolsActionHolder", "Plot DEBUGGING button", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class pqSierraPlotToolsActionHolder: public Ui_pqSierraPlotToolsActionHolder {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQSIERRAPLOTTOOLSACTIONHOLDER_H
