/********************************************************************************
** Form generated from reading UI file 'pqVCRToolbar.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQVCRTOOLBAR_H
#define UI_PQVCRTOOLBAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QToolBar>

QT_BEGIN_NAMESPACE

class Ui_pqVCRToolbar
{
public:
    QAction *actionVCRPlay;
    QAction *actionVCRPreviousFrame;
    QAction *actionVCRFirstFrame;
    QAction *actionVCRNextFrame;
    QAction *actionVCRLastFrame;
    QAction *actionVCRLoop;

    void setupUi(QToolBar *VCRToolbar)
    {
        if (VCRToolbar->objectName().isEmpty())
            VCRToolbar->setObjectName(QStringLiteral("VCRToolbar"));
        VCRToolbar->setOrientation(Qt::Horizontal);
        VCRToolbar->setProperty("PV_MUST_BE_MASTER", QVariant(true));
        actionVCRPlay = new QAction(VCRToolbar);
        actionVCRPlay->setObjectName(QStringLiteral("actionVCRPlay"));
        actionVCRPlay->setEnabled(false);
        const QIcon icon = QIcon(QString::fromUtf8(":/pqWidgets/Icons/pqVcrPlay.png"));
        actionVCRPlay->setIcon(icon);
        actionVCRPreviousFrame = new QAction(VCRToolbar);
        actionVCRPreviousFrame->setObjectName(QStringLiteral("actionVCRPreviousFrame"));
        actionVCRPreviousFrame->setEnabled(false);
        const QIcon icon1 = QIcon(QString::fromUtf8(":/pqWidgets/Icons/pqVcrBack.png"));
        actionVCRPreviousFrame->setIcon(icon1);
        actionVCRPreviousFrame->setProperty("PV_MUST_BE_MASTER", QVariant(true));
        actionVCRFirstFrame = new QAction(VCRToolbar);
        actionVCRFirstFrame->setObjectName(QStringLiteral("actionVCRFirstFrame"));
        actionVCRFirstFrame->setEnabled(false);
        const QIcon icon2 = QIcon(QString::fromUtf8(":/pqWidgets/Icons/pqVcrFirst.png"));
        actionVCRFirstFrame->setIcon(icon2);
        actionVCRNextFrame = new QAction(VCRToolbar);
        actionVCRNextFrame->setObjectName(QStringLiteral("actionVCRNextFrame"));
        actionVCRNextFrame->setEnabled(false);
        const QIcon icon3 = QIcon(QString::fromUtf8(":/pqWidgets/Icons/pqVcrForward.png"));
        actionVCRNextFrame->setIcon(icon3);
        actionVCRLastFrame = new QAction(VCRToolbar);
        actionVCRLastFrame->setObjectName(QStringLiteral("actionVCRLastFrame"));
        actionVCRLastFrame->setEnabled(false);
        const QIcon icon4 = QIcon(QString::fromUtf8(":/pqWidgets/Icons/pqVcrLast.png"));
        actionVCRLastFrame->setIcon(icon4);
        actionVCRLoop = new QAction(VCRToolbar);
        actionVCRLoop->setObjectName(QStringLiteral("actionVCRLoop"));
        actionVCRLoop->setCheckable(true);
        actionVCRLoop->setEnabled(false);
        const QIcon icon5 = QIcon(QString::fromUtf8(":/pqWidgets/Icons/pqVcrLoop.png"));
        actionVCRLoop->setIcon(icon5);

        VCRToolbar->addAction(actionVCRFirstFrame);
        VCRToolbar->addAction(actionVCRPreviousFrame);
        VCRToolbar->addAction(actionVCRPlay);
        VCRToolbar->addAction(actionVCRNextFrame);
        VCRToolbar->addAction(actionVCRLastFrame);
        VCRToolbar->addAction(actionVCRLoop);

        retranslateUi(VCRToolbar);

        QMetaObject::connectSlotsByName(VCRToolbar);
    } // setupUi

    void retranslateUi(QToolBar *VCRToolbar)
    {
        VCRToolbar->setWindowTitle(QApplication::translate("pqVCRToolbar", "VCR Controls", Q_NULLPTR));
        actionVCRPlay->setText(QApplication::translate("pqVCRToolbar", "&Play", Q_NULLPTR));
        actionVCRPreviousFrame->setText(QApplication::translate("pqVCRToolbar", "Pre&vious Frame", Q_NULLPTR));
        actionVCRFirstFrame->setText(QApplication::translate("pqVCRToolbar", "&First Frame", Q_NULLPTR));
        actionVCRNextFrame->setText(QApplication::translate("pqVCRToolbar", "&Next Frame", Q_NULLPTR));
        actionVCRLastFrame->setText(QApplication::translate("pqVCRToolbar", "&Last Frame", Q_NULLPTR));
        actionVCRLoop->setText(QApplication::translate("pqVCRToolbar", "L&oop", Q_NULLPTR));
        actionVCRLoop->setIconText(QApplication::translate("pqVCRToolbar", "Loop", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionVCRLoop->setToolTip(QApplication::translate("pqVCRToolbar", "Loop", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionVCRLoop->setStatusTip(QApplication::translate("pqVCRToolbar", "Loop", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
    } // retranslateUi

};

namespace Ui {
    class pqVCRToolbar: public Ui_pqVCRToolbar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQVCRTOOLBAR_H
