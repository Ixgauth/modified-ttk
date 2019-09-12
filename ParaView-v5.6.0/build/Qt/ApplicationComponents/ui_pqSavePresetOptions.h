/********************************************************************************
** Form generated from reading UI file 'pqSavePresetOptions.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQSAVEPRESETOPTIONS_H
#define UI_PQSAVEPRESETOPTIONS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SavePresetOptions
{
public:
    QVBoxLayout *verticalLayout;
    QCheckBox *saveColors;
    QCheckBox *saveOpacities;
    QCheckBox *saveAnnotations;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SavePresetOptions)
    {
        if (SavePresetOptions->objectName().isEmpty())
            SavePresetOptions->setObjectName(QStringLiteral("SavePresetOptions"));
        SavePresetOptions->resize(241, 198);
        verticalLayout = new QVBoxLayout(SavePresetOptions);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        saveColors = new QCheckBox(SavePresetOptions);
        saveColors->setObjectName(QStringLiteral("saveColors"));

        verticalLayout->addWidget(saveColors);

        saveOpacities = new QCheckBox(SavePresetOptions);
        saveOpacities->setObjectName(QStringLiteral("saveOpacities"));

        verticalLayout->addWidget(saveOpacities);

        saveAnnotations = new QCheckBox(SavePresetOptions);
        saveAnnotations->setObjectName(QStringLiteral("saveAnnotations"));

        verticalLayout->addWidget(saveAnnotations);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(SavePresetOptions);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(SavePresetOptions);
        QObject::connect(buttonBox, SIGNAL(accepted()), SavePresetOptions, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SavePresetOptions, SLOT(reject()));

        QMetaObject::connectSlotsByName(SavePresetOptions);
    } // setupUi

    void retranslateUi(QDialog *SavePresetOptions)
    {
        SavePresetOptions->setWindowTitle(QApplication::translate("SavePresetOptions", "Save Preset Options", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        saveColors->setToolTip(QApplication::translate("SavePresetOptions", "<html><head/><body><p>Check to save colors to the preset.</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        saveColors->setText(QApplication::translate("SavePresetOptions", "Save colors", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        saveOpacities->setToolTip(QApplication::translate("SavePresetOptions", "<html><head/><body><p>Check to save opacities to the preset.</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        saveOpacities->setText(QApplication::translate("SavePresetOptions", "Save opacities", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        saveAnnotations->setToolTip(QApplication::translate("SavePresetOptions", "<html><head/><body><p>Check to save annotations to the preset.</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        saveAnnotations->setText(QApplication::translate("SavePresetOptions", "Save annotations", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SavePresetOptions: public Ui_SavePresetOptions {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQSAVEPRESETOPTIONS_H
