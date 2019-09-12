/********************************************************************************
** Form generated from reading UI file 'pqSpreadSheetViewDecorator.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQSPREADSHEETVIEWDECORATOR_H
#define UI_PQSPREADSHEETVIEWDECORATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>
#include "pqOutputPortComboBox.h"

QT_BEGIN_NAMESPACE

class Ui_pqSpreadSheetViewDecorator
{
public:
    QAction *actionExport;
    QHBoxLayout *hboxLayout;
    QLabel *label;
    pqOutputPortComboBox *Source;
    QLabel *label_2;
    QComboBox *Attribute;
    QLabel *label_Precision;
    QSpinBox *spinBoxPrecision;
    QToolButton *ToggleFixed;
    QToolButton *SelectionOnly;
    QToolButton *ToggleColumnVisibility;
    QToolButton *ToggleCellConnectivity;
    QToolButton *ExportSpreadsheet;
    QSpacerItem *spacerItem;

    void setupUi(QWidget *pqSpreadSheetViewDecorator)
    {
        if (pqSpreadSheetViewDecorator->objectName().isEmpty())
            pqSpreadSheetViewDecorator->setObjectName(QStringLiteral("pqSpreadSheetViewDecorator"));
        pqSpreadSheetViewDecorator->resize(627, 32);
        actionExport = new QAction(pqSpreadSheetViewDecorator);
        actionExport->setObjectName(QStringLiteral("actionExport"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/pqWidgets/Icons/pqSaveTable32.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExport->setIcon(icon);
        hboxLayout = new QHBoxLayout(pqSpreadSheetViewDecorator);
        hboxLayout->setSpacing(1);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(pqSpreadSheetViewDecorator);
        label->setObjectName(QStringLiteral("label"));

        hboxLayout->addWidget(label);

        Source = new pqOutputPortComboBox(pqSpreadSheetViewDecorator);
        Source->setObjectName(QStringLiteral("Source"));
        Source->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        hboxLayout->addWidget(Source);

        label_2 = new QLabel(pqSpreadSheetViewDecorator);
        label_2->setObjectName(QStringLiteral("label_2"));

        hboxLayout->addWidget(label_2);

        Attribute = new QComboBox(pqSpreadSheetViewDecorator);
        Attribute->setObjectName(QStringLiteral("Attribute"));
        Attribute->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        hboxLayout->addWidget(Attribute);

        label_Precision = new QLabel(pqSpreadSheetViewDecorator);
        label_Precision->setObjectName(QStringLiteral("label_Precision"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_Precision->setFont(font);

        hboxLayout->addWidget(label_Precision);

        spinBoxPrecision = new QSpinBox(pqSpreadSheetViewDecorator);
        spinBoxPrecision->setObjectName(QStringLiteral("spinBoxPrecision"));
        spinBoxPrecision->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinBoxPrecision->setMaximum(32);

        hboxLayout->addWidget(spinBoxPrecision);

        ToggleFixed = new QToolButton(pqSpreadSheetViewDecorator);
        ToggleFixed->setObjectName(QStringLiteral("ToggleFixed"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/pqWidgets/Icons/pqFixedRepr32.png"), QSize(), QIcon::Normal, QIcon::Off);
        ToggleFixed->setIcon(icon1);
        ToggleFixed->setCheckable(true);

        hboxLayout->addWidget(ToggleFixed);

        SelectionOnly = new QToolButton(pqSpreadSheetViewDecorator);
        SelectionOnly->setObjectName(QStringLiteral("SelectionOnly"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/pqWidgets/Icons/pqSelect16.png"), QSize(), QIcon::Normal, QIcon::Off);
        SelectionOnly->setIcon(icon2);
        SelectionOnly->setCheckable(true);
        SelectionOnly->setToolButtonStyle(Qt::ToolButtonIconOnly);

        hboxLayout->addWidget(SelectionOnly);

        ToggleColumnVisibility = new QToolButton(pqSpreadSheetViewDecorator);
        ToggleColumnVisibility->setObjectName(QStringLiteral("ToggleColumnVisibility"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/pqWidgets/Icons/pqRectilinearGrid16.png"), QSize(), QIcon::Normal, QIcon::Off);
        ToggleColumnVisibility->setIcon(icon3);
        ToggleColumnVisibility->setPopupMode(QToolButton::InstantPopup);

        hboxLayout->addWidget(ToggleColumnVisibility);

        ToggleCellConnectivity = new QToolButton(pqSpreadSheetViewDecorator);
        ToggleCellConnectivity->setObjectName(QStringLiteral("ToggleCellConnectivity"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/pqWidgets/Icons/pqProgrammableFilter24.png"), QSize(), QIcon::Normal, QIcon::Off);
        ToggleCellConnectivity->setIcon(icon4);
        ToggleCellConnectivity->setCheckable(true);

        hboxLayout->addWidget(ToggleCellConnectivity);

        ExportSpreadsheet = new QToolButton(pqSpreadSheetViewDecorator);
        ExportSpreadsheet->setObjectName(QStringLiteral("ExportSpreadsheet"));

        hboxLayout->addWidget(ExportSpreadsheet);

        spacerItem = new QSpacerItem(58, 23, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);


        retranslateUi(pqSpreadSheetViewDecorator);

        QMetaObject::connectSlotsByName(pqSpreadSheetViewDecorator);
    } // setupUi

    void retranslateUi(QWidget *pqSpreadSheetViewDecorator)
    {
        pqSpreadSheetViewDecorator->setWindowTitle(QApplication::translate("pqSpreadSheetViewDecorator", "Form", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionExport->setToolTip(QApplication::translate("pqSpreadSheetViewDecorator", "Export Spreadsheet", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("pqSpreadSheetViewDecorator", "<b>Showing  </b>", Q_NULLPTR));
        label_2->setText(QApplication::translate("pqSpreadSheetViewDecorator", "<b>   Attribute:</b>", Q_NULLPTR));
        label_Precision->setText(QApplication::translate("pqSpreadSheetViewDecorator", "Precision:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ToggleFixed->setToolTip(QApplication::translate("pqSpreadSheetViewDecorator", "Switches between scientific and fixed-point representation", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        ToggleFixed->setStatusTip(QApplication::translate("pqSpreadSheetViewDecorator", "Toggle fixed-point representation (always show #Precision digits)", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        ToggleFixed->setWhatsThis(QApplication::translate("pqSpreadSheetViewDecorator", "Toggle fixed-point representation (always show #Precision digits)", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        ToggleFixed->setText(QApplication::translate("pqSpreadSheetViewDecorator", "FixedRep", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        SelectionOnly->setToolTip(QApplication::translate("pqSpreadSheetViewDecorator", "Show only selected elements.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        SelectionOnly->setStatusTip(QApplication::translate("pqSpreadSheetViewDecorator", "Show only selected elements.", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        SelectionOnly->setWhatsThis(QApplication::translate("pqSpreadSheetViewDecorator", "Show only selected elements.", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        SelectionOnly->setText(QApplication::translate("pqSpreadSheetViewDecorator", "Selected", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ToggleColumnVisibility->setToolTip(QApplication::translate("pqSpreadSheetViewDecorator", "Toggle column visibility", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        ToggleColumnVisibility->setStatusTip(QApplication::translate("pqSpreadSheetViewDecorator", "Toggle column visibility", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        ToggleColumnVisibility->setWhatsThis(QApplication::translate("pqSpreadSheetViewDecorator", "Toggle column visibility", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        ToggleColumnVisibility->setText(QApplication::translate("pqSpreadSheetViewDecorator", "Toggle column visibility", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ToggleCellConnectivity->setToolTip(QApplication::translate("pqSpreadSheetViewDecorator", "Toggle cell connectivity visibility", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        ToggleCellConnectivity->setText(QApplication::translate("pqSpreadSheetViewDecorator", "...", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class pqSpreadSheetViewDecorator: public Ui_pqSpreadSheetViewDecorator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQSPREADSHEETVIEWDECORATOR_H
