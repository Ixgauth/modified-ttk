/********************************************************************************
** Form generated from reading UI file 'pqDoubleRangeSliderPropertyWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQDOUBLERANGESLIDERPROPERTYWIDGET_H
#define UI_PQDOUBLERANGESLIDERPROPERTYWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>
#include "pqDoubleRangeWidget.h"
#include "pqHighlightableToolButton.h"

QT_BEGIN_NAMESPACE

class Ui_DoubleRangeSliderPropertyWidget
{
public:
    QGridLayout *gridLayout;
    QLabel *label_3;
    pqDoubleRangeWidget *ThresholdBetween_0;
    QLabel *label_4;
    pqDoubleRangeWidget *ThresholdBetween_1;
    pqHighlightableToolButton *Reset;

    void setupUi(QWidget *DoubleRangeSliderPropertyWidget)
    {
        if (DoubleRangeSliderPropertyWidget->objectName().isEmpty())
            DoubleRangeSliderPropertyWidget->setObjectName(QStringLiteral("DoubleRangeSliderPropertyWidget"));
        DoubleRangeSliderPropertyWidget->resize(130, 38);
        gridLayout = new QGridLayout(DoubleRangeSliderPropertyWidget);
        gridLayout->setSpacing(4);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_3 = new QLabel(DoubleRangeSliderPropertyWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setWordWrap(true);

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        ThresholdBetween_0 = new pqDoubleRangeWidget(DoubleRangeSliderPropertyWidget);
        ThresholdBetween_0->setObjectName(QStringLiteral("ThresholdBetween_0"));

        gridLayout->addWidget(ThresholdBetween_0, 0, 1, 1, 1);

        label_4 = new QLabel(DoubleRangeSliderPropertyWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setWordWrap(true);

        gridLayout->addWidget(label_4, 1, 0, 1, 1);

        ThresholdBetween_1 = new pqDoubleRangeWidget(DoubleRangeSliderPropertyWidget);
        ThresholdBetween_1->setObjectName(QStringLiteral("ThresholdBetween_1"));

        gridLayout->addWidget(ThresholdBetween_1, 1, 1, 1, 1);

        Reset = new pqHighlightableToolButton(DoubleRangeSliderPropertyWidget);
        Reset->setObjectName(QStringLiteral("Reset"));

        gridLayout->addWidget(Reset, 0, 2, 2, 1);


        retranslateUi(DoubleRangeSliderPropertyWidget);

        QMetaObject::connectSlotsByName(DoubleRangeSliderPropertyWidget);
    } // setupUi

    void retranslateUi(QWidget *DoubleRangeSliderPropertyWidget)
    {
        DoubleRangeSliderPropertyWidget->setWindowTitle(QApplication::translate("DoubleRangeSliderPropertyWidget", "Form", Q_NULLPTR));
        label_3->setText(QApplication::translate("DoubleRangeSliderPropertyWidget", "Minimum", Q_NULLPTR));
        label_4->setText(QApplication::translate("DoubleRangeSliderPropertyWidget", "Maximum", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Reset->setToolTip(QApplication::translate("DoubleRangeSliderPropertyWidget", "Reset using current data values", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class DoubleRangeSliderPropertyWidget: public Ui_DoubleRangeSliderPropertyWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQDOUBLERANGESLIDERPROPERTYWIDGET_H
