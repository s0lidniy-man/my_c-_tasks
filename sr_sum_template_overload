// Нахождение средней суммы введенных элементов, с использованием шаблонных и перегруженных функций 

#include <iostream>
#include "Header.h"
#include "Operations_mas.h"
#include <string>

template <typename T1, typename T2, typename T3>
int operations(T1 a, T2 b, T3 c) {
	return (a + b + c) / 3;
}

template <typename D1, typename D2, typename D3, typename D4>
double operations(D1 a, D2 b, D3 c, D4 d) {
	return (a + b + c + d) / 4;
}

int main()
{
	setlocale(LC_ALL, "Rus");

	double a;
	double b;
	double c;
	double d;
	std::cin >> a;
	std::cin >> b;
	std::cin >> c;
	std::cin >> d;
	std::cout << std::endl;
	std::cout << operations(a, b, c, d) << std::endl;
}
