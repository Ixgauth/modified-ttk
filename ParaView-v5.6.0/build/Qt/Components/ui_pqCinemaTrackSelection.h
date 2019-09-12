/********************************************************************************
** Form generated from reading UI file 'pqCinemaTrackSelection.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQCINEMATRACKSELECTION_H
#define UI_PQCINEMATRACKSELECTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "pqPipelineBrowserWidget.h"
#include "pqTreeView.h"

QT_BEGIN_NAMESPACE

class Ui_CinemaTrackSelection
{
public:
    QHBoxLayout *horizontalLayout_4;
    QGroupBox *gbTrackSelection;
    QVBoxLayout *verticalLayout_3;
    QWidget *wNewSelection;
    QHBoxLayout *horizontalLayout_2;
    pqPipelineBrowserWidget *wPipelineBrowser;
    QTabWidget *tabProxyProperties;
    QWidget *wTabArrays;
    QVBoxLayout *verticalLayout;
    pqTreeView *viewArrayPicker;
    QWidget *wTabValues;
    QHBoxLayout *horizontalLayout_3;

    void setupUi(QWidget *CinemaTrackSelection)
    {
        if (CinemaTrackSelection->objectName().isEmpty())
            CinemaTrackSelection->setObjectName(QStringLiteral("CinemaTrackSelection"));
        CinemaTrackSelection->resize(601, 295);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(CinemaTrackSelection->sizePolicy().hasHeightForWidth());
        CinemaTrackSelection->setSizePolicy(sizePolicy);
        horizontalLayout_4 = new QHBoxLayout(CinemaTrackSelection);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        gbTrackSelection = new QGroupBox(CinemaTrackSelection);
        gbTrackSelection->setObjectName(QStringLiteral("gbTrackSelection"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(gbTrackSelection->sizePolicy().hasHeightForWidth());
        gbTrackSelection->setSizePolicy(sizePolicy1);
        gbTrackSelection->setCheckable(false);
        gbTrackSelection->setChecked(false);
        verticalLayout_3 = new QVBoxLayout(gbTrackSelection);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        wNewSelection = new QWidget(gbTrackSelection);
        wNewSelection->setObjectName(QStringLiteral("wNewSelection"));
        horizontalLayout_2 = new QHBoxLayout(wNewSelection);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        wPipelineBrowser = new pqPipelineBrowserWidget(wNewSelection);
        wPipelineBrowser->setObjectName(QStringLiteral("wPipelineBrowser"));
        sizePolicy1.setHeightForWidth(wPipelineBrowser->sizePolicy().hasHeightForWidth());
        wPipelineBrowser->setSizePolicy(sizePolicy1);
        wPipelineBrowser->setMinimumSize(QSize(170, 0));
        wPipelineBrowser->setMaximumSize(QSize(170, 16777215));

        horizontalLayout_2->addWidget(wPipelineBrowser);

        tabProxyProperties = new QTabWidget(wNewSelection);
        tabProxyProperties->setObjectName(QStringLiteral("tabProxyProperties"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(tabProxyProperties->sizePolicy().hasHeightForWidth());
        tabProxyProperties->setSizePolicy(sizePolicy2);
        tabProxyProperties->setMinimumSize(QSize(350, 200));
        tabProxyProperties->setMaximumSize(QSize(16777215, 16777215));
        tabProxyProperties->setTabPosition(QTabWidget::North);
        wTabArrays = new QWidget();
        wTabArrays->setObjectName(QStringLiteral("wTabArrays"));
        verticalLayout = new QVBoxLayout(wTabArrays);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        viewArrayPicker = new pqTreeView(wTabArrays);
        viewArrayPicker->setObjectName(QStringLiteral("viewArrayPicker"));
        sizePolicy1.setHeightForWidth(viewArrayPicker->sizePolicy().hasHeightForWidth());
        viewArrayPicker->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(viewArrayPicker);

        tabProxyProperties->addTab(wTabArrays, QString());
        wTabValues = new QWidget();
        wTabValues->setObjectName(QStringLiteral("wTabValues"));
        horizontalLayout_3 = new QHBoxLayout(wTabValues);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        tabProxyProperties->addTab(wTabValues, QString());

        horizontalLayout_2->addWidget(tabProxyProperties);


        verticalLayout_3->addWidget(wNewSelection);


        horizontalLayout_4->addWidget(gbTrackSelection);


        retranslateUi(CinemaTrackSelection);

        tabProxyProperties->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(CinemaTrackSelection);
    } // setupUi

    void retranslateUi(QWidget *CinemaTrackSelection)
    {
        CinemaTrackSelection->setWindowTitle(QApplication::translate("CinemaTrackSelection", "Form", Q_NULLPTR));
        gbTrackSelection->setTitle(QApplication::translate("CinemaTrackSelection", "Cinema Track Selection", Q_NULLPTR));
        tabProxyProperties->setTabText(tabProxyProperties->indexOf(wTabArrays), QApplication::translate("CinemaTrackSelection", "Arrays", Q_NULLPTR));
        tabProxyProperties->setTabText(tabProxyProperties->indexOf(wTabValues), QApplication::translate("CinemaTrackSelection", "Filter Values", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CinemaTrackSelection: public Ui_CinemaTrackSelection {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQCINEMATRACKSELECTION_H
