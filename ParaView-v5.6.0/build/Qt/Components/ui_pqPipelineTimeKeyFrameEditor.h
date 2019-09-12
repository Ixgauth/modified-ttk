/********************************************************************************
** Form generated from reading UI file 'pqPipelineTimeKeyFrameEditor.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQPIPELINETIMEKEYFRAMEEDITOR_H
#define UI_PQPIPELINETIMEKEYFRAMEEDITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_pqPipelineTimeKeyFrameEditor
{
public:
    QGridLayout *gridLayout;
    QLineEdit *constantTime;
    QSpacerItem *spacerItem;
    QRadioButton *variableRadio;
    QDialogButtonBox *buttonBox;
    QSpacerItem *spacerItem1;
    QRadioButton *constantRadio;
    QWidget *container;
    QRadioButton *noneRadio;

    void setupUi(QDialog *pqPipelineTimeKeyFrameEditor)
    {
        if (pqPipelineTimeKeyFrameEditor->objectName().isEmpty())
            pqPipelineTimeKeyFrameEditor->setObjectName(QStringLiteral("pqPipelineTimeKeyFrameEditor"));
        pqPipelineTimeKeyFrameEditor->resize(419, 356);
        gridLayout = new QGridLayout(pqPipelineTimeKeyFrameEditor);
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        constantTime = new QLineEdit(pqPipelineTimeKeyFrameEditor);
        constantTime->setObjectName(QStringLiteral("constantTime"));

        gridLayout->addWidget(constantTime, 1, 1, 1, 1);

        spacerItem = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem, 3, 0, 1, 1);

        variableRadio = new QRadioButton(pqPipelineTimeKeyFrameEditor);
        variableRadio->setObjectName(QStringLiteral("variableRadio"));

        gridLayout->addWidget(variableRadio, 2, 0, 1, 1);

        buttonBox = new QDialogButtonBox(pqPipelineTimeKeyFrameEditor);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::NoButton|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 4, 0, 1, 3);

        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem1, 1, 2, 1, 1);

        constantRadio = new QRadioButton(pqPipelineTimeKeyFrameEditor);
        constantRadio->setObjectName(QStringLiteral("constantRadio"));

        gridLayout->addWidget(constantRadio, 1, 0, 1, 1);

        container = new QWidget(pqPipelineTimeKeyFrameEditor);
        container->setObjectName(QStringLiteral("container"));
        QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(5));
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(container->sizePolicy().hasHeightForWidth());
        container->setSizePolicy(sizePolicy);

        gridLayout->addWidget(container, 2, 1, 2, 2);

        noneRadio = new QRadioButton(pqPipelineTimeKeyFrameEditor);
        noneRadio->setObjectName(QStringLiteral("noneRadio"));

        gridLayout->addWidget(noneRadio, 0, 0, 1, 2);

        QWidget::setTabOrder(noneRadio, constantRadio);
        QWidget::setTabOrder(constantRadio, constantTime);
        QWidget::setTabOrder(constantTime, variableRadio);
        QWidget::setTabOrder(variableRadio, buttonBox);

        retranslateUi(pqPipelineTimeKeyFrameEditor);
        QObject::connect(buttonBox, SIGNAL(accepted()), pqPipelineTimeKeyFrameEditor, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), pqPipelineTimeKeyFrameEditor, SLOT(reject()));

        QMetaObject::connectSlotsByName(pqPipelineTimeKeyFrameEditor);
    } // setupUi

    void retranslateUi(QDialog *pqPipelineTimeKeyFrameEditor)
    {
        pqPipelineTimeKeyFrameEditor->setWindowTitle(QApplication::translate("pqPipelineTimeKeyFrameEditor", "Dialog", Q_NULLPTR));
        variableRadio->setText(QApplication::translate("pqPipelineTimeKeyFrameEditor", "Variable Time:", Q_NULLPTR));
        constantRadio->setText(QApplication::translate("pqPipelineTimeKeyFrameEditor", "Constant Time:", Q_NULLPTR));
        noneRadio->setText(QApplication::translate("pqPipelineTimeKeyFrameEditor", "Animation Time", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class pqPipelineTimeKeyFrameEditor: public Ui_pqPipelineTimeKeyFrameEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQPIPELINETIMEKEYFRAMEEDITOR_H
