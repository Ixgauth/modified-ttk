/********************************************************************************
** Form generated from reading UI file 'pqSLACDataLoadManager.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQSLACDATALOADMANAGER_H
#define UI_PQSLACDATALOADMANAGER_H

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

class Ui_pqSLACDataLoadManager
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label;
    pqFileChooserWidget *meshFile;
    QLabel *label_2;
    pqFileChooserWidget *modeFile;
    QLabel *label_3;
    pqFileChooserWidget *particlesFile;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *pqSLACDataLoadManager)
    {
        if (pqSLACDataLoadManager->objectName().isEmpty())
            pqSLACDataLoadManager->setObjectName(QStringLiteral("pqSLACDataLoadManager"));
        pqSLACDataLoadManager->resize(396, 179);
        verticalLayout = new QVBoxLayout(pqSLACDataLoadManager);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(pqSLACDataLoadManager);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        meshFile = new pqFileChooserWidget(pqSLACDataLoadManager);
        meshFile->setObjectName(QStringLiteral("meshFile"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(meshFile->sizePolicy().hasHeightForWidth());
        meshFile->setSizePolicy(sizePolicy);

        gridLayout->addWidget(meshFile, 0, 1, 1, 1);

        label_2 = new QLabel(pqSLACDataLoadManager);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        modeFile = new pqFileChooserWidget(pqSLACDataLoadManager);
        modeFile->setObjectName(QStringLiteral("modeFile"));
        sizePolicy.setHeightForWidth(modeFile->sizePolicy().hasHeightForWidth());
        modeFile->setSizePolicy(sizePolicy);

        gridLayout->addWidget(modeFile, 1, 1, 1, 1);

        label_3 = new QLabel(pqSLACDataLoadManager);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        particlesFile = new pqFileChooserWidget(pqSLACDataLoadManager);
        particlesFile->setObjectName(QStringLiteral("particlesFile"));
        sizePolicy.setHeightForWidth(particlesFile->sizePolicy().hasHeightForWidth());
        particlesFile->setSizePolicy(sizePolicy);

        gridLayout->addWidget(particlesFile, 2, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        buttonBox = new QDialogButtonBox(pqSLACDataLoadManager);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(pqSLACDataLoadManager);
        QObject::connect(buttonBox, SIGNAL(accepted()), pqSLACDataLoadManager, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), pqSLACDataLoadManager, SLOT(reject()));

        QMetaObject::connectSlotsByName(pqSLACDataLoadManager);
    } // setupUi

    void retranslateUi(QDialog *pqSLACDataLoadManager)
    {
        pqSLACDataLoadManager->setWindowTitle(QApplication::translate("pqSLACDataLoadManager", "SLAC Data Load Manager", Q_NULLPTR));
        label->setText(QApplication::translate("pqSLACDataLoadManager", "Mesh File <font size=-2 color=\"red\">(required)</font>", Q_NULLPTR));
        label_2->setText(QApplication::translate("pqSLACDataLoadManager", "Mode File <font size=-2>(optional)</font>", Q_NULLPTR));
        label_3->setText(QApplication::translate("pqSLACDataLoadManager", "Particles File <font size=-2>(optional)</font>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class pqSLACDataLoadManager: public Ui_pqSLACDataLoadManager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQSLACDATALOADMANAGER_H
