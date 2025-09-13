#include <iostream>
#include <assert.h>
#include <iomanip>
#include "hw1.h"
using namespace std;

/// <summary>
/// ������� ����� ��������� ���� ��������� �����
/// </summary>
/// <param name="x">�������� �����</param>
/// <returns>����� ��������� ���� �����</returns>
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
/// ��������� ��-�� �� �������� ����� �����������
/// </summary>
/// <param name="x">�������� �����</param>
/// <returns>True ��� False</returns>
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
/// �������������� �������� ����� � �����
/// </summary>
/// <param name="x">�������� �����</param>
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
/// ������� ������� �������� �� 1 �� n
/// </summary>
/// <param name="n">�������� �����</param>
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
/// ������� ���������� ���� ��� �������� ������
/// </summary>
/// <param name="deposit">�������</param>
/// <param name="rate">������� ���������� ������</param>
/// <returns>���������� ���� ��� �������� ������</returns>
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
/// ������� ������������ ���� ��������� �����
/// </summary>
/// <param name="x">�������� �����</param>
/// <returns>������������ ���� ��������� �����</returns>
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
/// ��������� ��������� ���������� base � ������� exp
/// </summary>
/// <param name="base">���������</param>
/// <param name="exp">���������� ������</param>
/// <returns>��������� ���������� base � ������� exp</returns>
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
/// ���������� ��-�� �� ����� x ������ ��������� 
/// </summary>
/// <param name="x">�������� �����</param>
/// <returns>True ��� False</returns>
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
/// ������� ���������� �������
/// </summary>
/// <param name="n">���������� �������� ������� �����</param>
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
/// ������� ����������� ����������� ������
/// </summary>
/// <param name="loan">����� �������</param>
/// <param name="rate">������� ���������� ������ � ���������</param>
/// <param name="years">���� ������� � �����</param>
/// <returns>����������� ����������� ������</returns>
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