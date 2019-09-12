/********************************************************************************
** Form generated from reading UI file 'pqTimeInspectorWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQTIMEINSPECTORWIDGET_H
#define UI_PQTIMEINSPECTORWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "pqAnimationTimeWidget.h"
#include "pqAnimationWidget.h"
#include "pqVCRToolbar.h"

QT_BEGIN_NAMESPACE

class Ui_TimeInspectorWidget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    pqVCRToolbar *VCR;
    pqAnimationTimeWidget *AnimationTimeWidget;
    QSpacerItem *horizontalSpacer_2;
    QFrame *line;
    pqAnimationWidget *AnimationWidget;

    void setupUi(QWidget *TimeInspectorWidget)
    {
        if (TimeInspectorWidget->objectName().isEmpty())
            TimeInspectorWidget->setObjectName(QStringLiteral("TimeInspectorWidget"));
        TimeInspectorWidget->resize(350, 466);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(TimeInspectorWidget->sizePolicy().hasHeightForWidth());
        TimeInspectorWidget->setSizePolicy(sizePolicy);
        TimeInspectorWidget->setMinimumSize(QSize(350, 0));
        verticalLayout = new QVBoxLayout(TimeInspectorWidget);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        VCR = new pqVCRToolbar(TimeInspectorWidget);
        VCR->setObjectName(QStringLiteral("VCR"));
        VCR->setMinimumSize(QSize(20, 0));

        horizontalLayout->addWidget(VCR);

        AnimationTimeWidget = new pqAnimationTimeWidget(TimeInspectorWidget);
        AnimationTimeWidget->setObjectName(QStringLiteral("AnimationTimeWidget"));
        AnimationTimeWidget->setMinimumSize(QSize(20, 0));

        horizontalLayout->addWidget(AnimationTimeWidget);

        horizontalSpacer_2 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        horizontalLayout->setStretch(2, 1);

        verticalLayout->addLayout(horizontalLayout);

        line = new QFrame(TimeInspectorWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        AnimationWidget = new pqAnimationWidget(TimeInspectorWidget);
        AnimationWidget->setObjectName(QStringLiteral("AnimationWidget"));
        sizePolicy.setHeightForWidth(AnimationWidget->sizePolicy().hasHeightForWidth());
        AnimationWidget->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(AnimationWidget);

        verticalLayout->setStretch(2, 1);

        retranslateUi(TimeInspectorWidget);

        QMetaObject::connectSlotsByName(TimeInspectorWidget);
    } // setupUi

    void retranslateUi(QWidget *TimeInspectorWidget)
    {
        TimeInspectorWidget->setWindowTitle(QApplication::translate("TimeInspectorWidget", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TimeInspectorWidget: public Ui_TimeInspectorWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQTIMEINSPECTORWIDGET_H
