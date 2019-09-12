/********************************************************************************
** Form generated from reading UI file 'pqPluginDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQPLUGINDIALOG_H
#define UI_PQPLUGINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include "pqPluginTreeWidget.h"

QT_BEGIN_NAMESPACE

class Ui_pqPluginDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *HelpText;
    QGroupBox *remoteGroup;
    QGridLayout *gridLayout1;
    QSpacerItem *spacerItem;
    pqPluginTreeWidget *remotePlugins;
    QPushButton *loadRemote;
    QPushButton *removeRemote;
    QPushButton *loadSelected_Remote;
    QGroupBox *localGroup;
    QGridLayout *gridLayout2;
    QSpacerItem *spacerItem1;
    pqPluginTreeWidget *localPlugins;
    QPushButton *removeLocal;
    QPushButton *loadLocal;
    QPushButton *loadSelected_Local;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *pqPluginDialog)
    {
        if (pqPluginDialog->objectName().isEmpty())
            pqPluginDialog->setObjectName(QStringLiteral("pqPluginDialog"));
        pqPluginDialog->resize(800, 600);
        gridLayout = new QGridLayout(pqPluginDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        HelpText = new QLabel(pqPluginDialog);
        HelpText->setObjectName(QStringLiteral("HelpText"));
        HelpText->setWordWrap(true);

        gridLayout->addWidget(HelpText, 0, 0, 1, 2);

        remoteGroup = new QGroupBox(pqPluginDialog);
        remoteGroup->setObjectName(QStringLiteral("remoteGroup"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(remoteGroup->sizePolicy().hasHeightForWidth());
        remoteGroup->setSizePolicy(sizePolicy);
        gridLayout1 = new QGridLayout(remoteGroup);
        gridLayout1->setObjectName(QStringLiteral("gridLayout1"));
        gridLayout1->setContentsMargins(0, -1, -1, -1);
        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout1->addItem(spacerItem, 2, 2, 1, 1);

        remotePlugins = new pqPluginTreeWidget(remoteGroup);
        remotePlugins->setObjectName(QStringLiteral("remotePlugins"));
        remotePlugins->setContextMenuPolicy(Qt::NoContextMenu);
        remotePlugins->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        remotePlugins->setSelectionMode(QAbstractItemView::ExtendedSelection);

        gridLayout1->addWidget(remotePlugins, 0, 0, 2, 5);

        loadRemote = new QPushButton(remoteGroup);
        loadRemote->setObjectName(QStringLiteral("loadRemote"));

        gridLayout1->addWidget(loadRemote, 2, 0, 1, 1);

        removeRemote = new QPushButton(remoteGroup);
        removeRemote->setObjectName(QStringLiteral("removeRemote"));
        removeRemote->setEnabled(false);

        gridLayout1->addWidget(removeRemote, 2, 4, 1, 1);

        loadSelected_Remote = new QPushButton(remoteGroup);
        loadSelected_Remote->setObjectName(QStringLiteral("loadSelected_Remote"));
        loadSelected_Remote->setEnabled(false);

        gridLayout1->addWidget(loadSelected_Remote, 2, 1, 1, 1);


        gridLayout->addWidget(remoteGroup, 1, 0, 1, 1);

        localGroup = new QGroupBox(pqPluginDialog);
        localGroup->setObjectName(QStringLiteral("localGroup"));
        gridLayout2 = new QGridLayout(localGroup);
        gridLayout2->setObjectName(QStringLiteral("gridLayout2"));
        gridLayout2->setContentsMargins(-1, -1, 0, -1);
        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout2->addItem(spacerItem1, 3, 2, 1, 1);

        localPlugins = new pqPluginTreeWidget(localGroup);
        localPlugins->setObjectName(QStringLiteral("localPlugins"));
        localPlugins->setContextMenuPolicy(Qt::NoContextMenu);
        localPlugins->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        localPlugins->setSelectionMode(QAbstractItemView::ExtendedSelection);

        gridLayout2->addWidget(localPlugins, 0, 0, 2, 4);

        removeLocal = new QPushButton(localGroup);
        removeLocal->setObjectName(QStringLiteral("removeLocal"));
        removeLocal->setEnabled(false);

        gridLayout2->addWidget(removeLocal, 3, 3, 1, 1);

        loadLocal = new QPushButton(localGroup);
        loadLocal->setObjectName(QStringLiteral("loadLocal"));

        gridLayout2->addWidget(loadLocal, 3, 0, 1, 1);

        loadSelected_Local = new QPushButton(localGroup);
        loadSelected_Local->setObjectName(QStringLiteral("loadSelected_Local"));
        loadSelected_Local->setEnabled(false);

        gridLayout2->addWidget(loadSelected_Local, 3, 1, 1, 1);


        gridLayout->addWidget(localGroup, 1, 1, 1, 1);

        buttonBox = new QDialogButtonBox(pqPluginDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        gridLayout->addWidget(buttonBox, 2, 0, 1, 2);

        QWidget::setTabOrder(remotePlugins, loadRemote);
        QWidget::setTabOrder(loadRemote, loadSelected_Remote);
        QWidget::setTabOrder(loadSelected_Remote, removeRemote);
        QWidget::setTabOrder(removeRemote, localPlugins);
        QWidget::setTabOrder(localPlugins, loadLocal);
        QWidget::setTabOrder(loadLocal, loadSelected_Local);
        QWidget::setTabOrder(loadSelected_Local, removeLocal);
        QWidget::setTabOrder(removeLocal, buttonBox);

        retranslateUi(pqPluginDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), pqPluginDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), pqPluginDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(pqPluginDialog);
    } // setupUi

    void retranslateUi(QDialog *pqPluginDialog)
    {
        pqPluginDialog->setWindowTitle(QApplication::translate("pqPluginDialog", "Plugin Manager", Q_NULLPTR));
        HelpText->setText(QApplication::translate("pqPluginDialog", "TextLabel", Q_NULLPTR));
        remoteGroup->setTitle(QApplication::translate("pqPluginDialog", "Remote Plugins", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem = remotePlugins->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("pqPluginDialog", "1", Q_NULLPTR));
        loadRemote->setText(QApplication::translate("pqPluginDialog", "Load New ...", Q_NULLPTR));
        removeRemote->setText(QApplication::translate("pqPluginDialog", "Remove", Q_NULLPTR));
        loadSelected_Remote->setText(QApplication::translate("pqPluginDialog", "Load Selected", Q_NULLPTR));
        localGroup->setTitle(QApplication::translate("pqPluginDialog", "Local Plugins", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem1 = localPlugins->headerItem();
        ___qtreewidgetitem1->setText(0, QApplication::translate("pqPluginDialog", "1", Q_NULLPTR));
        removeLocal->setText(QApplication::translate("pqPluginDialog", "Remove", Q_NULLPTR));
        loadLocal->setText(QApplication::translate("pqPluginDialog", "Load New ...", Q_NULLPTR));
        loadSelected_Local->setText(QApplication::translate("pqPluginDialog", "Load Selected", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class pqPluginDialog: public Ui_pqPluginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQPLUGINDIALOG_H
