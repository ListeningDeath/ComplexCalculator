#include "complex.h"

Complex::Complex()
{
    _real = 0;
    _imaginary = 0;
}

Complex::Complex(double real, double imaginary)
{
    _real = real;
    _imaginary = imaginary;
}

void Complex::SetReal(double real)
{
    _real = real;
}

double Complex::GetReal() const
{
    return _real;
}

void Complex::SetImaginary(double imaginary)
{
    _imaginary = imaginary;
}

double Complex::GetImaginary() const
{
    return _imaginary;
}

bool Complex::IsZero() const
{
    if (_real < MIN_DOUBLE_NUM && _imaginary < MIN_DOUBLE_NUM)
    {
        return true;
    }
    return false;
}
void Complex::GetConjugate(Complex* conjugateComplex) const
{
    conjugateComplex->SetReal(_real);
    conjugateComplex->SetImaginary(-_imaginary);
}

void Complex::Plus(Complex* complex)
{
    _real += complex->GetReal();
    _imaginary += complex->GetImaginary();
}

void Complex::Minus(Complex* complex)
{
    _real -= complex->GetReal();
    _imaginary -= complex->GetImaginary();
}

void Complex::Multiply(Complex* complex)
{
    _real = _real * complex->GetReal() - _imaginary * complex->GetImaginary();
    _imaginary = _real * complex->GetImaginary() + _imaginary * complex->GetReal();
}

void Complex::Divide(Complex* complex)
{
    double denominator = _real * _real + _imaginary * _imaginary;
    _real = (_real * complex->GetReal() + _imaginary * complex->GetImaginary()) / denominator;
    _imaginary = (-_real * complex->GetImaginary() + _imaginary * complex->GetReal()) / denominator;
}
