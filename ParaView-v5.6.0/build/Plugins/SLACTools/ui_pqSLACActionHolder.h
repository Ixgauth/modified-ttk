/********************************************************************************
** Form generated from reading UI file 'pqSLACActionHolder.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQSLACACTIONHOLDER_H
#define UI_PQSLACACTIONHOLDER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_pqSLACActionHolder
{
public:
    QAction *actionDataLoadManager;
    QAction *actionShowEField;
    QAction *actionShowBField;
    QAction *actionShowParticles;
    QAction *actionSolidMesh;
    QAction *actionWireframeSolidMesh;
    QAction *actionWireframeAndBackMesh;
    QAction *actionPlotOverZ;
    QAction *actionToggleBackgroundBW;
    QAction *actionShowStandardViewpoint;
    QAction *actionTemporalResetRange;
    QAction *actionCurrentTimeResetRange;

    void setupUi(QWidget *pqSLACActionHolder)
    {
        if (pqSLACActionHolder->objectName().isEmpty())
            pqSLACActionHolder->setObjectName(QStringLiteral("pqSLACActionHolder"));
        pqSLACActionHolder->resize(400, 300);
        actionDataLoadManager = new QAction(pqSLACActionHolder);
        actionDataLoadManager->setObjectName(QStringLiteral("actionDataLoadManager"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/SLACTools/Icons/DataLoadManager.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDataLoadManager->setIcon(icon);
        actionShowEField = new QAction(pqSLACActionHolder);
        actionShowEField->setObjectName(QStringLiteral("actionShowEField"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/SLACTools/Icons/EField.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionShowEField->setIcon(icon1);
        actionShowBField = new QAction(pqSLACActionHolder);
        actionShowBField->setObjectName(QStringLiteral("actionShowBField"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/SLACTools/Icons/BField.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionShowBField->setIcon(icon2);
        actionShowParticles = new QAction(pqSLACActionHolder);
        actionShowParticles->setObjectName(QStringLiteral("actionShowParticles"));
        actionShowParticles->setCheckable(true);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/SLACTools/Icons/ShowParticles.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionShowParticles->setIcon(icon3);
        actionSolidMesh = new QAction(pqSLACActionHolder);
        actionSolidMesh->setObjectName(QStringLiteral("actionSolidMesh"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/SLACTools/Icons/ShowSolid.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSolidMesh->setIcon(icon4);
        actionWireframeSolidMesh = new QAction(pqSLACActionHolder);
        actionWireframeSolidMesh->setObjectName(QStringLiteral("actionWireframeSolidMesh"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/SLACTools/Icons/ShowWireframeSolid.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionWireframeSolidMesh->setIcon(icon5);
        actionWireframeAndBackMesh = new QAction(pqSLACActionHolder);
        actionWireframeAndBackMesh->setObjectName(QStringLiteral("actionWireframeAndBackMesh"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/SLACTools/Icons/ShowWireframeAndBack.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionWireframeAndBackMesh->setIcon(icon6);
        actionPlotOverZ = new QAction(pqSLACActionHolder);
        actionPlotOverZ->setObjectName(QStringLiteral("actionPlotOverZ"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/SLACTools/Icons/PlotOverZ.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPlotOverZ->setIcon(icon7);
        actionToggleBackgroundBW = new QAction(pqSLACActionHolder);
        actionToggleBackgroundBW->setObjectName(QStringLiteral("actionToggleBackgroundBW"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/SLACTools/Icons/BackgroundBW.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionToggleBackgroundBW->setIcon(icon8);
        actionShowStandardViewpoint = new QAction(pqSLACActionHolder);
        actionShowStandardViewpoint->setObjectName(QStringLiteral("actionShowStandardViewpoint"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/SLACTools/Icons/XPlusSideways.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionShowStandardViewpoint->setIcon(icon9);
        actionTemporalResetRange = new QAction(pqSLACActionHolder);
        actionTemporalResetRange->setObjectName(QStringLiteral("actionTemporalResetRange"));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/SLACTools/Icons/ResetRangeTemporal.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionTemporalResetRange->setIcon(icon10);
        actionCurrentTimeResetRange = new QAction(pqSLACActionHolder);
        actionCurrentTimeResetRange->setObjectName(QStringLiteral("actionCurrentTimeResetRange"));
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/SLACTools/Icons/ResetRangeCurrentTime.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCurrentTimeResetRange->setIcon(icon11);

        retranslateUi(pqSLACActionHolder);

        QMetaObject::connectSlotsByName(pqSLACActionHolder);
    } // setupUi

    void retranslateUi(QWidget *pqSLACActionHolder)
    {
        pqSLACActionHolder->setWindowTitle(QApplication::translate("pqSLACActionHolder", "Form", Q_NULLPTR));
        actionDataLoadManager->setText(QApplication::translate("pqSLACActionHolder", "Data Load Manager", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionDataLoadManager->setToolTip(QApplication::translate("pqSLACActionHolder", "Show a Dialog to Manage Loaded Data", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionShowEField->setText(QApplication::translate("pqSLACActionHolder", "e field", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionShowEField->setToolTip(QApplication::translate("pqSLACActionHolder", "Show e field", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionShowBField->setText(QApplication::translate("pqSLACActionHolder", "b field", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionShowBField->setToolTip(QApplication::translate("pqSLACActionHolder", "Show b field", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionShowParticles->setText(QApplication::translate("pqSLACActionHolder", "Show Particles", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionShowParticles->setToolTip(QApplication::translate("pqSLACActionHolder", "Toggle Show Particles", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionSolidMesh->setText(QApplication::translate("pqSLACActionHolder", "Solid Mesh", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionSolidMesh->setToolTip(QApplication::translate("pqSLACActionHolder", "Show Mesh as Solid Surface", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionWireframeSolidMesh->setText(QApplication::translate("pqSLACActionHolder", "Wireframe Solid Mesh", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionWireframeSolidMesh->setToolTip(QApplication::translate("pqSLACActionHolder", "Show Mesh as Solid with Wireframe", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionWireframeAndBackMesh->setText(QApplication::translate("pqSLACActionHolder", "Wireframe Front and Solid Back", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionWireframeAndBackMesh->setToolTip(QApplication::translate("pqSLACActionHolder", "Show Wireframe Front and Solid Back", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionPlotOverZ->setText(QApplication::translate("pqSLACActionHolder", "Plot Over Z Axis", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionPlotOverZ->setToolTip(QApplication::translate("pqSLACActionHolder", "Make a Plot of a Field Along the Z Axis", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionToggleBackgroundBW->setText(QApplication::translate("pqSLACActionHolder", "Toggle Background B/W", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionToggleBackgroundBW->setToolTip(QApplication::translate("pqSLACActionHolder", "Toggle the Background Between Black and White", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionShowStandardViewpoint->setText(QApplication::translate("pqSLACActionHolder", "Show Standard Viewpoint", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionShowStandardViewpoint->setToolTip(QApplication::translate("pqSLACActionHolder", "Position the camera in a position convenient to see the entire mesh.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionTemporalResetRange->setText(QApplication::translate("pqSLACActionHolder", "Temporal Reset Range", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionTemporalResetRange->setToolTip(QApplication::translate("pqSLACActionHolder", "Reads in all the data over all time and uses the information to fix the scaling of the fields to a range that makes sense for all time steps.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionCurrentTimeResetRange->setText(QApplication::translate("pqSLACActionHolder", "Reset Range in Current Time", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionCurrentTimeResetRange->setToolTip(QApplication::translate("pqSLACActionHolder", "Looks exclusively at the range of the field at the current time step and fixes the range to the minimum and maximum of that range.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class pqSLACActionHolder: public Ui_pqSLACActionHolder {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQSLACACTIONHOLDER_H
