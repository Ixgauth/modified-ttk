/********************************************************************************
** Form generated from reading UI file 'pqLockViewSizeCustomDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQLOCKVIEWSIZECUSTOMDIALOG_H
#define UI_PQLOCKVIEWSIZECUSTOMDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_pqLockViewSizeCustomDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QLineEdit *Width;
    QLabel *label_2;
    QLineEdit *Height;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *ButtonBox;

    void setupUi(QDialog *pqLockViewSizeCustomDialog)
    {
        if (pqLockViewSizeCustomDialog->objectName().isEmpty())
            pqLockViewSizeCustomDialog->setObjectName(QStringLiteral("pqLockViewSizeCustomDialog"));
        pqLockViewSizeCustomDialog->resize(287, 126);
        verticalLayout = new QVBoxLayout(pqLockViewSizeCustomDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(pqLockViewSizeCustomDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        Width = new QLineEdit(pqLockViewSizeCustomDialog);
        Width->setObjectName(QStringLiteral("Width"));
        Width->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(Width);

        label_2 = new QLabel(pqLockViewSizeCustomDialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        Height = new QLineEdit(pqLockViewSizeCustomDialog);
        Height->setObjectName(QStringLiteral("Height"));
        Height->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(Height);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 18, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        ButtonBox = new QDialogButtonBox(pqLockViewSizeCustomDialog);
        ButtonBox->setObjectName(QStringLiteral("ButtonBox"));
        ButtonBox->setOrientation(Qt::Horizontal);
        ButtonBox->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(ButtonBox);


        retranslateUi(pqLockViewSizeCustomDialog);
        QObject::connect(ButtonBox, SIGNAL(accepted()), pqLockViewSizeCustomDialog, SLOT(accept()));
        QObject::connect(ButtonBox, SIGNAL(rejected()), pqLockViewSizeCustomDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(pqLockViewSizeCustomDialog);
    } // setupUi

    void retranslateUi(QDialog *pqLockViewSizeCustomDialog)
    {
        pqLockViewSizeCustomDialog->setWindowTitle(QApplication::translate("pqLockViewSizeCustomDialog", "Lock View to Custom Size", Q_NULLPTR));
        label->setText(QApplication::translate("pqLockViewSizeCustomDialog", "Select Maximum Resolution for Each View", Q_NULLPTR));
        label_2->setText(QApplication::translate("pqLockViewSizeCustomDialog", "x", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class pqLockViewSizeCustomDialog: public Ui_pqLockViewSizeCustomDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQLOCKVIEWSIZECUSTOMDIALOG_H
