/********************************************************************************
** Form generated from reading UI file 'ComplexCalculator.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMPLEXCALCULATOR_H
#define UI_COMPLEXCALCULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ComplexCalculatorClass
{
public:
    QWidget *centralWidget;
    QLineEdit *lineEdit;
    QPushButton *btnNum1;
    QPushButton *btnNum2;
    QPushButton *btnNum3;
    QPushButton *btnNum4;
    QPushButton *btnNum5;
    QPushButton *btnNum6;
    QPushButton *btnNum7;
    QPushButton *btnNum8;
    QPushButton *btnNum9;
    QPushButton *btnSign;
    QPushButton *btnNum0;
    QPushButton *btnDot;
    QPushButton *btnPlus;
    QPushButton *btnMinus;
    QPushButton *btnMultiply;
    QPushButton *btnDivide;
    QPushButton *btnBackspace;
    QPushButton *btnImaginary;
    QPushButton *btnLB;
    QPushButton *btnRB;
    QPushButton *btnEqual;

    void setupUi(QMainWindow *ComplexCalculatorClass)
    {
        if (ComplexCalculatorClass->objectName().isEmpty())
            ComplexCalculatorClass->setObjectName(QStringLiteral("ComplexCalculatorClass"));
        ComplexCalculatorClass->resize(311, 351);
        centralWidget = new QWidget(ComplexCalculatorClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(10, 10, 291, 31));
        QFont font;
        font.setFamily(QStringLiteral("Consolas"));
        font.setPointSize(14);
        lineEdit->setFont(font);
        lineEdit->setReadOnly(true);
        btnNum1 = new QPushButton(centralWidget);
        btnNum1->setObjectName(QStringLiteral("btnNum1"));
        btnNum1->setGeometry(QRect(10, 50, 51, 51));
        btnNum2 = new QPushButton(centralWidget);
        btnNum2->setObjectName(QStringLiteral("btnNum2"));
        btnNum2->setGeometry(QRect(70, 50, 51, 51));
        btnNum3 = new QPushButton(centralWidget);
        btnNum3->setObjectName(QStringLiteral("btnNum3"));
        btnNum3->setGeometry(QRect(130, 50, 51, 51));
        btnNum4 = new QPushButton(centralWidget);
        btnNum4->setObjectName(QStringLiteral("btnNum4"));
        btnNum4->setGeometry(QRect(10, 110, 51, 51));
        btnNum5 = new QPushButton(centralWidget);
        btnNum5->setObjectName(QStringLiteral("btnNum5"));
        btnNum5->setGeometry(QRect(70, 110, 51, 51));
        btnNum6 = new QPushButton(centralWidget);
        btnNum6->setObjectName(QStringLiteral("btnNum6"));
        btnNum6->setGeometry(QRect(130, 110, 51, 51));
        btnNum7 = new QPushButton(centralWidget);
        btnNum7->setObjectName(QStringLiteral("btnNum7"));
        btnNum7->setGeometry(QRect(10, 170, 51, 51));
        btnNum8 = new QPushButton(centralWidget);
        btnNum8->setObjectName(QStringLiteral("btnNum8"));
        btnNum8->setGeometry(QRect(70, 170, 51, 51));
        btnNum9 = new QPushButton(centralWidget);
        btnNum9->setObjectName(QStringLiteral("btnNum9"));
        btnNum9->setGeometry(QRect(130, 170, 51, 51));
        btnSign = new QPushButton(centralWidget);
        btnSign->setObjectName(QStringLiteral("btnSign"));
        btnSign->setGeometry(QRect(10, 230, 51, 51));
        btnNum0 = new QPushButton(centralWidget);
        btnNum0->setObjectName(QStringLiteral("btnNum0"));
        btnNum0->setGeometry(QRect(70, 230, 51, 51));
        btnDot = new QPushButton(centralWidget);
        btnDot->setObjectName(QStringLiteral("btnDot"));
        btnDot->setGeometry(QRect(130, 230, 51, 51));
        btnPlus = new QPushButton(centralWidget);
        btnPlus->setObjectName(QStringLiteral("btnPlus"));
        btnPlus->setGeometry(QRect(190, 50, 51, 51));
        btnMinus = new QPushButton(centralWidget);
        btnMinus->setObjectName(QStringLiteral("btnMinus"));
        btnMinus->setGeometry(QRect(190, 110, 51, 51));
        btnMultiply = new QPushButton(centralWidget);
        btnMultiply->setObjectName(QStringLiteral("btnMultiply"));
        btnMultiply->setGeometry(QRect(190, 170, 51, 51));
        btnDivide = new QPushButton(centralWidget);
        btnDivide->setObjectName(QStringLiteral("btnDivide"));
        btnDivide->setGeometry(QRect(190, 230, 51, 51));
        btnBackspace = new QPushButton(centralWidget);
        btnBackspace->setObjectName(QStringLiteral("btnBackspace"));
        btnBackspace->setGeometry(QRect(250, 50, 51, 51));
        btnImaginary = new QPushButton(centralWidget);
        btnImaginary->setObjectName(QStringLiteral("btnImaginary"));
        btnImaginary->setGeometry(QRect(10, 290, 51, 51));
        btnLB = new QPushButton(centralWidget);
        btnLB->setObjectName(QStringLiteral("btnLB"));
        btnLB->setGeometry(QRect(70, 290, 51, 51));
        btnRB = new QPushButton(centralWidget);
        btnRB->setObjectName(QStringLiteral("btnRB"));
        btnRB->setGeometry(QRect(130, 290, 51, 51));
        btnEqual = new QPushButton(centralWidget);
        btnEqual->setObjectName(QStringLiteral("btnEqual"));
        btnEqual->setGeometry(QRect(190, 290, 51, 51));
        ComplexCalculatorClass->setCentralWidget(centralWidget);

        retranslateUi(ComplexCalculatorClass);

        QMetaObject::connectSlotsByName(ComplexCalculatorClass);
    } // setupUi

    void retranslateUi(QMainWindow *ComplexCalculatorClass)
    {
        ComplexCalculatorClass->setWindowTitle(QApplication::translate("ComplexCalculatorClass", "ComplexCalculator", Q_NULLPTR));
        btnNum1->setText(QApplication::translate("ComplexCalculatorClass", "1", Q_NULLPTR));
        btnNum2->setText(QApplication::translate("ComplexCalculatorClass", "2", Q_NULLPTR));
        btnNum3->setText(QApplication::translate("ComplexCalculatorClass", "3", Q_NULLPTR));
        btnNum4->setText(QApplication::translate("ComplexCalculatorClass", "4", Q_NULLPTR));
        btnNum5->setText(QApplication::translate("ComplexCalculatorClass", "5", Q_NULLPTR));
        btnNum6->setText(QApplication::translate("ComplexCalculatorClass", "6", Q_NULLPTR));
        btnNum7->setText(QApplication::translate("ComplexCalculatorClass", "7", Q_NULLPTR));
        btnNum8->setText(QApplication::translate("ComplexCalculatorClass", "8", Q_NULLPTR));
        btnNum9->setText(QApplication::translate("ComplexCalculatorClass", "9", Q_NULLPTR));
        btnSign->setText(QApplication::translate("ComplexCalculatorClass", "+/-", Q_NULLPTR));
        btnNum0->setText(QApplication::translate("ComplexCalculatorClass", "0", Q_NULLPTR));
        btnDot->setText(QApplication::translate("ComplexCalculatorClass", ".", Q_NULLPTR));
        btnPlus->setText(QApplication::translate("ComplexCalculatorClass", "+", Q_NULLPTR));
        btnMinus->setText(QApplication::translate("ComplexCalculatorClass", "-", Q_NULLPTR));
        btnMultiply->setText(QApplication::translate("ComplexCalculatorClass", "*", Q_NULLPTR));
        btnDivide->setText(QApplication::translate("ComplexCalculatorClass", "/", Q_NULLPTR));
        btnBackspace->setText(QApplication::translate("ComplexCalculatorClass", "Back", Q_NULLPTR));
        btnImaginary->setText(QApplication::translate("ComplexCalculatorClass", "i", Q_NULLPTR));
        btnLB->setText(QApplication::translate("ComplexCalculatorClass", "(", Q_NULLPTR));
        btnRB->setText(QApplication::translate("ComplexCalculatorClass", ")", Q_NULLPTR));
        btnEqual->setText(QApplication::translate("ComplexCalculatorClass", "=", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ComplexCalculatorClass: public Ui_ComplexCalculatorClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMPLEXCALCULATOR_H
