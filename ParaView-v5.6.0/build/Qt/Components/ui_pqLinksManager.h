/********************************************************************************
** Form generated from reading UI file 'pqLinksManager.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQLINKSMANAGER_H
#define UI_PQLINKSMANAGER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_pqLinksManager
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *vboxLayout;
    QPushButton *addButton;
    QPushButton *editButton;
    QPushButton *removeButton;
    QSpacerItem *spacerItem;
    QDialogButtonBox *buttonBox;
    QTreeView *treeView;

    void setupUi(QDialog *pqLinksManager)
    {
        if (pqLinksManager->objectName().isEmpty())
            pqLinksManager->setObjectName(QStringLiteral("pqLinksManager"));
        pqLinksManager->resize(567, 313);
        gridLayout = new QGridLayout(pqLinksManager);
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        vboxLayout = new QVBoxLayout();
#ifndef Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout->setContentsMargins(0, 0, 0, 0);
#endif
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        addButton = new QPushButton(pqLinksManager);
        addButton->setObjectName(QStringLiteral("addButton"));

        vboxLayout->addWidget(addButton);

        editButton = new QPushButton(pqLinksManager);
        editButton->setObjectName(QStringLiteral("editButton"));

        vboxLayout->addWidget(editButton);

        removeButton = new QPushButton(pqLinksManager);
        removeButton->setObjectName(QStringLiteral("removeButton"));

        vboxLayout->addWidget(removeButton);

        spacerItem = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem);


        gridLayout->addLayout(vboxLayout, 0, 1, 1, 1);

        buttonBox = new QDialogButtonBox(pqLinksManager);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        gridLayout->addWidget(buttonBox, 1, 0, 1, 2);

        treeView = new QTreeView(pqLinksManager);
        treeView->setObjectName(QStringLiteral("treeView"));
        treeView->setAlternatingRowColors(true);
        treeView->setSelectionMode(QAbstractItemView::ExtendedSelection);
        treeView->setRootIsDecorated(false);
        treeView->setItemsExpandable(false);

        gridLayout->addWidget(treeView, 0, 0, 1, 1);

        QWidget::setTabOrder(addButton, editButton);
        QWidget::setTabOrder(editButton, removeButton);
        QWidget::setTabOrder(removeButton, buttonBox);

        retranslateUi(pqLinksManager);
        QObject::connect(buttonBox, SIGNAL(accepted()), pqLinksManager, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), pqLinksManager, SLOT(reject()));

        QMetaObject::connectSlotsByName(pqLinksManager);
    } // setupUi

    void retranslateUi(QDialog *pqLinksManager)
    {
        pqLinksManager->setWindowTitle(QApplication::translate("pqLinksManager", "Dialog", Q_NULLPTR));
        addButton->setText(QApplication::translate("pqLinksManager", "Add...", Q_NULLPTR));
        editButton->setText(QApplication::translate("pqLinksManager", "Edit...", Q_NULLPTR));
        removeButton->setText(QApplication::translate("pqLinksManager", "Remove", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class pqLinksManager: public Ui_pqLinksManager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQLINKSMANAGER_H
