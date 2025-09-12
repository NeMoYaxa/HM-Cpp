#include <iostream>
#include "hw.h"
using namespace std;


int main()
{
	setlocale(LC_ALL, "Russian");

	// Задание 1
	cout << "Задание 1" << endl;
	int a, b;
	cout << "Введите два целых числа a и b, где b >= a: ";
	cin >> a >> b;
	cout << "произведение всех целых чисел, кратных трём, от " << a << " до " << b << " включительно = " << productMultipleTree(a, b) << endl;

	// Задание 2
	cout << "Задание 2" << endl;
	double x;
	cout << "Введите стоимость 1кг конфет: ";
	cin >> x;
	priceCandies(x);

	// Задание 3
	cout << "Задание 3" << endl;
	int n;
	{
		double a;
		cout << "Введите вещественное число a и целое число n >= 0: ";
		cin >> a >> n;
		cout << "Сумма степеней числа " << a << " от 0 до " << n << " = " << powNumber(a, n) << endl;
	}

	// Задание 4
	cout << "Задание 4" << endl << "Введите вещественное число x и целое число n > 0: ";
	cin >> x >> n;
	cout << "Вычисление sin(x) с помощью ряда = " << rowSin(x, n) << endl << "Вычисление sin(x) с помощью встроенной функции = " << sin(x) << endl;

	// Задание 5
	cout << "Задание 5" << endl << "Введите целоче число n >= 0: ";
	cin >> n;
	cout << "n-ое число Каталана = " << numberCatalan(n) << endl;

	// Задание 6
	cout << "Задание 6" << endl << "Введите целое число a: ";
	cin >> a;

}