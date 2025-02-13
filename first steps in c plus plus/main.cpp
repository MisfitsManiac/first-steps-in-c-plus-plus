/*
#include <iostream> //do��czenie biblioteki

int main() { //g��wna funkcja programu
	std::cout << "Hello World!" << std::endl;
	return 0; //zako�czenie programu
}
*/

/*
#include <iostream>
#include <limits>

int main() {
	//Typy ca�kowite

	short liczbaShort = 32000; //Mniejszy zakres ni� int
	int liczbaInt = 10; //Standardowy typ ca�kowity
	long liczbaLong = 100000L; //Wi�kszy zakres ni� int. Litera�y L i LL s� takie same jak ni�ej przy 3.14f
	long long liczbaLongLong = 10000000000LL; //Najwi�kszy zakres ca�kowity

	//Typy zmiennoprzecinkowe

	float liczbaFloat = 3.14f; //Liczba zmiennoprzecinkowa pojedynczej precyzji. Tutaj mamy litera� f, kt�ry okre�la float, czyli mniej precyzyjny ni� double. Zajmuje mniej pami�ci;
	double liczbaDouble = 3.1415926535; // Liczba zmiennoprzecinkowa podw�jnej precyzji

	//Typ znak�w

	char znak = 'A'; //Pojedynczy znak

	//Typ logiczny

	bool prawda = true; //Warto�� logiczna

	// Wy�wietlanie warto�ci
	std::cout << "Liczba short: " << liczbaShort << std::endl;
	std::cout << "Liczba int: " << liczbaInt << std::endl;
	std::cout << "Liczba long: " << liczbaLong << std::endl;
	std::cout << "Liczba long long: " << liczbaLongLong << std::endl;
	std::cout << "Liczba float: " << liczbaFloat << std::endl;
	std::cout << "Liczba double: " << liczbaDouble << std::endl;
	std::cout << "Znak: " << znak << std::endl;
	std::cout << "Wartosc logiczna: " << std::boolalpha << prawda << std::endl; // std::boolalpha wypisuje true/false zamiast 1/0

	// Wy�wietlanie limit�w typ�w danych
	std::cout << "\nLimity typow danych:" << std::endl;
	std::cout << "Short: [" << std::numeric_limits<short>::min() << "," << std::numeric_limits<short>::max() << "]" << std::endl;
	std::cout << "Int: [" << std::numeric_limits<int>::min() << "," << std::numeric_limits<int>::max() << "]" << std::endl;
	std::cout << "Long: [" << std::numeric_limits<long>::min() << "," << std::numeric_limits<long>::max() << "]" << std::endl;
	std::cout << "Long Long: [" << std::numeric_limits<long long>::min() << "," << std::numeric_limits<long long>::max() << "]" << std::endl;
	std::cout << "Float: [" << std::numeric_limits<float>::min() << "," << std::numeric_limits<float>::max() << "]" << std::endl;
	std::cout << "Double: [" << std::numeric_limits<double>::min() << "," << std::numeric_limits<double>::max() << "]" << std::endl;

	return 0;
}
*/

/*#include <iostream>

//Definicje funkcji

double dodaj(double a, double b) {
	return a + b;
}

double odejmij(double a, double b) {
	return a - b;
}

double pomnoz(double a, double b) {
	return a * b;
}

double podziel(double a, double b) {
	if (b != 0) {
		return a / b;
	} else {
		std::cout << "Blad: Dzielenie przez zero!" << std::endl;
		return 0;
	}
}

int main() {
	
	int wybor;
	short liczbaShort;
	int liczbaInt;
	long liczbaLong;
	long long liczbaLongLong;
	float liczbaFloat;
	double liczbaDouble;

	while (true) {
		std::cout << "Wybierz opcje:\n" << std::endl;
		std::cout << "1. Dodawanie\n" << std::endl;
		std::cout << "2. Odejmowanie\n" << std::endl;
		std::cout << "3. Mnozenie\n" << std::endl;
		std::cout << "4. Dzielenie\n" << std::endl;
		std::cin >> wybor;

		if (wybor >= 1 && wybor <= 4) {
			break;
		} else {
			std::cout << "Wybrano nieprawidlowa opcje! Sprobuj ponownie." << std::endl;
		}
	}

	double a, b; //double poniewa� obs�uguje wszystkie typy danych. Dzi�ki temu unikam powt�rze�

	std::cout << "Podaj pierwsza liczbe: " << std::endl;
	std::cin >> a;
	std::cout << "Podaj druga liczbe: " << std::endl;
	std::cin >> b;

	switch (wybor){
	case 1:
		std::cout << "Wynik dodawania = " << dodaj(a,b) << std::endl;
		break;
	case 2:
		std::cout << "Wynik odejmowania = " << odejmij(a,b) << std::endl;
		break;
	case 3:
		std::cout << "Wynik mnozenia = " << pomnoz(a,b) << std::endl;
		break;
	case 4:
		if (b != 0) {
			std::cout << "Wynik dzielenia = " << podziel(a,b) << std::endl;
		} else {
			std::cout << "Blad: Dzielenie przez zero!" << std::endl;
		}
		break;
	default:
		std::cout << "Blad! Wybrano nieprawidlowa opcje!" << std::endl;
		break;
	}

	return 0;
}
*/