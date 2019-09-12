/********************************************************************************
** Form generated from reading UI file 'pqTimerLogDisplay.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQTIMERLOGDISPLAY_H
#define UI_PQTIMERLOGDISPLAY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_pqTimerLogDisplay
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *vboxLayout;
    QPushButton *refreshButton;
    QPushButton *clearButton;
    QGridLayout *gridLayout1;
    QSpacerItem *spacerItem;
    QLabel *label;
    QComboBox *timeThreshold;
    QGridLayout *gridLayout2;
    QSpacerItem *spacerItem1;
    QLabel *label_2;
    QComboBox *bufferLength;
    QCheckBox *enable;
    QPushButton *saveButton;
    QSpacerItem *spacerItem2;
    QDialogButtonBox *buttonBox;
    QTextEdit *log;

    void setupUi(QDialog *pqTimerLogDisplay)
    {
        if (pqTimerLogDisplay->objectName().isEmpty())
            pqTimerLogDisplay->setObjectName(QStringLiteral("pqTimerLogDisplay"));
        pqTimerLogDisplay->resize(500, 500);
        gridLayout = new QGridLayout(pqTimerLogDisplay);
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        vboxLayout = new QVBoxLayout();
#ifndef Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout->setContentsMargins(0, 0, 0, 0);
#endif
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        refreshButton = new QPushButton(pqTimerLogDisplay);
        refreshButton->setObjectName(QStringLiteral("refreshButton"));

        vboxLayout->addWidget(refreshButton);

        clearButton = new QPushButton(pqTimerLogDisplay);
        clearButton->setObjectName(QStringLiteral("clearButton"));

        vboxLayout->addWidget(clearButton);

        gridLayout1 = new QGridLayout();
        gridLayout1->setSpacing(0);
        gridLayout1->setContentsMargins(0, 0, 0, 0);
        gridLayout1->setObjectName(QStringLiteral("gridLayout1"));
        spacerItem = new QSpacerItem(10, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout1->addItem(spacerItem, 1, 0, 1, 1);

        label = new QLabel(pqTimerLogDisplay);
        label->setObjectName(QStringLiteral("label"));

        gridLayout1->addWidget(label, 0, 0, 1, 2);

        timeThreshold = new QComboBox(pqTimerLogDisplay);
        timeThreshold->setObjectName(QStringLiteral("timeThreshold"));

        gridLayout1->addWidget(timeThreshold, 1, 1, 1, 1);


        vboxLayout->addLayout(gridLayout1);

        gridLayout2 = new QGridLayout();
        gridLayout2->setSpacing(0);
        gridLayout2->setContentsMargins(0, 0, 0, 0);
        gridLayout2->setObjectName(QStringLiteral("gridLayout2"));
        spacerItem1 = new QSpacerItem(10, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout2->addItem(spacerItem1, 1, 0, 1, 1);

        label_2 = new QLabel(pqTimerLogDisplay);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout2->addWidget(label_2, 0, 0, 1, 2);

        bufferLength = new QComboBox(pqTimerLogDisplay);
        bufferLength->setObjectName(QStringLiteral("bufferLength"));

        gridLayout2->addWidget(bufferLength, 1, 1, 1, 1);


        vboxLayout->addLayout(gridLayout2);

        enable = new QCheckBox(pqTimerLogDisplay);
        enable->setObjectName(QStringLiteral("enable"));
        enable->setChecked(true);

        vboxLayout->addWidget(enable);

        saveButton = new QPushButton(pqTimerLogDisplay);
        saveButton->setObjectName(QStringLiteral("saveButton"));

        vboxLayout->addWidget(saveButton);

        spacerItem2 = new QSpacerItem(20, 191, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem2);


        gridLayout->addLayout(vboxLayout, 0, 1, 1, 1);

        buttonBox = new QDialogButtonBox(pqTimerLogDisplay);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        gridLayout->addWidget(buttonBox, 1, 0, 1, 2);

        log = new QTextEdit(pqTimerLogDisplay);
        log->setObjectName(QStringLiteral("log"));
        QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(7));
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(log->sizePolicy().hasHeightForWidth());
        log->setSizePolicy(sizePolicy);
        log->setReadOnly(true);

        gridLayout->addWidget(log, 0, 0, 1, 1);


        retranslateUi(pqTimerLogDisplay);
        QObject::connect(buttonBox, SIGNAL(accepted()), pqTimerLogDisplay, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), pqTimerLogDisplay, SLOT(reject()));

        QMetaObject::connectSlotsByName(pqTimerLogDisplay);
    } // setupUi

    void retranslateUi(QDialog *pqTimerLogDisplay)
    {
        pqTimerLogDisplay->setWindowTitle(QApplication::translate("pqTimerLogDisplay", "Timer Log", Q_NULLPTR));
        refreshButton->setText(QApplication::translate("pqTimerLogDisplay", "Refresh", Q_NULLPTR));
        clearButton->setText(QApplication::translate("pqTimerLogDisplay", "Clear", Q_NULLPTR));
        label->setText(QApplication::translate("pqTimerLogDisplay", "Time Threshold:", Q_NULLPTR));
        label_2->setText(QApplication::translate("pqTimerLogDisplay", "Buffer Length:", Q_NULLPTR));
        enable->setText(QApplication::translate("pqTimerLogDisplay", "Enable", Q_NULLPTR));
        saveButton->setText(QApplication::translate("pqTimerLogDisplay", "Save", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class pqTimerLogDisplay: public Ui_pqTimerLogDisplay {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQTIMERLOGDISPLAY_H
