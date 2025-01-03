// Нахождение наибольшего введенного элемента из трех, с использованием шаблонных и перегруженных функций

#include <iostream>
#include "Header.h"
#include "Operations_mas.h"
#include <string>

template <typename T1, typename T2>
int operations(T1 a, T2 b) { // Целый тип
	if (a < b) {
		return b;
	}
	if (a > b) {
		return a;
	}
}

template <typename D1, typename D2, typename D3>
double operations(D1 a, D2 b, D3 c) { // Вещественный тип
	if (a < b && b > c) {
		return b;
	}
	if (a > b && a > c) {
		return a;
	}
	if (c > a && c > b) {
		return c;
	}
}

int main()
{
	setlocale(LC_ALL, "Rus");

	double a;
	double b;
	double c;
	std::cin >> a;
	std::cin >> b;
	std::cin >> c;
	std::cout << std::endl;
	std::cout << operations(a, b, c) << std::endl;
}
