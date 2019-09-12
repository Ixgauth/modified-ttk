/********************************************************************************
** Form generated from reading UI file 'pqImageCompressorWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQIMAGECOMPRESSORWIDGET_H
#define UI_PQIMAGECOMPRESSORWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "pqIntRangeWidget.h"

QT_BEGIN_NAMESPACE

class Ui_ImageCompressorWidget
{
public:
    QVBoxLayout *mainLayout;
    QLabel *label;
    QComboBox *compressionType;
    QLabel *squirtLabel;
    pqIntRangeWidget *squirtColorSpace;
    QLabel *zlibLabel1;
    pqIntRangeWidget *zlibLevel;
    QLabel *zlibLabel2;
    pqIntRangeWidget *zlibColorSpace;
    QCheckBox *zlibStripAlpha;
    QLabel *nvpLabel;
    pqIntRangeWidget *nvpLevel;
    QHBoxLayout *compressorBWLayout;
    QLabel *label_9;
    QComboBox *compressorBWOpt;
    QLabel *label_10;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *ImageCompressorWidget)
    {
        if (ImageCompressorWidget->objectName().isEmpty())
            ImageCompressorWidget->setObjectName(QStringLiteral("ImageCompressorWidget"));
        ImageCompressorWidget->resize(551, 304);
        mainLayout = new QVBoxLayout(ImageCompressorWidget);
        mainLayout->setContentsMargins(0, 0, 0, 0);
        mainLayout->setObjectName(QStringLiteral("mainLayout"));
        label = new QLabel(ImageCompressorWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setWordWrap(true);

        mainLayout->addWidget(label);

        compressionType = new QComboBox(ImageCompressorWidget);
        compressionType->setObjectName(QStringLiteral("compressionType"));

        mainLayout->addWidget(compressionType);

        squirtLabel = new QLabel(ImageCompressorWidget);
        squirtLabel->setObjectName(QStringLiteral("squirtLabel"));
        squirtLabel->setWordWrap(true);

        mainLayout->addWidget(squirtLabel);

        squirtColorSpace = new pqIntRangeWidget(ImageCompressorWidget);
        squirtColorSpace->setObjectName(QStringLiteral("squirtColorSpace"));
        squirtColorSpace->setProperty("minimum", QVariant(0));
        squirtColorSpace->setProperty("maximum", QVariant(5));
        squirtColorSpace->setProperty("value", QVariant(3));
        squirtColorSpace->setProperty("strictRange", QVariant(true));

        mainLayout->addWidget(squirtColorSpace);

        zlibLabel1 = new QLabel(ImageCompressorWidget);
        zlibLabel1->setObjectName(QStringLiteral("zlibLabel1"));
        zlibLabel1->setWordWrap(true);

        mainLayout->addWidget(zlibLabel1);

        zlibLevel = new pqIntRangeWidget(ImageCompressorWidget);
        zlibLevel->setObjectName(QStringLiteral("zlibLevel"));
        zlibLevel->setProperty("minimum", QVariant(1));
        zlibLevel->setProperty("maximum", QVariant(9));
        zlibLevel->setProperty("value", QVariant(1));
        zlibLevel->setProperty("strictRange", QVariant(true));

        mainLayout->addWidget(zlibLevel);

        zlibLabel2 = new QLabel(ImageCompressorWidget);
        zlibLabel2->setObjectName(QStringLiteral("zlibLabel2"));
        zlibLabel2->setWordWrap(true);

        mainLayout->addWidget(zlibLabel2);

        zlibColorSpace = new pqIntRangeWidget(ImageCompressorWidget);
        zlibColorSpace->setObjectName(QStringLiteral("zlibColorSpace"));
        zlibColorSpace->setProperty("minimum", QVariant(0));
        zlibColorSpace->setProperty("maximum", QVariant(5));
        zlibColorSpace->setProperty("value", QVariant(3));
        zlibColorSpace->setProperty("strictRange", QVariant(true));

        mainLayout->addWidget(zlibColorSpace);

        zlibStripAlpha = new QCheckBox(ImageCompressorWidget);
        zlibStripAlpha->setObjectName(QStringLiteral("zlibStripAlpha"));

        mainLayout->addWidget(zlibStripAlpha);

        nvpLabel = new QLabel(ImageCompressorWidget);
        nvpLabel->setObjectName(QStringLiteral("nvpLabel"));
        nvpLabel->setWordWrap(true);

        mainLayout->addWidget(nvpLabel);

        nvpLevel = new pqIntRangeWidget(ImageCompressorWidget);
        nvpLevel->setObjectName(QStringLiteral("nvpLevel"));
        nvpLevel->setProperty("minimum", QVariant(1));
        nvpLevel->setProperty("maximum", QVariant(5));
        nvpLevel->setProperty("value", QVariant(4));
        nvpLevel->setProperty("strictRange", QVariant(true));

        mainLayout->addWidget(nvpLevel);

        compressorBWLayout = new QHBoxLayout();
        compressorBWLayout->setObjectName(QStringLiteral("compressorBWLayout"));
        label_9 = new QLabel(ImageCompressorWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setWordWrap(false);

        compressorBWLayout->addWidget(label_9);

        compressorBWOpt = new QComboBox(ImageCompressorWidget);
        compressorBWOpt->setObjectName(QStringLiteral("compressorBWOpt"));

        compressorBWLayout->addWidget(compressorBWOpt);

        label_10 = new QLabel(ImageCompressorWidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setWordWrap(false);

        compressorBWLayout->addWidget(label_10);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        compressorBWLayout->addItem(horizontalSpacer_3);


        mainLayout->addLayout(compressorBWLayout);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        mainLayout->addItem(verticalSpacer);


        retranslateUi(ImageCompressorWidget);

        QMetaObject::connectSlotsByName(ImageCompressorWidget);
    } // setupUi

    void retranslateUi(QWidget *ImageCompressorWidget)
    {
        ImageCompressorWidget->setWindowTitle(QApplication::translate("ImageCompressorWidget", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("ImageCompressorWidget", "Set the compression method used when transferring rendered images from the server to the client.", Q_NULLPTR));
        compressionType->clear();
        compressionType->insertItems(0, QStringList()
         << QApplication::translate("ImageCompressorWidget", "None", Q_NULLPTR)
         << QApplication::translate("ImageCompressorWidget", "LZ4", Q_NULLPTR)
         << QApplication::translate("ImageCompressorWidget", "Squirt (run-length encoding based compression)", Q_NULLPTR)
         << QApplication::translate("ImageCompressorWidget", "Zlib", Q_NULLPTR)
        );
        squirtLabel->setText(QApplication::translate("ImageCompressorWidget", "Set the Squirt/LZ4 compression level. Move to right for better compression ratio at the cost of reduced image quality.", Q_NULLPTR));
        zlibLabel1->setText(QApplication::translate("ImageCompressorWidget", "Set the Zlib compression level. 1 is the fastest compression possible at the cost of compression ratio, while 9 give the best compression possible, but may be slower.", Q_NULLPTR));
        zlibLabel2->setText(QApplication::translate("ImageCompressorWidget", "Set the Zlib the color sampling space width factor. Move to right for better compression ratio at the cost of image quality.", Q_NULLPTR));
        zlibStripAlpha->setText(QApplication::translate("ImageCompressorWidget", "Set whether to strip alpha channel.", Q_NULLPTR));
        nvpLabel->setText(QApplication::translate("ImageCompressorWidget", "Set the NvPipe compression level. 1 is high image quality; 5 is low image quality. Even at the highest setting the bandwidth cost is well below LZ4 or Squirt.\n"
"      ", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        label_9->setToolTip(QApplication::translate("ImageCompressorWidget", "Configure the compressor using default settings tailored to a selected connection type.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_9->setText(QApplication::translate("ImageCompressorWidget", "Apply presets for", Q_NULLPTR));
        compressorBWOpt->clear();
        compressorBWOpt->insertItems(0, QStringList()
         << QApplication::translate("ImageCompressorWidget", "...", Q_NULLPTR)
         << QApplication::translate("ImageCompressorWidget", "consumer broadband/DSL", Q_NULLPTR)
         << QApplication::translate("ImageCompressorWidget", "Megabit Ethernet / 802.11* wireless", Q_NULLPTR)
         << QApplication::translate("ImageCompressorWidget", "Gigabit Ethernet", Q_NULLPTR)
         << QApplication::translate("ImageCompressorWidget", "10 Gigabit Ethernet", Q_NULLPTR)
         << QApplication::translate("ImageCompressorWidget", "shared memory/localhost", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        compressorBWOpt->setToolTip(QApplication::translate("ImageCompressorWidget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'DejaVu Sans'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">Presets. </span>Configure the image compressor based on a network type. These settings will provide reasonable performance and place to start when optimizing the compressor setting for a specific network.</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        compressorBWOpt->setWhatsThis(QApplication::translate("ImageCompressorWidget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'DejaVu Sans'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">Presets. </span>Configure the image compressor based on a network type. These settings will provide reasonable performance and place to start when optimizing the compressor setting for a specific network.</p></body></html>", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        label_10->setToolTip(QApplication::translate("ImageCompressorWidget", "Configure the compressor using default settings tailored to a selected connection type.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_10->setText(QApplication::translate("ImageCompressorWidget", "connection.", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ImageCompressorWidget: public Ui_ImageCompressorWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQIMAGECOMPRESSORWIDGET_H
