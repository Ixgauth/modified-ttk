/********************************************************************************
** Form generated from reading UI file 'pqLinksEditor.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQLINKSEDITOR_H
#define UI_PQLINKSEDITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_pqLinksEditor
{
public:
    QGridLayout *gridLayout;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QGridLayout *gridLayout1;
    QTreeView *ObjectTreeProxy2;
    QTreeView *ObjectTreeProxy1;
    QWidget *page_2;
    QGridLayout *gridLayout2;
    QListWidget *Property1List;
    QTreeView *ObjectTreeProperty1;
    QListWidget *Property2List;
    QTreeView *ObjectTreeProperty2;
    QWidget *page_3;
    QGridLayout *gridLayout3;
    QTreeView *ObjectTreeSelection1;
    QTreeView *ObjectTreeSelection2;
    QHBoxLayout *hboxLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QComboBox *comboBox;
    QSpacerItem *spacerItem;
    QCheckBox *interactiveViewLinkCheckBox;
    QCheckBox *convertToIndicesCheckBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *pqLinksEditor)
    {
        if (pqLinksEditor->objectName().isEmpty())
            pqLinksEditor->setObjectName(QStringLiteral("pqLinksEditor"));
        pqLinksEditor->resize(496, 389);
        gridLayout = new QGridLayout(pqLinksEditor);
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        stackedWidget = new QStackedWidget(pqLinksEditor);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        gridLayout1 = new QGridLayout(page);
#ifndef Q_OS_MAC
        gridLayout1->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout1->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout1->setObjectName(QStringLiteral("gridLayout1"));
        ObjectTreeProxy2 = new QTreeView(page);
        ObjectTreeProxy2->setObjectName(QStringLiteral("ObjectTreeProxy2"));

        gridLayout1->addWidget(ObjectTreeProxy2, 0, 1, 1, 1);

        ObjectTreeProxy1 = new QTreeView(page);
        ObjectTreeProxy1->setObjectName(QStringLiteral("ObjectTreeProxy1"));

        gridLayout1->addWidget(ObjectTreeProxy1, 0, 0, 1, 1);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        gridLayout2 = new QGridLayout(page_2);
#ifndef Q_OS_MAC
        gridLayout2->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout2->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout2->setObjectName(QStringLiteral("gridLayout2"));
        Property1List = new QListWidget(page_2);
        Property1List->setObjectName(QStringLiteral("Property1List"));

        gridLayout2->addWidget(Property1List, 1, 0, 1, 1);

        ObjectTreeProperty1 = new QTreeView(page_2);
        ObjectTreeProperty1->setObjectName(QStringLiteral("ObjectTreeProperty1"));

        gridLayout2->addWidget(ObjectTreeProperty1, 0, 0, 1, 1);

        Property2List = new QListWidget(page_2);
        Property2List->setObjectName(QStringLiteral("Property2List"));

        gridLayout2->addWidget(Property2List, 1, 1, 1, 1);

        ObjectTreeProperty2 = new QTreeView(page_2);
        ObjectTreeProperty2->setObjectName(QStringLiteral("ObjectTreeProperty2"));

        gridLayout2->addWidget(ObjectTreeProperty2, 0, 1, 1, 1);

        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        gridLayout3 = new QGridLayout(page_3);
#ifndef Q_OS_MAC
        gridLayout3->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout3->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout3->setObjectName(QStringLiteral("gridLayout3"));
        ObjectTreeSelection1 = new QTreeView(page_3);
        ObjectTreeSelection1->setObjectName(QStringLiteral("ObjectTreeSelection1"));

        gridLayout3->addWidget(ObjectTreeSelection1, 0, 0, 1, 1);

        ObjectTreeSelection2 = new QTreeView(page_3);
        ObjectTreeSelection2->setObjectName(QStringLiteral("ObjectTreeSelection2"));

        gridLayout3->addWidget(ObjectTreeSelection2, 0, 1, 1, 1);

        stackedWidget->addWidget(page_3);

        gridLayout->addWidget(stackedWidget, 1, 0, 1, 2);

        hboxLayout = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        label = new QLabel(pqLinksEditor);
        label->setObjectName(QStringLiteral("label"));

        hboxLayout->addWidget(label);

        lineEdit = new QLineEdit(pqLinksEditor);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        hboxLayout->addWidget(lineEdit);

        label_2 = new QLabel(pqLinksEditor);
        label_2->setObjectName(QStringLiteral("label_2"));

        hboxLayout->addWidget(label_2);

        comboBox = new QComboBox(pqLinksEditor);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        hboxLayout->addWidget(comboBox);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);


        gridLayout->addLayout(hboxLayout, 0, 0, 1, 2);

        interactiveViewLinkCheckBox = new QCheckBox(pqLinksEditor);
        interactiveViewLinkCheckBox->setObjectName(QStringLiteral("interactiveViewLinkCheckBox"));
        interactiveViewLinkCheckBox->setVisible(false);

        gridLayout->addWidget(interactiveViewLinkCheckBox, 2, 0, 1, 1);

        convertToIndicesCheckBox = new QCheckBox(pqLinksEditor);
        convertToIndicesCheckBox->setObjectName(QStringLiteral("convertToIndicesCheckBox"));
        convertToIndicesCheckBox->setChecked(true);
        convertToIndicesCheckBox->setVisible(false);

        gridLayout->addWidget(convertToIndicesCheckBox, 2, 0, 1, 1);

        buttonBox = new QDialogButtonBox(pqLinksEditor);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::NoButton|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 2, 1, 1, 1);


        retranslateUi(pqLinksEditor);
        QObject::connect(buttonBox, SIGNAL(accepted()), pqLinksEditor, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), pqLinksEditor, SLOT(reject()));
        QObject::connect(comboBox, SIGNAL(currentIndexChanged(int)), stackedWidget, SLOT(setCurrentIndex(int)));

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(pqLinksEditor);
    } // setupUi

    void retranslateUi(QDialog *pqLinksEditor)
    {
        pqLinksEditor->setWindowTitle(QApplication::translate("pqLinksEditor", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("pqLinksEditor", "Name:", Q_NULLPTR));
        label_2->setText(QApplication::translate("pqLinksEditor", "Mode:", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("pqLinksEditor", "Object Link", Q_NULLPTR)
         << QApplication::translate("pqLinksEditor", "Property Link", Q_NULLPTR)
         << QApplication::translate("pqLinksEditor", "Selection Link", Q_NULLPTR)
        );
        interactiveViewLinkCheckBox->setText(QApplication::translate("pqLinksEditor", "Interactive View Link", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        convertToIndicesCheckBox->setToolTip(QApplication::translate("pqLinksEditor", "<span>When enabled, selection is linked by evaluating the selection on the data source and select corresponding elements based on their indices on other linked data sources, instead of sharing the actual selection between the data sources.</span>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        convertToIndicesCheckBox->setText(QApplication::translate("pqLinksEditor", "Link Selected Elements", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class pqLinksEditor: public Ui_pqLinksEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQLINKSEDITOR_H
