/********************************************************************************
** Form generated from reading UI file 'pqColorMapEditor.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQCOLORMAPEDITOR_H
#define UI_PQCOLORMAPEDITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "pqSearchBox.h"

QT_BEGIN_NAMESPACE

class Ui_ColorMapEditor
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *SearchBoxLayout;
    pqSearchBox *SearchBox;
    QToolButton *ShowScalarBar;
    QToolButton *EditScalarBar;
    QLabel *ArrayLabel;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *ScrollAreaLayout;
    QFrame *PropertiesFrame;
    QHBoxLayout *horizontalLayout;
    QPushButton *RestoreDefaults;
    QPushButton *SaveAsArrayDefaults;
    QPushButton *SaveAsDefaults;
    QSpacerItem *horizontalSpacer;
    QPushButton *Update;
    QPushButton *AutoUpdate;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *ColorMapEditor)
    {
        if (ColorMapEditor->objectName().isEmpty())
            ColorMapEditor->setObjectName(QStringLiteral("ColorMapEditor"));
        ColorMapEditor->resize(390, 149);
        ColorMapEditor->setMinimumSize(QSize(390, 0));
        verticalLayout = new QVBoxLayout(ColorMapEditor);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        SearchBoxLayout = new QHBoxLayout();
        SearchBoxLayout->setSpacing(2);
        SearchBoxLayout->setObjectName(QStringLiteral("SearchBoxLayout"));
        SearchBox = new pqSearchBox(ColorMapEditor);
        SearchBox->setObjectName(QStringLiteral("SearchBox"));
        SearchBox->setProperty("advancedSearchEnabled", QVariant(true));
        SearchBox->setProperty("settingKey", QVariant(QStringLiteral("showAdvancedPropertiesColorMapEditor")));

        SearchBoxLayout->addWidget(SearchBox);

        ShowScalarBar = new QToolButton(ColorMapEditor);
        ShowScalarBar->setObjectName(QStringLiteral("ShowScalarBar"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/pqWidgets/Icons/pqScalarBar16.png"), QSize(), QIcon::Normal, QIcon::Off);
        ShowScalarBar->setIcon(icon);
        ShowScalarBar->setCheckable(true);

        SearchBoxLayout->addWidget(ShowScalarBar);

        EditScalarBar = new QToolButton(ColorMapEditor);
        EditScalarBar->setObjectName(QStringLiteral("EditScalarBar"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/pqWidgets/Icons/pqEditScalarBar16.png"), QSize(), QIcon::Normal, QIcon::Off);
        EditScalarBar->setIcon(icon1);

        SearchBoxLayout->addWidget(EditScalarBar);


        verticalLayout->addLayout(SearchBoxLayout);

        ArrayLabel = new QLabel(ColorMapEditor);
        ArrayLabel->setObjectName(QStringLiteral("ArrayLabel"));
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        ArrayLabel->setFont(font);
        ArrayLabel->setTextFormat(Qt::AutoText);

        verticalLayout->addWidget(ArrayLabel);

        scrollArea = new QScrollArea(ColorMapEditor);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setFrameShadow(QFrame::Plain);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 372, 76));
        ScrollAreaLayout = new QVBoxLayout(scrollAreaWidgetContents);
        ScrollAreaLayout->setContentsMargins(0, 0, 0, 0);
        ScrollAreaLayout->setObjectName(QStringLiteral("ScrollAreaLayout"));
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

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(2);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        RestoreDefaults = new QPushButton(scrollAreaWidgetContents);
        RestoreDefaults->setObjectName(QStringLiteral("RestoreDefaults"));
        RestoreDefaults->setEnabled(false);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/pqWidgets/Icons/pqSave16.png"), QSize(), QIcon::Normal, QIcon::Off);
        RestoreDefaults->setIcon(icon2);

        horizontalLayout->addWidget(RestoreDefaults);

        SaveAsArrayDefaults = new QPushButton(scrollAreaWidgetContents);
        SaveAsArrayDefaults->setObjectName(QStringLiteral("SaveAsArrayDefaults"));
        SaveAsArrayDefaults->setEnabled(false);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/pqWidgets/Icons/pqSaveArray16.png"), QSize(), QIcon::Normal, QIcon::Off);
        SaveAsArrayDefaults->setIcon(icon3);

        horizontalLayout->addWidget(SaveAsArrayDefaults);

        SaveAsDefaults = new QPushButton(scrollAreaWidgetContents);
        SaveAsDefaults->setObjectName(QStringLiteral("SaveAsDefaults"));
        SaveAsDefaults->setEnabled(false);
        SaveAsDefaults->setIcon(icon2);

        horizontalLayout->addWidget(SaveAsDefaults);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        Update = new QPushButton(scrollAreaWidgetContents);
        Update->setObjectName(QStringLiteral("Update"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/pqWidgets/Icons/pqUpdate16.png"), QSize(), QIcon::Normal, QIcon::Off);
        Update->setIcon(icon4);

        horizontalLayout->addWidget(Update);

        AutoUpdate = new QPushButton(scrollAreaWidgetContents);
        AutoUpdate->setObjectName(QStringLiteral("AutoUpdate"));
        AutoUpdate->setIcon(icon4);
        AutoUpdate->setCheckable(true);

        horizontalLayout->addWidget(AutoUpdate);


        ScrollAreaLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        ScrollAreaLayout->addItem(verticalSpacer);

        ScrollAreaLayout->setStretch(2, 1);
        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);


        retranslateUi(ColorMapEditor);
        QObject::connect(AutoUpdate, SIGNAL(toggled(bool)), Update, SLOT(setDisabled(bool)));

        Update->setDefault(true);
        AutoUpdate->setDefault(false);


        QMetaObject::connectSlotsByName(ColorMapEditor);
    } // setupUi

    void retranslateUi(QWidget *ColorMapEditor)
    {
        ColorMapEditor->setWindowTitle(QApplication::translate("ColorMapEditor", "Form", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ShowScalarBar->setToolTip(QApplication::translate("ColorMapEditor", "Show/hide color legend", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        ShowScalarBar->setText(QString());
#ifndef QT_NO_TOOLTIP
        EditScalarBar->setToolTip(QApplication::translate("ColorMapEditor", "Edit color legend properties", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        EditScalarBar->setText(QApplication::translate("ColorMapEditor", "...", Q_NULLPTR));
        ArrayLabel->setText(QApplication::translate("ColorMapEditor", "Array Name:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        RestoreDefaults->setToolTip(QApplication::translate("ColorMapEditor", "Restore application default setting values for color map", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        RestoreDefaults->setText(QString());
#ifndef QT_NO_TOOLTIP
        SaveAsArrayDefaults->setToolTip(QApplication::translate("ColorMapEditor", "Save current color map settings values as default for arrays of this name", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        SaveAsArrayDefaults->setText(QString());
#ifndef QT_NO_TOOLTIP
        SaveAsDefaults->setToolTip(QApplication::translate("ColorMapEditor", "Save current color map settings values as default for all arrays", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        SaveAsDefaults->setText(QString());
#ifndef QT_NO_TOOLTIP
        Update->setToolTip(QApplication::translate("ColorMapEditor", "<html><head/><body><p>Update views.</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        Update->setText(QApplication::translate("ColorMapEditor", "Render Views", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        AutoUpdate->setToolTip(QApplication::translate("ColorMapEditor", "<html><head/><body><p>Render view(s) automatically.</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        AutoUpdate->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ColorMapEditor: public Ui_ColorMapEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQCOLORMAPEDITOR_H
