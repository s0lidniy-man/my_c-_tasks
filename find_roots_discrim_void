// Нахождение корней с помощтю дискриминанта с использованием функции Void


#include <iostream>
#include "Header.h"
#include "Operations_mas.h"
#include <string>

void square_eqasion(double a, double b, double c, double &x1, double &x2, int &p) {
	double d = pow(b, 2) - 4 * a * c;
	x1 = (-b + sqrt(d)) / (2 * a);
	x2 = (-b - sqrt(d)) / (2 * a);
	if (d < 0) {
		p = 0;
		std::cout << "нет корней!" << std::endl;
	}
	if (d == 0) {
		std::cout << "один корень = " << x1 << std::endl;
	}
	if (d > 0) {
		p = 1;
		std::cout << "два корня!" << std::endl;
	}
}

int main()
{
	setlocale(LC_ALL, "Rus");
	double a = 1;
	double b = 9;
	double c = 4;
	double x1=NULL, x2=NULL;
	int p;
	square_eqasion(a, b, c, x1, x2, p);
	if (p == 1) {
		std::cout << "x1 = " << x1 << std::endl;
		std::cout << "x2 = " << x2;
	}
}
