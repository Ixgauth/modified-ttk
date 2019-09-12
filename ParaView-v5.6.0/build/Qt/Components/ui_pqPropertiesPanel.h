/********************************************************************************
** Form generated from reading UI file 'pqPropertiesPanel.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQPROPERTIESPANEL_H
#define UI_PQPROPERTIESPANEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <pqExpanderButton.h>
#include "pqSearchBox.h"

QT_BEGIN_NAMESPACE

class Ui_propertiesPanel
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *ButtonLayout;
    QPushButton *Accept;
    QPushButton *Reset;
    QPushButton *Delete;
    QPushButton *Help;
    QHBoxLayout *SearchBoxLayout;
    pqSearchBox *SearchBox;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *ScrollAreaLayout;
    QWidget *PropertiesButtons;
    QHBoxLayout *horizontalLayout;
    pqExpanderButton *PropertiesButton;
    QPushButton *PropertiesCopy;
    QPushButton *PropertiesPaste;
    QPushButton *PropertiesRestoreDefaults;
    QPushButton *PropertiesSaveAsDefaults;
    QFrame *PropertiesFrame;
    QWidget *DisplayButtons;
    QHBoxLayout *horizontalLayout_2;
    pqExpanderButton *DisplayButton;
    QPushButton *DisplayCopy;
    QPushButton *DisplayPaste;
    QPushButton *DisplayRestoreDefaults;
    QPushButton *DisplaySaveAsDefaults;
    QFrame *DisplayFrame;
    QWidget *ViewButtons;
    QHBoxLayout *horizontalLayout_3;
    pqExpanderButton *ViewButton;
    QPushButton *ViewCopy;
    QPushButton *ViewPaste;
    QPushButton *ViewRestoreDefaults;
    QPushButton *ViewSaveAsDefaults;
    QFrame *ViewFrame;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *propertiesPanel)
    {
        if (propertiesPanel->objectName().isEmpty())
            propertiesPanel->setObjectName(QStringLiteral("propertiesPanel"));
        propertiesPanel->resize(350, 750);
        verticalLayout = new QVBoxLayout(propertiesPanel);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        ButtonLayout = new QHBoxLayout();
        ButtonLayout->setSpacing(2);
        ButtonLayout->setObjectName(QStringLiteral("ButtonLayout"));
        Accept = new QPushButton(propertiesPanel);
        Accept->setObjectName(QStringLiteral("Accept"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/pqWidgets/Icons/pqUpdate16.png"), QSize(), QIcon::Normal, QIcon::Off);
        Accept->setIcon(icon);

        ButtonLayout->addWidget(Accept);

        Reset = new QPushButton(propertiesPanel);
        Reset->setObjectName(QStringLiteral("Reset"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/pqWidgets/Icons/pqCancel16.png"), QSize(), QIcon::Normal, QIcon::Off);
        Reset->setIcon(icon1);

        ButtonLayout->addWidget(Reset);

        Delete = new QPushButton(propertiesPanel);
        Delete->setObjectName(QStringLiteral("Delete"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/QtWidgets/Icons/pqDelete16.png"), QSize(), QIcon::Normal, QIcon::Off);
        Delete->setIcon(icon2);

        ButtonLayout->addWidget(Delete);

        Help = new QPushButton(propertiesPanel);
        Help->setObjectName(QStringLiteral("Help"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/pqWidgets/Icons/pqHelp16.png"), QSize(), QIcon::Normal, QIcon::Off);
        Help->setIcon(icon3);

        ButtonLayout->addWidget(Help);


        verticalLayout->addLayout(ButtonLayout);

        SearchBoxLayout = new QHBoxLayout();
        SearchBoxLayout->setSpacing(2);
        SearchBoxLayout->setObjectName(QStringLiteral("SearchBoxLayout"));
        SearchBox = new pqSearchBox(propertiesPanel);
        SearchBox->setObjectName(QStringLiteral("SearchBox"));
        SearchBox->setProperty("settingKey", QVariant(QStringLiteral("showAdvancedProperties")));
        SearchBox->setProperty("advancedSearchEnabled", QVariant(true));

        SearchBoxLayout->addWidget(SearchBox);


        verticalLayout->addLayout(SearchBoxLayout);

        scrollArea = new QScrollArea(propertiesPanel);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setFrameShadow(QFrame::Plain);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 332, 689));
        ScrollAreaLayout = new QVBoxLayout(scrollAreaWidgetContents);
        ScrollAreaLayout->setContentsMargins(0, 0, 0, 0);
        ScrollAreaLayout->setObjectName(QStringLiteral("ScrollAreaLayout"));
        PropertiesButtons = new QWidget(scrollAreaWidgetContents);
        PropertiesButtons->setObjectName(QStringLiteral("PropertiesButtons"));
        horizontalLayout = new QHBoxLayout(PropertiesButtons);
#ifndef Q_OS_MAC
        horizontalLayout->setSpacing(6);
#endif
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        PropertiesButton = new pqExpanderButton(PropertiesButtons);
        PropertiesButton->setObjectName(QStringLiteral("PropertiesButton"));
        PropertiesButton->setProperty("checked", QVariant(true));

        horizontalLayout->addWidget(PropertiesButton);

        PropertiesCopy = new QPushButton(PropertiesButtons);
        PropertiesCopy->setObjectName(QStringLiteral("PropertiesCopy"));
        PropertiesCopy->setEnabled(false);
        PropertiesCopy->setMaximumSize(QSize(50, 16777215));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/pqWidgets/Icons/pqCopy22.png"), QSize(), QIcon::Normal, QIcon::Off);
        PropertiesCopy->setIcon(icon4);

        horizontalLayout->addWidget(PropertiesCopy);

        PropertiesPaste = new QPushButton(PropertiesButtons);
        PropertiesPaste->setObjectName(QStringLiteral("PropertiesPaste"));
        PropertiesPaste->setEnabled(false);
        PropertiesPaste->setMaximumSize(QSize(50, 16777215));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/pqWidgets/Icons/pqPaste22.png"), QSize(), QIcon::Normal, QIcon::Off);
        PropertiesPaste->setIcon(icon5);

        horizontalLayout->addWidget(PropertiesPaste);

        PropertiesRestoreDefaults = new QPushButton(PropertiesButtons);
        PropertiesRestoreDefaults->setObjectName(QStringLiteral("PropertiesRestoreDefaults"));
        PropertiesRestoreDefaults->setMaximumSize(QSize(50, 16777215));

        horizontalLayout->addWidget(PropertiesRestoreDefaults);

        PropertiesSaveAsDefaults = new QPushButton(PropertiesButtons);
        PropertiesSaveAsDefaults->setObjectName(QStringLiteral("PropertiesSaveAsDefaults"));
        PropertiesSaveAsDefaults->setMaximumSize(QSize(50, 16777215));

        horizontalLayout->addWidget(PropertiesSaveAsDefaults);


        ScrollAreaLayout->addWidget(PropertiesButtons);

        PropertiesFrame = new QFrame(scrollAreaWidgetContents);
        PropertiesFrame->setObjectName(QStringLiteral("PropertiesFrame"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(PropertiesFrame->sizePolicy().hasHeightForWidth());
        PropertiesFrame->setSizePolicy(sizePolicy);
        PropertiesFrame->setFrameShape(QFrame::NoFrame);
        PropertiesFrame->setFrameShadow(QFrame::Plain);

        ScrollAreaLayout->addWidget(PropertiesFrame);

        DisplayButtons = new QWidget(scrollAreaWidgetContents);
        DisplayButtons->setObjectName(QStringLiteral("DisplayButtons"));
        horizontalLayout_2 = new QHBoxLayout(DisplayButtons);
#ifndef Q_OS_MAC
        horizontalLayout_2->setSpacing(6);
#endif
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        DisplayButton = new pqExpanderButton(DisplayButtons);
        DisplayButton->setObjectName(QStringLiteral("DisplayButton"));
        DisplayButton->setProperty("checked", QVariant(true));

        horizontalLayout_2->addWidget(DisplayButton);

        DisplayCopy = new QPushButton(DisplayButtons);
        DisplayCopy->setObjectName(QStringLiteral("DisplayCopy"));
        DisplayCopy->setEnabled(false);
        DisplayCopy->setMaximumSize(QSize(50, 16777215));
        DisplayCopy->setIcon(icon4);

        horizontalLayout_2->addWidget(DisplayCopy);

        DisplayPaste = new QPushButton(DisplayButtons);
        DisplayPaste->setObjectName(QStringLiteral("DisplayPaste"));
        DisplayPaste->setEnabled(false);
        DisplayPaste->setMaximumSize(QSize(50, 16777215));
        DisplayPaste->setIcon(icon5);

        horizontalLayout_2->addWidget(DisplayPaste);

        DisplayRestoreDefaults = new QPushButton(DisplayButtons);
        DisplayRestoreDefaults->setObjectName(QStringLiteral("DisplayRestoreDefaults"));
        DisplayRestoreDefaults->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_2->addWidget(DisplayRestoreDefaults);

        DisplaySaveAsDefaults = new QPushButton(DisplayButtons);
        DisplaySaveAsDefaults->setObjectName(QStringLiteral("DisplaySaveAsDefaults"));
        DisplaySaveAsDefaults->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_2->addWidget(DisplaySaveAsDefaults);


        ScrollAreaLayout->addWidget(DisplayButtons);

        DisplayFrame = new QFrame(scrollAreaWidgetContents);
        DisplayFrame->setObjectName(QStringLiteral("DisplayFrame"));
        sizePolicy.setHeightForWidth(DisplayFrame->sizePolicy().hasHeightForWidth());
        DisplayFrame->setSizePolicy(sizePolicy);
        DisplayFrame->setFrameShape(QFrame::NoFrame);
        DisplayFrame->setFrameShadow(QFrame::Plain);

        ScrollAreaLayout->addWidget(DisplayFrame);

        ViewButtons = new QWidget(scrollAreaWidgetContents);
        ViewButtons->setObjectName(QStringLiteral("ViewButtons"));
        horizontalLayout_3 = new QHBoxLayout(ViewButtons);
#ifndef Q_OS_MAC
        horizontalLayout_3->setSpacing(6);
#endif
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        ViewButton = new pqExpanderButton(ViewButtons);
        ViewButton->setObjectName(QStringLiteral("ViewButton"));
        ViewButton->setProperty("checked", QVariant(true));

        horizontalLayout_3->addWidget(ViewButton);

        ViewCopy = new QPushButton(ViewButtons);
        ViewCopy->setObjectName(QStringLiteral("ViewCopy"));
        ViewCopy->setEnabled(false);
        ViewCopy->setMaximumSize(QSize(50, 16777215));
        ViewCopy->setIcon(icon4);

        horizontalLayout_3->addWidget(ViewCopy);

        ViewPaste = new QPushButton(ViewButtons);
        ViewPaste->setObjectName(QStringLiteral("ViewPaste"));
        ViewPaste->setEnabled(false);
        ViewPaste->setMaximumSize(QSize(50, 16777215));
        ViewPaste->setIcon(icon5);

        horizontalLayout_3->addWidget(ViewPaste);

        ViewRestoreDefaults = new QPushButton(ViewButtons);
        ViewRestoreDefaults->setObjectName(QStringLiteral("ViewRestoreDefaults"));
        ViewRestoreDefaults->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_3->addWidget(ViewRestoreDefaults);

        ViewSaveAsDefaults = new QPushButton(ViewButtons);
        ViewSaveAsDefaults->setObjectName(QStringLiteral("ViewSaveAsDefaults"));
        ViewSaveAsDefaults->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_3->addWidget(ViewSaveAsDefaults);


        ScrollAreaLayout->addWidget(ViewButtons);

        ViewFrame = new QFrame(scrollAreaWidgetContents);
        ViewFrame->setObjectName(QStringLiteral("ViewFrame"));
        ViewFrame->setFrameShape(QFrame::NoFrame);
        ViewFrame->setFrameShadow(QFrame::Plain);

        ScrollAreaLayout->addWidget(ViewFrame);

        verticalSpacer = new QSpacerItem(0, 9, QSizePolicy::Minimum, QSizePolicy::Expanding);

        ScrollAreaLayout->addItem(verticalSpacer);

        ScrollAreaLayout->setStretch(6, 1);
        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);


        retranslateUi(propertiesPanel);

        Accept->setDefault(true);


        QMetaObject::connectSlotsByName(propertiesPanel);
    } // setupUi

    void retranslateUi(QWidget *propertiesPanel)
    {
        propertiesPanel->setWindowTitle(QApplication::translate("propertiesPanel", "Properties Panel", Q_NULLPTR));
        Accept->setText(QApplication::translate("propertiesPanel", "Apply", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Reset->setToolTip(QApplication::translate("propertiesPanel", "Resets any changed properties to their values from the last time 'Apply' was clicked.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        Reset->setText(QApplication::translate("propertiesPanel", "Reset", Q_NULLPTR));
        Delete->setText(QApplication::translate("propertiesPanel", "Delete", Q_NULLPTR));
        Help->setText(QString());
#ifndef QT_NO_SHORTCUT
        Help->setShortcut(QApplication::translate("propertiesPanel", "Ctrl+H", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        PropertiesButton->setProperty("text", QVariant(QApplication::translate("propertiesPanel", "Properties", Q_NULLPTR)));
#ifndef QT_NO_TOOLTIP
        PropertiesCopy->setToolTip(QApplication::translate("propertiesPanel", "Copy properties", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        PropertiesCopy->setText(QString());
#ifndef QT_NO_TOOLTIP
        PropertiesPaste->setToolTip(QApplication::translate("propertiesPanel", "Paste copied properties", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        PropertiesPaste->setText(QString());
#ifndef QT_NO_TOOLTIP
        PropertiesRestoreDefaults->setToolTip(QApplication::translate("propertiesPanel", "Restore application default setting values", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        PropertiesRestoreDefaults->setText(QString());
#ifndef QT_NO_TOOLTIP
        PropertiesSaveAsDefaults->setToolTip(QApplication::translate("propertiesPanel", "Save current settings values as default", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        PropertiesSaveAsDefaults->setText(QString());
        DisplayButton->setProperty("text", QVariant(QApplication::translate("propertiesPanel", "Display", Q_NULLPTR)));
#ifndef QT_NO_TOOLTIP
        DisplayCopy->setToolTip(QApplication::translate("propertiesPanel", "Copy display properties", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        DisplayCopy->setText(QString());
#ifndef QT_NO_TOOLTIP
        DisplayPaste->setToolTip(QApplication::translate("propertiesPanel", "Paste copied display properties", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        DisplayPaste->setText(QString());
#ifndef QT_NO_TOOLTIP
        DisplayRestoreDefaults->setToolTip(QApplication::translate("propertiesPanel", "Restore application default setting values for display", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        DisplayRestoreDefaults->setText(QString());
#ifndef QT_NO_TOOLTIP
        DisplaySaveAsDefaults->setToolTip(QApplication::translate("propertiesPanel", "Save current display settings values as default", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        DisplaySaveAsDefaults->setText(QString());
        ViewButton->setProperty("text", QVariant(QApplication::translate("propertiesPanel", "View", Q_NULLPTR)));
#ifndef QT_NO_TOOLTIP
        ViewCopy->setToolTip(QApplication::translate("propertiesPanel", "Copy view properties", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        ViewCopy->setText(QString());
#ifndef QT_NO_TOOLTIP
        ViewPaste->setToolTip(QApplication::translate("propertiesPanel", "Paste view properties", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        ViewPaste->setText(QString());
#ifndef QT_NO_TOOLTIP
        ViewRestoreDefaults->setToolTip(QApplication::translate("propertiesPanel", "Restore application default setting values for view", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        ViewRestoreDefaults->setText(QString());
#ifndef QT_NO_TOOLTIP
        ViewSaveAsDefaults->setToolTip(QApplication::translate("propertiesPanel", "Save current view settings values as default", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        ViewSaveAsDefaults->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class propertiesPanel: public Ui_propertiesPanel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQPROPERTIESPANEL_H
