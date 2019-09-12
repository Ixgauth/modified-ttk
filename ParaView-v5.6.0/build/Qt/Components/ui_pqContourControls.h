/********************************************************************************
** Form generated from reading UI file 'pqContourControls.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQCONTOURCONTROLS_H
#define UI_PQCONTOURCONTROLS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_pqContourControls
{
public:
    QGridLayout *gridLayout;
    QCheckBox *GenerateTriangles;
    QCheckBox *ComputeScalars;
    QCheckBox *ComputeGradients;
    QCheckBox *ComputeNormals;
    QComboBox *SelectInputScalars;
    QLabel *label_7;

    void setupUi(QWidget *pqContourControls)
    {
        if (pqContourControls->objectName().isEmpty())
            pqContourControls->setObjectName(QStringLiteral("pqContourControls"));
        pqContourControls->resize(207, 114);
        gridLayout = new QGridLayout(pqContourControls);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(6);
        gridLayout->setVerticalSpacing(6);
        gridLayout->setContentsMargins(9, 9, 9, 9);
        GenerateTriangles = new QCheckBox(pqContourControls);
        GenerateTriangles->setObjectName(QStringLiteral("GenerateTriangles"));

        gridLayout->addWidget(GenerateTriangles, 4, 0, 1, 2);

        ComputeScalars = new QCheckBox(pqContourControls);
        ComputeScalars->setObjectName(QStringLiteral("ComputeScalars"));

        gridLayout->addWidget(ComputeScalars, 3, 0, 1, 2);

        ComputeGradients = new QCheckBox(pqContourControls);
        ComputeGradients->setObjectName(QStringLiteral("ComputeGradients"));

        gridLayout->addWidget(ComputeGradients, 2, 0, 1, 2);

        ComputeNormals = new QCheckBox(pqContourControls);
        ComputeNormals->setObjectName(QStringLiteral("ComputeNormals"));

        gridLayout->addWidget(ComputeNormals, 1, 0, 1, 2);

        SelectInputScalars = new QComboBox(pqContourControls);
        SelectInputScalars->setObjectName(QStringLiteral("SelectInputScalars"));

        gridLayout->addWidget(SelectInputScalars, 0, 1, 1, 1);

        label_7 = new QLabel(pqContourControls);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout->addWidget(label_7, 0, 0, 1, 1);

        QWidget::setTabOrder(SelectInputScalars, ComputeNormals);
        QWidget::setTabOrder(ComputeNormals, ComputeGradients);
        QWidget::setTabOrder(ComputeGradients, ComputeScalars);
        QWidget::setTabOrder(ComputeScalars, GenerateTriangles);

        retranslateUi(pqContourControls);

        QMetaObject::connectSlotsByName(pqContourControls);
    } // setupUi

    void retranslateUi(QWidget *pqContourControls)
    {
        pqContourControls->setWindowTitle(QApplication::translate("pqContourControls", "Form", Q_NULLPTR));
        GenerateTriangles->setText(QApplication::translate("pqContourControls", "Generate Triangles", Q_NULLPTR));
        ComputeScalars->setText(QApplication::translate("pqContourControls", "Compute Scalars", Q_NULLPTR));
        ComputeGradients->setText(QApplication::translate("pqContourControls", "Compute Gradients", Q_NULLPTR));
        ComputeNormals->setText(QApplication::translate("pqContourControls", "Compute Normals", Q_NULLPTR));
        label_7->setText(QApplication::translate("pqContourControls", "Contour By", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class pqContourControls: public Ui_pqContourControls {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQCONTOURCONTROLS_H
