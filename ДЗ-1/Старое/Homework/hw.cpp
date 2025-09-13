#include <iostream>
#include "hw.h"
#include <assert.h>
using namespace std;

/// <summary>
/// Находит произведение всех целых чисел, кратных трём, от a до b включительно
/// </summary>
/// <param name="a">Меньшее число отрезка</param>
/// <param name="b">Большее число отрезка</param>
/// <returns>Произведение всех чисел</returns>
long long int productMultipleTree(int a, int b)
{
	assert(b >= a);
	if (a < 0 && b > 0 || a == 0 || b == 0)
		return 0;
	long long int res = 1;
	for (int i = a % 3 == 0 ? a : (a % 3 == 1 || a % 3 == -2) ? a += 2 : a += 1; i <= b; i += 3)
		res *= i;
	return res == 1 ? 0 : res;
}

/// <summary>
/// Выводит стоимость 1.2, 1.4, …, 2 кг конфет
/// </summary>
/// <param name="x">Цена 1кг конфеты</param>
void priceCandies(double x)
{
	assert(x > 0);
	double weight = 1.2;
	for (int i = 0; i < 5; i++)
	{
		cout << "Стоимсть " << weight << "кг конфет = " << weight * x << " " << endl;
		weight += 0.2;
	}
}

/// <summary>
/// Находит сумму степеней числа a
/// </summary>
/// <param name="a">Число, возводимое в степень</param>
/// <param name="n">Степень последнего числа</param>
/// <returns>Сумма степеней числа a</returns>
double powNumber(double a, int n)
{
	assert(n >= 0);
	if (n == 0)
		return 1;
	double res = 1;
	double curr = a;
	for (int i = 0; i < n; i++)
	{
		res += curr;
		curr *= a;
	}
	return res;
}

/// <summary>
/// Находит приближенное значение sin(x)
/// </summary>
/// <param name="x">Точка sin</param>
/// <param name="n">Последнее непростой множитель числа ряда</param>
/// <returns>Приближенное значение sin(x)</returns>
double rowSin(double x, int n)
{
	assert(n > 0);
	if (n == 1)
		return x;
	double res = x, curr = x;
	for (int i = 1; i <= n - 1; i++)
	{
		curr *= -1 * x * x / (2 * i) / (2 * i + 1);
		res += curr;
	}
	return res;
}

/// <summary>
/// Находит n-ое число Каталана
/// </summary>
/// <param name="n">n-ое число</param>
/// <returns>Число Каталана</returns>
int numberCatalan(int n)
{
	assert(n >= 0);
	if (n == 0)
		return 1;
	int res = 1, pow = 0;
	for (int i = 1; i <= n; i++)
	{
		res = res * (pow + i) * (pow + i + 1) / i / (i + 1);
		pow++;
	}
	return res;
}