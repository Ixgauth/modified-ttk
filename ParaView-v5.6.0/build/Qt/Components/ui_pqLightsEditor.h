/********************************************************************************
** Form generated from reading UI file 'pqLightsEditor.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQLIGHTSEDITOR_H
#define UI_PQLIGHTSEDITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LightsEditor
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *LightKitControls;
    QHBoxLayout *anotherHBoxLayout;
    QCheckBox *LightKit;
    QPushButton *Reset;
    QWidget *lightKitParams;
    QGridLayout *gridLayout;
    QLabel *backLabel;
    QDoubleSpinBox *HeadLightK_H_Ratio;
    QLabel *fillWarmthLabel;
    QLabel *fillAzimuthLabel;
    QLabel *keyAzimuthLabel;
    QDoubleSpinBox *BackLightElevation;
    QDoubleSpinBox *KeyLightIntensity;
    QDoubleSpinBox *BackLightK_B_Ratio;
    QLabel *headWarmthLabel;
    QDoubleSpinBox *KeyLightWarmth;
    QLabel *fillLabel;
    QDoubleSpinBox *FillLightAzimuth;
    QDoubleSpinBox *FillLightElevation;
    QDoubleSpinBox *KeyLightElevation;
    QLabel *keyLabel;
    QDoubleSpinBox *KeyLightAzimuth;
    QLabel *headRatioLabel;
    QDoubleSpinBox *HeadLightWarmth;
    QLabel *fillElevationLabel;
    QLabel *fillRatioLabel;
    QLabel *keyIntensityLabel;
    QLabel *headLabel;
    QDoubleSpinBox *FillLightWarmth;
    QDoubleSpinBox *BackLightAzimuth;
    QLabel *backElevationLabel;
    QLabel *backRatioLabel;
    QLabel *keyElevationLabel;
    QLabel *keyWarmthLabel;
    QLabel *backWarmthLabel;
    QLabel *backAzimuthLabel;
    QCheckBox *MaintainLuminance;
    QDoubleSpinBox *BackLightWarmth;
    QDoubleSpinBox *FillLightK_F_Ratio;

    void setupUi(QWidget *LightsEditor)
    {
        if (LightsEditor->objectName().isEmpty())
            LightsEditor->setObjectName(QStringLiteral("LightsEditor"));
        LightsEditor->resize(439, 252);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(LightsEditor->sizePolicy().hasHeightForWidth());
        LightsEditor->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(LightsEditor);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 9);
        LightKitControls = new QWidget(LightsEditor);
        LightKitControls->setObjectName(QStringLiteral("LightKitControls"));
        LightKitControls->setMinimumSize(QSize(0, 0));
        anotherHBoxLayout = new QHBoxLayout(LightKitControls);
        anotherHBoxLayout->setObjectName(QStringLiteral("anotherHBoxLayout"));
        anotherHBoxLayout->setContentsMargins(0, 0, 0, 0);
        LightKit = new QCheckBox(LightKitControls);
        LightKit->setObjectName(QStringLiteral("LightKit"));
        LightKit->setChecked(true);

        anotherHBoxLayout->addWidget(LightKit);

        Reset = new QPushButton(LightKitControls);
        Reset->setObjectName(QStringLiteral("Reset"));

        anotherHBoxLayout->addWidget(Reset);


        verticalLayout->addWidget(LightKitControls);

        lightKitParams = new QWidget(LightsEditor);
        lightKitParams->setObjectName(QStringLiteral("lightKitParams"));
        gridLayout = new QGridLayout(lightKitParams);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        backLabel = new QLabel(lightKitParams);
        backLabel->setObjectName(QStringLiteral("backLabel"));

        gridLayout->addWidget(backLabel, 3, 0, 1, 1);

        HeadLightK_H_Ratio = new QDoubleSpinBox(lightKitParams);
        HeadLightK_H_Ratio->setObjectName(QStringLiteral("HeadLightK_H_Ratio"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(HeadLightK_H_Ratio->sizePolicy().hasHeightForWidth());
        HeadLightK_H_Ratio->setSizePolicy(sizePolicy1);
        HeadLightK_H_Ratio->setMinimum(1);
        HeadLightK_H_Ratio->setSingleStep(0.5);

        gridLayout->addWidget(HeadLightK_H_Ratio, 4, 4, 1, 1);

        fillWarmthLabel = new QLabel(lightKitParams);
        fillWarmthLabel->setObjectName(QStringLiteral("fillWarmthLabel"));

        gridLayout->addWidget(fillWarmthLabel, 2, 1, 1, 1);

        fillAzimuthLabel = new QLabel(lightKitParams);
        fillAzimuthLabel->setObjectName(QStringLiteral("fillAzimuthLabel"));

        gridLayout->addWidget(fillAzimuthLabel, 2, 7, 1, 1);

        keyAzimuthLabel = new QLabel(lightKitParams);
        keyAzimuthLabel->setObjectName(QStringLiteral("keyAzimuthLabel"));

        gridLayout->addWidget(keyAzimuthLabel, 1, 7, 1, 1);

        BackLightElevation = new QDoubleSpinBox(lightKitParams);
        BackLightElevation->setObjectName(QStringLiteral("BackLightElevation"));
        sizePolicy1.setHeightForWidth(BackLightElevation->sizePolicy().hasHeightForWidth());
        BackLightElevation->setSizePolicy(sizePolicy1);
        BackLightElevation->setDecimals(0);
        BackLightElevation->setMinimum(-90);
        BackLightElevation->setMaximum(90);
        BackLightElevation->setSingleStep(10);

        gridLayout->addWidget(BackLightElevation, 3, 6, 1, 1);

        KeyLightIntensity = new QDoubleSpinBox(lightKitParams);
        KeyLightIntensity->setObjectName(QStringLiteral("KeyLightIntensity"));
        sizePolicy1.setHeightForWidth(KeyLightIntensity->sizePolicy().hasHeightForWidth());
        KeyLightIntensity->setSizePolicy(sizePolicy1);
        KeyLightIntensity->setMaximum(1);
        KeyLightIntensity->setSingleStep(0.1);

        gridLayout->addWidget(KeyLightIntensity, 1, 4, 1, 1);

        BackLightK_B_Ratio = new QDoubleSpinBox(lightKitParams);
        BackLightK_B_Ratio->setObjectName(QStringLiteral("BackLightK_B_Ratio"));
        sizePolicy1.setHeightForWidth(BackLightK_B_Ratio->sizePolicy().hasHeightForWidth());
        BackLightK_B_Ratio->setSizePolicy(sizePolicy1);
        BackLightK_B_Ratio->setMinimum(1);
        BackLightK_B_Ratio->setSingleStep(0.5);

        gridLayout->addWidget(BackLightK_B_Ratio, 3, 4, 1, 1);

        headWarmthLabel = new QLabel(lightKitParams);
        headWarmthLabel->setObjectName(QStringLiteral("headWarmthLabel"));

        gridLayout->addWidget(headWarmthLabel, 4, 1, 1, 1);

        KeyLightWarmth = new QDoubleSpinBox(lightKitParams);
        KeyLightWarmth->setObjectName(QStringLiteral("KeyLightWarmth"));
        sizePolicy1.setHeightForWidth(KeyLightWarmth->sizePolicy().hasHeightForWidth());
        KeyLightWarmth->setSizePolicy(sizePolicy1);
        KeyLightWarmth->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        KeyLightWarmth->setMaximum(1);
        KeyLightWarmth->setSingleStep(0.1);

        gridLayout->addWidget(KeyLightWarmth, 1, 2, 1, 1);

        fillLabel = new QLabel(lightKitParams);
        fillLabel->setObjectName(QStringLiteral("fillLabel"));

        gridLayout->addWidget(fillLabel, 2, 0, 1, 1);

        FillLightAzimuth = new QDoubleSpinBox(lightKitParams);
        FillLightAzimuth->setObjectName(QStringLiteral("FillLightAzimuth"));
        sizePolicy1.setHeightForWidth(FillLightAzimuth->sizePolicy().hasHeightForWidth());
        FillLightAzimuth->setSizePolicy(sizePolicy1);
        FillLightAzimuth->setDecimals(0);
        FillLightAzimuth->setMinimum(-180);
        FillLightAzimuth->setMaximum(180);
        FillLightAzimuth->setSingleStep(10);

        gridLayout->addWidget(FillLightAzimuth, 2, 8, 1, 1);

        FillLightElevation = new QDoubleSpinBox(lightKitParams);
        FillLightElevation->setObjectName(QStringLiteral("FillLightElevation"));
        sizePolicy1.setHeightForWidth(FillLightElevation->sizePolicy().hasHeightForWidth());
        FillLightElevation->setSizePolicy(sizePolicy1);
        FillLightElevation->setDecimals(0);
        FillLightElevation->setMinimum(-90);
        FillLightElevation->setMaximum(90);
        FillLightElevation->setSingleStep(10);

        gridLayout->addWidget(FillLightElevation, 2, 6, 1, 1);

        KeyLightElevation = new QDoubleSpinBox(lightKitParams);
        KeyLightElevation->setObjectName(QStringLiteral("KeyLightElevation"));
        sizePolicy1.setHeightForWidth(KeyLightElevation->sizePolicy().hasHeightForWidth());
        KeyLightElevation->setSizePolicy(sizePolicy1);
        KeyLightElevation->setDecimals(0);
        KeyLightElevation->setMinimum(-90);
        KeyLightElevation->setMaximum(90);
        KeyLightElevation->setSingleStep(10);

        gridLayout->addWidget(KeyLightElevation, 1, 6, 1, 1);

        keyLabel = new QLabel(lightKitParams);
        keyLabel->setObjectName(QStringLiteral("keyLabel"));

        gridLayout->addWidget(keyLabel, 1, 0, 1, 1);

        KeyLightAzimuth = new QDoubleSpinBox(lightKitParams);
        KeyLightAzimuth->setObjectName(QStringLiteral("KeyLightAzimuth"));
        sizePolicy1.setHeightForWidth(KeyLightAzimuth->sizePolicy().hasHeightForWidth());
        KeyLightAzimuth->setSizePolicy(sizePolicy1);
        KeyLightAzimuth->setDecimals(0);
        KeyLightAzimuth->setMinimum(-180);
        KeyLightAzimuth->setMaximum(180);
        KeyLightAzimuth->setSingleStep(10);

        gridLayout->addWidget(KeyLightAzimuth, 1, 8, 1, 1);

        headRatioLabel = new QLabel(lightKitParams);
        headRatioLabel->setObjectName(QStringLiteral("headRatioLabel"));

        gridLayout->addWidget(headRatioLabel, 4, 3, 1, 1);

        HeadLightWarmth = new QDoubleSpinBox(lightKitParams);
        HeadLightWarmth->setObjectName(QStringLiteral("HeadLightWarmth"));
        sizePolicy1.setHeightForWidth(HeadLightWarmth->sizePolicy().hasHeightForWidth());
        HeadLightWarmth->setSizePolicy(sizePolicy1);
        HeadLightWarmth->setMaximum(1);
        HeadLightWarmth->setSingleStep(0.1);

        gridLayout->addWidget(HeadLightWarmth, 4, 2, 1, 1);

        fillElevationLabel = new QLabel(lightKitParams);
        fillElevationLabel->setObjectName(QStringLiteral("fillElevationLabel"));

        gridLayout->addWidget(fillElevationLabel, 2, 5, 1, 1);

        fillRatioLabel = new QLabel(lightKitParams);
        fillRatioLabel->setObjectName(QStringLiteral("fillRatioLabel"));

        gridLayout->addWidget(fillRatioLabel, 2, 3, 1, 1);

        keyIntensityLabel = new QLabel(lightKitParams);
        keyIntensityLabel->setObjectName(QStringLiteral("keyIntensityLabel"));

        gridLayout->addWidget(keyIntensityLabel, 1, 3, 1, 1);

        headLabel = new QLabel(lightKitParams);
        headLabel->setObjectName(QStringLiteral("headLabel"));

        gridLayout->addWidget(headLabel, 4, 0, 1, 1);

        FillLightWarmth = new QDoubleSpinBox(lightKitParams);
        FillLightWarmth->setObjectName(QStringLiteral("FillLightWarmth"));
        sizePolicy1.setHeightForWidth(FillLightWarmth->sizePolicy().hasHeightForWidth());
        FillLightWarmth->setSizePolicy(sizePolicy1);
        FillLightWarmth->setMaximum(1);
        FillLightWarmth->setSingleStep(0.1);

        gridLayout->addWidget(FillLightWarmth, 2, 2, 1, 1);

        BackLightAzimuth = new QDoubleSpinBox(lightKitParams);
        BackLightAzimuth->setObjectName(QStringLiteral("BackLightAzimuth"));
        sizePolicy1.setHeightForWidth(BackLightAzimuth->sizePolicy().hasHeightForWidth());
        BackLightAzimuth->setSizePolicy(sizePolicy1);
        BackLightAzimuth->setDecimals(0);
        BackLightAzimuth->setMinimum(-180);
        BackLightAzimuth->setMaximum(180);
        BackLightAzimuth->setSingleStep(10);

        gridLayout->addWidget(BackLightAzimuth, 3, 8, 1, 1);

        backElevationLabel = new QLabel(lightKitParams);
        backElevationLabel->setObjectName(QStringLiteral("backElevationLabel"));

        gridLayout->addWidget(backElevationLabel, 3, 5, 1, 1);

        backRatioLabel = new QLabel(lightKitParams);
        backRatioLabel->setObjectName(QStringLiteral("backRatioLabel"));

        gridLayout->addWidget(backRatioLabel, 3, 3, 1, 1);

        keyElevationLabel = new QLabel(lightKitParams);
        keyElevationLabel->setObjectName(QStringLiteral("keyElevationLabel"));

        gridLayout->addWidget(keyElevationLabel, 1, 5, 1, 1);

        keyWarmthLabel = new QLabel(lightKitParams);
        keyWarmthLabel->setObjectName(QStringLiteral("keyWarmthLabel"));

        gridLayout->addWidget(keyWarmthLabel, 1, 1, 1, 1);

        backWarmthLabel = new QLabel(lightKitParams);
        backWarmthLabel->setObjectName(QStringLiteral("backWarmthLabel"));

        gridLayout->addWidget(backWarmthLabel, 3, 1, 1, 1);

        backAzimuthLabel = new QLabel(lightKitParams);
        backAzimuthLabel->setObjectName(QStringLiteral("backAzimuthLabel"));

        gridLayout->addWidget(backAzimuthLabel, 3, 7, 1, 1);

        MaintainLuminance = new QCheckBox(lightKitParams);
        MaintainLuminance->setObjectName(QStringLiteral("MaintainLuminance"));

        gridLayout->addWidget(MaintainLuminance, 5, 0, 1, 4);

        BackLightWarmth = new QDoubleSpinBox(lightKitParams);
        BackLightWarmth->setObjectName(QStringLiteral("BackLightWarmth"));
        sizePolicy1.setHeightForWidth(BackLightWarmth->sizePolicy().hasHeightForWidth());
        BackLightWarmth->setSizePolicy(sizePolicy1);
        BackLightWarmth->setMaximum(1);
        BackLightWarmth->setSingleStep(0.1);

        gridLayout->addWidget(BackLightWarmth, 3, 2, 1, 1);

        FillLightK_F_Ratio = new QDoubleSpinBox(lightKitParams);
        FillLightK_F_Ratio->setObjectName(QStringLiteral("FillLightK_F_Ratio"));
        sizePolicy1.setHeightForWidth(FillLightK_F_Ratio->sizePolicy().hasHeightForWidth());
        FillLightK_F_Ratio->setSizePolicy(sizePolicy1);
        FillLightK_F_Ratio->setMinimum(1);
        FillLightK_F_Ratio->setSingleStep(0.5);

        gridLayout->addWidget(FillLightK_F_Ratio, 2, 4, 1, 1);


        verticalLayout->addWidget(lightKitParams);

        QWidget::setTabOrder(KeyLightWarmth, KeyLightIntensity);
        QWidget::setTabOrder(KeyLightIntensity, KeyLightElevation);
        QWidget::setTabOrder(KeyLightElevation, KeyLightAzimuth);
        QWidget::setTabOrder(KeyLightAzimuth, FillLightWarmth);
        QWidget::setTabOrder(FillLightWarmth, FillLightK_F_Ratio);
        QWidget::setTabOrder(FillLightK_F_Ratio, FillLightElevation);
        QWidget::setTabOrder(FillLightElevation, FillLightAzimuth);
        QWidget::setTabOrder(FillLightAzimuth, BackLightWarmth);
        QWidget::setTabOrder(BackLightWarmth, BackLightK_B_Ratio);
        QWidget::setTabOrder(BackLightK_B_Ratio, BackLightElevation);
        QWidget::setTabOrder(BackLightElevation, BackLightAzimuth);
        QWidget::setTabOrder(BackLightAzimuth, HeadLightWarmth);
        QWidget::setTabOrder(HeadLightWarmth, HeadLightK_H_Ratio);

        retranslateUi(LightsEditor);
        QObject::connect(LightKit, SIGNAL(toggled(bool)), lightKitParams, SLOT(setVisible(bool)));

        QMetaObject::connectSlotsByName(LightsEditor);
    } // setupUi

    void retranslateUi(QWidget *LightsEditor)
    {
        LightsEditor->setWindowTitle(QApplication::translate("LightsEditor", "Lights Editor", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LightKit->setToolTip(QApplication::translate("LightsEditor", "A simple lighting kit", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        LightKit->setWhatsThis(QApplication::translate("LightsEditor", "Turn on or off all the lights in the lighting kit.", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        LightKit->setText(QApplication::translate("LightsEditor", "Light Kit", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Reset->setToolTip(QApplication::translate("LightsEditor", "Reset lights to their default values", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        Reset->setText(QApplication::translate("LightsEditor", "Reset", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        backLabel->setToolTip(QApplication::translate("LightsEditor", "Back Light Parameters", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        backLabel->setWhatsThis(QApplication::translate("LightsEditor", "The two back lights, one on the left of the object as seen from the observer and one on the right, fill on the high-contrast areas behind the object. ", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        backLabel->setText(QApplication::translate("LightsEditor", "Back", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        HeadLightK_H_Ratio->setToolTip(QApplication::translate("LightsEditor", "Key-to-Head Ratio", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        HeadLightK_H_Ratio->setWhatsThis(QApplication::translate("LightsEditor", "Set the Key-to-Head ratio. Similar to the Key-to-Fill ratio, this ratio controls how bright the headlight light is compared to the key light: larger values correspond to a dimmer headlight light. The headlight is special kind of fill light, lighting only the parts of the object that the camera can see. As such, a headlight tends to reduce the contrast of a scene. It can be used to fill in \"shadows\" of the object missed by the key and fill lights. The headlight should always be significantly dimmer than the key light: ratios of 2 to 15 are typical.", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        fillWarmthLabel->setToolTip(QApplication::translate("LightsEditor", "Fill Light Warmth", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        fillWarmthLabel->setWhatsThis(QApplication::translate("LightsEditor", "The \"Warmth\" of the Fill Light. Warmth is a parameter that varies from 0 to 1, where 0 is \"cold\" (looks icy or lit by a very blue sky), 1 is \"warm\" (the red of a very red sunset, or the embers of a campfire), and 0.5 is a neutral white. The warmth scale is non-linear. Warmth values close to 0.5 are subtly \"warmer\" or \"cooler,\" much like a warmer tungsten incandescent bulb, a cooler halogen, or daylight (cooler still). Moving further away from 0.5, colors become more quickly varying towards blues and reds. With regards to aesthetics, extremes of warmth should be used sparingly. ", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        fillWarmthLabel->setText(QApplication::translate("LightsEditor", "Warm", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        fillAzimuthLabel->setToolTip(QApplication::translate("LightsEditor", "Fill Light Azimuth", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        fillAzimuthLabel->setWhatsThis(QApplication::translate("LightsEditor", "The Fill Light Azimuth. For simplicity, the position of lights in the LightKit can only be specified using angles: the elevation (latitude) and azimuth (longitude) of each light with respect to the camera, expressed in degrees. (Lights always shine on the camera's lookat point.) For example, a light at (elevation=0, azimuth=0) is located at the camera (a headlight). A light at (elevation=90, azimuth=0) is above the lookat point, shining down. Negative azimuth values move the lights clockwise as seen above, positive values counter-clockwise. So, a light at (elevation=45, azimuth=-20) is above and in front of the object and shining slightly from the left side.", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        fillAzimuthLabel->setText(QApplication::translate("LightsEditor", "Azi", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        keyAzimuthLabel->setToolTip(QApplication::translate("LightsEditor", "Key Light Azimuth", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        keyAzimuthLabel->setWhatsThis(QApplication::translate("LightsEditor", "The Key Light Azimuth. For simplicity, the position of lights in the LightKit can only be specified using angles: the elevation (latitude) and azimuth (longitude) of each light with respect to the camera, expressed in degrees. (Lights always shine on the camera's lookat point.) For example, a light at (elevation=0, azimuth=0) is located at the camera (a headlight). A light at (elevation=90, azimuth=0) is above the lookat point, shining down. Negative azimuth values move the lights clockwise as seen above, positive values counter-clockwise. So, a light at (elevation=45, azimuth=-20) is above and in front of the object and shining slightly from the left side.", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        keyAzimuthLabel->setText(QApplication::translate("LightsEditor", "Azi", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        BackLightElevation->setToolTip(QApplication::translate("LightsEditor", "Back Light Elevation", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        BackLightElevation->setWhatsThis(QApplication::translate("LightsEditor", "The Back Light Elevation. For simplicity, the position of lights in the LightKit can only be specified using angles: the elevation (latitude) and azimuth (longitude) of each light with respect to the camera, expressed in degrees. (Lights always shine on the camera's lookat point.) For example, a light at (elevation=0, azimuth=0) is located at the camera (a headlight). A light at (elevation=90, azimuth=0) is above the lookat point, shining down. Negative azimuth values move the lights clockwise as seen above, positive values counter-clockwise. So, a light at (elevation=45, azimuth=-20) is above and in front of the object and shining slightly from the left side.", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        KeyLightIntensity->setToolTip(QApplication::translate("LightsEditor", "Key Light Intensity", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        KeyLightIntensity->setWhatsThis(QApplication::translate("LightsEditor", "The Intensity of the Key Light.  0 = off and 1 = full intensity.", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        BackLightK_B_Ratio->setToolTip(QApplication::translate("LightsEditor", "Key-to-Back Ratio", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        BackLightK_B_Ratio->setWhatsThis(QApplication::translate("LightsEditor", "Set the Key-to-Back Ratio. This ratio controls how bright the back lights are compared to the key light: larger values correspond to dimmer back lights. The back lights fill in the remaining high-contrast regions behind the object. Values between 2 and 10 are good.", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        headWarmthLabel->setToolTip(QApplication::translate("LightsEditor", "Headlight Warmth", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        headWarmthLabel->setWhatsThis(QApplication::translate("LightsEditor", "The \"Warmth\" of the Headlight. Warmth is a parameter that varies from 0 to 1, where 0 is \"cold\" (looks icy or lit by a very blue sky), 1 is \"warm\" (the red of a very red sunset, or the embers of a campfire), and 0.5 is a neutral white. The warmth scale is non-linear. Warmth values close to 0.5 are subtly \"warmer\" or \"cooler,\" much like a warmer tungsten incandescent bulb, a cooler halogen, or daylight (cooler still). Moving further away from 0.5, colors become more quickly varying towards blues and reds. With regards to aesthetics, extremes of warmth should be used sparingly. ", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        headWarmthLabel->setText(QApplication::translate("LightsEditor", "Warm", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        KeyLightWarmth->setToolTip(QApplication::translate("LightsEditor", "Key Light Warmth", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        KeyLightWarmth->setWhatsThis(QApplication::translate("LightsEditor", "The \"Warmth\" of the Key Light. Warmth is a parameter that varies from 0 to 1, where 0 is \"cold\" (looks icy or lit by a very blue sky), 1 is \"warm\" (the red of a very red sunset, or the embers of a campfire), and 0.5 is a neutral white. The warmth scale is non-linear. Warmth values close to 0.5 are subtly \"warmer\" or \"cooler,\" much like a warmer tungsten incandescent bulb, a cooler halogen, or daylight (cooler still). Moving further away from 0.5, colors become more quickly varying towards blues and reds. With regards to aesthetics, extremes of warmth should be used sparingly. ", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        fillLabel->setToolTip(QApplication::translate("LightsEditor", "Fill Light Parameters", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        fillLabel->setWhatsThis(QApplication::translate("LightsEditor", "The fill light is usually positioned across from or opposite from the key light (though still on the same side of the object as the camera) in order to simulate diffuse reflections from other objects in the scene.", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        fillLabel->setText(QApplication::translate("LightsEditor", "Fill", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        FillLightAzimuth->setToolTip(QApplication::translate("LightsEditor", "Fill Light Azimuth", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        FillLightAzimuth->setWhatsThis(QApplication::translate("LightsEditor", "The Fill Light Azimuth. For simplicity, the position of lights in the LightKit can only be specified using angles: the elevation (latitude) and azimuth (longitude) of each light with respect to the camera, expressed in degrees. (Lights always shine on the camera's lookat point.) For example, a light at (elevation=0, azimuth=0) is located at the camera (a headlight). A light at (elevation=90, azimuth=0) is above the lookat point, shining down. Negative azimuth values move the lights clockwise as seen above, positive values counter-clockwise. So, a light at (elevation=45, azimuth=-20) is above and in front of the object and shining slightly from the left side.", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        FillLightElevation->setToolTip(QApplication::translate("LightsEditor", "Fill Light Elevation", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        FillLightElevation->setWhatsThis(QApplication::translate("LightsEditor", "The Fill Light Elevation. For simplicity, the position of lights in the LightKit can only be specified using angles: the elevation (latitude) and azimuth (longitude) of each light with respect to the camera, expressed in degrees. (Lights always shine on the camera's lookat point.) For example, a light at (elevation=0, azimuth=0) is located at the camera (a headlight). A light at (elevation=90, azimuth=0) is above the lookat point, shining down. Negative azimuth values move the lights clockwise as seen above, positive values counter-clockwise. So, a light at (elevation=45, azimuth=-20) is above and in front of the object and shining slightly from the left side.", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        KeyLightElevation->setToolTip(QApplication::translate("LightsEditor", "Key Light Elevation", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        KeyLightElevation->setWhatsThis(QApplication::translate("LightsEditor", "The Key Light Elevation. For simplicity, the position of lights in the LightKit can only be specified using angles: the elevation (latitude) and azimuth (longitude) of each light with respect to the camera, expressed in degrees. (Lights always shine on the camera's lookat point.) For example, a light at (elevation=0, azimuth=0) is located at the camera (a headlight). A light at (elevation=90, azimuth=0) is above the lookat point, shining down. Negative azimuth values move the lights clockwise as seen above, positive values counter-clockwise. So, a light at (elevation=45, azimuth=-20) is above and in front of the object and shining slightly from the left side.", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        keyLabel->setToolTip(QApplication::translate("LightsEditor", "Key Light Parameters", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        keyLabel->setWhatsThis(QApplication::translate("LightsEditor", "The Key Light is the main light.  It is usually positioned so that it appears like an overhead light (like the sun or a ceiling light).  It is generally positioned to shine down from about a 45 degree angle vertically and at least a little offset side to side.  The key light is usually at least about twice as bright as the total of all other lights in the scene to provide good modeling of object features.", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        keyLabel->setText(QApplication::translate("LightsEditor", "Key", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        KeyLightAzimuth->setToolTip(QApplication::translate("LightsEditor", "Key Light Azimuth", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        KeyLightAzimuth->setWhatsThis(QApplication::translate("LightsEditor", "The Key Light Azimuth. For simplicity, the position of lights in the LightKit can only be specified using angles: the elevation (latitude) and azimuth (longitude) of each light with respect to the camera, expressed in degrees. (Lights always shine on the camera's lookat point.) For example, a light at (elevation=0, azimuth=0) is located at the camera (a headlight). A light at (elevation=90, azimuth=0) is above the lookat point, shining down. Negative azimuth values move the lights clockwise as seen above, positive values counter-clockwise. So, a light at (elevation=45, azimuth=-20) is above and in front of the object and shining slightly from the left side.", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        headRatioLabel->setToolTip(QApplication::translate("LightsEditor", "Key-to-Head Ratio", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        headRatioLabel->setWhatsThis(QApplication::translate("LightsEditor", "Set the Key-to-Head ratio. Similar to the Key-to-Fill ratio, this ratio controls how bright the headlight light is compared to the key light: larger values correspond to a dimmer headlight light. The headlight is special kind of fill light, lighting only the parts of the object that the camera can see. As such, a headlight tends to reduce the contrast of a scene. It can be used to fill in \"shadows\" of the object missed by the key and fill lights. The headlight should always be significantly dimmer than the key light: ratios of 2 to 15 are typical.", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        headRatioLabel->setText(QApplication::translate("LightsEditor", "K:H", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        HeadLightWarmth->setToolTip(QApplication::translate("LightsEditor", "Headlight Warmth", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        HeadLightWarmth->setWhatsThis(QApplication::translate("LightsEditor", "The \"Warmth\" of the Headlight. Warmth is a parameter that varies from 0 to 1, where 0 is \"cold\" (looks icy or lit by a very blue sky), 1 is \"warm\" (the red of a very red sunset, or the embers of a campfire), and 0.5 is a neutral white. The warmth scale is non-linear. Warmth values close to 0.5 are subtly \"warmer\" or \"cooler,\" much like a warmer tungsten incandescent bulb, a cooler halogen, or daylight (cooler still). Moving further away from 0.5, colors become more quickly varying towards blues and reds. With regards to aesthetics, extremes of warmth should be used sparingly. ", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        fillElevationLabel->setToolTip(QApplication::translate("LightsEditor", "Fill Light Elevation", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        fillElevationLabel->setWhatsThis(QApplication::translate("LightsEditor", "The Fill Light Elevation. For simplicity, the position of lights in the LightKit can only be specified using angles: the elevation (latitude) and azimuth (longitude) of each light with respect to the camera, expressed in degrees. (Lights always shine on the camera's lookat point.) For example, a light at (elevation=0, azimuth=0) is located at the camera (a headlight). A light at (elevation=90, azimuth=0) is above the lookat point, shining down. Negative azimuth values move the lights clockwise as seen above, positive values counter-clockwise. So, a light at (elevation=45, azimuth=-20) is above and in front of the object and shining slightly from the left side.", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        fillElevationLabel->setText(QApplication::translate("LightsEditor", "Ele", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        fillRatioLabel->setToolTip(QApplication::translate("LightsEditor", "Key-to-Fill Ratio", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        fillRatioLabel->setWhatsThis(QApplication::translate("LightsEditor", "Set the Key-to-Fill Ratio. This ratio controls how bright the fill light is compared to the key light: larger values correspond to a dimmer fill light. The purpose of the fill light is to light parts of the object not lit by the key light, while still maintaining contrast. This type of lighting may correspond to indirect illumination from the key light, bounced off a wall, floor, or other object. The fill light should never be brighter than the key light: a good range for the key-to-fill ratio is between 2 and 10.", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        fillRatioLabel->setText(QApplication::translate("LightsEditor", "K:F", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        keyIntensityLabel->setToolTip(QApplication::translate("LightsEditor", "Key Light Intensity", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        keyIntensityLabel->setWhatsThis(QApplication::translate("LightsEditor", "The Intensity of the Key Light.  0 = off and 1 = full intensity.", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        keyIntensityLabel->setText(QApplication::translate("LightsEditor", "Int", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        headLabel->setToolTip(QApplication::translate("LightsEditor", "Headlight Parameters", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        headLabel->setWhatsThis(QApplication::translate("LightsEditor", "The headlight, always located at the position of the camera, reduces the contrast between areas lit by the key and fill light. ", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        headLabel->setText(QApplication::translate("LightsEditor", "Head", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        FillLightWarmth->setToolTip(QApplication::translate("LightsEditor", "Fill Light Warmth", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        FillLightWarmth->setWhatsThis(QApplication::translate("LightsEditor", "The \"Warmth\" of the Fill Light. Warmth is a parameter that varies from 0 to 1, where 0 is \"cold\" (looks icy or lit by a very blue sky), 1 is \"warm\" (the red of a very red sunset, or the embers of a campfire), and 0.5 is a neutral white. The warmth scale is non-linear. Warmth values close to 0.5 are subtly \"warmer\" or \"cooler,\" much like a warmer tungsten incandescent bulb, a cooler halogen, or daylight (cooler still). Moving further away from 0.5, colors become more quickly varying towards blues and reds. With regards to aesthetics, extremes of warmth should be used sparingly. ", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        BackLightAzimuth->setToolTip(QApplication::translate("LightsEditor", "Back Light Azimuth", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        BackLightAzimuth->setWhatsThis(QApplication::translate("LightsEditor", "The Back Light Azimuth. For simplicity, the position of lights in the LightKit can only be specified using angles: the elevation (latitude) and azimuth (longitude) of each light with respect to the camera, expressed in degrees. (Lights always shine on the camera's lookat point.) For example, a light at (elevation=0, azimuth=0) is located at the camera (a headlight). A light at (elevation=90, azimuth=0) is above the lookat point, shining down. Negative azimuth values move the lights clockwise as seen above, positive values counter-clockwise. So, a light at (elevation=45, azimuth=-20) is above and in front of the object and shining slightly from the left side.", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        backElevationLabel->setToolTip(QApplication::translate("LightsEditor", "Back Light Elevation", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        backElevationLabel->setWhatsThis(QApplication::translate("LightsEditor", "The Back Light Elevation. For simplicity, the position of lights in the LightKit can only be specified using angles: the elevation (latitude) and azimuth (longitude) of each light with respect to the camera, expressed in degrees. (Lights always shine on the camera's lookat point.) For example, a light at (elevation=0, azimuth=0) is located at the camera (a headlight). A light at (elevation=90, azimuth=0) is above the lookat point, shining down. Negative azimuth values move the lights clockwise as seen above, positive values counter-clockwise. So, a light at (elevation=45, azimuth=-20) is above and in front of the object and shining slightly from the left side.", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        backElevationLabel->setText(QApplication::translate("LightsEditor", "Ele", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        backRatioLabel->setToolTip(QApplication::translate("LightsEditor", "Key-to-Back Ratio", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        backRatioLabel->setWhatsThis(QApplication::translate("LightsEditor", "Set the Key-to-Back Ratio. This ratio controls how bright the back lights are compared to the key light: larger values correspond to dimmer back lights. The back lights fill in the remaining high-contrast regions behind the object. Values between 2 and 10 are good.", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        backRatioLabel->setText(QApplication::translate("LightsEditor", "K:B", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        keyElevationLabel->setToolTip(QApplication::translate("LightsEditor", "Key Light Elevation", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        keyElevationLabel->setWhatsThis(QApplication::translate("LightsEditor", "The Key Light Elevation. For simplicity, the position of lights in the LightKit can only be specified using angles: the elevation (latitude) and azimuth (longitude) of each light with respect to the camera, expressed in degrees. (Lights always shine on the camera's lookat point.) For example, a light at (elevation=0, azimuth=0) is located at the camera (a headlight). A light at (elevation=90, azimuth=0) is above the lookat point, shining down. Negative azimuth values move the lights clockwise as seen above, positive values counter-clockwise. So, a light at (elevation=45, azimuth=-20) is above and in front of the object and shining slightly from the left side.", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        keyElevationLabel->setText(QApplication::translate("LightsEditor", "Ele", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        keyWarmthLabel->setToolTip(QApplication::translate("LightsEditor", "Key Light Warmth", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        keyWarmthLabel->setWhatsThis(QApplication::translate("LightsEditor", "The \"Warmth\" of the Key Light. Warmth is a parameter that varies from 0 to 1, where 0 is \"cold\" (looks icy or lit by a very blue sky), 1 is \"warm\" (the red of a very red sunset, or the embers of a campfire), and 0.5 is a neutral white. The warmth scale is non-linear. Warmth values close to 0.5 are subtly \"warmer\" or \"cooler,\" much like a warmer tungsten incandescent bulb, a cooler halogen, or daylight (cooler still). Moving further away from 0.5, colors become more quickly varying towards blues and reds. With regards to aesthetics, extremes of warmth should be used sparingly. ", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        keyWarmthLabel->setText(QApplication::translate("LightsEditor", "Warm", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        backWarmthLabel->setToolTip(QApplication::translate("LightsEditor", "Back Light Warmth", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        backWarmthLabel->setWhatsThis(QApplication::translate("LightsEditor", "The \"Warmth\" of the Back Light. Warmth is a parameter that varies from 0 to 1, where 0 is \"cold\" (looks icy or lit by a very blue sky), 1 is \"warm\" (the red of a very red sunset, or the embers of a campfire), and 0.5 is a neutral white. The warmth scale is non-linear. Warmth values close to 0.5 are subtly \"warmer\" or \"cooler,\" much like a warmer tungsten incandescent bulb, a cooler halogen, or daylight (cooler still). Moving further away from 0.5, colors become more quickly varying towards blues and reds. With regards to aesthetics, extremes of warmth should be used sparingly. ", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        backWarmthLabel->setText(QApplication::translate("LightsEditor", "Warm", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        backAzimuthLabel->setToolTip(QApplication::translate("LightsEditor", "Back Light Azimuth", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        backAzimuthLabel->setWhatsThis(QApplication::translate("LightsEditor", "The Back Light Azimuth. For simplicity, the position of lights in the LightKit can only be specified using angles: the elevation (latitude) and azimuth (longitude) of each light with respect to the camera, expressed in degrees. (Lights always shine on the camera's lookat point.) For example, a light at (elevation=0, azimuth=0) is located at the camera (a headlight). A light at (elevation=90, azimuth=0) is above the lookat point, shining down. Negative azimuth values move the lights clockwise as seen above, positive values counter-clockwise. So, a light at (elevation=45, azimuth=-20) is above and in front of the object and shining slightly from the left side.", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        backAzimuthLabel->setText(QApplication::translate("LightsEditor", "Azi", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        MaintainLuminance->setToolTip(QApplication::translate("LightsEditor", "Toggle constant perceptual brightness.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        MaintainLuminance->setWhatsThis(QApplication::translate("LightsEditor", "If Maintain Luminance is set, the LightKit will attempt to maintain the apparent intensity of lights based on their perceptual brightnesses.", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        MaintainLuminance->setText(QApplication::translate("LightsEditor", "Maintain Luminance", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        BackLightWarmth->setToolTip(QApplication::translate("LightsEditor", "Back Light Warmth", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        BackLightWarmth->setWhatsThis(QApplication::translate("LightsEditor", "The \"Warmth\" of the Back Light. Warmth is a parameter that varies from 0 to 1, where 0 is \"cold\" (looks icy or lit by a very blue sky), 1 is \"warm\" (the red of a very red sunset, or the embers of a campfire), and 0.5 is a neutral white. The warmth scale is non-linear. Warmth values close to 0.5 are subtly \"warmer\" or \"cooler,\" much like a warmer tungsten incandescent bulb, a cooler halogen, or daylight (cooler still). Moving further away from 0.5, colors become more quickly varying towards blues and reds. With regards to aesthetics, extremes of warmth should be used sparingly. ", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        FillLightK_F_Ratio->setToolTip(QApplication::translate("LightsEditor", "Key-to-Fill Ratio", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        FillLightK_F_Ratio->setWhatsThis(QApplication::translate("LightsEditor", "Set the Key-to-Fill Ratio. This ratio controls how bright the fill light is compared to the key light: larger values correspond to a dimmer fill light. The purpose of the fill light is to light parts of the object not lit by the key light, while still maintaining contrast. This type of lighting may correspond to indirect illumination from the key light, bounced off a wall, floor, or other object. The fill light should never be brighter than the key light: a good range for the key-to-fill ratio is between 2 and 10.", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
    } // retranslateUi

};

namespace Ui {
    class LightsEditor: public Ui_LightsEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQLIGHTSEDITOR_H
