/********************************************************************************
** Form generated from reading UI file 'pqPluginEULADialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQPLUGINEULADIALOG_H
#define UI_PQPLUGINEULADIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_PluginEULADialog
{
public:
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *PluginEULADialog)
    {
        if (PluginEULADialog->objectName().isEmpty())
            PluginEULADialog->setObjectName(QStringLiteral("PluginEULADialog"));
        PluginEULADialog->resize(450, 310);
        verticalLayout = new QVBoxLayout(PluginEULADialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        textEdit = new QTextEdit(PluginEULADialog);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setReadOnly(true);

        verticalLayout->addWidget(textEdit);

        buttonBox = new QDialogButtonBox(PluginEULADialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::No|QDialogButtonBox::Yes);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(PluginEULADialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), PluginEULADialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), PluginEULADialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(PluginEULADialog);
    } // setupUi

    void retranslateUi(QDialog *PluginEULADialog)
    {
        PluginEULADialog->setWindowTitle(QApplication::translate("PluginEULADialog", "End User License Agreement", Q_NULLPTR));
        textEdit->setHtml(QApplication::translate("PluginEULADialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">EULA for plugin</span></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class PluginEULADialog: public Ui_PluginEULADialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQPLUGINEULADIALOG_H
