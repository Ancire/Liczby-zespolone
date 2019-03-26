#include "header.h"

using namespace std;

int main()
{
	srand(time(NULL));


	Imaginary z1, z2;
	Imaginary a, b, wynik;
	cout << "Podaj rzeczywisty komponent >";
	cin >> z1.re.x;
	cout << "Podaj urojony komponent >";
	cin >> z1.im;
	cout << "Podaj rzeczywisty komponent >";
	cin >> z2.re.x;
	cout << "Podaj urojony komponent >";
	cin >> z2.im;
	int n;
	int licznik = 0;
	int ktore = 0;
	cout << endl;
	cout << "Twoja liczba zespolona z1 to: ";
	z1.print();
	cout << endl;
	cout << "Twoja liczba zespolona z2 to: ";
	z2.print();
	cout << endl;
	wynik = z1 + z2;
	cout << "z1 + z2 = ";
	wynik.print(); cout << endl;
	wynik = z1 - z2;
	cout << "z1 - z2 = ";
	wynik.print(); cout << endl;
	wynik = z1 * z2;
	cout << "z1 * z2 = ";
	wynik.print(); cout << endl;
	cout << "|z1| = " << z1.modul() << endl;
	cout << "|z2| = " << z2.modul() << endl;
	wynik = z1.sprzezenie();
	cout << "~z1 = "; wynik.print(); cout << endl;
	wynik = z2.sprzezenie();
	cout << "~z1 = "; wynik.print(); cout << endl;

	cout << "Ile par liczb zespolonych chcesz wylosowac :>";
	cin >> n;
	Imaginary *tab = new Imaginary[n * 2 + 1];
	Imaginary w;
	cout << "Oto wyniki operacji na losowych liczbach zespolonych: \n"; \
		for (int i = 1; i <= n; i++)
		{
			ktore = i;
			licznik = i;
			cout << "*****************" << endl;
			cout << "z" << i << " = ";
			tab[i].print();
			cout << endl;
			cout << "z" << ++licznik << " = ";
			tab[i + 1].print();
			cout << endl;
			cout << "------------------" << endl;
			cout << "z" << i << " + z"; cout << licznik << " = ";
			w = tab[i] + tab[i + 1];
			w.print();
			cout << endl;
			cout << "z" << i << " - z"; cout << licznik << " = ";
			w = tab[i] - tab[i + 1];
			w.print();
			cout << endl;
			cout << "z" << i << " * z"; cout << licznik << " = ";
			w = tab[i] * tab[i + 1];
			w.print();
			cout << endl;
			cout << "z" << i << " / z"; cout << licznik << " = ";
			w = tab[i] / tab[i + 1];
			w.print();
			cout << endl;
			cout << "~z" << i << " = ";
			w = tab[i].sprzezenie();
			w.print();
			cout << endl;
			cout << "~z" << licznik << " = ";
			w = tab[i + 1].sprzezenie();
			w.print();
			cout << endl;
			cout << "|z|" << i << " = ";
			cout << tab[i].modul();
			cout << endl;
			cout << "|z|" << licznik << " = ";
			cout << tab[i + 1].modul();
			cout << endl;
		}
	cout << "------------------\n\n\n";



	system("pause");
}