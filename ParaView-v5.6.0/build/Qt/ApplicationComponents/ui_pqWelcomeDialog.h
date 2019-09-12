/********************************************************************************
** Form generated from reading UI file 'pqWelcomeDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQWELCOMEDIALOG_H
#define UI_PQWELCOMEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_pqWelcomeDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QWidget *widget_2;
    QGridLayout *gridLayout;
    QPushButton *ExampleVisualizationsButton;
    QPushButton *GettingStartedGuideButton;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QCheckBox *DoNotShowAgainButton;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *pqWelcomeDialog)
    {
        if (pqWelcomeDialog->objectName().isEmpty())
            pqWelcomeDialog->setObjectName(QStringLiteral("pqWelcomeDialog"));
        pqWelcomeDialog->resize(651, 534);
        verticalLayout = new QVBoxLayout(pqWelcomeDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(pqWelcomeDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setPixmap(QPixmap(QString::fromUtf8(":/pqWidgets/Icons/PVSplashScreen.png")));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        widget_2 = new QWidget(pqWelcomeDialog);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(widget_2);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        ExampleVisualizationsButton = new QPushButton(widget_2);
        ExampleVisualizationsButton->setObjectName(QStringLiteral("ExampleVisualizationsButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(1);
        sizePolicy1.setHeightForWidth(ExampleVisualizationsButton->sizePolicy().hasHeightForWidth());
        ExampleVisualizationsButton->setSizePolicy(sizePolicy1);
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        font.setUnderline(true);
        font.setWeight(75);
        ExampleVisualizationsButton->setFont(font);
        ExampleVisualizationsButton->setStyleSheet(QStringLiteral("color: blue;"));
        ExampleVisualizationsButton->setAutoDefault(false);
        ExampleVisualizationsButton->setFlat(true);

        gridLayout->addWidget(ExampleVisualizationsButton, 2, 1, 1, 1);

        GettingStartedGuideButton = new QPushButton(widget_2);
        GettingStartedGuideButton->setObjectName(QStringLiteral("GettingStartedGuideButton"));
        sizePolicy1.setHeightForWidth(GettingStartedGuideButton->sizePolicy().hasHeightForWidth());
        GettingStartedGuideButton->setSizePolicy(sizePolicy1);
        GettingStartedGuideButton->setFont(font);
        GettingStartedGuideButton->setStyleSheet(QStringLiteral("color: blue;"));
        GettingStartedGuideButton->setAutoDefault(false);
        GettingStartedGuideButton->setFlat(true);

        gridLayout->addWidget(GettingStartedGuideButton, 2, 0, 1, 1);


        verticalLayout->addWidget(widget_2);

        widget = new QWidget(pqWelcomeDialog);
        widget->setObjectName(QStringLiteral("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        DoNotShowAgainButton = new QCheckBox(widget);
        DoNotShowAgainButton->setObjectName(QStringLiteral("DoNotShowAgainButton"));

        horizontalLayout->addWidget(DoNotShowAgainButton);

        buttonBox = new QDialogButtonBox(widget);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        horizontalLayout->addWidget(buttonBox);


        verticalLayout->addWidget(widget);


        retranslateUi(pqWelcomeDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), pqWelcomeDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), pqWelcomeDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(pqWelcomeDialog);
    } // setupUi

    void retranslateUi(QDialog *pqWelcomeDialog)
    {
        pqWelcomeDialog->setWindowTitle(QApplication::translate("pqWelcomeDialog", "Startup Screen", Q_NULLPTR));
        label->setText(QString());
        ExampleVisualizationsButton->setText(QApplication::translate("pqWelcomeDialog", "Example Visualizations", Q_NULLPTR));
        GettingStartedGuideButton->setText(QApplication::translate("pqWelcomeDialog", "Getting Started Guide", Q_NULLPTR));
        DoNotShowAgainButton->setText(QApplication::translate("pqWelcomeDialog", "Don't show this window again", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class pqWelcomeDialog: public Ui_pqWelcomeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQWELCOMEDIALOG_H
