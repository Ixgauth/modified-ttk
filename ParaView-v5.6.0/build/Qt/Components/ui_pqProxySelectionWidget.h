/********************************************************************************
** Form generated from reading UI file 'pqProxySelectionWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQPROXYSELECTIONWIDGET_H
#define UI_PQPROXYSELECTIONWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ProxySelectionWidget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *comboBox;
    QFrame *frame;
    QVBoxLayout *frameLayout;
    QFrame *line;

    void setupUi(QWidget *ProxySelectionWidget)
    {
        if (ProxySelectionWidget->objectName().isEmpty())
            ProxySelectionWidget->setObjectName(QStringLiteral("ProxySelectionWidget"));
        ProxySelectionWidget->resize(192, 165);
        verticalLayout = new QVBoxLayout(ProxySelectionWidget);
        verticalLayout->setSpacing(2);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(ProxySelectionWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        comboBox = new QComboBox(ProxySelectionWidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        horizontalLayout->addWidget(comboBox);

        horizontalLayout->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayout);

        frame = new QFrame(ProxySelectionWidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Plain);
        frameLayout = new QVBoxLayout(frame);
        frameLayout->setContentsMargins(0, 0, 0, 0);
        frameLayout->setObjectName(QStringLiteral("frameLayout"));
        line = new QFrame(frame);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        frameLayout->addWidget(line);


        verticalLayout->addWidget(frame);

        verticalLayout->setStretch(1, 1);

        retranslateUi(ProxySelectionWidget);

        QMetaObject::connectSlotsByName(ProxySelectionWidget);
    } // setupUi

    void retranslateUi(QWidget *ProxySelectionWidget)
    {
        ProxySelectionWidget->setWindowTitle(QApplication::translate("ProxySelectionWidget", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("ProxySelectionWidget", "TextLabel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ProxySelectionWidget: public Ui_ProxySelectionWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQPROXYSELECTIONWIDGET_H
