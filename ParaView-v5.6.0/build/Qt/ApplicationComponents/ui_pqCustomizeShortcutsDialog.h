/********************************************************************************
** Form generated from reading UI file 'pqCustomizeShortcutsDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQCUSTOMIZESHORTCUTSDIALOG_H
#define UI_PQCUSTOMIZESHORTCUTSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QKeySequenceEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "pqSearchBox.h"

QT_BEGIN_NAMESPACE

class Ui_pqCustomizeShortcutsDialog
{
public:
    QVBoxLayout *verticalLayout;
    pqSearchBox *searchBox;
    QTreeView *treeView;
    QWidget *widget;
    QGridLayout *gridLayout;
    QKeySequenceEdit *keySequenceEdit;
    QPushButton *recordButton;
    QPushButton *clearButton;
    QPushButton *resetButton;
    QDialogButtonBox *buttonBox;
    QPushButton *resetAllButton;

    void setupUi(QDialog *pqCustomizeShortcutsDialog)
    {
        if (pqCustomizeShortcutsDialog->objectName().isEmpty())
            pqCustomizeShortcutsDialog->setObjectName(QStringLiteral("pqCustomizeShortcutsDialog"));
        pqCustomizeShortcutsDialog->resize(400, 300);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pqCustomizeShortcutsDialog->sizePolicy().hasHeightForWidth());
        pqCustomizeShortcutsDialog->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(pqCustomizeShortcutsDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        searchBox = new pqSearchBox(pqCustomizeShortcutsDialog);
        searchBox->setObjectName(QStringLiteral("searchBox"));

        verticalLayout->addWidget(searchBox);

        treeView = new QTreeView(pqCustomizeShortcutsDialog);
        treeView->setObjectName(QStringLiteral("treeView"));
        treeView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        treeView->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        treeView->setProperty("showDropIndicator", QVariant(false));
        treeView->setAutoExpandDelay(0);

        verticalLayout->addWidget(treeView);

        widget = new QWidget(pqCustomizeShortcutsDialog);
        widget->setObjectName(QStringLiteral("widget"));
        gridLayout = new QGridLayout(widget);
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        keySequenceEdit = new QKeySequenceEdit(widget);
        keySequenceEdit->setObjectName(QStringLiteral("keySequenceEdit"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(keySequenceEdit->sizePolicy().hasHeightForWidth());
        keySequenceEdit->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(keySequenceEdit, 0, 0, 1, 1);

        recordButton = new QPushButton(widget);
        recordButton->setObjectName(QStringLiteral("recordButton"));

        gridLayout->addWidget(recordButton, 0, 1, 1, 1);

        clearButton = new QPushButton(widget);
        clearButton->setObjectName(QStringLiteral("clearButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(clearButton->sizePolicy().hasHeightForWidth());
        clearButton->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(clearButton, 0, 2, 1, 1);

        resetButton = new QPushButton(widget);
        resetButton->setObjectName(QStringLiteral("resetButton"));

        gridLayout->addWidget(resetButton, 0, 3, 1, 1);

        buttonBox = new QDialogButtonBox(widget);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 1, 3, 1, 1);

        resetAllButton = new QPushButton(widget);
        resetAllButton->setObjectName(QStringLiteral("resetAllButton"));

        gridLayout->addWidget(resetAllButton, 1, 0, 1, 1);


        verticalLayout->addWidget(widget);


        retranslateUi(pqCustomizeShortcutsDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), pqCustomizeShortcutsDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), pqCustomizeShortcutsDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(pqCustomizeShortcutsDialog);
    } // setupUi

    void retranslateUi(QDialog *pqCustomizeShortcutsDialog)
    {
        pqCustomizeShortcutsDialog->setWindowTitle(QApplication::translate("pqCustomizeShortcutsDialog", "Dialog", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        recordButton->setToolTip(QApplication::translate("pqCustomizeShortcutsDialog", "To set the shortcut for the selected action, press this then enter the shortcut.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        recordButton->setText(QApplication::translate("pqCustomizeShortcutsDialog", "Record", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        clearButton->setToolTip(QApplication::translate("pqCustomizeShortcutsDialog", "Remove the shortcut for the selected action.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        clearButton->setText(QApplication::translate("pqCustomizeShortcutsDialog", "Clear", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        resetButton->setToolTip(QApplication::translate("pqCustomizeShortcutsDialog", "Restore the default shortcut for the selected action.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        resetButton->setText(QApplication::translate("pqCustomizeShortcutsDialog", "Reset", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        resetAllButton->setToolTip(QApplication::translate("pqCustomizeShortcutsDialog", "Resets the shortcuts for all actions to the default or clears the shortcut if there is no default.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        resetAllButton->setText(QApplication::translate("pqCustomizeShortcutsDialog", "Reset All", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class pqCustomizeShortcutsDialog: public Ui_pqCustomizeShortcutsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQCUSTOMIZESHORTCUTSDIALOG_H
