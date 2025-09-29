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


	// Задание 3
	cout << "Задание 1" << endl << "Введите строку str, состояющую из русских символов и пробелов = ";
	cin.get();
	getline(cin, str);
	cout << "Длина самого длинного слова = " << maxLengthRussianWord(str) << endl;
}