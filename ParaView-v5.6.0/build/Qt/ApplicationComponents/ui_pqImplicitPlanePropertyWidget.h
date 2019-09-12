/********************************************************************************
** Form generated from reading UI file 'pqImplicitPlanePropertyWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQIMPLICITPLANEPROPERTYWIDGET_H
#define UI_PQIMPLICITPLANEPROPERTYWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "pqDoubleLineEdit.h"

QT_BEGIN_NAMESPACE

class Ui_ImplicitPlanePropertyWidget
{
public:
    QVBoxLayout *vboxLayout;
    QCheckBox *show3DWidget;
    QGridLayout *gridLayout;
    QLabel *labelNormal;
    pqDoubleLineEdit *normalX;
    QLabel *labelOrigin;
    pqDoubleLineEdit *normalZ;
    pqDoubleLineEdit *originZ;
    pqDoubleLineEdit *originY;
    pqDoubleLineEdit *normalY;
    pqDoubleLineEdit *originX;
    QLabel *pickLabel;
    QGridLayout *gridLayout1;
    QPushButton *useCameraNormal;
    QPushButton *useXNormal;
    QPushButton *useZNormal;
    QPushButton *useYNormal;
    QPushButton *resetToDataBounds;
    QPushButton *resetCameraToNormal;

    void setupUi(QWidget *ImplicitPlanePropertyWidget)
    {
        if (ImplicitPlanePropertyWidget->objectName().isEmpty())
            ImplicitPlanePropertyWidget->setObjectName(QStringLiteral("ImplicitPlanePropertyWidget"));
        ImplicitPlanePropertyWidget->resize(611, 395);
        vboxLayout = new QVBoxLayout(ImplicitPlanePropertyWidget);
        vboxLayout->setSpacing(2);
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        show3DWidget = new QCheckBox(ImplicitPlanePropertyWidget);
        show3DWidget->setObjectName(QStringLiteral("show3DWidget"));
        show3DWidget->setChecked(true);

        vboxLayout->addWidget(show3DWidget);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(2);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        labelNormal = new QLabel(ImplicitPlanePropertyWidget);
        labelNormal->setObjectName(QStringLiteral("labelNormal"));

        gridLayout->addWidget(labelNormal, 1, 0, 1, 1);

        normalX = new pqDoubleLineEdit(ImplicitPlanePropertyWidget);
        normalX->setObjectName(QStringLiteral("normalX"));

        gridLayout->addWidget(normalX, 1, 1, 1, 1);

        labelOrigin = new QLabel(ImplicitPlanePropertyWidget);
        labelOrigin->setObjectName(QStringLiteral("labelOrigin"));

        gridLayout->addWidget(labelOrigin, 0, 0, 1, 1);

        normalZ = new pqDoubleLineEdit(ImplicitPlanePropertyWidget);
        normalZ->setObjectName(QStringLiteral("normalZ"));

        gridLayout->addWidget(normalZ, 1, 3, 1, 1);

        originZ = new pqDoubleLineEdit(ImplicitPlanePropertyWidget);
        originZ->setObjectName(QStringLiteral("originZ"));

        gridLayout->addWidget(originZ, 0, 3, 1, 1);

        originY = new pqDoubleLineEdit(ImplicitPlanePropertyWidget);
        originY->setObjectName(QStringLiteral("originY"));

        gridLayout->addWidget(originY, 0, 2, 1, 1);

        normalY = new pqDoubleLineEdit(ImplicitPlanePropertyWidget);
        normalY->setObjectName(QStringLiteral("normalY"));

        gridLayout->addWidget(normalY, 1, 2, 1, 1);

        originX = new pqDoubleLineEdit(ImplicitPlanePropertyWidget);
        originX->setObjectName(QStringLiteral("originX"));

        gridLayout->addWidget(originX, 0, 1, 1, 1);


        vboxLayout->addLayout(gridLayout);

        pickLabel = new QLabel(ImplicitPlanePropertyWidget);
        pickLabel->setObjectName(QStringLiteral("pickLabel"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        pickLabel->setFont(font);
        pickLabel->setWordWrap(true);

        vboxLayout->addWidget(pickLabel);

        gridLayout1 = new QGridLayout();
        gridLayout1->setSpacing(2);
        gridLayout1->setContentsMargins(0, 0, 0, 0);
        gridLayout1->setObjectName(QStringLiteral("gridLayout1"));
        useCameraNormal = new QPushButton(ImplicitPlanePropertyWidget);
        useCameraNormal->setObjectName(QStringLiteral("useCameraNormal"));

        gridLayout1->addWidget(useCameraNormal, 0, 1, 1, 1);

        useXNormal = new QPushButton(ImplicitPlanePropertyWidget);
        useXNormal->setObjectName(QStringLiteral("useXNormal"));

        gridLayout1->addWidget(useXNormal, 0, 0, 1, 1);

        useZNormal = new QPushButton(ImplicitPlanePropertyWidget);
        useZNormal->setObjectName(QStringLiteral("useZNormal"));

        gridLayout1->addWidget(useZNormal, 2, 0, 1, 1);

        useYNormal = new QPushButton(ImplicitPlanePropertyWidget);
        useYNormal->setObjectName(QStringLiteral("useYNormal"));

        gridLayout1->addWidget(useYNormal, 1, 0, 1, 1);

        resetToDataBounds = new QPushButton(ImplicitPlanePropertyWidget);
        resetToDataBounds->setObjectName(QStringLiteral("resetToDataBounds"));

        gridLayout1->addWidget(resetToDataBounds, 6, 0, 1, 2);

        resetCameraToNormal = new QPushButton(ImplicitPlanePropertyWidget);
        resetCameraToNormal->setObjectName(QStringLiteral("resetCameraToNormal"));

        gridLayout1->addWidget(resetCameraToNormal, 5, 0, 1, 2);


        vboxLayout->addLayout(gridLayout1);

        QWidget::setTabOrder(show3DWidget, originX);
        QWidget::setTabOrder(originX, originY);
        QWidget::setTabOrder(originY, originZ);
        QWidget::setTabOrder(originZ, normalX);
        QWidget::setTabOrder(normalX, normalY);
        QWidget::setTabOrder(normalY, normalZ);
        QWidget::setTabOrder(normalZ, useXNormal);
        QWidget::setTabOrder(useXNormal, useYNormal);
        QWidget::setTabOrder(useYNormal, useZNormal);

        retranslateUi(ImplicitPlanePropertyWidget);

        QMetaObject::connectSlotsByName(ImplicitPlanePropertyWidget);
    } // setupUi

    void retranslateUi(QWidget *ImplicitPlanePropertyWidget)
    {
        ImplicitPlanePropertyWidget->setWindowTitle(QApplication::translate("ImplicitPlanePropertyWidget", "Form", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        show3DWidget->setToolTip(QApplication::translate("ImplicitPlanePropertyWidget", "Show the interactive plane in the 3D render view.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        show3DWidget->setText(QApplication::translate("ImplicitPlanePropertyWidget", "Show Plane", Q_NULLPTR));
        labelNormal->setText(QApplication::translate("ImplicitPlanePropertyWidget", "Normal", Q_NULLPTR));
        labelOrigin->setText(QApplication::translate("ImplicitPlanePropertyWidget", "Origin", Q_NULLPTR));
        pickLabel->setText(QApplication::translate("ImplicitPlanePropertyWidget", "Note: Use 'P' to pick 'Origin' on mesh or 'Ctrl+P' to snap to the closest mesh point", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        useCameraNormal->setToolTip(QApplication::translate("ImplicitPlanePropertyWidget", "Set the normal to the camera's view direction.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        useCameraNormal->setText(QApplication::translate("ImplicitPlanePropertyWidget", "Camera Normal", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        useXNormal->setToolTip(QApplication::translate("ImplicitPlanePropertyWidget", "Set the normal to the x-axis.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        useXNormal->setText(QApplication::translate("ImplicitPlanePropertyWidget", "&X Normal", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        useZNormal->setToolTip(QApplication::translate("ImplicitPlanePropertyWidget", "Set the normal to the z-axis.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        useZNormal->setText(QApplication::translate("ImplicitPlanePropertyWidget", "&Z Normal", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        useYNormal->setToolTip(QApplication::translate("ImplicitPlanePropertyWidget", "Set the normal to the y-axis.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        useYNormal->setText(QApplication::translate("ImplicitPlanePropertyWidget", "&Y Normal", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        resetToDataBounds->setToolTip(QApplication::translate("ImplicitPlanePropertyWidget", "Reset the plane based on the data bounds.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        resetToDataBounds->setText(QApplication::translate("ImplicitPlanePropertyWidget", "Reset to Data Bounds", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        resetCameraToNormal->setToolTip(QApplication::translate("ImplicitPlanePropertyWidget", "Reset the camera to look along the normal.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        resetCameraToNormal->setText(QApplication::translate("ImplicitPlanePropertyWidget", "Reset Camera to Normal", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ImplicitPlanePropertyWidget: public Ui_ImplicitPlanePropertyWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQIMPLICITPLANEPROPERTYWIDGET_H
