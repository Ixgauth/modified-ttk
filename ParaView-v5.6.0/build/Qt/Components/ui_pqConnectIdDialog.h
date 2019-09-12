/********************************************************************************
** Form generated from reading UI file 'pqConnectIdDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQCONNECTIDDIALOG_H
#define UI_PQCONNECTIDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_pqConnectIdDialog
{
public:
    QGridLayout *layout;
    QLabel *warning;
    QLabel *label;
    QSpinBox *connectId;
    QDialogButtonBox *buttonBox;
    QSpacerItem *horizontalSpacer;

    void setupUi(QDialog *pqConnectIdDialog)
    {
        if (pqConnectIdDialog->objectName().isEmpty())
            pqConnectIdDialog->setObjectName(QStringLiteral("pqConnectIdDialog"));
        pqConnectIdDialog->resize(541, 127);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pqConnectIdDialog->sizePolicy().hasHeightForWidth());
        pqConnectIdDialog->setSizePolicy(sizePolicy);
        pqConnectIdDialog->setSizeGripEnabled(false);
        layout = new QGridLayout(pqConnectIdDialog);
        layout->setObjectName(QStringLiteral("layout"));
        layout->setSizeConstraint(QLayout::SetFixedSize);
        warning = new QLabel(pqConnectIdDialog);
        warning->setObjectName(QStringLiteral("warning"));
        warning->setTextFormat(Qt::RichText);
        warning->setWordWrap(false);

        layout->addWidget(warning, 0, 0, 1, 4);

        label = new QLabel(pqConnectIdDialog);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        layout->addWidget(label, 1, 0, 1, 1);

        connectId = new QSpinBox(pqConnectIdDialog);
        connectId->setObjectName(QStringLiteral("connectId"));
        sizePolicy1.setHeightForWidth(connectId->sizePolicy().hasHeightForWidth());
        connectId->setSizePolicy(sizePolicy1);
        connectId->setMaximum(2147483647);

        layout->addWidget(connectId, 1, 1, 1, 1);

        buttonBox = new QDialogButtonBox(pqConnectIdDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        layout->addWidget(buttonBox, 2, 0, 1, 4);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        layout->addItem(horizontalSpacer, 1, 2, 1, 1);


        retranslateUi(pqConnectIdDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), pqConnectIdDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), pqConnectIdDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(pqConnectIdDialog);
    } // setupUi

    void retranslateUi(QDialog *pqConnectIdDialog)
    {
        pqConnectIdDialog->setWindowTitle(QApplication::translate("pqConnectIdDialog", "Connect ID", Q_NULLPTR));
        warning->setText(QApplication::translate("pqConnectIdDialog", "<html><head/><body><p>The server requires a connection ID and the provided one does not match.<br/>If you don't know what is the connection ID for this server, ask its administrator.</p></body></html>", Q_NULLPTR));
        label->setText(QApplication::translate("pqConnectIdDialog", "Connect ID :", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class pqConnectIdDialog: public Ui_pqConnectIdDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQCONNECTIDDIALOG_H
