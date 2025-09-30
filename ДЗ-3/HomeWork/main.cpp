#include <iostream>
#include <string>
#include <vector>
#include <cassert>
#include "hw-3.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	cout << boolalpha;
	string str;
	int b;

	// Задание 1
	cout << "Задание 1" << endl << "Введите строку str = ";
	cin >> str;
	cout << "Строка яв-ся палиндромом = " << stringIsPalindrom(str) << endl;

	// Задание 2
	cout << endl << "Задание 2" << endl << "Введите строку str и целое число 0 < b <= 10 = ";
	cin >> str >> b;
	cout << "Строка преобразованное в число = " << stringToInt(str, b) << endl;

	// Задание 3
	cout << endl << "Задание 3" << endl << "Введите строку str, состояющую из русских символов и минимум 1-го пробела = ";
	cin.get();
	getline(cin, str);
	cout << "Длина самого длинного слова = " << maxLengthRussianWord(str) << endl;

	// Задание 4
	cout << endl << "Задание 4" << endl << "Введите строку-разделитель str и размер вектора b = ";
	cin >> str >> b;
	assert(b > 0);
	vector<string> vec(b);
	for (int i = 0; i < b; i++)
		vec[i] = "abc" + to_string(i);
	cout << "Конкатинация строк вектора и строки-разделителя = " << concatenationStringWithDelimitr(vec, str) << endl;

	// Задание 5
	cout << endl << "Задание 5" << endl << "Введите длину строки b = ";
	cin >> b;
	cout << "Строка из строчных английских букв в алфавитном порядке = " << latinicAlphabetLengthN(b);
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

Задание 4
Введите строку-разделитель str и размер вектора b = !! 4
Конкатинация строк вектора и строки-разделителя = abc0!!abc1!!abc2!!abc3

Задание 5
Введите длину строки b = 27
Строка из строчных английских букв в алфавитном порядке = abcdefghijklmnopqrstuvwxyza
*/