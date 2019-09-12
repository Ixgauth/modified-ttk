/********************************************************************************
** Form generated from reading UI file 'pqFileMenuBuilder.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQFILEMENUBUILDER_H
#define UI_PQFILEMENUBUILDER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMenu>

QT_BEGIN_NAMESPACE

class Ui_pqFileMenuBuilder
{
public:
    QAction *actionServerConnect;
    QAction *actionServerDisconnect;
    QAction *actionFileSaveScreenshot;
    QAction *actionFileSaveAnimation;
    QAction *actionFileSaveData;
    QAction *actionFileLoadServerState;
    QAction *actionFileSaveServerState;
    QAction *actionFileSaveGeometry;
    QAction *actionReloadFiles;
    QAction *actionFileOpen;
    QAction *actionFileExit;
    QAction *actionExport;
    QAction *actionFileSaveWindowArrangement;
    QAction *actionFileLoadWindowArrangement;
    QAction *actionFileImportCinemaDatabase;
    QAction *actionFileLoadMaterials;
    QMenu *menuRecentFiles;

    void setupUi(QMenu *pqFileMenuBuilder)
    {
        if (pqFileMenuBuilder->objectName().isEmpty())
            pqFileMenuBuilder->setObjectName(QStringLiteral("pqFileMenuBuilder"));
        actionServerConnect = new QAction(pqFileMenuBuilder);
        actionServerConnect->setObjectName(QStringLiteral("actionServerConnect"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/pqWidgets/Icons/pqConnect24.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionServerConnect->setIcon(icon);
        actionServerDisconnect = new QAction(pqFileMenuBuilder);
        actionServerDisconnect->setObjectName(QStringLiteral("actionServerDisconnect"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/pqWidgets/Icons/pqDisconnect24.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionServerDisconnect->setIcon(icon1);
        actionFileSaveScreenshot = new QAction(pqFileMenuBuilder);
        actionFileSaveScreenshot->setObjectName(QStringLiteral("actionFileSaveScreenshot"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/pqWidgets/Icons/pqCaptureScreenshot24.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFileSaveScreenshot->setIcon(icon2);
        actionFileSaveAnimation = new QAction(pqFileMenuBuilder);
        actionFileSaveAnimation->setObjectName(QStringLiteral("actionFileSaveAnimation"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/pqWidgets/Icons/pqSaveAnimation24.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFileSaveAnimation->setIcon(icon3);
        actionFileSaveAnimation->setProperty("PV_MUST_BE_MASTER_TO_SHOW", QVariant(true));
        actionFileSaveData = new QAction(pqFileMenuBuilder);
        actionFileSaveData->setObjectName(QStringLiteral("actionFileSaveData"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/pqWidgets/Icons/pqSave24.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFileSaveData->setIcon(icon4);
        actionFileSaveData->setProperty("PV_MUST_BE_MASTER_TO_SHOW", QVariant(true));
        actionFileLoadServerState = new QAction(pqFileMenuBuilder);
        actionFileLoadServerState->setObjectName(QStringLiteral("actionFileLoadServerState"));
        actionFileLoadServerState->setProperty("PV_MUST_BE_MASTER_TO_SHOW", QVariant(true));
        actionFileSaveServerState = new QAction(pqFileMenuBuilder);
        actionFileSaveServerState->setObjectName(QStringLiteral("actionFileSaveServerState"));
        actionFileSaveGeometry = new QAction(pqFileMenuBuilder);
        actionFileSaveGeometry->setObjectName(QStringLiteral("actionFileSaveGeometry"));
        actionFileSaveGeometry->setProperty("PV_MUST_BE_MASTER_TO_SHOW", QVariant(true));
        actionReloadFiles = new QAction(pqFileMenuBuilder);
        actionReloadFiles->setObjectName(QStringLiteral("actionReloadFiles"));
        actionFileOpen = new QAction(pqFileMenuBuilder);
        actionFileOpen->setObjectName(QStringLiteral("actionFileOpen"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/pqWidgets/Icons/pqOpen24.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFileOpen->setIcon(icon5);
        actionFileOpen->setProperty("PV_MUST_BE_MASTER_TO_SHOW", QVariant(true));
        actionFileExit = new QAction(pqFileMenuBuilder);
        actionFileExit->setObjectName(QStringLiteral("actionFileExit"));
        actionExport = new QAction(pqFileMenuBuilder);
        actionExport->setObjectName(QStringLiteral("actionExport"));
        actionFileSaveWindowArrangement = new QAction(pqFileMenuBuilder);
        actionFileSaveWindowArrangement->setObjectName(QStringLiteral("actionFileSaveWindowArrangement"));
        actionFileLoadWindowArrangement = new QAction(pqFileMenuBuilder);
        actionFileLoadWindowArrangement->setObjectName(QStringLiteral("actionFileLoadWindowArrangement"));
        actionFileImportCinemaDatabase = new QAction(pqFileMenuBuilder);
        actionFileImportCinemaDatabase->setObjectName(QStringLiteral("actionFileImportCinemaDatabase"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/pqWidgets/Icons/cinemascience_mark.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFileImportCinemaDatabase->setIcon(icon6);
        actionFileLoadMaterials = new QAction(pqFileMenuBuilder);
        actionFileLoadMaterials->setObjectName(QStringLiteral("actionFileLoadMaterials"));
        menuRecentFiles = new QMenu(pqFileMenuBuilder);
        menuRecentFiles->setObjectName(QStringLiteral("menuRecentFiles"));

        pqFileMenuBuilder->addAction(actionFileOpen);
        pqFileMenuBuilder->addAction(menuRecentFiles->menuAction());
        pqFileMenuBuilder->addAction(actionReloadFiles);
        pqFileMenuBuilder->addSeparator();
        pqFileMenuBuilder->addAction(actionFileLoadServerState);
        pqFileMenuBuilder->addAction(actionFileSaveServerState);
        pqFileMenuBuilder->addSeparator();
        pqFileMenuBuilder->addAction(actionFileSaveData);
        pqFileMenuBuilder->addAction(actionFileSaveScreenshot);
        pqFileMenuBuilder->addAction(actionExport);
        pqFileMenuBuilder->addSeparator();
        pqFileMenuBuilder->addAction(actionFileSaveAnimation);
        pqFileMenuBuilder->addAction(actionFileSaveGeometry);
        pqFileMenuBuilder->addSeparator();
        pqFileMenuBuilder->addAction(actionFileImportCinemaDatabase);
        pqFileMenuBuilder->addSeparator();
        pqFileMenuBuilder->addAction(actionFileLoadMaterials);
        pqFileMenuBuilder->addSeparator();
        pqFileMenuBuilder->addAction(actionFileLoadWindowArrangement);
        pqFileMenuBuilder->addAction(actionFileSaveWindowArrangement);
        pqFileMenuBuilder->addSeparator();
        pqFileMenuBuilder->addAction(actionServerConnect);
        pqFileMenuBuilder->addAction(actionServerDisconnect);
        pqFileMenuBuilder->addSeparator();
        pqFileMenuBuilder->addAction(actionFileExit);

        retranslateUi(pqFileMenuBuilder);

        QMetaObject::connectSlotsByName(pqFileMenuBuilder);
    } // setupUi

    void retranslateUi(QMenu *pqFileMenuBuilder)
    {
        pqFileMenuBuilder->setTitle(QApplication::translate("pqFileMenuBuilder", "&File", Q_NULLPTR));
        actionServerConnect->setText(QApplication::translate("pqFileMenuBuilder", "&Connect...", Q_NULLPTR));
#ifndef QT_NO_STATUSTIP
        actionServerConnect->setStatusTip(QApplication::translate("pqFileMenuBuilder", "Connect", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        actionServerDisconnect->setText(QApplication::translate("pqFileMenuBuilder", "&Disconnect", Q_NULLPTR));
#ifndef QT_NO_STATUSTIP
        actionServerDisconnect->setStatusTip(QApplication::translate("pqFileMenuBuilder", "Disconnect", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        actionFileSaveScreenshot->setText(QApplication::translate("pqFileMenuBuilder", "Save Screenshot...", Q_NULLPTR));
        actionFileSaveAnimation->setText(QApplication::translate("pqFileMenuBuilder", "Save &Animation...", Q_NULLPTR));
        actionFileSaveData->setText(QApplication::translate("pqFileMenuBuilder", "Save Data...", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionFileSaveData->setShortcut(QApplication::translate("pqFileMenuBuilder", "Ctrl+S", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionFileLoadServerState->setText(QApplication::translate("pqFileMenuBuilder", "&Load State...", Q_NULLPTR));
        actionFileSaveServerState->setText(QApplication::translate("pqFileMenuBuilder", "&Save State...", Q_NULLPTR));
        actionFileSaveGeometry->setText(QApplication::translate("pqFileMenuBuilder", "Save &Geometry...", Q_NULLPTR));
        actionReloadFiles->setText(QApplication::translate("pqFileMenuBuilder", "Reload Files", Q_NULLPTR));
        actionReloadFiles->setIconText(QApplication::translate("pqFileMenuBuilder", "Reload Files", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionReloadFiles->setToolTip(QApplication::translate("pqFileMenuBuilder", "Reload data files in case they were changed externally.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionReloadFiles->setShortcut(QApplication::translate("pqFileMenuBuilder", "F5", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionFileOpen->setText(QApplication::translate("pqFileMenuBuilder", "&Open...", Q_NULLPTR));
#ifndef QT_NO_STATUSTIP
        actionFileOpen->setStatusTip(QApplication::translate("pqFileMenuBuilder", "Open", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_SHORTCUT
        actionFileOpen->setShortcut(QApplication::translate("pqFileMenuBuilder", "Ctrl+O", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionFileExit->setText(QApplication::translate("pqFileMenuBuilder", "E&xit", Q_NULLPTR));
#ifndef QT_NO_STATUSTIP
        actionFileExit->setStatusTip(QApplication::translate("pqFileMenuBuilder", "Exit", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_SHORTCUT
        actionFileExit->setShortcut(QApplication::translate("pqFileMenuBuilder", "Ctrl+Q", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionExport->setText(QApplication::translate("pqFileMenuBuilder", "Export Scene...", Q_NULLPTR));
        actionFileSaveWindowArrangement->setText(QApplication::translate("pqFileMenuBuilder", "Save Window Arrangement...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionFileSaveWindowArrangement->setToolTip(QApplication::translate("pqFileMenuBuilder", "Save window arrangement to a file", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionFileSaveWindowArrangement->setStatusTip(QApplication::translate("pqFileMenuBuilder", "Save window arrangement to a file", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        actionFileLoadWindowArrangement->setText(QApplication::translate("pqFileMenuBuilder", "Load Window Arrangement...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionFileLoadWindowArrangement->setToolTip(QApplication::translate("pqFileMenuBuilder", "Load window arrangement from a file", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionFileLoadWindowArrangement->setStatusTip(QApplication::translate("pqFileMenuBuilder", "Load window arrangement from a file", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        actionFileImportCinemaDatabase->setText(QApplication::translate("pqFileMenuBuilder", "Import Cinema Database...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionFileImportCinemaDatabase->setToolTip(QApplication::translate("pqFileMenuBuilder", "Import a Cinema Database file", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionFileImportCinemaDatabase->setStatusTip(QApplication::translate("pqFileMenuBuilder", "Import a Cinema Database file", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        actionFileLoadMaterials->setText(QApplication::translate("pqFileMenuBuilder", "Load OSPRay Materials...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionFileLoadMaterials->setToolTip(QApplication::translate("pqFileMenuBuilder", "Load an OSPRay Materials file", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionFileLoadMaterials->setStatusTip(QApplication::translate("pqFileMenuBuilder", "Load an OSPRay Materials file", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        menuRecentFiles->setTitle(QApplication::translate("pqFileMenuBuilder", "&Recent Files", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class pqFileMenuBuilder: public Ui_pqFileMenuBuilder {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQFILEMENUBUILDER_H
