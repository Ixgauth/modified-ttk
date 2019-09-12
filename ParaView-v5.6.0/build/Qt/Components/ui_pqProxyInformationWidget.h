/********************************************************************************
** Form generated from reading UI file 'pqProxyInformationWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQPROXYINFORMATIONWIDGET_H
#define UI_PQPROXYINFORMATIONWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "pqTreeView.h"
#include "pqTreeWidget.h"

QT_BEGIN_NAMESPACE

class Ui_pqProxyInformationWidget
{
public:
    QVBoxLayout *vboxLayout;
    pqTreeView *compositeTree;
    QGroupBox *properties;
    QGridLayout *gridLayout;
    QLabel *filenameLabel;
    QLineEdit *filename;
    QLabel *label_13;
    QLineEdit *path;
    QGroupBox *groupBox;
    QGridLayout *gridLayout1;
    QLabel *label;
    QLineEdit *type;
    QLineEdit *memory;
    QLabel *label_4;
    QStackedWidget *dataTypeProperties;
    QWidget *DataSet;
    QGridLayout *gridLayout2;
    QLabel *label_2;
    QLineEdit *numberOfCells;
    QLabel *label_3;
    QLineEdit *numberOfPoints;
    QWidget *Table;
    QGridLayout *gridLayout3;
    QLabel *label_11;
    QLineEdit *numberOfRows;
    QLabel *label_12;
    QLineEdit *numberOfColumns;
    QWidget *HyperTreeGrid;
    QGridLayout *_2;
    QLabel *label_14;
    QLineEdit *numberOfTrees;
    QLabel *label_15;
    QLineEdit *numberOfVertices;
    QLineEdit *numberOfLeaves;
    QLabel *label_16;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout4;
    pqTreeWidget *dataArrays;
    QLineEdit *dataTimeLabel;
    QGroupBox *groupExtent;
    QGridLayout *gridLayout5;
    QLineEdit *zExtent;
    QLineEdit *yExtent;
    QLineEdit *xExtent;
    QLabel *label_5;
    QLabel *label_9;
    QLabel *label_10;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout6;
    QLabel *label_8;
    QLineEdit *zRange;
    QLineEdit *yRange;
    QLabel *label_6;
    QLineEdit *xRange;
    QLabel *label_7;
    QGroupBox *groupDataTime;
    QGridLayout *gridLayout7;
    pqTreeWidget *timeValues;
    QSpacerItem *spacerItem;

    void setupUi(QWidget *pqProxyInformationWidget)
    {
        if (pqProxyInformationWidget->objectName().isEmpty())
            pqProxyInformationWidget->setObjectName(QStringLiteral("pqProxyInformationWidget"));
        pqProxyInformationWidget->resize(276, 991);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pqProxyInformationWidget->sizePolicy().hasHeightForWidth());
        pqProxyInformationWidget->setSizePolicy(sizePolicy);
        vboxLayout = new QVBoxLayout(pqProxyInformationWidget);
#ifndef Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        compositeTree = new pqTreeView(pqProxyInformationWidget);
        compositeTree->setObjectName(QStringLiteral("compositeTree"));
        compositeTree->setUniformRowHeights(true);

        vboxLayout->addWidget(compositeTree);

        properties = new QGroupBox(pqProxyInformationWidget);
        properties->setObjectName(QStringLiteral("properties"));
        gridLayout = new QGridLayout(properties);
        gridLayout->setSpacing(4);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(4, 4, 4, 4);
        filenameLabel = new QLabel(properties);
        filenameLabel->setObjectName(QStringLiteral("filenameLabel"));

        gridLayout->addWidget(filenameLabel, 0, 0, 1, 1);

        filename = new QLineEdit(properties);
        filename->setObjectName(QStringLiteral("filename"));
        filename->setCursor(QCursor(Qt::ArrowCursor));
        filename->setAcceptDrops(false);
        filename->setStyleSheet(QStringLiteral("/* Explicitly apply to QLineEdit, so that tooltip isn't affected */ QLineEdit{background-color: rgba(0, 0, 0, 0);border: none;}"));
        filename->setReadOnly(true);

        gridLayout->addWidget(filename, 0, 1, 1, 1);

        label_13 = new QLabel(properties);
        label_13->setObjectName(QStringLiteral("label_13"));

        gridLayout->addWidget(label_13, 1, 0, 1, 1);

        path = new QLineEdit(properties);
        path->setObjectName(QStringLiteral("path"));
        path->setCursor(QCursor(Qt::ArrowCursor));
        path->setAcceptDrops(false);
        path->setStyleSheet(QStringLiteral("/* Explicitly apply to QLineEdit, so that tooltip isn't affected */ QLineEdit{background-color: rgba(0, 0, 0, 0);border: none;}"));
        path->setReadOnly(true);

        gridLayout->addWidget(path, 1, 1, 1, 1);


        vboxLayout->addWidget(properties);

        groupBox = new QGroupBox(pqProxyInformationWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout1 = new QGridLayout(groupBox);
        gridLayout1->setSpacing(4);
        gridLayout1->setObjectName(QStringLiteral("gridLayout1"));
        gridLayout1->setContentsMargins(4, 4, 4, 4);
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        gridLayout1->addWidget(label, 0, 0, 1, 1);

        type = new QLineEdit(groupBox);
        type->setObjectName(QStringLiteral("type"));
        type->setCursor(QCursor(Qt::ArrowCursor));
        type->setAcceptDrops(false);
        type->setStyleSheet(QStringLiteral("background-color: rgba(0, 0, 0, 0);border: none;"));
        type->setReadOnly(true);

        gridLayout1->addWidget(type, 0, 1, 1, 1);

        memory = new QLineEdit(groupBox);
        memory->setObjectName(QStringLiteral("memory"));
        memory->setCursor(QCursor(Qt::ArrowCursor));
        memory->setAcceptDrops(false);
        memory->setStyleSheet(QStringLiteral("background-color: rgba(0, 0, 0, 0);border: none;"));
        memory->setReadOnly(true);

        gridLayout1->addWidget(memory, 2, 1, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout1->addWidget(label_4, 2, 0, 1, 1);

        dataTypeProperties = new QStackedWidget(groupBox);
        dataTypeProperties->setObjectName(QStringLiteral("dataTypeProperties"));
        DataSet = new QWidget();
        DataSet->setObjectName(QStringLiteral("DataSet"));
        gridLayout2 = new QGridLayout(DataSet);
        gridLayout2->setObjectName(QStringLiteral("gridLayout2"));
        gridLayout2->setVerticalSpacing(4);
        gridLayout2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(DataSet);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout2->addWidget(label_2, 0, 0, 1, 1);

        numberOfCells = new QLineEdit(DataSet);
        numberOfCells->setObjectName(QStringLiteral("numberOfCells"));
        numberOfCells->setCursor(QCursor(Qt::ArrowCursor));
        numberOfCells->setAcceptDrops(false);
        numberOfCells->setStyleSheet(QStringLiteral("background-color: rgba(0, 0, 0, 0);border: none;"));
        numberOfCells->setReadOnly(true);

        gridLayout2->addWidget(numberOfCells, 0, 1, 1, 1);

        label_3 = new QLabel(DataSet);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout2->addWidget(label_3, 1, 0, 1, 1);

        numberOfPoints = new QLineEdit(DataSet);
        numberOfPoints->setObjectName(QStringLiteral("numberOfPoints"));
        numberOfPoints->setCursor(QCursor(Qt::ArrowCursor));
        numberOfPoints->setAcceptDrops(false);
        numberOfPoints->setStyleSheet(QStringLiteral("background-color: rgba(0, 0, 0, 0);border: none;"));
        numberOfPoints->setReadOnly(true);

        gridLayout2->addWidget(numberOfPoints, 1, 1, 1, 1);

        dataTypeProperties->addWidget(DataSet);
        Table = new QWidget();
        Table->setObjectName(QStringLiteral("Table"));
        gridLayout3 = new QGridLayout(Table);
        gridLayout3->setObjectName(QStringLiteral("gridLayout3"));
        gridLayout3->setHorizontalSpacing(-1);
        gridLayout3->setVerticalSpacing(4);
        gridLayout3->setContentsMargins(0, 0, 0, 0);
        label_11 = new QLabel(Table);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout3->addWidget(label_11, 0, 0, 1, 1);

        numberOfRows = new QLineEdit(Table);
        numberOfRows->setObjectName(QStringLiteral("numberOfRows"));
        numberOfRows->setCursor(QCursor(Qt::ArrowCursor));
        numberOfRows->setAcceptDrops(false);
        numberOfRows->setStyleSheet(QStringLiteral("background-color: rgba(0, 0, 0, 0);border: none;"));
        numberOfRows->setReadOnly(true);

        gridLayout3->addWidget(numberOfRows, 0, 1, 1, 1);

        label_12 = new QLabel(Table);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout3->addWidget(label_12, 1, 0, 1, 1);

        numberOfColumns = new QLineEdit(Table);
        numberOfColumns->setObjectName(QStringLiteral("numberOfColumns"));
        numberOfColumns->setCursor(QCursor(Qt::ArrowCursor));
        numberOfColumns->setAcceptDrops(false);
        numberOfColumns->setStyleSheet(QStringLiteral("background-color: rgba(0, 0, 0, 0);border: none;"));
        numberOfColumns->setReadOnly(true);

        gridLayout3->addWidget(numberOfColumns, 1, 1, 1, 1);

        dataTypeProperties->addWidget(Table);
        HyperTreeGrid = new QWidget();
        HyperTreeGrid->setObjectName(QStringLiteral("HyperTreeGrid"));
        _2 = new QGridLayout(HyperTreeGrid);
        _2->setObjectName(QStringLiteral("_2"));
        _2->setVerticalSpacing(4);
        _2->setContentsMargins(0, 0, 0, 0);
        label_14 = new QLabel(HyperTreeGrid);
        label_14->setObjectName(QStringLiteral("label_14"));

        _2->addWidget(label_14, 0, 0, 1, 1);

        numberOfTrees = new QLineEdit(HyperTreeGrid);
        numberOfTrees->setObjectName(QStringLiteral("numberOfTrees"));
        numberOfTrees->setCursor(QCursor(Qt::ArrowCursor));
        numberOfTrees->setAcceptDrops(false);
        numberOfTrees->setStyleSheet(QStringLiteral("background-color: rgba(0, 0, 0, 0);border: none;"));
        numberOfTrees->setReadOnly(true);

        _2->addWidget(numberOfTrees, 0, 1, 1, 1);

        label_15 = new QLabel(HyperTreeGrid);
        label_15->setObjectName(QStringLiteral("label_15"));

        _2->addWidget(label_15, 1, 0, 1, 1);

        numberOfVertices = new QLineEdit(HyperTreeGrid);
        numberOfVertices->setObjectName(QStringLiteral("numberOfVertices"));
        numberOfVertices->setCursor(QCursor(Qt::ArrowCursor));
        numberOfVertices->setAcceptDrops(false);
        numberOfVertices->setStyleSheet(QStringLiteral("background-color: rgba(0, 0, 0, 0);border: none;"));
        numberOfVertices->setReadOnly(true);

        _2->addWidget(numberOfVertices, 1, 1, 1, 1);

        numberOfLeaves = new QLineEdit(HyperTreeGrid);
        numberOfLeaves->setObjectName(QStringLiteral("numberOfLeaves"));
        numberOfLeaves->setCursor(QCursor(Qt::ArrowCursor));
        numberOfLeaves->setAcceptDrops(false);
        numberOfLeaves->setStyleSheet(QStringLiteral("background-color: rgba(0, 0, 0, 0);border: none;"));
        numberOfLeaves->setReadOnly(true);

        _2->addWidget(numberOfLeaves, 2, 1, 1, 1);

        label_16 = new QLabel(HyperTreeGrid);
        label_16->setObjectName(QStringLiteral("label_16"));

        _2->addWidget(label_16, 2, 0, 1, 1);

        dataTypeProperties->addWidget(HyperTreeGrid);

        gridLayout1->addWidget(dataTypeProperties, 1, 0, 1, 2);


        vboxLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(pqProxyInformationWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        sizePolicy.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy);
        gridLayout4 = new QGridLayout(groupBox_2);
        gridLayout4->setSpacing(4);
        gridLayout4->setObjectName(QStringLiteral("gridLayout4"));
        gridLayout4->setContentsMargins(4, 4, 4, 4);
        dataArrays = new pqTreeWidget(groupBox_2);
        dataArrays->setObjectName(QStringLiteral("dataArrays"));
        QSizePolicy sizePolicy1(QSizePolicy::Ignored, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(dataArrays->sizePolicy().hasHeightForWidth());
        dataArrays->setSizePolicy(sizePolicy1);
        dataArrays->setRootIsDecorated(false);

        gridLayout4->addWidget(dataArrays, 1, 0, 1, 1);

        dataTimeLabel = new QLineEdit(groupBox_2);
        dataTimeLabel->setObjectName(QStringLiteral("dataTimeLabel"));
        dataTimeLabel->setCursor(QCursor(Qt::ArrowCursor));
        dataTimeLabel->setAcceptDrops(false);
        dataTimeLabel->setStyleSheet(QStringLiteral("background-color: rgba(0, 0, 0, 0);border: none;"));
        dataTimeLabel->setReadOnly(true);

        gridLayout4->addWidget(dataTimeLabel, 0, 0, 1, 1);


        vboxLayout->addWidget(groupBox_2);

        groupExtent = new QGroupBox(pqProxyInformationWidget);
        groupExtent->setObjectName(QStringLiteral("groupExtent"));
        gridLayout5 = new QGridLayout(groupExtent);
        gridLayout5->setSpacing(4);
        gridLayout5->setObjectName(QStringLiteral("gridLayout5"));
        gridLayout5->setContentsMargins(4, 4, 4, 4);
        zExtent = new QLineEdit(groupExtent);
        zExtent->setObjectName(QStringLiteral("zExtent"));
        zExtent->setCursor(QCursor(Qt::ArrowCursor));
        zExtent->setAcceptDrops(false);
        zExtent->setStyleSheet(QStringLiteral("background-color: rgba(0, 0, 0, 0);border: none;"));
        zExtent->setReadOnly(true);

        gridLayout5->addWidget(zExtent, 2, 1, 1, 1);

        yExtent = new QLineEdit(groupExtent);
        yExtent->setObjectName(QStringLiteral("yExtent"));
        yExtent->setCursor(QCursor(Qt::ArrowCursor));
        yExtent->setAcceptDrops(false);
        yExtent->setStyleSheet(QStringLiteral("background-color: rgba(0, 0, 0, 0);border: none;"));
        yExtent->setReadOnly(true);

        gridLayout5->addWidget(yExtent, 1, 1, 1, 1);

        xExtent = new QLineEdit(groupExtent);
        xExtent->setObjectName(QStringLiteral("xExtent"));
        xExtent->setCursor(QCursor(Qt::ArrowCursor));
        xExtent->setAcceptDrops(false);
        xExtent->setStyleSheet(QStringLiteral("background-color: rgba(0, 0, 0, 0);border: none;"));
        xExtent->setReadOnly(true);

        gridLayout5->addWidget(xExtent, 0, 1, 1, 1);

        label_5 = new QLabel(groupExtent);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout5->addWidget(label_5, 2, 0, 1, 1);

        label_9 = new QLabel(groupExtent);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout5->addWidget(label_9, 1, 0, 1, 1);

        label_10 = new QLabel(groupExtent);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout5->addWidget(label_10, 0, 0, 1, 1);


        vboxLayout->addWidget(groupExtent);

        groupBox_3 = new QGroupBox(pqProxyInformationWidget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(groupBox_3->sizePolicy().hasHeightForWidth());
        groupBox_3->setSizePolicy(sizePolicy2);
        gridLayout6 = new QGridLayout(groupBox_3);
        gridLayout6->setSpacing(4);
        gridLayout6->setObjectName(QStringLiteral("gridLayout6"));
        gridLayout6->setContentsMargins(4, 4, 4, 4);
        label_8 = new QLabel(groupBox_3);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout6->addWidget(label_8, 2, 0, 1, 1);

        zRange = new QLineEdit(groupBox_3);
        zRange->setObjectName(QStringLiteral("zRange"));
        zRange->setCursor(QCursor(Qt::ArrowCursor));
        zRange->setAcceptDrops(false);
        zRange->setStyleSheet(QStringLiteral("background-color: rgba(0, 0, 0, 0);border: none;"));
        zRange->setReadOnly(true);

        gridLayout6->addWidget(zRange, 2, 1, 1, 1);

        yRange = new QLineEdit(groupBox_3);
        yRange->setObjectName(QStringLiteral("yRange"));
        yRange->setCursor(QCursor(Qt::ArrowCursor));
        yRange->setAcceptDrops(false);
        yRange->setStyleSheet(QStringLiteral("background-color: rgba(0, 0, 0, 0);border: none;"));
        yRange->setReadOnly(true);

        gridLayout6->addWidget(yRange, 1, 1, 1, 1);

        label_6 = new QLabel(groupBox_3);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout6->addWidget(label_6, 0, 0, 1, 1);

        xRange = new QLineEdit(groupBox_3);
        xRange->setObjectName(QStringLiteral("xRange"));
        xRange->setCursor(QCursor(Qt::ArrowCursor));
        xRange->setAcceptDrops(false);
        xRange->setStyleSheet(QStringLiteral("background-color: rgba(0, 0, 0, 0);border: none;"));
        xRange->setReadOnly(true);

        gridLayout6->addWidget(xRange, 0, 1, 1, 1);

        label_7 = new QLabel(groupBox_3);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout6->addWidget(label_7, 1, 0, 1, 1);


        vboxLayout->addWidget(groupBox_3);

        groupDataTime = new QGroupBox(pqProxyInformationWidget);
        groupDataTime->setObjectName(QStringLiteral("groupDataTime"));
        sizePolicy.setHeightForWidth(groupDataTime->sizePolicy().hasHeightForWidth());
        groupDataTime->setSizePolicy(sizePolicy);
        gridLayout7 = new QGridLayout(groupDataTime);
        gridLayout7->setSpacing(4);
        gridLayout7->setObjectName(QStringLiteral("gridLayout7"));
        gridLayout7->setContentsMargins(4, 4, 4, 4);
        timeValues = new pqTreeWidget(groupDataTime);
        timeValues->setObjectName(QStringLiteral("timeValues"));
        sizePolicy1.setHeightForWidth(timeValues->sizePolicy().hasHeightForWidth());
        timeValues->setSizePolicy(sizePolicy1);
        timeValues->setColumnCount(2);

        gridLayout7->addWidget(timeValues, 0, 0, 1, 1);


        vboxLayout->addWidget(groupDataTime);

        spacerItem = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem);


        retranslateUi(pqProxyInformationWidget);

        dataTypeProperties->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(pqProxyInformationWidget);
    } // setupUi

    void retranslateUi(QWidget *pqProxyInformationWidget)
    {
        pqProxyInformationWidget->setWindowTitle(QApplication::translate("pqProxyInformationWidget", "Form", Q_NULLPTR));
        properties->setTitle(QApplication::translate("pqProxyInformationWidget", "Properties", Q_NULLPTR));
        filenameLabel->setText(QApplication::translate("pqProxyInformationWidget", "Filename:", Q_NULLPTR));
        label_13->setText(QApplication::translate("pqProxyInformationWidget", "Path:", Q_NULLPTR));
        path->setText(QString());
        groupBox->setTitle(QApplication::translate("pqProxyInformationWidget", "Statistics", Q_NULLPTR));
        label->setText(QApplication::translate("pqProxyInformationWidget", "Type:", Q_NULLPTR));
        label_4->setText(QApplication::translate("pqProxyInformationWidget", "Memory:", Q_NULLPTR));
        label_2->setText(QApplication::translate("pqProxyInformationWidget", "Number of Cells:", Q_NULLPTR));
        label_3->setText(QApplication::translate("pqProxyInformationWidget", "Number of Points:", Q_NULLPTR));
        label_11->setText(QApplication::translate("pqProxyInformationWidget", "Number of Rows:", Q_NULLPTR));
        label_12->setText(QApplication::translate("pqProxyInformationWidget", "Number of Columns", Q_NULLPTR));
        label_14->setText(QApplication::translate("pqProxyInformationWidget", "Number of Trees:", Q_NULLPTR));
        label_15->setText(QApplication::translate("pqProxyInformationWidget", "Number of Vertices:", Q_NULLPTR));
        label_16->setText(QApplication::translate("pqProxyInformationWidget", "Number of Leaves:", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("pqProxyInformationWidget", "Data Arrays", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem = dataArrays->headerItem();
        ___qtreewidgetitem->setText(2, QApplication::translate("pqProxyInformationWidget", "Data Ranges", Q_NULLPTR));
        ___qtreewidgetitem->setText(1, QApplication::translate("pqProxyInformationWidget", "Data Type", Q_NULLPTR));
        ___qtreewidgetitem->setText(0, QApplication::translate("pqProxyInformationWidget", "Name", Q_NULLPTR));
        groupExtent->setTitle(QApplication::translate("pqProxyInformationWidget", "Extents", Q_NULLPTR));
        label_5->setText(QApplication::translate("pqProxyInformationWidget", "Z Extent", Q_NULLPTR));
        label_9->setText(QApplication::translate("pqProxyInformationWidget", "Y Extent:", Q_NULLPTR));
        label_10->setText(QApplication::translate("pqProxyInformationWidget", "X Extent:", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("pqProxyInformationWidget", "Bounds", Q_NULLPTR));
        label_8->setText(QApplication::translate("pqProxyInformationWidget", "Z Range:", Q_NULLPTR));
        label_6->setText(QApplication::translate("pqProxyInformationWidget", "X Range:", Q_NULLPTR));
        label_7->setText(QApplication::translate("pqProxyInformationWidget", "Y Range:", Q_NULLPTR));
        groupDataTime->setTitle(QApplication::translate("pqProxyInformationWidget", "Time", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem1 = timeValues->headerItem();
        ___qtreewidgetitem1->setText(1, QApplication::translate("pqProxyInformationWidget", "Value", Q_NULLPTR));
        ___qtreewidgetitem1->setText(0, QApplication::translate("pqProxyInformationWidget", "Index", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class pqProxyInformationWidget: public Ui_pqProxyInformationWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQPROXYINFORMATIONWIDGET_H
