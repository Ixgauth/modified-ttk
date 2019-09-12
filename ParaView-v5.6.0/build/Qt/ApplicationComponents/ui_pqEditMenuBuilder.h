/********************************************************************************
** Form generated from reading UI file 'pqEditMenuBuilder.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQEDITMENUBUILDER_H
#define UI_PQEDITMENUBUILDER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMenu>

QT_BEGIN_NAMESPACE

class Ui_pqEditMenuBuilder
{
public:
    QAction *actionEditUndo;
    QAction *actionEditRedo;
    QAction *actionEditCameraUndo;
    QAction *actionEditCameraRedo;
    QAction *actionChangeInput;
    QAction *actionCopy;
    QAction *actionPaste;
    QAction *actionDelete;
    QAction *actionDelete_All;
    QAction *actionShow_All;
    QAction *actionHide_All;
    QAction *actionIgnoreTime;
    QAction *actionEditSettings;
    QAction *actionQuery;
    QAction *actionResetDefaultSettings;
    QAction *actionSetMainWindowTitle;

    void setupUi(QMenu *pqEditMenuBuilder)
    {
        if (pqEditMenuBuilder->objectName().isEmpty())
            pqEditMenuBuilder->setObjectName(QStringLiteral("pqEditMenuBuilder"));
        actionEditUndo = new QAction(pqEditMenuBuilder);
        actionEditUndo->setObjectName(QStringLiteral("actionEditUndo"));
        actionEditUndo->setCheckable(false);
        actionEditUndo->setEnabled(false);
        QIcon icon;
        icon.addFile(QStringLiteral(":/pqWidgets/Icons/pqUndo24.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionEditUndo->setIcon(icon);
        actionEditRedo = new QAction(pqEditMenuBuilder);
        actionEditRedo->setObjectName(QStringLiteral("actionEditRedo"));
        actionEditRedo->setEnabled(false);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/pqWidgets/Icons/pqRedo24.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionEditRedo->setIcon(icon1);
        actionEditCameraUndo = new QAction(pqEditMenuBuilder);
        actionEditCameraUndo->setObjectName(QStringLiteral("actionEditCameraUndo"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/pqWidgets/Icons/pqUndoCamera24.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionEditCameraUndo->setIcon(icon2);
        actionEditCameraRedo = new QAction(pqEditMenuBuilder);
        actionEditCameraRedo->setObjectName(QStringLiteral("actionEditCameraRedo"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/pqWidgets/Icons/pqRedoCamera24.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionEditCameraRedo->setIcon(icon3);
        actionChangeInput = new QAction(pqEditMenuBuilder);
        actionChangeInput->setObjectName(QStringLiteral("actionChangeInput"));
        actionCopy = new QAction(pqEditMenuBuilder);
        actionCopy->setObjectName(QStringLiteral("actionCopy"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/pqWidgets/Icons/pqCopy22.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCopy->setIcon(icon4);
        actionPaste = new QAction(pqEditMenuBuilder);
        actionPaste->setObjectName(QStringLiteral("actionPaste"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/pqWidgets/Icons/pqPaste22.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPaste->setIcon(icon5);
        actionDelete = new QAction(pqEditMenuBuilder);
        actionDelete->setObjectName(QStringLiteral("actionDelete"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/QtWidgets/Icons/pqDelete24.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDelete->setIcon(icon6);
        actionDelete_All = new QAction(pqEditMenuBuilder);
        actionDelete_All->setObjectName(QStringLiteral("actionDelete_All"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/pqWidgets/Icons/pqReset24.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDelete_All->setIcon(icon7);
        actionShow_All = new QAction(pqEditMenuBuilder);
        actionShow_All->setObjectName(QStringLiteral("actionShow_All"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/pqWidgets/Icons/pqEyeball.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionShow_All->setIcon(icon8);
        actionHide_All = new QAction(pqEditMenuBuilder);
        actionHide_All->setObjectName(QStringLiteral("actionHide_All"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/pqWidgets/Icons/pqEyeballClosed.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionHide_All->setIcon(icon9);
        actionIgnoreTime = new QAction(pqEditMenuBuilder);
        actionIgnoreTime->setObjectName(QStringLiteral("actionIgnoreTime"));
        actionIgnoreTime->setCheckable(true);
        actionEditSettings = new QAction(pqEditMenuBuilder);
        actionEditSettings->setObjectName(QStringLiteral("actionEditSettings"));
        actionQuery = new QAction(pqEditMenuBuilder);
        actionQuery->setObjectName(QStringLiteral("actionQuery"));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/pqWidgets/Icons/pqFindData32.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionQuery->setIcon(icon10);
        actionResetDefaultSettings = new QAction(pqEditMenuBuilder);
        actionResetDefaultSettings->setObjectName(QStringLiteral("actionResetDefaultSettings"));
        actionSetMainWindowTitle = new QAction(pqEditMenuBuilder);
        actionSetMainWindowTitle->setObjectName(QStringLiteral("actionSetMainWindowTitle"));

        pqEditMenuBuilder->addAction(actionEditUndo);
        pqEditMenuBuilder->addAction(actionEditRedo);
        pqEditMenuBuilder->addSeparator();
        pqEditMenuBuilder->addAction(actionEditCameraUndo);
        pqEditMenuBuilder->addAction(actionEditCameraRedo);
        pqEditMenuBuilder->addSeparator();
        pqEditMenuBuilder->addAction(actionCopy);
        pqEditMenuBuilder->addAction(actionPaste);
        pqEditMenuBuilder->addSeparator();
        pqEditMenuBuilder->addAction(actionChangeInput);
        pqEditMenuBuilder->addAction(actionIgnoreTime);
        pqEditMenuBuilder->addAction(actionDelete);
        pqEditMenuBuilder->addSeparator();
        pqEditMenuBuilder->addAction(actionShow_All);
        pqEditMenuBuilder->addAction(actionHide_All);
        pqEditMenuBuilder->addAction(actionDelete_All);
        pqEditMenuBuilder->addSeparator();
        pqEditMenuBuilder->addAction(actionQuery);
        pqEditMenuBuilder->addSeparator();
        pqEditMenuBuilder->addAction(actionEditSettings);
        pqEditMenuBuilder->addAction(actionResetDefaultSettings);
        pqEditMenuBuilder->addSeparator();
        pqEditMenuBuilder->addAction(actionSetMainWindowTitle);

        retranslateUi(pqEditMenuBuilder);

        QMetaObject::connectSlotsByName(pqEditMenuBuilder);
    } // setupUi

    void retranslateUi(QMenu *pqEditMenuBuilder)
    {
        pqEditMenuBuilder->setTitle(QApplication::translate("pqEditMenuBuilder", "&Edit", Q_NULLPTR));
        actionEditUndo->setText(QApplication::translate("pqEditMenuBuilder", "&Undo", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionEditUndo->setShortcut(QApplication::translate("pqEditMenuBuilder", "Ctrl+Z", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionEditRedo->setText(QApplication::translate("pqEditMenuBuilder", "&Redo", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionEditRedo->setShortcut(QApplication::translate("pqEditMenuBuilder", "Ctrl+Y", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionEditCameraUndo->setText(QApplication::translate("pqEditMenuBuilder", "Camera Undo", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionEditCameraUndo->setShortcut(QApplication::translate("pqEditMenuBuilder", "Ctrl+B", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionEditCameraRedo->setText(QApplication::translate("pqEditMenuBuilder", "Camera Redo", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionEditCameraRedo->setShortcut(QApplication::translate("pqEditMenuBuilder", "Ctrl+F", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionChangeInput->setText(QApplication::translate("pqEditMenuBuilder", "Change &Input...", Q_NULLPTR));
        actionChangeInput->setIconText(QApplication::translate("pqEditMenuBuilder", "Change Input...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionChangeInput->setToolTip(QApplication::translate("pqEditMenuBuilder", "Change a Filter's Input", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionChangeInput->setStatusTip(QApplication::translate("pqEditMenuBuilder", "Change a Filter's Input", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        actionCopy->setText(QApplication::translate("pqEditMenuBuilder", "&Copy", Q_NULLPTR));
#ifndef QT_NO_STATUSTIP
        actionCopy->setStatusTip(QApplication::translate("pqEditMenuBuilder", "Copy properties", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        actionPaste->setText(QApplication::translate("pqEditMenuBuilder", "&Paste", Q_NULLPTR));
#ifndef QT_NO_STATUSTIP
        actionPaste->setStatusTip(QApplication::translate("pqEditMenuBuilder", "Paste copied properties", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        actionDelete->setText(QApplication::translate("pqEditMenuBuilder", "&Delete", Q_NULLPTR));
#ifndef QT_NO_STATUSTIP
        actionDelete->setStatusTip(QApplication::translate("pqEditMenuBuilder", "Delete", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        actionDelete_All->setText(QApplication::translate("pqEditMenuBuilder", "Reset Session", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionDelete_All->setShortcut(QApplication::translate("pqEditMenuBuilder", "Ctrl+R", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionShow_All->setText(QApplication::translate("pqEditMenuBuilder", "Show All", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionShow_All->setToolTip(QApplication::translate("pqEditMenuBuilder", "Show all sources in selected view", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionHide_All->setText(QApplication::translate("pqEditMenuBuilder", "Hide All", Q_NULLPTR));
        actionIgnoreTime->setText(QApplication::translate("pqEditMenuBuilder", "Ignore Time", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionIgnoreTime->setToolTip(QApplication::translate("pqEditMenuBuilder", "Disregard this source/filter's time from animations", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionIgnoreTime->setStatusTip(QApplication::translate("pqEditMenuBuilder", "Disregard this source/filter's time from animations", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        actionIgnoreTime->setWhatsThis(QApplication::translate("pqEditMenuBuilder", "Disregard this source/filter's time from animations", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        actionEditSettings->setText(QApplication::translate("pqEditMenuBuilder", "Settings...", Q_NULLPTR));
        actionEditSettings->setIconText(QApplication::translate("pqEditMenuBuilder", "Settings", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionEditSettings->setToolTip(QApplication::translate("pqEditMenuBuilder", "Settings", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionQuery->setText(QApplication::translate("pqEditMenuBuilder", "Find Data...", Q_NULLPTR));
        actionQuery->setIconText(QApplication::translate("pqEditMenuBuilder", "Find Data", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionQuery->setToolTip(QApplication::translate("pqEditMenuBuilder", "Find data matching various criteria from the current source (v).", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionQuery->setShortcut(QApplication::translate("pqEditMenuBuilder", "V", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionResetDefaultSettings->setText(QApplication::translate("pqEditMenuBuilder", "Reset to Default Settings", Q_NULLPTR));
        actionResetDefaultSettings->setIconText(QApplication::translate("pqEditMenuBuilder", "Reset to Default Settings", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionResetDefaultSettings->setToolTip(QApplication::translate("pqEditMenuBuilder", "Reset user settings to default.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionSetMainWindowTitle->setText(QApplication::translate("pqEditMenuBuilder", "Rename Window", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionSetMainWindowTitle->setToolTip(QApplication::translate("pqEditMenuBuilder", "Change the main window title", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionSetMainWindowTitle->setShortcut(QApplication::translate("pqEditMenuBuilder", "F2", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
    } // retranslateUi

};

namespace Ui {
    class pqEditMenuBuilder: public Ui_pqEditMenuBuilder {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQEDITMENUBUILDER_H
