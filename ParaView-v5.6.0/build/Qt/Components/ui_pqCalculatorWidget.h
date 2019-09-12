/********************************************************************************
** Form generated from reading UI file 'pqCalculatorWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQCALCULATORWIDGET_H
#define UI_PQCALCULATORWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "pqLineEdit.h"

QT_BEGIN_NAMESPACE

class Ui_CalculatorWidget
{
public:
    QVBoxLayout *verticalLayout_7;
    pqLineEdit *Function;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QToolButton *Clear;
    QToolButton *sin;
    QToolButton *asin;
    QToolButton *sinh;
    QToolButton *v1v2;
    QVBoxLayout *verticalLayout_2;
    QToolButton *LeftParentheses;
    QToolButton *cos;
    QToolButton *acos;
    QToolButton *cosh;
    QToolButton *mag;
    QVBoxLayout *verticalLayout_3;
    QToolButton *RightParentheses;
    QToolButton *tan;
    QToolButton *atan;
    QToolButton *tanh;
    QToolButton *norm;
    QVBoxLayout *verticalLayout_4;
    QToolButton *iHat;
    QToolButton *abs;
    QToolButton *ceil;
    QToolButton *xy;
    QToolButton *ln;
    QVBoxLayout *verticalLayout_5;
    QToolButton *jHat;
    QToolButton *sqrt;
    QToolButton *floor;
    QToolButton *exp;
    QToolButton *log10;
    QVBoxLayout *verticalLayout_6;
    QToolButton *kHat;
    QToolButton *Plus;
    QToolButton *Minus;
    QToolButton *Multiply;
    QToolButton *Divide;
    QHBoxLayout *horizontalLayout;
    QPushButton *Scalars;
    QPushButton *Vectors;

    void setupUi(QWidget *CalculatorWidget)
    {
        if (CalculatorWidget->objectName().isEmpty())
            CalculatorWidget->setObjectName(QStringLiteral("CalculatorWidget"));
        CalculatorWidget->resize(339, 209);
        verticalLayout_7 = new QVBoxLayout(CalculatorWidget);
        verticalLayout_7->setSpacing(0);
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        Function = new pqLineEdit(CalculatorWidget);
        Function->setObjectName(QStringLiteral("Function"));
        Function->setProperty("resetCursorPositionOnEditingFinished", QVariant(false));

        verticalLayout_7->addWidget(Function);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        Clear = new QToolButton(CalculatorWidget);
        Clear->setObjectName(QStringLiteral("Clear"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Clear->sizePolicy().hasHeightForWidth());
        Clear->setSizePolicy(sizePolicy);
        Clear->setFocusPolicy(Qt::NoFocus);

        verticalLayout->addWidget(Clear);

        sin = new QToolButton(CalculatorWidget);
        sin->setObjectName(QStringLiteral("sin"));
        sizePolicy.setHeightForWidth(sin->sizePolicy().hasHeightForWidth());
        sin->setSizePolicy(sizePolicy);
        sin->setFocusPolicy(Qt::NoFocus);

        verticalLayout->addWidget(sin);

        asin = new QToolButton(CalculatorWidget);
        asin->setObjectName(QStringLiteral("asin"));
        sizePolicy.setHeightForWidth(asin->sizePolicy().hasHeightForWidth());
        asin->setSizePolicy(sizePolicy);
        asin->setFocusPolicy(Qt::NoFocus);

        verticalLayout->addWidget(asin);

        sinh = new QToolButton(CalculatorWidget);
        sinh->setObjectName(QStringLiteral("sinh"));
        sizePolicy.setHeightForWidth(sinh->sizePolicy().hasHeightForWidth());
        sinh->setSizePolicy(sizePolicy);
        sinh->setFocusPolicy(Qt::NoFocus);

        verticalLayout->addWidget(sinh);

        v1v2 = new QToolButton(CalculatorWidget);
        v1v2->setObjectName(QStringLiteral("v1v2"));
        sizePolicy.setHeightForWidth(v1v2->sizePolicy().hasHeightForWidth());
        v1v2->setSizePolicy(sizePolicy);
        v1v2->setFocusPolicy(Qt::NoFocus);
        v1v2->setAutoRaise(false);

        verticalLayout->addWidget(v1v2);


        horizontalLayout_2->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        LeftParentheses = new QToolButton(CalculatorWidget);
        LeftParentheses->setObjectName(QStringLiteral("LeftParentheses"));
        sizePolicy.setHeightForWidth(LeftParentheses->sizePolicy().hasHeightForWidth());
        LeftParentheses->setSizePolicy(sizePolicy);
        LeftParentheses->setFocusPolicy(Qt::NoFocus);

        verticalLayout_2->addWidget(LeftParentheses);

        cos = new QToolButton(CalculatorWidget);
        cos->setObjectName(QStringLiteral("cos"));
        sizePolicy.setHeightForWidth(cos->sizePolicy().hasHeightForWidth());
        cos->setSizePolicy(sizePolicy);
        cos->setFocusPolicy(Qt::NoFocus);

        verticalLayout_2->addWidget(cos);

        acos = new QToolButton(CalculatorWidget);
        acos->setObjectName(QStringLiteral("acos"));
        sizePolicy.setHeightForWidth(acos->sizePolicy().hasHeightForWidth());
        acos->setSizePolicy(sizePolicy);
        acos->setFocusPolicy(Qt::NoFocus);

        verticalLayout_2->addWidget(acos);

        cosh = new QToolButton(CalculatorWidget);
        cosh->setObjectName(QStringLiteral("cosh"));
        sizePolicy.setHeightForWidth(cosh->sizePolicy().hasHeightForWidth());
        cosh->setSizePolicy(sizePolicy);
        cosh->setFocusPolicy(Qt::NoFocus);

        verticalLayout_2->addWidget(cosh);

        mag = new QToolButton(CalculatorWidget);
        mag->setObjectName(QStringLiteral("mag"));
        sizePolicy.setHeightForWidth(mag->sizePolicy().hasHeightForWidth());
        mag->setSizePolicy(sizePolicy);
        mag->setFocusPolicy(Qt::NoFocus);

        verticalLayout_2->addWidget(mag);


        horizontalLayout_2->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        RightParentheses = new QToolButton(CalculatorWidget);
        RightParentheses->setObjectName(QStringLiteral("RightParentheses"));
        sizePolicy.setHeightForWidth(RightParentheses->sizePolicy().hasHeightForWidth());
        RightParentheses->setSizePolicy(sizePolicy);
        RightParentheses->setFocusPolicy(Qt::NoFocus);

        verticalLayout_3->addWidget(RightParentheses);

        tan = new QToolButton(CalculatorWidget);
        tan->setObjectName(QStringLiteral("tan"));
        sizePolicy.setHeightForWidth(tan->sizePolicy().hasHeightForWidth());
        tan->setSizePolicy(sizePolicy);
        tan->setFocusPolicy(Qt::NoFocus);

        verticalLayout_3->addWidget(tan);

        atan = new QToolButton(CalculatorWidget);
        atan->setObjectName(QStringLiteral("atan"));
        sizePolicy.setHeightForWidth(atan->sizePolicy().hasHeightForWidth());
        atan->setSizePolicy(sizePolicy);
        atan->setFocusPolicy(Qt::NoFocus);

        verticalLayout_3->addWidget(atan);

        tanh = new QToolButton(CalculatorWidget);
        tanh->setObjectName(QStringLiteral("tanh"));
        sizePolicy.setHeightForWidth(tanh->sizePolicy().hasHeightForWidth());
        tanh->setSizePolicy(sizePolicy);
        tanh->setFocusPolicy(Qt::NoFocus);

        verticalLayout_3->addWidget(tanh);

        norm = new QToolButton(CalculatorWidget);
        norm->setObjectName(QStringLiteral("norm"));
        sizePolicy.setHeightForWidth(norm->sizePolicy().hasHeightForWidth());
        norm->setSizePolicy(sizePolicy);
        norm->setFocusPolicy(Qt::NoFocus);

        verticalLayout_3->addWidget(norm);


        horizontalLayout_2->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        iHat = new QToolButton(CalculatorWidget);
        iHat->setObjectName(QStringLiteral("iHat"));
        sizePolicy.setHeightForWidth(iHat->sizePolicy().hasHeightForWidth());
        iHat->setSizePolicy(sizePolicy);
        iHat->setFocusPolicy(Qt::NoFocus);

        verticalLayout_4->addWidget(iHat);

        abs = new QToolButton(CalculatorWidget);
        abs->setObjectName(QStringLiteral("abs"));
        sizePolicy.setHeightForWidth(abs->sizePolicy().hasHeightForWidth());
        abs->setSizePolicy(sizePolicy);
        abs->setFocusPolicy(Qt::NoFocus);

        verticalLayout_4->addWidget(abs);

        ceil = new QToolButton(CalculatorWidget);
        ceil->setObjectName(QStringLiteral("ceil"));
        sizePolicy.setHeightForWidth(ceil->sizePolicy().hasHeightForWidth());
        ceil->setSizePolicy(sizePolicy);
        ceil->setFocusPolicy(Qt::NoFocus);

        verticalLayout_4->addWidget(ceil);

        xy = new QToolButton(CalculatorWidget);
        xy->setObjectName(QStringLiteral("xy"));
        sizePolicy.setHeightForWidth(xy->sizePolicy().hasHeightForWidth());
        xy->setSizePolicy(sizePolicy);
        xy->setFocusPolicy(Qt::NoFocus);

        verticalLayout_4->addWidget(xy);

        ln = new QToolButton(CalculatorWidget);
        ln->setObjectName(QStringLiteral("ln"));
        sizePolicy.setHeightForWidth(ln->sizePolicy().hasHeightForWidth());
        ln->setSizePolicy(sizePolicy);
        ln->setFocusPolicy(Qt::NoFocus);

        verticalLayout_4->addWidget(ln);


        horizontalLayout_2->addLayout(verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        jHat = new QToolButton(CalculatorWidget);
        jHat->setObjectName(QStringLiteral("jHat"));
        sizePolicy.setHeightForWidth(jHat->sizePolicy().hasHeightForWidth());
        jHat->setSizePolicy(sizePolicy);
        jHat->setFocusPolicy(Qt::NoFocus);

        verticalLayout_5->addWidget(jHat);

        sqrt = new QToolButton(CalculatorWidget);
        sqrt->setObjectName(QStringLiteral("sqrt"));
        sizePolicy.setHeightForWidth(sqrt->sizePolicy().hasHeightForWidth());
        sqrt->setSizePolicy(sizePolicy);
        sqrt->setFocusPolicy(Qt::NoFocus);

        verticalLayout_5->addWidget(sqrt);

        floor = new QToolButton(CalculatorWidget);
        floor->setObjectName(QStringLiteral("floor"));
        sizePolicy.setHeightForWidth(floor->sizePolicy().hasHeightForWidth());
        floor->setSizePolicy(sizePolicy);
        floor->setFocusPolicy(Qt::NoFocus);

        verticalLayout_5->addWidget(floor);

        exp = new QToolButton(CalculatorWidget);
        exp->setObjectName(QStringLiteral("exp"));
        sizePolicy.setHeightForWidth(exp->sizePolicy().hasHeightForWidth());
        exp->setSizePolicy(sizePolicy);
        exp->setFocusPolicy(Qt::NoFocus);

        verticalLayout_5->addWidget(exp);

        log10 = new QToolButton(CalculatorWidget);
        log10->setObjectName(QStringLiteral("log10"));
        sizePolicy.setHeightForWidth(log10->sizePolicy().hasHeightForWidth());
        log10->setSizePolicy(sizePolicy);
        log10->setFocusPolicy(Qt::NoFocus);

        verticalLayout_5->addWidget(log10);


        horizontalLayout_2->addLayout(verticalLayout_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        kHat = new QToolButton(CalculatorWidget);
        kHat->setObjectName(QStringLiteral("kHat"));
        sizePolicy.setHeightForWidth(kHat->sizePolicy().hasHeightForWidth());
        kHat->setSizePolicy(sizePolicy);
        kHat->setFocusPolicy(Qt::NoFocus);

        verticalLayout_6->addWidget(kHat);

        Plus = new QToolButton(CalculatorWidget);
        Plus->setObjectName(QStringLiteral("Plus"));
        sizePolicy.setHeightForWidth(Plus->sizePolicy().hasHeightForWidth());
        Plus->setSizePolicy(sizePolicy);
        Plus->setFocusPolicy(Qt::NoFocus);

        verticalLayout_6->addWidget(Plus);

        Minus = new QToolButton(CalculatorWidget);
        Minus->setObjectName(QStringLiteral("Minus"));
        sizePolicy.setHeightForWidth(Minus->sizePolicy().hasHeightForWidth());
        Minus->setSizePolicy(sizePolicy);
        Minus->setFocusPolicy(Qt::NoFocus);

        verticalLayout_6->addWidget(Minus);

        Multiply = new QToolButton(CalculatorWidget);
        Multiply->setObjectName(QStringLiteral("Multiply"));
        sizePolicy.setHeightForWidth(Multiply->sizePolicy().hasHeightForWidth());
        Multiply->setSizePolicy(sizePolicy);
        Multiply->setFocusPolicy(Qt::NoFocus);

        verticalLayout_6->addWidget(Multiply);

        Divide = new QToolButton(CalculatorWidget);
        Divide->setObjectName(QStringLiteral("Divide"));
        sizePolicy.setHeightForWidth(Divide->sizePolicy().hasHeightForWidth());
        Divide->setSizePolicy(sizePolicy);
        Divide->setFocusPolicy(Qt::NoFocus);

        verticalLayout_6->addWidget(Divide);


        horizontalLayout_2->addLayout(verticalLayout_6);


        verticalLayout_7->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        Scalars = new QPushButton(CalculatorWidget);
        Scalars->setObjectName(QStringLiteral("Scalars"));
        Scalars->setFocusPolicy(Qt::NoFocus);

        horizontalLayout->addWidget(Scalars);

        Vectors = new QPushButton(CalculatorWidget);
        Vectors->setObjectName(QStringLiteral("Vectors"));
        Vectors->setFocusPolicy(Qt::NoFocus);

        horizontalLayout->addWidget(Vectors);


        verticalLayout_7->addLayout(horizontalLayout);

        verticalLayout_7->setStretch(1, 1);

        retranslateUi(CalculatorWidget);
        QObject::connect(Clear, SIGNAL(pressed()), Function, SLOT(clear()));

        QMetaObject::connectSlotsByName(CalculatorWidget);
    } // setupUi

    void retranslateUi(QWidget *CalculatorWidget)
    {
        CalculatorWidget->setWindowTitle(QApplication::translate("CalculatorWidget", "Form", Q_NULLPTR));
        Clear->setText(QApplication::translate("CalculatorWidget", "Clear", Q_NULLPTR));
        sin->setText(QApplication::translate("CalculatorWidget", "sin", Q_NULLPTR));
        asin->setText(QApplication::translate("CalculatorWidget", "asin", Q_NULLPTR));
        sinh->setText(QApplication::translate("CalculatorWidget", "sinh", Q_NULLPTR));
        v1v2->setText(QApplication::translate("CalculatorWidget", "v1.v2", Q_NULLPTR));
        LeftParentheses->setText(QApplication::translate("CalculatorWidget", "(", Q_NULLPTR));
        cos->setText(QApplication::translate("CalculatorWidget", "cos", Q_NULLPTR));
        acos->setText(QApplication::translate("CalculatorWidget", "acos", Q_NULLPTR));
        cosh->setText(QApplication::translate("CalculatorWidget", "cosh", Q_NULLPTR));
        mag->setText(QApplication::translate("CalculatorWidget", "mag", Q_NULLPTR));
        RightParentheses->setText(QApplication::translate("CalculatorWidget", ")", Q_NULLPTR));
        tan->setText(QApplication::translate("CalculatorWidget", "tan", Q_NULLPTR));
        atan->setText(QApplication::translate("CalculatorWidget", "atan", Q_NULLPTR));
        tanh->setText(QApplication::translate("CalculatorWidget", "tanh", Q_NULLPTR));
        norm->setText(QApplication::translate("CalculatorWidget", "norm", Q_NULLPTR));
        iHat->setText(QApplication::translate("CalculatorWidget", "iHat", Q_NULLPTR));
        abs->setText(QApplication::translate("CalculatorWidget", "abs", Q_NULLPTR));
        ceil->setText(QApplication::translate("CalculatorWidget", "ceil", Q_NULLPTR));
        xy->setText(QApplication::translate("CalculatorWidget", "x^y", Q_NULLPTR));
        ln->setText(QApplication::translate("CalculatorWidget", "ln", Q_NULLPTR));
        jHat->setText(QApplication::translate("CalculatorWidget", "jHat", Q_NULLPTR));
        sqrt->setText(QApplication::translate("CalculatorWidget", "sqrt", Q_NULLPTR));
        floor->setText(QApplication::translate("CalculatorWidget", "floor", Q_NULLPTR));
        exp->setText(QApplication::translate("CalculatorWidget", "exp", Q_NULLPTR));
        log10->setText(QApplication::translate("CalculatorWidget", "log10", Q_NULLPTR));
        kHat->setText(QApplication::translate("CalculatorWidget", "kHat", Q_NULLPTR));
        Plus->setText(QApplication::translate("CalculatorWidget", "+", Q_NULLPTR));
        Minus->setText(QApplication::translate("CalculatorWidget", "-", Q_NULLPTR));
        Multiply->setText(QApplication::translate("CalculatorWidget", "*", Q_NULLPTR));
        Divide->setText(QApplication::translate("CalculatorWidget", "/", Q_NULLPTR));
        Scalars->setText(QApplication::translate("CalculatorWidget", "Scalars", Q_NULLPTR));
        Vectors->setText(QApplication::translate("CalculatorWidget", "Vectors", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CalculatorWidget: public Ui_CalculatorWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQCALCULATORWIDGET_H
