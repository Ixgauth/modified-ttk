/********************************************************************************
** Form generated from reading UI file 'pqFindDataCreateSelectionFrame.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQFINDDATACREATESELECTIONFRAME_H
#define UI_PQFINDDATACREATESELECTIONFRAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "pqOutputPortComboBox.h"
#include "pqQueryClauseWidget.h"

QT_BEGIN_NAMESPACE

class Ui_FindDataCreateSelectionFrame
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *selectionType;
    QLabel *label_4;
    pqOutputPortComboBox *source;
    pqQueryClauseWidget *queryClauseWidget;
    QPushButton *runQuery;

    void setupUi(QWidget *FindDataCreateSelectionFrame)
    {
        if (FindDataCreateSelectionFrame->objectName().isEmpty())
            FindDataCreateSelectionFrame->setObjectName(QStringLiteral("FindDataCreateSelectionFrame"));
        FindDataCreateSelectionFrame->resize(450, 96);
        verticalLayout = new QVBoxLayout(FindDataCreateSelectionFrame);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(FindDataCreateSelectionFrame);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        selectionType = new QComboBox(FindDataCreateSelectionFrame);
        selectionType->setObjectName(QStringLiteral("selectionType"));
        selectionType->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        horizontalLayout->addWidget(selectionType);

        label_4 = new QLabel(FindDataCreateSelectionFrame);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout->addWidget(label_4);

        source = new pqOutputPortComboBox(FindDataCreateSelectionFrame);
        source->setObjectName(QStringLiteral("source"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(source->sizePolicy().hasHeightForWidth());
        source->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(source);


        verticalLayout->addLayout(horizontalLayout);

        queryClauseWidget = new pqQueryClauseWidget(FindDataCreateSelectionFrame);
        queryClauseWidget->setObjectName(QStringLiteral("queryClauseWidget"));
        queryClauseWidget->setEnabled(false);
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(queryClauseWidget->sizePolicy().hasHeightForWidth());
        queryClauseWidget->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(queryClauseWidget);

        runQuery = new QPushButton(FindDataCreateSelectionFrame);
        runQuery->setObjectName(QStringLiteral("runQuery"));
        runQuery->setEnabled(false);

        verticalLayout->addWidget(runQuery);


        retranslateUi(FindDataCreateSelectionFrame);

        QMetaObject::connectSlotsByName(FindDataCreateSelectionFrame);
    } // setupUi

    void retranslateUi(QWidget *FindDataCreateSelectionFrame)
    {
        FindDataCreateSelectionFrame->setWindowTitle(QApplication::translate("FindDataCreateSelectionFrame", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("FindDataCreateSelectionFrame", "Find", Q_NULLPTR));
        label_4->setText(QApplication::translate("FindDataCreateSelectionFrame", "from", Q_NULLPTR));
        runQuery->setText(QApplication::translate("FindDataCreateSelectionFrame", "Run Selection Query", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class FindDataCreateSelectionFrame: public Ui_FindDataCreateSelectionFrame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQFINDDATACREATESELECTIONFRAME_H
