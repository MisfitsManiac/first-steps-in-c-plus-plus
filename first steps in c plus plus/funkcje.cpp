#include <iostream>

//definicja funkcji Punkt

class Punkt {
private:
	double x, y; //x i y reprezentuj� wsp�rz�dne 2D

public:

	//Konstruktor domy�lny
	Punkt() : x(0), y(0) {}

	//Konstruktor z parametrami
	Punkt(double x, double y) : x(x), y(y) {} //konstruktor. po dwukropku - x to odniesienie do double na g�rze. (x) to odniesienie do x ju� wewn�trz konstruktora. Dzi�ki temu przypisujemy warto�ci z x i y na g�rze
	
	void przesun(double dx, double dy) {
		x += dx;
		y += dy;
	}

	void wyswietl() const {
		std::cout << "Wspolrzedne punktu: (" << x << ", " << y << ")" << std::endl;
	}
};

int main() {
	Punkt punkt1;
	punkt1.wyswietl(); //wy�wietli (0, 0) bo wy�ej pobra�o konstruktor domyslny

	Punkt punkt2(3, 4);
	punkt2.wyswietl();

	return 0;
}