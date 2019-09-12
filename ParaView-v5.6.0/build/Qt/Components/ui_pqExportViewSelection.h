/********************************************************************************
** Form generated from reading UI file 'pqExportViewSelection.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQEXPORTVIEWSELECTION_H
#define UI_PQEXPORTVIEWSELECTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ExportViewSelection
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QStackedWidget *swViews;
    QHBoxLayout *horizontalLayout;
    QPushButton *pbPrevious;
    QPushButton *pbNext;

    void setupUi(QWidget *ExportViewSelection)
    {
        if (ExportViewSelection->objectName().isEmpty())
            ExportViewSelection->setObjectName(QStringLiteral("ExportViewSelection"));
        ExportViewSelection->resize(518, 315);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ExportViewSelection->sizePolicy().hasHeightForWidth());
        ExportViewSelection->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(ExportViewSelection);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBox = new QGroupBox(ExportViewSelection);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, -1, 0, 9);
        swViews = new QStackedWidget(groupBox);
        swViews->setObjectName(QStringLiteral("swViews"));
        sizePolicy.setHeightForWidth(swViews->sizePolicy().hasHeightForWidth());
        swViews->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(swViews);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pbPrevious = new QPushButton(groupBox);
        pbPrevious->setObjectName(QStringLiteral("pbPrevious"));
        pbPrevious->setEnabled(false);
        pbPrevious->setMaximumSize(QSize(200, 16777215));

        horizontalLayout->addWidget(pbPrevious);

        pbNext = new QPushButton(groupBox);
        pbNext->setObjectName(QStringLiteral("pbNext"));
        pbNext->setEnabled(false);
        pbNext->setMaximumSize(QSize(200, 16777215));

        horizontalLayout->addWidget(pbNext);


        verticalLayout_2->addLayout(horizontalLayout);


        verticalLayout->addWidget(groupBox);


        retranslateUi(ExportViewSelection);

        swViews->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(ExportViewSelection);
    } // setupUi

    void retranslateUi(QWidget *ExportViewSelection)
    {
        ExportViewSelection->setWindowTitle(QApplication::translate("ExportViewSelection", "Form", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("ExportViewSelection", "View Selection", Q_NULLPTR));
        pbPrevious->setText(QApplication::translate("ExportViewSelection", "Previous View", Q_NULLPTR));
        pbNext->setText(QApplication::translate("ExportViewSelection", "Next View", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ExportViewSelection: public Ui_ExportViewSelection {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQEXPORTVIEWSELECTION_H
