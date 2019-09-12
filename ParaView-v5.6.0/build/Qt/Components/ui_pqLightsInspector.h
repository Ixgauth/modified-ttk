/********************************************************************************
** Form generated from reading UI file 'pqLightsInspector.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQLIGHTSINSPECTOR_H
#define UI_PQLIGHTSINSPECTOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LightsInspector
{
public:
    QVBoxLayout *verticalLayout;
    QPushButton *addLight;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;

    void setupUi(QWidget *LightsInspector)
    {
        if (LightsInspector->objectName().isEmpty())
            LightsInspector->setObjectName(QStringLiteral("LightsInspector"));
        LightsInspector->resize(480, 640);
        verticalLayout = new QVBoxLayout(LightsInspector);
        verticalLayout->setSpacing(2);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        addLight = new QPushButton(LightsInspector);
        addLight->setObjectName(QStringLiteral("addLight"));

        verticalLayout->addWidget(addLight);

        scrollArea = new QScrollArea(LightsInspector);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(scrollArea->sizePolicy().hasHeightForWidth());
        scrollArea->setSizePolicy(sizePolicy);
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setFrameShadow(QFrame::Plain);
        scrollArea->setLineWidth(0);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 460, 562));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setStretch(6, 1);
        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);


        retranslateUi(LightsInspector);

        QMetaObject::connectSlotsByName(LightsInspector);
    } // setupUi

    void retranslateUi(QWidget *LightsInspector)
    {
        LightsInspector->setWindowTitle(QApplication::translate("LightsInspector", "Light Inspector", Q_NULLPTR));
        addLight->setText(QApplication::translate("LightsInspector", "Add Light", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class LightsInspector: public Ui_LightsInspector {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQLIGHTSINSPECTOR_H
