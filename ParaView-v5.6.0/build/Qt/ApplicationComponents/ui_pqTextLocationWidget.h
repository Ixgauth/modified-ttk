/********************************************************************************
** Form generated from reading UI file 'pqTextLocationWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQTEXTLOCATIONWIDGET_H
#define UI_PQTEXTLOCATIONWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TextLocationWidget
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBoxLocation;
    QGridLayout *gridLayout1;
    QToolButton *toolButtonUC;
    QToolButton *toolButtonUR;
    QToolButton *toolButtonUL;
    QToolButton *toolButtonLR;
    QToolButton *toolButtonLL;
    QToolButton *toolButtonLC;
    QGroupBox *groupBoxPosition;
    QGridLayout *gridLayout_2;
    QDoubleSpinBox *doubleSpinBox_Pos1Y;
    QDoubleSpinBox *doubleSpinBox_Pos1X;
    QButtonGroup *buttonGroupLocation;

    void setupUi(QWidget *TextLocationWidget)
    {
        if (TextLocationWidget->objectName().isEmpty())
            TextLocationWidget->setObjectName(QStringLiteral("TextLocationWidget"));
        TextLocationWidget->resize(294, 214);
        gridLayout = new QGridLayout(TextLocationWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        groupBoxLocation = new QGroupBox(TextLocationWidget);
        groupBoxLocation->setObjectName(QStringLiteral("groupBoxLocation"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBoxLocation->sizePolicy().hasHeightForWidth());
        groupBoxLocation->setSizePolicy(sizePolicy);
        groupBoxLocation->setCheckable(true);
        groupBoxLocation->setChecked(true);
        gridLayout1 = new QGridLayout(groupBoxLocation);
#ifndef Q_OS_MAC
        gridLayout1->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout1->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout1->setObjectName(QStringLiteral("gridLayout1"));
        toolButtonUC = new QToolButton(groupBoxLocation);
        buttonGroupLocation = new QButtonGroup(TextLocationWidget);
        buttonGroupLocation->setObjectName(QStringLiteral("buttonGroupLocation"));
        buttonGroupLocation->addButton(toolButtonUC);
        toolButtonUC->setObjectName(QStringLiteral("toolButtonUC"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(toolButtonUC->sizePolicy().hasHeightForWidth());
        toolButtonUC->setSizePolicy(sizePolicy1);
        QIcon icon;
        icon.addFile(QStringLiteral(":/pqWidgets/Icons/pqTopCenter32.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButtonUC->setIcon(icon);
        toolButtonUC->setIconSize(QSize(24, 24));
        toolButtonUC->setCheckable(true);
        toolButtonUC->setAutoExclusive(true);

        gridLayout1->addWidget(toolButtonUC, 0, 1, 1, 1);

        toolButtonUR = new QToolButton(groupBoxLocation);
        buttonGroupLocation->addButton(toolButtonUR);
        toolButtonUR->setObjectName(QStringLiteral("toolButtonUR"));
        sizePolicy1.setHeightForWidth(toolButtonUR->sizePolicy().hasHeightForWidth());
        toolButtonUR->setSizePolicy(sizePolicy1);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/pqWidgets/Icons/pqTopRightCorner32.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButtonUR->setIcon(icon1);
        toolButtonUR->setIconSize(QSize(24, 24));
        toolButtonUR->setCheckable(true);
        toolButtonUR->setAutoExclusive(true);

        gridLayout1->addWidget(toolButtonUR, 0, 2, 1, 1);

        toolButtonUL = new QToolButton(groupBoxLocation);
        buttonGroupLocation->addButton(toolButtonUL);
        toolButtonUL->setObjectName(QStringLiteral("toolButtonUL"));
        sizePolicy1.setHeightForWidth(toolButtonUL->sizePolicy().hasHeightForWidth());
        toolButtonUL->setSizePolicy(sizePolicy1);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/pqWidgets/Icons/pqTopLeftCorner32.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButtonUL->setIcon(icon2);
        toolButtonUL->setIconSize(QSize(24, 24));
        toolButtonUL->setCheckable(true);
        toolButtonUL->setChecked(true);
        toolButtonUL->setAutoExclusive(true);

        gridLayout1->addWidget(toolButtonUL, 0, 0, 1, 1);

        toolButtonLR = new QToolButton(groupBoxLocation);
        buttonGroupLocation->addButton(toolButtonLR);
        toolButtonLR->setObjectName(QStringLiteral("toolButtonLR"));
        sizePolicy1.setHeightForWidth(toolButtonLR->sizePolicy().hasHeightForWidth());
        toolButtonLR->setSizePolicy(sizePolicy1);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/pqWidgets/Icons/pqBottomRightCorner32.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButtonLR->setIcon(icon3);
        toolButtonLR->setIconSize(QSize(24, 24));
        toolButtonLR->setCheckable(true);
        toolButtonLR->setAutoExclusive(true);

        gridLayout1->addWidget(toolButtonLR, 1, 2, 1, 1);

        toolButtonLL = new QToolButton(groupBoxLocation);
        buttonGroupLocation->addButton(toolButtonLL);
        toolButtonLL->setObjectName(QStringLiteral("toolButtonLL"));
        sizePolicy1.setHeightForWidth(toolButtonLL->sizePolicy().hasHeightForWidth());
        toolButtonLL->setSizePolicy(sizePolicy1);
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/pqWidgets/Icons/pqBottomLeftCorner32.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButtonLL->setIcon(icon4);
        toolButtonLL->setIconSize(QSize(24, 24));
        toolButtonLL->setCheckable(true);
        toolButtonLL->setAutoExclusive(true);

        gridLayout1->addWidget(toolButtonLL, 1, 0, 1, 1);

        toolButtonLC = new QToolButton(groupBoxLocation);
        buttonGroupLocation->addButton(toolButtonLC);
        toolButtonLC->setObjectName(QStringLiteral("toolButtonLC"));
        sizePolicy1.setHeightForWidth(toolButtonLC->sizePolicy().hasHeightForWidth());
        toolButtonLC->setSizePolicy(sizePolicy1);
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/pqWidgets/Icons/pqBottomCenter32.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButtonLC->setIcon(icon5);
        toolButtonLC->setIconSize(QSize(24, 24));
        toolButtonLC->setCheckable(true);
        toolButtonLC->setChecked(false);
        toolButtonLC->setAutoExclusive(true);

        gridLayout1->addWidget(toolButtonLC, 1, 1, 1, 1);


        gridLayout->addWidget(groupBoxLocation, 0, 0, 1, 1);

        groupBoxPosition = new QGroupBox(TextLocationWidget);
        groupBoxPosition->setObjectName(QStringLiteral("groupBoxPosition"));
        groupBoxPosition->setCheckable(true);
        groupBoxPosition->setChecked(false);
        gridLayout_2 = new QGridLayout(groupBoxPosition);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        doubleSpinBox_Pos1Y = new QDoubleSpinBox(groupBoxPosition);
        doubleSpinBox_Pos1Y->setObjectName(QStringLiteral("doubleSpinBox_Pos1Y"));
        doubleSpinBox_Pos1Y->setDecimals(6);
        doubleSpinBox_Pos1Y->setSingleStep(0.01);

        gridLayout_2->addWidget(doubleSpinBox_Pos1Y, 0, 1, 1, 1);

        doubleSpinBox_Pos1X = new QDoubleSpinBox(groupBoxPosition);
        doubleSpinBox_Pos1X->setObjectName(QStringLiteral("doubleSpinBox_Pos1X"));
        doubleSpinBox_Pos1X->setDecimals(6);
        doubleSpinBox_Pos1X->setSingleStep(0.01);

        gridLayout_2->addWidget(doubleSpinBox_Pos1X, 0, 0, 1, 1);


        gridLayout->addWidget(groupBoxPosition, 1, 0, 1, 1);


        retranslateUi(TextLocationWidget);

        QMetaObject::connectSlotsByName(TextLocationWidget);
    } // setupUi

    void retranslateUi(QWidget *TextLocationWidget)
    {
        TextLocationWidget->setWindowTitle(QApplication::translate("TextLocationWidget", "Form", Q_NULLPTR));
        groupBoxLocation->setTitle(QApplication::translate("TextLocationWidget", "Use Window Location", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        toolButtonUC->setToolTip(QApplication::translate("TextLocationWidget", "Top Center", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        toolButtonUC->setText(QString());
#ifndef QT_NO_TOOLTIP
        toolButtonUR->setToolTip(QApplication::translate("TextLocationWidget", "Top Right Corner", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        toolButtonUR->setText(QString());
#ifndef QT_NO_TOOLTIP
        toolButtonUL->setToolTip(QApplication::translate("TextLocationWidget", "Top Left Corner", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        toolButtonUL->setText(QString());
#ifndef QT_NO_TOOLTIP
        toolButtonLR->setToolTip(QApplication::translate("TextLocationWidget", "Bottom Right Corner", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        toolButtonLR->setText(QString());
#ifndef QT_NO_TOOLTIP
        toolButtonLL->setToolTip(QApplication::translate("TextLocationWidget", "Bottom Left Corner", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        toolButtonLL->setText(QString());
#ifndef QT_NO_TOOLTIP
        toolButtonLC->setToolTip(QApplication::translate("TextLocationWidget", "Bottom Center", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        toolButtonLC->setText(QString());
        groupBoxPosition->setTitle(QApplication::translate("TextLocationWidget", "Lower Left Corner", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TextLocationWidget: public Ui_TextLocationWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQTEXTLOCATIONWIDGET_H