#ifndef EXPRESSION_H
#define EXPRESSION_H

#include <stack>
#include <qstring>

using namespace std;

class Expression
{
private:
    QString _expressionStr; // string to store expression
	stack<double> _num; // stack to store numbers
    stack<double> _operator;    // stack to store operators
public:
    Expression();
    void Plus();
    void Minus();
    void Multiply();
    void Divide();
    void LB();
    void RB();
    void AddSymbol(QChar);
};

#endif // EXPRESSION_H
