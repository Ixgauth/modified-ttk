/********************************************************************************
** Form generated from reading UI file 'pqCatalystExportInspector.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQCATALYSTEXPORTINSPECTOR_H
#define UI_PQCATALYSTEXPORTINSPECTOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "pqSearchBox.h"

QT_BEGIN_NAMESPACE

class Ui_CatalystExportInspector
{
public:
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_3;
    pqSearchBox *searchBox;
    QPushButton *advanced;
    QPushButton *Help;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QFrame *line;
    QHBoxLayout *horizontalLayout;
    QComboBox *filterChoice;
    QComboBox *filterFormat;
    QCheckBox *filterExtract;
    QPushButton *filterConfigure;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_2;
    QFrame *line_2;
    QHBoxLayout *horizontalLayout_2;
    QComboBox *viewChoice;
    QComboBox *viewFormat;
    QCheckBox *viewExtract;
    QPushButton *viewConfigure;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_3;
    QFrame *line_3;
    QVBoxLayout *verticalLayout;
    QWidget *container;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *CatalystExportInspector)
    {
        if (CatalystExportInspector->objectName().isEmpty())
            CatalystExportInspector->setObjectName(QStringLiteral("CatalystExportInspector"));
        CatalystExportInspector->resize(351, 465);
        verticalLayout_5 = new QVBoxLayout(CatalystExportInspector);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        searchBox = new pqSearchBox(CatalystExportInspector);
        searchBox->setObjectName(QStringLiteral("searchBox"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(searchBox->sizePolicy().hasHeightForWidth());
        searchBox->setSizePolicy(sizePolicy);
        searchBox->setMinimumSize(QSize(0, 10));
        searchBox->setProperty("settingKey", QVariant(QStringLiteral("")));
        searchBox->setProperty("advancedSearchEnabled", QVariant(false));

        horizontalLayout_3->addWidget(searchBox);

        advanced = new QPushButton(CatalystExportInspector);
        advanced->setObjectName(QStringLiteral("advanced"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/pqWidgets/Icons/pqAdvanced26.png"), QSize(), QIcon::Normal, QIcon::Off);
        advanced->setIcon(icon);
        advanced->setCheckable(true);
        advanced->setChecked(true);

        horizontalLayout_3->addWidget(advanced);

        Help = new QPushButton(CatalystExportInspector);
        Help->setObjectName(QStringLiteral("Help"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/pqWidgets/Icons/pqHelp32.png"), QSize(), QIcon::Normal, QIcon::Off);
        Help->setIcon(icon1);

        horizontalLayout_3->addWidget(Help);


        verticalLayout_5->addLayout(horizontalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setSizeConstraint(QLayout::SetMinimumSize);
        label = new QLabel(CatalystExportInspector);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        verticalLayout_2->addWidget(label);

        line = new QFrame(CatalystExportInspector);
        line->setObjectName(QStringLiteral("line"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(line->sizePolicy().hasHeightForWidth());
        line->setSizePolicy(sizePolicy2);
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line);


        verticalLayout_5->addLayout(verticalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetNoConstraint);
        filterChoice = new QComboBox(CatalystExportInspector);
        filterChoice->setObjectName(QStringLiteral("filterChoice"));

        horizontalLayout->addWidget(filterChoice);

        filterFormat = new QComboBox(CatalystExportInspector);
        filterFormat->setObjectName(QStringLiteral("filterFormat"));

        horizontalLayout->addWidget(filterFormat);

        filterExtract = new QCheckBox(CatalystExportInspector);
        filterExtract->setObjectName(QStringLiteral("filterExtract"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(filterExtract->sizePolicy().hasHeightForWidth());
        filterExtract->setSizePolicy(sizePolicy3);
        filterExtract->setMinimumSize(QSize(20, 0));
        filterExtract->setMaximumSize(QSize(20, 16777215));

        horizontalLayout->addWidget(filterExtract);

        filterConfigure = new QPushButton(CatalystExportInspector);
        filterConfigure->setObjectName(QStringLiteral("filterConfigure"));
        filterConfigure->setEnabled(false);
        sizePolicy3.setHeightForWidth(filterConfigure->sizePolicy().hasHeightForWidth());
        filterConfigure->setSizePolicy(sizePolicy3);
        filterConfigure->setMinimumSize(QSize(50, 0));
        filterConfigure->setMaximumSize(QSize(50, 16777215));

        horizontalLayout->addWidget(filterConfigure);


        verticalLayout_5->addLayout(horizontalLayout);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setSizeConstraint(QLayout::SetMinimumSize);
        label_2 = new QLabel(CatalystExportInspector);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);
        label_2->setFont(font);

        verticalLayout_3->addWidget(label_2);

        line_2 = new QFrame(CatalystExportInspector);
        line_2->setObjectName(QStringLiteral("line_2"));
        sizePolicy2.setHeightForWidth(line_2->sizePolicy().hasHeightForWidth());
        line_2->setSizePolicy(sizePolicy2);
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line_2);


        verticalLayout_5->addLayout(verticalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        viewChoice = new QComboBox(CatalystExportInspector);
        viewChoice->setObjectName(QStringLiteral("viewChoice"));

        horizontalLayout_2->addWidget(viewChoice);

        viewFormat = new QComboBox(CatalystExportInspector);
        viewFormat->setObjectName(QStringLiteral("viewFormat"));

        horizontalLayout_2->addWidget(viewFormat);

        viewExtract = new QCheckBox(CatalystExportInspector);
        viewExtract->setObjectName(QStringLiteral("viewExtract"));
        sizePolicy3.setHeightForWidth(viewExtract->sizePolicy().hasHeightForWidth());
        viewExtract->setSizePolicy(sizePolicy3);
        viewExtract->setMinimumSize(QSize(20, 0));
        viewExtract->setMaximumSize(QSize(20, 16777215));

        horizontalLayout_2->addWidget(viewExtract);

        viewConfigure = new QPushButton(CatalystExportInspector);
        viewConfigure->setObjectName(QStringLiteral("viewConfigure"));
        viewConfigure->setEnabled(false);
        sizePolicy3.setHeightForWidth(viewConfigure->sizePolicy().hasHeightForWidth());
        viewConfigure->setSizePolicy(sizePolicy3);
        viewConfigure->setMinimumSize(QSize(50, 0));
        viewConfigure->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_2->addWidget(viewConfigure);


        verticalLayout_5->addLayout(horizontalLayout_2);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setSizeConstraint(QLayout::SetMinimumSize);
        label_3 = new QLabel(CatalystExportInspector);
        label_3->setObjectName(QStringLiteral("label_3"));
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);
        label_3->setFont(font);

        verticalLayout_4->addWidget(label_3);

        line_3 = new QFrame(CatalystExportInspector);
        line_3->setObjectName(QStringLiteral("line_3"));
        sizePolicy2.setHeightForWidth(line_3->sizePolicy().hasHeightForWidth());
        line_3->setSizePolicy(sizePolicy2);
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout_4->addWidget(line_3);


        verticalLayout_5->addLayout(verticalLayout_4);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        container = new QWidget(CatalystExportInspector);
        container->setObjectName(QStringLiteral("container"));
        container->setMinimumSize(QSize(0, 250));

        verticalLayout->addWidget(container);


        verticalLayout_5->addLayout(verticalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer);


        retranslateUi(CatalystExportInspector);

        QMetaObject::connectSlotsByName(CatalystExportInspector);
    } // setupUi

    void retranslateUi(QWidget *CatalystExportInspector)
    {
        CatalystExportInspector->setWindowTitle(QApplication::translate("CatalystExportInspector", "Catalyst Export Inspector", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        advanced->setToolTip(QApplication::translate("CatalystExportInspector", "show advanced controls", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        advanced->setText(QString());
        Help->setText(QString());
        label->setText(QApplication::translate("CatalystExportInspector", "Data Extracts", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        filterChoice->setToolTip(QApplication::translate("CatalystExportInspector", "choose a filter to export", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        filterFormat->setToolTip(QApplication::translate("CatalystExportInspector", "choose file format for this export", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        filterExtract->setToolTip(QApplication::translate("CatalystExportInspector", "enable/disable export of this filter", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        filterExtract->setText(QString());
#ifndef QT_NO_TOOLTIP
        filterConfigure->setToolTip(QApplication::translate("CatalystExportInspector", "advanced options for this export", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        filterConfigure->setText(QApplication::translate("CatalystExportInspector", "...", Q_NULLPTR));
        label_2->setText(QApplication::translate("CatalystExportInspector", "Image Extracts", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        viewChoice->setToolTip(QApplication::translate("CatalystExportInspector", "choose a view to export", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        viewFormat->setToolTip(QApplication::translate("CatalystExportInspector", "choose file format for this export", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        viewExtract->setToolTip(QApplication::translate("CatalystExportInspector", "enable/disable export of this view", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        viewExtract->setText(QString());
#ifndef QT_NO_TOOLTIP
        viewConfigure->setToolTip(QApplication::translate("CatalystExportInspector", "advanced options for this export", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        viewConfigure->setText(QApplication::translate("CatalystExportInspector", "...", Q_NULLPTR));
        label_3->setText(QApplication::translate("CatalystExportInspector", "Global Settings", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CatalystExportInspector: public Ui_CatalystExportInspector {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQCATALYSTEXPORTINSPECTOR_H
