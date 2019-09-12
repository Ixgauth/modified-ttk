/********************************************************************************
** Form generated from reading UI file 'pqSelectionLinkDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQSELECTIONLINKDIALOG_H
#define UI_PQSELECTIONLINKDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_SelectionLinkDialog
{
public:
    QGridLayout *gridLayout;
    QRadioButton *convertToIndicesRadioButton;
    QLabel *convertToIndicesLabel;
    QRadioButton *selectionSharingRadioButton;
    QLabel *selectionSharingLabel;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SelectionLinkDialog)
    {
        if (SelectionLinkDialog->objectName().isEmpty())
            SelectionLinkDialog->setObjectName(QStringLiteral("SelectionLinkDialog"));
        gridLayout = new QGridLayout(SelectionLinkDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        convertToIndicesRadioButton = new QRadioButton(SelectionLinkDialog);
        convertToIndicesRadioButton->setObjectName(QStringLiteral("convertToIndicesRadioButton"));
        convertToIndicesRadioButton->setChecked(true);

        gridLayout->addWidget(convertToIndicesRadioButton, 0, 0, 1, 1);

        convertToIndicesLabel = new QLabel(SelectionLinkDialog);
        convertToIndicesLabel->setObjectName(QStringLiteral("convertToIndicesLabel"));
        convertToIndicesLabel->setTextFormat(Qt::RichText);
        convertToIndicesLabel->setWordWrap(false);

        gridLayout->addWidget(convertToIndicesLabel, 0, 1, 1, 1);

        selectionSharingRadioButton = new QRadioButton(SelectionLinkDialog);
        selectionSharingRadioButton->setObjectName(QStringLiteral("selectionSharingRadioButton"));

        gridLayout->addWidget(selectionSharingRadioButton, 1, 0, 1, 1);

        selectionSharingLabel = new QLabel(SelectionLinkDialog);
        selectionSharingLabel->setObjectName(QStringLiteral("selectionSharingLabel"));
        selectionSharingLabel->setTextFormat(Qt::RichText);
        selectionSharingLabel->setWordWrap(false);

        gridLayout->addWidget(selectionSharingLabel, 1, 1, 1, 1);

        buttonBox = new QDialogButtonBox(SelectionLinkDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 2, 0, 1, 2);


        retranslateUi(SelectionLinkDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), SelectionLinkDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SelectionLinkDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(SelectionLinkDialog);
    } // setupUi

    void retranslateUi(QDialog *SelectionLinkDialog)
    {
        SelectionLinkDialog->setWindowTitle(QApplication::translate("SelectionLinkDialog", "Selection Link Mode", Q_NULLPTR));
        convertToIndicesLabel->setText(QApplication::translate("SelectionLinkDialog", "<b>Link Selected Elements:</b> link selection by evaluating the<br/>selection on the data source and select corresponding<br/>elements based on their indices on other linked data sources.", Q_NULLPTR));
        selectionSharingLabel->setText(QApplication::translate("SelectionLinkDialog", "<b>Link Selection:</b> link selection by sharing the actual selection<br/>between the data sources. The selection is then evaluated for<br/>each linked sources separately.", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SelectionLinkDialog: public Ui_SelectionLinkDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQSELECTIONLINKDIALOG_H
