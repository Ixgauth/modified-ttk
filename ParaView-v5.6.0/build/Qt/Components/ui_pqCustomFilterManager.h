/********************************************************************************
** Form generated from reading UI file 'pqCustomFilterManager.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQCUSTOMFILTERMANAGER_H
#define UI_PQCUSTOMFILTERMANAGER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_pqCustomFilterManager
{
public:
    QGridLayout *gridLayout;
    QListView *CustomFilterList;
    QSpacerItem *spacerItem;
    QPushButton *CloseButton;
    QPushButton *RemoveButton;
    QPushButton *ExportButton;
    QPushButton *ImportButton;

    void setupUi(QDialog *pqCustomFilterManager)
    {
        if (pqCustomFilterManager->objectName().isEmpty())
            pqCustomFilterManager->setObjectName(QStringLiteral("pqCustomFilterManager"));
        pqCustomFilterManager->resize(418, 235);
        gridLayout = new QGridLayout(pqCustomFilterManager);
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        CustomFilterList = new QListView(pqCustomFilterManager);
        CustomFilterList->setObjectName(QStringLiteral("CustomFilterList"));
        CustomFilterList->setSelectionMode(QAbstractItemView::ExtendedSelection);
        CustomFilterList->setProperty("isWrapping", QVariant(true));
        CustomFilterList->setResizeMode(QListView::Adjust);

        gridLayout->addWidget(CustomFilterList, 0, 0, 5, 1);

        spacerItem = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem, 3, 1, 1, 1);

        CloseButton = new QPushButton(pqCustomFilterManager);
        CloseButton->setObjectName(QStringLiteral("CloseButton"));

        gridLayout->addWidget(CloseButton, 4, 1, 1, 1);

        RemoveButton = new QPushButton(pqCustomFilterManager);
        RemoveButton->setObjectName(QStringLiteral("RemoveButton"));

        gridLayout->addWidget(RemoveButton, 2, 1, 1, 1);

        ExportButton = new QPushButton(pqCustomFilterManager);
        ExportButton->setObjectName(QStringLiteral("ExportButton"));

        gridLayout->addWidget(ExportButton, 1, 1, 1, 1);

        ImportButton = new QPushButton(pqCustomFilterManager);
        ImportButton->setObjectName(QStringLiteral("ImportButton"));

        gridLayout->addWidget(ImportButton, 0, 1, 1, 1);

        QWidget::setTabOrder(CustomFilterList, ImportButton);
        QWidget::setTabOrder(ImportButton, ExportButton);
        QWidget::setTabOrder(ExportButton, RemoveButton);
        QWidget::setTabOrder(RemoveButton, CloseButton);

        retranslateUi(pqCustomFilterManager);

        CloseButton->setDefault(true);


        QMetaObject::connectSlotsByName(pqCustomFilterManager);
    } // setupUi

    void retranslateUi(QDialog *pqCustomFilterManager)
    {
        pqCustomFilterManager->setWindowTitle(QApplication::translate("pqCustomFilterManager", "Custom Filter Manager", Q_NULLPTR));
#ifndef QT_NO_WHATSTHIS
        CustomFilterList->setWhatsThis(QApplication::translate("pqCustomFilterManager", "Displays the list of registered custom filter definitions.", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        CloseButton->setText(QApplication::translate("pqCustomFilterManager", "&Close", Q_NULLPTR));
#ifndef QT_NO_WHATSTHIS
        RemoveButton->setWhatsThis(QApplication::translate("pqCustomFilterManager", "Removes the selected custom filter definitions.", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        RemoveButton->setText(QApplication::translate("pqCustomFilterManager", "&Remove", Q_NULLPTR));
#ifndef QT_NO_WHATSTHIS
        ExportButton->setWhatsThis(QApplication::translate("pqCustomFilterManager", "Exports the selected custom filter definitions to a file.", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        ExportButton->setText(QApplication::translate("pqCustomFilterManager", "&Export", Q_NULLPTR));
#ifndef QT_NO_WHATSTHIS
        ImportButton->setWhatsThis(QApplication::translate("pqCustomFilterManager", "Imports custom filter definitions from a file.", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        ImportButton->setText(QApplication::translate("pqCustomFilterManager", "&Import", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class pqCustomFilterManager: public Ui_pqCustomFilterManager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQCUSTOMFILTERMANAGER_H
