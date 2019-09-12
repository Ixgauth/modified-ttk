/********************************************************************************
** Form generated from reading UI file 'pqSierraToolsRichTextDocs.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQSIERRATOOLSRICHTEXTDOCS_H
#define UI_PQSIERRATOOLSRICHTEXTDOCS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_pqSierraPlotToolsRichTextDocs
{
public:
    QTextEdit *globalVarsVsTimeTextEdit;
    QTextEdit *nodeVarsVsTimeTextEdit;
    QTextEdit *elementVarsVsTimeTextEdit;

    void setupUi(QWidget *pqSierraPlotToolsRichTextDocs)
    {
        if (pqSierraPlotToolsRichTextDocs->objectName().isEmpty())
            pqSierraPlotToolsRichTextDocs->setObjectName(QStringLiteral("pqSierraPlotToolsRichTextDocs"));
        pqSierraPlotToolsRichTextDocs->resize(633, 1245);
        globalVarsVsTimeTextEdit = new QTextEdit(pqSierraPlotToolsRichTextDocs);
        globalVarsVsTimeTextEdit->setObjectName(QStringLiteral("globalVarsVsTimeTextEdit"));
        globalVarsVsTimeTextEdit->setGeometry(QRect(30, 10, 561, 191));
        nodeVarsVsTimeTextEdit = new QTextEdit(pqSierraPlotToolsRichTextDocs);
        nodeVarsVsTimeTextEdit->setObjectName(QStringLiteral("nodeVarsVsTimeTextEdit"));
        nodeVarsVsTimeTextEdit->setGeometry(QRect(30, 250, 561, 301));
        elementVarsVsTimeTextEdit = new QTextEdit(pqSierraPlotToolsRichTextDocs);
        elementVarsVsTimeTextEdit->setObjectName(QStringLiteral("elementVarsVsTimeTextEdit"));
        elementVarsVsTimeTextEdit->setGeometry(QRect(20, 660, 561, 301));

        retranslateUi(pqSierraPlotToolsRichTextDocs);

        QMetaObject::connectSlotsByName(pqSierraPlotToolsRichTextDocs);
    } // setupUi

    void retranslateUi(QWidget *pqSierraPlotToolsRichTextDocs)
    {
        pqSierraPlotToolsRichTextDocs->setWindowTitle(QApplication::translate("pqSierraPlotToolsRichTextDocs", "Form", Q_NULLPTR));
        globalVarsVsTimeTextEdit->setHtml(QApplication::translate("pqSierraPlotToolsRichTextDocs", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:9pt; font-weight:600; color:#006ca2;\">Global Variables Vs. Time</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt; font-weight:600;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Select the variable of interest. The min/max ranges will be displayed.</span></p>\n"
"<p style=\"-qt-paragraph-type"
                        ":empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Clicking the OK button will create a Plot Global Variables Over Time filter and apply it to the selected variables.</span></p></body></html>", Q_NULLPTR));
        nodeVarsVsTimeTextEdit->setHtml(QApplication::translate("pqSierraPlotToolsRichTextDocs", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:9pt; font-weight:600; color:#006ca2;\">Nodal Variables Vs. Time</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Select the variable of interest. The min/max ranges will be displayed.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top"
                        ":0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Enter the node number or numbers in the \"select node #\" text edit area.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">The OK button will be </span><span style=\" font-size:8pt; font-weight:600; color:#818181;\">grayed</span><span style=\" font-size:8pt;\"> out until at least one node # is entered.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-"
                        "size:8pt;\">Multiple nodes can be entered using the , (comma) operator or the - (dash) operator for ranges.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">For example, these are valid ranges:</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">  7                 (select ID # 7)</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">  3,22,23       (select IDs # 3, 22, and 23)</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-ind"
                        "ent:0px;\"><span style=\" font-size:8pt;\">  10-20,221   (select IDs # 10 through 20 inclusive, and 221)</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Clicking the </span><span style=\" font-size:8pt; font-weight:600;\">OK</span><span style=\" font-size:8pt;\"> button will create a Plot Selection Over Time filter and apply it to the selected variables.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; font-style:italic;\">Note: as of Dec 2009 "
                        "only one node number can be plotted at a time, but using the ParaView Object Inspector you can select which one to plot.</span></p></body></html>", Q_NULLPTR));
        elementVarsVsTimeTextEdit->setHtml(QApplication::translate("pqSierraPlotToolsRichTextDocs", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:9pt; font-weight:600; color:#006ca2;\">Element Variables Vs. Time</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Select the variable of interest. The min/max ranges will be displayed.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-t"
                        "op:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Enter the element number or numbers in the \"select element #\" text edit area.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">The OK button will be </span><span style=\" font-size:8pt; font-weight:600; color:#818181;\">grayed</span><span style=\" font-size:8pt;\"> out until at least one element # is entered.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span sty"
                        "le=\" font-size:8pt;\">Multiple elements can be entered using the , (comma) operator or the - (dash) operator for ranges.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">For example, these are valid ranges:</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">  7                   (select ID # 7)</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">  3,22,23        (select IDs # 3, 22, and 23)</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-i"
                        "ndent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">  10-20,221    (select IDs # 10 through 20 inclusive, and 221)</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Clicking the </span><span style=\" font-size:8pt; font-weight:600;\">OK</span><span style=\" font-size:8pt;\"> button will create a Plot Selection Over Time filter and apply it to the selected variables.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; font-style:italic;\">Not"
                        "e: as of Dec 2009 only one element number can be plotted at a time, but using the ParaView Object Inspector you can select which one to plot.</span></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class pqSierraPlotToolsRichTextDocs: public Ui_pqSierraPlotToolsRichTextDocs {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQSIERRATOOLSRICHTEXTDOCS_H
