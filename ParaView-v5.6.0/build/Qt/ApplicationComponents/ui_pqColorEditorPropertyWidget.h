/********************************************************************************
** Form generated from reading UI file 'pqColorEditorPropertyWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQCOLOREDITORPROPERTYWIDGET_H
#define UI_PQCOLOREDITORPROPERTYWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include "pqDisplayColorWidget.h"

QT_BEGIN_NAMESPACE

class Ui_ColorEditorPropertyWidget
{
public:
    QGridLayout *gridLayout;
    QPushButton *RescaleCustom;
    pqDisplayColorWidget *DisplayColorWidget;
    QSpacerItem *verticalSpacer;
    QPushButton *EditColorMap;
    QPushButton *UseSeparateColorMap;
    QPushButton *Rescale;
    QPushButton *ShowScalarBar;
    QPushButton *EditScalarBar;
    QPushButton *RescaleTemporal;
    QPushButton *ChoosePreset;

    void setupUi(QWidget *ColorEditorPropertyWidget)
    {
        if (ColorEditorPropertyWidget->objectName().isEmpty())
            ColorEditorPropertyWidget->setObjectName(QStringLiteral("ColorEditorPropertyWidget"));
        ColorEditorPropertyWidget->resize(367, 82);
        gridLayout = new QGridLayout(ColorEditorPropertyWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        RescaleCustom = new QPushButton(ColorEditorPropertyWidget);
        RescaleCustom->setObjectName(QStringLiteral("RescaleCustom"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/pqWidgets/Icons/pqResetRangeCustom24.png"), QSize(), QIcon::Normal, QIcon::Off);
        RescaleCustom->setIcon(icon);

        gridLayout->addWidget(RescaleCustom, 1, 3, 1, 1);

        DisplayColorWidget = new pqDisplayColorWidget(ColorEditorPropertyWidget);
        DisplayColorWidget->setObjectName(QStringLiteral("DisplayColorWidget"));

        gridLayout->addWidget(DisplayColorWidget, 0, 0, 1, 7);

        verticalSpacer = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        gridLayout->addItem(verticalSpacer, 2, 5, 1, 1);

        EditColorMap = new QPushButton(ColorEditorPropertyWidget);
        EditColorMap->setObjectName(QStringLiteral("EditColorMap"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/pqWidgets/Icons/pqEditColor24.png"), QSize(), QIcon::Normal, QIcon::Off);
        EditColorMap->setIcon(icon1);
        EditColorMap->setFlat(false);

        gridLayout->addWidget(EditColorMap, 1, 0, 1, 1);

        UseSeparateColorMap = new QPushButton(ColorEditorPropertyWidget);
        UseSeparateColorMap->setObjectName(QStringLiteral("UseSeparateColorMap"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/pqWidgets/Icons/pqSeparateColorMap24.png"), QSize(), QIcon::Normal, QIcon::Off);
        UseSeparateColorMap->setIcon(icon2);
        UseSeparateColorMap->setCheckable(true);
        UseSeparateColorMap->setFlat(false);

        gridLayout->addWidget(UseSeparateColorMap, 1, 1, 1, 1);

        Rescale = new QPushButton(ColorEditorPropertyWidget);
        Rescale->setObjectName(QStringLiteral("Rescale"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/pqWidgets/Icons/pqResetRange24.png"), QSize(), QIcon::Normal, QIcon::Off);
        Rescale->setIcon(icon3);
        Rescale->setFlat(false);

        gridLayout->addWidget(Rescale, 1, 2, 1, 1);

        ShowScalarBar = new QPushButton(ColorEditorPropertyWidget);
        ShowScalarBar->setObjectName(QStringLiteral("ShowScalarBar"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/pqWidgets/Icons/pqScalarBar24.png"), QSize(), QIcon::Normal, QIcon::Off);
        ShowScalarBar->setIcon(icon4);
        ShowScalarBar->setCheckable(true);
        ShowScalarBar->setFlat(false);

        gridLayout->addWidget(ShowScalarBar, 1, 6, 1, 1);

        EditScalarBar = new QPushButton(ColorEditorPropertyWidget);
        EditScalarBar->setObjectName(QStringLiteral("EditScalarBar"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/pqWidgets/Icons/pqEditScalarBar16.png"), QSize(), QIcon::Normal, QIcon::Off);
        EditScalarBar->setIcon(icon5);

        gridLayout->addWidget(EditScalarBar, 1, 7, 1, 1);

        RescaleTemporal = new QPushButton(ColorEditorPropertyWidget);
        RescaleTemporal->setObjectName(QStringLiteral("RescaleTemporal"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/pqWidgets/Icons/pqResetRangeTemporal24.png"), QSize(), QIcon::Normal, QIcon::Off);
        RescaleTemporal->setIcon(icon6);

        gridLayout->addWidget(RescaleTemporal, 1, 4, 1, 1);

        ChoosePreset = new QPushButton(ColorEditorPropertyWidget);
        ChoosePreset->setObjectName(QStringLiteral("ChoosePreset"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/pqWidgets/Icons/pqFavorites32.png"), QSize(), QIcon::Normal, QIcon::Off);
        ChoosePreset->setIcon(icon7);
        ChoosePreset->setFlat(false);

        gridLayout->addWidget(ChoosePreset, 1, 5, 1, 1);

        gridLayout->setColumnStretch(0, 1);

        retranslateUi(ColorEditorPropertyWidget);

        QMetaObject::connectSlotsByName(ColorEditorPropertyWidget);
    } // setupUi

    void retranslateUi(QWidget *ColorEditorPropertyWidget)
    {
        ColorEditorPropertyWidget->setWindowTitle(QApplication::translate("ColorEditorPropertyWidget", "Form", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        RescaleCustom->setToolTip(QApplication::translate("ColorEditorPropertyWidget", "Rescale to custom range", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        RescaleCustom->setText(QString());
#ifndef QT_NO_TOOLTIP
        EditColorMap->setToolTip(QApplication::translate("ColorEditorPropertyWidget", "Edit color map", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        EditColorMap->setStatusTip(QApplication::translate("ColorEditorPropertyWidget", "Edit Color Map", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        EditColorMap->setText(QApplication::translate("ColorEditorPropertyWidget", "Edit", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        UseSeparateColorMap->setToolTip(QApplication::translate("ColorEditorPropertyWidget", "Use Separate color map", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        UseSeparateColorMap->setStatusTip(QApplication::translate("ColorEditorPropertyWidget", "Use Separate Color Map", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_TOOLTIP
        Rescale->setToolTip(QApplication::translate("ColorEditorPropertyWidget", "Rescale to data range", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        Rescale->setStatusTip(QApplication::translate("ColorEditorPropertyWidget", "Rescale to Data Range", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        Rescale->setText(QString());
#ifndef QT_NO_TOOLTIP
        ShowScalarBar->setToolTip(QApplication::translate("ColorEditorPropertyWidget", "Show/hide color legend", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        ShowScalarBar->setStatusTip(QApplication::translate("ColorEditorPropertyWidget", "Toggle Color Legend Visibility", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        ShowScalarBar->setText(QString());
#ifndef QT_NO_TOOLTIP
        EditScalarBar->setToolTip(QApplication::translate("ColorEditorPropertyWidget", "Edit color legend properties", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        EditScalarBar->setText(QString());
#ifndef QT_NO_TOOLTIP
        RescaleTemporal->setToolTip(QApplication::translate("ColorEditorPropertyWidget", "Rescale to data range over all timesteps", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        RescaleTemporal->setText(QString());
#ifndef QT_NO_TOOLTIP
        ChoosePreset->setToolTip(QApplication::translate("ColorEditorPropertyWidget", "Choose preset", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        ChoosePreset->setStatusTip(QApplication::translate("ColorEditorPropertyWidget", "Toggle Color Legend Visibility", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        ChoosePreset->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ColorEditorPropertyWidget: public Ui_ColorEditorPropertyWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQCOLOREDITORPROPERTYWIDGET_H
