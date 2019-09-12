/********************************************************************************
** Form generated from reading UI file 'pqYoungsMaterialPropertyWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQYOUNGSMATERIALPROPERTYWIDGET_H
#define UI_PQYOUNGSMATERIALPROPERTYWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_YoungsMaterialPropertyWidget
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QComboBox *OrderingArrays;
    QLabel *label_2;
    QComboBox *NormalArrays;

    void setupUi(QWidget *YoungsMaterialPropertyWidget)
    {
        if (YoungsMaterialPropertyWidget->objectName().isEmpty())
            YoungsMaterialPropertyWidget->setObjectName(QStringLiteral("YoungsMaterialPropertyWidget"));
        YoungsMaterialPropertyWidget->resize(182, 56);
        gridLayout = new QGridLayout(YoungsMaterialPropertyWidget);
        gridLayout->setSpacing(2);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(YoungsMaterialPropertyWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        OrderingArrays = new QComboBox(YoungsMaterialPropertyWidget);
        OrderingArrays->setObjectName(QStringLiteral("OrderingArrays"));
        OrderingArrays->setEnabled(false);

        gridLayout->addWidget(OrderingArrays, 0, 1, 1, 1);

        label_2 = new QLabel(YoungsMaterialPropertyWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        NormalArrays = new QComboBox(YoungsMaterialPropertyWidget);
        NormalArrays->setObjectName(QStringLiteral("NormalArrays"));
        NormalArrays->setEnabled(false);

        gridLayout->addWidget(NormalArrays, 1, 1, 1, 1);

        gridLayout->setColumnStretch(1, 1);

        retranslateUi(YoungsMaterialPropertyWidget);

        QMetaObject::connectSlotsByName(YoungsMaterialPropertyWidget);
    } // setupUi

    void retranslateUi(QWidget *YoungsMaterialPropertyWidget)
    {
        YoungsMaterialPropertyWidget->setWindowTitle(QApplication::translate("YoungsMaterialPropertyWidget", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("YoungsMaterialPropertyWidget", "Ordering Array", Q_NULLPTR));
        label_2->setText(QApplication::translate("YoungsMaterialPropertyWidget", "Normal Array", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class YoungsMaterialPropertyWidget: public Ui_YoungsMaterialPropertyWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQYOUNGSMATERIALPROPERTYWIDGET_H
