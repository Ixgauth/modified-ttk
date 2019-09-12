/********************************************************************************
** Form generated from reading UI file 'pqFileDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQFILEDIALOG_H
#define UI_PQFILEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "pqFileDialog.h"

QT_BEGIN_NAMESPACE

class Ui_pqFileDialog
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *hboxLayout;
    QLabel *label_3;
    QComboBox *Parents;
    QToolButton *NavigateBack;
    QToolButton *NavigateForward;
    QToolButton *NavigateUp;
    QToolButton *CreateFolder;
    QToolButton *ShowDetail;
    QSplitter *mainSplitter;
    QSplitter *splitter;
    QListView *Favorites;
    QListView *Recent;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QTreeView *Files;
    QGridLayout *gridLayout1;
    QLabel *label_2;
    QLineEdit *FileName;
    QLabel *label;
    QPushButton *OK;
    QPushButton *Cancel;
    QPushButton *Navigate;
    pqFileComboBox *FileType;

    void setupUi(QDialog *pqFileDialog)
    {
        if (pqFileDialog->objectName().isEmpty())
            pqFileDialog->setObjectName(QStringLiteral("pqFileDialog"));
        pqFileDialog->resize(683, 402);
        gridLayout = new QGridLayout(pqFileDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(pqFileDialog);
        label_3->setObjectName(QStringLiteral("label_3"));

        hboxLayout->addWidget(label_3);

        Parents = new QComboBox(pqFileDialog);
        Parents->setObjectName(QStringLiteral("Parents"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Parents->sizePolicy().hasHeightForWidth());
        Parents->setSizePolicy(sizePolicy);

        hboxLayout->addWidget(Parents);

        NavigateBack = new QToolButton(pqFileDialog);
        NavigateBack->setObjectName(QStringLiteral("NavigateBack"));
        NavigateBack->setAutoRaise(true);

        hboxLayout->addWidget(NavigateBack);

        NavigateForward = new QToolButton(pqFileDialog);
        NavigateForward->setObjectName(QStringLiteral("NavigateForward"));
        NavigateForward->setAutoRaise(true);

        hboxLayout->addWidget(NavigateForward);

        NavigateUp = new QToolButton(pqFileDialog);
        NavigateUp->setObjectName(QStringLiteral("NavigateUp"));
        NavigateUp->setAutoRaise(true);

        hboxLayout->addWidget(NavigateUp);

        CreateFolder = new QToolButton(pqFileDialog);
        CreateFolder->setObjectName(QStringLiteral("CreateFolder"));
        CreateFolder->setAutoRaise(true);

        hboxLayout->addWidget(CreateFolder);

        ShowDetail = new QToolButton(pqFileDialog);
        ShowDetail->setObjectName(QStringLiteral("ShowDetail"));
        ShowDetail->setCheckable(true);

        hboxLayout->addWidget(ShowDetail);

        hboxLayout->setStretch(1, 1);

        gridLayout->addLayout(hboxLayout, 0, 0, 1, 1);

        mainSplitter = new QSplitter(pqFileDialog);
        mainSplitter->setObjectName(QStringLiteral("mainSplitter"));
        mainSplitter->setOrientation(Qt::Horizontal);
        splitter = new QSplitter(mainSplitter);
        splitter->setObjectName(QStringLiteral("splitter"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(splitter->sizePolicy().hasHeightForWidth());
        splitter->setSizePolicy(sizePolicy1);
        splitter->setOrientation(Qt::Vertical);
        Favorites = new QListView(splitter);
        Favorites->setObjectName(QStringLiteral("Favorites"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(1);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(Favorites->sizePolicy().hasHeightForWidth());
        Favorites->setSizePolicy(sizePolicy2);
        Favorites->setMinimumSize(QSize(100, 0));
        Favorites->setSelectionMode(QAbstractItemView::NoSelection);
        Favorites->setSelectionBehavior(QAbstractItemView::SelectRows);
        splitter->addWidget(Favorites);
        Recent = new QListView(splitter);
        Recent->setObjectName(QStringLiteral("Recent"));
        sizePolicy2.setHeightForWidth(Recent->sizePolicy().hasHeightForWidth());
        Recent->setSizePolicy(sizePolicy2);
        Recent->setMinimumSize(QSize(100, 0));
        Recent->setSelectionMode(QAbstractItemView::NoSelection);
        Recent->setSelectionBehavior(QAbstractItemView::SelectRows);
        splitter->addWidget(Recent);
        mainSplitter->addWidget(splitter);
        layoutWidget = new QWidget(mainSplitter);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        Files = new QTreeView(layoutWidget);
        Files->setObjectName(QStringLiteral("Files"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(2);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(Files->sizePolicy().hasHeightForWidth());
        Files->setSizePolicy(sizePolicy3);

        verticalLayout->addWidget(Files);

        gridLayout1 = new QGridLayout();
        gridLayout1->setSpacing(6);
        gridLayout1->setObjectName(QStringLiteral("gridLayout1"));
        gridLayout1->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout1->addWidget(label_2, 0, 0, 1, 1);

        FileName = new QLineEdit(layoutWidget);
        FileName->setObjectName(QStringLiteral("FileName"));

        gridLayout1->addWidget(FileName, 0, 1, 1, 1);

        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout1->addWidget(label, 1, 0, 1, 1);

        OK = new QPushButton(layoutWidget);
        OK->setObjectName(QStringLiteral("OK"));

        gridLayout1->addWidget(OK, 0, 3, 1, 1);

        Cancel = new QPushButton(layoutWidget);
        Cancel->setObjectName(QStringLiteral("Cancel"));

        gridLayout1->addWidget(Cancel, 1, 3, 1, 1);

        Navigate = new QPushButton(layoutWidget);
        Navigate->setObjectName(QStringLiteral("Navigate"));

        gridLayout1->addWidget(Navigate, 0, 2, 1, 1);

        FileType = new pqFileComboBox(layoutWidget);
        FileType->setObjectName(QStringLiteral("FileType"));
        FileType->setSizeAdjustPolicy(QComboBox::AdjustToMinimumContentsLength);

        gridLayout1->addWidget(FileType, 1, 1, 1, 2);


        verticalLayout->addLayout(gridLayout1);

        mainSplitter->addWidget(layoutWidget);

        gridLayout->addWidget(mainSplitter, 1, 0, 1, 1);

        QWidget::setTabOrder(FileName, FileType);
        QWidget::setTabOrder(FileType, OK);
        QWidget::setTabOrder(OK, Cancel);
        QWidget::setTabOrder(Cancel, Parents);
        QWidget::setTabOrder(Parents, NavigateBack);
        QWidget::setTabOrder(NavigateBack, NavigateForward);
        QWidget::setTabOrder(NavigateForward, NavigateUp);
        QWidget::setTabOrder(NavigateUp, CreateFolder);
        QWidget::setTabOrder(CreateFolder, Favorites);
        QWidget::setTabOrder(Favorites, Files);

        retranslateUi(pqFileDialog);
        QObject::connect(OK, SIGNAL(clicked()), pqFileDialog, SLOT(accept()));
        QObject::connect(Cancel, SIGNAL(clicked()), pqFileDialog, SLOT(reject()));

        OK->setDefault(true);


        QMetaObject::connectSlotsByName(pqFileDialog);
    } // setupUi

    void retranslateUi(QDialog *pqFileDialog)
    {
        pqFileDialog->setWindowTitle(QApplication::translate("pqFileDialog", "Dialog", Q_NULLPTR));
        label_3->setText(QApplication::translate("pqFileDialog", "Look in:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        NavigateBack->setToolTip(QApplication::translate("pqFileDialog", "Navigate Back", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        NavigateBack->setText(QString());
#ifndef QT_NO_TOOLTIP
        NavigateForward->setToolTip(QApplication::translate("pqFileDialog", "Navigate Forward", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        NavigateForward->setText(QString());
#ifndef QT_NO_TOOLTIP
        NavigateUp->setToolTip(QApplication::translate("pqFileDialog", "Navigate Up", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        NavigateUp->setText(QString());
#ifndef QT_NO_TOOLTIP
        CreateFolder->setToolTip(QApplication::translate("pqFileDialog", "Create New Folder", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        CreateFolder->setText(QString());
#ifndef QT_NO_TOOLTIP
        ShowDetail->setToolTip(QApplication::translate("pqFileDialog", "Toggle file details. This may affect performance for large directories on certain file systems.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        ShowDetail->setText(QString());
        label_2->setText(QApplication::translate("pqFileDialog", "File name:", Q_NULLPTR));
        label->setText(QApplication::translate("pqFileDialog", "Files of type:", Q_NULLPTR));
        OK->setText(QApplication::translate("pqFileDialog", "OK", Q_NULLPTR));
        Cancel->setText(QApplication::translate("pqFileDialog", "Cancel", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Navigate->setToolTip(QApplication::translate("pqFileDialog", "Go to the selected directory, instead of opening it", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        Navigate->setText(QApplication::translate("pqFileDialog", "Navigate", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class pqFileDialog: public Ui_pqFileDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQFILEDIALOG_H
