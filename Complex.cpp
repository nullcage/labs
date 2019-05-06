#include "Complex.h"
#include <cmath>

Complex addiction(Complex a, Complex b)
{
	Complex c;
	c.re = a.re + b.re;
	c.im = a.im + b.im;
	return c;
}

Complex subtraction(Complex a, Complex b)
{
	Complex c;
	c.re = a.re - b.re;
	c.im = a.im - b.im;
	return c;
}

Complex multiplication(Complex a, Complex b)
{
	Complex c;
	c.re = (a.re * b.re) - (a.im * b.im);
	c.im = (a.re * b.im) + (a.im * b.re);
	return c;
}

Complex division(Complex a, Complex b)
{
	Complex c;
	c.re = (a.re * b.re + a.im * b.im) / (b.re * b.re + b.im * b.im);
	c.im = (b.re * a.im - a.re * b.im) / (b.re * b.re + b.im * b.im);
	return c;
}

int module(Complex a)
{
  return pow((pow(a.re, 2)+pow(a.im, 2)),0.5);
}