#include <iostream>
#include <cstdlib>
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
double sredniaWazona(int a, int b);

// Zadanie 8
double pitagoras(int a, int b);

// Zadanie 9
double dodawanie(double a, double b);

double odejmowanie(double a, double b);

double mnozenie(double a, double b);

double dzielenie(double a, double b);

// Zadanie 10
int skladniki1(int a);

void skladiniki2(int a);

// Zadanie 11
double prostokat(double a, double b);

// Zadanie 12
int objetoscProstopadloscianu();

// Zadanie 13
int potega(int a, int b);

// Zadanie 14
int silnia(int n);

// Zadanie 15
double potega2(int n);

// Zadanie 16
double szczesliwyNumerek(int n);

// Zadanie 17
int dzielParz(int n);

double dzielNieParz(int n);

// Zadanie 18
int smiesznePotegi(int n);

int main() {
	srand(time(0));
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

	// Zadanie 7
	/*int a, b;
	cout << "Podaj pierwsza liczbe: ";
	cin >> a;
	cout << "Podaj druga liczbe: ";
	cin >> b;
	cout << "Srednia wazona z podanych liczb i wag wynosi: " << sredniaWazona(a, b);*/

	// Zadanie 8
	/*int a, b;
	cout << "Podaj pierwsza przyprostokatna: ";
	cin >> a;
	cout << "Podaj druga przyprostokatna: ";
	cin >> b;

	cout << "Długosc przeciwprostokatnej wynosi: " << pitagoras(a, b);*/

	// Zadanie 9
	/*double a, b;
	char znak;
	cout << "Podaj pierwsza liczbe: ";
	cin >> a;
	cout << "Podaj druga liczbe: ";
	cin >> b;
	cout << "Podaj znak: ";
	cin >> znak;

	switch (znak) {
	case '+':
		cout << dodawanie(a, b);
		break;

	case '-':
		cout << odejmowanie(a, b);
		break;

	case '*':
		cout << mnozenie(a, b);
		break;

	case '/':
		cout << dzielenie(a, b);
		break;
	}*/

	// Zadanie 10
	/*int a;
	cout << "Podaj ile jest skladnikow: ";
	cin >> a;
	cout << skladniki1(a) << endl;
	skladiniki2(a);*/

	// Zadanie 11
	/*double a, b;
	cout << "Podaj pierwsza liczbe: ";
	cin >> a;
	cout << "Podaj druga liczbe: ";
	cin >> b;
	cout << "Pole prostokata wynosi: " << prostokat(a, b);*/

	// Zadanie 12
	//cout << "Objetosc prostopadloscianu wynosi: " << objetoscProstopadloscianu();

	// Zadanie 13
	/*int a, b;
	cout << "Podaj pierwsza liczbe: ";
	cin >> a;
	cout << "Podaj druga liczbe: ";
	cin >> b;

	cout << a << " do potegi " << b << " wynosi: " << potega(a, b);*/

	// Zadanie 14
	/*int n;
	cout << "Podaj liczbe: ";
	cin >> n;
	cout << "Silnia z liczby: " << n << " wynosi: " << silnia(n);*/

	// Zadanie 15
	/*int n;
	cout << "Podaj liczbe: ";
	cin >> n;
	cout << "2 do potegi " << n << " wynosi " << potega2(n);*/

	// Zadanie 16
	/*int n;
	cout << "Podaj liczbe: ";
	cin >> n;
	cout << "Procent wystapien podanej liczby wynosi: " << szczesliwyNumerek(n) << "%";*/

	// Zadanie 17
	/*for (int i = 0; i < 100; i++) {
		if (i % 2 == 0) {
			cout << "Liczba " << i << ": " << dzielParz(i) << endl;
		} else {
			cout << "Liczba " << i << ": " << dzielNieParz(i) << endl;
		}
	}*/
	
	// Zadanie 18
	int n;
	cout << "Podaj liczbe: ";
	cin >> n;
	smiesznePotegi(n);
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
double sredniaWazona(int a, int b) {
	int x, y;
	cout << "Podaj wage pierwszej liczby: ";
	cin >> x;
	cout << "Podaj wage drugiej liczby: ";
	cin >> y;

	int wyn = (a * x + b * y) / (x + y);

	return wyn;
}

// Zadanie 8
double pitagoras(int a, int b) {
	int wyn = (a * a) + (b * b);

	return sqrt(wyn);
}

// Zadanie 9
double dodawanie(double a, double b) { return a + b; }

double odejmowanie(double a, double b) { return a - b; }

double mnozenie(double a, double b) { return a * b; }

double dzielenie(double a, double b) {
	if (a == 0 || b == 0) {
		cout << "Nie dziel przez 0!";
		return 0;
	}
	return a / b;
}

// Zadanie 10
int skladniki1(int a) {
	int n, suma = 0;
	for (int i = 1; i <= a; i++) {
		cout << "Podaj wartosc " << i << "skladnika: ";
		cin >> n;
		suma += n;
	}
	return suma;
}

void skladiniki2(int a) {
	int n, suma = 0;
	for (int i = 1; i <= a; i++) {
		cout << "Podaj wartosc " << i << "skladnika: ";
		cin >> n;
		suma += n;
	}
	cout << "Suma wszystkich skladnikow wynosi: " << suma;
}

// Zadanie 11
double prostokat(double a, double b) { return (a * 2.0) + (b * 2.0); }

// Zadanie 12
int objetoscProstopadloscianu() {
	int a = 5, b = 5, c = 10;
	return a * b * c;
}

// Zadanie 13
int potega(int a, int b) {
	if (a < 0 || b < 0) {
		cout << "Liczba ma być większa od zera! ";
		return 0;
	}

	int wyn = a;

	for (int i = 1; i < b; i++) {
		wyn *= a;
	}

	return wyn;
}

// Zadanie 14
int silnia(int n) { 
	if (n == 0) { return 1; }
	return n * silnia(n - 1); 
}

// Zadanie 15
double potega2(int n) {
	double wyn = 2;
	if (n > 0) {
		for (int i = 1; i < n; i++) {
			wyn *= 2;
		}
	} else if (n < 0) {
		for (int i = 1; i > n; i--) {
			wyn /= 2;
		}
	} else {
		wyn = 1;
	}
	return wyn;
}

// Zadanie 16
double szczesliwyNumerek(int n) {
	if (n < 1 || n > 10) {
		cout << "Liczba musi byc z przedzialu 1-10";
		return 0;
	}

	int wys = 0;
	for (int i = 0; i < 10; i++) {
		int szNum = (rand() % 10) + 1;
		if (szNum == n) {
			wys++;
		}
	}
	return (wys/10.0) * 100;
}

// Zadanie 17
int dzielParz(int n) { return n / 2; }

double dzielNieParz(int n) { return (n - 1) / 2; }

// Zadanie 18
int smiesznePotegi(int n) {
	if (n % 2 == 0 && n % 3 == 0) {
		cout << "Zwracam 0!" << endl;
		return 0;
	} else if (n % 2 == 0) {
		cout << "Zwracam kwadrat!" << endl;
		return n * n;
	} else if (n % 3 == 0) {
		cout << "Zwracam szescian!" << endl;
		return n * n * n;
	}
}