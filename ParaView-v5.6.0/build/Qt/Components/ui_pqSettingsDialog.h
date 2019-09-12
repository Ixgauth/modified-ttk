/********************************************************************************
** Form generated from reading UI file 'pqSettingsDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQSETTINGSDIALOG_H
#define UI_PQSETTINGSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTabBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "pqSearchBox.h"

QT_BEGIN_NAMESPACE

class Ui_SettingsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTabBar *tabBar;
    QHBoxLayout *SearchBoxLayout;
    pqSearchBox *SearchBox;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QWidget *page_2;
    QLabel *restartRequiredLabel;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SettingsDialog)
    {
        if (SettingsDialog->objectName().isEmpty())
            SettingsDialog->setObjectName(QStringLiteral("SettingsDialog"));
        SettingsDialog->resize(540, 645);
        SettingsDialog->setSizeGripEnabled(true);
        verticalLayout = new QVBoxLayout(SettingsDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tabBar = new QTabBar(SettingsDialog);
        tabBar->setObjectName(QStringLiteral("tabBar"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tabBar->sizePolicy().hasHeightForWidth());
        tabBar->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(tabBar);

        SearchBoxLayout = new QHBoxLayout();
        SearchBoxLayout->setSpacing(2);
        SearchBoxLayout->setObjectName(QStringLiteral("SearchBoxLayout"));
        SearchBox = new pqSearchBox(SettingsDialog);
        SearchBox->setObjectName(QStringLiteral("SearchBox"));
        SearchBox->setProperty("settingKey", QVariant(QStringLiteral("pqSettingsDialog/showAdvancedProperties")));
        SearchBox->setProperty("advancedSearchEnabled", QVariant(true));

        SearchBoxLayout->addWidget(SearchBox);


        verticalLayout->addLayout(SearchBoxLayout);

        stackedWidget = new QStackedWidget(SettingsDialog);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setFrameShape(QFrame::NoFrame);
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        stackedWidget->addWidget(page_2);

        verticalLayout->addWidget(stackedWidget);

        restartRequiredLabel = new QLabel(SettingsDialog);
        restartRequiredLabel->setObjectName(QStringLiteral("restartRequiredLabel"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        restartRequiredLabel->setFont(font);
        restartRequiredLabel->setWordWrap(true);

        verticalLayout->addWidget(restartRequiredLabel);

        buttonBox = new QDialogButtonBox(SettingsDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Cancel|QDialogButtonBox::Ok|QDialogButtonBox::Reset|QDialogButtonBox::RestoreDefaults);
        buttonBox->setCenterButtons(false);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(SettingsDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), SettingsDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SettingsDialog, SLOT(reject()));

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(SettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *SettingsDialog)
    {
        SettingsDialog->setWindowTitle(QApplication::translate("SettingsDialog", "Settings", Q_NULLPTR));
        restartRequiredLabel->setText(QApplication::translate("SettingsDialog", "* Restart required for some settings to take effect", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SettingsDialog: public Ui_SettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQSETTINGSDIALOG_H
