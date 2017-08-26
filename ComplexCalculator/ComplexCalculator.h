#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_ComplexCalculator.h"

class ComplexCalculator : public QMainWindow
{
	Q_OBJECT

public:
	ComplexCalculator(QWidget *parent = Q_NULLPTR);

private:
	Ui::ComplexCalculatorClass ui;
};
