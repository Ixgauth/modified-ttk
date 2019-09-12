/********************************************************************************
** Form generated from reading UI file 'pqItemViewSearchWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQITEMVIEWSEARCHWIDGET_H
#define UI_PQITEMVIEWSEARCHWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_pqItemViewSearchWidget
{
public:
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox;
    QLineEdit *lineEditSearch;
    QLabel *label;
    QPushButton *nextButton;
    QCheckBox *checkBoxMattchCase;
    QPushButton *closeButton;
    QPushButton *previousButton;

    void setupUi(QDialog *pqItemViewSearchWidget)
    {
        if (pqItemViewSearchWidget->objectName().isEmpty())
            pqItemViewSearchWidget->setObjectName(QStringLiteral("pqItemViewSearchWidget"));
        pqItemViewSearchWidget->resize(318, 34);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pqItemViewSearchWidget->sizePolicy().hasHeightForWidth());
        pqItemViewSearchWidget->setSizePolicy(sizePolicy);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush1(QColor(175, 166, 238, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        pqItemViewSearchWidget->setPalette(palette);
        pqItemViewSearchWidget->setWindowOpacity(0.87);
        horizontalLayout = new QHBoxLayout(pqItemViewSearchWidget);
        horizontalLayout->setSpacing(3);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        groupBox = new QGroupBox(pqItemViewSearchWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        lineEditSearch = new QLineEdit(groupBox);
        lineEditSearch->setObjectName(QStringLiteral("lineEditSearch"));
        lineEditSearch->setGeometry(QRect(60, 0, 111, 33));
        lineEditSearch->setCursor(QCursor(Qt::ArrowCursor));
        lineEditSearch->setMouseTracking(false);
        lineEditSearch->setFocusPolicy(Qt::StrongFocus);
        lineEditSearch->setAcceptDrops(false);
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 0, 29, 34));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        nextButton = new QPushButton(groupBox);
        nextButton->setObjectName(QStringLiteral("nextButton"));
        nextButton->setGeometry(QRect(180, 3, 16, 31));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(nextButton->sizePolicy().hasHeightForWidth());
        nextButton->setSizePolicy(sizePolicy2);
        nextButton->setFocusPolicy(Qt::StrongFocus);
        QIcon icon;
        icon.addFile(QStringLiteral(":/pqWidgets/Icons/pqArrowDown16.png"), QSize(), QIcon::Normal, QIcon::Off);
        nextButton->setIcon(icon);
        nextButton->setFlat(true);
        checkBoxMattchCase = new QCheckBox(groupBox);
        checkBoxMattchCase->setObjectName(QStringLiteral("checkBoxMattchCase"));
        checkBoxMattchCase->setGeometry(QRect(220, 4, 101, 26));
        sizePolicy2.setHeightForWidth(checkBoxMattchCase->sizePolicy().hasHeightForWidth());
        checkBoxMattchCase->setSizePolicy(sizePolicy2);
        closeButton = new QPushButton(groupBox);
        closeButton->setObjectName(QStringLiteral("closeButton"));
        closeButton->setGeometry(QRect(0, 3, 21, 31));
        sizePolicy2.setHeightForWidth(closeButton->sizePolicy().hasHeightForWidth());
        closeButton->setSizePolicy(sizePolicy2);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/pqWidgets/Icons/pqCancel16.png"), QSize(), QIcon::Normal, QIcon::Off);
        closeButton->setIcon(icon1);
        closeButton->setFlat(true);
        previousButton = new QPushButton(groupBox);
        previousButton->setObjectName(QStringLiteral("previousButton"));
        previousButton->setGeometry(QRect(200, 3, 16, 31));
        sizePolicy2.setHeightForWidth(previousButton->sizePolicy().hasHeightForWidth());
        previousButton->setSizePolicy(sizePolicy2);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/pqWidgets/Icons/pqArrowUp16.png"), QSize(), QIcon::Normal, QIcon::Off);
        previousButton->setIcon(icon2);
        previousButton->setFlat(true);
        lineEditSearch->raise();
        label->raise();
        nextButton->raise();
        checkBoxMattchCase->raise();
        previousButton->raise();
        closeButton->raise();

        horizontalLayout->addWidget(groupBox);

        QWidget::setTabOrder(closeButton, lineEditSearch);
        QWidget::setTabOrder(lineEditSearch, nextButton);
        QWidget::setTabOrder(nextButton, previousButton);
        QWidget::setTabOrder(previousButton, checkBoxMattchCase);

        retranslateUi(pqItemViewSearchWidget);
        QObject::connect(closeButton, SIGNAL(clicked()), pqItemViewSearchWidget, SLOT(close()));

        QMetaObject::connectSlotsByName(pqItemViewSearchWidget);
    } // setupUi

    void retranslateUi(QDialog *pqItemViewSearchWidget)
    {
        pqItemViewSearchWidget->setWindowTitle(QApplication::translate("pqItemViewSearchWidget", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("pqItemViewSearchWidget", "Find", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        nextButton->setToolTip(QApplication::translate("pqItemViewSearchWidget", "Next (ALT+N)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        nextButton->setText(QString());
        checkBoxMattchCase->setText(QApplication::translate("pqItemViewSearchWidget", "Match Case", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        closeButton->setToolTip(QApplication::translate("pqItemViewSearchWidget", "Close (Esc)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        closeButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        previousButton->setToolTip(QApplication::translate("pqItemViewSearchWidget", "Previous (ALT+P)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        previousButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class pqItemViewSearchWidget: public Ui_pqItemViewSearchWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQITEMVIEWSEARCHWIDGET_H
