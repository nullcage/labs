#ifndef COMPLEX_H
#define COMPLEX_H

struct Complex
{
	double re;
	double im;
};

Complex addiction(Complex a, Complex b);
Complex subtraction(Complex a, Complex b);
Complex multiplication(Complex a, Complex b);
Complex division(Complex a, Complex b);
int module(Complex a);

#endif