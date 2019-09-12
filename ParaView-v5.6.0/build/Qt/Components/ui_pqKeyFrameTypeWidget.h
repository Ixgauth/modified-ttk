/********************************************************************************
** Form generated from reading UI file 'pqKeyFrameTypeWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQKEYFRAMETYPEWIDGET_H
#define UI_PQKEYFRAMETYPEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_pqKeyFrameTypeWidget
{
public:
    QGridLayout *gridLayout;
    QComboBox *Type;
    QLabel *label;
    QGroupBox *exponentialGroup;
    QGridLayout *gridLayout1;
    QLineEdit *StartPower;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *Base;
    QLabel *label_4;
    QLineEdit *EndPower;
    QSpacerItem *spacerItem;
    QGroupBox *sinusoidGroup;
    QGridLayout *gridLayout2;
    QLabel *label_7;
    QLabel *label_6;
    QLabel *label_5;
    QDoubleSpinBox *Phase;
    QLineEdit *Offset;
    QLineEdit *Frequency;

    void setupUi(QWidget *pqKeyFrameTypeWidget)
    {
        if (pqKeyFrameTypeWidget->objectName().isEmpty())
            pqKeyFrameTypeWidget->setObjectName(QStringLiteral("pqKeyFrameTypeWidget"));
        pqKeyFrameTypeWidget->resize(251, 316);
        QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(1), static_cast<QSizePolicy::Policy>(1));
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pqKeyFrameTypeWidget->sizePolicy().hasHeightForWidth());
        pqKeyFrameTypeWidget->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(pqKeyFrameTypeWidget);
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        Type = new QComboBox(pqKeyFrameTypeWidget);
        Type->setObjectName(QStringLiteral("Type"));

        gridLayout->addWidget(Type, 0, 1, 1, 1);

        label = new QLabel(pqKeyFrameTypeWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        exponentialGroup = new QGroupBox(pqKeyFrameTypeWidget);
        exponentialGroup->setObjectName(QStringLiteral("exponentialGroup"));
        gridLayout1 = new QGridLayout(exponentialGroup);
#ifndef Q_OS_MAC
        gridLayout1->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout1->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout1->setObjectName(QStringLiteral("gridLayout1"));
        StartPower = new QLineEdit(exponentialGroup);
        StartPower->setObjectName(QStringLiteral("StartPower"));

        gridLayout1->addWidget(StartPower, 1, 1, 1, 1);

        label_2 = new QLabel(exponentialGroup);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout1->addWidget(label_2, 0, 0, 1, 1);

        label_3 = new QLabel(exponentialGroup);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout1->addWidget(label_3, 1, 0, 1, 1);

        Base = new QLineEdit(exponentialGroup);
        Base->setObjectName(QStringLiteral("Base"));

        gridLayout1->addWidget(Base, 0, 1, 1, 1);

        label_4 = new QLabel(exponentialGroup);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout1->addWidget(label_4, 2, 0, 1, 1);

        EndPower = new QLineEdit(exponentialGroup);
        EndPower->setObjectName(QStringLiteral("EndPower"));

        gridLayout1->addWidget(EndPower, 2, 1, 1, 1);


        gridLayout->addWidget(exponentialGroup, 1, 0, 1, 2);

        spacerItem = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem, 3, 0, 1, 2);

        sinusoidGroup = new QGroupBox(pqKeyFrameTypeWidget);
        sinusoidGroup->setObjectName(QStringLiteral("sinusoidGroup"));
        gridLayout2 = new QGridLayout(sinusoidGroup);
#ifndef Q_OS_MAC
        gridLayout2->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout2->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout2->setObjectName(QStringLiteral("gridLayout2"));
        label_7 = new QLabel(sinusoidGroup);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout2->addWidget(label_7, 2, 0, 1, 1);

        label_6 = new QLabel(sinusoidGroup);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout2->addWidget(label_6, 1, 0, 1, 1);

        label_5 = new QLabel(sinusoidGroup);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout2->addWidget(label_5, 0, 0, 1, 1);

        Phase = new QDoubleSpinBox(sinusoidGroup);
        Phase->setObjectName(QStringLiteral("Phase"));
        Phase->setMaximum(180);
        Phase->setMinimum(-180);

        gridLayout2->addWidget(Phase, 0, 1, 1, 1);

        Offset = new QLineEdit(sinusoidGroup);
        Offset->setObjectName(QStringLiteral("Offset"));

        gridLayout2->addWidget(Offset, 2, 1, 1, 1);

        Frequency = new QLineEdit(sinusoidGroup);
        Frequency->setObjectName(QStringLiteral("Frequency"));

        gridLayout2->addWidget(Frequency, 1, 1, 1, 1);


        gridLayout->addWidget(sinusoidGroup, 2, 0, 1, 2);

        QWidget::setTabOrder(Base, StartPower);
        QWidget::setTabOrder(StartPower, EndPower);
        QWidget::setTabOrder(EndPower, Phase);
        QWidget::setTabOrder(Phase, Frequency);
        QWidget::setTabOrder(Frequency, Offset);

        retranslateUi(pqKeyFrameTypeWidget);

        QMetaObject::connectSlotsByName(pqKeyFrameTypeWidget);
    } // setupUi

    void retranslateUi(QWidget *pqKeyFrameTypeWidget)
    {
        pqKeyFrameTypeWidget->setWindowTitle(QApplication::translate("pqKeyFrameTypeWidget", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("pqKeyFrameTypeWidget", "Interpolation:", Q_NULLPTR));
        exponentialGroup->setTitle(QApplication::translate("pqKeyFrameTypeWidget", "Exponential", Q_NULLPTR));
        StartPower->setText(QApplication::translate("pqKeyFrameTypeWidget", "0", Q_NULLPTR));
        label_2->setText(QApplication::translate("pqKeyFrameTypeWidget", "Base", Q_NULLPTR));
        label_3->setText(QApplication::translate("pqKeyFrameTypeWidget", "Start Power", Q_NULLPTR));
        Base->setText(QApplication::translate("pqKeyFrameTypeWidget", "2", Q_NULLPTR));
        label_4->setText(QApplication::translate("pqKeyFrameTypeWidget", "End Power", Q_NULLPTR));
        EndPower->setText(QApplication::translate("pqKeyFrameTypeWidget", "1", Q_NULLPTR));
        sinusoidGroup->setTitle(QApplication::translate("pqKeyFrameTypeWidget", "Sinusoid", Q_NULLPTR));
        label_7->setText(QApplication::translate("pqKeyFrameTypeWidget", "Offset", Q_NULLPTR));
        label_6->setText(QApplication::translate("pqKeyFrameTypeWidget", "Frequency", Q_NULLPTR));
        label_5->setText(QApplication::translate("pqKeyFrameTypeWidget", "Phase", Q_NULLPTR));
        Offset->setText(QApplication::translate("pqKeyFrameTypeWidget", "0", Q_NULLPTR));
        Frequency->setText(QApplication::translate("pqKeyFrameTypeWidget", "1", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class pqKeyFrameTypeWidget: public Ui_pqKeyFrameTypeWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQKEYFRAMETYPEWIDGET_H
