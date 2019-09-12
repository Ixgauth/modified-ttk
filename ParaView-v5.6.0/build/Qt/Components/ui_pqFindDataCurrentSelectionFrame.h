/********************************************************************************
** Form generated from reading UI file 'pqFindDataCurrentSelectionFrame.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQFINDDATACURRENTSELECTIONFRAME_H
#define UI_PQFINDDATACURRENTSELECTIONFRAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "pqSpreadSheetViewWidget.h"

QT_BEGIN_NAMESPACE

class Ui_FindDataCurrentSelectionFrame
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_6;
    QComboBox *showTypeComboBox;
    QCheckBox *invertSelectionCheckBox;
    pqSpreadSheetViewWidget *spreadsheet;

    void setupUi(QWidget *FindDataCurrentSelectionFrame)
    {
        if (FindDataCurrentSelectionFrame->objectName().isEmpty())
            FindDataCurrentSelectionFrame->setObjectName(QStringLiteral("FindDataCurrentSelectionFrame"));
        FindDataCurrentSelectionFrame->resize(515, 357);
        verticalLayout = new QVBoxLayout(FindDataCurrentSelectionFrame);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_6 = new QLabel(FindDataCurrentSelectionFrame);
        label_6->setObjectName(QStringLiteral("label_6"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(label_6);

        showTypeComboBox = new QComboBox(FindDataCurrentSelectionFrame);
        showTypeComboBox->setObjectName(QStringLiteral("showTypeComboBox"));
        showTypeComboBox->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        horizontalLayout->addWidget(showTypeComboBox);

        invertSelectionCheckBox = new QCheckBox(FindDataCurrentSelectionFrame);
        invertSelectionCheckBox->setObjectName(QStringLiteral("invertSelectionCheckBox"));
        invertSelectionCheckBox->setEnabled(false);

        horizontalLayout->addWidget(invertSelectionCheckBox);

        horizontalLayout->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayout);

        spreadsheet = new pqSpreadSheetViewWidget(FindDataCurrentSelectionFrame);
        spreadsheet->setObjectName(QStringLiteral("spreadsheet"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(spreadsheet->sizePolicy().hasHeightForWidth());
        spreadsheet->setSizePolicy(sizePolicy1);
        spreadsheet->setMinimumSize(QSize(0, 120));
        spreadsheet->setEditTriggers(QAbstractItemView::NoEditTriggers);
        spreadsheet->setAlternatingRowColors(true);
        spreadsheet->setSelectionMode(QAbstractItemView::ExtendedSelection);
        spreadsheet->setSelectionBehavior(QAbstractItemView::SelectRows);

        verticalLayout->addWidget(spreadsheet);


        retranslateUi(FindDataCurrentSelectionFrame);

        QMetaObject::connectSlotsByName(FindDataCurrentSelectionFrame);
    } // setupUi

    void retranslateUi(QWidget *FindDataCurrentSelectionFrame)
    {
        FindDataCurrentSelectionFrame->setWindowTitle(QApplication::translate("FindDataCurrentSelectionFrame", "Form", Q_NULLPTR));
        label_6->setText(QApplication::translate("FindDataCurrentSelectionFrame", "Show:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        invertSelectionCheckBox->setToolTip(QApplication::translate("FindDataCurrentSelectionFrame", "Invert the selection", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        invertSelectionCheckBox->setText(QApplication::translate("FindDataCurrentSelectionFrame", "Invert selection", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class FindDataCurrentSelectionFrame: public Ui_FindDataCurrentSelectionFrame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQFINDDATACURRENTSELECTIONFRAME_H
