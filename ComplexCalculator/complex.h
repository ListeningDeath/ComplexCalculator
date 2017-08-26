#ifndef COMPLEX_H
#define COMPLEX_H

#define MIN_DOUBLE_NUM 1E-6


class Complex
{
private:
    double _real, _imaginary;
public:
    Complex();
    Complex(double, double);
    void SetReal(double);
    double GetReal() const;
    void SetImaginary(double);
    double GetImaginary() const;
    bool IsZero() const;
    void GetConjugate(Complex*) const;
    void Plus(Complex*);
    void Minus(Complex*);
    void Multiply(Complex*);
    void Divide(Complex*);
};

#endif // COMPLEX_H
