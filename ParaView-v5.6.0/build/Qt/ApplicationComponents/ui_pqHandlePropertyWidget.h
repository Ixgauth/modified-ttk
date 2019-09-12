/********************************************************************************
** Form generated from reading UI file 'pqHandlePropertyWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQHANDLEPROPERTYWIDGET_H
#define UI_PQHANDLEPROPERTYWIDGET_H

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

class Ui_HandlePropertyWidget
{
public:
    QGridLayout *gridLayout;
    QCheckBox *show3DWidget;
    QLabel *pointLabel;
    pqDoubleLineEdit *worldPositionX;
    pqDoubleLineEdit *worldPositionY;
    pqDoubleLineEdit *worldPositionZ;
    QLabel *pickLabel;
    QPushButton *useCenterBounds;

    void setupUi(QWidget *HandlePropertyWidget)
    {
        if (HandlePropertyWidget->objectName().isEmpty())
            HandlePropertyWidget->setObjectName(QStringLiteral("HandlePropertyWidget"));
        HandlePropertyWidget->resize(429, 97);
        gridLayout = new QGridLayout(HandlePropertyWidget);
        gridLayout->setSpacing(2);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        show3DWidget = new QCheckBox(HandlePropertyWidget);
        show3DWidget->setObjectName(QStringLiteral("show3DWidget"));
        show3DWidget->setChecked(true);

        gridLayout->addWidget(show3DWidget, 0, 0, 1, 2);

        pointLabel = new QLabel(HandlePropertyWidget);
        pointLabel->setObjectName(QStringLiteral("pointLabel"));

        gridLayout->addWidget(pointLabel, 1, 0, 1, 1);

        worldPositionX = new pqDoubleLineEdit(HandlePropertyWidget);
        worldPositionX->setObjectName(QStringLiteral("worldPositionX"));

        gridLayout->addWidget(worldPositionX, 1, 1, 1, 1);

        worldPositionY = new pqDoubleLineEdit(HandlePropertyWidget);
        worldPositionY->setObjectName(QStringLiteral("worldPositionY"));

        gridLayout->addWidget(worldPositionY, 1, 2, 1, 1);

        worldPositionZ = new pqDoubleLineEdit(HandlePropertyWidget);
        worldPositionZ->setObjectName(QStringLiteral("worldPositionZ"));

        gridLayout->addWidget(worldPositionZ, 1, 3, 1, 1);

        pickLabel = new QLabel(HandlePropertyWidget);
        pickLabel->setObjectName(QStringLiteral("pickLabel"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        pickLabel->setFont(font);
        pickLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        pickLabel->setWordWrap(true);

        gridLayout->addWidget(pickLabel, 2, 0, 1, 4);

        useCenterBounds = new QPushButton(HandlePropertyWidget);
        useCenterBounds->setObjectName(QStringLiteral("useCenterBounds"));

        gridLayout->addWidget(useCenterBounds, 3, 0, 1, 4);


        retranslateUi(HandlePropertyWidget);

        QMetaObject::connectSlotsByName(HandlePropertyWidget);
    } // setupUi

    void retranslateUi(QWidget *HandlePropertyWidget)
    {
        HandlePropertyWidget->setWindowTitle(QApplication::translate("HandlePropertyWidget", "Form", Q_NULLPTR));
        show3DWidget->setText(QApplication::translate("HandlePropertyWidget", "Show Point", Q_NULLPTR));
        pointLabel->setText(QApplication::translate("HandlePropertyWidget", "Point", Q_NULLPTR));
        pickLabel->setText(QApplication::translate("HandlePropertyWidget", "Note: Use 'P' to pick 'Point' on mesh or 'Ctrl+P' to snap to the closest mesh point", Q_NULLPTR));
        useCenterBounds->setText(QApplication::translate("HandlePropertyWidget", "Center on Bounds", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class HandlePropertyWidget: public Ui_HandlePropertyWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQHANDLEPROPERTYWIDGET_H
