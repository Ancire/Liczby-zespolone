#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cmath>
#include <vector>
using namespace std;

class Real
{
public:
	double x;


	Real(); //Losowe dane
	Real(double a);
	Real(const Real &real);

	void print(); //Wyœwietla liczbê ¿eczywist¹ na ekranie

	Real dodawanie(Real a);
	Real odejmowanie(Real a);
	Real mnozenie(Real a);
	Real dzielenie(Real a);
};

class Imaginary : public Real
{
public:
	Real re;
	double im;

	Imaginary();	//Losowe /dane
	Imaginary(Real a, Real b);
	Imaginary(double a, double b);
	Imaginary(Real a, double b);

	void print(); //Wyœwietla liczbê zespolon¹ na ekranie

	Imaginary dodawanie(Imaginary z);
	Imaginary dodawanie(Imaginary *z);
	Imaginary odejmowanie(Imaginary z);
	Imaginary odejmowanie(Imaginary *z);
	Imaginary mnozenie(Imaginary z);
	Imaginary mnozenie(Imaginary *z);
	Imaginary dzielenie(Imaginary z);
	Imaginary dzielenie(Imaginary *z);
	Imaginary sprzezenie();
	double modul();

	//Prze³adowanie operatorów
	Imaginary operator +(Imaginary z)
	{
		return Imaginary(this->dodawanie(z));
	}
	Imaginary operator -(Imaginary z)
	{
		return Imaginary(this->odejmowanie(z));
	}
	Imaginary operator *(Imaginary z)
	{
		return Imaginary(this->mnozenie(z));
	}
	Imaginary operator /(Imaginary z)
	{
		return Imaginary(this->dzielenie(z));
	}
};

