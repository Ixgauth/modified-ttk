/********************************************************************************
** Form generated from reading UI file 'pqColorAnnotationsPropertyWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQCOLORANNOTATIONSPROPERTYWIDGET_H
#define UI_PQCOLORANNOTATIONSPROPERTYWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "pqExpandableTableView.h"

QT_BEGIN_NAMESPACE

class Ui_ColorAnnotationsPropertyWidget
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QToolButton *Add;
    QToolButton *Remove;
    QToolButton *AddActive;
    QToolButton *AddActiveFromVisible;
    QToolButton *ChoosePreset;
    QToolButton *SaveAsPreset;
    QSpacerItem *verticalSpacer;
    QToolButton *DeleteAll;
    pqExpandableTableView *AnnotationsTable;
    QCheckBox *EnableOpacityMapping;

    void setupUi(QWidget *ColorAnnotationsPropertyWidget)
    {
        if (ColorAnnotationsPropertyWidget->objectName().isEmpty())
            ColorAnnotationsPropertyWidget->setObjectName(QStringLiteral("ColorAnnotationsPropertyWidget"));
        ColorAnnotationsPropertyWidget->resize(358, 230);
        gridLayout = new QGridLayout(ColorAnnotationsPropertyWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        Add = new QToolButton(ColorAnnotationsPropertyWidget);
        Add->setObjectName(QStringLiteral("Add"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/QtWidgets/Icons/pqPlus16.png"), QSize(), QIcon::Normal, QIcon::Off);
        Add->setIcon(icon);

        verticalLayout->addWidget(Add);

        Remove = new QToolButton(ColorAnnotationsPropertyWidget);
        Remove->setObjectName(QStringLiteral("Remove"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/QtWidgets/Icons/pqMinus16.png"), QSize(), QIcon::Normal, QIcon::Off);
        Remove->setIcon(icon1);

        verticalLayout->addWidget(Remove);

        AddActive = new QToolButton(ColorAnnotationsPropertyWidget);
        AddActive->setObjectName(QStringLiteral("AddActive"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/pqWidgets/Icons/pqFilter16.png"), QSize(), QIcon::Normal, QIcon::Off);
        AddActive->setIcon(icon2);

        verticalLayout->addWidget(AddActive);

        AddActiveFromVisible = new QToolButton(ColorAnnotationsPropertyWidget);
        AddActiveFromVisible->setObjectName(QStringLiteral("AddActiveFromVisible"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/pqWidgets/Icons/pqFilterEyeball16.png"), QSize(), QIcon::Normal, QIcon::Off);
        AddActiveFromVisible->setIcon(icon3);

        verticalLayout->addWidget(AddActiveFromVisible);

        ChoosePreset = new QToolButton(ColorAnnotationsPropertyWidget);
        ChoosePreset->setObjectName(QStringLiteral("ChoosePreset"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/pqWidgets/Icons/pqFavorites16.png"), QSize(), QIcon::Normal, QIcon::Off);
        ChoosePreset->setIcon(icon4);

        verticalLayout->addWidget(ChoosePreset);

        SaveAsPreset = new QToolButton(ColorAnnotationsPropertyWidget);
        SaveAsPreset->setObjectName(QStringLiteral("SaveAsPreset"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/pqWidgets/Icons/pqSave16.png"), QSize(), QIcon::Normal, QIcon::Off);
        SaveAsPreset->setIcon(icon5);

        verticalLayout->addWidget(SaveAsPreset);

        verticalSpacer = new QSpacerItem(20, 1, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        DeleteAll = new QToolButton(ColorAnnotationsPropertyWidget);
        DeleteAll->setObjectName(QStringLiteral("DeleteAll"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/QtWidgets/Icons/pqDelete16.png"), QSize(), QIcon::Normal, QIcon::Off);
        DeleteAll->setIcon(icon6);

        verticalLayout->addWidget(DeleteAll);


        gridLayout->addLayout(verticalLayout, 0, 1, 1, 1);

        AnnotationsTable = new pqExpandableTableView(ColorAnnotationsPropertyWidget);
        AnnotationsTable->setObjectName(QStringLiteral("AnnotationsTable"));
        AnnotationsTable->setDragDropMode(QAbstractItemView::InternalMove);
        AnnotationsTable->setDefaultDropAction(Qt::MoveAction);
        AnnotationsTable->setAlternatingRowColors(true);
        AnnotationsTable->setSelectionBehavior(QAbstractItemView::SelectRows);
        AnnotationsTable->setProperty("maximumRowCountBeforeScrolling", QVariant(10));
        AnnotationsTable->verticalHeader()->setVisible(false);

        gridLayout->addWidget(AnnotationsTable, 0, 0, 1, 1);

        EnableOpacityMapping = new QCheckBox(ColorAnnotationsPropertyWidget);
        EnableOpacityMapping->setObjectName(QStringLiteral("EnableOpacityMapping"));

        gridLayout->addWidget(EnableOpacityMapping, 1, 0, 1, 2);


        retranslateUi(ColorAnnotationsPropertyWidget);

        QMetaObject::connectSlotsByName(ColorAnnotationsPropertyWidget);
    } // setupUi

    void retranslateUi(QWidget *ColorAnnotationsPropertyWidget)
    {
        ColorAnnotationsPropertyWidget->setWindowTitle(QApplication::translate("ColorAnnotationsPropertyWidget", "Form", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Add->setToolTip(QApplication::translate("ColorAnnotationsPropertyWidget", "Add new entry", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        Add->setText(QApplication::translate("ColorAnnotationsPropertyWidget", "...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Remove->setToolTip(QApplication::translate("ColorAnnotationsPropertyWidget", "Remove current entry", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        Remove->setText(QApplication::translate("ColorAnnotationsPropertyWidget", "...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        AddActive->setToolTip(QApplication::translate("ColorAnnotationsPropertyWidget", "Add active values from selected source", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        AddActive->setText(QApplication::translate("ColorAnnotationsPropertyWidget", "...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        AddActiveFromVisible->setToolTip(QApplication::translate("ColorAnnotationsPropertyWidget", "Add active values from visible pipeline objects", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        AddActiveFromVisible->setText(QApplication::translate("ColorAnnotationsPropertyWidget", "...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ChoosePreset->setToolTip(QApplication::translate("ColorAnnotationsPropertyWidget", "Choose preset", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        ChoosePreset->setText(QString());
#ifndef QT_NO_TOOLTIP
        SaveAsPreset->setToolTip(QApplication::translate("ColorAnnotationsPropertyWidget", "Save to preset", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        SaveAsPreset->setText(QString());
#ifndef QT_NO_TOOLTIP
        DeleteAll->setToolTip(QApplication::translate("ColorAnnotationsPropertyWidget", "Delete all annotations", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        DeleteAll->setText(QApplication::translate("ColorAnnotationsPropertyWidget", "...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        EnableOpacityMapping->setToolTip(QApplication::translate("ColorAnnotationsPropertyWidget", "<html><head/><body><p>When checked, the opacity function is used to render translucent surfaces.</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        EnableOpacityMapping->setText(QApplication::translate("ColorAnnotationsPropertyWidget", "Enable opacity mapping for surfaces", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ColorAnnotationsPropertyWidget: public Ui_ColorAnnotationsPropertyWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQCOLORANNOTATIONSPROPERTYWIDGET_H
