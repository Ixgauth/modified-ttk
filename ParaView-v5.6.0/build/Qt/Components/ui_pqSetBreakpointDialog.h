/********************************************************************************
** Form generated from reading UI file 'pqSetBreakpointDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQSETBREAKPOINTDIALOG_H
#define UI_PQSETBREAKPOINTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_pqSetBreakpointDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *BreakpointTime;
    QRadioButton *radioButtonTime;
    QLabel *Time;
    QRadioButton *radioButtonTimeStep;
    QLabel *TimeStep;
    QDialogButtonBox *ButtonBox;
    QButtonGroup *buttonGroup;

    void setupUi(QDialog *pqSetBreakpointDialog)
    {
        if (pqSetBreakpointDialog->objectName().isEmpty())
            pqSetBreakpointDialog->setObjectName(QStringLiteral("pqSetBreakpointDialog"));
        pqSetBreakpointDialog->resize(247, 136);
        gridLayout = new QGridLayout(pqSetBreakpointDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(pqSetBreakpointDialog);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        BreakpointTime = new QLineEdit(pqSetBreakpointDialog);
        BreakpointTime->setObjectName(QStringLiteral("BreakpointTime"));

        gridLayout->addWidget(BreakpointTime, 0, 1, 1, 1);

        radioButtonTime = new QRadioButton(pqSetBreakpointDialog);
        buttonGroup = new QButtonGroup(pqSetBreakpointDialog);
        buttonGroup->setObjectName(QStringLiteral("buttonGroup"));
        buttonGroup->addButton(radioButtonTime);
        radioButtonTime->setObjectName(QStringLiteral("radioButtonTime"));
        radioButtonTime->setChecked(false);

        gridLayout->addWidget(radioButtonTime, 1, 0, 1, 1);

        Time = new QLabel(pqSetBreakpointDialog);
        Time->setObjectName(QStringLiteral("Time"));

        gridLayout->addWidget(Time, 1, 1, 1, 1);

        radioButtonTimeStep = new QRadioButton(pqSetBreakpointDialog);
        buttonGroup->addButton(radioButtonTimeStep);
        radioButtonTimeStep->setObjectName(QStringLiteral("radioButtonTimeStep"));
        radioButtonTimeStep->setChecked(true);

        gridLayout->addWidget(radioButtonTimeStep, 2, 0, 1, 1);

        TimeStep = new QLabel(pqSetBreakpointDialog);
        TimeStep->setObjectName(QStringLiteral("TimeStep"));

        gridLayout->addWidget(TimeStep, 2, 1, 1, 1);

        ButtonBox = new QDialogButtonBox(pqSetBreakpointDialog);
        ButtonBox->setObjectName(QStringLiteral("ButtonBox"));
        ButtonBox->setOrientation(Qt::Horizontal);
        ButtonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(ButtonBox, 3, 0, 1, 2);


        retranslateUi(pqSetBreakpointDialog);
        QObject::connect(ButtonBox, SIGNAL(rejected()), pqSetBreakpointDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(pqSetBreakpointDialog);
    } // setupUi

    void retranslateUi(QDialog *pqSetBreakpointDialog)
    {
        pqSetBreakpointDialog->setWindowTitle(QApplication::translate("pqSetBreakpointDialog", "Set Breakpoint", Q_NULLPTR));
        label->setText(QApplication::translate("pqSetBreakpointDialog", "Breakpoint:", Q_NULLPTR));
        radioButtonTime->setText(QApplication::translate("pqSetBreakpointDialog", "Time", Q_NULLPTR));
        Time->setText(QString());
        radioButtonTimeStep->setText(QApplication::translate("pqSetBreakpointDialog", "Time Step", Q_NULLPTR));
        TimeStep->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class pqSetBreakpointDialog: public Ui_pqSetBreakpointDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQSETBREAKPOINTDIALOG_H
