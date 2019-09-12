/********************************************************************************
** Form generated from reading UI file 'pqRescaleRangeDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQRESCALERANGEDIALOG_H
#define UI_PQRESCALERANGEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include "pqDoubleLineEdit.h"

QT_BEGIN_NAMESPACE

class Ui_pqRescaleRangeDialog
{
public:
    QGridLayout *gridLayout;
    pqDoubleLineEdit *MinimumScalar;
    QLabel *label_2;
    pqDoubleLineEdit *MaximumScalar;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *RescaleButton;
    QPushButton *RescaleOnlyButton;
    QPushButton *CancelButton;
    QLabel *label_3;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *pqRescaleRangeDialog)
    {
        if (pqRescaleRangeDialog->objectName().isEmpty())
            pqRescaleRangeDialog->setObjectName(QStringLiteral("pqRescaleRangeDialog"));
        pqRescaleRangeDialog->resize(495, 109);
        gridLayout = new QGridLayout(pqRescaleRangeDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        MinimumScalar = new pqDoubleLineEdit(pqRescaleRangeDialog);
        MinimumScalar->setObjectName(QStringLiteral("MinimumScalar"));

        gridLayout->addWidget(MinimumScalar, 1, 0, 1, 1);

        label_2 = new QLabel(pqRescaleRangeDialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 1, 1, 1);

        MaximumScalar = new pqDoubleLineEdit(pqRescaleRangeDialog);
        MaximumScalar->setObjectName(QStringLiteral("MaximumScalar"));

        gridLayout->addWidget(MaximumScalar, 1, 2, 1, 1);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        RescaleButton = new QPushButton(pqRescaleRangeDialog);
        RescaleButton->setObjectName(QStringLiteral("RescaleButton"));

        hboxLayout->addWidget(RescaleButton);

        RescaleOnlyButton = new QPushButton(pqRescaleRangeDialog);
        RescaleOnlyButton->setObjectName(QStringLiteral("RescaleOnlyButton"));

        hboxLayout->addWidget(RescaleOnlyButton);

        CancelButton = new QPushButton(pqRescaleRangeDialog);
        CancelButton->setObjectName(QStringLiteral("CancelButton"));

        hboxLayout->addWidget(CancelButton);


        gridLayout->addLayout(hboxLayout, 4, 0, 1, 3);

        label_3 = new QLabel(pqRescaleRangeDialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_3->setWordWrap(true);

        gridLayout->addWidget(label_3, 0, 0, 1, 3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 0, 1, 1);

        QWidget::setTabOrder(MinimumScalar, MaximumScalar);
        QWidget::setTabOrder(MaximumScalar, RescaleOnlyButton);
        QWidget::setTabOrder(RescaleOnlyButton, CancelButton);

        retranslateUi(pqRescaleRangeDialog);

        RescaleButton->setDefault(true);


        QMetaObject::connectSlotsByName(pqRescaleRangeDialog);
    } // setupUi

    void retranslateUi(QDialog *pqRescaleRangeDialog)
    {
        pqRescaleRangeDialog->setWindowTitle(QApplication::translate("pqRescaleRangeDialog", "Set Range", Q_NULLPTR));
#ifndef QT_NO_WHATSTHIS
        MinimumScalar->setWhatsThis(QApplication::translate("pqRescaleRangeDialog", "Enter the new range minimum here.", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        MinimumScalar->setPlaceholderText(QApplication::translate("pqRescaleRangeDialog", "minimum", Q_NULLPTR));
        label_2->setText(QApplication::translate("pqRescaleRangeDialog", "-", Q_NULLPTR));
#ifndef QT_NO_WHATSTHIS
        MaximumScalar->setWhatsThis(QApplication::translate("pqRescaleRangeDialog", "Enter the new range maximum here.", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        MaximumScalar->setPlaceholderText(QApplication::translate("pqRescaleRangeDialog", "maximum", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        RescaleButton->setToolTip(QApplication::translate("pqRescaleRangeDialog", "Rescale and lock the color map to avoid automatic rescaling.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        RescaleButton->setText(QApplication::translate("pqRescaleRangeDialog", "Rescale and disable automatic rescaling", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        RescaleOnlyButton->setToolTip(QApplication::translate("pqRescaleRangeDialog", "Rescale and leave automatic rescaling mode unchanged.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        RescaleOnlyButton->setText(QApplication::translate("pqRescaleRangeDialog", "Rescale", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        CancelButton->setToolTip(QApplication::translate("pqRescaleRangeDialog", "Close without rescaling", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        CancelButton->setText(QApplication::translate("pqRescaleRangeDialog", "Cancel", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        label_3->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        label_3->setText(QApplication::translate("pqRescaleRangeDialog", "<html><head/><body><p>Enter the range for the color map.</p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class pqRescaleRangeDialog: public Ui_pqRescaleRangeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQRESCALERANGEDIALOG_H
