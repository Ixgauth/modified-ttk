/********************************************************************************
** Form generated from reading UI file 'pqImageOutputInfo.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQIMAGEOUTPUTINFO_H
#define UI_PQIMAGEOUTPUTINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ImageOutputInfo
{
public:
    QVBoxLayout *verticalLayout_2;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_2;
    QGridLayout *gridLayout;
    QComboBox *imageType;
    QLabel *imageTypeLabel;
    QLabel *imageFileNameLabel;
    QLineEdit *imageFileName;
    QLabel *fitToScreenLabel;
    QSpinBox *imageWriteFrequency;
    QLabel *imageMagnificationLabel;
    QSpinBox *imageMagnification;
    QCheckBox *fitToScreen;
    QLabel *imageWriteFrequencyLabel;
    QLabel *thumbnailLabel;
    QGroupBox *gbCinemaOptions;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout_4;
    QWidget *wCameraOptions;
    QGridLayout *gridLayout_2;
    QLabel *rollLabel;
    QSpinBox *rollResolution;
    QLabel *phiLabel;
    QSpinBox *phiResolution;
    QSpinBox *thetaResolution;
    QLabel *thetaLabel;
    QLabel *cinemaLabel;
    QComboBox *cinemaExport;
    QLineEdit *trackObjectName;
    QLabel *trackObjectLabel;
    QLabel *laComposite;
    QCheckBox *composite;
    QLabel *laFloatValue;
    QCheckBox *cbUseFloatValues;
    QLabel *laNoFloat;
    QCheckBox *cbNoValues;

    void setupUi(QWidget *ImageOutputInfo)
    {
        if (ImageOutputInfo->objectName().isEmpty())
            ImageOutputInfo->setObjectName(QStringLiteral("ImageOutputInfo"));
        ImageOutputInfo->resize(549, 434);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ImageOutputInfo->sizePolicy().hasHeightForWidth());
        ImageOutputInfo->setSizePolicy(sizePolicy);
        ImageOutputInfo->setMinimumSize(QSize(0, 283));
        verticalLayout_2 = new QVBoxLayout(ImageOutputInfo);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        widget_3 = new QWidget(ImageOutputInfo);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widget_3->sizePolicy().hasHeightForWidth());
        widget_3->setSizePolicy(sizePolicy1);
        horizontalLayout_2 = new QHBoxLayout(widget_3);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        imageType = new QComboBox(widget_3);
        imageType->setObjectName(QStringLiteral("imageType"));
        imageType->setEnabled(true);
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(imageType->sizePolicy().hasHeightForWidth());
        imageType->setSizePolicy(sizePolicy2);
        imageType->setMinimumSize(QSize(0, 25));

        gridLayout->addWidget(imageType, 0, 1, 1, 1);

        imageTypeLabel = new QLabel(widget_3);
        imageTypeLabel->setObjectName(QStringLiteral("imageTypeLabel"));
        imageTypeLabel->setEnabled(true);

        gridLayout->addWidget(imageTypeLabel, 0, 0, 1, 1);

        imageFileNameLabel = new QLabel(widget_3);
        imageFileNameLabel->setObjectName(QStringLiteral("imageFileNameLabel"));
        imageFileNameLabel->setEnabled(true);

        gridLayout->addWidget(imageFileNameLabel, 1, 0, 1, 1);

        imageFileName = new QLineEdit(widget_3);
        imageFileName->setObjectName(QStringLiteral("imageFileName"));
        imageFileName->setEnabled(true);

        gridLayout->addWidget(imageFileName, 1, 1, 1, 1);

        fitToScreenLabel = new QLabel(widget_3);
        fitToScreenLabel->setObjectName(QStringLiteral("fitToScreenLabel"));

        gridLayout->addWidget(fitToScreenLabel, 4, 0, 1, 1);

        imageWriteFrequency = new QSpinBox(widget_3);
        imageWriteFrequency->setObjectName(QStringLiteral("imageWriteFrequency"));
        imageWriteFrequency->setEnabled(true);
        sizePolicy2.setHeightForWidth(imageWriteFrequency->sizePolicy().hasHeightForWidth());
        imageWriteFrequency->setSizePolicy(sizePolicy2);
        imageWriteFrequency->setMinimum(1);
        imageWriteFrequency->setMaximum(1000);

        gridLayout->addWidget(imageWriteFrequency, 2, 1, 1, 1);

        imageMagnificationLabel = new QLabel(widget_3);
        imageMagnificationLabel->setObjectName(QStringLiteral("imageMagnificationLabel"));
        imageMagnificationLabel->setEnabled(true);

        gridLayout->addWidget(imageMagnificationLabel, 3, 0, 1, 1);

        imageMagnification = new QSpinBox(widget_3);
        imageMagnification->setObjectName(QStringLiteral("imageMagnification"));
        imageMagnification->setEnabled(true);
        sizePolicy2.setHeightForWidth(imageMagnification->sizePolicy().hasHeightForWidth());
        imageMagnification->setSizePolicy(sizePolicy2);
        imageMagnification->setMinimum(1);
        imageMagnification->setMaximum(1000);

        gridLayout->addWidget(imageMagnification, 3, 1, 1, 1);

        fitToScreen = new QCheckBox(widget_3);
        fitToScreen->setObjectName(QStringLiteral("fitToScreen"));
        fitToScreen->setLayoutDirection(Qt::LeftToRight);

        gridLayout->addWidget(fitToScreen, 4, 1, 1, 1);

        imageWriteFrequencyLabel = new QLabel(widget_3);
        imageWriteFrequencyLabel->setObjectName(QStringLiteral("imageWriteFrequencyLabel"));
        imageWriteFrequencyLabel->setEnabled(true);

        gridLayout->addWidget(imageWriteFrequencyLabel, 2, 0, 1, 1);


        horizontalLayout_2->addLayout(gridLayout);

        thumbnailLabel = new QLabel(widget_3);
        thumbnailLabel->setObjectName(QStringLiteral("thumbnailLabel"));
        sizePolicy1.setHeightForWidth(thumbnailLabel->sizePolicy().hasHeightForWidth());
        thumbnailLabel->setSizePolicy(sizePolicy1);
        thumbnailLabel->setMinimumSize(QSize(200, 100));
        thumbnailLabel->setBaseSize(QSize(147, 145));
        thumbnailLabel->setScaledContents(false);
        thumbnailLabel->setAlignment(Qt::AlignCenter);
        thumbnailLabel->setWordWrap(true);

        horizontalLayout_2->addWidget(thumbnailLabel, 0, Qt::AlignTop);


        verticalLayout_2->addWidget(widget_3);

        gbCinemaOptions = new QGroupBox(ImageOutputInfo);
        gbCinemaOptions->setObjectName(QStringLiteral("gbCinemaOptions"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(gbCinemaOptions->sizePolicy().hasHeightForWidth());
        gbCinemaOptions->setSizePolicy(sizePolicy3);
        verticalLayout = new QVBoxLayout(gbCinemaOptions);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        wCameraOptions = new QWidget(gbCinemaOptions);
        wCameraOptions->setObjectName(QStringLiteral("wCameraOptions"));
        wCameraOptions->setEnabled(true);
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(wCameraOptions->sizePolicy().hasHeightForWidth());
        wCameraOptions->setSizePolicy(sizePolicy4);
        wCameraOptions->setMinimumSize(QSize(0, 60));
        wCameraOptions->setBaseSize(QSize(0, 60));
        gridLayout_2 = new QGridLayout(wCameraOptions);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        rollLabel = new QLabel(wCameraOptions);
        rollLabel->setObjectName(QStringLiteral("rollLabel"));

        gridLayout_2->addWidget(rollLabel, 0, 2, 1, 1);

        rollResolution = new QSpinBox(wCameraOptions);
        rollResolution->setObjectName(QStringLiteral("rollResolution"));
        rollResolution->setMinimum(1);
        rollResolution->setMaximum(64);
        rollResolution->setValue(1);

        gridLayout_2->addWidget(rollResolution, 1, 2, 1, 1);

        phiLabel = new QLabel(wCameraOptions);
        phiLabel->setObjectName(QStringLiteral("phiLabel"));
        phiLabel->setEnabled(true);
        phiLabel->setMaximumSize(QSize(16777215, 20));
        phiLabel->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(phiLabel, 0, 0, 1, 1);

        phiResolution = new QSpinBox(wCameraOptions);
        phiResolution->setObjectName(QStringLiteral("phiResolution"));
        phiResolution->setEnabled(true);
        phiResolution->setMinimum(1);
        phiResolution->setMaximum(64);
        phiResolution->setValue(12);

        gridLayout_2->addWidget(phiResolution, 1, 0, 1, 1);

        thetaResolution = new QSpinBox(wCameraOptions);
        thetaResolution->setObjectName(QStringLiteral("thetaResolution"));
        thetaResolution->setEnabled(true);
        thetaResolution->setMinimum(1);
        thetaResolution->setMaximum(32);
        thetaResolution->setValue(7);

        gridLayout_2->addWidget(thetaResolution, 1, 1, 1, 1);

        thetaLabel = new QLabel(wCameraOptions);
        thetaLabel->setObjectName(QStringLiteral("thetaLabel"));
        thetaLabel->setEnabled(true);
        thetaLabel->setMaximumSize(QSize(16777215, 20));
        thetaLabel->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(thetaLabel, 0, 1, 1, 1);


        gridLayout_4->addWidget(wCameraOptions, 5, 2, 1, 1);

        cinemaLabel = new QLabel(gbCinemaOptions);
        cinemaLabel->setObjectName(QStringLiteral("cinemaLabel"));
        cinemaLabel->setEnabled(true);

        gridLayout_4->addWidget(cinemaLabel, 4, 0, 1, 1);

        cinemaExport = new QComboBox(gbCinemaOptions);
        cinemaExport->setObjectName(QStringLiteral("cinemaExport"));
        cinemaExport->setEnabled(true);
        cinemaExport->setMaximumSize(QSize(200, 16777215));

        gridLayout_4->addWidget(cinemaExport, 4, 2, 1, 1);

        trackObjectName = new QLineEdit(gbCinemaOptions);
        trackObjectName->setObjectName(QStringLiteral("trackObjectName"));

        gridLayout_4->addWidget(trackObjectName, 6, 2, 1, 1);

        trackObjectLabel = new QLabel(gbCinemaOptions);
        trackObjectLabel->setObjectName(QStringLiteral("trackObjectLabel"));

        gridLayout_4->addWidget(trackObjectLabel, 6, 0, 1, 1);

        laComposite = new QLabel(gbCinemaOptions);
        laComposite->setObjectName(QStringLiteral("laComposite"));

        gridLayout_4->addWidget(laComposite, 0, 0, 1, 1);

        composite = new QCheckBox(gbCinemaOptions);
        composite->setObjectName(QStringLiteral("composite"));
        composite->setChecked(true);

        gridLayout_4->addWidget(composite, 0, 2, 1, 1);

        laFloatValue = new QLabel(gbCinemaOptions);
        laFloatValue->setObjectName(QStringLiteral("laFloatValue"));

        gridLayout_4->addWidget(laFloatValue, 2, 0, 1, 1);

        cbUseFloatValues = new QCheckBox(gbCinemaOptions);
        cbUseFloatValues->setObjectName(QStringLiteral("cbUseFloatValues"));
        cbUseFloatValues->setChecked(true);

        gridLayout_4->addWidget(cbUseFloatValues, 2, 2, 1, 1);

        laNoFloat = new QLabel(gbCinemaOptions);
        laNoFloat->setObjectName(QStringLiteral("laNoFloat"));

        gridLayout_4->addWidget(laNoFloat, 1, 0, 1, 1);

        cbNoValues = new QCheckBox(gbCinemaOptions);
        cbNoValues->setObjectName(QStringLiteral("cbNoValues"));

        gridLayout_4->addWidget(cbNoValues, 1, 2, 1, 1);


        verticalLayout->addLayout(gridLayout_4);


        verticalLayout_2->addWidget(gbCinemaOptions);

        QWidget::setTabOrder(imageType, imageFileName);
        QWidget::setTabOrder(imageFileName, imageWriteFrequency);
        QWidget::setTabOrder(imageWriteFrequency, imageMagnification);
        QWidget::setTabOrder(imageMagnification, fitToScreen);
        QWidget::setTabOrder(fitToScreen, cinemaExport);
        QWidget::setTabOrder(cinemaExport, phiResolution);
        QWidget::setTabOrder(phiResolution, thetaResolution);
        QWidget::setTabOrder(thetaResolution, rollResolution);

        retranslateUi(ImageOutputInfo);

        QMetaObject::connectSlotsByName(ImageOutputInfo);
    } // setupUi

    void retranslateUi(QWidget *ImageOutputInfo)
    {
        ImageOutputInfo->setWindowTitle(QApplication::translate("ImageOutputInfo", "Form", Q_NULLPTR));
        imageType->clear();
        imageType->insertItems(0, QStringList()
         << QApplication::translate("ImageOutputInfo", "png", Q_NULLPTR)
         << QApplication::translate("ImageOutputInfo", "bmp", Q_NULLPTR)
         << QApplication::translate("ImageOutputInfo", "ppm", Q_NULLPTR)
         << QApplication::translate("ImageOutputInfo", "tif", Q_NULLPTR)
         << QApplication::translate("ImageOutputInfo", "tiff", Q_NULLPTR)
         << QApplication::translate("ImageOutputInfo", "jpg", Q_NULLPTR)
         << QApplication::translate("ImageOutputInfo", "jpeg", Q_NULLPTR)
        );
        imageTypeLabel->setText(QApplication::translate("ImageOutputInfo", "Image Type", Q_NULLPTR));
        imageFileNameLabel->setText(QApplication::translate("ImageOutputInfo", "File Name", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        imageFileName->setToolTip(QApplication::translate("ImageOutputInfo", "The file name must contain %t.  This gets replaced with the time step.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_ACCESSIBILITY
        imageFileName->setAccessibleName(QString());
#endif // QT_NO_ACCESSIBILITY
        imageFileName->setText(QApplication::translate("ImageOutputInfo", "image_%t.png", Q_NULLPTR));
        fitToScreenLabel->setText(QApplication::translate("ImageOutputInfo", "Fit to Screen", Q_NULLPTR));
        imageMagnificationLabel->setText(QApplication::translate("ImageOutputInfo", "Magnification", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        fitToScreen->setToolTip(QApplication::translate("ImageOutputInfo", "Check to reset the view to fit the objects to the view every outputted time step.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        fitToScreen->setWhatsThis(QApplication::translate("ImageOutputInfo", "Check to reset the view to fit the objects to the view every outputted time step.", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        fitToScreen->setText(QString());
        imageWriteFrequencyLabel->setText(QApplication::translate("ImageOutputInfo", "Write Frequency", Q_NULLPTR));
        thumbnailLabel->setText(QApplication::translate("ImageOutputInfo", "View not currently available", Q_NULLPTR));
        gbCinemaOptions->setTitle(QApplication::translate("ImageOutputInfo", "Cinema Options", Q_NULLPTR));
        rollLabel->setText(QApplication::translate("ImageOutputInfo", "Roll", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        rollResolution->setToolTip(QApplication::translate("ImageOutputInfo", "The number of camera positions in the roll direction.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        phiLabel->setText(QApplication::translate("ImageOutputInfo", "Phi", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        phiResolution->setToolTip(QApplication::translate("ImageOutputInfo", "The number of camera positions in phi direction.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        thetaResolution->setToolTip(QApplication::translate("ImageOutputInfo", "The number of camera positions in the theta direction.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        thetaLabel->setText(QApplication::translate("ImageOutputInfo", "Theta", Q_NULLPTR));
        cinemaLabel->setText(QApplication::translate("ImageOutputInfo", "Camera Type", Q_NULLPTR));
        cinemaExport->clear();
        cinemaExport->insertItems(0, QStringList()
         << QApplication::translate("ImageOutputInfo", "none", Q_NULLPTR)
         << QApplication::translate("ImageOutputInfo", "static", Q_NULLPTR)
         << QApplication::translate("ImageOutputInfo", "phi-theta", Q_NULLPTR)
         << QApplication::translate("ImageOutputInfo", "azimuth-elevation-roll", Q_NULLPTR)
         << QApplication::translate("ImageOutputInfo", "yaw-pitch-roll", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        cinemaExport->setToolTip(QApplication::translate("ImageOutputInfo", "Mode for the cinema store of this view: none=don't export, static=fixed camera, phi-theta=Phi*Theta camera positions around focal point, AER=camera rotates arbitrarily around focal point, YPR=camera rotates arbitrarily from vantage point.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        trackObjectName->setToolTip(QApplication::translate("ImageOutputInfo", "<html><head/><body><p>Enter name from Pipeline Browser for camera to track over time.</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        trackObjectName->setText(QApplication::translate("ImageOutputInfo", "None", Q_NULLPTR));
        trackObjectLabel->setText(QApplication::translate("ImageOutputInfo", "Track Object", Q_NULLPTR));
        laComposite->setText(QApplication::translate("ImageOutputInfo", "Composite", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        composite->setToolTip(QApplication::translate("ImageOutputInfo", "Whether to export specA (simple RGB) or newer (compositible deferred rendering images) format stores", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        composite->setText(QString());
        laFloatValue->setText(QApplication::translate("ImageOutputInfo", "Try Direct Float", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        cbUseFloatValues->setToolTip(QApplication::translate("ImageOutputInfo", "Render recolorable float value pixels via GL_ARB_texture_float buffers if available.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        cbUseFloatValues->setText(QString());
        laNoFloat->setText(QApplication::translate("ImageOutputInfo", "Disable Float", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        cbNoValues->setToolTip(QApplication::translate("ImageOutputInfo", "Use prebaked lookup table as RGB pixels instead of recolorable float value pixels. ", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        cbNoValues->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ImageOutputInfo: public Ui_ImageOutputInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQIMAGEOUTPUTINFO_H
