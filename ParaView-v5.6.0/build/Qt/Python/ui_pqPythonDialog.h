/********************************************************************************
** Form generated from reading UI file 'pqPythonDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQPYTHONDIALOG_H
#define UI_PQPYTHONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QVBoxLayout>
#include "pqPythonShell.h"

QT_BEGIN_NAMESPACE

class Ui_pqPythonDialog
{
public:
    QVBoxLayout *verticalLayout;
    pqPythonShell *shellWidget;

    void setupUi(QDialog *pqPythonDialog)
    {
        if (pqPythonDialog->objectName().isEmpty())
            pqPythonDialog->setObjectName(QStringLiteral("pqPythonDialog"));
        pqPythonDialog->resize(524, 338);
        verticalLayout = new QVBoxLayout(pqPythonDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        shellWidget = new pqPythonShell(pqPythonDialog);
        shellWidget->setObjectName(QStringLiteral("shellWidget"));

        verticalLayout->addWidget(shellWidget);

        verticalLayout->setStretch(0, 1);

        retranslateUi(pqPythonDialog);

        QMetaObject::connectSlotsByName(pqPythonDialog);
    } // setupUi

    void retranslateUi(QDialog *pqPythonDialog)
    {
        pqPythonDialog->setWindowTitle(QApplication::translate("pqPythonDialog", "Python Shell", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class pqPythonDialog: public Ui_pqPythonDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQPYTHONDIALOG_H
