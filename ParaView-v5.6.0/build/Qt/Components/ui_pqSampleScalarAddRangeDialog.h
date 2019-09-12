/********************************************************************************
** Form generated from reading UI file 'pqSampleScalarAddRangeDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQSAMPLESCALARADDRANGEDIALOG_H
#define UI_PQSAMPLESCALARADDRANGEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include "pqDoubleLineEdit.h"

QT_BEGIN_NAMESPACE

class Ui_pqSampleScalarAddRangeDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *logWarning;
    QCheckBox *log;
    QLabel *label_2;
    pqDoubleLineEdit *from;
    QLabel *label_3;
    QLabel *label;
    pqDoubleLineEdit *to;
    QLineEdit *steps;
    QDialogButtonBox *buttonBox;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *pqSampleScalarAddRangeDialog)
    {
        if (pqSampleScalarAddRangeDialog->objectName().isEmpty())
            pqSampleScalarAddRangeDialog->setObjectName(QStringLiteral("pqSampleScalarAddRangeDialog"));
        pqSampleScalarAddRangeDialog->resize(341, 183);
        gridLayout = new QGridLayout(pqSampleScalarAddRangeDialog);
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(9, 9, 9, 9);
        logWarning = new QLabel(pqSampleScalarAddRangeDialog);
        logWarning->setObjectName(QStringLiteral("logWarning"));
        logWarning->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(logWarning, 3, 0, 1, 2);

        log = new QCheckBox(pqSampleScalarAddRangeDialog);
        log->setObjectName(QStringLiteral("log"));
        log->setChecked(false);

        gridLayout->addWidget(log, 5, 0, 1, 2);

        label_2 = new QLabel(pqSampleScalarAddRangeDialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        from = new pqDoubleLineEdit(pqSampleScalarAddRangeDialog);
        from->setObjectName(QStringLiteral("from"));

        gridLayout->addWidget(from, 0, 1, 1, 1);

        label_3 = new QLabel(pqSampleScalarAddRangeDialog);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        label = new QLabel(pqSampleScalarAddRangeDialog);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        to = new pqDoubleLineEdit(pqSampleScalarAddRangeDialog);
        to->setObjectName(QStringLiteral("to"));

        gridLayout->addWidget(to, 1, 1, 1, 1);

        steps = new QLineEdit(pqSampleScalarAddRangeDialog);
        steps->setObjectName(QStringLiteral("steps"));

        gridLayout->addWidget(steps, 2, 1, 1, 1);

        buttonBox = new QDialogButtonBox(pqSampleScalarAddRangeDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 7, 0, 1, 2);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 6, 0, 1, 2);

        QWidget::setTabOrder(from, to);
        QWidget::setTabOrder(to, steps);

        retranslateUi(pqSampleScalarAddRangeDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), pqSampleScalarAddRangeDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), pqSampleScalarAddRangeDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(pqSampleScalarAddRangeDialog);
    } // setupUi

    void retranslateUi(QDialog *pqSampleScalarAddRangeDialog)
    {
        pqSampleScalarAddRangeDialog->setWindowTitle(QApplication::translate("pqSampleScalarAddRangeDialog", "Add Range", Q_NULLPTR));
        logWarning->setText(QApplication::translate("pqSampleScalarAddRangeDialog", "Can't use logarithmic scale when zero is in the range.", Q_NULLPTR));
        log->setText(QApplication::translate("pqSampleScalarAddRangeDialog", "Use Logarithmic Scale", Q_NULLPTR));
        label_2->setText(QApplication::translate("pqSampleScalarAddRangeDialog", "To", Q_NULLPTR));
        label_3->setText(QApplication::translate("pqSampleScalarAddRangeDialog", "Steps", Q_NULLPTR));
        label->setText(QApplication::translate("pqSampleScalarAddRangeDialog", "From", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class pqSampleScalarAddRangeDialog: public Ui_pqSampleScalarAddRangeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQSAMPLESCALARADDRANGEDIALOG_H
