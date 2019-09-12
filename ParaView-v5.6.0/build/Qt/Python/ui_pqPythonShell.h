/********************************************************************************
** Form generated from reading UI file 'pqPythonShell.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQPYTHONSHELL_H
#define UI_PQPYTHONSHELL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "pqConsoleWidget.h"

QT_BEGIN_NAMESPACE

class Ui_PythonShell
{
public:
    QVBoxLayout *verticalLayout;
    pqConsoleWidget *consoleWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *runScriptButton;
    QPushButton *clearButton;
    QPushButton *resetButton;

    void setupUi(QWidget *PythonShell)
    {
        if (PythonShell->objectName().isEmpty())
            PythonShell->setObjectName(QStringLiteral("PythonShell"));
        PythonShell->resize(296, 78);
        verticalLayout = new QVBoxLayout(PythonShell);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        consoleWidget = new pqConsoleWidget(PythonShell);
        consoleWidget->setObjectName(QStringLiteral("consoleWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(consoleWidget->sizePolicy().hasHeightForWidth());
        consoleWidget->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(consoleWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        runScriptButton = new QPushButton(PythonShell);
        runScriptButton->setObjectName(QStringLiteral("runScriptButton"));

        horizontalLayout->addWidget(runScriptButton);

        clearButton = new QPushButton(PythonShell);
        clearButton->setObjectName(QStringLiteral("clearButton"));
        clearButton->setEnabled(false);

        horizontalLayout->addWidget(clearButton);

        resetButton = new QPushButton(PythonShell);
        resetButton->setObjectName(QStringLiteral("resetButton"));
        resetButton->setEnabled(false);

        horizontalLayout->addWidget(resetButton);


        verticalLayout->addLayout(horizontalLayout);

        verticalLayout->setStretch(0, 1);

        retranslateUi(PythonShell);

        QMetaObject::connectSlotsByName(PythonShell);
    } // setupUi

    void retranslateUi(QWidget *PythonShell)
    {
        PythonShell->setWindowTitle(QApplication::translate("PythonShell", "Form", Q_NULLPTR));
        runScriptButton->setText(QApplication::translate("PythonShell", "Run Script", Q_NULLPTR));
        clearButton->setText(QApplication::translate("PythonShell", "Clear", Q_NULLPTR));
        resetButton->setText(QApplication::translate("PythonShell", "Reset", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class PythonShell: public Ui_PythonShell {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQPYTHONSHELL_H
