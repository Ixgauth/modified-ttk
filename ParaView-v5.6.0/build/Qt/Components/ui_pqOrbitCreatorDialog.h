/********************************************************************************
** Form generated from reading UI file 'pqOrbitCreatorDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQORBITCREATORDIALOG_H
#define UI_PQORBITCREATORDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "pqLineEdit.h"

QT_BEGIN_NAMESPACE

class Ui_OrbitCreatorDialog
{
public:
    QVBoxLayout *vboxLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label;
    pqLineEdit *center0;
    pqLineEdit *center1;
    pqLineEdit *center2;
    QLabel *normalLabel;
    pqLineEdit *normal0;
    pqLineEdit *normal1;
    pqLineEdit *normal2;
    QLabel *label_2;
    pqLineEdit *origin0;
    QSpacerItem *spacerItem;
    QLineEdit *origin1;
    QLineEdit *origin2;
    QHBoxLayout *hboxLayout;
    QPushButton *resetBounds;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *OrbitCreatorDialog)
    {
        if (OrbitCreatorDialog->objectName().isEmpty())
            OrbitCreatorDialog->setObjectName(QStringLiteral("OrbitCreatorDialog"));
        OrbitCreatorDialog->resize(309, 210);
        vboxLayout = new QVBoxLayout(OrbitCreatorDialog);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        groupBox = new QGroupBox(OrbitCreatorDialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        center0 = new pqLineEdit(groupBox);
        center0->setObjectName(QStringLiteral("center0"));

        gridLayout->addWidget(center0, 0, 1, 1, 1);

        center1 = new pqLineEdit(groupBox);
        center1->setObjectName(QStringLiteral("center1"));

        gridLayout->addWidget(center1, 0, 2, 1, 1);

        center2 = new pqLineEdit(groupBox);
        center2->setObjectName(QStringLiteral("center2"));

        gridLayout->addWidget(center2, 0, 3, 1, 1);

        normalLabel = new QLabel(groupBox);
        normalLabel->setObjectName(QStringLiteral("normalLabel"));

        gridLayout->addWidget(normalLabel, 1, 0, 1, 1);

        normal0 = new pqLineEdit(groupBox);
        normal0->setObjectName(QStringLiteral("normal0"));

        gridLayout->addWidget(normal0, 1, 1, 1, 1);

        normal1 = new pqLineEdit(groupBox);
        normal1->setObjectName(QStringLiteral("normal1"));

        gridLayout->addWidget(normal1, 1, 2, 1, 1);

        normal2 = new pqLineEdit(groupBox);
        normal2->setObjectName(QStringLiteral("normal2"));

        gridLayout->addWidget(normal2, 1, 3, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        origin0 = new pqLineEdit(groupBox);
        origin0->setObjectName(QStringLiteral("origin0"));

        gridLayout->addWidget(origin0, 2, 1, 1, 1);

        spacerItem = new QSpacerItem(20, 16, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem, 3, 2, 1, 1);

        origin1 = new QLineEdit(groupBox);
        origin1->setObjectName(QStringLiteral("origin1"));

        gridLayout->addWidget(origin1, 2, 2, 1, 1);

        origin2 = new QLineEdit(groupBox);
        origin2->setObjectName(QStringLiteral("origin2"));

        gridLayout->addWidget(origin2, 2, 3, 1, 1);


        vboxLayout->addWidget(groupBox);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        resetBounds = new QPushButton(OrbitCreatorDialog);
        resetBounds->setObjectName(QStringLiteral("resetBounds"));

        hboxLayout->addWidget(resetBounds);

        buttonBox = new QDialogButtonBox(OrbitCreatorDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        hboxLayout->addWidget(buttonBox);


        vboxLayout->addLayout(hboxLayout);


        retranslateUi(OrbitCreatorDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), OrbitCreatorDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), OrbitCreatorDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(OrbitCreatorDialog);
    } // setupUi

    void retranslateUi(QDialog *OrbitCreatorDialog)
    {
        OrbitCreatorDialog->setWindowTitle(QApplication::translate("OrbitCreatorDialog", "Create Orbit", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("OrbitCreatorDialog", "Orbit Parameters", Q_NULLPTR));
        label->setText(QApplication::translate("OrbitCreatorDialog", "Center", Q_NULLPTR));
        normalLabel->setText(QApplication::translate("OrbitCreatorDialog", "Normal", Q_NULLPTR));
        label_2->setText(QApplication::translate("OrbitCreatorDialog", "Origin", Q_NULLPTR));
        resetBounds->setText(QApplication::translate("OrbitCreatorDialog", "Reset Bounds", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class OrbitCreatorDialog: public Ui_OrbitCreatorDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQORBITCREATORDIALOG_H
