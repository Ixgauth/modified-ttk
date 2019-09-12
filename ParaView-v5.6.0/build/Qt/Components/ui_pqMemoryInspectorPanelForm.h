/********************************************************************************
** Form generated from reading UI file 'pqMemoryInspectorPanelForm.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQMEMORYINSPECTORPANELFORM_H
#define UI_PQMEMORYINSPECTORPANELFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_pqMemoryInspectorPanelForm
{
public:
    QVBoxLayout *verticalLayout_2;
    QSplitter *splitter;
    QTreeWidget *configView;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QCheckBox *autoUpdate;
    QPushButton *updateMemUse;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *pqMemoryInspectorPanelForm)
    {
        if (pqMemoryInspectorPanelForm->objectName().isEmpty())
            pqMemoryInspectorPanelForm->setObjectName(QStringLiteral("pqMemoryInspectorPanelForm"));
        pqMemoryInspectorPanelForm->resize(318, 293);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pqMemoryInspectorPanelForm->sizePolicy().hasHeightForWidth());
        pqMemoryInspectorPanelForm->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(pqMemoryInspectorPanelForm);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        splitter = new QSplitter(pqMemoryInspectorPanelForm);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Vertical);
        configView = new QTreeWidget(splitter);
        configView->headerItem()->setText(0, QString());
        configView->setObjectName(QStringLiteral("configView"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(configView->sizePolicy().hasHeightForWidth());
        configView->setSizePolicy(sizePolicy1);
        configView->setMinimumSize(QSize(300, 150));
        configView->setHeaderHidden(true);
        splitter->addWidget(configView);
        widget = new QWidget(splitter);
        widget->setObjectName(QStringLiteral("widget"));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        autoUpdate = new QCheckBox(widget);
        autoUpdate->setObjectName(QStringLiteral("autoUpdate"));
        autoUpdate->setChecked(true);

        horizontalLayout->addWidget(autoUpdate);

        updateMemUse = new QPushButton(widget);
        updateMemUse->setObjectName(QStringLiteral("updateMemUse"));

        horizontalLayout->addWidget(updateMemUse);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        splitter->addWidget(widget);

        verticalLayout_2->addWidget(splitter);


        retranslateUi(pqMemoryInspectorPanelForm);

        QMetaObject::connectSlotsByName(pqMemoryInspectorPanelForm);
    } // setupUi

    void retranslateUi(QWidget *pqMemoryInspectorPanelForm)
    {
        pqMemoryInspectorPanelForm->setWindowTitle(QApplication::translate("pqMemoryInspectorPanelForm", "Form", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        pqMemoryInspectorPanelForm->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        configView->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        autoUpdate->setText(QApplication::translate("pqMemoryInspectorPanelForm", "Auto-update", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        updateMemUse->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        updateMemUse->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class pqMemoryInspectorPanelForm: public Ui_pqMemoryInspectorPanelForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQMEMORYINSPECTORPANELFORM_H
