/********************************************************************************
** Form generated from reading UI file 'pqAbortAnimation.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQABORTANIMATION_H
#define UI_PQABORTANIMATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_AbortAnimation
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *hboxLayout;
    QPushButton *abortAnimationButton;

    void setupUi(QDialog *AbortAnimation)
    {
        if (AbortAnimation->objectName().isEmpty())
            AbortAnimation->setObjectName(QStringLiteral("AbortAnimation"));
        AbortAnimation->resize(140, 58);
        gridLayout = new QGridLayout(AbortAnimation);
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        hboxLayout = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        hboxLayout->setContentsMargins(0, 0, 0, 0);
#endif
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        abortAnimationButton = new QPushButton(AbortAnimation);
        abortAnimationButton->setObjectName(QStringLiteral("abortAnimationButton"));

        hboxLayout->addWidget(abortAnimationButton);


        gridLayout->addLayout(hboxLayout, 0, 0, 1, 1);


        retranslateUi(AbortAnimation);
        QObject::connect(abortAnimationButton, SIGNAL(clicked()), AbortAnimation, SLOT(accept()));

        QMetaObject::connectSlotsByName(AbortAnimation);
    } // setupUi

    void retranslateUi(QDialog *AbortAnimation)
    {
        AbortAnimation->setWindowTitle(QApplication::translate("AbortAnimation", "Dialog", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        abortAnimationButton->setToolTip(QApplication::translate("AbortAnimation", "Abort Saving Animation", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        abortAnimationButton->setStatusTip(QApplication::translate("AbortAnimation", "Interrupts the saving of animation and aborts it.", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        abortAnimationButton->setWhatsThis(QApplication::translate("AbortAnimation", "Interrupts the saving of animation and aborts it.", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        abortAnimationButton->setText(QApplication::translate("AbortAnimation", "Abort Animation", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AbortAnimation: public Ui_AbortAnimation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQABORTANIMATION_H
