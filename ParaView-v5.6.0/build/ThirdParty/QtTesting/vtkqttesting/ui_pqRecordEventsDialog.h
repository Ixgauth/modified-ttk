/********************************************************************************
** Form generated from reading UI file 'pqRecordEventsDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQRECORDEVENTSDIALOG_H
#define UI_PQRECORDEVENTSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_pqRecordEventsDialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QTabWidget *tabWidget;
    QWidget *lastEvent;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *eventWidgetLabel;
    QLineEdit *eventWidgetEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *eventArgumentLabel;
    QLineEdit *eventArgumentEdit;
    QHBoxLayout *horizontalLayout_3;
    QLabel *eventCommandLabel;
    QLineEdit *eventCommandEdit;
    QWidget *addComment;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_4;
    QLabel *commentLabel;
    QTextEdit *commentTextEdit;
    QHBoxLayout *horizontalLayout_4;
    QCheckBox *blockingCheckBox;
    QSpacerItem *horizontalSpacer;
    QPushButton *commentAddButton;
    QFrame *line;
    QHBoxLayout *hboxLayout;
    QCheckBox *continuousFlush;
    QCheckBox *recordInteractionTimings;
    QHBoxLayout *hboxLayout1;
    QLCDNumber *nbEvents;
    QLabel *nbEventsLabel;
    QSpacerItem *spacerItem;
    QPushButton *checkButton;
    QPushButton *recordPauseButton;
    QPushButton *stopButton;

    void setupUi(QDialog *pqRecordEventsDialog)
    {
        if (pqRecordEventsDialog->objectName().isEmpty())
            pqRecordEventsDialog->setObjectName(QStringLiteral("pqRecordEventsDialog"));
        pqRecordEventsDialog->resize(393, 256);
        verticalLayout_3 = new QVBoxLayout(pqRecordEventsDialog);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        tabWidget = new QTabWidget(pqRecordEventsDialog);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setElideMode(Qt::ElideNone);
        tabWidget->setUsesScrollButtons(false);
        tabWidget->setDocumentMode(true);
        lastEvent = new QWidget();
        lastEvent->setObjectName(QStringLiteral("lastEvent"));
        verticalLayout = new QVBoxLayout(lastEvent);
        verticalLayout->setSpacing(2);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(-1, -1, -1, 2);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        eventWidgetLabel = new QLabel(lastEvent);
        eventWidgetLabel->setObjectName(QStringLiteral("eventWidgetLabel"));

        horizontalLayout->addWidget(eventWidgetLabel);

        eventWidgetEdit = new QLineEdit(lastEvent);
        eventWidgetEdit->setObjectName(QStringLiteral("eventWidgetEdit"));
        eventWidgetEdit->setEnabled(true);
        eventWidgetEdit->setFrame(false);
        eventWidgetEdit->setReadOnly(true);

        horizontalLayout->addWidget(eventWidgetEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        eventArgumentLabel = new QLabel(lastEvent);
        eventArgumentLabel->setObjectName(QStringLiteral("eventArgumentLabel"));
        eventArgumentLabel->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(eventArgumentLabel->sizePolicy().hasHeightForWidth());
        eventArgumentLabel->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(eventArgumentLabel);

        eventArgumentEdit = new QLineEdit(lastEvent);
        eventArgumentEdit->setObjectName(QStringLiteral("eventArgumentEdit"));
        eventArgumentEdit->setEnabled(true);
        eventArgumentEdit->setFrame(false);
        eventArgumentEdit->setReadOnly(true);

        horizontalLayout_2->addWidget(eventArgumentEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        eventCommandLabel = new QLabel(lastEvent);
        eventCommandLabel->setObjectName(QStringLiteral("eventCommandLabel"));

        horizontalLayout_3->addWidget(eventCommandLabel);

        eventCommandEdit = new QLineEdit(lastEvent);
        eventCommandEdit->setObjectName(QStringLiteral("eventCommandEdit"));
        eventCommandEdit->setEnabled(true);
        eventCommandEdit->setFrame(false);
        eventCommandEdit->setReadOnly(true);

        horizontalLayout_3->addWidget(eventCommandEdit);


        verticalLayout->addLayout(horizontalLayout_3);

        QIcon icon;
        icon.addFile(QStringLiteral(":/Icons/info.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(lastEvent, icon, QString());
        addComment = new QWidget();
        addComment->setObjectName(QStringLiteral("addComment"));
        horizontalLayout_5 = new QHBoxLayout(addComment);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        commentLabel = new QLabel(addComment);
        commentLabel->setObjectName(QStringLiteral("commentLabel"));

        verticalLayout_4->addWidget(commentLabel);

        commentTextEdit = new QTextEdit(addComment);
        commentTextEdit->setObjectName(QStringLiteral("commentTextEdit"));
        sizePolicy1.setHeightForWidth(commentTextEdit->sizePolicy().hasHeightForWidth());
        commentTextEdit->setSizePolicy(sizePolicy1);
        commentTextEdit->setMaximumSize(QSize(16777215, 80));

        verticalLayout_4->addWidget(commentTextEdit);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        blockingCheckBox = new QCheckBox(addComment);
        blockingCheckBox->setObjectName(QStringLiteral("blockingCheckBox"));

        horizontalLayout_4->addWidget(blockingCheckBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        commentAddButton = new QPushButton(addComment);
        commentAddButton->setObjectName(QStringLiteral("commentAddButton"));
        sizePolicy1.setHeightForWidth(commentAddButton->sizePolicy().hasHeightForWidth());
        commentAddButton->setSizePolicy(sizePolicy1);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Icons/plus.png"), QSize(), QIcon::Normal, QIcon::Off);
        commentAddButton->setIcon(icon1);

        horizontalLayout_4->addWidget(commentAddButton);


        verticalLayout_4->addLayout(horizontalLayout_4);


        horizontalLayout_5->addLayout(verticalLayout_4);

        tabWidget->addTab(addComment, icon1, QString());

        verticalLayout_3->addWidget(tabWidget);

        line = new QFrame(pqRecordEventsDialog);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line);

        hboxLayout = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        hboxLayout->setSizeConstraint(QLayout::SetMinimumSize);
        continuousFlush = new QCheckBox(pqRecordEventsDialog);
        continuousFlush->setObjectName(QStringLiteral("continuousFlush"));

        hboxLayout->addWidget(continuousFlush);

        recordInteractionTimings = new QCheckBox(pqRecordEventsDialog);
        recordInteractionTimings->setObjectName(QStringLiteral("recordInteractionTimings"));

        hboxLayout->addWidget(recordInteractionTimings);


        verticalLayout_3->addLayout(hboxLayout);

        hboxLayout1 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout1->setSpacing(6);
#endif
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        hboxLayout1->setObjectName(QStringLiteral("hboxLayout1"));
        hboxLayout1->setSizeConstraint(QLayout::SetMinimumSize);
        nbEvents = new QLCDNumber(pqRecordEventsDialog);
        nbEvents->setObjectName(QStringLiteral("nbEvents"));
        nbEvents->setSmallDecimalPoint(false);
        nbEvents->setDigitCount(5);

        hboxLayout1->addWidget(nbEvents);

        nbEventsLabel = new QLabel(pqRecordEventsDialog);
        nbEventsLabel->setObjectName(QStringLiteral("nbEventsLabel"));

        hboxLayout1->addWidget(nbEventsLabel);

        spacerItem = new QSpacerItem(133, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem);

        checkButton = new QPushButton(pqRecordEventsDialog);
        checkButton->setObjectName(QStringLiteral("checkButton"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Icons/check.png"), QSize(), QIcon::Normal, QIcon::Off);
        checkButton->setIcon(icon2);
        checkButton->setCheckable(true);

        hboxLayout1->addWidget(checkButton);

        recordPauseButton = new QPushButton(pqRecordEventsDialog);
        recordPauseButton->setObjectName(QStringLiteral("recordPauseButton"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/Icons/record.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon3.addFile(QStringLiteral(":/Icons/pause.png"), QSize(), QIcon::Normal, QIcon::On);
        recordPauseButton->setIcon(icon3);
        recordPauseButton->setCheckable(true);

        hboxLayout1->addWidget(recordPauseButton);

        stopButton = new QPushButton(pqRecordEventsDialog);
        stopButton->setObjectName(QStringLiteral("stopButton"));
        sizePolicy1.setHeightForWidth(stopButton->sizePolicy().hasHeightForWidth());
        stopButton->setSizePolicy(sizePolicy1);
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/Icons/playback-stop.png"), QSize(), QIcon::Normal, QIcon::Off);
        stopButton->setIcon(icon4);

        hboxLayout1->addWidget(stopButton);


        verticalLayout_3->addLayout(hboxLayout1);


        retranslateUi(pqRecordEventsDialog);
        QObject::connect(stopButton, SIGNAL(clicked()), pqRecordEventsDialog, SLOT(accept()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(pqRecordEventsDialog);
    } // setupUi

    void retranslateUi(QDialog *pqRecordEventsDialog)
    {
        pqRecordEventsDialog->setWindowTitle(QApplication::translate("pqRecordEventsDialog", "Dialog", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        eventWidgetLabel->setToolTip(QApplication::translate("pqRecordEventsDialog", "Last widget recorded", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        eventWidgetLabel->setText(QApplication::translate("pqRecordEventsDialog", "Widget :", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        eventArgumentLabel->setToolTip(QApplication::translate("pqRecordEventsDialog", "Last argument recorded", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        eventArgumentLabel->setText(QApplication::translate("pqRecordEventsDialog", "Argument :", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        eventCommandLabel->setToolTip(QApplication::translate("pqRecordEventsDialog", "Last command recorded / property checked", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        eventCommandLabel->setText(QApplication::translate("pqRecordEventsDialog", "Command/Property :", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(lastEvent), QApplication::translate("pqRecordEventsDialog", "Last event", Q_NULLPTR));
        commentLabel->setText(QApplication::translate("pqRecordEventsDialog", "Add your custom comment :", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        commentTextEdit->setToolTip(QApplication::translate("pqRecordEventsDialog", "Write the comment that you want to add", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        blockingCheckBox->setToolTip(QApplication::translate("pqRecordEventsDialog", "Add option block to you comment", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        blockingCheckBox->setText(QApplication::translate("pqRecordEventsDialog", "Blocking", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        commentAddButton->setToolTip(QApplication::translate("pqRecordEventsDialog", "Add your comment", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        commentAddButton->setText(QApplication::translate("pqRecordEventsDialog", "Add to macro", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(addComment), QApplication::translate("pqRecordEventsDialog", "Add comment", Q_NULLPTR));
        continuousFlush->setText(QApplication::translate("pqRecordEventsDialog", "Continuous Flush", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        continuousFlush->setToolTip(QApplication::translate("pqRecordEventsDialog", "Write events to file as soon as they are recorded", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        recordInteractionTimings->setText(QApplication::translate("pqRecordEventsDialog", "Record Interaction Timings", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        recordInteractionTimings->setToolTip(QApplication::translate("pqRecordEventsDialog", "When activated, each pause between interactions will be recorded as a pause event, with the correct timing", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        nbEvents->setToolTip(QApplication::translate("pqRecordEventsDialog", "numbers of events recorded", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        nbEventsLabel->setText(QApplication::translate("pqRecordEventsDialog", "Events recorded", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        checkButton->setToolTip(QApplication::translate("pqRecordEventsDialog", "Check default property of a widget instead of recording event", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        checkButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        recordPauseButton->setToolTip(QApplication::translate("pqRecordEventsDialog", "Start/Pause record", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        recordPauseButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        stopButton->setToolTip(QApplication::translate("pqRecordEventsDialog", "Stop record", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        stopButton->setText(QApplication::translate("pqRecordEventsDialog", "Stop Recording", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class pqRecordEventsDialog: public Ui_pqRecordEventsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQRECORDEVENTSDIALOG_H
