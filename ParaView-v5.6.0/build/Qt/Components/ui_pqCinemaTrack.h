/********************************************************************************
** Form generated from reading UI file 'pqCinemaTrack.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQCINEMATRACK_H
#define UI_PQCINEMATRACK_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CinemaTrack
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;

    void setupUi(QWidget *CinemaTrack)
    {
        if (CinemaTrack->objectName().isEmpty())
            CinemaTrack->setObjectName(QStringLiteral("CinemaTrack"));
        CinemaTrack->resize(316, 65);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(CinemaTrack->sizePolicy().hasHeightForWidth());
        CinemaTrack->setSizePolicy(sizePolicy);
        CinemaTrack->setMinimumSize(QSize(0, 0));
        verticalLayout_2 = new QVBoxLayout(CinemaTrack);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label = new QLabel(CinemaTrack);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label);


        verticalLayout_2->addLayout(horizontalLayout_2);


        retranslateUi(CinemaTrack);

        QMetaObject::connectSlotsByName(CinemaTrack);
    } // setupUi

    void retranslateUi(QWidget *CinemaTrack)
    {
        CinemaTrack->setWindowTitle(QApplication::translate("CinemaTrack", "Form", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        CinemaTrack->setToolTip(QApplication::translate("CinemaTrack", "Specify values that viewer can change here. Empty for not changeable.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("CinemaTrack", "TextLabel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CinemaTrack: public Ui_CinemaTrack {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQCINEMATRACK_H
