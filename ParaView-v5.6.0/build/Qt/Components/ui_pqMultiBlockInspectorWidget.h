/********************************************************************************
** Form generated from reading UI file 'pqMultiBlockInspectorWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQMULTIBLOCKINSPECTORWIDGET_H
#define UI_PQMULTIBLOCKINSPECTORWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "pqTreeView.h"

QT_BEGIN_NAMESPACE

class Ui_MultiBlockInspectorWidget
{
public:
    QVBoxLayout *verticalLayout;
    pqTreeView *treeView;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *showHints;
    QLabel *label;

    void setupUi(QWidget *MultiBlockInspectorWidget)
    {
        if (MultiBlockInspectorWidget->objectName().isEmpty())
            MultiBlockInspectorWidget->setObjectName(QStringLiteral("MultiBlockInspectorWidget"));
        MultiBlockInspectorWidget->resize(480, 640);
        verticalLayout = new QVBoxLayout(MultiBlockInspectorWidget);
        verticalLayout->setSpacing(2);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        treeView = new pqTreeView(MultiBlockInspectorWidget);
        treeView->setObjectName(QStringLiteral("treeView"));
        treeView->setContextMenuPolicy(Qt::CustomContextMenu);
        treeView->setSelectionMode(QAbstractItemView::ExtendedSelection);
        treeView->setUniformRowHeights(true);
        treeView->setHeaderHidden(true);
        treeView->setExpandsOnDoubleClick(false);

        verticalLayout->addWidget(treeView);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        showHints = new QPushButton(MultiBlockInspectorWidget);
        showHints->setObjectName(QStringLiteral("showHints"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/pqWidgets/Icons/pqHelp32.png"), QSize(), QIcon::Normal, QIcon::Off);
        showHints->setIcon(icon);
        showHints->setCheckable(true);
        showHints->setChecked(true);

        horizontalLayout->addWidget(showHints);


        verticalLayout->addLayout(horizontalLayout);

        label = new QLabel(MultiBlockInspectorWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setTextFormat(Qt::RichText);
        label->setWordWrap(true);

        verticalLayout->addWidget(label);


        retranslateUi(MultiBlockInspectorWidget);
        QObject::connect(showHints, SIGNAL(toggled(bool)), label, SLOT(setVisible(bool)));

        QMetaObject::connectSlotsByName(MultiBlockInspectorWidget);
    } // setupUi

    void retranslateUi(QWidget *MultiBlockInspectorWidget)
    {
        MultiBlockInspectorWidget->setWindowTitle(QApplication::translate("MultiBlockInspectorWidget", "Multi-block Inspector", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        showHints->setToolTip(QApplication::translate("MultiBlockInspectorWidget", "Show/Hide legend", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        showHints->setText(QString());
        label->setText(QApplication::translate("MultiBlockInspectorWidget", "<html><head/><body><p><span style=\" font-weight:600;\">Color Legend:</span><br/><img src=\":/pqWidgets/Icons/no_color.png\"/> - using coloring parameters from display<br/><img src=\":/pqWidgets/Icons/inherited_color.png\"/> - color is inherited from a parent node or color map<br/><img src=\":/pqWidgets/Icons/explicit_color.png\"/> - color explicitly specified for this node</p><p><span style=\" font-weight:600;\">Opacity Legend:</span><br/><img src=\":/pqWidgets/Icons/no_opacity.png\"/> - using opacity parameters from display<br/><img src=\":/pqWidgets/Icons/inherited_opacity.png\"/> - opacity is inherited from a parent node<br/><img src=\":/pqWidgets/Icons/explicit_opacity.png\"/> - opacity explicitly specified for this node</p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MultiBlockInspectorWidget: public Ui_MultiBlockInspectorWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQMULTIBLOCKINSPECTORWIDGET_H
