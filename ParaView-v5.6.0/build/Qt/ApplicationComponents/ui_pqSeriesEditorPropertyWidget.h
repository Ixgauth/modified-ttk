/********************************************************************************
** Form generated from reading UI file 'pqSeriesEditorPropertyWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQSERIESEDITORPROPERTYWIDGET_H
#define UI_PQSERIESEDITORPROPERTYWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>
#include "pqTreeView.h"

QT_BEGIN_NAMESPACE

class Ui_SeriesEditorPropertyWidget
{
public:
    QGridLayout *wdgLayout;
    QSpinBox *Thickness;
    QLabel *ThicknessLabel;
    QComboBox *StyleList;
    QLabel *StyleListLabel;
    QLabel *MarkerStyleListLabel;
    QComboBox *MarkerStyleList;
    QLabel *AxisListLabel;
    QComboBox *AxisList;
    pqTreeView *SeriesTable;

    void setupUi(QWidget *SeriesEditorPropertyWidget)
    {
        if (SeriesEditorPropertyWidget->objectName().isEmpty())
            SeriesEditorPropertyWidget->setObjectName(QStringLiteral("SeriesEditorPropertyWidget"));
        SeriesEditorPropertyWidget->resize(306, 342);
        wdgLayout = new QGridLayout(SeriesEditorPropertyWidget);
        wdgLayout->setObjectName(QStringLiteral("wdgLayout"));
        Thickness = new QSpinBox(SeriesEditorPropertyWidget);
        Thickness->setObjectName(QStringLiteral("Thickness"));
        Thickness->setEnabled(false);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Thickness->sizePolicy().hasHeightForWidth());
        Thickness->setSizePolicy(sizePolicy);
        Thickness->setMinimum(1);
        Thickness->setMaximum(10);
        Thickness->setValue(1);

        wdgLayout->addWidget(Thickness, 1, 1, 1, 1);

        ThicknessLabel = new QLabel(SeriesEditorPropertyWidget);
        ThicknessLabel->setObjectName(QStringLiteral("ThicknessLabel"));

        wdgLayout->addWidget(ThicknessLabel, 1, 0, 1, 1);

        StyleList = new QComboBox(SeriesEditorPropertyWidget);
        StyleList->setObjectName(QStringLiteral("StyleList"));
        StyleList->setEnabled(false);
        sizePolicy.setHeightForWidth(StyleList->sizePolicy().hasHeightForWidth());
        StyleList->setSizePolicy(sizePolicy);

        wdgLayout->addWidget(StyleList, 2, 1, 1, 1);

        StyleListLabel = new QLabel(SeriesEditorPropertyWidget);
        StyleListLabel->setObjectName(QStringLiteral("StyleListLabel"));

        wdgLayout->addWidget(StyleListLabel, 2, 0, 1, 1);

        MarkerStyleListLabel = new QLabel(SeriesEditorPropertyWidget);
        MarkerStyleListLabel->setObjectName(QStringLiteral("MarkerStyleListLabel"));

        wdgLayout->addWidget(MarkerStyleListLabel, 3, 0, 1, 1);

        MarkerStyleList = new QComboBox(SeriesEditorPropertyWidget);
        MarkerStyleList->setObjectName(QStringLiteral("MarkerStyleList"));
        MarkerStyleList->setEnabled(false);
        sizePolicy.setHeightForWidth(MarkerStyleList->sizePolicy().hasHeightForWidth());
        MarkerStyleList->setSizePolicy(sizePolicy);

        wdgLayout->addWidget(MarkerStyleList, 3, 1, 1, 1);

        AxisListLabel = new QLabel(SeriesEditorPropertyWidget);
        AxisListLabel->setObjectName(QStringLiteral("AxisListLabel"));

        wdgLayout->addWidget(AxisListLabel, 4, 0, 1, 1);

        AxisList = new QComboBox(SeriesEditorPropertyWidget);
        AxisList->setObjectName(QStringLiteral("AxisList"));
        AxisList->setEnabled(false);
        sizePolicy.setHeightForWidth(AxisList->sizePolicy().hasHeightForWidth());
        AxisList->setSizePolicy(sizePolicy);

        wdgLayout->addWidget(AxisList, 4, 1, 1, 1);

        SeriesTable = new pqTreeView(SeriesEditorPropertyWidget);
        SeriesTable->setObjectName(QStringLiteral("SeriesTable"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(SeriesTable->sizePolicy().hasHeightForWidth());
        SeriesTable->setSizePolicy(sizePolicy1);
        SeriesTable->setAlternatingRowColors(true);
        SeriesTable->setSelectionMode(QAbstractItemView::ExtendedSelection);
        SeriesTable->setSelectionBehavior(QAbstractItemView::SelectRows);
        SeriesTable->setRootIsDecorated(false);
        SeriesTable->setUniformRowHeights(true);
        SeriesTable->setItemsExpandable(false);
        SeriesTable->setAnimated(true);
        SeriesTable->setProperty("maximumRowCountBeforeScrolling", QVariant(30));

        wdgLayout->addWidget(SeriesTable, 0, 0, 1, 2);


        retranslateUi(SeriesEditorPropertyWidget);

        QMetaObject::connectSlotsByName(SeriesEditorPropertyWidget);
    } // setupUi

    void retranslateUi(QWidget *SeriesEditorPropertyWidget)
    {
        SeriesEditorPropertyWidget->setWindowTitle(QApplication::translate("SeriesEditorPropertyWidget", "Form", Q_NULLPTR));
#ifndef QT_NO_WHATSTHIS
        Thickness->setWhatsThis(QApplication::translate("SeriesEditorPropertyWidget", "Enter the thickness for the line.", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        ThicknessLabel->setText(QApplication::translate("SeriesEditorPropertyWidget", "Line Thickness", Q_NULLPTR));
        StyleList->clear();
        StyleList->insertItems(0, QStringList()
         << QApplication::translate("SeriesEditorPropertyWidget", "None", Q_NULLPTR)
         << QApplication::translate("SeriesEditorPropertyWidget", "Solid", Q_NULLPTR)
         << QApplication::translate("SeriesEditorPropertyWidget", "Dash", Q_NULLPTR)
         << QApplication::translate("SeriesEditorPropertyWidget", "Dot", Q_NULLPTR)
         << QApplication::translate("SeriesEditorPropertyWidget", "Dash Dot", Q_NULLPTR)
         << QApplication::translate("SeriesEditorPropertyWidget", "Dash Dot Dot", Q_NULLPTR)
        );
#ifndef QT_NO_WHATSTHIS
        StyleList->setWhatsThis(QApplication::translate("SeriesEditorPropertyWidget", "Select the line style for the series.", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        StyleListLabel->setText(QApplication::translate("SeriesEditorPropertyWidget", "Line Style", Q_NULLPTR));
        MarkerStyleListLabel->setText(QApplication::translate("SeriesEditorPropertyWidget", "Marker Style", Q_NULLPTR));
        MarkerStyleList->clear();
        MarkerStyleList->insertItems(0, QStringList()
         << QApplication::translate("SeriesEditorPropertyWidget", "None", Q_NULLPTR)
         << QApplication::translate("SeriesEditorPropertyWidget", "Cross", Q_NULLPTR)
         << QApplication::translate("SeriesEditorPropertyWidget", "Plus", Q_NULLPTR)
         << QApplication::translate("SeriesEditorPropertyWidget", "Square", Q_NULLPTR)
         << QApplication::translate("SeriesEditorPropertyWidget", "Circle", Q_NULLPTR)
         << QApplication::translate("SeriesEditorPropertyWidget", "Diamond", Q_NULLPTR)
        );
        AxisListLabel->setText(QApplication::translate("SeriesEditorPropertyWidget", "Chart Axes", Q_NULLPTR));
        AxisList->clear();
        AxisList->insertItems(0, QStringList()
         << QApplication::translate("SeriesEditorPropertyWidget", "Bottom-Left", Q_NULLPTR)
         << QApplication::translate("SeriesEditorPropertyWidget", "Bottom-Right", Q_NULLPTR)
         << QApplication::translate("SeriesEditorPropertyWidget", "Top-Right", Q_NULLPTR)
         << QApplication::translate("SeriesEditorPropertyWidget", "Top-Left", Q_NULLPTR)
        );
#ifndef QT_NO_WHATSTHIS
        AxisList->setWhatsThis(QApplication::translate("SeriesEditorPropertyWidget", "Select the chart axes for the line series.", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_WHATSTHIS
        SeriesTable->setWhatsThis(QApplication::translate("SeriesEditorPropertyWidget", "This displays the list of line series. You can use the list to edit the series options.", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
    } // retranslateUi

};

namespace Ui {
    class SeriesEditorPropertyWidget: public Ui_SeriesEditorPropertyWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQSERIESEDITORPROPERTYWIDGET_H
