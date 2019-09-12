/********************************************************************************
** Form generated from reading UI file 'pqSplinePropertyWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQSPLINEPROPERTYWIDGET_H
#define UI_PQSPLINEPROPERTYWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "pqTreeWidget.h"

QT_BEGIN_NAMESPACE

class Ui_SplinePropertyWidget
{
public:
    QGridLayout *gridLayout;
    QCheckBox *show3DWidget;
    pqTreeWidget *handlePositions;
    QVBoxLayout *vboxLayout;
    QSpacerItem *spacer;
    QToolButton *addPoint;
    QToolButton *removePoints;
    QCheckBox *closed;
    QLabel *label;

    void setupUi(QWidget *SplinePropertyWidget)
    {
        if (SplinePropertyWidget->objectName().isEmpty())
            SplinePropertyWidget->setObjectName(QStringLiteral("SplinePropertyWidget"));
        SplinePropertyWidget->resize(283, 353);
        gridLayout = new QGridLayout(SplinePropertyWidget);
        gridLayout->setSpacing(2);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        show3DWidget = new QCheckBox(SplinePropertyWidget);
        show3DWidget->setObjectName(QStringLiteral("show3DWidget"));
        show3DWidget->setChecked(true);

        gridLayout->addWidget(show3DWidget, 0, 0, 1, 1);

        handlePositions = new pqTreeWidget(SplinePropertyWidget);
        handlePositions->setObjectName(QStringLiteral("handlePositions"));
        handlePositions->setRootIsDecorated(false);
        handlePositions->header()->setStretchLastSection(true);

        gridLayout->addWidget(handlePositions, 1, 0, 1, 2);

        vboxLayout = new QVBoxLayout();
        vboxLayout->setSpacing(2);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        spacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacer);

        addPoint = new QToolButton(SplinePropertyWidget);
        addPoint->setObjectName(QStringLiteral("addPoint"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/QtWidgets/Icons/pqPlus16.png"), QSize(), QIcon::Normal, QIcon::Off);
        addPoint->setIcon(icon);

        vboxLayout->addWidget(addPoint);

        removePoints = new QToolButton(SplinePropertyWidget);
        removePoints->setObjectName(QStringLiteral("removePoints"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/QtWidgets/Icons/pqDelete16.png"), QSize(), QIcon::Normal, QIcon::Off);
        removePoints->setIcon(icon1);

        vboxLayout->addWidget(removePoints);


        gridLayout->addLayout(vboxLayout, 1, 2, 1, 1);

        closed = new QCheckBox(SplinePropertyWidget);
        closed->setObjectName(QStringLiteral("closed"));

        gridLayout->addWidget(closed, 3, 0, 1, 2);

        label = new QLabel(SplinePropertyWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 2, 0, 1, 3);


        retranslateUi(SplinePropertyWidget);

        QMetaObject::connectSlotsByName(SplinePropertyWidget);
    } // setupUi

    void retranslateUi(QWidget *SplinePropertyWidget)
    {
        SplinePropertyWidget->setWindowTitle(QApplication::translate("SplinePropertyWidget", "Form", Q_NULLPTR));
        show3DWidget->setText(QApplication::translate("SplinePropertyWidget", "Show Widget", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem = handlePositions->headerItem();
        ___qtreewidgetitem->setText(2, QApplication::translate("SplinePropertyWidget", "Z", Q_NULLPTR));
        ___qtreewidgetitem->setText(1, QApplication::translate("SplinePropertyWidget", "Y", Q_NULLPTR));
        ___qtreewidgetitem->setText(0, QApplication::translate("SplinePropertyWidget", "X", Q_NULLPTR));
        addPoint->setText(QApplication::translate("SplinePropertyWidget", "...", Q_NULLPTR));
        removePoints->setText(QApplication::translate("SplinePropertyWidget", "...", Q_NULLPTR));
        closed->setText(QApplication::translate("SplinePropertyWidget", "Closed Spline", Q_NULLPTR));
        label->setText(QApplication::translate("SplinePropertyWidget", "<html><head/><body><p>Drag control points to change point locations.<br/>Use Ctrl + Left Click to insert a new point on the line at mouse position.<br/>Use Shift + Left Click to remove the point at mouse position.<br/>Use Alt + Left Click to add a new point anywhere at mouse position<br/>at the end of the polyline or at the beginning if the first point is selected.<br/></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SplinePropertyWidget: public Ui_SplinePropertyWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQSPLINEPROPERTYWIDGET_H
