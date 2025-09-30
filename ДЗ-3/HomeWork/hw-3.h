#pragma once

#include <string>
#include <vector>

/// <summary>
/// ѕровер€ет €в-с€ ли строка палиндромом
/// </summary>
/// <param name="s">- заданна€ строка</param>
/// <returns>True или False</returns>
bool stringIsPalindrom(const std::string& s);

/// <summary>
/// ѕреводит строку в 10-ой сс в целое число
/// </summary>
/// <param name="str">- заданна€ строка</param>
/// <returns>÷елое число</returns>
int stringToInt(const std::string& str, int b);

/// <summary>
/// Ќаходит длину самого длинного слова
/// </summary>
/// <param name="str">- строка с русскими символами</param>
/// <returns>ƒлина самого длинного слова</returns>
int maxLengthRussianWord(const std::string& str);

/// <summary>
/// ‘ормирует из данного вектора одну строку посредством конкатенации через строку-разделитель
/// </summary>
/// <param name="vec">- вектор строк</param>
/// <param name="str">- строка-разделитель</param>
/// <returns>Ќова€ строка</returns>
std::string concatenationStringWithDelimitr(const std::vector<std::string> vec, const std::string& str);
