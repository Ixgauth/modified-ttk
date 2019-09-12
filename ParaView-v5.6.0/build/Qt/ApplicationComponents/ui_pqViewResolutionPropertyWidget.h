/********************************************************************************
** Form generated from reading UI file 'pqViewResolutionPropertyWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQVIEWRESOLUTIONPROPERTYWIDGET_H
#define UI_PQVIEWRESOLUTIONPROPERTYWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>
#include "pqHighlightableToolButton.h"
#include "pqLineEdit.h"
#include "pqScaleByButton.h"

QT_BEGIN_NAMESPACE

class Ui_ViewResolutionPropertyWidget
{
public:
    QHBoxLayout *horizontalLayout;
    pqLineEdit *width;
    QLabel *label;
    pqLineEdit *height;
    pqScaleByButton *scaleBy;
    QToolButton *lockAspectRatio;
    pqHighlightableToolButton *reset;

    void setupUi(QWidget *ViewResolutionPropertyWidget)
    {
        if (ViewResolutionPropertyWidget->objectName().isEmpty())
            ViewResolutionPropertyWidget->setObjectName(QStringLiteral("ViewResolutionPropertyWidget"));
        ViewResolutionPropertyWidget->resize(277, 27);
        horizontalLayout = new QHBoxLayout(ViewResolutionPropertyWidget);
        horizontalLayout->setSpacing(2);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        width = new pqLineEdit(ViewResolutionPropertyWidget);
        width->setObjectName(QStringLiteral("width"));

        horizontalLayout->addWidget(width);

        label = new QLabel(ViewResolutionPropertyWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        height = new pqLineEdit(ViewResolutionPropertyWidget);
        height->setObjectName(QStringLiteral("height"));

        horizontalLayout->addWidget(height);

        scaleBy = new pqScaleByButton(ViewResolutionPropertyWidget);
        scaleBy->setObjectName(QStringLiteral("scaleBy"));

        horizontalLayout->addWidget(scaleBy);

        lockAspectRatio = new QToolButton(ViewResolutionPropertyWidget);
        lockAspectRatio->setObjectName(QStringLiteral("lockAspectRatio"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/pqWidgets/Icons/pqLock24.png"), QSize(), QIcon::Normal, QIcon::Off);
        lockAspectRatio->setIcon(icon);
        lockAspectRatio->setCheckable(true);
        lockAspectRatio->setChecked(false);

        horizontalLayout->addWidget(lockAspectRatio);

        reset = new pqHighlightableToolButton(ViewResolutionPropertyWidget);
        reset->setObjectName(QStringLiteral("reset"));

        horizontalLayout->addWidget(reset);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(2, 1);

        retranslateUi(ViewResolutionPropertyWidget);

        QMetaObject::connectSlotsByName(ViewResolutionPropertyWidget);
    } // setupUi

    void retranslateUi(QWidget *ViewResolutionPropertyWidget)
    {
        ViewResolutionPropertyWidget->setWindowTitle(QApplication::translate("ViewResolutionPropertyWidget", "Form", Q_NULLPTR));
        width->setPlaceholderText(QApplication::translate("ViewResolutionPropertyWidget", "width", Q_NULLPTR));
        label->setText(QApplication::translate("ViewResolutionPropertyWidget", "x", Q_NULLPTR));
        height->setPlaceholderText(QApplication::translate("ViewResolutionPropertyWidget", "height", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        lockAspectRatio->setToolTip(QApplication::translate("ViewResolutionPropertyWidget", "Lock aspect ratio", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        lockAspectRatio->setText(QString());
#ifndef QT_NO_TOOLTIP
        reset->setToolTip(QApplication::translate("ViewResolutionPropertyWidget", "Reset to default based on current values", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        reset->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ViewResolutionPropertyWidget: public Ui_ViewResolutionPropertyWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQVIEWRESOLUTIONPROPERTYWIDGET_H
