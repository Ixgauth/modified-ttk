/********************************************************************************
** Form generated from reading UI file 'pqCinemaConfiguration.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQCINEMACONFIGURATION_H
#define UI_PQCINEMACONFIGURATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "pqCinemaTrackSelection.h"
#include "pqExportViewSelection.h"

QT_BEGIN_NAMESPACE

class Ui_CinemaConfiguration
{
public:
    QHBoxLayout *horizontalLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    pqExportViewSelection *wViewSelection;
    pqCinemaTrackSelection *wTrackSelection;

    void setupUi(QWidget *CinemaConfiguration)
    {
        if (CinemaConfiguration->objectName().isEmpty())
            CinemaConfiguration->setObjectName(QStringLiteral("CinemaConfiguration"));
        CinemaConfiguration->resize(638, 752);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(CinemaConfiguration->sizePolicy().hasHeightForWidth());
        CinemaConfiguration->setSizePolicy(sizePolicy);
        CinemaConfiguration->setMinimumSize(QSize(0, 0));
        horizontalLayout = new QHBoxLayout(CinemaConfiguration);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        scrollArea = new QScrollArea(CinemaConfiguration);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setMinimumSize(QSize(620, 0));
        scrollArea->setWidgetResizable(true);
        scrollArea->setAlignment(Qt::AlignCenter);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 618, 732));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        wViewSelection = new pqExportViewSelection(scrollAreaWidgetContents);
        wViewSelection->setObjectName(QStringLiteral("wViewSelection"));
        sizePolicy.setHeightForWidth(wViewSelection->sizePolicy().hasHeightForWidth());
        wViewSelection->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(wViewSelection);

        wTrackSelection = new pqCinemaTrackSelection(scrollAreaWidgetContents);
        wTrackSelection->setObjectName(QStringLiteral("wTrackSelection"));
        sizePolicy.setHeightForWidth(wTrackSelection->sizePolicy().hasHeightForWidth());
        wTrackSelection->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(wTrackSelection);

        scrollArea->setWidget(scrollAreaWidgetContents);

        horizontalLayout->addWidget(scrollArea);


        retranslateUi(CinemaConfiguration);

        QMetaObject::connectSlotsByName(CinemaConfiguration);
    } // setupUi

    void retranslateUi(QWidget *CinemaConfiguration)
    {
        CinemaConfiguration->setWindowTitle(QApplication::translate("CinemaConfiguration", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CinemaConfiguration: public Ui_CinemaConfiguration {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQCINEMACONFIGURATION_H
