/********************************************************************************
** Form generated from reading UI file 'pqColorToolbar.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQCOLORTOOLBAR_H
#define UI_PQCOLORTOOLBAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QToolBar>

QT_BEGIN_NAMESPACE

class Ui_pqColorToolbar
{
public:
    QAction *actionScalarBarVisibility;
    QAction *actionEditColorMap;
    QAction *actionUseSeparateColorMap;
    QAction *actionResetRange;
    QAction *actionRescaleCustomRange;
    QAction *actionRescaleTemporalRange;
    QAction *actionRescaleVisibleRange;

    void setupUi(QToolBar *variableToolbar)
    {
        if (variableToolbar->objectName().isEmpty())
            variableToolbar->setObjectName(QStringLiteral("variableToolbar"));
        variableToolbar->setOrientation(Qt::Horizontal);
        actionScalarBarVisibility = new QAction(variableToolbar);
        actionScalarBarVisibility->setObjectName(QStringLiteral("actionScalarBarVisibility"));
        actionScalarBarVisibility->setCheckable(true);
        actionScalarBarVisibility->setEnabled(false);
        const QIcon icon = QIcon(QString::fromUtf8(":/pqWidgets/Icons/pqScalarBar24.png"));
        actionScalarBarVisibility->setIcon(icon);
        actionEditColorMap = new QAction(variableToolbar);
        actionEditColorMap->setObjectName(QStringLiteral("actionEditColorMap"));
        actionEditColorMap->setEnabled(false);
        const QIcon icon1 = QIcon(QString::fromUtf8(":/pqWidgets/Icons/pqEditColor24.png"));
        actionEditColorMap->setIcon(icon1);
        actionUseSeparateColorMap = new QAction(variableToolbar);
        actionUseSeparateColorMap->setObjectName(QStringLiteral("actionUseSeparateColorMap"));
        actionUseSeparateColorMap->setEnabled(false);
        const QIcon icon2 = QIcon(QString::fromUtf8(":/pqWidgets/Icons/pqSeparateColorMap24.png"));
        actionUseSeparateColorMap->setIcon(icon2);
        actionResetRange = new QAction(variableToolbar);
        actionResetRange->setObjectName(QStringLiteral("actionResetRange"));
        actionResetRange->setEnabled(false);
        const QIcon icon3 = QIcon(QString::fromUtf8(":/pqWidgets/Icons/pqResetRange24.png"));
        actionResetRange->setIcon(icon3);
        actionRescaleCustomRange = new QAction(variableToolbar);
        actionRescaleCustomRange->setObjectName(QStringLiteral("actionRescaleCustomRange"));
        actionRescaleCustomRange->setEnabled(false);
        const QIcon icon4 = QIcon(QString::fromUtf8(":/pqWidgets/Icons/pqResetRangeCustom24.png"));
        actionRescaleCustomRange->setIcon(icon4);
        actionRescaleTemporalRange = new QAction(variableToolbar);
        actionRescaleTemporalRange->setObjectName(QStringLiteral("actionRescaleTemporalRange"));
        actionRescaleTemporalRange->setEnabled(false);
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/pqWidgets/Icons/pqResetRangeTemporal24.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRescaleTemporalRange->setIcon(icon5);
        actionRescaleVisibleRange = new QAction(variableToolbar);
        actionRescaleVisibleRange->setObjectName(QStringLiteral("actionRescaleVisibleRange"));
        actionRescaleVisibleRange->setEnabled(false);
        const QIcon icon6 = QIcon(QString::fromUtf8(":/pqWidgets/Icons/pqResetToVisibleRange32.png"));
        actionRescaleVisibleRange->setIcon(icon6);

        variableToolbar->addAction(actionScalarBarVisibility);
        variableToolbar->addAction(actionEditColorMap);
        variableToolbar->addAction(actionUseSeparateColorMap);
        variableToolbar->addAction(actionResetRange);
        variableToolbar->addAction(actionRescaleCustomRange);
        variableToolbar->addAction(actionRescaleTemporalRange);
        variableToolbar->addAction(actionRescaleVisibleRange);

        retranslateUi(variableToolbar);

        QMetaObject::connectSlotsByName(variableToolbar);
    } // setupUi

    void retranslateUi(QToolBar *variableToolbar)
    {
        variableToolbar->setWindowTitle(QApplication::translate("pqColorToolbar", "Active Variable Controls", Q_NULLPTR));
        actionScalarBarVisibility->setText(QApplication::translate("pqColorToolbar", "Show Color Legend", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionScalarBarVisibility->setToolTip(QApplication::translate("pqColorToolbar", "Toggle Color Legend Visibility", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionScalarBarVisibility->setStatusTip(QApplication::translate("pqColorToolbar", "Toggle Color Legend Visibility", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        actionEditColorMap->setText(QApplication::translate("pqColorToolbar", "Edit Color Map", Q_NULLPTR));
#ifndef QT_NO_STATUSTIP
        actionEditColorMap->setStatusTip(QApplication::translate("pqColorToolbar", "Edit Color Map", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        actionUseSeparateColorMap->setText(QApplication::translate("pqColorToolbar", "Use Separate Color Map", Q_NULLPTR));
#ifndef QT_NO_STATUSTIP
        actionUseSeparateColorMap->setStatusTip(QApplication::translate("pqColorToolbar", "Use Separate Color Map", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        actionResetRange->setText(QApplication::translate("pqColorToolbar", "Reset Range", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionResetRange->setToolTip(QApplication::translate("pqColorToolbar", "Rescale to Data Range", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionResetRange->setStatusTip(QApplication::translate("pqColorToolbar", "Rescale to Data Range", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        actionRescaleCustomRange->setText(QApplication::translate("pqColorToolbar", "Rescale Custom Range", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionRescaleCustomRange->setToolTip(QApplication::translate("pqColorToolbar", "Rescale to Custom Data Range", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionRescaleCustomRange->setStatusTip(QApplication::translate("pqColorToolbar", "Rescale to Custom Data Range", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        actionRescaleTemporalRange->setText(QApplication::translate("pqColorToolbar", "Rescale Temporal Range", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionRescaleTemporalRange->setToolTip(QApplication::translate("pqColorToolbar", "Rescale to data range over all timesteps", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionRescaleTemporalRange->setStatusTip(QApplication::translate("pqColorToolbar", "Rescale to data range over all timesteps", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        actionRescaleVisibleRange->setText(QApplication::translate("pqColorToolbar", "Rescale Visible Range", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionRescaleVisibleRange->setToolTip(QApplication::translate("pqColorToolbar", "Rescale to Visible Data Range", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionRescaleVisibleRange->setStatusTip(QApplication::translate("pqColorToolbar", "Rescale to Visible Data Range", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
    } // retranslateUi

};

namespace Ui {
    class pqColorToolbar: public Ui_pqColorToolbar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQCOLORTOOLBAR_H
