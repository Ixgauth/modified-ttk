/********************************************************************************
** Form generated from reading UI file 'pqCustomFilterDefinitionWizard.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQCUSTOMFILTERDEFINITIONWIZARD_H
#define UI_PQCUSTOMFILTERDEFINITIONWIZARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractScrollArea>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "pqFlatTreeView.h"

QT_BEGIN_NAMESPACE

class Ui_pqCustomFilterDefinitionWizard
{
public:
    QVBoxLayout *vboxLayout;
    QFrame *TitleFrame;
    QHBoxLayout *hboxLayout;
    QLabel *WizardImage;
    QStackedWidget *TitleStack;
    QWidget *TitleNamePage;
    QHBoxLayout *hboxLayout1;
    QLabel *label;
    QWidget *TitleInputPage;
    QHBoxLayout *hboxLayout2;
    QLabel *label_4;
    QWidget *TitleOutputPage;
    QHBoxLayout *hboxLayout3;
    QLabel *label_5;
    QWidget *TitlePropertyPage;
    QHBoxLayout *hboxLayout4;
    QLabel *label_6;
    QFrame *frame_4;
    QFrame *InputFrame;
    QGridLayout *gridLayout;
    QStackedWidget *PageStack;
    QWidget *NamePage;
    QGridLayout *gridLayout1;
    QSpacerItem *spacerItem;
    QLabel *label_3;
    QLabel *label_2;
    QLineEdit *CustomFilterName;
    QSpacerItem *spacerItem1;
    QWidget *InputPage;
    QGridLayout *gridLayout2;
    QLabel *label_9;
    pqFlatTreeView *InputPipeline;
    QTreeWidget *InputPorts;
    QLineEdit *InputName;
    QLabel *label_7;
    QLabel *label_8;
    QComboBox *InputCombo;
    QFrame *frame;
    QHBoxLayout *hboxLayout5;
    QSpacerItem *spacerItem2;
    QToolButton *AddInputButton;
    QToolButton *RemoveInputButton;
    QToolButton *InputUpButton;
    QToolButton *InputDownButton;
    QWidget *OutputPage;
    QGridLayout *gridLayout3;
    QLineEdit *OutputName;
    QFrame *frame_2;
    QHBoxLayout *hboxLayout6;
    QSpacerItem *spacerItem3;
    QToolButton *AddOutputButton;
    QToolButton *RemoveOutputButton;
    QToolButton *OutputUpButton;
    QToolButton *OutputDownButton;
    QLabel *label_15;
    QLabel *label_11;
    QTreeWidget *OutputPorts;
    pqFlatTreeView *OutputPipeline;
    QLabel *label_10;
    QComboBox *OutputCombo;
    QWidget *PropertyPage;
    QGridLayout *gridLayout4;
    QLineEdit *PropertyName;
    QComboBox *PropertyCombo;
    QLabel *label_13;
    QLabel *label_14;
    QFrame *frame_3;
    QHBoxLayout *hboxLayout7;
    QSpacerItem *spacerItem4;
    QToolButton *AddPropertyButton;
    QToolButton *RemovePropertyButton;
    QToolButton *PropertyUpButton;
    QToolButton *PropertyDownButton;
    QTreeWidget *PropertyList;
    pqFlatTreeView *PropertyPipeline;
    QLabel *label_12;
    QSpacerItem *spacerItem5;
    QFrame *frame_5;
    QSpacerItem *spacerItem6;
    QHBoxLayout *hboxLayout8;
    QSpacerItem *spacerItem7;
    QPushButton *BackButton;
    QPushButton *NextButton;
    QSpacerItem *spacerItem8;
    QPushButton *FinishButton;
    QPushButton *CancelButton;

    void setupUi(QDialog *pqCustomFilterDefinitionWizard)
    {
        if (pqCustomFilterDefinitionWizard->objectName().isEmpty())
            pqCustomFilterDefinitionWizard->setObjectName(QStringLiteral("pqCustomFilterDefinitionWizard"));
        pqCustomFilterDefinitionWizard->resize(500, 370);
        vboxLayout = new QVBoxLayout(pqCustomFilterDefinitionWizard);
        vboxLayout->setSpacing(0);
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        TitleFrame = new QFrame(pqCustomFilterDefinitionWizard);
        TitleFrame->setObjectName(QStringLiteral("TitleFrame"));
        QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(0));
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(TitleFrame->sizePolicy().hasHeightForWidth());
        TitleFrame->setSizePolicy(sizePolicy);
        TitleFrame->setMinimumSize(QSize(0, 70));
        TitleFrame->setMaximumSize(QSize(16777215, 70));
        TitleFrame->setFrameShape(QFrame::NoFrame);
        TitleFrame->setFrameShadow(QFrame::Plain);
        hboxLayout = new QHBoxLayout(TitleFrame);
        hboxLayout->setSpacing(0);
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        WizardImage = new QLabel(TitleFrame);
        WizardImage->setObjectName(QStringLiteral("WizardImage"));
        WizardImage->setMinimumSize(QSize(178, 0));
        WizardImage->setPixmap(QPixmap(QString::fromUtf8(":/pqWidgets/Icons/pvIcon64.png")));
        WizardImage->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        hboxLayout->addWidget(WizardImage);

        TitleStack = new QStackedWidget(TitleFrame);
        TitleStack->setObjectName(QStringLiteral("TitleStack"));
        TitleNamePage = new QWidget();
        TitleNamePage->setObjectName(QStringLiteral("TitleNamePage"));
        hboxLayout1 = new QHBoxLayout(TitleNamePage);
#ifndef Q_OS_MAC
        hboxLayout1->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        hboxLayout1->setContentsMargins(9, 9, 9, 9);
#endif
        hboxLayout1->setObjectName(QStringLiteral("hboxLayout1"));
        label = new QLabel(TitleNamePage);
        label->setObjectName(QStringLiteral("label"));

        hboxLayout1->addWidget(label);

        TitleStack->addWidget(TitleNamePage);
        TitleInputPage = new QWidget();
        TitleInputPage->setObjectName(QStringLiteral("TitleInputPage"));
        hboxLayout2 = new QHBoxLayout(TitleInputPage);
#ifndef Q_OS_MAC
        hboxLayout2->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        hboxLayout2->setContentsMargins(9, 9, 9, 9);
#endif
        hboxLayout2->setObjectName(QStringLiteral("hboxLayout2"));
        label_4 = new QLabel(TitleInputPage);
        label_4->setObjectName(QStringLiteral("label_4"));

        hboxLayout2->addWidget(label_4);

        TitleStack->addWidget(TitleInputPage);
        TitleOutputPage = new QWidget();
        TitleOutputPage->setObjectName(QStringLiteral("TitleOutputPage"));
        hboxLayout3 = new QHBoxLayout(TitleOutputPage);
#ifndef Q_OS_MAC
        hboxLayout3->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        hboxLayout3->setContentsMargins(9, 9, 9, 9);
#endif
        hboxLayout3->setObjectName(QStringLiteral("hboxLayout3"));
        label_5 = new QLabel(TitleOutputPage);
        label_5->setObjectName(QStringLiteral("label_5"));

        hboxLayout3->addWidget(label_5);

        TitleStack->addWidget(TitleOutputPage);
        TitlePropertyPage = new QWidget();
        TitlePropertyPage->setObjectName(QStringLiteral("TitlePropertyPage"));
        hboxLayout4 = new QHBoxLayout(TitlePropertyPage);
#ifndef Q_OS_MAC
        hboxLayout4->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        hboxLayout4->setContentsMargins(9, 9, 9, 9);
#endif
        hboxLayout4->setObjectName(QStringLiteral("hboxLayout4"));
        label_6 = new QLabel(TitlePropertyPage);
        label_6->setObjectName(QStringLiteral("label_6"));

        hboxLayout4->addWidget(label_6);

        TitleStack->addWidget(TitlePropertyPage);

        hboxLayout->addWidget(TitleStack);


        vboxLayout->addWidget(TitleFrame);

        frame_4 = new QFrame(pqCustomFilterDefinitionWizard);
        frame_4->setObjectName(QStringLiteral("frame_4"));
        frame_4->setFrameShape(QFrame::HLine);
        frame_4->setFrameShadow(QFrame::Sunken);

        vboxLayout->addWidget(frame_4);

        InputFrame = new QFrame(pqCustomFilterDefinitionWizard);
        InputFrame->setObjectName(QStringLiteral("InputFrame"));
        InputFrame->setFrameShape(QFrame::NoFrame);
        InputFrame->setFrameShadow(QFrame::Plain);
        gridLayout = new QGridLayout(InputFrame);
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        PageStack = new QStackedWidget(InputFrame);
        PageStack->setObjectName(QStringLiteral("PageStack"));
        NamePage = new QWidget();
        NamePage->setObjectName(QStringLiteral("NamePage"));
        gridLayout1 = new QGridLayout(NamePage);
#ifndef Q_OS_MAC
        gridLayout1->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout1->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout1->setObjectName(QStringLiteral("gridLayout1"));
        spacerItem = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout1->addItem(spacerItem, 2, 1, 1, 1);

        label_3 = new QLabel(NamePage);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setWordWrap(true);

        gridLayout1->addWidget(label_3, 1, 0, 1, 2);

        label_2 = new QLabel(NamePage);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout1->addWidget(label_2, 3, 0, 1, 1);

        CustomFilterName = new QLineEdit(NamePage);
        CustomFilterName->setObjectName(QStringLiteral("CustomFilterName"));

        gridLayout1->addWidget(CustomFilterName, 3, 1, 1, 1);

        spacerItem1 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout1->addItem(spacerItem1, 4, 1, 1, 1);

        PageStack->addWidget(NamePage);
        InputPage = new QWidget();
        InputPage->setObjectName(QStringLiteral("InputPage"));
        gridLayout2 = new QGridLayout(InputPage);
#ifndef Q_OS_MAC
        gridLayout2->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout2->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout2->setObjectName(QStringLiteral("gridLayout2"));
        label_9 = new QLabel(InputPage);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setWordWrap(true);

        gridLayout2->addWidget(label_9, 0, 0, 1, 3);

        InputPipeline = new pqFlatTreeView(InputPage);
        InputPipeline->setObjectName(QStringLiteral("InputPipeline"));
        QSizePolicy sizePolicy1(static_cast<QSizePolicy::Policy>(0), static_cast<QSizePolicy::Policy>(7));
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(InputPipeline->sizePolicy().hasHeightForWidth());
        InputPipeline->setSizePolicy(sizePolicy1);
        InputPipeline->setMinimumSize(QSize(140, 0));
        InputPipeline->setMaximumSize(QSize(140, 16777215));

        gridLayout2->addWidget(InputPipeline, 1, 0, 4, 1);

        InputPorts = new QTreeWidget(InputPage);
        InputPorts->setObjectName(QStringLiteral("InputPorts"));
        InputPorts->setAlternatingRowColors(true);
        InputPorts->setRootIsDecorated(false);
        InputPorts->setUniformRowHeights(true);

        gridLayout2->addWidget(InputPorts, 1, 1, 1, 2);

        InputName = new QLineEdit(InputPage);
        InputName->setObjectName(QStringLiteral("InputName"));

        gridLayout2->addWidget(InputName, 4, 2, 1, 1);

        label_7 = new QLabel(InputPage);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout2->addWidget(label_7, 3, 1, 1, 1);

        label_8 = new QLabel(InputPage);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout2->addWidget(label_8, 4, 1, 1, 1);

        InputCombo = new QComboBox(InputPage);
        InputCombo->setObjectName(QStringLiteral("InputCombo"));

        gridLayout2->addWidget(InputCombo, 3, 2, 1, 1);

        frame = new QFrame(InputPage);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Sunken);
        hboxLayout5 = new QHBoxLayout(frame);
        hboxLayout5->setSpacing(2);
        hboxLayout5->setContentsMargins(2, 2, 2, 2);
        hboxLayout5->setObjectName(QStringLiteral("hboxLayout5"));
        spacerItem2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout5->addItem(spacerItem2);

        AddInputButton = new QToolButton(frame);
        AddInputButton->setObjectName(QStringLiteral("AddInputButton"));
        const QIcon icon = QIcon(QString::fromUtf8(":/QtWidgets/Icons/pqPlus16.png"));
        AddInputButton->setIcon(icon);

        hboxLayout5->addWidget(AddInputButton);

        RemoveInputButton = new QToolButton(frame);
        RemoveInputButton->setObjectName(QStringLiteral("RemoveInputButton"));
        const QIcon icon1 = QIcon(QString::fromUtf8(":/pqWidgets/Icons/pqMinus16.png"));
        RemoveInputButton->setIcon(icon1);

        hboxLayout5->addWidget(RemoveInputButton);

        InputUpButton = new QToolButton(frame);
        InputUpButton->setObjectName(QStringLiteral("InputUpButton"));
        const QIcon icon2 = QIcon(QString::fromUtf8(":/pqWidgets/Icons/pqArrowUp16.png"));
        InputUpButton->setIcon(icon2);

        hboxLayout5->addWidget(InputUpButton);

        InputDownButton = new QToolButton(frame);
        InputDownButton->setObjectName(QStringLiteral("InputDownButton"));
        const QIcon icon3 = QIcon(QString::fromUtf8(":/pqWidgets/Icons/pqArrowDown16.png"));
        InputDownButton->setIcon(icon3);

        hboxLayout5->addWidget(InputDownButton);


        gridLayout2->addWidget(frame, 2, 1, 1, 2);

        PageStack->addWidget(InputPage);
        OutputPage = new QWidget();
        OutputPage->setObjectName(QStringLiteral("OutputPage"));
        gridLayout3 = new QGridLayout(OutputPage);
#ifndef Q_OS_MAC
        gridLayout3->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout3->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout3->setObjectName(QStringLiteral("gridLayout3"));
        OutputName = new QLineEdit(OutputPage);
        OutputName->setObjectName(QStringLiteral("OutputName"));

        gridLayout3->addWidget(OutputName, 4, 2, 1, 1);

        frame_2 = new QFrame(OutputPage);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setFrameShape(QFrame::Box);
        frame_2->setFrameShadow(QFrame::Sunken);
        hboxLayout6 = new QHBoxLayout(frame_2);
        hboxLayout6->setSpacing(2);
        hboxLayout6->setContentsMargins(2, 2, 2, 2);
        hboxLayout6->setObjectName(QStringLiteral("hboxLayout6"));
        spacerItem3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout6->addItem(spacerItem3);

        AddOutputButton = new QToolButton(frame_2);
        AddOutputButton->setObjectName(QStringLiteral("AddOutputButton"));
        AddOutputButton->setIcon(icon);

        hboxLayout6->addWidget(AddOutputButton);

        RemoveOutputButton = new QToolButton(frame_2);
        RemoveOutputButton->setObjectName(QStringLiteral("RemoveOutputButton"));
        RemoveOutputButton->setIcon(icon1);

        hboxLayout6->addWidget(RemoveOutputButton);

        OutputUpButton = new QToolButton(frame_2);
        OutputUpButton->setObjectName(QStringLiteral("OutputUpButton"));
        OutputUpButton->setIcon(icon2);

        hboxLayout6->addWidget(OutputUpButton);

        OutputDownButton = new QToolButton(frame_2);
        OutputDownButton->setObjectName(QStringLiteral("OutputDownButton"));
        OutputDownButton->setIcon(icon3);

        hboxLayout6->addWidget(OutputDownButton);


        gridLayout3->addWidget(frame_2, 2, 1, 1, 2);

        label_15 = new QLabel(OutputPage);
        label_15->setObjectName(QStringLiteral("label_15"));

        gridLayout3->addWidget(label_15, 3, 1, 1, 1);

        label_11 = new QLabel(OutputPage);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout3->addWidget(label_11, 4, 1, 1, 1);

        OutputPorts = new QTreeWidget(OutputPage);
        OutputPorts->setObjectName(QStringLiteral("OutputPorts"));
        OutputPorts->setAlternatingRowColors(true);
        OutputPorts->setRootIsDecorated(false);
        OutputPorts->setUniformRowHeights(true);

        gridLayout3->addWidget(OutputPorts, 1, 1, 1, 2);

        OutputPipeline = new pqFlatTreeView(OutputPage);
        OutputPipeline->setObjectName(QStringLiteral("OutputPipeline"));
        sizePolicy1.setHeightForWidth(OutputPipeline->sizePolicy().hasHeightForWidth());
        OutputPipeline->setSizePolicy(sizePolicy1);
        OutputPipeline->setMinimumSize(QSize(140, 0));
        OutputPipeline->setMaximumSize(QSize(140, 16777215));

        gridLayout3->addWidget(OutputPipeline, 1, 0, 3, 1);

        label_10 = new QLabel(OutputPage);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setWordWrap(true);

        gridLayout3->addWidget(label_10, 0, 0, 1, 3);

        OutputCombo = new QComboBox(OutputPage);
        OutputCombo->setObjectName(QStringLiteral("OutputCombo"));

        gridLayout3->addWidget(OutputCombo, 3, 2, 1, 1);

        PageStack->addWidget(OutputPage);
        PropertyPage = new QWidget();
        PropertyPage->setObjectName(QStringLiteral("PropertyPage"));
        gridLayout4 = new QGridLayout(PropertyPage);
#ifndef Q_OS_MAC
        gridLayout4->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout4->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout4->setObjectName(QStringLiteral("gridLayout4"));
        PropertyName = new QLineEdit(PropertyPage);
        PropertyName->setObjectName(QStringLiteral("PropertyName"));

        gridLayout4->addWidget(PropertyName, 4, 2, 1, 1);

        PropertyCombo = new QComboBox(PropertyPage);
        PropertyCombo->setObjectName(QStringLiteral("PropertyCombo"));

        gridLayout4->addWidget(PropertyCombo, 3, 2, 1, 1);

        label_13 = new QLabel(PropertyPage);
        label_13->setObjectName(QStringLiteral("label_13"));

        gridLayout4->addWidget(label_13, 3, 1, 1, 1);

        label_14 = new QLabel(PropertyPage);
        label_14->setObjectName(QStringLiteral("label_14"));

        gridLayout4->addWidget(label_14, 4, 1, 1, 1);

        frame_3 = new QFrame(PropertyPage);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setFrameShape(QFrame::Box);
        frame_3->setFrameShadow(QFrame::Sunken);
        hboxLayout7 = new QHBoxLayout(frame_3);
        hboxLayout7->setSpacing(2);
        hboxLayout7->setContentsMargins(2, 2, 2, 2);
        hboxLayout7->setObjectName(QStringLiteral("hboxLayout7"));
        spacerItem4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout7->addItem(spacerItem4);

        AddPropertyButton = new QToolButton(frame_3);
        AddPropertyButton->setObjectName(QStringLiteral("AddPropertyButton"));
        AddPropertyButton->setIcon(icon);

        hboxLayout7->addWidget(AddPropertyButton);

        RemovePropertyButton = new QToolButton(frame_3);
        RemovePropertyButton->setObjectName(QStringLiteral("RemovePropertyButton"));
        RemovePropertyButton->setIcon(icon1);

        hboxLayout7->addWidget(RemovePropertyButton);

        PropertyUpButton = new QToolButton(frame_3);
        PropertyUpButton->setObjectName(QStringLiteral("PropertyUpButton"));
        PropertyUpButton->setIcon(icon2);

        hboxLayout7->addWidget(PropertyUpButton);

        PropertyDownButton = new QToolButton(frame_3);
        PropertyDownButton->setObjectName(QStringLiteral("PropertyDownButton"));
        PropertyDownButton->setIcon(icon3);

        hboxLayout7->addWidget(PropertyDownButton);


        gridLayout4->addWidget(frame_3, 2, 1, 1, 2);

        PropertyList = new QTreeWidget(PropertyPage);
        PropertyList->setObjectName(QStringLiteral("PropertyList"));
        PropertyList->setAlternatingRowColors(true);
        PropertyList->setRootIsDecorated(false);
        PropertyList->setUniformRowHeights(true);

        gridLayout4->addWidget(PropertyList, 1, 1, 1, 2);

        PropertyPipeline = new pqFlatTreeView(PropertyPage);
        PropertyPipeline->setObjectName(QStringLiteral("PropertyPipeline"));
        sizePolicy1.setHeightForWidth(PropertyPipeline->sizePolicy().hasHeightForWidth());
        PropertyPipeline->setSizePolicy(sizePolicy1);
        PropertyPipeline->setMinimumSize(QSize(140, 0));
        PropertyPipeline->setMaximumSize(QSize(140, 16777215));

        gridLayout4->addWidget(PropertyPipeline, 1, 0, 4, 1);

        label_12 = new QLabel(PropertyPage);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setWordWrap(true);

        gridLayout4->addWidget(label_12, 0, 0, 1, 3);

        PageStack->addWidget(PropertyPage);

        gridLayout->addWidget(PageStack, 0, 1, 1, 1);

        spacerItem5 = new QSpacerItem(16, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem5, 0, 2, 1, 1);

        frame_5 = new QFrame(InputFrame);
        frame_5->setObjectName(QStringLiteral("frame_5"));
        frame_5->setFrameShape(QFrame::HLine);
        frame_5->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(frame_5, 1, 0, 1, 3);

        spacerItem6 = new QSpacerItem(16, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem6, 0, 0, 1, 1);

        hboxLayout8 = new QHBoxLayout();
        hboxLayout8->setSpacing(2);
        hboxLayout8->setContentsMargins(0, 0, 0, 0);
        hboxLayout8->setObjectName(QStringLiteral("hboxLayout8"));
        spacerItem7 = new QSpacerItem(80, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout8->addItem(spacerItem7);

        BackButton = new QPushButton(InputFrame);
        BackButton->setObjectName(QStringLiteral("BackButton"));
        BackButton->setAutoDefault(false);

        hboxLayout8->addWidget(BackButton);

        NextButton = new QPushButton(InputFrame);
        NextButton->setObjectName(QStringLiteral("NextButton"));
        NextButton->setAutoDefault(false);

        hboxLayout8->addWidget(NextButton);

        spacerItem8 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        hboxLayout8->addItem(spacerItem8);

        FinishButton = new QPushButton(InputFrame);
        FinishButton->setObjectName(QStringLiteral("FinishButton"));
        FinishButton->setAutoDefault(false);

        hboxLayout8->addWidget(FinishButton);

        CancelButton = new QPushButton(InputFrame);
        CancelButton->setObjectName(QStringLiteral("CancelButton"));
        CancelButton->setAutoDefault(false);

        hboxLayout8->addWidget(CancelButton);


        gridLayout->addLayout(hboxLayout8, 2, 0, 1, 3);


        vboxLayout->addWidget(InputFrame);

        QWidget::setTabOrder(CustomFilterName, InputPipeline);
        QWidget::setTabOrder(InputPipeline, InputName);
        QWidget::setTabOrder(InputName, InputPorts);
        QWidget::setTabOrder(InputPorts, AddInputButton);
        QWidget::setTabOrder(AddInputButton, RemoveInputButton);
        QWidget::setTabOrder(RemoveInputButton, InputUpButton);
        QWidget::setTabOrder(InputUpButton, InputDownButton);
        QWidget::setTabOrder(InputDownButton, OutputPipeline);
        QWidget::setTabOrder(OutputPipeline, OutputName);
        QWidget::setTabOrder(OutputName, OutputPorts);
        QWidget::setTabOrder(OutputPorts, AddOutputButton);
        QWidget::setTabOrder(AddOutputButton, RemoveOutputButton);
        QWidget::setTabOrder(RemoveOutputButton, OutputUpButton);
        QWidget::setTabOrder(OutputUpButton, OutputDownButton);
        QWidget::setTabOrder(OutputDownButton, PropertyPipeline);
        QWidget::setTabOrder(PropertyPipeline, PropertyCombo);
        QWidget::setTabOrder(PropertyCombo, PropertyName);
        QWidget::setTabOrder(PropertyName, PropertyList);
        QWidget::setTabOrder(PropertyList, AddPropertyButton);
        QWidget::setTabOrder(AddPropertyButton, RemovePropertyButton);
        QWidget::setTabOrder(RemovePropertyButton, PropertyUpButton);
        QWidget::setTabOrder(PropertyUpButton, PropertyDownButton);
        QWidget::setTabOrder(PropertyDownButton, NextButton);
        QWidget::setTabOrder(NextButton, BackButton);
        QWidget::setTabOrder(BackButton, FinishButton);
        QWidget::setTabOrder(FinishButton, CancelButton);

        retranslateUi(pqCustomFilterDefinitionWizard);

        TitleStack->setCurrentIndex(0);
        PageStack->setCurrentIndex(0);
        NextButton->setDefault(true);


        QMetaObject::connectSlotsByName(pqCustomFilterDefinitionWizard);
    } // setupUi

    void retranslateUi(QDialog *pqCustomFilterDefinitionWizard)
    {
        pqCustomFilterDefinitionWizard->setWindowTitle(QApplication::translate("pqCustomFilterDefinitionWizard", "Create Custom Filter", Q_NULLPTR));
        WizardImage->setText(QString());
        label->setText(QApplication::translate("pqCustomFilterDefinitionWizard", "<b>Choose a Name</b><br>&nbsp;&nbsp;&nbsp;Enter a name for the custom filter.", Q_NULLPTR));
        label_4->setText(QApplication::translate("pqCustomFilterDefinitionWizard", "<b>Define the Inputs</b><br>&nbsp;&nbsp;&nbsp;Select and name the input ports.", Q_NULLPTR));
        label_5->setText(QApplication::translate("pqCustomFilterDefinitionWizard", "<b>Define the Outputs</b><br>&nbsp;&nbsp;&nbsp;Select and name the output ports.", Q_NULLPTR));
        label_6->setText(QApplication::translate("pqCustomFilterDefinitionWizard", "<b>Define the Properties</b><br>&nbsp;&nbsp;&nbsp;Select and name the exposed properties.", Q_NULLPTR));
        label_3->setText(QApplication::translate("pqCustomFilterDefinitionWizard", "The name will be used to identify the custom filter. It should be unique. The name should also indicate what the custom filter will be used for.", Q_NULLPTR));
        label_2->setText(QApplication::translate("pqCustomFilterDefinitionWizard", "Custom Filter Name", Q_NULLPTR));
#ifndef QT_NO_WHATSTHIS
        CustomFilterName->setWhatsThis(QApplication::translate("pqCustomFilterDefinitionWizard", "Enter the custom filter name here.", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        label_9->setText(QApplication::translate("pqCustomFilterDefinitionWizard", "Select an object from the pipeline layout on the left. Then, select the input property from that object to expose. Give the input port a name and add it to the list.", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem = InputPorts->headerItem();
        ___qtreewidgetitem->setText(2, QApplication::translate("pqCustomFilterDefinitionWizard", "Name", Q_NULLPTR));
        ___qtreewidgetitem->setText(1, QApplication::translate("pqCustomFilterDefinitionWizard", "Property", Q_NULLPTR));
        ___qtreewidgetitem->setText(0, QApplication::translate("pqCustomFilterDefinitionWizard", "Object", Q_NULLPTR));
        label_7->setText(QApplication::translate("pqCustomFilterDefinitionWizard", "Input Property", Q_NULLPTR));
        label_8->setText(QApplication::translate("pqCustomFilterDefinitionWizard", "Input Name", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        AddInputButton->setToolTip(QApplication::translate("pqCustomFilterDefinitionWizard", "Add Input", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        AddInputButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        RemoveInputButton->setToolTip(QApplication::translate("pqCustomFilterDefinitionWizard", "Remove Input", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        RemoveInputButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        InputUpButton->setToolTip(QApplication::translate("pqCustomFilterDefinitionWizard", "Move Up", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        InputUpButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        InputDownButton->setToolTip(QApplication::translate("pqCustomFilterDefinitionWizard", "Move Down", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        InputDownButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        AddOutputButton->setToolTip(QApplication::translate("pqCustomFilterDefinitionWizard", "Add Output", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        AddOutputButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        RemoveOutputButton->setToolTip(QApplication::translate("pqCustomFilterDefinitionWizard", "Remove Output", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        RemoveOutputButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        OutputUpButton->setToolTip(QApplication::translate("pqCustomFilterDefinitionWizard", "Move Up", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        OutputUpButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        OutputDownButton->setToolTip(QApplication::translate("pqCustomFilterDefinitionWizard", "Move Down", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        OutputDownButton->setText(QString());
        label_15->setText(QApplication::translate("pqCustomFilterDefinitionWizard", "Output Port", Q_NULLPTR));
        label_11->setText(QApplication::translate("pqCustomFilterDefinitionWizard", "Output Name", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem1 = OutputPorts->headerItem();
        ___qtreewidgetitem1->setText(1, QApplication::translate("pqCustomFilterDefinitionWizard", "Name", Q_NULLPTR));
        ___qtreewidgetitem1->setText(0, QApplication::translate("pqCustomFilterDefinitionWizard", "Object", Q_NULLPTR));
        label_10->setText(QApplication::translate("pqCustomFilterDefinitionWizard", "Select an object from the pipeline layout on the left. Give the output port a name and add it to the list.", Q_NULLPTR));
        label_13->setText(QApplication::translate("pqCustomFilterDefinitionWizard", "Property", Q_NULLPTR));
        label_14->setText(QApplication::translate("pqCustomFilterDefinitionWizard", "Property Name", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        AddPropertyButton->setToolTip(QApplication::translate("pqCustomFilterDefinitionWizard", "Add Property", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        AddPropertyButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        RemovePropertyButton->setToolTip(QApplication::translate("pqCustomFilterDefinitionWizard", "Remove Property", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        RemovePropertyButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        PropertyUpButton->setToolTip(QApplication::translate("pqCustomFilterDefinitionWizard", "Move Up", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        PropertyUpButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        PropertyDownButton->setToolTip(QApplication::translate("pqCustomFilterDefinitionWizard", "Move Down", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        PropertyDownButton->setText(QString());
        QTreeWidgetItem *___qtreewidgetitem2 = PropertyList->headerItem();
        ___qtreewidgetitem2->setText(2, QApplication::translate("pqCustomFilterDefinitionWizard", "Name", Q_NULLPTR));
        ___qtreewidgetitem2->setText(1, QApplication::translate("pqCustomFilterDefinitionWizard", "Property", Q_NULLPTR));
        ___qtreewidgetitem2->setText(0, QApplication::translate("pqCustomFilterDefinitionWizard", "Object", Q_NULLPTR));
        label_12->setText(QApplication::translate("pqCustomFilterDefinitionWizard", "Select an object from the pipeline layout on the left. Then, select the property from that object to expose. Give the property a name and add it to the list.", Q_NULLPTR));
        BackButton->setText(QApplication::translate("pqCustomFilterDefinitionWizard", "< &Back", Q_NULLPTR));
        NextButton->setText(QApplication::translate("pqCustomFilterDefinitionWizard", "&Next >", Q_NULLPTR));
        FinishButton->setText(QApplication::translate("pqCustomFilterDefinitionWizard", "&Finish", Q_NULLPTR));
        CancelButton->setText(QApplication::translate("pqCustomFilterDefinitionWizard", "Cancel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class pqCustomFilterDefinitionWizard: public Ui_pqCustomFilterDefinitionWizard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQCUSTOMFILTERDEFINITIONWIZARD_H
