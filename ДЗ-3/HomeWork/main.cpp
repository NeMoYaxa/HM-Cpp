#include <iostream>
#include <string>
#include "hw-3.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	cout << boolalpha;

	// Задание 1
	cout << "Задание 1" << endl << "Введите строку str = ";
	string str;
	cin >> str;
	cout << "Строка яв-ся палиндромом = " << stringIsPalindrom(str) << endl;

	// Задание 2
	cout << endl << "Задание 2" << endl << "Введите строку str и целое число 0 < b <= 10 = ";
	int b;
	cin >> str >> b;
	cout << "Строка преобразованное в число = " << stringToInt(str, b) << endl;

	// Задание 3
	cout << endl << "Задание 3" << endl << "Введите строку str, состояющую из русских символов и минимум 1-го пробела = ";
	cin.get();
	getline(cin, str);
	cout << "Длина самого длинного слова = " << maxLengthRussianWord(str) << endl;
}
/*
Задание 1
Введите строку str = As1221sA
Строка яв-ся палиндромом = true

Задание 2
Введите строку str и целое число 0 < b <= 10 = -132 7
Строка преобразованное в число = -132

Задание 3
Введите строку str, состояющую из русских символов и минимум 1-го пробела = мука Победа
Длина самого длинного слова = 6
*/