#include <iostream>
#include "hw1.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	cout << boolalpha;

	// Задание 1
	cout << "Задание 1" << endl << "Введите целое число X: ";
	int x;
	cin >> x;
	cout << "Сумма квадратов цифр числа " << x << " = " << sumOfSquares(x) << endl;

	// Задание 2
	cout << endl << "Задание 2" << endl << "Введите целое число X: ";
	cin >> x;
	cout << "Число " << x << " яв-ся палиндромом = " << isPalindrome(x) << endl;

	// Задание 3
	cout << endl << "Задание 3" << endl << "Введите целое число X: ";
	cin >> x;
	cout << "Число " << x << " перезаписанное с конца = ";
	reverseNumber(x);
	cout << x << endl;

	// Задание 4
	cout << endl << "Задание 4" << endl << "Введите целое число N: ";
	int n;
	cin >> n;
	cout << "Таблица степеней от 1 до " << n << ":" << endl;
	printPowerTable(n);

	// Задание 5
	cout << endl << "Задание 5" << endl << "Введите deposit и дневную процентную ставку rate: ";
	double deposit, rate;
	cin >> deposit >> rate;
	cout << "Количество дней для удвоения вклада = " << daysToDoubleDeposit(deposit, rate) << endl;

	// Задание 6
	cout << endl << "Задание 6" << endl << "Введите целое число X: ";
	cin >> x;
	cout << "Произведение цифр числа " << x << " = " << productOfDigits(x) << endl;

	// Задание 7
	cout << endl << "Задание 7" << endl << "Введите целое основание base и целый показатель стпени exp: ";
	double base;
	int exp;
	cin >> base >> exp;
	cout << "Основание " << base << " в степени " << exp << " = " << power(base, exp) << endl;

	// Задание 8
	cout << endl << "Задание 8" << endl << "Введите целое число X: ";
	cin >> x;
	cout << "Число " << x << " яв-ся числом Амстронга = " << isArmstrong(x) << endl;

	// Задание 9
	cout << endl << "Задание 9" << endl << "Введите целое число N > 0: ";
	cin >> n;
	cout << "Ромбивитый паттерн с " << n << " ступеней стороны ромба: " << endl;
	printNumberDiamond(n);

	// Задание 10

}
/*

*/