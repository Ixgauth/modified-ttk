/********************************************************************************
** Form generated from reading UI file 'pqColorOpacityEditorWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQCOLOROPACITYEDITORWIDGET_H
#define UI_PQCOLOROPACITYEDITORWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "pqDoubleLineEdit.h"
#include "pqExpandableTableView.h"
#include "pqTransferFunctionWidget.h"

QT_BEGIN_NAMESPACE

class Ui_ColorOpacityEditorWidget
{
public:
    QVBoxLayout *mainLayout;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    pqTransferFunctionWidget *OpacityEditor;
    pqTransferFunctionWidget *ColorEditor;
    QVBoxLayout *verticalLayout_2;
    QToolButton *ResetRangeToData;
    QToolButton *ResetRangeToCustom;
    QToolButton *ResetRangeToDataOverTime;
    QToolButton *ResetRangeToVisibleData;
    QToolButton *InvertTransferFunctions;
    QSpacerItem *verticalSpacer;
    QToolButton *ChoosePreset;
    QToolButton *SaveAsPreset;
    QToolButton *AdvancedButton;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    pqDoubleLineEdit *CurrentDataValue;
    QCheckBox *UseLogScale;
    QCheckBox *EnableOpacityMapping;
    QCheckBox *UseLogScaleOpacity;
    QLabel *ColorLabel;
    pqExpandableTableView *ColorTable;
    QLabel *OpacityLabel;
    pqExpandableTableView *OpacityTable;

    void setupUi(QWidget *ColorOpacityEditorWidget)
    {
        if (ColorOpacityEditorWidget->objectName().isEmpty())
            ColorOpacityEditorWidget->setObjectName(QStringLiteral("ColorOpacityEditorWidget"));
        ColorOpacityEditorWidget->resize(334, 774);
        mainLayout = new QVBoxLayout(ColorOpacityEditorWidget);
        mainLayout->setSpacing(6);
        mainLayout->setObjectName(QStringLiteral("mainLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetMinimumSize);
        OpacityEditor = new pqTransferFunctionWidget(ColorOpacityEditorWidget);
        OpacityEditor->setObjectName(QStringLiteral("OpacityEditor"));
        OpacityEditor->setMinimumSize(QSize(0, 80));

        verticalLayout->addWidget(OpacityEditor);

        ColorEditor = new pqTransferFunctionWidget(ColorOpacityEditorWidget);
        ColorEditor->setObjectName(QStringLiteral("ColorEditor"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ColorEditor->sizePolicy().hasHeightForWidth());
        ColorEditor->setSizePolicy(sizePolicy);
        ColorEditor->setMinimumSize(QSize(40, 40));
        ColorEditor->setMaximumSize(QSize(16777215, 40));

        verticalLayout->addWidget(ColorEditor);

        verticalLayout->setStretch(0, 1);

        horizontalLayout_2->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(1);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        ResetRangeToData = new QToolButton(ColorOpacityEditorWidget);
        ResetRangeToData->setObjectName(QStringLiteral("ResetRangeToData"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/pqWidgets/Icons/pqResetRange24.png"), QSize(), QIcon::Normal, QIcon::Off);
        ResetRangeToData->setIcon(icon);

        verticalLayout_2->addWidget(ResetRangeToData);

        ResetRangeToCustom = new QToolButton(ColorOpacityEditorWidget);
        ResetRangeToCustom->setObjectName(QStringLiteral("ResetRangeToCustom"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/pqWidgets/Icons/pqResetRangeCustom24.png"), QSize(), QIcon::Normal, QIcon::Off);
        ResetRangeToCustom->setIcon(icon1);

        verticalLayout_2->addWidget(ResetRangeToCustom);

        ResetRangeToDataOverTime = new QToolButton(ColorOpacityEditorWidget);
        ResetRangeToDataOverTime->setObjectName(QStringLiteral("ResetRangeToDataOverTime"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/pqWidgets/Icons/pqResetRangeTemporal24.png"), QSize(), QIcon::Normal, QIcon::Off);
        ResetRangeToDataOverTime->setIcon(icon2);

        verticalLayout_2->addWidget(ResetRangeToDataOverTime);

        ResetRangeToVisibleData = new QToolButton(ColorOpacityEditorWidget);
        ResetRangeToVisibleData->setObjectName(QStringLiteral("ResetRangeToVisibleData"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/pqWidgets/Icons/pqResetToVisibleRange32.png"), QSize(), QIcon::Normal, QIcon::Off);
        ResetRangeToVisibleData->setIcon(icon3);

        verticalLayout_2->addWidget(ResetRangeToVisibleData);

        InvertTransferFunctions = new QToolButton(ColorOpacityEditorWidget);
        InvertTransferFunctions->setObjectName(QStringLiteral("InvertTransferFunctions"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/pqWidgets/Icons/pqInvert24.png"), QSize(), QIcon::Normal, QIcon::Off);
        InvertTransferFunctions->setIcon(icon4);

        verticalLayout_2->addWidget(InvertTransferFunctions);

        verticalSpacer = new QSpacerItem(0, 1, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        ChoosePreset = new QToolButton(ColorOpacityEditorWidget);
        ChoosePreset->setObjectName(QStringLiteral("ChoosePreset"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/pqWidgets/Icons/pqFavorites16.png"), QSize(), QIcon::Normal, QIcon::Off);
        ChoosePreset->setIcon(icon5);

        verticalLayout_2->addWidget(ChoosePreset);

        SaveAsPreset = new QToolButton(ColorOpacityEditorWidget);
        SaveAsPreset->setObjectName(QStringLiteral("SaveAsPreset"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/pqWidgets/Icons/pqSave16.png"), QSize(), QIcon::Normal, QIcon::Off);
        SaveAsPreset->setIcon(icon6);

        verticalLayout_2->addWidget(SaveAsPreset);

        AdvancedButton = new QToolButton(ColorOpacityEditorWidget);
        AdvancedButton->setObjectName(QStringLiteral("AdvancedButton"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/pqWidgets/Icons/pqAdvanced26.png"), QSize(), QIcon::Normal, QIcon::Off);
        AdvancedButton->setIcon(icon7);
        AdvancedButton->setCheckable(true);

        verticalLayout_2->addWidget(AdvancedButton);


        horizontalLayout_2->addLayout(verticalLayout_2);

        horizontalLayout_2->setStretch(0, 1);

        mainLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(ColorOpacityEditorWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        CurrentDataValue = new pqDoubleLineEdit(ColorOpacityEditorWidget);
        CurrentDataValue->setObjectName(QStringLiteral("CurrentDataValue"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(CurrentDataValue->sizePolicy().hasHeightForWidth());
        CurrentDataValue->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(CurrentDataValue);

        horizontalLayout->setStretch(1, 1);

        mainLayout->addLayout(horizontalLayout);

        UseLogScale = new QCheckBox(ColorOpacityEditorWidget);
        UseLogScale->setObjectName(QStringLiteral("UseLogScale"));

        mainLayout->addWidget(UseLogScale);

        EnableOpacityMapping = new QCheckBox(ColorOpacityEditorWidget);
        EnableOpacityMapping->setObjectName(QStringLiteral("EnableOpacityMapping"));

        mainLayout->addWidget(EnableOpacityMapping);

        UseLogScaleOpacity = new QCheckBox(ColorOpacityEditorWidget);
        UseLogScaleOpacity->setObjectName(QStringLiteral("UseLogScaleOpacity"));
        UseLogScaleOpacity->setEnabled(false);

        mainLayout->addWidget(UseLogScaleOpacity);

        ColorLabel = new QLabel(ColorOpacityEditorWidget);
        ColorLabel->setObjectName(QStringLiteral("ColorLabel"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(ColorLabel->sizePolicy().hasHeightForWidth());
        ColorLabel->setSizePolicy(sizePolicy2);

        mainLayout->addWidget(ColorLabel);

        ColorTable = new pqExpandableTableView(ColorOpacityEditorWidget);
        ColorTable->setObjectName(QStringLiteral("ColorTable"));
        ColorTable->setEditTriggers(QAbstractItemView::DoubleClicked);
        ColorTable->setAlternatingRowColors(true);
        ColorTable->setSelectionBehavior(QAbstractItemView::SelectRows);
        ColorTable->setProperty("maximumRowCountBeforeScrolling", QVariant(10));

        mainLayout->addWidget(ColorTable);

        OpacityLabel = new QLabel(ColorOpacityEditorWidget);
        OpacityLabel->setObjectName(QStringLiteral("OpacityLabel"));

        mainLayout->addWidget(OpacityLabel);

        OpacityTable = new pqExpandableTableView(ColorOpacityEditorWidget);
        OpacityTable->setObjectName(QStringLiteral("OpacityTable"));
        OpacityTable->setEditTriggers(QAbstractItemView::DoubleClicked);
        OpacityTable->setAlternatingRowColors(true);
        OpacityTable->setSelectionBehavior(QAbstractItemView::SelectRows);
        OpacityTable->setProperty("maximumRowCountBeforeScrolling", QVariant(10));

        mainLayout->addWidget(OpacityTable);


        retranslateUi(ColorOpacityEditorWidget);
        QObject::connect(EnableOpacityMapping, SIGNAL(toggled(bool)), UseLogScaleOpacity, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(ColorOpacityEditorWidget);
    } // setupUi

    void retranslateUi(QWidget *ColorOpacityEditorWidget)
    {
        ColorOpacityEditorWidget->setWindowTitle(QApplication::translate("ColorOpacityEditorWidget", "Form", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ResetRangeToData->setToolTip(QApplication::translate("ColorOpacityEditorWidget", "Rescale to data range", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        ResetRangeToData->setText(QString());
#ifndef QT_NO_TOOLTIP
        ResetRangeToCustom->setToolTip(QApplication::translate("ColorOpacityEditorWidget", "Rescale to custom range", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        ResetRangeToCustom->setText(QString());
#ifndef QT_NO_TOOLTIP
        ResetRangeToDataOverTime->setToolTip(QApplication::translate("ColorOpacityEditorWidget", "Rescale to data range over all timesteps", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        ResetRangeToDataOverTime->setText(QString());
#ifndef QT_NO_TOOLTIP
        ResetRangeToVisibleData->setToolTip(QApplication::translate("ColorOpacityEditorWidget", "Rescale to visible range", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        ResetRangeToVisibleData->setText(QString());
#ifndef QT_NO_TOOLTIP
        InvertTransferFunctions->setToolTip(QApplication::translate("ColorOpacityEditorWidget", "Invert the transfer functions", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        InvertTransferFunctions->setText(QString());
#ifndef QT_NO_TOOLTIP
        ChoosePreset->setToolTip(QApplication::translate("ColorOpacityEditorWidget", "Choose preset", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        ChoosePreset->setText(QString());
#ifndef QT_NO_TOOLTIP
        SaveAsPreset->setToolTip(QApplication::translate("ColorOpacityEditorWidget", "Save to preset", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        SaveAsPreset->setText(QString());
#ifndef QT_NO_TOOLTIP
        AdvancedButton->setToolTip(QApplication::translate("ColorOpacityEditorWidget", "Manually edit transfer functions", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        AdvancedButton->setText(QString());
        label->setText(QApplication::translate("ColorOpacityEditorWidget", "Data:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        UseLogScale->setToolTip(QApplication::translate("ColorOpacityEditorWidget", "<html><head/><body><p>When checked, the mapping from data to colors is done using a log-scale. Note that this does not affect the mapping of data to opacity.</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        UseLogScale->setText(QApplication::translate("ColorOpacityEditorWidget", "Use log scale when mapping data to colors", Q_NULLPTR));
        EnableOpacityMapping->setText(QApplication::translate("ColorOpacityEditorWidget", "Enable opacity mapping for surfaces", Q_NULLPTR));
        UseLogScaleOpacity->setText(QApplication::translate("ColorOpacityEditorWidget", "Use log scale when mapping data to opacity", Q_NULLPTR));
        ColorLabel->setText(QApplication::translate("ColorOpacityEditorWidget", "Color transfer function values", Q_NULLPTR));
        OpacityLabel->setText(QApplication::translate("ColorOpacityEditorWidget", "Opacity transfer function values", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ColorOpacityEditorWidget: public Ui_ColorOpacityEditorWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQCOLOROPACITYEDITORWIDGET_H
