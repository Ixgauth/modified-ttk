/********************************************************************************
** Form generated from reading UI file 'pqKeyFrameEditor.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQKEYFRAMEEDITOR_H
#define UI_PQKEYFRAMEEDITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_pqKeyFrameEditor
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QTableView *tableView;
    QPushButton *pbNew;
    QPushButton *pbDelete;
    QPushButton *pbDeleteAll;
    QSpacerItem *spacerItem;

    void setupUi(QWidget *pqKeyFrameEditor)
    {
        if (pqKeyFrameEditor->objectName().isEmpty())
            pqKeyFrameEditor->setObjectName(QStringLiteral("pqKeyFrameEditor"));
        pqKeyFrameEditor->resize(395, 270);
        gridLayout = new QGridLayout(pqKeyFrameEditor);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(6);
        gridLayout->setVerticalSpacing(6);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(pqKeyFrameEditor);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 2);

        tableView = new QTableView(pqKeyFrameEditor);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView->setSelectionBehavior(QAbstractItemView::SelectRows);

        gridLayout->addWidget(tableView, 1, 0, 4, 1);

        pbNew = new QPushButton(pqKeyFrameEditor);
        pbNew->setObjectName(QStringLiteral("pbNew"));

        gridLayout->addWidget(pbNew, 1, 1, 1, 1);

        pbDelete = new QPushButton(pqKeyFrameEditor);
        pbDelete->setObjectName(QStringLiteral("pbDelete"));

        gridLayout->addWidget(pbDelete, 2, 1, 1, 1);

        pbDeleteAll = new QPushButton(pqKeyFrameEditor);
        pbDeleteAll->setObjectName(QStringLiteral("pbDeleteAll"));

        gridLayout->addWidget(pbDeleteAll, 3, 1, 1, 1);

        spacerItem = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem, 4, 1, 1, 1);


        retranslateUi(pqKeyFrameEditor);

        QMetaObject::connectSlotsByName(pqKeyFrameEditor);
    } // setupUi

    void retranslateUi(QWidget *pqKeyFrameEditor)
    {
        pqKeyFrameEditor->setWindowTitle(QApplication::translate("pqKeyFrameEditor", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("pqKeyFrameEditor", "Label", Q_NULLPTR));
        pbNew->setText(QApplication::translate("pqKeyFrameEditor", "New", Q_NULLPTR));
        pbDelete->setText(QApplication::translate("pqKeyFrameEditor", "Delete", Q_NULLPTR));
        pbDeleteAll->setText(QApplication::translate("pqKeyFrameEditor", "Delete All", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class pqKeyFrameEditor: public Ui_pqKeyFrameEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQKEYFRAMEEDITOR_H
