/********************************************************************************
** Form generated from reading UI file 'pqAnimationTimeWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQANIMATIONTIMEWIDGET_H
#define UI_PQANIMATIONTIMEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include "pqLineEdit.h"
#include "pqSpinBox.h"

QT_BEGIN_NAMESPACE

class Ui_AnimationTimeWidget
{
public:
    QHBoxLayout *horizontalLayout;
    QLabel *timeLabel;
    QRadioButton *radioButtonValue;
    pqLineEdit *timeValue;
    QComboBox *timeValueComboBox;
    QRadioButton *radioButtonStep;
    pqSpinBox *timestepValue;
    QLabel *timestepCountLabel;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *AnimationTimeWidget)
    {
        if (AnimationTimeWidget->objectName().isEmpty())
            AnimationTimeWidget->setObjectName(QStringLiteral("AnimationTimeWidget"));
        AnimationTimeWidget->resize(400, 27);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(AnimationTimeWidget->sizePolicy().hasHeightForWidth());
        AnimationTimeWidget->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(AnimationTimeWidget);
        horizontalLayout->setSpacing(2);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        timeLabel = new QLabel(AnimationTimeWidget);
        timeLabel->setObjectName(QStringLiteral("timeLabel"));

        horizontalLayout->addWidget(timeLabel);

        radioButtonValue = new QRadioButton(AnimationTimeWidget);
        radioButtonValue->setObjectName(QStringLiteral("radioButtonValue"));
        radioButtonValue->setChecked(true);

        horizontalLayout->addWidget(radioButtonValue);

        timeValue = new pqLineEdit(AnimationTimeWidget);
        timeValue->setObjectName(QStringLiteral("timeValue"));
        timeValue->setProperty("resetCursorPositionOnEditingFinished", QVariant(true));

        horizontalLayout->addWidget(timeValue);

        timeValueComboBox = new QComboBox(AnimationTimeWidget);
        timeValueComboBox->setObjectName(QStringLiteral("timeValueComboBox"));

        horizontalLayout->addWidget(timeValueComboBox);

        radioButtonStep = new QRadioButton(AnimationTimeWidget);
        radioButtonStep->setObjectName(QStringLiteral("radioButtonStep"));
        radioButtonStep->setLayoutDirection(Qt::RightToLeft);

        horizontalLayout->addWidget(radioButtonStep);

        timestepValue = new pqSpinBox(AnimationTimeWidget);
        timestepValue->setObjectName(QStringLiteral("timestepValue"));
        timestepValue->setEnabled(false);
        timestepValue->setMaximum(10000);

        horizontalLayout->addWidget(timestepValue);

        timestepCountLabel = new QLabel(AnimationTimeWidget);
        timestepCountLabel->setObjectName(QStringLiteral("timestepCountLabel"));

        horizontalLayout->addWidget(timestepCountLabel);

        horizontalSpacer = new QSpacerItem(0, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        horizontalLayout->setStretch(1, 1);
        horizontalLayout->setStretch(7, 1);

        retranslateUi(AnimationTimeWidget);
        QObject::connect(radioButtonStep, SIGNAL(toggled(bool)), timestepValue, SLOT(setEnabled(bool)));
        QObject::connect(radioButtonValue, SIGNAL(toggled(bool)), timeValue, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(AnimationTimeWidget);
    } // setupUi

    void retranslateUi(QWidget *AnimationTimeWidget)
    {
        AnimationTimeWidget->setWindowTitle(QApplication::translate("AnimationTimeWidget", "Form", Q_NULLPTR));
        timeLabel->setText(QApplication::translate("AnimationTimeWidget", "Time:", Q_NULLPTR));
        radioButtonValue->setText(QString());
        timeValue->setText(QApplication::translate("AnimationTimeWidget", "0", Q_NULLPTR));
        radioButtonStep->setText(QString());
        timestepCountLabel->setText(QApplication::translate("AnimationTimeWidget", "of (TDB)", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AnimationTimeWidget: public Ui_AnimationTimeWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQANIMATIONTIMEWIDGET_H
