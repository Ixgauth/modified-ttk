/********************************************************************************
** Form generated from reading UI file 'pqAboutDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQABOUTDIALOG_H
#define UI_PQABOUTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_pqAboutDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *Image;
    QHBoxLayout *horizontalLayout;
    QLabel *ParaViewLinkLabel;
    QLabel *VersionLabel;
    QLabel *KitwareLinkLabel;
    QTabWidget *tabWidget;
    QWidget *tabClient;
    QVBoxLayout *vboxLayout;
    QTreeWidget *ClientInformation;
    QWidget *tabServer;
    QGridLayout *gridLayout;
    QTreeWidget *ServerInformation;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *pqAboutDialog)
    {
        if (pqAboutDialog->objectName().isEmpty())
            pqAboutDialog->setObjectName(QStringLiteral("pqAboutDialog"));
        pqAboutDialog->resize(528, 726);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pqAboutDialog->sizePolicy().hasHeightForWidth());
        pqAboutDialog->setSizePolicy(sizePolicy);
        pqAboutDialog->setModal(true);
        verticalLayout = new QVBoxLayout(pqAboutDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        Image = new QLabel(pqAboutDialog);
        Image->setObjectName(QStringLiteral("Image"));
        Image->setPixmap(QPixmap(QString::fromUtf8(":/pqWidgets/Icons/PVSplashScreen.png")));
        Image->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(Image);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        ParaViewLinkLabel = new QLabel(pqAboutDialog);
        ParaViewLinkLabel->setObjectName(QStringLiteral("ParaViewLinkLabel"));
        ParaViewLinkLabel->setOpenExternalLinks(true);

        horizontalLayout->addWidget(ParaViewLinkLabel);

        VersionLabel = new QLabel(pqAboutDialog);
        VersionLabel->setObjectName(QStringLiteral("VersionLabel"));
        VersionLabel->setTextFormat(Qt::AutoText);
        VersionLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(VersionLabel);

        KitwareLinkLabel = new QLabel(pqAboutDialog);
        KitwareLinkLabel->setObjectName(QStringLiteral("KitwareLinkLabel"));
        KitwareLinkLabel->setTextFormat(Qt::RichText);
        KitwareLinkLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        KitwareLinkLabel->setOpenExternalLinks(true);

        horizontalLayout->addWidget(KitwareLinkLabel);

        horizontalLayout->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayout);

        tabWidget = new QTabWidget(pqAboutDialog);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabClient = new QWidget();
        tabClient->setObjectName(QStringLiteral("tabClient"));
        vboxLayout = new QVBoxLayout(tabClient);
#ifndef Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        ClientInformation = new QTreeWidget(tabClient);
        ClientInformation->setObjectName(QStringLiteral("ClientInformation"));
        ClientInformation->setAlternatingRowColors(true);
        ClientInformation->setRootIsDecorated(false);

        vboxLayout->addWidget(ClientInformation);

        tabWidget->addTab(tabClient, QString());
        tabServer = new QWidget();
        tabServer->setObjectName(QStringLiteral("tabServer"));
        gridLayout = new QGridLayout(tabServer);
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        ServerInformation = new QTreeWidget(tabServer);
        ServerInformation->setObjectName(QStringLiteral("ServerInformation"));
        ServerInformation->setAlternatingRowColors(true);
        ServerInformation->setRootIsDecorated(false);

        gridLayout->addWidget(ServerInformation, 0, 0, 1, 1);

        tabWidget->addTab(tabServer, QString());

        verticalLayout->addWidget(tabWidget);

        buttonBox = new QDialogButtonBox(pqAboutDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(pqAboutDialog);
        QObject::connect(buttonBox, SIGNAL(rejected()), pqAboutDialog, SLOT(accept()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(pqAboutDialog);
    } // setupUi

    void retranslateUi(QDialog *pqAboutDialog)
    {
        pqAboutDialog->setWindowTitle(QApplication::translate("pqAboutDialog", "About TTK ParaView", Q_NULLPTR));
        Image->setText(QString());
        ParaViewLinkLabel->setText(QApplication::translate("pqAboutDialog", "<html><head/><body><p><a href=\"http://www.kitware.com/\"><span style=\" text-decoration: underline; color:#0000ff;\">www.kitware.com</span></a></p></body></html>", Q_NULLPTR));
        VersionLabel->setText(QApplication::translate("pqAboutDialog", "<html><b>Version: <i>3.x.x</i></b></html>", Q_NULLPTR));
        KitwareLinkLabel->setText(QApplication::translate("pqAboutDialog", "<html><head/><body><p><a href=\"http://www.paraview.org/\"><span style=\" text-decoration: underline; color:#0000ff;\">www.paraview.org</span></a></p></body></html>", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem = ClientInformation->headerItem();
        ___qtreewidgetitem->setText(1, QApplication::translate("pqAboutDialog", "Description", Q_NULLPTR));
        ___qtreewidgetitem->setText(0, QApplication::translate("pqAboutDialog", "Item", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tabClient), QApplication::translate("pqAboutDialog", "Client Information", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem1 = ServerInformation->headerItem();
        ___qtreewidgetitem1->setText(1, QApplication::translate("pqAboutDialog", "Description", Q_NULLPTR));
        ___qtreewidgetitem1->setText(0, QApplication::translate("pqAboutDialog", "Item", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tabServer), QApplication::translate("pqAboutDialog", "Connection Information", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class pqAboutDialog: public Ui_pqAboutDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQABOUTDIALOG_H
