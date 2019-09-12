/********************************************************************************
** Form generated from reading UI file 'pqExportStateWizard.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQEXPORTSTATEWIZARD_H
#define UI_PQEXPORTSTATEWIZARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <QtWidgets/QWizard>
#include <QtWidgets/QWizardPage>
#include "QWizardPage"
#include "pqCinemaTrackSelection.h"
#include "pqExportViewSelection.h"

QT_BEGIN_NAMESPACE

class Ui_ExportStateWizard
{
public:
    QWizardPage *wizardPage1;
    QGridLayout *gridLayout;
    QLabel *label;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_6;
    pqSGExportStateWizardPage2 *wizardPage2;
    QGridLayout *gridLayout_2;
    QCheckBox *showAllSources;
    QListWidget *allInputs;
    QSpacerItem *verticalSpacer;
    QListWidget *simulationInputs;
    QPushButton *addButton;
    QPushButton *removeButton;
    pqSGExportStateWizardPage3 *wizardPage;
    QGridLayout *gridLayout_3;
    QTableWidget *nameWidget;
    QWizardPage *wizardPage_2;
    QVBoxLayout *verticalLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QFormLayout *formLayout_2;
    QLabel *label_3;
    QCheckBox *liveViz;
    QLabel *label_5;
    QCheckBox *outputRendering;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout;
    QCheckBox *outputCinema;
    QLabel *laRescaleDataRange;
    QCheckBox *rescaleDataRange;
    QLabel *label_2;
    QSpinBox *timeCompartmentSize;
    QLabel *fileNamePaddingAmountLabel;
    QSpinBox *fileNamePaddingAmountSpinBox;
    pqExportViewSelection *wViewSelection;
    pqCinemaTrackSelection *wCinemaTrackSelection;

    void setupUi(QWizard *ExportStateWizard)
    {
        if (ExportStateWizard->objectName().isEmpty())
            ExportStateWizard->setObjectName(QStringLiteral("ExportStateWizard"));
        ExportStateWizard->resize(668, 908);
        ExportStateWizard->setMinimumSize(QSize(300, 320));
        wizardPage1 = new QWizardPage();
        wizardPage1->setObjectName(QStringLiteral("wizardPage1"));
        gridLayout = new QGridLayout(wizardPage1);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(wizardPage1);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label->setWordWrap(true);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 2, 0, 1, 1);

        label_6 = new QLabel(wizardPage1);
        label_6->setObjectName(QStringLiteral("label_6"));
        QFont font;
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        label_6->setFont(font);
        label_6->setWordWrap(true);

        gridLayout->addWidget(label_6, 1, 0, 1, 1);

        ExportStateWizard->setPage(0, wizardPage1);
        wizardPage2 = new pqSGExportStateWizardPage2();
        wizardPage2->setObjectName(QStringLiteral("wizardPage2"));
        gridLayout_2 = new QGridLayout(wizardPage2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        showAllSources = new QCheckBox(wizardPage2);
        showAllSources->setObjectName(QStringLiteral("showAllSources"));

        gridLayout_2->addWidget(showAllSources, 0, 0, 1, 1);

        allInputs = new QListWidget(wizardPage2);
        allInputs->setObjectName(QStringLiteral("allInputs"));
        allInputs->setSelectionMode(QAbstractItemView::ExtendedSelection);

        gridLayout_2->addWidget(allInputs, 1, 0, 3, 1);

        verticalSpacer = new QSpacerItem(20, 128, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 1, 1, 1, 1);

        simulationInputs = new QListWidget(wizardPage2);
        simulationInputs->setObjectName(QStringLiteral("simulationInputs"));
        simulationInputs->setSelectionMode(QAbstractItemView::ExtendedSelection);

        gridLayout_2->addWidget(simulationInputs, 1, 2, 3, 1);

        addButton = new QPushButton(wizardPage2);
        addButton->setObjectName(QStringLiteral("addButton"));
        addButton->setEnabled(false);

        gridLayout_2->addWidget(addButton, 2, 1, 1, 1);

        removeButton = new QPushButton(wizardPage2);
        removeButton->setObjectName(QStringLiteral("removeButton"));
        removeButton->setEnabled(false);

        gridLayout_2->addWidget(removeButton, 3, 1, 1, 1);

        ExportStateWizard->setPage(1, wizardPage2);
        wizardPage = new pqSGExportStateWizardPage3();
        wizardPage->setObjectName(QStringLiteral("wizardPage"));
        gridLayout_3 = new QGridLayout(wizardPage);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        nameWidget = new QTableWidget(wizardPage);
        if (nameWidget->columnCount() < 2)
            nameWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        nameWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        nameWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        nameWidget->setObjectName(QStringLiteral("nameWidget"));
        nameWidget->setAlternatingRowColors(true);
        nameWidget->setSelectionMode(QAbstractItemView::SingleSelection);
        nameWidget->horizontalHeader()->setStretchLastSection(true);

        gridLayout_3->addWidget(nameWidget, 0, 0, 1, 1);

        ExportStateWizard->setPage(2, wizardPage);
        wizardPage_2 = new QWizardPage();
        wizardPage_2->setObjectName(QStringLiteral("wizardPage_2"));
        verticalLayout = new QVBoxLayout(wizardPage_2);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        scrollArea = new QScrollArea(wizardPage_2);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setMinimumSize(QSize(620, 0));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 364, 602));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        formLayout_2->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_2->setLabelAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        formLayout_2->setFormAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_3 = new QLabel(scrollAreaWidgetContents);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_3);

        liveViz = new QCheckBox(scrollAreaWidgetContents);
        liveViz->setObjectName(QStringLiteral("liveViz"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, liveViz);

        label_5 = new QLabel(scrollAreaWidgetContents);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_5);

        outputRendering = new QCheckBox(scrollAreaWidgetContents);
        outputRendering->setObjectName(QStringLiteral("outputRendering"));
        outputRendering->setEnabled(true);
        outputRendering->setChecked(false);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, outputRendering);

        label_4 = new QLabel(scrollAreaWidgetContents);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        outputCinema = new QCheckBox(scrollAreaWidgetContents);
        outputCinema->setObjectName(QStringLiteral("outputCinema"));

        horizontalLayout->addWidget(outputCinema);


        formLayout_2->setLayout(2, QFormLayout::FieldRole, horizontalLayout);

        laRescaleDataRange = new QLabel(scrollAreaWidgetContents);
        laRescaleDataRange->setObjectName(QStringLiteral("laRescaleDataRange"));

        formLayout_2->setWidget(4, QFormLayout::LabelRole, laRescaleDataRange);

        rescaleDataRange = new QCheckBox(scrollAreaWidgetContents);
        rescaleDataRange->setObjectName(QStringLiteral("rescaleDataRange"));
        rescaleDataRange->setEnabled(true);
        rescaleDataRange->setLayoutDirection(Qt::LeftToRight);

        formLayout_2->setWidget(4, QFormLayout::FieldRole, rescaleDataRange);

        label_2 = new QLabel(scrollAreaWidgetContents);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout_2->setWidget(5, QFormLayout::LabelRole, label_2);

        timeCompartmentSize = new QSpinBox(scrollAreaWidgetContents);
        timeCompartmentSize->setObjectName(QStringLiteral("timeCompartmentSize"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(timeCompartmentSize->sizePolicy().hasHeightForWidth());
        timeCompartmentSize->setSizePolicy(sizePolicy);
        timeCompartmentSize->setMaximumSize(QSize(100, 16777215));
        timeCompartmentSize->setLayoutDirection(Qt::RightToLeft);
        timeCompartmentSize->setMinimum(1);
        timeCompartmentSize->setMaximum(1000);

        formLayout_2->setWidget(5, QFormLayout::FieldRole, timeCompartmentSize);

        fileNamePaddingAmountLabel = new QLabel(scrollAreaWidgetContents);
        fileNamePaddingAmountLabel->setObjectName(QStringLiteral("fileNamePaddingAmountLabel"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, fileNamePaddingAmountLabel);

        fileNamePaddingAmountSpinBox = new QSpinBox(scrollAreaWidgetContents);
        fileNamePaddingAmountSpinBox->setObjectName(QStringLiteral("fileNamePaddingAmountSpinBox"));
        fileNamePaddingAmountSpinBox->setMaximumSize(QSize(100, 16777215));
        fileNamePaddingAmountSpinBox->setLayoutDirection(Qt::RightToLeft);
        fileNamePaddingAmountSpinBox->setMaximum(10);

        formLayout_2->setWidget(3, QFormLayout::FieldRole, fileNamePaddingAmountSpinBox);


        verticalLayout_2->addLayout(formLayout_2);

        wViewSelection = new pqExportViewSelection(scrollAreaWidgetContents);
        wViewSelection->setObjectName(QStringLiteral("wViewSelection"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(wViewSelection->sizePolicy().hasHeightForWidth());
        wViewSelection->setSizePolicy(sizePolicy1);
        wViewSelection->setMinimumSize(QSize(0, 200));
        wViewSelection->setLayoutDirection(Qt::LeftToRight);

        verticalLayout_2->addWidget(wViewSelection);

        wCinemaTrackSelection = new pqCinemaTrackSelection(scrollAreaWidgetContents);
        wCinemaTrackSelection->setObjectName(QStringLiteral("wCinemaTrackSelection"));
        sizePolicy1.setHeightForWidth(wCinemaTrackSelection->sizePolicy().hasHeightForWidth());
        wCinemaTrackSelection->setSizePolicy(sizePolicy1);
        wCinemaTrackSelection->setMinimumSize(QSize(0, 200));

        verticalLayout_2->addWidget(wCinemaTrackSelection);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

        ExportStateWizard->addPage(wizardPage_2);

        retranslateUi(ExportStateWizard);

        QMetaObject::connectSlotsByName(ExportStateWizard);
    } // setupUi

    void retranslateUi(QWizard *ExportStateWizard)
    {
        ExportStateWizard->setWindowTitle(QApplication::translate("ExportStateWizard", "Export State", Q_NULLPTR));
        wizardPage1->setTitle(QApplication::translate("ExportStateWizard", "Export Co-Processing State", Q_NULLPTR));
        label->setText(QApplication::translate("ExportStateWizard", "This wizard will guide you through the steps required to export the current visualization state as a Python script that can be run in the co-processing component of ParaView.  Make sure to add appropriate writers for the desired pipelines to be used in the Writers menu.", Q_NULLPTR));
        label_6->setText(QApplication::translate("ExportStateWizard", "Please note - this wizard is deprecated in favor of the Catalyst Export Inspector as of ParaView 5.6 and will be removed in a future version.", Q_NULLPTR));
        wizardPage2->setTitle(QApplication::translate("ExportStateWizard", "Select Simulation Inputs", Q_NULLPTR));
        wizardPage2->setSubTitle(QApplication::translate("ExportStateWizard", "Select the sources in this visualization that are inputs from the simulation. Use Ctrl to select multiple sources.", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        showAllSources->setToolTip(QApplication::translate("ExportStateWizard", "<html><head/><body><p>Only sources that correspond to inputs from the simulation should be added.</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        showAllSources->setText(QApplication::translate("ExportStateWizard", "Show All Sources", Q_NULLPTR));
        addButton->setText(QApplication::translate("ExportStateWizard", "Add", Q_NULLPTR));
        removeButton->setText(QApplication::translate("ExportStateWizard", "Remove", Q_NULLPTR));
        wizardPage->setTitle(QApplication::translate("ExportStateWizard", "Name Simulation Inputs", Q_NULLPTR));
        wizardPage->setSubTitle(QApplication::translate("ExportStateWizard", "Assign names for the selected simulation inputs.", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = nameWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("ExportStateWizard", "Pipeline Name", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = nameWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("ExportStateWizard", "Simulation Name", Q_NULLPTR));
        wizardPage_2->setTitle(QApplication::translate("ExportStateWizard", "Configuration", Q_NULLPTR));
        wizardPage_2->setSubTitle(QApplication::translate("ExportStateWizard", "Select state configuration options.", Q_NULLPTR));
        label_3->setText(QApplication::translate("ExportStateWizard", "Live Visualization", Q_NULLPTR));
        liveViz->setText(QString());
        label_5->setText(QApplication::translate("ExportStateWizard", "Output rendering components i.e. views", Q_NULLPTR));
        outputRendering->setText(QString());
        label_4->setText(QApplication::translate("ExportStateWizard", "Output to Cinema", Q_NULLPTR));
        outputCinema->setText(QString());
        laRescaleDataRange->setText(QApplication::translate("ExportStateWizard", "Rescale to Data Range", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        rescaleDataRange->setToolTip(QApplication::translate("ExportStateWizard", "Check to rescale the data range every outputted time step.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        rescaleDataRange->setWhatsThis(QApplication::translate("ExportStateWizard", "Check to rescale the data range every outputted time step.", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        rescaleDataRange->setText(QString());
        label_2->setText(QApplication::translate("ExportStateWizard", "Time compartment size", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        timeCompartmentSize->setToolTip(QApplication::translate("ExportStateWizard", "The number of processes working together on a specific time step.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        timeCompartmentSize->setSuffix(QString());
        timeCompartmentSize->setPrefix(QString());
        fileNamePaddingAmountLabel->setText(QApplication::translate("ExportStateWizard", "File Name Padding Amount", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ExportStateWizard: public Ui_ExportStateWizard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQEXPORTSTATEWIZARD_H
