/********************************************************************************
** Form generated from reading UI file 'pqCameraToolbar.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQCAMERATOOLBAR_H
#define UI_PQCAMERATOOLBAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QToolBar>

QT_BEGIN_NAMESPACE

class Ui_pqCameraToolbar
{
public:
    QAction *actionResetCamera;
    QAction *actionPositiveX;
    QAction *actionNegativeX;
    QAction *actionPositiveY;
    QAction *actionNegativeY;
    QAction *actionPositiveZ;
    QAction *actionNegativeZ;
    QAction *actionRotate90degCW;
    QAction *actionRotate90degCCW;
    QAction *actionZoomToBox;
    QAction *actionZoomToData;

    void setupUi(QToolBar *pqCameraToolbar)
    {
        if (pqCameraToolbar->objectName().isEmpty())
            pqCameraToolbar->setObjectName(QStringLiteral("pqCameraToolbar"));
        pqCameraToolbar->resize(336, 42);
        pqCameraToolbar->setOrientation(Qt::Horizontal);
        actionResetCamera = new QAction(pqCameraToolbar);
        actionResetCamera->setObjectName(QStringLiteral("actionResetCamera"));
        actionResetCamera->setEnabled(false);
        QIcon icon;
        icon.addFile(QStringLiteral(":/pqWidgets/Icons/pqResetCamera.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionResetCamera->setIcon(icon);
        actionPositiveX = new QAction(pqCameraToolbar);
        actionPositiveX->setObjectName(QStringLiteral("actionPositiveX"));
        actionPositiveX->setEnabled(false);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/pqWidgets/Icons/pqXPlus.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPositiveX->setIcon(icon1);
        actionNegativeX = new QAction(pqCameraToolbar);
        actionNegativeX->setObjectName(QStringLiteral("actionNegativeX"));
        actionNegativeX->setEnabled(false);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/pqWidgets/Icons/pqXMinus.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNegativeX->setIcon(icon2);
        actionPositiveY = new QAction(pqCameraToolbar);
        actionPositiveY->setObjectName(QStringLiteral("actionPositiveY"));
        actionPositiveY->setEnabled(false);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/pqWidgets/Icons/pqYPlus.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPositiveY->setIcon(icon3);
        actionNegativeY = new QAction(pqCameraToolbar);
        actionNegativeY->setObjectName(QStringLiteral("actionNegativeY"));
        actionNegativeY->setEnabled(false);
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/pqWidgets/Icons/pqYMinus.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNegativeY->setIcon(icon4);
        actionPositiveZ = new QAction(pqCameraToolbar);
        actionPositiveZ->setObjectName(QStringLiteral("actionPositiveZ"));
        actionPositiveZ->setEnabled(false);
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/pqWidgets/Icons/pqZPlus.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPositiveZ->setIcon(icon5);
        actionNegativeZ = new QAction(pqCameraToolbar);
        actionNegativeZ->setObjectName(QStringLiteral("actionNegativeZ"));
        actionNegativeZ->setEnabled(false);
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/pqWidgets/Icons/pqZMinus.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNegativeZ->setIcon(icon6);
        actionRotate90degCW = new QAction(pqCameraToolbar);
        actionRotate90degCW->setObjectName(QStringLiteral("actionRotate90degCW"));
        actionRotate90degCW->setEnabled(false);
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/pqWidgets/Icons/pqRotateCameraCW.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRotate90degCW->setIcon(icon7);
        actionRotate90degCCW = new QAction(pqCameraToolbar);
        actionRotate90degCCW->setObjectName(QStringLiteral("actionRotate90degCCW"));
        actionRotate90degCCW->setEnabled(false);
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/pqWidgets/Icons/pqRotateCameraCCW.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRotate90degCCW->setIcon(icon8);
        actionZoomToBox = new QAction(pqCameraToolbar);
        actionZoomToBox->setObjectName(QStringLiteral("actionZoomToBox"));
        actionZoomToBox->setCheckable(true);
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/pqWidgets/Icons/pqZoomToSelection.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionZoomToBox->setIcon(icon9);
        actionZoomToData = new QAction(pqCameraToolbar);
        actionZoomToData->setObjectName(QStringLiteral("actionZoomToData"));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/pqWidgets/Icons/pqZoomToData.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionZoomToData->setIcon(icon10);

        pqCameraToolbar->addAction(actionResetCamera);
        pqCameraToolbar->addAction(actionZoomToData);
        pqCameraToolbar->addAction(actionZoomToBox);
        pqCameraToolbar->addAction(actionPositiveX);
        pqCameraToolbar->addAction(actionNegativeX);
        pqCameraToolbar->addAction(actionPositiveY);
        pqCameraToolbar->addAction(actionNegativeY);
        pqCameraToolbar->addAction(actionPositiveZ);
        pqCameraToolbar->addAction(actionNegativeZ);
        pqCameraToolbar->addAction(actionRotate90degCW);
        pqCameraToolbar->addAction(actionRotate90degCCW);

        retranslateUi(pqCameraToolbar);

        QMetaObject::connectSlotsByName(pqCameraToolbar);
    } // setupUi

    void retranslateUi(QToolBar *pqCameraToolbar)
    {
        pqCameraToolbar->setWindowTitle(QApplication::translate("pqCameraToolbar", "Camera Controls", Q_NULLPTR));
        actionResetCamera->setText(QApplication::translate("pqCameraToolbar", "&Reset", Q_NULLPTR));
        actionResetCamera->setIconText(QApplication::translate("pqCameraToolbar", "Reset Camera", Q_NULLPTR));
#ifndef QT_NO_STATUSTIP
        actionResetCamera->setStatusTip(QApplication::translate("pqCameraToolbar", "Reset Camera", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        actionPositiveX->setText(QApplication::translate("pqCameraToolbar", "+X", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionPositiveX->setToolTip(QApplication::translate("pqCameraToolbar", "Set view direction to +X", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionPositiveX->setStatusTip(QApplication::translate("pqCameraToolbar", "Set view direction to +X", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        actionPositiveX->setWhatsThis(QApplication::translate("pqCameraToolbar", "Set view direction to +X", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        actionNegativeX->setText(QApplication::translate("pqCameraToolbar", "-X", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionNegativeX->setToolTip(QApplication::translate("pqCameraToolbar", "Set view direction to -X", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionNegativeX->setStatusTip(QApplication::translate("pqCameraToolbar", "Set view direction to -X", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        actionNegativeX->setWhatsThis(QApplication::translate("pqCameraToolbar", "Set view direction to -X", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        actionPositiveY->setText(QApplication::translate("pqCameraToolbar", "+Y", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionPositiveY->setToolTip(QApplication::translate("pqCameraToolbar", "Set view direction to +Y", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionPositiveY->setStatusTip(QApplication::translate("pqCameraToolbar", "Set view direction to +Y", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        actionPositiveY->setWhatsThis(QApplication::translate("pqCameraToolbar", "Set view direction to +Y", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        actionNegativeY->setText(QApplication::translate("pqCameraToolbar", "-Y", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionNegativeY->setToolTip(QApplication::translate("pqCameraToolbar", "Set view direction to -Y", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionNegativeY->setStatusTip(QApplication::translate("pqCameraToolbar", "Set view direction to -Y", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        actionNegativeY->setWhatsThis(QApplication::translate("pqCameraToolbar", "Set view direction to -Y", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        actionPositiveZ->setText(QApplication::translate("pqCameraToolbar", "+Z", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionPositiveZ->setToolTip(QApplication::translate("pqCameraToolbar", "Set view direction to +Z", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionPositiveZ->setStatusTip(QApplication::translate("pqCameraToolbar", "Set view direction to +Z", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        actionPositiveZ->setWhatsThis(QApplication::translate("pqCameraToolbar", "Set view direction to +Z", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        actionNegativeZ->setText(QApplication::translate("pqCameraToolbar", "-Z", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionNegativeZ->setToolTip(QApplication::translate("pqCameraToolbar", "Set view direction to -Z", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionNegativeZ->setStatusTip(QApplication::translate("pqCameraToolbar", "Set view direction to -Z", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        actionNegativeZ->setWhatsThis(QApplication::translate("pqCameraToolbar", "Set view direction to -Z", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        actionRotate90degCW->setText(QString());
#ifndef QT_NO_TOOLTIP
        actionRotate90degCW->setToolTip(QApplication::translate("pqCameraToolbar", "Rotate 90\302\260 clockwise", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionRotate90degCW->setStatusTip(QApplication::translate("pqCameraToolbar", "Rotate 90\302\260 clockwise", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        actionRotate90degCW->setWhatsThis(QApplication::translate("pqCameraToolbar", "Rotate 90\302\260 clockwise", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        actionRotate90degCCW->setText(QString());
#ifndef QT_NO_TOOLTIP
        actionRotate90degCCW->setToolTip(QApplication::translate("pqCameraToolbar", "Rotate 90\302\260 counterclockwise", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionRotate90degCCW->setStatusTip(QApplication::translate("pqCameraToolbar", "Rotate 90\302\260 counterclockwise", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        actionRotate90degCCW->setWhatsThis(QApplication::translate("pqCameraToolbar", "Rotate 90\302\260 counterclockwise", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        actionZoomToBox->setText(QApplication::translate("pqCameraToolbar", "Zoom to Box", Q_NULLPTR));
#ifndef QT_NO_STATUSTIP
        actionZoomToBox->setStatusTip(QApplication::translate("pqCameraToolbar", "Zoom to Box", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        actionZoomToData->setText(QApplication::translate("pqCameraToolbar", "ZTD", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionZoomToData->setToolTip(QApplication::translate("pqCameraToolbar", "Zoom To Data", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class pqCameraToolbar: public Ui_pqCameraToolbar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQCAMERATOOLBAR_H
