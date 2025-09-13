#include <iostream>
#include <assert.h>
#include <iomanip>
#include "hw1.h"
using namespace std;

/// <summary>
/// Находит сумму квадратов цифр заданного числа
/// </summary>
/// <param name="x">Заданное число</param>
/// <returns>Сумма квадратов цифр числа</returns>
int sumOfSquares(int x)
{
	x = abs(x);
	int res = 0;
	while (x > 0)
	{
		res += pow(x % 10, 2);
		x /= 10;
	}
	return res;
}

/// <summary>
/// Проверяет яв-ся ли заданное число палиндромом
/// </summary>
/// <param name="x">Заданное число</param>
/// <returns>True или False</returns>
bool isPalindrome(int x)
{
	x = abs(x);
	int copy = 0, curr = x;
	while (curr > 0)
	{
		copy = copy * 10 + curr % 10;
		curr /= 10;
	}
	return copy == x;
}

/// <summary>
/// Перезаписывает заданное число с конца
/// </summary>
/// <param name="x">Заданное число</param>
void reverseNumber(int& x)
{
	int sign = x > 0 ? 1 : x < 0 ? -1 : 0;
	int copy = 0;
	x = abs(x);
	while (x > 0)
	{
		copy = copy * 10 + x % 10;
		x /= 10;
	}
	x = copy * sign;
}

/// <summary>
/// Выводит таблицу степеней от 1 до n
/// </summary>
/// <param name="n">Заданное число</param>
void printPowerTable(int n)
{
	assert(n >= 1);
	for (int i = 1; i <= n; i++)
	{
		long long int curr = i;
		for (int j = 1; j <= 3; j++)
		{
			cout << setw(10) << curr << " ";
			curr *= i;
		}
		cout << endl;
	}
}

/// <summary>
/// Находит количество дней для удвоения вклада
/// </summary>
/// <param name="deposit">Депозит</param>
/// <param name="rate">Дневная процентная ставка</param>
/// <returns>Количество дней для удвоения вклада</returns>
int daysToDoubleDeposit(double deposit, double rate)
{
	assert(deposit > 0 && rate > 0);
	double res = 0, curr_deposit = deposit;
	double percent = 1 + rate / 100.0;
	while (curr_deposit < deposit * 2)
	{
		curr_deposit *= percent;
		res++;
	}
	return res;
}

/// <summary>
/// Находит произведение цифр заданного числа
/// </summary>
/// <param name="x">Заданное число</param>
/// <returns>Произведение цифр заданного числа</returns>
long long int productOfDigits(int x)
{
	if (x == 0)
		return 0;
	x = abs(x);
	int res = 1;
	while (x > 0)
	{
		int curr = x % 10;
		if (curr > 0)
			res *= curr;
		else return 0;
		x /= 10;
	}
	return res;
}

/// <summary>
/// Вычислять результат возведения base в степень exp
/// </summary>
/// <param name="base">Основание</param>
/// <param name="exp">Показатель стпени</param>
/// <returns>Результат возведения base в степень exp</returns>
double power(double base, int exp)
{
	if (base == 0)
		return 0;
	if (exp == 0)
		return 1;
	int parity = exp % 2 == 0 ? 1 : 0;
	int sign = base > 0 ? 1 : base < 0 ? -1 : 0;
	double res = 1;
	base = abs(base);
	if (exp > 0)
		while (exp > 0)
		{
			res *= base;
			exp--;
		}
	else
		while (exp < 0)
		{
			res /= base;
			exp++;
		}
	return parity == 1 ? res : res * sign;
}

/// <summary>
/// Ппроверяет яв-ся ли число x числом Амстронга 
/// </summary>
/// <param name="x">Заданное число</param>
/// <returns>True или False</returns>
bool isArmstrong(int x)
{
	x = abs(x);
	int res = 0, pow = 0, copy = x;
	while (copy > 0)
	{
		copy /= 10;
		pow++;
	}
	copy = x;
	while (copy > 0)
	{
		res += power(copy % 10, pow);
		copy /= 10;
	}
	return res == x;
}


/// <summary>
/// Выводит ромбовитый паттерн
/// </summary>
/// <param name="n">Количество ступеней стороны ромба</param>
void printNumberDiamond(int n)
{
	assert(n > 0);
	for (int i = 1; i <= n; i++)
	{
		for (int j = i; j < n; j++)
			cout << " ";
		for (int j = 1; j <= i; j++)
			cout << j;
		for (int j = i - 1; 1 <= j; j--)
			cout << j;
		cout << endl;
	}
	for (int i = n - 1; 1 <= i; i--)
	{
		for (int j = i; j < n; j++)
			cout << " ";
		for (int j = 1; j <= i; j++)
			cout << j;
		for (int j = i - 1; 1 <= j; j--)
			cout << j;
		cout << endl;
	}
}

/// <summary>
/// Находит ежемесячный аннуитетный платеж
/// </summary>
/// <param name="loan">Сумма кредита</param>
/// <param name="rate">Годовая процентная ставка в процентах</param>
/// <param name="years">Срок кредита в годах</param>
/// <returns>Ежемесячный аннуитетный платеж</returns>
double calculateMonthlyPayment(double loan, double rate, int years)
{
	assert(loan > 0 && rate > 0 && years > 0);
	double monthly_rate = rate / 100 / 12;
	int n = years * 12;
	double monthly_payment = 0, percent = 1;
	for (int i = 1; i <= n; i++)
		percent *= 1 + monthly_rate;
	monthly_payment = loan * (monthly_rate * percent) / (percent - 1);
	return monthly_payment;
}