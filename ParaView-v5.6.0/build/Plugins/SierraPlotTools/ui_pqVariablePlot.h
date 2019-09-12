/********************************************************************************
** Form generated from reading UI file 'pqVariablePlot.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQVARIABLEPLOT_H
#define UI_PQVARIABLEPLOT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "pqFileChooserWidget.h"
#include "pqHoverLabel.h"
#include "pqResizingScrollArea.h"

QT_BEGIN_NAMESPACE

class Ui_pqVariablePlot
{
public:
    QGridLayout *gridLayout_4;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    pqHoverLabel *variableVsWhatever;
    QSpacerItem *horizontalSpacer_3;
    QFrame *selectionByNumberFrame;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *useParaViewGUIToSelectNodesCheckBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *numberItemsLabel;
    QLineEdit *numberItemsLineEdit;
    QFrame *pickVariableFrame;
    QFrame *lineAfterHeading;
    QFrame *timeFrame;
    QGridLayout *gridLayout_2;
    QHBoxLayout *timeRangeLayout;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_6;
    QLineEdit *timeMinLineEdit;
    QLabel *label_7;
    QLineEdit *timeMaxLineEdit;
    QFrame *lineAfterTime;
    QFrame *rangeFrame;
    QGridLayout *gridLayout;
    QLabel *rangeHeadingLabel;
    pqResizingScrollArea *rangeScrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *scrollWidgetLayout;
    QFrame *lineAfterRange;
    QFrame *writeToFileFrame;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayoutWriteToFile;
    QLabel *label;
    pqFileChooserWidget *meshFile;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *okCancelButtonBox;

    void setupUi(QDialog *pqVariablePlot)
    {
        if (pqVariablePlot->objectName().isEmpty())
            pqVariablePlot->setObjectName(QStringLiteral("pqVariablePlot"));
        pqVariablePlot->resize(486, 860);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pqVariablePlot->sizePolicy().hasHeightForWidth());
        pqVariablePlot->setSizePolicy(sizePolicy);
        pqVariablePlot->setMaximumSize(QSize(16777215, 16777215));
        gridLayout_4 = new QGridLayout(pqVariablePlot);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        variableVsWhatever = new pqHoverLabel(pqVariablePlot);
        variableVsWhatever->setObjectName(QStringLiteral("variableVsWhatever"));

        horizontalLayout->addWidget(variableVsWhatever);

        horizontalSpacer_3 = new QSpacerItem(350, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout);

        selectionByNumberFrame = new QFrame(pqVariablePlot);
        selectionByNumberFrame->setObjectName(QStringLiteral("selectionByNumberFrame"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(selectionByNumberFrame->sizePolicy().hasHeightForWidth());
        selectionByNumberFrame->setSizePolicy(sizePolicy1);
        selectionByNumberFrame->setMinimumSize(QSize(0, 80));
        selectionByNumberFrame->setFrameShape(QFrame::StyledPanel);
        selectionByNumberFrame->setFrameShadow(QFrame::Sunken);
        verticalLayout_2 = new QVBoxLayout(selectionByNumberFrame);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        useParaViewGUIToSelectNodesCheckBox = new QCheckBox(selectionByNumberFrame);
        useParaViewGUIToSelectNodesCheckBox->setObjectName(QStringLiteral("useParaViewGUIToSelectNodesCheckBox"));

        verticalLayout_2->addWidget(useParaViewGUIToSelectNodesCheckBox);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        numberItemsLabel = new QLabel(selectionByNumberFrame);
        numberItemsLabel->setObjectName(QStringLiteral("numberItemsLabel"));
        sizePolicy1.setHeightForWidth(numberItemsLabel->sizePolicy().hasHeightForWidth());
        numberItemsLabel->setSizePolicy(sizePolicy1);
        numberItemsLabel->setMinimumSize(QSize(0, 0));

        horizontalLayout_2->addWidget(numberItemsLabel);

        numberItemsLineEdit = new QLineEdit(selectionByNumberFrame);
        numberItemsLineEdit->setObjectName(QStringLiteral("numberItemsLineEdit"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(1);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(numberItemsLineEdit->sizePolicy().hasHeightForWidth());
        numberItemsLineEdit->setSizePolicy(sizePolicy2);
        numberItemsLineEdit->setMinimumSize(QSize(0, 0));
        numberItemsLineEdit->setMaximumSize(QSize(16777215, 20));

        horizontalLayout_2->addWidget(numberItemsLineEdit);


        verticalLayout_2->addLayout(horizontalLayout_2);


        verticalLayout->addWidget(selectionByNumberFrame);

        pickVariableFrame = new QFrame(pqVariablePlot);
        pickVariableFrame->setObjectName(QStringLiteral("pickVariableFrame"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(2);
        sizePolicy3.setHeightForWidth(pickVariableFrame->sizePolicy().hasHeightForWidth());
        pickVariableFrame->setSizePolicy(sizePolicy3);
        pickVariableFrame->setMinimumSize(QSize(0, 250));
        pickVariableFrame->setFrameShape(QFrame::StyledPanel);
        pickVariableFrame->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(pickVariableFrame);

        lineAfterHeading = new QFrame(pqVariablePlot);
        lineAfterHeading->setObjectName(QStringLiteral("lineAfterHeading"));
        lineAfterHeading->setFrameShape(QFrame::HLine);
        lineAfterHeading->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(lineAfterHeading);

        timeFrame = new QFrame(pqVariablePlot);
        timeFrame->setObjectName(QStringLiteral("timeFrame"));
        timeFrame->setFrameShape(QFrame::StyledPanel);
        timeFrame->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(timeFrame);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        timeRangeLayout = new QHBoxLayout();
        timeRangeLayout->setObjectName(QStringLiteral("timeRangeLayout"));
        label_5 = new QLabel(timeFrame);
        label_5->setObjectName(QStringLiteral("label_5"));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy4);
        label_5->setMinimumSize(QSize(29, 0));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        timeRangeLayout->addWidget(label_5);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        timeRangeLayout->addItem(horizontalSpacer_2);

        label_6 = new QLabel(timeFrame);
        label_6->setObjectName(QStringLiteral("label_6"));

        timeRangeLayout->addWidget(label_6);

        timeMinLineEdit = new QLineEdit(timeFrame);
        timeMinLineEdit->setObjectName(QStringLiteral("timeMinLineEdit"));

        timeRangeLayout->addWidget(timeMinLineEdit);

        label_7 = new QLabel(timeFrame);
        label_7->setObjectName(QStringLiteral("label_7"));

        timeRangeLayout->addWidget(label_7);

        timeMaxLineEdit = new QLineEdit(timeFrame);
        timeMaxLineEdit->setObjectName(QStringLiteral("timeMaxLineEdit"));

        timeRangeLayout->addWidget(timeMaxLineEdit);


        gridLayout_2->addLayout(timeRangeLayout, 0, 0, 1, 1);


        verticalLayout->addWidget(timeFrame);

        lineAfterTime = new QFrame(pqVariablePlot);
        lineAfterTime->setObjectName(QStringLiteral("lineAfterTime"));
        lineAfterTime->setFrameShape(QFrame::HLine);
        lineAfterTime->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(lineAfterTime);

        rangeFrame = new QFrame(pqVariablePlot);
        rangeFrame->setObjectName(QStringLiteral("rangeFrame"));
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(3);
        sizePolicy5.setHeightForWidth(rangeFrame->sizePolicy().hasHeightForWidth());
        rangeFrame->setSizePolicy(sizePolicy5);
        rangeFrame->setFrameShape(QFrame::StyledPanel);
        rangeFrame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(rangeFrame);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        rangeHeadingLabel = new QLabel(rangeFrame);
        rangeHeadingLabel->setObjectName(QStringLiteral("rangeHeadingLabel"));

        gridLayout->addWidget(rangeHeadingLabel, 0, 0, 1, 1);

        rangeScrollArea = new pqResizingScrollArea(rangeFrame);
        rangeScrollArea->setObjectName(QStringLiteral("rangeScrollArea"));
        QSizePolicy sizePolicy6(QSizePolicy::Expanding, QSizePolicy::MinimumExpanding);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(rangeScrollArea->sizePolicy().hasHeightForWidth());
        rangeScrollArea->setSizePolicy(sizePolicy6);
        rangeScrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 444, 228));
        QSizePolicy sizePolicy7(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(scrollAreaWidgetContents->sizePolicy().hasHeightForWidth());
        scrollAreaWidgetContents->setSizePolicy(sizePolicy7);
        scrollWidgetLayout = new QVBoxLayout(scrollAreaWidgetContents);
        scrollWidgetLayout->setObjectName(QStringLiteral("scrollWidgetLayout"));
        rangeScrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout->addWidget(rangeScrollArea, 1, 0, 1, 1);


        verticalLayout->addWidget(rangeFrame);

        lineAfterRange = new QFrame(pqVariablePlot);
        lineAfterRange->setObjectName(QStringLiteral("lineAfterRange"));
        lineAfterRange->setFrameShape(QFrame::HLine);
        lineAfterRange->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(lineAfterRange);

        writeToFileFrame = new QFrame(pqVariablePlot);
        writeToFileFrame->setObjectName(QStringLiteral("writeToFileFrame"));
        writeToFileFrame->setFrameShape(QFrame::StyledPanel);
        writeToFileFrame->setFrameShadow(QFrame::Raised);
        gridLayout_3 = new QGridLayout(writeToFileFrame);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        horizontalLayoutWriteToFile = new QHBoxLayout();
        horizontalLayoutWriteToFile->setObjectName(QStringLiteral("horizontalLayoutWriteToFile"));
        label = new QLabel(writeToFileFrame);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayoutWriteToFile->addWidget(label);

        meshFile = new pqFileChooserWidget(writeToFileFrame);
        meshFile->setObjectName(QStringLiteral("meshFile"));
        QSizePolicy sizePolicy8(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy8.setHorizontalStretch(1);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(meshFile->sizePolicy().hasHeightForWidth());
        meshFile->setSizePolicy(sizePolicy8);

        horizontalLayoutWriteToFile->addWidget(meshFile);


        gridLayout_3->addLayout(horizontalLayoutWriteToFile, 0, 0, 1, 1);


        verticalLayout->addWidget(writeToFileFrame);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        okCancelButtonBox = new QDialogButtonBox(pqVariablePlot);
        okCancelButtonBox->setObjectName(QStringLiteral("okCancelButtonBox"));
        okCancelButtonBox->setOrientation(Qt::Horizontal);
        okCancelButtonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(okCancelButtonBox);


        gridLayout_4->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(pqVariablePlot);
        QObject::connect(okCancelButtonBox, SIGNAL(accepted()), pqVariablePlot, SLOT(accept()));
        QObject::connect(okCancelButtonBox, SIGNAL(rejected()), pqVariablePlot, SLOT(reject()));

        QMetaObject::connectSlotsByName(pqVariablePlot);
    } // setupUi

    void retranslateUi(QDialog *pqVariablePlot)
    {
        pqVariablePlot->setWindowTitle(QApplication::translate("pqVariablePlot", "Plot Varriables", Q_NULLPTR));
        variableVsWhatever->setText(QApplication::translate("pqVariablePlot", "variable vs. whatever", Q_NULLPTR));
        useParaViewGUIToSelectNodesCheckBox->setText(QApplication::translate("pqVariablePlot", "use ParaView GUI to Select Nodes", Q_NULLPTR));
        numberItemsLabel->setText(QApplication::translate("pqVariablePlot", "<item by id #>", Q_NULLPTR));
        label_5->setText(QApplication::translate("pqVariablePlot", "time", Q_NULLPTR));
        label_6->setText(QApplication::translate("pqVariablePlot", "Minimum", Q_NULLPTR));
#ifndef QT_NO_WHATSTHIS
        timeMinLineEdit->setWhatsThis(QApplication::translate("pqVariablePlot", "Enter the new range minimum here.", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        label_7->setText(QApplication::translate("pqVariablePlot", "Maximum", Q_NULLPTR));
#ifndef QT_NO_WHATSTHIS
        timeMaxLineEdit->setWhatsThis(QApplication::translate("pqVariablePlot", "Enter the new range maximum here.", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        rangeHeadingLabel->setText(QApplication::translate("pqVariablePlot", "Variable Ranges", Q_NULLPTR));
        label->setText(QApplication::translate("pqVariablePlot", "write to file", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class pqVariablePlot: public Ui_pqVariablePlot {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQVARIABLEPLOT_H
