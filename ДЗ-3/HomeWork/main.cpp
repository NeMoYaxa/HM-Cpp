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
	cout << "Строка " << str << " яв-ся палиндромом = " << stringIsPalindrom(str) << endl;
}