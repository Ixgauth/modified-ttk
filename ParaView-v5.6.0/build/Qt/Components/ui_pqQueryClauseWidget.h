/********************************************************************************
** Form generated from reading UI file 'pqQueryClauseWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQQUERYCLAUSEWIDGET_H
#define UI_PQQUERYCLAUSEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_pqQueryClauseWidget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QComboBox *criteria;
    QComboBox *condition;
    QStackedWidget *valueStackedWidget;
    QWidget *singleValue;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *value;
    QWidget *range;
    QHBoxLayout *horizontalLayout_5;
    QLineEdit *value_min;
    QLabel *label_3;
    QLineEdit *value_max;
    QWidget *location;
    QHBoxLayout *horizontalLayout_7;
    QLineEdit *value_x;
    QLineEdit *value_y;
    QLineEdit *value_z;
    QWidget *multiBlock;
    QHBoxLayout *horizontalLayout_8;
    QLineEdit *value_block;
    QToolButton *showCompositeTree;
    QWidget *emptyValue;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_empty_value;
    QWidget *locationWithTolerance;
    QGridLayout *gridLayout;
    QLineEdit *location_y;
    QLineEdit *location_x;
    QLineEdit *location_z;
    QLineEdit *location_tolerance;
    QLabel *label;
    QFrame *line;

    void setupUi(QWidget *pqQueryClauseWidget)
    {
        if (pqQueryClauseWidget->objectName().isEmpty())
            pqQueryClauseWidget->setObjectName(QStringLiteral("pqQueryClauseWidget"));
        pqQueryClauseWidget->resize(444, 62);
        verticalLayout = new QVBoxLayout(pqQueryClauseWidget);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        criteria = new QComboBox(pqQueryClauseWidget);
        criteria->setObjectName(QStringLiteral("criteria"));
        criteria->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        horizontalLayout->addWidget(criteria);

        condition = new QComboBox(pqQueryClauseWidget);
        condition->setObjectName(QStringLiteral("condition"));
        condition->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        horizontalLayout->addWidget(condition);

        valueStackedWidget = new QStackedWidget(pqQueryClauseWidget);
        valueStackedWidget->setObjectName(QStringLiteral("valueStackedWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(valueStackedWidget->sizePolicy().hasHeightForWidth());
        valueStackedWidget->setSizePolicy(sizePolicy);
        singleValue = new QWidget();
        singleValue->setObjectName(QStringLiteral("singleValue"));
        horizontalLayout_4 = new QHBoxLayout(singleValue);
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        value = new QLineEdit(singleValue);
        value->setObjectName(QStringLiteral("value"));

        horizontalLayout_4->addWidget(value);

        valueStackedWidget->addWidget(singleValue);
        range = new QWidget();
        range->setObjectName(QStringLiteral("range"));
        horizontalLayout_5 = new QHBoxLayout(range);
        horizontalLayout_5->setSpacing(3);
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        value_min = new QLineEdit(range);
        value_min->setObjectName(QStringLiteral("value_min"));

        horizontalLayout_5->addWidget(value_min);

        label_3 = new QLabel(range);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_5->addWidget(label_3);

        value_max = new QLineEdit(range);
        value_max->setObjectName(QStringLiteral("value_max"));

        horizontalLayout_5->addWidget(value_max);

        valueStackedWidget->addWidget(range);
        location = new QWidget();
        location->setObjectName(QStringLiteral("location"));
        horizontalLayout_7 = new QHBoxLayout(location);
        horizontalLayout_7->setSpacing(3);
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        value_x = new QLineEdit(location);
        value_x->setObjectName(QStringLiteral("value_x"));

        horizontalLayout_7->addWidget(value_x);

        value_y = new QLineEdit(location);
        value_y->setObjectName(QStringLiteral("value_y"));

        horizontalLayout_7->addWidget(value_y);

        value_z = new QLineEdit(location);
        value_z->setObjectName(QStringLiteral("value_z"));

        horizontalLayout_7->addWidget(value_z);

        valueStackedWidget->addWidget(location);
        multiBlock = new QWidget();
        multiBlock->setObjectName(QStringLiteral("multiBlock"));
        horizontalLayout_8 = new QHBoxLayout(multiBlock);
        horizontalLayout_8->setSpacing(3);
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        value_block = new QLineEdit(multiBlock);
        value_block->setObjectName(QStringLiteral("value_block"));

        horizontalLayout_8->addWidget(value_block);

        showCompositeTree = new QToolButton(multiBlock);
        showCompositeTree->setObjectName(QStringLiteral("showCompositeTree"));

        horizontalLayout_8->addWidget(showCompositeTree);

        valueStackedWidget->addWidget(multiBlock);
        emptyValue = new QWidget();
        emptyValue->setObjectName(QStringLiteral("emptyValue"));
        horizontalLayout_9 = new QHBoxLayout(emptyValue);
        horizontalLayout_9->setSpacing(3);
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_empty_value = new QLabel(emptyValue);
        label_empty_value->setObjectName(QStringLiteral("label_empty_value"));

        horizontalLayout_9->addWidget(label_empty_value);

        valueStackedWidget->addWidget(emptyValue);
        locationWithTolerance = new QWidget();
        locationWithTolerance->setObjectName(QStringLiteral("locationWithTolerance"));
        gridLayout = new QGridLayout(locationWithTolerance);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        location_y = new QLineEdit(locationWithTolerance);
        location_y->setObjectName(QStringLiteral("location_y"));

        gridLayout->addWidget(location_y, 0, 2, 1, 1);

        location_x = new QLineEdit(locationWithTolerance);
        location_x->setObjectName(QStringLiteral("location_x"));

        gridLayout->addWidget(location_x, 0, 1, 1, 1);

        location_z = new QLineEdit(locationWithTolerance);
        location_z->setObjectName(QStringLiteral("location_z"));

        gridLayout->addWidget(location_z, 0, 3, 1, 1);

        location_tolerance = new QLineEdit(locationWithTolerance);
        location_tolerance->setObjectName(QStringLiteral("location_tolerance"));

        gridLayout->addWidget(location_tolerance, 1, 3, 1, 1);

        label = new QLabel(locationWithTolerance);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 1, 1, 1, 2);

        valueStackedWidget->addWidget(locationWithTolerance);

        horizontalLayout->addWidget(valueStackedWidget);

        horizontalLayout->setStretch(2, 1);

        verticalLayout->addLayout(horizontalLayout);

        line = new QFrame(pqQueryClauseWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        QWidget::setTabOrder(criteria, condition);
        QWidget::setTabOrder(condition, location_x);
        QWidget::setTabOrder(location_x, location_y);
        QWidget::setTabOrder(location_y, location_z);
        QWidget::setTabOrder(location_z, location_tolerance);
        QWidget::setTabOrder(location_tolerance, value_x);
        QWidget::setTabOrder(value_x, value_y);
        QWidget::setTabOrder(value_y, value_z);
        QWidget::setTabOrder(value_z, value_min);
        QWidget::setTabOrder(value_min, value_max);
        QWidget::setTabOrder(value_max, value);
        QWidget::setTabOrder(value, value_block);
        QWidget::setTabOrder(value_block, showCompositeTree);

        retranslateUi(pqQueryClauseWidget);

        valueStackedWidget->setCurrentIndex(5);


        QMetaObject::connectSlotsByName(pqQueryClauseWidget);
    } // setupUi

    void retranslateUi(QWidget *pqQueryClauseWidget)
    {
        pqQueryClauseWidget->setWindowTitle(QApplication::translate("pqQueryClauseWidget", "Form", Q_NULLPTR));
        condition->clear();
        condition->insertItems(0, QStringList()
         << QApplication::translate("pqQueryClauseWidget", "is", Q_NULLPTR)
         << QApplication::translate("pqQueryClauseWidget", "is between", Q_NULLPTR)
         << QApplication::translate("pqQueryClauseWidget", "is one of", Q_NULLPTR)
         << QApplication::translate("pqQueryClauseWidget", "is >=", Q_NULLPTR)
         << QApplication::translate("pqQueryClauseWidget", "is <=", Q_NULLPTR)
        );
        label_3->setText(QApplication::translate("pqQueryClauseWidget", "and", Q_NULLPTR));
        showCompositeTree->setText(QApplication::translate("pqQueryClauseWidget", "...", Q_NULLPTR));
        label_empty_value->setText(QString());
        location_tolerance->setText(QApplication::translate("pqQueryClauseWidget", "0.1", Q_NULLPTR));
        location_tolerance->setPlaceholderText(QString());
        label->setText(QApplication::translate("pqQueryClauseWidget", "but within epsilon", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class pqQueryClauseWidget: public Ui_pqQueryClauseWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQQUERYCLAUSEWIDGET_H
