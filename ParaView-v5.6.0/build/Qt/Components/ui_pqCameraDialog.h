/********************************************************************************
** Form generated from reading UI file 'pqCameraDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQCAMERADIALOG_H
#define UI_PQCAMERADIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "pqDoubleLineEdit.h"
#include "pqDoubleRangeWidget.h"

QT_BEGIN_NAMESPACE

class Ui_pqCameraDialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_4;
    QLabel *label;
    QFrame *line;
    QHBoxLayout *horizontalLayout_3;
    QToolButton *viewXPlus;
    QToolButton *viewXMinus;
    QToolButton *viewYPlus;
    QToolButton *viewYMinus;
    QToolButton *viewZPlus;
    QToolButton *viewZMinus;
    QSpacerItem *spacer;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_2;
    QFrame *line_2;
    QHBoxLayout *horizontalLayout_4;
    QGridLayout *customViewpointGridLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *configureCustomViewpoints;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_3;
    QFrame *line_3;
    QHBoxLayout *horizontalLayout_5;
    pqDoubleLineEdit *CenterX;
    pqDoubleLineEdit *CenterY;
    pqDoubleLineEdit *CenterZ;
    QCheckBox *AutoResetCenterOfRotation;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_4;
    QFrame *line_4;
    pqDoubleRangeWidget *rotationFactor;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_5;
    QFrame *line_5;
    QGridLayout *gridLayout;
    QLabel *label_22;
    pqDoubleLineEdit *position0;
    pqDoubleLineEdit *position1;
    pqDoubleLineEdit *position2;
    QLabel *label_17;
    pqDoubleLineEdit *focalPoint0;
    pqDoubleLineEdit *focalPoint1;
    pqDoubleLineEdit *focalPoint2;
    QLabel *label_14;
    pqDoubleLineEdit *viewUp0;
    pqDoubleLineEdit *viewUp1;
    pqDoubleLineEdit *viewUp2;
    QLabel *label_23;
    QDoubleSpinBox *viewAngle;
    QPushButton *loadCameraConfiguration;
    QPushButton *saveCameraConfiguration;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_6;
    QFrame *line_6;
    QGridLayout *gridLayout_2;
    QPushButton *rollButton;
    QDoubleSpinBox *rollAngle;
    QLabel *label_20;
    QPushButton *elevationButton;
    QDoubleSpinBox *elevationAngle;
    QLabel *label_21;
    QPushButton *azimuthButton;
    QDoubleSpinBox *azimuthAngle;
    QLabel *label_16;
    QPushButton *zoomInButton;
    QDoubleSpinBox *zoomFactor;
    QPushButton *zoomOutButton;
    QLabel *label_7;
    QFrame *line_7;
    QGridLayout *gridLayout_3;
    QCheckBox *interactiveViewLinkBackground;
    QLabel *label_InteractiveViewLinkOpacity;
    pqDoubleRangeWidget *interactiveViewLinkOpacity;
    QComboBox *interactiveViewLinkComboBox;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *pqCameraDialog)
    {
        if (pqCameraDialog->objectName().isEmpty())
            pqCameraDialog->setObjectName(QStringLiteral("pqCameraDialog"));
        pqCameraDialog->setWindowModality(Qt::NonModal);
        pqCameraDialog->resize(422, 741);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pqCameraDialog->sizePolicy().hasHeightForWidth());
        pqCameraDialog->setSizePolicy(sizePolicy);
        verticalLayout_3 = new QVBoxLayout(pqCameraDialog);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        scrollArea = new QScrollArea(pqCameraDialog);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QStringLiteral("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 404, 693));
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents_2);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setSizeConstraint(QLayout::SetMinimumSize);
        label = new QLabel(scrollAreaWidgetContents_2);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        verticalLayout_4->addWidget(label);

        line = new QFrame(scrollAreaWidgetContents_2);
        line->setObjectName(QStringLiteral("line"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(line->sizePolicy().hasHeightForWidth());
        line->setSizePolicy(sizePolicy2);
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_4->addWidget(line);


        verticalLayout->addLayout(verticalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        viewXPlus = new QToolButton(scrollAreaWidgetContents_2);
        viewXPlus->setObjectName(QStringLiteral("viewXPlus"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/pqWidgets/Icons/pqXPlus24.png"), QSize(), QIcon::Normal, QIcon::Off);
        viewXPlus->setIcon(icon);
        viewXPlus->setIconSize(QSize(24, 24));

        horizontalLayout_3->addWidget(viewXPlus);

        viewXMinus = new QToolButton(scrollAreaWidgetContents_2);
        viewXMinus->setObjectName(QStringLiteral("viewXMinus"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/pqWidgets/Icons/pqXMinus24.png"), QSize(), QIcon::Normal, QIcon::Off);
        viewXMinus->setIcon(icon1);
        viewXMinus->setIconSize(QSize(24, 24));

        horizontalLayout_3->addWidget(viewXMinus);

        viewYPlus = new QToolButton(scrollAreaWidgetContents_2);
        viewYPlus->setObjectName(QStringLiteral("viewYPlus"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/pqWidgets/Icons/pqYPlus24.png"), QSize(), QIcon::Normal, QIcon::Off);
        viewYPlus->setIcon(icon2);
        viewYPlus->setIconSize(QSize(24, 24));

        horizontalLayout_3->addWidget(viewYPlus);

        viewYMinus = new QToolButton(scrollAreaWidgetContents_2);
        viewYMinus->setObjectName(QStringLiteral("viewYMinus"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/pqWidgets/Icons/pqYMinus24.png"), QSize(), QIcon::Normal, QIcon::Off);
        viewYMinus->setIcon(icon3);
        viewYMinus->setIconSize(QSize(24, 24));

        horizontalLayout_3->addWidget(viewYMinus);

        viewZPlus = new QToolButton(scrollAreaWidgetContents_2);
        viewZPlus->setObjectName(QStringLiteral("viewZPlus"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/pqWidgets/Icons/pqZPlus24.png"), QSize(), QIcon::Normal, QIcon::Off);
        viewZPlus->setIcon(icon4);
        viewZPlus->setIconSize(QSize(24, 24));

        horizontalLayout_3->addWidget(viewZPlus);

        viewZMinus = new QToolButton(scrollAreaWidgetContents_2);
        viewZMinus->setObjectName(QStringLiteral("viewZMinus"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/pqWidgets/Icons/pqZMinus24.png"), QSize(), QIcon::Normal, QIcon::Off);
        viewZMinus->setIcon(icon5);
        viewZMinus->setIconSize(QSize(24, 24));

        horizontalLayout_3->addWidget(viewZMinus);

        spacer = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(spacer);


        verticalLayout->addLayout(horizontalLayout_3);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setSizeConstraint(QLayout::SetMinimumSize);
        label_2 = new QLabel(scrollAreaWidgetContents_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);
        label_2->setFont(font);

        verticalLayout_5->addWidget(label_2);

        line_2 = new QFrame(scrollAreaWidgetContents_2);
        line_2->setObjectName(QStringLiteral("line_2"));
        sizePolicy2.setHeightForWidth(line_2->sizePolicy().hasHeightForWidth());
        line_2->setSizePolicy(sizePolicy2);
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_5->addWidget(line_2);


        verticalLayout->addLayout(verticalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        customViewpointGridLayout = new QGridLayout();
        customViewpointGridLayout->setObjectName(QStringLiteral("customViewpointGridLayout"));

        horizontalLayout_4->addLayout(customViewpointGridLayout);

        horizontalSpacer_2 = new QSpacerItem(49, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        configureCustomViewpoints = new QPushButton(scrollAreaWidgetContents_2);
        configureCustomViewpoints->setObjectName(QStringLiteral("configureCustomViewpoints"));

        horizontalLayout_4->addWidget(configureCustomViewpoints);

        horizontalLayout_4->setStretch(0, 1);

        verticalLayout->addLayout(horizontalLayout_4);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setSizeConstraint(QLayout::SetMinimumSize);
        label_3 = new QLabel(scrollAreaWidgetContents_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);
        label_3->setFont(font);

        verticalLayout_6->addWidget(label_3);

        line_3 = new QFrame(scrollAreaWidgetContents_2);
        line_3->setObjectName(QStringLiteral("line_3"));
        sizePolicy2.setHeightForWidth(line_3->sizePolicy().hasHeightForWidth());
        line_3->setSizePolicy(sizePolicy2);
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout_6->addWidget(line_3);


        verticalLayout->addLayout(verticalLayout_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        CenterX = new pqDoubleLineEdit(scrollAreaWidgetContents_2);
        CenterX->setObjectName(QStringLiteral("CenterX"));

        horizontalLayout_5->addWidget(CenterX);

        CenterY = new pqDoubleLineEdit(scrollAreaWidgetContents_2);
        CenterY->setObjectName(QStringLiteral("CenterY"));

        horizontalLayout_5->addWidget(CenterY);

        CenterZ = new pqDoubleLineEdit(scrollAreaWidgetContents_2);
        CenterZ->setObjectName(QStringLiteral("CenterZ"));

        horizontalLayout_5->addWidget(CenterZ);


        verticalLayout->addLayout(horizontalLayout_5);

        AutoResetCenterOfRotation = new QCheckBox(scrollAreaWidgetContents_2);
        AutoResetCenterOfRotation->setObjectName(QStringLiteral("AutoResetCenterOfRotation"));

        verticalLayout->addWidget(AutoResetCenterOfRotation);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(0);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_7->setSizeConstraint(QLayout::SetMinimumSize);
        label_4 = new QLabel(scrollAreaWidgetContents_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        sizePolicy1.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy1);
        label_4->setFont(font);

        verticalLayout_7->addWidget(label_4);

        line_4 = new QFrame(scrollAreaWidgetContents_2);
        line_4->setObjectName(QStringLiteral("line_4"));
        sizePolicy2.setHeightForWidth(line_4->sizePolicy().hasHeightForWidth());
        line_4->setSizePolicy(sizePolicy2);
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        verticalLayout_7->addWidget(line_4);


        verticalLayout->addLayout(verticalLayout_7);

        rotationFactor = new pqDoubleRangeWidget(scrollAreaWidgetContents_2);
        rotationFactor->setObjectName(QStringLiteral("rotationFactor"));
        rotationFactor->setProperty("StrictRange", QVariant(true));

        verticalLayout->addWidget(rotationFactor);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(0);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalLayout_8->setSizeConstraint(QLayout::SetMinimumSize);
        label_5 = new QLabel(scrollAreaWidgetContents_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        sizePolicy1.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy1);
        label_5->setFont(font);

        verticalLayout_8->addWidget(label_5);

        line_5 = new QFrame(scrollAreaWidgetContents_2);
        line_5->setObjectName(QStringLiteral("line_5"));
        sizePolicy2.setHeightForWidth(line_5->sizePolicy().hasHeightForWidth());
        line_5->setSizePolicy(sizePolicy2);
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);

        verticalLayout_8->addWidget(line_5);


        verticalLayout->addLayout(verticalLayout_8);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_22 = new QLabel(scrollAreaWidgetContents_2);
        label_22->setObjectName(QStringLiteral("label_22"));

        gridLayout->addWidget(label_22, 0, 0, 1, 1);

        position0 = new pqDoubleLineEdit(scrollAreaWidgetContents_2);
        position0->setObjectName(QStringLiteral("position0"));

        gridLayout->addWidget(position0, 0, 1, 1, 1);

        position1 = new pqDoubleLineEdit(scrollAreaWidgetContents_2);
        position1->setObjectName(QStringLiteral("position1"));

        gridLayout->addWidget(position1, 0, 2, 1, 1);

        position2 = new pqDoubleLineEdit(scrollAreaWidgetContents_2);
        position2->setObjectName(QStringLiteral("position2"));

        gridLayout->addWidget(position2, 0, 3, 1, 1);

        label_17 = new QLabel(scrollAreaWidgetContents_2);
        label_17->setObjectName(QStringLiteral("label_17"));

        gridLayout->addWidget(label_17, 1, 0, 1, 1);

        focalPoint0 = new pqDoubleLineEdit(scrollAreaWidgetContents_2);
        focalPoint0->setObjectName(QStringLiteral("focalPoint0"));

        gridLayout->addWidget(focalPoint0, 1, 1, 1, 1);

        focalPoint1 = new pqDoubleLineEdit(scrollAreaWidgetContents_2);
        focalPoint1->setObjectName(QStringLiteral("focalPoint1"));

        gridLayout->addWidget(focalPoint1, 1, 2, 1, 1);

        focalPoint2 = new pqDoubleLineEdit(scrollAreaWidgetContents_2);
        focalPoint2->setObjectName(QStringLiteral("focalPoint2"));

        gridLayout->addWidget(focalPoint2, 1, 3, 1, 1);

        label_14 = new QLabel(scrollAreaWidgetContents_2);
        label_14->setObjectName(QStringLiteral("label_14"));

        gridLayout->addWidget(label_14, 2, 0, 1, 1);

        viewUp0 = new pqDoubleLineEdit(scrollAreaWidgetContents_2);
        viewUp0->setObjectName(QStringLiteral("viewUp0"));

        gridLayout->addWidget(viewUp0, 2, 1, 1, 1);

        viewUp1 = new pqDoubleLineEdit(scrollAreaWidgetContents_2);
        viewUp1->setObjectName(QStringLiteral("viewUp1"));

        gridLayout->addWidget(viewUp1, 2, 2, 1, 1);

        viewUp2 = new pqDoubleLineEdit(scrollAreaWidgetContents_2);
        viewUp2->setObjectName(QStringLiteral("viewUp2"));

        gridLayout->addWidget(viewUp2, 2, 3, 1, 1);

        label_23 = new QLabel(scrollAreaWidgetContents_2);
        label_23->setObjectName(QStringLiteral("label_23"));

        gridLayout->addWidget(label_23, 3, 0, 1, 1);

        viewAngle = new QDoubleSpinBox(scrollAreaWidgetContents_2);
        viewAngle->setObjectName(QStringLiteral("viewAngle"));
        viewAngle->setMinimum(-360);
        viewAngle->setMaximum(360);

        gridLayout->addWidget(viewAngle, 3, 1, 1, 1);

        loadCameraConfiguration = new QPushButton(scrollAreaWidgetContents_2);
        loadCameraConfiguration->setObjectName(QStringLiteral("loadCameraConfiguration"));

        gridLayout->addWidget(loadCameraConfiguration, 3, 2, 1, 1);

        saveCameraConfiguration = new QPushButton(scrollAreaWidgetContents_2);
        saveCameraConfiguration->setObjectName(QStringLiteral("saveCameraConfiguration"));

        gridLayout->addWidget(saveCameraConfiguration, 3, 3, 1, 1);


        verticalLayout->addLayout(gridLayout);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setSpacing(0);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        verticalLayout_9->setSizeConstraint(QLayout::SetMinimumSize);
        label_6 = new QLabel(scrollAreaWidgetContents_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        sizePolicy1.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy1);
        label_6->setFont(font);

        verticalLayout_9->addWidget(label_6);

        line_6 = new QFrame(scrollAreaWidgetContents_2);
        line_6->setObjectName(QStringLiteral("line_6"));
        sizePolicy2.setHeightForWidth(line_6->sizePolicy().hasHeightForWidth());
        line_6->setSizePolicy(sizePolicy2);
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);

        verticalLayout_9->addWidget(line_6);


        verticalLayout->addLayout(verticalLayout_9);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        rollButton = new QPushButton(scrollAreaWidgetContents_2);
        rollButton->setObjectName(QStringLiteral("rollButton"));
        QIcon icon6;
        icon6.addFile(QStringLiteral("."), QSize(), QIcon::Normal, QIcon::Off);
        rollButton->setIcon(icon6);
        rollButton->setIconSize(QSize(24, 24));

        gridLayout_2->addWidget(rollButton, 0, 0, 1, 1);

        rollAngle = new QDoubleSpinBox(scrollAreaWidgetContents_2);
        rollAngle->setObjectName(QStringLiteral("rollAngle"));
        rollAngle->setMinimum(-360);
        rollAngle->setMaximum(360);

        gridLayout_2->addWidget(rollAngle, 0, 1, 1, 1);

        label_20 = new QLabel(scrollAreaWidgetContents_2);
        label_20->setObjectName(QStringLiteral("label_20"));
        QSizePolicy sizePolicy3(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_20->sizePolicy().hasHeightForWidth());
        label_20->setSizePolicy(sizePolicy3);

        gridLayout_2->addWidget(label_20, 0, 2, 1, 1);

        elevationButton = new QPushButton(scrollAreaWidgetContents_2);
        elevationButton->setObjectName(QStringLiteral("elevationButton"));
        elevationButton->setIcon(icon6);
        elevationButton->setIconSize(QSize(24, 24));

        gridLayout_2->addWidget(elevationButton, 1, 0, 1, 1);

        elevationAngle = new QDoubleSpinBox(scrollAreaWidgetContents_2);
        elevationAngle->setObjectName(QStringLiteral("elevationAngle"));
        elevationAngle->setMinimum(-360);
        elevationAngle->setMaximum(360);

        gridLayout_2->addWidget(elevationAngle, 1, 1, 1, 1);

        label_21 = new QLabel(scrollAreaWidgetContents_2);
        label_21->setObjectName(QStringLiteral("label_21"));
        sizePolicy3.setHeightForWidth(label_21->sizePolicy().hasHeightForWidth());
        label_21->setSizePolicy(sizePolicy3);

        gridLayout_2->addWidget(label_21, 1, 2, 1, 1);

        azimuthButton = new QPushButton(scrollAreaWidgetContents_2);
        azimuthButton->setObjectName(QStringLiteral("azimuthButton"));
        azimuthButton->setIcon(icon6);
        azimuthButton->setIconSize(QSize(24, 24));

        gridLayout_2->addWidget(azimuthButton, 2, 0, 1, 1);

        azimuthAngle = new QDoubleSpinBox(scrollAreaWidgetContents_2);
        azimuthAngle->setObjectName(QStringLiteral("azimuthAngle"));
        azimuthAngle->setMinimum(-360);
        azimuthAngle->setMaximum(360);

        gridLayout_2->addWidget(azimuthAngle, 2, 1, 1, 1);

        label_16 = new QLabel(scrollAreaWidgetContents_2);
        label_16->setObjectName(QStringLiteral("label_16"));
        sizePolicy3.setHeightForWidth(label_16->sizePolicy().hasHeightForWidth());
        label_16->setSizePolicy(sizePolicy3);

        gridLayout_2->addWidget(label_16, 2, 2, 1, 1);

        zoomInButton = new QPushButton(scrollAreaWidgetContents_2);
        zoomInButton->setObjectName(QStringLiteral("zoomInButton"));
        zoomInButton->setIcon(icon6);
        zoomInButton->setIconSize(QSize(24, 24));

        gridLayout_2->addWidget(zoomInButton, 3, 0, 1, 1);

        zoomFactor = new QDoubleSpinBox(scrollAreaWidgetContents_2);
        zoomFactor->setObjectName(QStringLiteral("zoomFactor"));
        zoomFactor->setDecimals(2);
        zoomFactor->setMinimum(1);
        zoomFactor->setMaximum(10);
        zoomFactor->setSingleStep(0.1);
        zoomFactor->setValue(1.5);

        gridLayout_2->addWidget(zoomFactor, 3, 1, 1, 1);

        zoomOutButton = new QPushButton(scrollAreaWidgetContents_2);
        zoomOutButton->setObjectName(QStringLiteral("zoomOutButton"));
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(zoomOutButton->sizePolicy().hasHeightForWidth());
        zoomOutButton->setSizePolicy(sizePolicy4);
        zoomOutButton->setIcon(icon6);
        zoomOutButton->setIconSize(QSize(24, 24));

        gridLayout_2->addWidget(zoomOutButton, 3, 2, 1, 1);


        verticalLayout->addLayout(gridLayout_2);

        label_7 = new QLabel(scrollAreaWidgetContents_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        sizePolicy1.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy1);
        label_7->setFont(font);

        verticalLayout->addWidget(label_7);

        line_7 = new QFrame(scrollAreaWidgetContents_2);
        line_7->setObjectName(QStringLiteral("line_7"));
        sizePolicy2.setHeightForWidth(line_7->sizePolicy().hasHeightForWidth());
        line_7->setSizePolicy(sizePolicy2);
        line_7->setFrameShape(QFrame::HLine);
        line_7->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_7);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        interactiveViewLinkBackground = new QCheckBox(scrollAreaWidgetContents_2);
        interactiveViewLinkBackground->setObjectName(QStringLiteral("interactiveViewLinkBackground"));

        gridLayout_3->addWidget(interactiveViewLinkBackground, 1, 0, 1, 2);

        label_InteractiveViewLinkOpacity = new QLabel(scrollAreaWidgetContents_2);
        label_InteractiveViewLinkOpacity->setObjectName(QStringLiteral("label_InteractiveViewLinkOpacity"));

        gridLayout_3->addWidget(label_InteractiveViewLinkOpacity, 2, 0, 1, 1);

        interactiveViewLinkOpacity = new pqDoubleRangeWidget(scrollAreaWidgetContents_2);
        interactiveViewLinkOpacity->setObjectName(QStringLiteral("interactiveViewLinkOpacity"));
        interactiveViewLinkOpacity->setProperty("StrictRange", QVariant(true));

        gridLayout_3->addWidget(interactiveViewLinkOpacity, 2, 1, 1, 1);

        interactiveViewLinkComboBox = new QComboBox(scrollAreaWidgetContents_2);
        interactiveViewLinkComboBox->setObjectName(QStringLiteral("interactiveViewLinkComboBox"));

        gridLayout_3->addWidget(interactiveViewLinkComboBox, 0, 0, 1, 2);

        gridLayout_3->setColumnStretch(1, 1);

        verticalLayout->addLayout(gridLayout_3);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        scrollArea->setWidget(scrollAreaWidgetContents_2);

        verticalLayout_3->addWidget(scrollArea);

        buttonBox = new QDialogButtonBox(pqCameraDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        verticalLayout_3->addWidget(buttonBox);

        QWidget::setTabOrder(CenterX, CenterY);
        QWidget::setTabOrder(CenterY, CenterZ);
        QWidget::setTabOrder(CenterZ, AutoResetCenterOfRotation);

        retranslateUi(pqCameraDialog);
        QObject::connect(buttonBox, SIGNAL(rejected()), pqCameraDialog, SLOT(close()));

        QMetaObject::connectSlotsByName(pqCameraDialog);
    } // setupUi

    void retranslateUi(QDialog *pqCameraDialog)
    {
        pqCameraDialog->setWindowTitle(QApplication::translate("pqCameraDialog", "Adjusting Camera", Q_NULLPTR));
        label->setText(QApplication::translate("pqCameraDialog", "Standard Viewpoints", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        viewXPlus->setToolTip(QApplication::translate("pqCameraDialog", "Looking down X axis from (1, 0, 0)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        viewXPlus->setText(QString());
#ifndef QT_NO_TOOLTIP
        viewXMinus->setToolTip(QApplication::translate("pqCameraDialog", "Looking down X axis from (-1, 0, 0)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        viewXMinus->setText(QString());
#ifndef QT_NO_TOOLTIP
        viewYPlus->setToolTip(QApplication::translate("pqCameraDialog", "Looking down Y axis from (0, 1, 0)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        viewYPlus->setText(QString());
#ifndef QT_NO_TOOLTIP
        viewYMinus->setToolTip(QApplication::translate("pqCameraDialog", "Looking down Y axis from (0, -1, 0)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        viewYMinus->setText(QString());
#ifndef QT_NO_TOOLTIP
        viewZPlus->setToolTip(QApplication::translate("pqCameraDialog", "Looking down X axis from (0, 0, 1)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        viewZPlus->setText(QString());
#ifndef QT_NO_TOOLTIP
        viewZMinus->setToolTip(QApplication::translate("pqCameraDialog", "Looking down Z axis from (0, 0, -1)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        viewZMinus->setText(QString());
        label_2->setText(QApplication::translate("pqCameraDialog", "Custom Viewpoints", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        configureCustomViewpoints->setToolTip(QApplication::translate("pqCameraDialog", "Configure custom viewpoint buttons.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        configureCustomViewpoints->setText(QApplication::translate("pqCameraDialog", "Configure ...", Q_NULLPTR));
        label_3->setText(QApplication::translate("pqCameraDialog", "Center of Rotation", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        AutoResetCenterOfRotation->setToolTip(QApplication::translate("pqCameraDialog", "Reset center of rotation when camera is reset.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        AutoResetCenterOfRotation->setText(QApplication::translate("pqCameraDialog", "Reset Center of Rotation When Camera is Reset", Q_NULLPTR));
        label_4->setText(QApplication::translate("pqCameraDialog", "Rotation Factor", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        rotationFactor->setToolTip(QApplication::translate("pqCameraDialog", "Define the rotation speed factor.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_5->setText(QApplication::translate("pqCameraDialog", "Camera Parameters", Q_NULLPTR));
        label_22->setText(QApplication::translate("pqCameraDialog", "Position", Q_NULLPTR));
        label_17->setText(QApplication::translate("pqCameraDialog", "Focal Point", Q_NULLPTR));
        label_14->setText(QApplication::translate("pqCameraDialog", "View Up", Q_NULLPTR));
        label_23->setText(QApplication::translate("pqCameraDialog", "View Angle", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        loadCameraConfiguration->setToolTip(QApplication::translate("pqCameraDialog", "Load camera properties.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        loadCameraConfiguration->setText(QApplication::translate("pqCameraDialog", "Load", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        saveCameraConfiguration->setToolTip(QApplication::translate("pqCameraDialog", "Save camera properties.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        saveCameraConfiguration->setText(QApplication::translate("pqCameraDialog", "Save", Q_NULLPTR));
        label_6->setText(QApplication::translate("pqCameraDialog", "Manipulate Camera", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        rollButton->setToolTip(QApplication::translate("pqCameraDialog", "Rotate around vertical axis", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        rollButton->setText(QApplication::translate("pqCameraDialog", "Roll", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        label_20->setToolTip(QApplication::translate("pqCameraDialog", "Apply a manipulation to the current camera using the buttons on the left.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_20->setText(QApplication::translate("pqCameraDialog", "degrees", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        elevationButton->setToolTip(QApplication::translate("pqCameraDialog", "Rotate around horizontal axis", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        elevationButton->setText(QApplication::translate("pqCameraDialog", "Elevation", Q_NULLPTR));
        label_21->setText(QApplication::translate("pqCameraDialog", "degrees", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        azimuthButton->setToolTip(QApplication::translate("pqCameraDialog", "Rotate around center of screen", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        azimuthButton->setText(QApplication::translate("pqCameraDialog", "Azimuth", Q_NULLPTR));
        label_16->setText(QApplication::translate("pqCameraDialog", "degrees", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        zoomInButton->setToolTip(QApplication::translate("pqCameraDialog", "Decrease view angle", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        zoomInButton->setText(QApplication::translate("pqCameraDialog", "Zoom In", Q_NULLPTR));
        zoomFactor->setSuffix(QApplication::translate("pqCameraDialog", "X", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        zoomOutButton->setToolTip(QApplication::translate("pqCameraDialog", "Increase view angle", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        zoomOutButton->setText(QApplication::translate("pqCameraDialog", "Zoom Out", Q_NULLPTR));
        label_7->setText(QApplication::translate("pqCameraDialog", "Interactive View Link Parameters", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        interactiveViewLinkBackground->setToolTip(QApplication::translate("pqCameraDialog", "Hide background from linked view.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        interactiveViewLinkBackground->setText(QApplication::translate("pqCameraDialog", "Hide background from linked view.", Q_NULLPTR));
        label_InteractiveViewLinkOpacity->setText(QApplication::translate("pqCameraDialog", "Opacity:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        interactiveViewLinkOpacity->setToolTip(QApplication::translate("pqCameraDialog", "Define the view link opacity.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        interactiveViewLinkComboBox->setToolTip(QApplication::translate("pqCameraDialog", "Select Interactive View Link to manage.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class pqCameraDialog: public Ui_pqCameraDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQCAMERADIALOG_H
