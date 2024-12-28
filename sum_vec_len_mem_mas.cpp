// Нахождение суммы через класс Вектор, используя отдельный метод, в котором подается только длина массива и выделяется память, через деструктор работает чистка массива

#include <iostream>
#include "Header.h"
#include "Operations_mas.h"
#include <string>

class Vector {
public:
	int* a = NULL;
	int* b = NULL;
	int* c = NULL;

	Vector(int n) {
		a = new int[n];
		b = new int[n];
		c = new int[n];
	}
	~Vector() {
		delete[] a;
		delete[] b;
		delete[] c;
	}
	void Push_Vec(int n) {
		for (int i = 0; i < n; i++) {
			a[i] = i;
			b[i] = i;
		}
		std::cout << "Vec_a: " << std::endl;
		for (int i = 0; i < n; i++) {
			std::cout << a[i] << std::endl;
		}
		std::cout << "Vec_b: " << std::endl;
		for (int i = 0; i < n; i++) {
			std::cout << b[i] << std::endl;
		}
	}
	void Sum_Vec(int n) {
		for (int i = 0; i < n; i++) {
			c[i] = a[i] + b[i];
		}
		std::cout << "Sum_Vec: " << std::endl;
		for (int i = 0; i < n; i++) {
			std::cout << c[i] << std::endl;
		}
	}
};

int main()
{
	setlocale(LC_ALL, "Rus");
	Vector obj_vec(5);
	obj_vec.Push_Vec(5);
	obj_vec.Sum_Vec(5);
}
