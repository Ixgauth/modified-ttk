/********************************************************************************
** Form generated from reading UI file 'pqSpherePropertyWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQSPHEREPROPERTYWIDGET_H
#define UI_PQSPHEREPROPERTYWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include "pqDoubleLineEdit.h"

QT_BEGIN_NAMESPACE

class Ui_SpherePropertyWidget
{
public:
    QGridLayout *gridLayout;
    QCheckBox *show3DWidget;
    QLabel *centerLabel;
    pqDoubleLineEdit *centerX;
    pqDoubleLineEdit *centerY;
    pqDoubleLineEdit *centerZ;
    QLabel *normalLabel;
    pqDoubleLineEdit *normalX;
    pqDoubleLineEdit *normalY;
    pqDoubleLineEdit *normalZ;
    QLabel *radiusLabel;
    pqDoubleLineEdit *radius;
    QLabel *pickLabel;
    QPushButton *centerOnBounds;

    void setupUi(QWidget *SpherePropertyWidget)
    {
        if (SpherePropertyWidget->objectName().isEmpty())
            SpherePropertyWidget->setObjectName(QStringLiteral("SpherePropertyWidget"));
        SpherePropertyWidget->resize(402, 157);
        gridLayout = new QGridLayout(SpherePropertyWidget);
        gridLayout->setSpacing(2);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        show3DWidget = new QCheckBox(SpherePropertyWidget);
        show3DWidget->setObjectName(QStringLiteral("show3DWidget"));
        show3DWidget->setChecked(true);

        gridLayout->addWidget(show3DWidget, 0, 0, 1, 2);

        centerLabel = new QLabel(SpherePropertyWidget);
        centerLabel->setObjectName(QStringLiteral("centerLabel"));

        gridLayout->addWidget(centerLabel, 1, 0, 1, 1);

        centerX = new pqDoubleLineEdit(SpherePropertyWidget);
        centerX->setObjectName(QStringLiteral("centerX"));

        gridLayout->addWidget(centerX, 1, 1, 1, 1);

        centerY = new pqDoubleLineEdit(SpherePropertyWidget);
        centerY->setObjectName(QStringLiteral("centerY"));

        gridLayout->addWidget(centerY, 1, 2, 1, 1);

        centerZ = new pqDoubleLineEdit(SpherePropertyWidget);
        centerZ->setObjectName(QStringLiteral("centerZ"));

        gridLayout->addWidget(centerZ, 1, 3, 1, 1);

        normalLabel = new QLabel(SpherePropertyWidget);
        normalLabel->setObjectName(QStringLiteral("normalLabel"));

        gridLayout->addWidget(normalLabel, 2, 0, 1, 1);

        normalX = new pqDoubleLineEdit(SpherePropertyWidget);
        normalX->setObjectName(QStringLiteral("normalX"));

        gridLayout->addWidget(normalX, 2, 1, 1, 1);

        normalY = new pqDoubleLineEdit(SpherePropertyWidget);
        normalY->setObjectName(QStringLiteral("normalY"));

        gridLayout->addWidget(normalY, 2, 2, 1, 1);

        normalZ = new pqDoubleLineEdit(SpherePropertyWidget);
        normalZ->setObjectName(QStringLiteral("normalZ"));

        gridLayout->addWidget(normalZ, 2, 3, 1, 1);

        radiusLabel = new QLabel(SpherePropertyWidget);
        radiusLabel->setObjectName(QStringLiteral("radiusLabel"));

        gridLayout->addWidget(radiusLabel, 3, 0, 1, 1);

        radius = new pqDoubleLineEdit(SpherePropertyWidget);
        radius->setObjectName(QStringLiteral("radius"));

        gridLayout->addWidget(radius, 3, 1, 1, 1);

        pickLabel = new QLabel(SpherePropertyWidget);
        pickLabel->setObjectName(QStringLiteral("pickLabel"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        pickLabel->setFont(font);
        pickLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        pickLabel->setWordWrap(true);

        gridLayout->addWidget(pickLabel, 4, 0, 1, 4);

        centerOnBounds = new QPushButton(SpherePropertyWidget);
        centerOnBounds->setObjectName(QStringLiteral("centerOnBounds"));

        gridLayout->addWidget(centerOnBounds, 5, 0, 1, 4);


        retranslateUi(SpherePropertyWidget);

        QMetaObject::connectSlotsByName(SpherePropertyWidget);
    } // setupUi

    void retranslateUi(QWidget *SpherePropertyWidget)
    {
        SpherePropertyWidget->setWindowTitle(QApplication::translate("SpherePropertyWidget", "Form", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        show3DWidget->setToolTip(QApplication::translate("SpherePropertyWidget", "Enable/disable showing the interactive sphere widget in the 3D render view.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        show3DWidget->setText(QApplication::translate("SpherePropertyWidget", "Show Sphere", Q_NULLPTR));
        centerLabel->setText(QApplication::translate("SpherePropertyWidget", "Center", Q_NULLPTR));
        normalLabel->setText(QApplication::translate("SpherePropertyWidget", "Normal", Q_NULLPTR));
        radiusLabel->setText(QApplication::translate("SpherePropertyWidget", "Radius", Q_NULLPTR));
        pickLabel->setText(QApplication::translate("SpherePropertyWidget", "Note: Use 'P' to a 'Center' on mesh or 'Ctrl+P' to snap to the closest mesh point", Q_NULLPTR));
        centerOnBounds->setText(QApplication::translate("SpherePropertyWidget", "Center on Bounds", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SpherePropertyWidget: public Ui_SpherePropertyWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQSPHEREPROPERTYWIDGET_H
