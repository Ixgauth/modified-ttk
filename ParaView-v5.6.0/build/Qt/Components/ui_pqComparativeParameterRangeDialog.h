/********************************************************************************
** Form generated from reading UI file 'pqComparativeParameterRangeDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQCOMPARATIVEPARAMETERRANGEDIALOG_H
#define UI_PQCOMPARATIVEPARAMETERRANGEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_pqComparativeParameterRangeDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *multivalueHint;
    QHBoxLayout *horizontalLayout;
    QLineEdit *minValue;
    QLabel *label;
    QLineEdit *maxValue;
    QSpacerItem *verticalSpacer;
    QComboBox *mode;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *pqComparativeParameterRangeDialog)
    {
        if (pqComparativeParameterRangeDialog->objectName().isEmpty())
            pqComparativeParameterRangeDialog->setObjectName(QStringLiteral("pqComparativeParameterRangeDialog"));
        pqComparativeParameterRangeDialog->resize(313, 121);
        verticalLayout = new QVBoxLayout(pqComparativeParameterRangeDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        multivalueHint = new QLabel(pqComparativeParameterRangeDialog);
        multivalueHint->setObjectName(QStringLiteral("multivalueHint"));

        verticalLayout->addWidget(multivalueHint);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        minValue = new QLineEdit(pqComparativeParameterRangeDialog);
        minValue->setObjectName(QStringLiteral("minValue"));

        horizontalLayout->addWidget(minValue);

        label = new QLabel(pqComparativeParameterRangeDialog);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        maxValue = new QLineEdit(pqComparativeParameterRangeDialog);
        maxValue->setObjectName(QStringLiteral("maxValue"));

        horizontalLayout->addWidget(maxValue);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 4, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        mode = new QComboBox(pqComparativeParameterRangeDialog);
        mode->setObjectName(QStringLiteral("mode"));

        verticalLayout->addWidget(mode);

        buttonBox = new QDialogButtonBox(pqComparativeParameterRangeDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

        QWidget::setTabOrder(minValue, maxValue);
        QWidget::setTabOrder(maxValue, buttonBox);

        retranslateUi(pqComparativeParameterRangeDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), pqComparativeParameterRangeDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), pqComparativeParameterRangeDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(pqComparativeParameterRangeDialog);
    } // setupUi

    void retranslateUi(QDialog *pqComparativeParameterRangeDialog)
    {
        pqComparativeParameterRangeDialog->setWindowTitle(QApplication::translate("pqComparativeParameterRangeDialog", "Enter Parameter Range", Q_NULLPTR));
        multivalueHint->setText(QApplication::translate("pqComparativeParameterRangeDialog", "Use comma-separated values to enter multiple values.\n"
"However number of values in both entires must match.", Q_NULLPTR));
        label->setText(QApplication::translate("pqComparativeParameterRangeDialog", "  to  ", Q_NULLPTR));
        mode->clear();
        mode->insertItems(0, QStringList()
         << QApplication::translate("pqComparativeParameterRangeDialog", "Vary horizontally first", Q_NULLPTR)
         << QApplication::translate("pqComparativeParameterRangeDialog", "Vary vertically first", Q_NULLPTR)
         << QApplication::translate("pqComparativeParameterRangeDialog", "Only vary horizontally", Q_NULLPTR)
         << QApplication::translate("pqComparativeParameterRangeDialog", "Only vary vertically", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        mode->setToolTip(QApplication::translate("pqComparativeParameterRangeDialog", "Controls the direction in which the parameter is varied.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        mode->setStatusTip(QApplication::translate("pqComparativeParameterRangeDialog", "Controls the direction in which the parameter is varied.", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        mode->setWhatsThis(QApplication::translate("pqComparativeParameterRangeDialog", "Controls the direction in which the parameter is varied.", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
    } // retranslateUi

};

namespace Ui {
    class pqComparativeParameterRangeDialog: public Ui_pqComparativeParameterRangeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQCOMPARATIVEPARAMETERRANGEDIALOG_H
