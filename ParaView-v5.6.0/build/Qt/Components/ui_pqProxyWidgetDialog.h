/********************************************************************************
** Form generated from reading UI file 'pqProxyWidgetDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQPROXYWIDGETDIALOG_H
#define UI_PQPROXYWIDGETDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "pqSearchBox.h"

QT_BEGIN_NAMESPACE

class Ui_ProxyWidgetDialog
{
public:
    QVBoxLayout *Layout;
    pqSearchBox *SearchBox;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *scrollAreaLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *RestoreDefaultsButton;
    QPushButton *SaveButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *ApplyButton;
    QPushButton *ResetButton;
    QPushButton *CancelButton;
    QPushButton *OKButton;

    void setupUi(QDialog *ProxyWidgetDialog)
    {
        if (ProxyWidgetDialog->objectName().isEmpty())
            ProxyWidgetDialog->setObjectName(QStringLiteral("ProxyWidgetDialog"));
        ProxyWidgetDialog->resize(573, 381);
        Layout = new QVBoxLayout(ProxyWidgetDialog);
        Layout->setObjectName(QStringLiteral("Layout"));
        SearchBox = new pqSearchBox(ProxyWidgetDialog);
        SearchBox->setObjectName(QStringLiteral("SearchBox"));

        Layout->addWidget(SearchBox);

        scrollArea = new QScrollArea(ProxyWidgetDialog);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 549, 295));
        scrollAreaLayout = new QVBoxLayout(scrollAreaWidgetContents);
        scrollAreaLayout->setSpacing(0);
        scrollAreaLayout->setContentsMargins(0, 0, 0, 0);
        scrollAreaLayout->setObjectName(QStringLiteral("scrollAreaLayout"));
        scrollArea->setWidget(scrollAreaWidgetContents);

        Layout->addWidget(scrollArea);

        widget = new QWidget(ProxyWidgetDialog);
        widget->setObjectName(QStringLiteral("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        RestoreDefaultsButton = new QPushButton(widget);
        RestoreDefaultsButton->setObjectName(QStringLiteral("RestoreDefaultsButton"));

        horizontalLayout->addWidget(RestoreDefaultsButton);

        SaveButton = new QPushButton(widget);
        SaveButton->setObjectName(QStringLiteral("SaveButton"));
        SaveButton->setIconSize(QSize(16, 16));

        horizontalLayout->addWidget(SaveButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        ApplyButton = new QPushButton(widget);
        ApplyButton->setObjectName(QStringLiteral("ApplyButton"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ApplyButton->sizePolicy().hasHeightForWidth());
        ApplyButton->setSizePolicy(sizePolicy);
        QIcon icon;
        QString iconThemeName = QStringLiteral("SP_DialogApplyButton");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QStringLiteral(""), QSize(), QIcon::Normal, QIcon::Off);
        }
        ApplyButton->setIcon(icon);

        horizontalLayout->addWidget(ApplyButton);

        ResetButton = new QPushButton(widget);
        ResetButton->setObjectName(QStringLiteral("ResetButton"));

        horizontalLayout->addWidget(ResetButton);

        CancelButton = new QPushButton(widget);
        CancelButton->setObjectName(QStringLiteral("CancelButton"));
        sizePolicy.setHeightForWidth(CancelButton->sizePolicy().hasHeightForWidth());
        CancelButton->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(CancelButton);

        OKButton = new QPushButton(widget);
        OKButton->setObjectName(QStringLiteral("OKButton"));
        sizePolicy.setHeightForWidth(OKButton->sizePolicy().hasHeightForWidth());
        OKButton->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(OKButton);


        Layout->addWidget(widget);


        retranslateUi(ProxyWidgetDialog);

        OKButton->setDefault(true);


        QMetaObject::connectSlotsByName(ProxyWidgetDialog);
    } // setupUi

    void retranslateUi(QDialog *ProxyWidgetDialog)
    {
        ProxyWidgetDialog->setWindowTitle(QApplication::translate("ProxyWidgetDialog", "Dialog", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        RestoreDefaultsButton->setToolTip(QApplication::translate("ProxyWidgetDialog", "Restore application default setting values", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        RestoreDefaultsButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        SaveButton->setToolTip(QApplication::translate("ProxyWidgetDialog", "Save current settings values as default", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        SaveButton->setText(QString());
        ApplyButton->setText(QApplication::translate("ProxyWidgetDialog", "Apply", Q_NULLPTR));
        ResetButton->setText(QApplication::translate("ProxyWidgetDialog", "Reset", Q_NULLPTR));
        CancelButton->setText(QApplication::translate("ProxyWidgetDialog", "&Cancel", Q_NULLPTR));
        OKButton->setText(QApplication::translate("ProxyWidgetDialog", "&OK", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ProxyWidgetDialog: public Ui_ProxyWidgetDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQPROXYWIDGETDIALOG_H
