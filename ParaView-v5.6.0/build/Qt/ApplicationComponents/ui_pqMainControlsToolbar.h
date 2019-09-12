/********************************************************************************
** Form generated from reading UI file 'pqMainControlsToolbar.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQMAINCONTROLSTOOLBAR_H
#define UI_PQMAINCONTROLSTOOLBAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QToolBar>

QT_BEGIN_NAMESPACE

class Ui_pqMainControlsToolbar
{
public:
    QAction *actionOpenData;
    QAction *actionSaveData;
    QAction *actionServerConnect;
    QAction *actionServerDisconnect;
    QAction *actionUndo;
    QAction *actionRedo;
    QAction *actionAutoApply;
    QAction *actionQuery;
    QAction *actionLoadPalette;
    QAction *actionDelete;

    void setupUi(QToolBar *pqMainControlsToolbar)
    {
        if (pqMainControlsToolbar->objectName().isEmpty())
            pqMainControlsToolbar->setObjectName(QStringLiteral("pqMainControlsToolbar"));
        pqMainControlsToolbar->resize(414, 52);
        pqMainControlsToolbar->setOrientation(Qt::Horizontal);
        actionOpenData = new QAction(pqMainControlsToolbar);
        actionOpenData->setObjectName(QStringLiteral("actionOpenData"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/pqWidgets/Icons/pqOpen24.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpenData->setIcon(icon);
        actionOpenData->setProperty("PV_MUST_BE_MASTER_TO_SHOW", QVariant(true));
        actionSaveData = new QAction(pqMainControlsToolbar);
        actionSaveData->setObjectName(QStringLiteral("actionSaveData"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/pqWidgets/Icons/pqSave24.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSaveData->setIcon(icon1);
        actionSaveData->setProperty("PV_MUST_BE_MASTER_TO_SHOW", QVariant(true));
        actionServerConnect = new QAction(pqMainControlsToolbar);
        actionServerConnect->setObjectName(QStringLiteral("actionServerConnect"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/pqWidgets/Icons/pqConnect24.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionServerConnect->setIcon(icon2);
        actionServerDisconnect = new QAction(pqMainControlsToolbar);
        actionServerDisconnect->setObjectName(QStringLiteral("actionServerDisconnect"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/pqWidgets/Icons/pqDisconnect24.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionServerDisconnect->setIcon(icon3);
        actionUndo = new QAction(pqMainControlsToolbar);
        actionUndo->setObjectName(QStringLiteral("actionUndo"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":pqWidgets/Icons/pqUndo24.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUndo->setIcon(icon4);
        actionRedo = new QAction(pqMainControlsToolbar);
        actionRedo->setObjectName(QStringLiteral("actionRedo"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/pqWidgets/Icons/pqRedo24.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRedo->setIcon(icon5);
        actionAutoApply = new QAction(pqMainControlsToolbar);
        actionAutoApply->setObjectName(QStringLiteral("actionAutoApply"));
        actionAutoApply->setCheckable(true);
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/pqWidgets/Icons/pqAutoApply32.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAutoApply->setIcon(icon6);
        actionQuery = new QAction(pqMainControlsToolbar);
        actionQuery->setObjectName(QStringLiteral("actionQuery"));
        actionQuery->setCheckable(false);
        actionQuery->setEnabled(true);
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/pqWidgets/Icons/pqFindData24.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionQuery->setIcon(icon7);
        actionLoadPalette = new QAction(pqMainControlsToolbar);
        actionLoadPalette->setObjectName(QStringLiteral("actionLoadPalette"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/pqWidgets/Icons/pqPalette.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionLoadPalette->setIcon(icon8);
        actionDelete = new QAction(pqMainControlsToolbar);
        actionDelete->setObjectName(QStringLiteral("actionDelete"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/pqWidgets/Icons/pqReset24.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDelete->setIcon(icon9);

        pqMainControlsToolbar->addAction(actionOpenData);
        pqMainControlsToolbar->addAction(actionSaveData);
        pqMainControlsToolbar->addSeparator();
        pqMainControlsToolbar->addAction(actionServerConnect);
        pqMainControlsToolbar->addAction(actionServerDisconnect);
        pqMainControlsToolbar->addAction(actionDelete);
        pqMainControlsToolbar->addSeparator();
        pqMainControlsToolbar->addAction(actionUndo);
        pqMainControlsToolbar->addAction(actionRedo);
        pqMainControlsToolbar->addSeparator();
        pqMainControlsToolbar->addAction(actionAutoApply);
        pqMainControlsToolbar->addAction(actionQuery);
        pqMainControlsToolbar->addAction(actionLoadPalette);

        retranslateUi(pqMainControlsToolbar);

        QMetaObject::connectSlotsByName(pqMainControlsToolbar);
    } // setupUi

    void retranslateUi(QToolBar *pqMainControlsToolbar)
    {
        pqMainControlsToolbar->setWindowTitle(QApplication::translate("pqMainControlsToolbar", "Main Controls", Q_NULLPTR));
        actionOpenData->setText(QApplication::translate("pqMainControlsToolbar", "Open...", Q_NULLPTR));
#ifndef QT_NO_STATUSTIP
        actionOpenData->setStatusTip(QApplication::translate("pqMainControlsToolbar", "Open", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        actionSaveData->setText(QApplication::translate("pqMainControlsToolbar", "Save Data...", Q_NULLPTR));
        actionServerConnect->setText(QApplication::translate("pqMainControlsToolbar", "&Connect...", Q_NULLPTR));
#ifndef QT_NO_STATUSTIP
        actionServerConnect->setStatusTip(QApplication::translate("pqMainControlsToolbar", "Connect", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        actionServerDisconnect->setText(QApplication::translate("pqMainControlsToolbar", "&Disconnect", Q_NULLPTR));
#ifndef QT_NO_STATUSTIP
        actionServerDisconnect->setStatusTip(QApplication::translate("pqMainControlsToolbar", "Disconnect", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        actionUndo->setText(QApplication::translate("pqMainControlsToolbar", "&Undo", Q_NULLPTR));
        actionRedo->setText(QApplication::translate("pqMainControlsToolbar", "&Redo", Q_NULLPTR));
        actionAutoApply->setText(QApplication::translate("pqMainControlsToolbar", "Auto Apply", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionAutoApply->setToolTip(QApplication::translate("pqMainControlsToolbar", "Apply changes to parameters automatically", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionQuery->setText(QApplication::translate("pqMainControlsToolbar", "Find data...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionQuery->setToolTip(QApplication::translate("pqMainControlsToolbar", "Find data matching various criteria from the current source (v)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionLoadPalette->setText(QApplication::translate("pqMainControlsToolbar", "Load Palette", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionLoadPalette->setToolTip(QApplication::translate("pqMainControlsToolbar", "Load a color palette", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionDelete->setText(QApplication::translate("pqMainControlsToolbar", "ResetSession", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionDelete->setToolTip(QApplication::translate("pqMainControlsToolbar", "Reset Session", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionDelete->setStatusTip(QApplication::translate("pqMainControlsToolbar", "Reset Session", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
    } // retranslateUi

};

namespace Ui {
    class pqMainControlsToolbar: public Ui_pqMainControlsToolbar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQMAINCONTROLSTOOLBAR_H
