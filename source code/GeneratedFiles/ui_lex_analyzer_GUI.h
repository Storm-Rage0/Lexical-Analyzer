/********************************************************************************
** Form generated from reading UI file 'lex_analyzer_GUI.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LEX_ANALYZER_GUI_H
#define UI_LEX_ANALYZER_GUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_lex_analyzer_GUIClass
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QGroupBox *groupBox;
    QTextEdit *textEdit;
    QLabel *label;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QGroupBox *groupBox_2;
    QTextEdit *textEdit_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *lex_analyzer_GUIClass)
    {
        if (lex_analyzer_GUIClass->objectName().isEmpty())
            lex_analyzer_GUIClass->setObjectName(QString::fromUtf8("lex_analyzer_GUIClass"));
        lex_analyzer_GUIClass->resize(1131, 659);
        centralWidget = new QWidget(lex_analyzer_GUIClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(550, 480, 191, 91));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font.setPointSize(18);
        font.setBold(true);
        font.setWeight(75);
        pushButton->setFont(font);
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(80, 490, 181, 71));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\215\216\346\226\207\350\241\214\346\245\267"));
        font1.setPointSize(16);
        pushButton_2->setFont(font1);
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(30, 60, 511, 381));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font2.setPointSize(20);
        groupBox->setFont(font2);
        textEdit = new QTextEdit(groupBox);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(20, 40, 471, 331));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Lucida Console"));
        font3.setPointSize(10);
        textEdit->setFont(font3);
        textEdit->viewport()->setProperty("cursor", QVariant(QCursor(Qt::IBeamCursor)));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(131, 4, 271, 31));
        label->setFont(font3);
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(320, 480, 151, 41));
        QFont font4;
        font4.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font4.setPointSize(12);
        pushButton_3->setFont(font4);
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(320, 530, 151, 41));
        pushButton_4->setFont(font4);
        pushButton_5 = new QPushButton(centralWidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(830, 490, 201, 71));
        QFont font5;
        font5.setFamily(QString::fromUtf8("\347\255\211\347\272\277"));
        font5.setPointSize(14);
        font5.setBold(true);
        font5.setWeight(75);
        pushButton_5->setFont(font5);
        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(600, 60, 491, 381));
        QFont font6;
        font6.setFamily(QString::fromUtf8("\345\215\216\346\226\207\344\273\277\345\256\213"));
        font6.setPointSize(16);
        font6.setItalic(true);
        groupBox_2->setFont(font6);
        textEdit_2 = new QTextEdit(groupBox_2);
        textEdit_2->setObjectName(QString::fromUtf8("textEdit_2"));
        textEdit_2->setGeometry(QRect(20, 40, 461, 331));
        QFont font7;
        font7.setFamily(QString::fromUtf8("\346\226\260\345\256\213\344\275\223"));
        font7.setPointSize(10);
        font7.setItalic(false);
        textEdit_2->setFont(font7);
        textEdit_2->setReadOnly(true);
        lex_analyzer_GUIClass->setCentralWidget(centralWidget);
        groupBox_2->raise();
        groupBox->raise();
        pushButton->raise();
        pushButton_2->raise();
        pushButton_3->raise();
        pushButton_4->raise();
        pushButton_5->raise();
        menuBar = new QMenuBar(lex_analyzer_GUIClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1131, 26));
        lex_analyzer_GUIClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(lex_analyzer_GUIClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        lex_analyzer_GUIClass->addToolBar(Qt::TopToolBarArea, mainToolBar);

        retranslateUi(lex_analyzer_GUIClass);
        QObject::connect(textEdit, SIGNAL(textChanged()), lex_analyzer_GUIClass, SLOT(auto_save()));
        QObject::connect(pushButton_3, SIGNAL(clicked()), lex_analyzer_GUIClass, SLOT(saveas_source_to_file()));
        QObject::connect(pushButton_4, SIGNAL(clicked()), lex_analyzer_GUIClass, SLOT(save_source_to_file()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), lex_analyzer_GUIClass, SLOT(open_source_file()));
        QObject::connect(pushButton, SIGNAL(clicked()), lex_analyzer_GUIClass, SLOT(lex_analyze()));
        QObject::connect(pushButton_5, SIGNAL(clicked()), lex_analyzer_GUIClass, SLOT(savelex_to_file()));

        QMetaObject::connectSlotsByName(lex_analyzer_GUIClass);
    } // setupUi

    void retranslateUi(QMainWindow *lex_analyzer_GUIClass)
    {
        lex_analyzer_GUIClass->setWindowTitle(QCoreApplication::translate("lex_analyzer_GUIClass", "lex_analyzer_GUI", nullptr));
        pushButton->setText(QCoreApplication::translate("lex_analyzer_GUIClass", "\350\257\215\346\263\225\345\210\206\346\236\220", nullptr));
        pushButton_2->setText(QCoreApplication::translate("lex_analyzer_GUIClass", "\346\211\223\345\274\200\346\272\220\346\226\207\344\273\266", nullptr));
        groupBox->setTitle(QCoreApplication::translate("lex_analyzer_GUIClass", "\346\272\220\344\273\243\347\240\201", nullptr));
        label->setText(QString());
        pushButton_3->setText(QCoreApplication::translate("lex_analyzer_GUIClass", "\346\272\220\344\273\243\347\240\201\345\217\246\345\255\230", nullptr));
        pushButton_4->setText(QCoreApplication::translate("lex_analyzer_GUIClass", "\346\272\220\344\273\243\347\240\201\344\277\235\345\255\230", nullptr));
        pushButton_5->setText(QCoreApplication::translate("lex_analyzer_GUIClass", "\345\210\206\346\236\220\347\273\223\346\236\234\345\217\246\345\255\230", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("lex_analyzer_GUIClass", "\350\257\215\346\263\225\345\215\225\345\205\203\345\272\217\345\210\227", nullptr));
    } // retranslateUi

};

namespace Ui {
    class lex_analyzer_GUIClass: public Ui_lex_analyzer_GUIClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LEX_ANALYZER_GUI_H
