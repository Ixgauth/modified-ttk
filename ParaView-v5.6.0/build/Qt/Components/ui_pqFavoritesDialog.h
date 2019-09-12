/********************************************************************************
** Form generated from reading UI file 'pqFavoritesDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQFAVORITESDIALOG_H
#define UI_PQFAVORITESDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeWidget>
#include "pqFavoritesTreeWidget.h"
#include "pqSearchBox.h"

QT_BEGIN_NAMESPACE

class Ui_pqFavoritesDialog
{
public:
    QGridLayout *gridLayout;
    QPushButton *removeFavorite;
    QGroupBox *filtersGroup;
    QGridLayout *gridLayout1;
    QTreeWidget *availableFilters;
    QSpacerItem *spacerItem;
    pqSearchBox *searchBox;
    QGroupBox *favoritesGroup;
    QGridLayout *gridLayout2;
    pqFavoritesTreeWidget *favorites;
    QPushButton *addCategory;
    QSpacerItem *spacerItem1;
    QDialogButtonBox *buttonBox;
    QPushButton *addFavorite;

    void setupUi(QDialog *pqFavoritesDialog)
    {
        if (pqFavoritesDialog->objectName().isEmpty())
            pqFavoritesDialog->setObjectName(QStringLiteral("pqFavoritesDialog"));
        pqFavoritesDialog->resize(800, 600);
        gridLayout = new QGridLayout(pqFavoritesDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        removeFavorite = new QPushButton(pqFavoritesDialog);
        removeFavorite->setObjectName(QStringLiteral("removeFavorite"));
        removeFavorite->setEnabled(true);

        gridLayout->addWidget(removeFavorite, 2, 1, 1, 1);

        filtersGroup = new QGroupBox(pqFavoritesDialog);
        filtersGroup->setObjectName(QStringLiteral("filtersGroup"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(filtersGroup->sizePolicy().hasHeightForWidth());
        filtersGroup->setSizePolicy(sizePolicy);
        gridLayout1 = new QGridLayout(filtersGroup);
        gridLayout1->setObjectName(QStringLiteral("gridLayout1"));
        gridLayout1->setContentsMargins(0, -1, -1, -1);
        availableFilters = new QTreeWidget(filtersGroup);
        availableFilters->setObjectName(QStringLiteral("availableFilters"));
        availableFilters->setContextMenuPolicy(Qt::NoContextMenu);
        availableFilters->setAcceptDrops(false);
        availableFilters->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        availableFilters->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        availableFilters->setDragEnabled(true);
        availableFilters->setDragDropMode(QAbstractItemView::DragOnly);
        availableFilters->setDefaultDropAction(Qt::CopyAction);
        availableFilters->setAlternatingRowColors(true);
        availableFilters->setSelectionMode(QAbstractItemView::ExtendedSelection);
        availableFilters->setRootIsDecorated(false);
        availableFilters->setSortingEnabled(true);

        gridLayout1->addWidget(availableFilters, 4, 2, 1, 1);

        spacerItem = new QSpacerItem(40, 1, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout1->addItem(spacerItem, 2, 2, 1, 1);

        searchBox = new pqSearchBox(filtersGroup);
        searchBox->setObjectName(QStringLiteral("searchBox"));
        searchBox->setProperty("settingKey", QVariant(QStringLiteral("showAdvancedProperties")));
        searchBox->setProperty("advancedSearchEnabled", QVariant(false));

        gridLayout1->addWidget(searchBox, 3, 2, 1, 1);


        gridLayout->addWidget(filtersGroup, 0, 0, 4, 1);

        favoritesGroup = new QGroupBox(pqFavoritesDialog);
        favoritesGroup->setObjectName(QStringLiteral("favoritesGroup"));
        gridLayout2 = new QGridLayout(favoritesGroup);
        gridLayout2->setObjectName(QStringLiteral("gridLayout2"));
        gridLayout2->setContentsMargins(-1, -1, 0, -1);
        favorites = new pqFavoritesTreeWidget(favoritesGroup);
        favorites->setObjectName(QStringLiteral("favorites"));
        favorites->setContextMenuPolicy(Qt::NoContextMenu);
        favorites->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        favorites->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        favorites->setDragEnabled(true);
        favorites->setDragDropMode(QAbstractItemView::DragDrop);
        favorites->setDefaultDropAction(Qt::MoveAction);
        favorites->setAlternatingRowColors(true);
        favorites->setSelectionMode(QAbstractItemView::ExtendedSelection);
        favorites->setRootIsDecorated(true);
        favorites->header()->setStretchLastSection(true);

        gridLayout2->addWidget(favorites, 0, 0, 2, 5);

        addCategory = new QPushButton(favoritesGroup);
        addCategory->setObjectName(QStringLiteral("addCategory"));

        gridLayout2->addWidget(addCategory, 3, 3, 1, 1);

        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout2->addItem(spacerItem1, 3, 2, 1, 1);


        gridLayout->addWidget(favoritesGroup, 0, 2, 4, 1);

        buttonBox = new QDialogButtonBox(pqFavoritesDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 6, 0, 1, 3);

        addFavorite = new QPushButton(pqFavoritesDialog);
        addFavorite->setObjectName(QStringLiteral("addFavorite"));
        addFavorite->setEnabled(true);

        gridLayout->addWidget(addFavorite, 1, 1, 1, 1);

        QWidget::setTabOrder(favorites, buttonBox);

        retranslateUi(pqFavoritesDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), pqFavoritesDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), pqFavoritesDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(pqFavoritesDialog);
    } // setupUi

    void retranslateUi(QDialog *pqFavoritesDialog)
    {
        pqFavoritesDialog->setWindowTitle(QApplication::translate("pqFavoritesDialog", "Favorites Manager", Q_NULLPTR));
        removeFavorite->setText(QApplication::translate("pqFavoritesDialog", "<<< Remove", Q_NULLPTR));
        filtersGroup->setTitle(QApplication::translate("pqFavoritesDialog", "Available Filters", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem = availableFilters->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("pqFavoritesDialog", "1", Q_NULLPTR));
        favoritesGroup->setTitle(QApplication::translate("pqFavoritesDialog", "Favorites", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem1 = favorites->headerItem();
        ___qtreewidgetitem1->setText(0, QApplication::translate("pqFavoritesDialog", "1", Q_NULLPTR));
        addCategory->setText(QApplication::translate("pqFavoritesDialog", "Add Category ...", Q_NULLPTR));
        addFavorite->setText(QApplication::translate("pqFavoritesDialog", "Add >>>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class pqFavoritesDialog: public Ui_pqFavoritesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQFAVORITESDIALOG_H
