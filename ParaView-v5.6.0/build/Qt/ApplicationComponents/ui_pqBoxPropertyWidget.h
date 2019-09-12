/********************************************************************************
** Form generated from reading UI file 'pqBoxPropertyWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQBOXPROPERTYWIDGET_H
#define UI_PQBOXPROPERTYWIDGET_H

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

class Ui_BoxPropertyWidget
{
public:
    QVBoxLayout *vboxLayout;
    QCheckBox *show3DWidget;
    QGridLayout *gridLayout;
    QLabel *labelRotate;
    pqDoubleLineEdit *rotateX;
    QLabel *labelTranslate;
    pqDoubleLineEdit *rotateZ;
    pqDoubleLineEdit *translateZ;
    pqDoubleLineEdit *translateY;
    pqDoubleLineEdit *rotateY;
    pqDoubleLineEdit *translateX;
    pqDoubleLineEdit *scaleY;
    pqDoubleLineEdit *scaleX;
    pqDoubleLineEdit *scaleZ;
    QLabel *labelScale;
    QGridLayout *gridLayout1;
    QCheckBox *enableRotation;
    QCheckBox *enableTranslation;
    QCheckBox *enableScaling;
    QCheckBox *enableMoveFaces;
    QPushButton *resetBounds;

    void setupUi(QWidget *BoxPropertyWidget)
    {
        if (BoxPropertyWidget->objectName().isEmpty())
            BoxPropertyWidget->setObjectName(QStringLiteral("BoxPropertyWidget"));
        BoxPropertyWidget->resize(245, 244);
        vboxLayout = new QVBoxLayout(BoxPropertyWidget);
        vboxLayout->setSpacing(2);
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        show3DWidget = new QCheckBox(BoxPropertyWidget);
        show3DWidget->setObjectName(QStringLiteral("show3DWidget"));
        show3DWidget->setChecked(true);

        vboxLayout->addWidget(show3DWidget);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(2);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        labelRotate = new QLabel(BoxPropertyWidget);
        labelRotate->setObjectName(QStringLiteral("labelRotate"));

        gridLayout->addWidget(labelRotate, 1, 0, 1, 1);

        rotateX = new pqDoubleLineEdit(BoxPropertyWidget);
        rotateX->setObjectName(QStringLiteral("rotateX"));

        gridLayout->addWidget(rotateX, 1, 1, 1, 1);

        labelTranslate = new QLabel(BoxPropertyWidget);
        labelTranslate->setObjectName(QStringLiteral("labelTranslate"));

        gridLayout->addWidget(labelTranslate, 0, 0, 1, 1);

        rotateZ = new pqDoubleLineEdit(BoxPropertyWidget);
        rotateZ->setObjectName(QStringLiteral("rotateZ"));

        gridLayout->addWidget(rotateZ, 1, 3, 1, 1);

        translateZ = new pqDoubleLineEdit(BoxPropertyWidget);
        translateZ->setObjectName(QStringLiteral("translateZ"));

        gridLayout->addWidget(translateZ, 0, 3, 1, 1);

        translateY = new pqDoubleLineEdit(BoxPropertyWidget);
        translateY->setObjectName(QStringLiteral("translateY"));

        gridLayout->addWidget(translateY, 0, 2, 1, 1);

        rotateY = new pqDoubleLineEdit(BoxPropertyWidget);
        rotateY->setObjectName(QStringLiteral("rotateY"));

        gridLayout->addWidget(rotateY, 1, 2, 1, 1);

        translateX = new pqDoubleLineEdit(BoxPropertyWidget);
        translateX->setObjectName(QStringLiteral("translateX"));

        gridLayout->addWidget(translateX, 0, 1, 1, 1);

        scaleY = new pqDoubleLineEdit(BoxPropertyWidget);
        scaleY->setObjectName(QStringLiteral("scaleY"));

        gridLayout->addWidget(scaleY, 2, 2, 1, 1);

        scaleX = new pqDoubleLineEdit(BoxPropertyWidget);
        scaleX->setObjectName(QStringLiteral("scaleX"));

        gridLayout->addWidget(scaleX, 2, 1, 1, 1);

        scaleZ = new pqDoubleLineEdit(BoxPropertyWidget);
        scaleZ->setObjectName(QStringLiteral("scaleZ"));

        gridLayout->addWidget(scaleZ, 2, 3, 1, 1);

        labelScale = new QLabel(BoxPropertyWidget);
        labelScale->setObjectName(QStringLiteral("labelScale"));

        gridLayout->addWidget(labelScale, 2, 0, 1, 1);


        vboxLayout->addLayout(gridLayout);

        gridLayout1 = new QGridLayout();
        gridLayout1->setObjectName(QStringLiteral("gridLayout1"));
        enableRotation = new QCheckBox(BoxPropertyWidget);
        enableRotation->setObjectName(QStringLiteral("enableRotation"));

        gridLayout1->addWidget(enableRotation, 3, 0, 1, 1);

        enableTranslation = new QCheckBox(BoxPropertyWidget);
        enableTranslation->setObjectName(QStringLiteral("enableTranslation"));

        gridLayout1->addWidget(enableTranslation, 1, 0, 1, 1);

        enableScaling = new QCheckBox(BoxPropertyWidget);
        enableScaling->setObjectName(QStringLiteral("enableScaling"));

        gridLayout1->addWidget(enableScaling, 1, 1, 1, 1);

        enableMoveFaces = new QCheckBox(BoxPropertyWidget);
        enableMoveFaces->setObjectName(QStringLiteral("enableMoveFaces"));

        gridLayout1->addWidget(enableMoveFaces, 3, 1, 1, 1);


        vboxLayout->addLayout(gridLayout1);

        resetBounds = new QPushButton(BoxPropertyWidget);
        resetBounds->setObjectName(QStringLiteral("resetBounds"));

        vboxLayout->addWidget(resetBounds);

        QWidget::setTabOrder(show3DWidget, translateX);
        QWidget::setTabOrder(translateX, translateY);
        QWidget::setTabOrder(translateY, translateZ);
        QWidget::setTabOrder(translateZ, rotateX);
        QWidget::setTabOrder(rotateX, rotateY);
        QWidget::setTabOrder(rotateY, rotateZ);
        QWidget::setTabOrder(rotateZ, scaleX);
        QWidget::setTabOrder(scaleX, scaleY);
        QWidget::setTabOrder(scaleY, scaleZ);
        QWidget::setTabOrder(scaleZ, enableTranslation);
        QWidget::setTabOrder(enableTranslation, enableScaling);
        QWidget::setTabOrder(enableScaling, enableRotation);
        QWidget::setTabOrder(enableRotation, enableMoveFaces);
        QWidget::setTabOrder(enableMoveFaces, resetBounds);

        retranslateUi(BoxPropertyWidget);

        QMetaObject::connectSlotsByName(BoxPropertyWidget);
    } // setupUi

    void retranslateUi(QWidget *BoxPropertyWidget)
    {
        BoxPropertyWidget->setWindowTitle(QApplication::translate("BoxPropertyWidget", "Form", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        show3DWidget->setToolTip(QApplication::translate("BoxPropertyWidget", "Show the interactive box widget in the 3d scene.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        show3DWidget->setText(QApplication::translate("BoxPropertyWidget", "Show Box", Q_NULLPTR));
        labelRotate->setText(QApplication::translate("BoxPropertyWidget", "Rotate", Q_NULLPTR));
        labelTranslate->setText(QApplication::translate("BoxPropertyWidget", "Translate", Q_NULLPTR));
        labelScale->setText(QApplication::translate("BoxPropertyWidget", "Scale", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        enableRotation->setToolTip(QApplication::translate("BoxPropertyWidget", "Enable rotation of the 3d box widget.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        enableRotation->setText(QApplication::translate("BoxPropertyWidget", "Rotation", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        enableTranslation->setToolTip(QApplication::translate("BoxPropertyWidget", "Enable translation of the 3d box widget.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        enableTranslation->setText(QApplication::translate("BoxPropertyWidget", "Translation", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        enableScaling->setToolTip(QApplication::translate("BoxPropertyWidget", "Enable scaling of the 3d box widget.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        enableScaling->setText(QApplication::translate("BoxPropertyWidget", "Scaling", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        enableMoveFaces->setToolTip(QApplication::translate("BoxPropertyWidget", "Enable moving faces of the 3d box widget.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        enableMoveFaces->setText(QApplication::translate("BoxPropertyWidget", "Face Movement", Q_NULLPTR));
        resetBounds->setText(QApplication::translate("BoxPropertyWidget", "Reset Bounds", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class BoxPropertyWidget: public Ui_BoxPropertyWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQBOXPROPERTYWIDGET_H
