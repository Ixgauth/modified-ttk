/********************************************************************************
** Form generated from reading UI file 'pqCustomResolutionDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQCUSTOMRESOLUTIONDIALOG_H
#define UI_PQCUSTOMRESOLUTIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_CustomResolutionDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QLineEdit *resolutionX;
    QLabel *label_3;
    QLineEdit *resolutionY;
    QLabel *label_2;
    QDialogButtonBox *buttonBox;
    QSpacerItem *verticalSpacer;
    QLineEdit *resolutionLabel;
    QLabel *label_4;

    void setupUi(QDialog *CustomResolutionDialog)
    {
        if (CustomResolutionDialog->objectName().isEmpty())
            CustomResolutionDialog->setObjectName(QStringLiteral("CustomResolutionDialog"));
        CustomResolutionDialog->resize(323, 144);
        gridLayout = new QGridLayout(CustomResolutionDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(CustomResolutionDialog);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(2);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        resolutionX = new QLineEdit(CustomResolutionDialog);
        resolutionX->setObjectName(QStringLiteral("resolutionX"));

        horizontalLayout->addWidget(resolutionX);

        label_3 = new QLabel(CustomResolutionDialog);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);

        resolutionY = new QLineEdit(CustomResolutionDialog);
        resolutionY->setObjectName(QStringLiteral("resolutionY"));

        horizontalLayout->addWidget(resolutionY);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(2, 1);

        gridLayout->addLayout(horizontalLayout, 2, 1, 1, 1);

        label_2 = new QLabel(CustomResolutionDialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        buttonBox = new QDialogButtonBox(CustomResolutionDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 4, 0, 1, 2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 3, 0, 1, 1);

        resolutionLabel = new QLineEdit(CustomResolutionDialog);
        resolutionLabel->setObjectName(QStringLiteral("resolutionLabel"));

        gridLayout->addWidget(resolutionLabel, 1, 1, 1, 1);

        label_4 = new QLabel(CustomResolutionDialog);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 0, 0, 1, 2);

        QWidget::setTabOrder(resolutionLabel, resolutionX);
        QWidget::setTabOrder(resolutionX, resolutionY);
        QWidget::setTabOrder(resolutionY, buttonBox);

        retranslateUi(CustomResolutionDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), CustomResolutionDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), CustomResolutionDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(CustomResolutionDialog);
    } // setupUi

    void retranslateUi(QDialog *CustomResolutionDialog)
    {
        CustomResolutionDialog->setWindowTitle(QApplication::translate("CustomResolutionDialog", "Custom Resolution", Q_NULLPTR));
        label->setText(QApplication::translate("CustomResolutionDialog", "Label", Q_NULLPTR));
        resolutionX->setPlaceholderText(QApplication::translate("CustomResolutionDialog", "width", Q_NULLPTR));
        label_3->setText(QApplication::translate("CustomResolutionDialog", "x", Q_NULLPTR));
        resolutionY->setPlaceholderText(QApplication::translate("CustomResolutionDialog", "height", Q_NULLPTR));
        label_2->setText(QApplication::translate("CustomResolutionDialog", "Resolution", Q_NULLPTR));
        resolutionLabel->setPlaceholderText(QApplication::translate("CustomResolutionDialog", "(optional)", Q_NULLPTR));
        label_4->setText(QApplication::translate("CustomResolutionDialog", "<html><head/><body><p>Add custom resolution</p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CustomResolutionDialog: public Ui_CustomResolutionDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQCUSTOMRESOLUTIONDIALOG_H
