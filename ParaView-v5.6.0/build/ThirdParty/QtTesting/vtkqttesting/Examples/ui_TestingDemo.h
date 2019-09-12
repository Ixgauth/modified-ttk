/********************************************************************************
** Form generated from reading UI file 'TestingDemo.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTINGDEMO_H
#define UI_TESTINGDEMO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TestingDemo
{
public:
    QAction *actionOpen_Dialog;
    QAction *actionE_xit;
    QAction *actionRecord;
    QAction *actionPlay;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QTreeWidget *treeWidget;
    QLineEdit *lineEdit;
    QSpinBox *spinBox;
    QSlider *horizontalSlider;
    QMenuBar *menubar;
    QMenu *menu_File;
    QMenu *menuTesting;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *TestingDemo)
    {
        if (TestingDemo->objectName().isEmpty())
            TestingDemo->setObjectName(QStringLiteral("TestingDemo"));
        TestingDemo->resize(483, 392);
        actionOpen_Dialog = new QAction(TestingDemo);
        actionOpen_Dialog->setObjectName(QStringLiteral("actionOpen_Dialog"));
        actionE_xit = new QAction(TestingDemo);
        actionE_xit->setObjectName(QStringLiteral("actionE_xit"));
        actionRecord = new QAction(TestingDemo);
        actionRecord->setObjectName(QStringLiteral("actionRecord"));
        actionPlay = new QAction(TestingDemo);
        actionPlay->setObjectName(QStringLiteral("actionPlay"));
        centralwidget = new QWidget(TestingDemo);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        treeWidget = new QTreeWidget(centralwidget);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));

        gridLayout->addWidget(treeWidget, 0, 0, 1, 2);

        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        gridLayout->addWidget(lineEdit, 1, 0, 1, 1);

        spinBox = new QSpinBox(centralwidget);
        spinBox->setObjectName(QStringLiteral("spinBox"));

        gridLayout->addWidget(spinBox, 1, 1, 1, 1);

        horizontalSlider = new QSlider(centralwidget);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSlider, 2, 0, 1, 2);

        TestingDemo->setCentralWidget(centralwidget);
        menubar = new QMenuBar(TestingDemo);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 483, 22));
        menu_File = new QMenu(menubar);
        menu_File->setObjectName(QStringLiteral("menu_File"));
        menuTesting = new QMenu(menubar);
        menuTesting->setObjectName(QStringLiteral("menuTesting"));
        TestingDemo->setMenuBar(menubar);
        statusbar = new QStatusBar(TestingDemo);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        TestingDemo->setStatusBar(statusbar);

        menubar->addAction(menu_File->menuAction());
        menubar->addAction(menuTesting->menuAction());
        menu_File->addAction(actionOpen_Dialog);
        menu_File->addAction(actionE_xit);
        menuTesting->addAction(actionRecord);
        menuTesting->addAction(actionPlay);

        retranslateUi(TestingDemo);
        QObject::connect(actionE_xit, SIGNAL(triggered()), TestingDemo, SLOT(close()));

        QMetaObject::connectSlotsByName(TestingDemo);
    } // setupUi

    void retranslateUi(QMainWindow *TestingDemo)
    {
        TestingDemo->setWindowTitle(QApplication::translate("TestingDemo", "MainWindow", Q_NULLPTR));
        actionOpen_Dialog->setText(QApplication::translate("TestingDemo", "Popup Dialog", Q_NULLPTR));
        actionE_xit->setText(QApplication::translate("TestingDemo", "E&xit", Q_NULLPTR));
        actionRecord->setText(QApplication::translate("TestingDemo", "Record", Q_NULLPTR));
        actionPlay->setText(QApplication::translate("TestingDemo", "Play", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("TestingDemo", "Items", Q_NULLPTR));

        const bool __sortingEnabled = treeWidget->isSortingEnabled();
        treeWidget->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem1 = treeWidget->topLevelItem(0);
        ___qtreewidgetitem1->setText(0, QApplication::translate("TestingDemo", "Item0", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem2 = treeWidget->topLevelItem(1);
        ___qtreewidgetitem2->setText(0, QApplication::translate("TestingDemo", "Item1", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem3 = treeWidget->topLevelItem(2);
        ___qtreewidgetitem3->setText(0, QApplication::translate("TestingDemo", "Item2", Q_NULLPTR));
        treeWidget->setSortingEnabled(__sortingEnabled);

        menu_File->setTitle(QApplication::translate("TestingDemo", "&File", Q_NULLPTR));
        menuTesting->setTitle(QApplication::translate("TestingDemo", "Testing", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TestingDemo: public Ui_TestingDemo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTINGDEMO_H
