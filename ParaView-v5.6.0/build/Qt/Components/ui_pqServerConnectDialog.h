/********************************************************************************
** Form generated from reading UI file 'pqServerConnectDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQSERVERCONNECTDIALOG_H
#define UI_PQSERVERCONNECTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_pqServerConnectDialog
{
public:
    QGridLayout *gridLayout_2;
    QStackedWidget *stackedWidget;
    QWidget *page_choose;
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout;
    QPushButton *addServer;
    QPushButton *editServer;
    QPushButton *deleteServer;
    QPushButton *load;
    QPushButton *save;
    QPushButton *fetchServers;
    QFrame *line;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QLabel *timeoutLabel;
    QSpinBox *timeoutSpinBox;
    QPushButton *connect;
    QPushButton *close;
    QTableWidget *servers;
    QWidget *page_create;
    QGridLayout *gridLayout_5;
    QLabel *label_6;
    QLineEdit *name;
    QLabel *label_5;
    QComboBox *type;
    QLabel *hostLabel;
    QLineEdit *host;
    QLabel *portLabel;
    QSpinBox *port;
    QLabel *dataServerHostLabel;
    QLineEdit *dataServerHost;
    QLabel *dataServerPortLabel;
    QSpinBox *dataServerPort;
    QLabel *renderServerHostLabel;
    QLineEdit *renderServerHost;
    QLabel *renderServerPortLabel;
    QSpinBox *renderServerPort;
    QSpacerItem *spacer;
    QHBoxLayout *_6;
    QSpacerItem *spacerItem1;
    QPushButton *okButton;
    QPushButton *cancelButton;
    QWidget *page_edit;
    QGridLayout *gridLayout_6;
    QLabel *message;
    QLabel *secondaryMessage;
    QHBoxLayout *_9;
    QLabel *label_11;
    QComboBox *startup_type;
    QSpacerItem *spacerItem2;
    QStackedWidget *stackedWidget_2;
    QWidget *page_6;
    QVBoxLayout *_8;
    QLabel *label_10;
    QWidget *page_1;
    QVBoxLayout *_5;
    QLabel *label_7;
    QTextEdit *commandLine;
    QHBoxLayout *_7;
    QLabel *label_8;
    QDoubleSpinBox *delay;
    QLabel *label_9;
    QSpacerItem *spacerItem3;
    QDialogButtonBox *editServer2ButtonBox;
    QWidget *page_fetch;
    QVBoxLayout *verticalLayout;
    QTableWidget *importServersTable;
    QHBoxLayout *horizontalLayout;
    QPushButton *editSources;
    QSpacerItem *horizontalSpacer;
    QPushButton *importSelected;
    QPushButton *fetchCancel;
    QWidget *page_editSources;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QTextEdit *editSourcesText;
    QDialogButtonBox *editSourcesButtonBox;

    void setupUi(QDialog *pqServerConnectDialog)
    {
        if (pqServerConnectDialog->objectName().isEmpty())
            pqServerConnectDialog->setObjectName(QStringLiteral("pqServerConnectDialog"));
        pqServerConnectDialog->resize(529, 383);
        gridLayout_2 = new QGridLayout(pqServerConnectDialog);
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        stackedWidget = new QStackedWidget(pqServerConnectDialog);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        page_choose = new QWidget();
        page_choose->setObjectName(QStringLiteral("page_choose"));
        gridLayout_4 = new QGridLayout(page_choose);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout = new QGridLayout();
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout->setContentsMargins(0, 0, 0, 0);
#endif
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        addServer = new QPushButton(page_choose);
        addServer->setObjectName(QStringLiteral("addServer"));

        gridLayout->addWidget(addServer, 0, 0, 1, 1);

        editServer = new QPushButton(page_choose);
        editServer->setObjectName(QStringLiteral("editServer"));
        editServer->setEnabled(false);

        gridLayout->addWidget(editServer, 0, 1, 1, 1);

        deleteServer = new QPushButton(page_choose);
        deleteServer->setObjectName(QStringLiteral("deleteServer"));
        deleteServer->setEnabled(false);

        gridLayout->addWidget(deleteServer, 0, 2, 1, 1);

        load = new QPushButton(page_choose);
        load->setObjectName(QStringLiteral("load"));

        gridLayout->addWidget(load, 1, 0, 1, 1);

        save = new QPushButton(page_choose);
        save->setObjectName(QStringLiteral("save"));

        gridLayout->addWidget(save, 1, 1, 1, 1);

        fetchServers = new QPushButton(page_choose);
        fetchServers->setObjectName(QStringLiteral("fetchServers"));

        gridLayout->addWidget(fetchServers, 1, 2, 1, 1);


        gridLayout_4->addLayout(gridLayout, 1, 0, 1, 1);

        line = new QFrame(page_choose);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_4->addWidget(line, 2, 0, 1, 1);

        hboxLayout = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        timeoutLabel = new QLabel(page_choose);
        timeoutLabel->setObjectName(QStringLiteral("timeoutLabel"));

        hboxLayout->addWidget(timeoutLabel);

        timeoutSpinBox = new QSpinBox(page_choose);
        timeoutSpinBox->setObjectName(QStringLiteral("timeoutSpinBox"));
        timeoutSpinBox->setValue(60);
        timeoutSpinBox->setMinimum(-1);
        timeoutSpinBox->setMaximum(9999);

        hboxLayout->addWidget(timeoutSpinBox);

        connect = new QPushButton(page_choose);
        connect->setObjectName(QStringLiteral("connect"));
        connect->setEnabled(false);

        hboxLayout->addWidget(connect);

        close = new QPushButton(page_choose);
        close->setObjectName(QStringLiteral("close"));

        hboxLayout->addWidget(close);


        gridLayout_4->addLayout(hboxLayout, 3, 0, 1, 1);

        servers = new QTableWidget(page_choose);
        if (servers->columnCount() < 2)
            servers->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        servers->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        servers->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        servers->setObjectName(QStringLiteral("servers"));
        servers->setEditTriggers(QAbstractItemView::NoEditTriggers);
        servers->setAlternatingRowColors(true);
        servers->setSelectionMode(QAbstractItemView::SingleSelection);
        servers->setSelectionBehavior(QAbstractItemView::SelectRows);
        servers->setSortingEnabled(true);
        servers->horizontalHeader()->setDefaultSectionSize(250);
        servers->horizontalHeader()->setStretchLastSection(true);
        servers->verticalHeader()->setVisible(false);

        gridLayout_4->addWidget(servers, 0, 0, 1, 1);

        stackedWidget->addWidget(page_choose);
        page_create = new QWidget();
        page_create->setObjectName(QStringLiteral("page_create"));
        gridLayout_5 = new QGridLayout(page_create);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        label_6 = new QLabel(page_create);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_5->addWidget(label_6, 0, 0, 1, 1);

        name = new QLineEdit(page_create);
        name->setObjectName(QStringLiteral("name"));

        gridLayout_5->addWidget(name, 0, 1, 1, 1);

        label_5 = new QLabel(page_create);
        label_5->setObjectName(QStringLiteral("label_5"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);

        gridLayout_5->addWidget(label_5, 1, 0, 1, 1);

        type = new QComboBox(page_create);
        type->setObjectName(QStringLiteral("type"));

        gridLayout_5->addWidget(type, 1, 1, 1, 1);

        hostLabel = new QLabel(page_create);
        hostLabel->setObjectName(QStringLiteral("hostLabel"));

        gridLayout_5->addWidget(hostLabel, 2, 0, 1, 1);

        host = new QLineEdit(page_create);
        host->setObjectName(QStringLiteral("host"));

        gridLayout_5->addWidget(host, 2, 1, 1, 1);

        portLabel = new QLabel(page_create);
        portLabel->setObjectName(QStringLiteral("portLabel"));

        gridLayout_5->addWidget(portLabel, 3, 0, 1, 1);

        port = new QSpinBox(page_create);
        port->setObjectName(QStringLiteral("port"));
        port->setMinimum(1);
        port->setMaximum(999999999);
        port->setValue(11111);

        gridLayout_5->addWidget(port, 3, 1, 1, 1);

        dataServerHostLabel = new QLabel(page_create);
        dataServerHostLabel->setObjectName(QStringLiteral("dataServerHostLabel"));

        gridLayout_5->addWidget(dataServerHostLabel, 4, 0, 1, 1);

        dataServerHost = new QLineEdit(page_create);
        dataServerHost->setObjectName(QStringLiteral("dataServerHost"));

        gridLayout_5->addWidget(dataServerHost, 4, 1, 1, 1);

        dataServerPortLabel = new QLabel(page_create);
        dataServerPortLabel->setObjectName(QStringLiteral("dataServerPortLabel"));

        gridLayout_5->addWidget(dataServerPortLabel, 5, 0, 1, 1);

        dataServerPort = new QSpinBox(page_create);
        dataServerPort->setObjectName(QStringLiteral("dataServerPort"));
        dataServerPort->setMinimum(1);
        dataServerPort->setMaximum(999999999);
        dataServerPort->setValue(11111);

        gridLayout_5->addWidget(dataServerPort, 5, 1, 1, 1);

        renderServerHostLabel = new QLabel(page_create);
        renderServerHostLabel->setObjectName(QStringLiteral("renderServerHostLabel"));

        gridLayout_5->addWidget(renderServerHostLabel, 6, 0, 1, 1);

        renderServerHost = new QLineEdit(page_create);
        renderServerHost->setObjectName(QStringLiteral("renderServerHost"));

        gridLayout_5->addWidget(renderServerHost, 6, 1, 1, 1);

        renderServerPortLabel = new QLabel(page_create);
        renderServerPortLabel->setObjectName(QStringLiteral("renderServerPortLabel"));

        gridLayout_5->addWidget(renderServerPortLabel, 7, 0, 1, 1);

        renderServerPort = new QSpinBox(page_create);
        renderServerPort->setObjectName(QStringLiteral("renderServerPort"));
        renderServerPort->setMaximum(999999999);
        renderServerPort->setValue(22222);

        gridLayout_5->addWidget(renderServerPort, 7, 1, 1, 1);

        spacer = new QSpacerItem(508, 94, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(spacer, 8, 0, 1, 2);

        _6 = new QHBoxLayout();
#ifndef Q_OS_MAC
        _6->setSpacing(6);
#endif
        _6->setContentsMargins(0, 0, 0, 0);
        _6->setObjectName(QStringLiteral("_6"));
        spacerItem1 = new QSpacerItem(131, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        _6->addItem(spacerItem1);

        okButton = new QPushButton(page_create);
        okButton->setObjectName(QStringLiteral("okButton"));

        _6->addWidget(okButton);

        cancelButton = new QPushButton(page_create);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));

        _6->addWidget(cancelButton);


        gridLayout_5->addLayout(_6, 9, 0, 1, 2);

        stackedWidget->addWidget(page_create);
        page_edit = new QWidget();
        page_edit->setObjectName(QStringLiteral("page_edit"));
        gridLayout_6 = new QGridLayout(page_edit);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        message = new QLabel(page_edit);
        message->setObjectName(QStringLiteral("message"));

        gridLayout_6->addWidget(message, 0, 0, 1, 1);

        secondaryMessage = new QLabel(page_edit);
        secondaryMessage->setObjectName(QStringLiteral("secondaryMessage"));
        secondaryMessage->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        secondaryMessage->setWordWrap(true);

        gridLayout_6->addWidget(secondaryMessage, 1, 0, 1, 1);

        _9 = new QHBoxLayout();
#ifndef Q_OS_MAC
        _9->setSpacing(6);
#endif
        _9->setContentsMargins(0, 0, 0, 0);
        _9->setObjectName(QStringLiteral("_9"));
        label_11 = new QLabel(page_edit);
        label_11->setObjectName(QStringLiteral("label_11"));
        sizePolicy.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy);

        _9->addWidget(label_11);

        startup_type = new QComboBox(page_edit);
        startup_type->setObjectName(QStringLiteral("startup_type"));

        _9->addWidget(startup_type);

        spacerItem2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        _9->addItem(spacerItem2);


        gridLayout_6->addLayout(_9, 2, 0, 1, 1);

        stackedWidget_2 = new QStackedWidget(page_edit);
        stackedWidget_2->setObjectName(QStringLiteral("stackedWidget_2"));
        stackedWidget_2->setFrameShape(QFrame::Box);
        page_6 = new QWidget();
        page_6->setObjectName(QStringLiteral("page_6"));
        _8 = new QVBoxLayout(page_6);
#ifndef Q_OS_MAC
        _8->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        _8->setContentsMargins(9, 9, 9, 9);
#endif
        _8->setObjectName(QStringLiteral("_8"));
        label_10 = new QLabel(page_6);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setFrameShape(QFrame::NoFrame);
        label_10->setAlignment(Qt::AlignCenter);
        label_10->setWordWrap(true);

        _8->addWidget(label_10);

        stackedWidget_2->addWidget(page_6);
        page_1 = new QWidget();
        page_1->setObjectName(QStringLiteral("page_1"));
        _5 = new QVBoxLayout(page_1);
#ifndef Q_OS_MAC
        _5->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        _5->setContentsMargins(9, 9, 9, 9);
#endif
        _5->setObjectName(QStringLiteral("_5"));
        label_7 = new QLabel(page_1);
        label_7->setObjectName(QStringLiteral("label_7"));

        _5->addWidget(label_7);

        commandLine = new QTextEdit(page_1);
        commandLine->setObjectName(QStringLiteral("commandLine"));

        _5->addWidget(commandLine);

        _7 = new QHBoxLayout();
#ifndef Q_OS_MAC
        _7->setSpacing(6);
#endif
        _7->setContentsMargins(0, 0, 0, 0);
        _7->setObjectName(QStringLiteral("_7"));
        label_8 = new QLabel(page_1);
        label_8->setObjectName(QStringLiteral("label_8"));

        _7->addWidget(label_8);

        delay = new QDoubleSpinBox(page_1);
        delay->setObjectName(QStringLiteral("delay"));
        delay->setDecimals(1);
        delay->setMaximum(300);
        delay->setValue(5);

        _7->addWidget(delay);

        label_9 = new QLabel(page_1);
        label_9->setObjectName(QStringLiteral("label_9"));

        _7->addWidget(label_9);

        spacerItem3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        _7->addItem(spacerItem3);


        _5->addLayout(_7);

        stackedWidget_2->addWidget(page_1);

        gridLayout_6->addWidget(stackedWidget_2, 3, 0, 1, 1);

        editServer2ButtonBox = new QDialogButtonBox(page_edit);
        editServer2ButtonBox->setObjectName(QStringLiteral("editServer2ButtonBox"));
        editServer2ButtonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Save);

        gridLayout_6->addWidget(editServer2ButtonBox, 4, 0, 1, 1);

        stackedWidget->addWidget(page_edit);
        page_fetch = new QWidget();
        page_fetch->setObjectName(QStringLiteral("page_fetch"));
        verticalLayout = new QVBoxLayout(page_fetch);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        importServersTable = new QTableWidget(page_fetch);
        if (importServersTable->columnCount() < 3)
            importServersTable->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        importServersTable->setHorizontalHeaderItem(0, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        importServersTable->setHorizontalHeaderItem(1, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        importServersTable->setHorizontalHeaderItem(2, __qtablewidgetitem4);
        importServersTable->setObjectName(QStringLiteral("importServersTable"));
        importServersTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        importServersTable->setAlternatingRowColors(true);
        importServersTable->setSelectionMode(QAbstractItemView::ExtendedSelection);
        importServersTable->setSelectionBehavior(QAbstractItemView::SelectRows);
        importServersTable->setSortingEnabled(true);
        importServersTable->horizontalHeader()->setDefaultSectionSize(150);
        importServersTable->horizontalHeader()->setStretchLastSection(true);
        importServersTable->verticalHeader()->setVisible(false);

        verticalLayout->addWidget(importServersTable);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        editSources = new QPushButton(page_fetch);
        editSources->setObjectName(QStringLiteral("editSources"));

        horizontalLayout->addWidget(editSources);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        importSelected = new QPushButton(page_fetch);
        importSelected->setObjectName(QStringLiteral("importSelected"));
        importSelected->setEnabled(false);

        horizontalLayout->addWidget(importSelected);

        fetchCancel = new QPushButton(page_fetch);
        fetchCancel->setObjectName(QStringLiteral("fetchCancel"));

        horizontalLayout->addWidget(fetchCancel);


        verticalLayout->addLayout(horizontalLayout);

        stackedWidget->addWidget(page_fetch);
        page_editSources = new QWidget();
        page_editSources->setObjectName(QStringLiteral("page_editSources"));
        verticalLayout_2 = new QVBoxLayout(page_editSources);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_2 = new QLabel(page_editSources);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_2->addWidget(label_2);

        editSourcesText = new QTextEdit(page_editSources);
        editSourcesText->setObjectName(QStringLiteral("editSourcesText"));
        editSourcesText->setAcceptRichText(false);

        verticalLayout_2->addWidget(editSourcesText);

        editSourcesButtonBox = new QDialogButtonBox(page_editSources);
        editSourcesButtonBox->setObjectName(QStringLiteral("editSourcesButtonBox"));
        editSourcesButtonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Reset|QDialogButtonBox::Save);

        verticalLayout_2->addWidget(editSourcesButtonBox);

        stackedWidget->addWidget(page_editSources);

        gridLayout_2->addWidget(stackedWidget, 0, 0, 1, 1);

        QWidget::setTabOrder(addServer, editServer);
        QWidget::setTabOrder(editServer, deleteServer);
        QWidget::setTabOrder(deleteServer, connect);
        QWidget::setTabOrder(connect, close);

        retranslateUi(pqServerConnectDialog);
        QObject::connect(startup_type, SIGNAL(currentIndexChanged(int)), stackedWidget_2, SLOT(setCurrentIndex(int)));
        QObject::connect(close, SIGNAL(clicked()), pqServerConnectDialog, SLOT(reject()));

        stackedWidget->setCurrentIndex(4);
        connect->setDefault(true);
        type->setCurrentIndex(0);
        startup_type->setCurrentIndex(0);
        stackedWidget_2->setCurrentIndex(0);
        importSelected->setDefault(false);
        fetchCancel->setDefault(true);


        QMetaObject::connectSlotsByName(pqServerConnectDialog);
    } // setupUi

    void retranslateUi(QDialog *pqServerConnectDialog)
    {
        pqServerConnectDialog->setWindowTitle(QApplication::translate("pqServerConnectDialog", "Choose Server", Q_NULLPTR));
        addServer->setText(QApplication::translate("pqServerConnectDialog", "Add Server", Q_NULLPTR));
        editServer->setText(QApplication::translate("pqServerConnectDialog", "Edit Server", Q_NULLPTR));
        deleteServer->setText(QApplication::translate("pqServerConnectDialog", "Delete Server", Q_NULLPTR));
        load->setText(QApplication::translate("pqServerConnectDialog", "Load Servers", Q_NULLPTR));
        save->setText(QApplication::translate("pqServerConnectDialog", "Save Servers", Q_NULLPTR));
        fetchServers->setText(QApplication::translate("pqServerConnectDialog", "Fetch Servers", Q_NULLPTR));
        timeoutLabel->setText(QApplication::translate("pqServerConnectDialog", "Timeout (s) ", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        timeoutSpinBox->setToolTip(QApplication::translate("pqServerConnectDialog", "Specify the timeout in seconds to use when connecting to the server. 0 means no retry. -1 means infinite retries.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        connect->setText(QApplication::translate("pqServerConnectDialog", "Connect", Q_NULLPTR));
        close->setText(QApplication::translate("pqServerConnectDialog", "Close", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = servers->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("pqServerConnectDialog", "Configuration", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = servers->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("pqServerConnectDialog", "Server", Q_NULLPTR));
        label_6->setText(QApplication::translate("pqServerConnectDialog", "Name", Q_NULLPTR));
        label_5->setText(QApplication::translate("pqServerConnectDialog", "Server Type", Q_NULLPTR));
        type->clear();
        type->insertItems(0, QStringList()
         << QApplication::translate("pqServerConnectDialog", "Client / Server", Q_NULLPTR)
         << QApplication::translate("pqServerConnectDialog", "Client / Server (reverse connection)", Q_NULLPTR)
         << QApplication::translate("pqServerConnectDialog", "Client / Data Server / Render Server", Q_NULLPTR)
         << QApplication::translate("pqServerConnectDialog", "Client / Data Server / Render Server (reverse connection)", Q_NULLPTR)
        );
        hostLabel->setText(QApplication::translate("pqServerConnectDialog", "Host", Q_NULLPTR));
        host->setText(QApplication::translate("pqServerConnectDialog", "localhost", Q_NULLPTR));
        portLabel->setText(QApplication::translate("pqServerConnectDialog", "Port", Q_NULLPTR));
        dataServerHostLabel->setText(QApplication::translate("pqServerConnectDialog", "Data Server host", Q_NULLPTR));
        dataServerHost->setText(QApplication::translate("pqServerConnectDialog", "localhost", Q_NULLPTR));
        dataServerPortLabel->setText(QApplication::translate("pqServerConnectDialog", "Data Server port", Q_NULLPTR));
        renderServerHostLabel->setText(QApplication::translate("pqServerConnectDialog", "Render Server host", Q_NULLPTR));
        renderServerHost->setText(QApplication::translate("pqServerConnectDialog", "localhost", Q_NULLPTR));
        renderServerPortLabel->setText(QApplication::translate("pqServerConnectDialog", "Render Server port", Q_NULLPTR));
        okButton->setText(QApplication::translate("pqServerConnectDialog", "Configure", Q_NULLPTR));
        cancelButton->setText(QApplication::translate("pqServerConnectDialog", "Cancel", Q_NULLPTR));
        message->setText(QApplication::translate("pqServerConnectDialog", "Configure server foobar (cs://foobar)", Q_NULLPTR));
        secondaryMessage->setText(QApplication::translate("pqServerConnectDialog", "Please configure the startup procedure to be used when connecting to this server:", Q_NULLPTR));
        label_11->setText(QApplication::translate("pqServerConnectDialog", "Startup Type:", Q_NULLPTR));
        startup_type->clear();
        startup_type->insertItems(0, QStringList()
         << QApplication::translate("pqServerConnectDialog", "Manual", Q_NULLPTR)
         << QApplication::translate("pqServerConnectDialog", "Command", Q_NULLPTR)
        );
        label_10->setText(QApplication::translate("pqServerConnectDialog", "Manual Startup - no attempt will be made to start the server.  You must start the server manually before trying to connect.", Q_NULLPTR));
        label_7->setText(QApplication::translate("pqServerConnectDialog", "Execute an external command to start the server:", Q_NULLPTR));
        label_8->setText(QApplication::translate("pqServerConnectDialog", "After executing the startup command, wait", Q_NULLPTR));
        delay->setSuffix(QApplication::translate("pqServerConnectDialog", " seconds", Q_NULLPTR));
        label_9->setText(QApplication::translate("pqServerConnectDialog", "before connecting.", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = importServersTable->horizontalHeaderItem(0);
        ___qtablewidgetitem2->setText(QApplication::translate("pqServerConnectDialog", "Configuration Name", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = importServersTable->horizontalHeaderItem(1);
        ___qtablewidgetitem3->setText(QApplication::translate("pqServerConnectDialog", "Server", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = importServersTable->horizontalHeaderItem(2);
        ___qtablewidgetitem4->setText(QApplication::translate("pqServerConnectDialog", "Source", Q_NULLPTR));
        editSources->setText(QApplication::translate("pqServerConnectDialog", "Edit Sources", Q_NULLPTR));
        importSelected->setText(QApplication::translate("pqServerConnectDialog", "Import Selected", Q_NULLPTR));
        fetchCancel->setText(QApplication::translate("pqServerConnectDialog", "Cancel", Q_NULLPTR));
        label_2->setText(QApplication::translate("pqServerConnectDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Helvetica'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Enter list of URLs to obtain the servers configurations from, using the syntax:</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">&lt;type&gt; &lt;url&gt; &lt;userfriendly name&gt;</span></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class pqServerConnectDialog: public Ui_pqServerConnectDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQSERVERCONNECTDIALOG_H
