/********************************************************************************
** Form generated from reading UI file 'pqRemoteCommandTemplateDialogForm.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQREMOTECOMMANDTEMPLATEDIALOGFORM_H
#define UI_PQREMOTECOMMANDTEMPLATEDIALOGFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>

QT_BEGIN_NAMESPACE

class Ui_pqRemoteCommandTemplateDialogForm
{
public:
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *commandName;
    QLabel *label_2;
    QPlainTextEdit *commandTemplate;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *pqRemoteCommandTemplateDialogForm)
    {
        if (pqRemoteCommandTemplateDialogForm->objectName().isEmpty())
            pqRemoteCommandTemplateDialogForm->setObjectName(QStringLiteral("pqRemoteCommandTemplateDialogForm"));
        pqRemoteCommandTemplateDialogForm->resize(360, 165);
        formLayout = new QFormLayout(pqRemoteCommandTemplateDialogForm);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label = new QLabel(pqRemoteCommandTemplateDialogForm);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        commandName = new QLineEdit(pqRemoteCommandTemplateDialogForm);
        commandName->setObjectName(QStringLiteral("commandName"));

        formLayout->setWidget(0, QFormLayout::FieldRole, commandName);

        label_2 = new QLabel(pqRemoteCommandTemplateDialogForm);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        commandTemplate = new QPlainTextEdit(pqRemoteCommandTemplateDialogForm);
        commandTemplate->setObjectName(QStringLiteral("commandTemplate"));

        formLayout->setWidget(1, QFormLayout::FieldRole, commandTemplate);

        buttonBox = new QDialogButtonBox(pqRemoteCommandTemplateDialogForm);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        formLayout->setWidget(2, QFormLayout::SpanningRole, buttonBox);


        retranslateUi(pqRemoteCommandTemplateDialogForm);
        QObject::connect(buttonBox, SIGNAL(accepted()), pqRemoteCommandTemplateDialogForm, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), pqRemoteCommandTemplateDialogForm, SLOT(reject()));

        QMetaObject::connectSlotsByName(pqRemoteCommandTemplateDialogForm);
    } // setupUi

    void retranslateUi(QDialog *pqRemoteCommandTemplateDialogForm)
    {
        pqRemoteCommandTemplateDialogForm->setWindowTitle(QApplication::translate("pqRemoteCommandTemplateDialogForm", "Remote Command", Q_NULLPTR));
        label->setText(QApplication::translate("pqRemoteCommandTemplateDialogForm", "Name:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        commandName->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        label_2->setText(QApplication::translate("pqRemoteCommandTemplateDialogForm", "Template:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        commandTemplate->setToolTip(QString());
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class pqRemoteCommandTemplateDialogForm: public Ui_pqRemoteCommandTemplateDialogForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQREMOTECOMMANDTEMPLATEDIALOGFORM_H
