/********************************************************************************
** Form generated from reading UI file 'pqExampleVisualizationsDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQEXAMPLEVISUALIZATIONSDIALOG_H
#define UI_PQEXAMPLEVISUALIZATIONSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_pqExampleVisualizationsDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *titleLabel;
    QLabel *Example3Description;
    QDialogButtonBox *buttonBox;
    QLabel *Example2Description;
    QPushButton *Example3Button;
    QLabel *Example1Description;
    QPushButton *Example2Button;
    QPushButton *Example1Button;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *pqExampleVisualizationsDialog)
    {
        if (pqExampleVisualizationsDialog->objectName().isEmpty())
            pqExampleVisualizationsDialog->setObjectName(QStringLiteral("pqExampleVisualizationsDialog"));
        pqExampleVisualizationsDialog->resize(996, 420);
        gridLayout = new QGridLayout(pqExampleVisualizationsDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(pqExampleVisualizationsDialog);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 1, 0, 1, 3);

        titleLabel = new QLabel(pqExampleVisualizationsDialog);
        titleLabel->setObjectName(QStringLiteral("titleLabel"));
        QFont font;
        font.setPointSize(20);
        font.setItalic(false);
        font.setStrikeOut(false);
        font.setKerning(false);
        titleLabel->setFont(font);
        titleLabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(titleLabel, 0, 0, 1, 3);

        Example3Description = new QLabel(pqExampleVisualizationsDialog);
        Example3Description->setObjectName(QStringLiteral("Example3Description"));
        Example3Description->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        Example3Description->setWordWrap(true);

        gridLayout->addWidget(Example3Description, 3, 2, 1, 1);

        buttonBox = new QDialogButtonBox(pqExampleVisualizationsDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        gridLayout->addWidget(buttonBox, 8, 0, 1, 3);

        Example2Description = new QLabel(pqExampleVisualizationsDialog);
        Example2Description->setObjectName(QStringLiteral("Example2Description"));
        Example2Description->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        Example2Description->setWordWrap(true);

        gridLayout->addWidget(Example2Description, 3, 1, 1, 1);

        Example3Button = new QPushButton(pqExampleVisualizationsDialog);
        Example3Button->setObjectName(QStringLiteral("Example3Button"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/pqApplicationComponents/Thumbnails/Example3.png"), QSize(), QIcon::Normal, QIcon::Off);
        Example3Button->setIcon(icon);
        Example3Button->setIconSize(QSize(300, 225));
        Example3Button->setFlat(true);

        gridLayout->addWidget(Example3Button, 2, 2, 1, 1);

        Example1Description = new QLabel(pqExampleVisualizationsDialog);
        Example1Description->setObjectName(QStringLiteral("Example1Description"));
        Example1Description->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        Example1Description->setWordWrap(true);

        gridLayout->addWidget(Example1Description, 3, 0, 1, 1);

        Example2Button = new QPushButton(pqExampleVisualizationsDialog);
        Example2Button->setObjectName(QStringLiteral("Example2Button"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/pqApplicationComponents/Thumbnails/Example2.png"), QSize(), QIcon::Normal, QIcon::On);
        Example2Button->setIcon(icon1);
        Example2Button->setIconSize(QSize(300, 225));
        Example2Button->setFlat(true);

        gridLayout->addWidget(Example2Button, 2, 1, 1, 1);

        Example1Button = new QPushButton(pqExampleVisualizationsDialog);
        Example1Button->setObjectName(QStringLiteral("Example1Button"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/pqApplicationComponents/Thumbnails/Example1.png"), QSize(), QIcon::Normal, QIcon::On);
        Example1Button->setIcon(icon2);
        Example1Button->setIconSize(QSize(300, 225));
        Example1Button->setFlat(true);

        gridLayout->addWidget(Example1Button, 2, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 6, 0, 1, 1);

        QWidget::setTabOrder(Example1Button, Example2Button);
        QWidget::setTabOrder(Example2Button, Example3Button);
        QWidget::setTabOrder(Example3Button, buttonBox);

        retranslateUi(pqExampleVisualizationsDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), pqExampleVisualizationsDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), pqExampleVisualizationsDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(pqExampleVisualizationsDialog);
    } // setupUi

    void retranslateUi(QDialog *pqExampleVisualizationsDialog)
    {
        pqExampleVisualizationsDialog->setWindowTitle(QApplication::translate("pqExampleVisualizationsDialog", "TTK Example Visualizations", Q_NULLPTR));
        label->setText(QApplication::translate("pqExampleVisualizationsDialog", "<html><head/><body><p align=\"center\">Click on one of thumbnails below to load an example visualization</p></body></html>", Q_NULLPTR));
        titleLabel->setText(QApplication::translate("pqExampleVisualizationsDialog", "TTK Example Visualizations", Q_NULLPTR));
        Example3Description->setText(QApplication::translate("pqExampleVisualizationsDialog", "Uncertain data example", Q_NULLPTR));
        Example2Description->setText(QApplication::translate("pqExampleVisualizationsDialog", "Bivariate scalar data example", Q_NULLPTR));
        Example3Button->setText(QString());
        Example1Description->setText(QApplication::translate("pqExampleVisualizationsDialog", "Scalar data example", Q_NULLPTR));
        Example2Button->setText(QString());
        Example1Button->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class pqExampleVisualizationsDialog: public Ui_pqExampleVisualizationsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQEXAMPLEVISUALIZATIONSDIALOG_H
