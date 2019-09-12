/********************************************************************************
** Form generated from reading UI file 'pqCustomViewpointButtonDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQCUSTOMVIEWPOINTBUTTONDIALOG_H
#define UI_PQCUSTOMVIEWPOINTBUTTONDIALOG_H

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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_pqCustomViewpointButtonDialog
{
public:
    QVBoxLayout *verticalLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *verticalLayout_4;
    QGridLayout *gridLayout;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_7;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *add;
    QPushButton *clearAll;
    QPushButton *importAll;
    QPushButton *exportAll;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *pqCustomViewpointButtonDialog)
    {
        if (pqCustomViewpointButtonDialog->objectName().isEmpty())
            pqCustomViewpointButtonDialog->setObjectName(QStringLiteral("pqCustomViewpointButtonDialog"));
        pqCustomViewpointButtonDialog->resize(437, 433);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pqCustomViewpointButtonDialog->sizePolicy().hasHeightForWidth());
        pqCustomViewpointButtonDialog->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(pqCustomViewpointButtonDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        scrollArea = new QScrollArea(pqCustomViewpointButtonDialog);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QStringLiteral("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 419, 388));
        verticalLayout_4 = new QVBoxLayout(scrollAreaWidgetContents_2);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_8 = new QLabel(scrollAreaWidgetContents_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        QFont font;
        font.setBold(true);
        font.setUnderline(true);
        font.setWeight(75);
        label_8->setFont(font);
        label_8->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_8, 0, 1, 1, 1);

        label_9 = new QLabel(scrollAreaWidgetContents_2);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setFont(font);
        label_9->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_9, 0, 2, 1, 1);

        label_7 = new QLabel(scrollAreaWidgetContents_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFont(font);
        label_7->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_7, 0, 0, 1, 1);


        verticalLayout_4->addLayout(gridLayout);

        verticalSpacer = new QSpacerItem(20, 17, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);

        scrollArea->setWidget(scrollAreaWidgetContents_2);

        verticalLayout->addWidget(scrollArea);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        add = new QPushButton(pqCustomViewpointButtonDialog);
        add->setObjectName(QStringLiteral("add"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/QtWidgets/Icons/pqPlus16.png"), QSize(), QIcon::Normal, QIcon::Off);
        add->setIcon(icon);

        horizontalLayout->addWidget(add);

        clearAll = new QPushButton(pqCustomViewpointButtonDialog);
        clearAll->setObjectName(QStringLiteral("clearAll"));

        horizontalLayout->addWidget(clearAll);

        importAll = new QPushButton(pqCustomViewpointButtonDialog);
        importAll->setObjectName(QStringLiteral("importAll"));

        horizontalLayout->addWidget(importAll);

        exportAll = new QPushButton(pqCustomViewpointButtonDialog);
        exportAll->setObjectName(QStringLiteral("exportAll"));

        horizontalLayout->addWidget(exportAll);


        verticalLayout->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(pqCustomViewpointButtonDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(pqCustomViewpointButtonDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), pqCustomViewpointButtonDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), pqCustomViewpointButtonDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(pqCustomViewpointButtonDialog);
    } // setupUi

    void retranslateUi(QDialog *pqCustomViewpointButtonDialog)
    {
        pqCustomViewpointButtonDialog->setWindowTitle(QApplication::translate("pqCustomViewpointButtonDialog", "Configure Custom Viewpoints", Q_NULLPTR));
        label_8->setText(QApplication::translate("pqCustomViewpointButtonDialog", "Viewpoint Name", Q_NULLPTR));
        label_9->setText(QApplication::translate("pqCustomViewpointButtonDialog", "Assign", Q_NULLPTR));
        label_7->setText(QApplication::translate("pqCustomViewpointButtonDialog", "Button", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        add->setToolTip(QApplication::translate("pqCustomViewpointButtonDialog", "Add new custom viewpoint", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        add->setText(QString());
        clearAll->setText(QApplication::translate("pqCustomViewpointButtonDialog", "Clear All", Q_NULLPTR));
        importAll->setText(QApplication::translate("pqCustomViewpointButtonDialog", "Import...", Q_NULLPTR));
        exportAll->setText(QApplication::translate("pqCustomViewpointButtonDialog", "Export...", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class pqCustomViewpointButtonDialog: public Ui_pqCustomViewpointButtonDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQCUSTOMVIEWPOINTBUTTONDIALOG_H
