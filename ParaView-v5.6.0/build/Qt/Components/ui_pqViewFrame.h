/********************************************************************************
** Form generated from reading UI file 'pqViewFrame.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQVIEWFRAME_H
#define UI_PQVIEWFRAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_pqViewFrame
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *TitleBar;
    QHBoxLayout *TitleBarLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *TitleLabel;
    QSpacerItem *horizontalSpacer_2;
    QFrame *CentralWidgetFrame;
    QVBoxLayout *CentralWidgetFrameLayout;

    void setupUi(QWidget *pqViewFrame)
    {
        if (pqViewFrame->objectName().isEmpty())
            pqViewFrame->setObjectName(QStringLiteral("pqViewFrame"));
        pqViewFrame->resize(400, 300);
        pqViewFrame->setFocusPolicy(Qt::ClickFocus);
        verticalLayout = new QVBoxLayout(pqViewFrame);
        verticalLayout->setSpacing(1);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        TitleBar = new QWidget(pqViewFrame);
        TitleBar->setObjectName(QStringLiteral("TitleBar"));
        TitleBar->setContextMenuPolicy(Qt::CustomContextMenu);
        TitleBar->setAcceptDrops(true);
        TitleBarLayout = new QHBoxLayout(TitleBar);
        TitleBarLayout->setSpacing(1);
        TitleBarLayout->setObjectName(QStringLiteral("TitleBarLayout"));
        TitleBarLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        TitleBarLayout->addItem(horizontalSpacer);

        TitleLabel = new QLabel(TitleBar);
        TitleLabel->setObjectName(QStringLiteral("TitleLabel"));
        TitleLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        TitleBarLayout->addWidget(TitleLabel);

        horizontalSpacer_2 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        TitleBarLayout->addItem(horizontalSpacer_2);


        verticalLayout->addWidget(TitleBar);

        CentralWidgetFrame = new QFrame(pqViewFrame);
        CentralWidgetFrame->setObjectName(QStringLiteral("CentralWidgetFrame"));
        CentralWidgetFrame->setFrameShape(QFrame::Box);
        CentralWidgetFrame->setFrameShadow(QFrame::Plain);
        CentralWidgetFrame->setLineWidth(2);
        CentralWidgetFrameLayout = new QVBoxLayout(CentralWidgetFrame);
        CentralWidgetFrameLayout->setSpacing(0);
        CentralWidgetFrameLayout->setObjectName(QStringLiteral("CentralWidgetFrameLayout"));
        CentralWidgetFrameLayout->setContentsMargins(1, 1, 1, 1);

        verticalLayout->addWidget(CentralWidgetFrame);

        verticalLayout->setStretch(1, 1);

        retranslateUi(pqViewFrame);

        QMetaObject::connectSlotsByName(pqViewFrame);
    } // setupUi

    void retranslateUi(QWidget *pqViewFrame)
    {
        pqViewFrame->setWindowTitle(QApplication::translate("pqViewFrame", "Form", Q_NULLPTR));
        TitleLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class pqViewFrame: public Ui_pqViewFrame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQVIEWFRAME_H
