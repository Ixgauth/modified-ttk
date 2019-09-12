/********************************************************************************
** Form generated from reading UI file 'pqSierraPlotToolsDataLoadManager.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQSIERRAPLOTTOOLSDATALOADMANAGER_H
#define UI_PQSIERRAPLOTTOOLSDATALOADMANAGER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include "pqFileChooserWidget.h"

QT_BEGIN_NAMESPACE

class Ui_pqSierraPlotToolsDataLoadManager
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label;
    pqFileChooserWidget *meshFile;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *pqSierraPlotToolsDataLoadManager)
    {
        if (pqSierraPlotToolsDataLoadManager->objectName().isEmpty())
            pqSierraPlotToolsDataLoadManager->setObjectName(QStringLiteral("pqSierraPlotToolsDataLoadManager"));
        pqSierraPlotToolsDataLoadManager->resize(396, 100);
        verticalLayout = new QVBoxLayout(pqSierraPlotToolsDataLoadManager);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(pqSierraPlotToolsDataLoadManager);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        meshFile = new pqFileChooserWidget(pqSierraPlotToolsDataLoadManager);
        meshFile->setObjectName(QStringLiteral("meshFile"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(meshFile->sizePolicy().hasHeightForWidth());
        meshFile->setSizePolicy(sizePolicy);

        gridLayout->addWidget(meshFile, 0, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        buttonBox = new QDialogButtonBox(pqSierraPlotToolsDataLoadManager);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(pqSierraPlotToolsDataLoadManager);
        QObject::connect(buttonBox, SIGNAL(accepted()), pqSierraPlotToolsDataLoadManager, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), pqSierraPlotToolsDataLoadManager, SLOT(reject()));

        QMetaObject::connectSlotsByName(pqSierraPlotToolsDataLoadManager);
    } // setupUi

    void retranslateUi(QDialog *pqSierraPlotToolsDataLoadManager)
    {
        pqSierraPlotToolsDataLoadManager->setWindowTitle(QApplication::translate("pqSierraPlotToolsDataLoadManager", "Sierra Plot Tools Data Load Manager", Q_NULLPTR));
        label->setText(QApplication::translate("pqSierraPlotToolsDataLoadManager", "Data File <font size=-2 color=\"red\">(required)</font>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class pqSierraPlotToolsDataLoadManager: public Ui_pqSierraPlotToolsDataLoadManager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQSIERRAPLOTTOOLSDATALOADMANAGER_H
