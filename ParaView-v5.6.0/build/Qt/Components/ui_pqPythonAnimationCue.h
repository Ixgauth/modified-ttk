/********************************************************************************
** Form generated from reading UI file 'pqPythonAnimationCue.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQPYTHONANIMATIONCUE_H
#define UI_PQPYTHONANIMATIONCUE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_PythonAnimationCue
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTextEdit *script;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *PythonAnimationCue)
    {
        if (PythonAnimationCue->objectName().isEmpty())
            PythonAnimationCue->setObjectName(QStringLiteral("PythonAnimationCue"));
        PythonAnimationCue->resize(367, 446);
        verticalLayout = new QVBoxLayout(PythonAnimationCue);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(PythonAnimationCue);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        script = new QTextEdit(PythonAnimationCue);
        script->setObjectName(QStringLiteral("script"));

        verticalLayout->addWidget(script);

        buttonBox = new QDialogButtonBox(PythonAnimationCue);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(PythonAnimationCue);
        QObject::connect(buttonBox, SIGNAL(accepted()), PythonAnimationCue, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), PythonAnimationCue, SLOT(reject()));

        QMetaObject::connectSlotsByName(PythonAnimationCue);
    } // setupUi

    void retranslateUi(QDialog *PythonAnimationCue)
    {
        PythonAnimationCue->setWindowTitle(QApplication::translate("PythonAnimationCue", "Edit Python Animation Track", Q_NULLPTR));
        label->setText(QApplication::translate("PythonAnimationCue", "Script:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class PythonAnimationCue: public Ui_PythonAnimationCue {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQPYTHONANIMATIONCUE_H
