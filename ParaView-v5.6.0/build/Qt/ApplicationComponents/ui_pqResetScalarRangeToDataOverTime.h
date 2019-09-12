/********************************************************************************
** Form generated from reading UI file 'pqResetScalarRangeToDataOverTime.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQRESETSCALARRANGETODATAOVERTIME_H
#define UI_PQRESETSCALARRANGETODATAOVERTIME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ResetScalarRangeToDataOverTime
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *RescaleAndLockButton;
    QPushButton *RescaleButton;
    QPushButton *CancelButton;

    void setupUi(QDialog *ResetScalarRangeToDataOverTime)
    {
        if (ResetScalarRangeToDataOverTime->objectName().isEmpty())
            ResetScalarRangeToDataOverTime->setObjectName(QStringLiteral("ResetScalarRangeToDataOverTime"));
        ResetScalarRangeToDataOverTime->resize(495, 118);
        verticalLayout = new QVBoxLayout(ResetScalarRangeToDataOverTime);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_3 = new QLabel(ResetScalarRangeToDataOverTime);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_3->setWordWrap(true);

        verticalLayout->addWidget(label_3);

        hboxLayout = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        spacerItem = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        RescaleAndLockButton = new QPushButton(ResetScalarRangeToDataOverTime);
        RescaleAndLockButton->setObjectName(QStringLiteral("RescaleAndLockButton"));

        hboxLayout->addWidget(RescaleAndLockButton);

        RescaleButton = new QPushButton(ResetScalarRangeToDataOverTime);
        RescaleButton->setObjectName(QStringLiteral("RescaleButton"));

        hboxLayout->addWidget(RescaleButton);

        CancelButton = new QPushButton(ResetScalarRangeToDataOverTime);
        CancelButton->setObjectName(QStringLiteral("CancelButton"));

        hboxLayout->addWidget(CancelButton);


        verticalLayout->addLayout(hboxLayout);

        verticalLayout->setStretch(0, 1);

        retranslateUi(ResetScalarRangeToDataOverTime);

        RescaleAndLockButton->setDefault(true);


        QMetaObject::connectSlotsByName(ResetScalarRangeToDataOverTime);
    } // setupUi

    void retranslateUi(QDialog *ResetScalarRangeToDataOverTime)
    {
        ResetScalarRangeToDataOverTime->setWindowTitle(QApplication::translate("ResetScalarRangeToDataOverTime", "Rescale range over time", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        label_3->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        label_3->setText(QApplication::translate("ResetScalarRangeToDataOverTime", "<html><head/><body><p>Determining range over all timesteps can potentially take a long time to complete. Are you sure you want to continue?</p></body></html>", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        RescaleAndLockButton->setToolTip(QApplication::translate("ResetScalarRangeToDataOverTime", "Rescale and lock the color map to avoid automatic rescaling.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        RescaleAndLockButton->setText(QApplication::translate("ResetScalarRangeToDataOverTime", "Rescale and disable automatic rescaling", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        RescaleButton->setToolTip(QApplication::translate("ResetScalarRangeToDataOverTime", "Rescale and leave automatic rescaling mode unchanged.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        RescaleButton->setText(QApplication::translate("ResetScalarRangeToDataOverTime", "Rescale", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        CancelButton->setToolTip(QApplication::translate("ResetScalarRangeToDataOverTime", "Close without rescaling", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        CancelButton->setText(QApplication::translate("ResetScalarRangeToDataOverTime", "Cancel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ResetScalarRangeToDataOverTime: public Ui_ResetScalarRangeToDataOverTime {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQRESETSCALARRANGETODATAOVERTIME_H
