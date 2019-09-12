/********************************************************************************
** Form generated from reading UI file 'pqTransferFunctionWidgetPropertyDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQTRANSFERFUNCTIONWIDGETPROPERTYDIALOG_H
#define UI_PQTRANSFERFUNCTIONWIDGETPROPERTYDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include "pqLineEdit.h"
#include "pqTransferFunctionWidget.h"

QT_BEGIN_NAMESPACE

class Ui_TransferFunctionWidgetPropertyDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *Label;
    pqTransferFunctionWidget *TransferFunctionEditor;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    pqLineEdit *minX;
    pqLineEdit *maxX;
    QLabel *label_2;
    QDialogButtonBox *ButtonBox;

    void setupUi(QDialog *TransferFunctionWidgetPropertyDialog)
    {
        if (TransferFunctionWidgetPropertyDialog->objectName().isEmpty())
            TransferFunctionWidgetPropertyDialog->setObjectName(QStringLiteral("TransferFunctionWidgetPropertyDialog"));
        TransferFunctionWidgetPropertyDialog->resize(400, 377);
        verticalLayout = new QVBoxLayout(TransferFunctionWidgetPropertyDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        Label = new QLabel(TransferFunctionWidgetPropertyDialog);
        Label->setObjectName(QStringLiteral("Label"));

        verticalLayout->addWidget(Label);

        TransferFunctionEditor = new pqTransferFunctionWidget(TransferFunctionWidgetPropertyDialog);
        TransferFunctionEditor->setObjectName(QStringLiteral("TransferFunctionEditor"));
        TransferFunctionEditor->setMinimumSize(QSize(0, 80));

        verticalLayout->addWidget(TransferFunctionEditor);

        groupBox = new QGroupBox(TransferFunctionWidgetPropertyDialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setMinimumSize(QSize(0, 28));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        minX = new pqLineEdit(groupBox);
        minX->setObjectName(QStringLiteral("minX"));

        gridLayout->addWidget(minX, 0, 0, 1, 1);

        maxX = new pqLineEdit(groupBox);
        maxX->setObjectName(QStringLiteral("maxX"));

        gridLayout->addWidget(maxX, 0, 2, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 0, 1, 1, 1);


        verticalLayout->addWidget(groupBox);

        ButtonBox = new QDialogButtonBox(TransferFunctionWidgetPropertyDialog);
        ButtonBox->setObjectName(QStringLiteral("ButtonBox"));
        ButtonBox->setOrientation(Qt::Horizontal);
        ButtonBox->setStandardButtons(QDialogButtonBox::Close);

        verticalLayout->addWidget(ButtonBox);

        verticalLayout->setStretch(1, 1);

        retranslateUi(TransferFunctionWidgetPropertyDialog);
        QObject::connect(ButtonBox, SIGNAL(accepted()), TransferFunctionWidgetPropertyDialog, SLOT(accept()));
        QObject::connect(ButtonBox, SIGNAL(rejected()), TransferFunctionWidgetPropertyDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(TransferFunctionWidgetPropertyDialog);
    } // setupUi

    void retranslateUi(QDialog *TransferFunctionWidgetPropertyDialog)
    {
        TransferFunctionWidgetPropertyDialog->setWindowTitle(QApplication::translate("TransferFunctionWidgetPropertyDialog", "Edit Transfer Function", Q_NULLPTR));
        Label->setText(QApplication::translate("TransferFunctionWidgetPropertyDialog", "<html><head/><body><p align=\"center\"><span style=\" font-weight:600;\">%1</span></p></body></html>", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("TransferFunctionWidgetPropertyDialog", "Transfer Function range :", Q_NULLPTR));
        label_2->setText(QApplication::translate("TransferFunctionWidgetPropertyDialog", "-", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TransferFunctionWidgetPropertyDialog: public Ui_TransferFunctionWidgetPropertyDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQTRANSFERFUNCTIONWIDGETPROPERTYDIALOG_H
