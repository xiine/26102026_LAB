#include <iostream>
using namespace std;

// Zadanie 1
void wypiszImie(string name);

// Zadanie 2
void tabliczkaMnozenia();

// Zadanie 3
void wyswietlWieksza(int a, int b);
int zwrocWieksza(int a, int b);

// Zadanie 4
void wyswietlMniejsza(int a, int b, int c);
int zwrocMniejsza(int a, int b, int c);

// Zadanie 5
double trojkat(double a, double h);

// Zadanie 6
void dzielniki(int n);

// Zadanie 7


int main() {
	// Zadanie 0
	// Wyświetla się suma podanych wartości, która jest brana z z funkcji dodawanie. 
	// Wyświetla się też tekst z funkcji wyseitlanie, który jest sumą podanych argumentów.
	// Otrzymujemy również wartość zmiennej globalnej

	// Zadanie 1
	/*string name;
	cout << "Podaj imie: ";
	cin >> name;
	wypiszImie(name);*/

	// Zadanie 2
	//tabliczkaMnozenia();

	// Zadanie 3
	/*int a, b;
	cout << "Podaj liczbe a: ";
	cin >> a;
	cout << "Podaj liczbe b: ";
	cin >> b;
	wyswietlWieksza(a, b);
	cout << zwrocWieksza(a, b);*/

	// Zadanie 4
	/*int a, b, c;
	cout << "Podaj liczbe a: ";
	cin >> a;
	cout << "Podaj liczbe b: ";
	cin >> b;
	cout << "Podaj liczbe c: ";
	cin >> c;
	wyswietlMniejsza(a, b, c);
	cout << zwrocMniejsza(a, b, c);*/

	// Zadanie 5
	/*double a, h;
	cout << "Podaj podstawe trojkata: ";
	cin >> a;
	cout << "Podaj wysokosc trojkata: ";
	cin >> h;
	cout << "Dwokrotnie wieksze pole wynosi: " << trojkat(a, h) * 2 << endl;*/

	// Zadanie 6
	/*int n;
	cout << "Podaj liczbe n: ";
	cin >> n;
	dzielniki(n);*/
}


// Zadanie 1
void wypiszImie(string name) {
	cout << "Czesc, " << name;
}

// Zadanie 2
void tabliczkaMnozenia() {
	for (int i = 1; i <= 10; i++) {
		for (int j = 1; j <= 10; j++) {
			int wynik = i * j;
			if (wynik < 10) {
				cout << "  " << wynik;
			}
			else {
				cout << " " << wynik;
			}
		}
		cout << endl;
	}
}

// Zadanie 3
void wyswietlWieksza(int a, int b) {
	if (a > b) {
		cout << "liczba " << a << " jest wieksza od liczby " << b << endl;
	} else {
		cout << "liczba " << b << " jest wieksza od liczby " << a << endl;
	}
}

int zwrocWieksza(int a, int b) {
	if (a > b) { return a; }
	return b;
}

// Zadanie 4
void wyswietlMniejsza(int a, int b, int c) {
	if (a < b && a < c) {
		cout << "liczba " << a << " najmniejsza liczba"<< endl;
	} else if (b < a && b < c) {
		cout << "liczba " << b << " jest najmniejsza liczba" << endl;
	} else {
		cout << "liczba " << c << " jest najmniejsza liczba" << endl;
	}
}

int zwrocMniejsza(int a, int b, int c) {
	if (a < b && a < c) {
		return a;
	}
	else if (b < a && b < c) {
		return b;
	}
	return c;
}

// Zadanie 5
double trojkat(double a, double h) {
	double pole = (a * h) / 2;
	cout << "Pole trojkata ma wartosc: " << pole << endl;
	return pole;
}

// Zadanie 6
void dzielniki(int n) {
	int a = 1;
	if (n < 0) {
		cout << "Podaj liczbe wieksza od 0";
	}
	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			cout << a << ". dzielnik: " << i << endl;
			a++;
		}
	}
}

// Zadanie 7