/********************************************************************************
** Form generated from reading UI file 'pqAxesToolbar.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQAXESTOOLBAR_H
#define UI_PQAXESTOOLBAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QToolBar>

QT_BEGIN_NAMESPACE

class Ui_pqAxesToolbar
{
public:
    QAction *actionShowOrientationAxes;
    QAction *actionShowCenterAxes;
    QAction *actionPickCenter;
    QAction *actionResetCenter;

    void setupUi(QToolBar *axesToolbar)
    {
        if (axesToolbar->objectName().isEmpty())
            axesToolbar->setObjectName(QStringLiteral("axesToolbar"));
        axesToolbar->setEnabled(true);
        axesToolbar->setOrientation(Qt::Horizontal);
        actionShowOrientationAxes = new QAction(axesToolbar);
        actionShowOrientationAxes->setObjectName(QStringLiteral("actionShowOrientationAxes"));
        actionShowOrientationAxes->setCheckable(true);
        actionShowOrientationAxes->setEnabled(false);
        const QIcon icon = QIcon(QString::fromUtf8(":/pqWidgets/Icons/pqShowOrientationAxes.png"));
        actionShowOrientationAxes->setIcon(icon);
        actionShowCenterAxes = new QAction(axesToolbar);
        actionShowCenterAxes->setObjectName(QStringLiteral("actionShowCenterAxes"));
        actionShowCenterAxes->setCheckable(true);
        actionShowCenterAxes->setEnabled(false);
        const QIcon icon1 = QIcon(QString::fromUtf8(":/pqWidgets/Icons/pqShowCenterAxes.png"));
        actionShowCenterAxes->setIcon(icon1);
        actionPickCenter = new QAction(axesToolbar);
        actionPickCenter->setObjectName(QStringLiteral("actionPickCenter"));
        actionPickCenter->setCheckable(true);
        actionPickCenter->setEnabled(false);
        const QIcon icon2 = QIcon(QString::fromUtf8(":/pqWidgets/Icons/pqPickCenter.png"));
        actionPickCenter->setIcon(icon2);
        actionResetCenter = new QAction(axesToolbar);
        actionResetCenter->setObjectName(QStringLiteral("actionResetCenter"));
        actionResetCenter->setEnabled(false);
        const QIcon icon3 = QIcon(QString::fromUtf8(":/pqWidgets/Icons/pqResetCenter.png"));
        actionResetCenter->setIcon(icon3);

        axesToolbar->addAction(actionShowOrientationAxes);
        axesToolbar->addAction(actionShowCenterAxes);
        axesToolbar->addAction(actionResetCenter);
        axesToolbar->addAction(actionPickCenter);

        retranslateUi(axesToolbar);

        QMetaObject::connectSlotsByName(axesToolbar);
    } // setupUi

    void retranslateUi(QToolBar *axesToolbar)
    {
        axesToolbar->setWindowTitle(QApplication::translate("pqAxesToolbar", "Center Axes Controls", Q_NULLPTR));
        actionShowOrientationAxes->setText(QApplication::translate("pqAxesToolbar", "Show Orientation Axes", Q_NULLPTR));
#ifndef QT_NO_STATUSTIP
        actionShowOrientationAxes->setStatusTip(QApplication::translate("pqAxesToolbar", "Show/Hide orientation axes", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        actionShowCenterAxes->setText(QApplication::translate("pqAxesToolbar", "Show Center", Q_NULLPTR));
#ifndef QT_NO_STATUSTIP
        actionShowCenterAxes->setStatusTip(QApplication::translate("pqAxesToolbar", "Show/Hide center of rotation", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        actionPickCenter->setText(QApplication::translate("pqAxesToolbar", "Pick Center", Q_NULLPTR));
        actionPickCenter->setIconText(QApplication::translate("pqAxesToolbar", "Pick Center", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionPickCenter->setToolTip(QApplication::translate("pqAxesToolbar", "Pick Center", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionPickCenter->setStatusTip(QApplication::translate("pqAxesToolbar", "Mouse press to pick center of rotation", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        actionResetCenter->setText(QApplication::translate("pqAxesToolbar", "Reset Center", Q_NULLPTR));
#ifndef QT_NO_STATUSTIP
        actionResetCenter->setStatusTip(QApplication::translate("pqAxesToolbar", "Reset center of rotation", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
    } // retranslateUi

};

namespace Ui {
    class pqAxesToolbar: public Ui_pqAxesToolbar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQAXESTOOLBAR_H
