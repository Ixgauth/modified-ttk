/********************************************************************************
** Form generated from reading UI file 'pqFontPropertyWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQFONTPROPERTYWIDGET_H
#define UI_PQFONTPROPERTYWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "pqColorChooserButtonWithPalettes.h"
#include "pqFileChooserWidget.h"

QT_BEGIN_NAMESPACE

class Ui_FontPropertyWidget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *mainLayout;
    QComboBox *FontFamily;
    QSpinBox *FontSize;
    pqColorChooserButtonWithPalettes *FontColor;
    QDoubleSpinBox *Opacity;
    QToolButton *Bold;
    QToolButton *Italics;
    QToolButton *Shadow;
    QToolButton *Justification;
    pqFileChooserWidget *FontFile;

    void setupUi(QWidget *FontPropertyWidget)
    {
        if (FontPropertyWidget->objectName().isEmpty())
            FontPropertyWidget->setObjectName(QStringLiteral("FontPropertyWidget"));
        FontPropertyWidget->resize(404, 55);
        verticalLayout = new QVBoxLayout(FontPropertyWidget);
        verticalLayout->setSpacing(2);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        mainLayout = new QHBoxLayout();
        mainLayout->setSpacing(2);
        mainLayout->setObjectName(QStringLiteral("mainLayout"));
        FontFamily = new QComboBox(FontPropertyWidget);
        FontFamily->setObjectName(QStringLiteral("FontFamily"));
        FontFamily->setSizeAdjustPolicy(QComboBox::AdjustToContents);
        FontFamily->setMinimumContentsLength(2);

        mainLayout->addWidget(FontFamily);

        FontSize = new QSpinBox(FontPropertyWidget);
        FontSize->setObjectName(QStringLiteral("FontSize"));
        FontSize->setMinimum(1);

        mainLayout->addWidget(FontSize);

        FontColor = new pqColorChooserButtonWithPalettes(FontPropertyWidget);
        FontColor->setObjectName(QStringLiteral("FontColor"));

        mainLayout->addWidget(FontColor);

        Opacity = new QDoubleSpinBox(FontPropertyWidget);
        Opacity->setObjectName(QStringLiteral("Opacity"));
        Opacity->setMaximum(1);
        Opacity->setSingleStep(0.1);

        mainLayout->addWidget(Opacity);

        Bold = new QToolButton(FontPropertyWidget);
        Bold->setObjectName(QStringLiteral("Bold"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/pqWidgets/Icons/pqBold16.png"), QSize(), QIcon::Normal, QIcon::Off);
        Bold->setIcon(icon);
        Bold->setCheckable(true);

        mainLayout->addWidget(Bold);

        Italics = new QToolButton(FontPropertyWidget);
        Italics->setObjectName(QStringLiteral("Italics"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/pqWidgets/Icons/pqItalics16.png"), QSize(), QIcon::Normal, QIcon::Off);
        Italics->setIcon(icon1);
        Italics->setCheckable(true);

        mainLayout->addWidget(Italics);

        Shadow = new QToolButton(FontPropertyWidget);
        Shadow->setObjectName(QStringLiteral("Shadow"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/pqWidgets/Icons/pqShadow16.png"), QSize(), QIcon::Normal, QIcon::Off);
        Shadow->setIcon(icon2);
        Shadow->setCheckable(true);

        mainLayout->addWidget(Shadow);

        Justification = new QToolButton(FontPropertyWidget);
        Justification->setObjectName(QStringLiteral("Justification"));
        Justification->setPopupMode(QToolButton::InstantPopup);

        mainLayout->addWidget(Justification);

        mainLayout->setStretch(0, 1);

        verticalLayout->addLayout(mainLayout);

        FontFile = new pqFileChooserWidget(FontPropertyWidget);
        FontFile->setObjectName(QStringLiteral("FontFile"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(FontFile->sizePolicy().hasHeightForWidth());
        FontFile->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(FontFile);


        retranslateUi(FontPropertyWidget);

        QMetaObject::connectSlotsByName(FontPropertyWidget);
    } // setupUi

    void retranslateUi(QWidget *FontPropertyWidget)
    {
        FontPropertyWidget->setWindowTitle(QApplication::translate("FontPropertyWidget", "Form", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        FontFamily->setToolTip(QApplication::translate("FontPropertyWidget", "Select font", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        FontSize->setToolTip(QApplication::translate("FontPropertyWidget", "Set font size", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        FontColor->setToolTip(QApplication::translate("FontPropertyWidget", "Set font color", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        FontColor->setText(QString());
#ifndef QT_NO_TOOLTIP
        Opacity->setToolTip(QApplication::translate("FontPropertyWidget", "Set font opacity", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        Bold->setToolTip(QApplication::translate("FontPropertyWidget", "Bold", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        Bold->setText(QApplication::translate("FontPropertyWidget", "...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Italics->setToolTip(QApplication::translate("FontPropertyWidget", "Italics", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        Italics->setText(QApplication::translate("FontPropertyWidget", "...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Shadow->setToolTip(QApplication::translate("FontPropertyWidget", "Shadow", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        Shadow->setText(QApplication::translate("FontPropertyWidget", "...", Q_NULLPTR));
        Justification->setText(QApplication::translate("FontPropertyWidget", "...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        FontFile->setToolTip(QApplication::translate("FontPropertyWidget", "Specify the path to a TTF file here.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class FontPropertyWidget: public Ui_FontPropertyWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQFONTPROPERTYWIDGET_H
