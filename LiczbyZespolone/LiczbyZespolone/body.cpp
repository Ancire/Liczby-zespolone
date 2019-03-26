#include "header.h"

using namespace std;

Real::Real()
{
	int a = (rand() % 21) - 10;
	x = a;
}

Real::Real(double a)
{
	x = a;
}
Real::Real(const Real &real)
{
	x = real.x;
}
void Real::print()
{
	cout << x;
}

Real Real::dodawanie(Real a)
{
	Real z;
	z = x + a.x;
	return z;
}
Real Real::odejmowanie(Real a)
{
	Real z;
	z = x - a.x;
	return z;
}
Real Real::mnozenie(Real a)
{
	Real z;
	z = x * a.x;
	return z;
}
Real Real::dzielenie(Real a)
{
	Real z;
	z = x / a.x;
	return z;
}


Imaginary::Imaginary()
{
	int a = (rand() % 21) - 10;
	int b = (rand() % 21) - 10;
	re.x = a;
	im = b;
}
Imaginary::Imaginary(Real a, Real b)
{
	re.x = a.x;
	im = b.x;
}
Imaginary::Imaginary(double a, double b)
{
	re.x = a;
	im = b;
}
Imaginary::Imaginary(Real a, double b)
{
	re.x = a.x;
	im = b;
}

void Imaginary::print()
{
	if (re.x != 0)
		cout << re.x;
	if (im > 0 && re.x != 0)
	{
		cout << "+" << im << "i ";
	}
	else if (im > 0)
	{
		cout << im << "i ";
	}
	else if (im == 0)
	{

	}
	else
	{
		cout << im << "i ";
	}
}

Imaginary Imaginary::dodawanie(Imaginary z)
{
	Imaginary k;
	k.re.x = re.x + z.re.x;
	k.im = im + z.im;
	return k;
}

Imaginary Imaginary::dodawanie(Imaginary *z)
{
	Imaginary k;
	k.re.x = re.x + (*z).re.x;
	k.im = im + (*z).im;
	return k;
}

Imaginary Imaginary::odejmowanie(Imaginary z)
{
	Imaginary k;
	k.re.x = re.x - z.re.x;
	k.im = im - z.im;
	return k;
}
Imaginary Imaginary::odejmowanie(Imaginary *z)
{
	Imaginary k;
	k.re.x = re.x - (*z).re.x;
	k.im = im - (*z).im;
	return k;
}

Imaginary Imaginary::mnozenie(Imaginary z)
{
	Imaginary k;
	k.re.x = re.x * z.re.x - im * z.im;
	k.im = re.x * z.im + im * z.re.x;
	return k;
}

Imaginary Imaginary::mnozenie(Imaginary *z)
{
	Imaginary k;
	k.re.x = re.x * (*z).re.x - im * (*z).im;
	k.im = re.x * (*z).im + im * (*z).re.x;
	return k;
}

Imaginary Imaginary::dzielenie(Imaginary z)
{
	Imaginary k;
	k.re.x = (re.x*z.re.x + im * z.im) / (z.re.x*z.re.x + z.im*z.im);
	k.im = (im*z.re.x - re.x*z.im) / (z.re.x*z.re.x + z.im*z.im);
	return k;
}
Imaginary Imaginary::dzielenie(Imaginary *z)
{
	Imaginary k;
	k.re.x = (re.x* (*z).re.x + im * (*z).im) / ((*z).re.x*(*z).re.x + (*z).im*(*z).im);
	k.im = (im*(*z).re.x - re.x*(*z).im) / ((*z).re.x*(*z).re.x + (*z).im*(*z).im);
	return k;
}
double Imaginary::modul()
{
	return sqrt(re.x*re.x + im * im);
}

Imaginary Imaginary::sprzezenie()
{
	Imaginary k;
	k.re.x = re.x;
	k.im = im * -1;
	return k;
}