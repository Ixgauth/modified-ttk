/********************************************************************************
** Form generated from reading UI file 'pqLinePropertyWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQLINEPROPERTYWIDGET_H
#define UI_PQLINEPROPERTYWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include "pqDoubleLineEdit.h"

QT_BEGIN_NAMESPACE

class Ui_LinePropertyWidget
{
public:
    QGridLayout *gridLayout;
    QLabel *labelPoint1;
    pqDoubleLineEdit *point1X;
    pqDoubleLineEdit *point1Y;
    pqDoubleLineEdit *point1Z;
    QLabel *labelPoint2;
    pqDoubleLineEdit *point2X;
    pqDoubleLineEdit *point2Y;
    pqDoubleLineEdit *point2Z;
    QLabel *pickLabel;
    QHBoxLayout *horizontalLayout;
    QPushButton *xAxis;
    QPushButton *yAxis;
    QPushButton *zAxis;
    QPushButton *centerOnBounds;
    QCheckBox *show3DWidget;
    QLabel *labelLength;

    void setupUi(QWidget *LinePropertyWidget)
    {
        if (LinePropertyWidget->objectName().isEmpty())
            LinePropertyWidget->setObjectName(QStringLiteral("LinePropertyWidget"));
        LinePropertyWidget->resize(379, 189);
        gridLayout = new QGridLayout(LinePropertyWidget);
        gridLayout->setSpacing(2);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        labelPoint1 = new QLabel(LinePropertyWidget);
        labelPoint1->setObjectName(QStringLiteral("labelPoint1"));
        labelPoint1->setWordWrap(true);

        gridLayout->addWidget(labelPoint1, 3, 0, 1, 1);

        point1X = new pqDoubleLineEdit(LinePropertyWidget);
        point1X->setObjectName(QStringLiteral("point1X"));

        gridLayout->addWidget(point1X, 3, 1, 1, 1);

        point1Y = new pqDoubleLineEdit(LinePropertyWidget);
        point1Y->setObjectName(QStringLiteral("point1Y"));

        gridLayout->addWidget(point1Y, 3, 2, 1, 1);

        point1Z = new pqDoubleLineEdit(LinePropertyWidget);
        point1Z->setObjectName(QStringLiteral("point1Z"));

        gridLayout->addWidget(point1Z, 3, 3, 1, 1);

        labelPoint2 = new QLabel(LinePropertyWidget);
        labelPoint2->setObjectName(QStringLiteral("labelPoint2"));
        labelPoint2->setWordWrap(true);

        gridLayout->addWidget(labelPoint2, 4, 0, 1, 1);

        point2X = new pqDoubleLineEdit(LinePropertyWidget);
        point2X->setObjectName(QStringLiteral("point2X"));

        gridLayout->addWidget(point2X, 4, 1, 1, 1);

        point2Y = new pqDoubleLineEdit(LinePropertyWidget);
        point2Y->setObjectName(QStringLiteral("point2Y"));

        gridLayout->addWidget(point2Y, 4, 2, 1, 1);

        point2Z = new pqDoubleLineEdit(LinePropertyWidget);
        point2Z->setObjectName(QStringLiteral("point2Z"));

        gridLayout->addWidget(point2Z, 4, 3, 1, 1);

        pickLabel = new QLabel(LinePropertyWidget);
        pickLabel->setObjectName(QStringLiteral("pickLabel"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        pickLabel->setFont(font);
        pickLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        pickLabel->setWordWrap(true);

        gridLayout->addWidget(pickLabel, 5, 0, 1, 4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(2);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        xAxis = new QPushButton(LinePropertyWidget);
        xAxis->setObjectName(QStringLiteral("xAxis"));

        horizontalLayout->addWidget(xAxis);

        yAxis = new QPushButton(LinePropertyWidget);
        yAxis->setObjectName(QStringLiteral("yAxis"));

        horizontalLayout->addWidget(yAxis);

        zAxis = new QPushButton(LinePropertyWidget);
        zAxis->setObjectName(QStringLiteral("zAxis"));

        horizontalLayout->addWidget(zAxis);


        gridLayout->addLayout(horizontalLayout, 6, 0, 1, 4);

        centerOnBounds = new QPushButton(LinePropertyWidget);
        centerOnBounds->setObjectName(QStringLiteral("centerOnBounds"));

        gridLayout->addWidget(centerOnBounds, 7, 0, 1, 4);

        show3DWidget = new QCheckBox(LinePropertyWidget);
        show3DWidget->setObjectName(QStringLiteral("show3DWidget"));
        show3DWidget->setChecked(true);

        gridLayout->addWidget(show3DWidget, 2, 0, 1, 3);

        labelLength = new QLabel(LinePropertyWidget);
        labelLength->setObjectName(QStringLiteral("labelLength"));

        gridLayout->addWidget(labelLength, 1, 0, 1, 4);


        retranslateUi(LinePropertyWidget);

        QMetaObject::connectSlotsByName(LinePropertyWidget);
    } // setupUi

    void retranslateUi(QWidget *LinePropertyWidget)
    {
        LinePropertyWidget->setWindowTitle(QApplication::translate("LinePropertyWidget", "Form", Q_NULLPTR));
        labelPoint1->setText(QApplication::translate("LinePropertyWidget", "Point 1", Q_NULLPTR));
        labelPoint2->setText(QApplication::translate("LinePropertyWidget", "Point 2", Q_NULLPTR));
        pickLabel->setText(QApplication::translate("LinePropertyWidget", "Note: Use 'P' to place alternating points on mesh or 'Ctrl+P' to snap to the closest mesh point. Use '1'/'Ctrl+1' for point 1 and '2'/'Ctrl+2' for point 2.", Q_NULLPTR));
        xAxis->setText(QApplication::translate("LinePropertyWidget", "X Axis", Q_NULLPTR));
        yAxis->setText(QApplication::translate("LinePropertyWidget", "Y Axis", Q_NULLPTR));
        zAxis->setText(QApplication::translate("LinePropertyWidget", "Z Axis", Q_NULLPTR));
        centerOnBounds->setText(QApplication::translate("LinePropertyWidget", "Center on Bounds", Q_NULLPTR));
        show3DWidget->setText(QApplication::translate("LinePropertyWidget", "Show Line", Q_NULLPTR));
        labelLength->setText(QApplication::translate("LinePropertyWidget", "<html><head/><body><p><span style=\" font-weight:600;\">Length: </span><span style=\" font-style:italic;\">na</span></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class LinePropertyWidget: public Ui_LinePropertyWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQLINEPROPERTYWIDGET_H
