/********************************************************************************
** Form generated from reading UI file 'pqFindDataSelectionDisplayFrame.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQFINDDATASELECTIONDISPLAYFRAME_H
#define UI_PQFINDDATASELECTIONDISPLAYFRAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>
#include "pqColorChooserButton.h"

QT_BEGIN_NAMESPACE

class Ui_FindDataSelectionDisplayFrame
{
public:
    QHBoxLayout *horizontalLayout;
    pqColorChooserButton *selectionColor;
    pqColorChooserButton *interactiveSelectionColor;
    QToolButton *labelPropertiesInteractiveSelection;
    QPushButton *cellLabelsButton;
    QPushButton *pointLabelsButton;
    QToolButton *showFrustumButton;
    QToolButton *labelPropertiesSelection;

    void setupUi(QWidget *FindDataSelectionDisplayFrame)
    {
        if (FindDataSelectionDisplayFrame->objectName().isEmpty())
            FindDataSelectionDisplayFrame->setObjectName(QStringLiteral("FindDataSelectionDisplayFrame"));
        FindDataSelectionDisplayFrame->resize(773, 53);
        horizontalLayout = new QHBoxLayout(FindDataSelectionDisplayFrame);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        selectionColor = new pqColorChooserButton(FindDataSelectionDisplayFrame);
        selectionColor->setObjectName(QStringLiteral("selectionColor"));
        selectionColor->setEnabled(true);

        horizontalLayout->addWidget(selectionColor);

        interactiveSelectionColor = new pqColorChooserButton(FindDataSelectionDisplayFrame);
        interactiveSelectionColor->setObjectName(QStringLiteral("interactiveSelectionColor"));
        interactiveSelectionColor->setEnabled(true);

        horizontalLayout->addWidget(interactiveSelectionColor);

        labelPropertiesInteractiveSelection = new QToolButton(FindDataSelectionDisplayFrame);
        labelPropertiesInteractiveSelection->setObjectName(QStringLiteral("labelPropertiesInteractiveSelection"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/pqWidgets/Icons/pqAdvanced26.png"), QSize(), QIcon::Normal, QIcon::Off);
        labelPropertiesInteractiveSelection->setIcon(icon);
        labelPropertiesInteractiveSelection->setToolButtonStyle(Qt::ToolButtonIconOnly);

        horizontalLayout->addWidget(labelPropertiesInteractiveSelection);

        cellLabelsButton = new QPushButton(FindDataSelectionDisplayFrame);
        cellLabelsButton->setObjectName(QStringLiteral("cellLabelsButton"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/pqWidgets/Icons/pqCellData16.png"), QSize(), QIcon::Normal, QIcon::Off);
        cellLabelsButton->setIcon(icon1);

        horizontalLayout->addWidget(cellLabelsButton);

        pointLabelsButton = new QPushButton(FindDataSelectionDisplayFrame);
        pointLabelsButton->setObjectName(QStringLiteral("pointLabelsButton"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/pqWidgets/Icons/pqPointData16.png"), QSize(), QIcon::Normal, QIcon::Off);
        pointLabelsButton->setIcon(icon2);

        horizontalLayout->addWidget(pointLabelsButton);

        showFrustumButton = new QToolButton(FindDataSelectionDisplayFrame);
        showFrustumButton->setObjectName(QStringLiteral("showFrustumButton"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/pqWidgets/Icons/pqFrustumSelectionCell24.png"), QSize(), QIcon::Normal, QIcon::Off);
        showFrustumButton->setIcon(icon3);
        showFrustumButton->setCheckable(true);

        horizontalLayout->addWidget(showFrustumButton);

        labelPropertiesSelection = new QToolButton(FindDataSelectionDisplayFrame);
        labelPropertiesSelection->setObjectName(QStringLiteral("labelPropertiesSelection"));
        labelPropertiesSelection->setIcon(icon);
        labelPropertiesSelection->setToolButtonStyle(Qt::ToolButtonIconOnly);

        horizontalLayout->addWidget(labelPropertiesSelection);


        retranslateUi(FindDataSelectionDisplayFrame);

        QMetaObject::connectSlotsByName(FindDataSelectionDisplayFrame);
    } // setupUi

    void retranslateUi(QWidget *FindDataSelectionDisplayFrame)
    {
        FindDataSelectionDisplayFrame->setWindowTitle(QApplication::translate("FindDataSelectionDisplayFrame", "Form", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        selectionColor->setToolTip(QApplication::translate("FindDataSelectionDisplayFrame", "<p>Set the color to use to show selected elements</p>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        selectionColor->setText(QApplication::translate("FindDataSelectionDisplayFrame", "Selection Color", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        interactiveSelectionColor->setToolTip(QApplication::translate("FindDataSelectionDisplayFrame", "<p>Set the color to use to show selected elements</p>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        interactiveSelectionColor->setText(QApplication::translate("FindDataSelectionDisplayFrame", "Interactive Selection Color", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        labelPropertiesInteractiveSelection->setToolTip(QApplication::translate("FindDataSelectionDisplayFrame", "Edit interactive selection label properties", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        cellLabelsButton->setToolTip(QApplication::translate("FindDataSelectionDisplayFrame", "<p>Set the array to label selected cells with</p>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        cellLabelsButton->setText(QApplication::translate("FindDataSelectionDisplayFrame", "Cell Labels", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        pointLabelsButton->setToolTip(QApplication::translate("FindDataSelectionDisplayFrame", "<p>Set the array to label to selected points with</p>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pointLabelsButton->setText(QApplication::translate("FindDataSelectionDisplayFrame", "Point Labels", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        showFrustumButton->setToolTip(QApplication::translate("FindDataSelectionDisplayFrame", "<p>For frustum based selections, show the frustum used to select the elements</p>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        showFrustumButton->setText(QApplication::translate("FindDataSelectionDisplayFrame", "Show frustum", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        labelPropertiesSelection->setToolTip(QApplication::translate("FindDataSelectionDisplayFrame", "Edit selection label properties", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class FindDataSelectionDisplayFrame: public Ui_FindDataSelectionDisplayFrame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQFINDDATASELECTIONDISPLAYFRAME_H
