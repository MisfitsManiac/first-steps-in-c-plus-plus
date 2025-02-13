#include <iostream>

//definicja funkcji Punkt

class Punkt {
private:
	double x, y; //x i y reprezentuj¹ wspó³rzêdne 2D

public:

	//Konstruktor domyœlny
	Punkt() : x(0), y(0) {}

	//Konstruktor z parametrami
	Punkt(double x, double y) : x(x), y(y) {} //konstruktor. po dwukropku - x to odniesienie do double na górze. (x) to odniesienie do x ju¿ wewn¹trz konstruktora. Dziêki temu przypisujemy wartoœci z x i y na górze
	
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
	punkt1.wyswietl(); //wyœwietli (0, 0) bo wy¿ej pobra³o konstruktor domyslny

	Punkt punkt2(3, 4);
	punkt2.wyswietl();

	return 0;
}