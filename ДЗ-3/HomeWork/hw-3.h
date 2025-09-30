#pragma once

#include <string>
#include <vector>

/// <summary>
/// Проверяет яв-ся ли строка палиндромом
/// </summary>
/// <param name="s">- заданная строка</param>
/// <returns>True или False</returns>
bool stringIsPalindrom(const std::string& s);

/// <summary>
/// Преводит строку в 10-ой сс в целое число
/// </summary>
/// <param name="str">- заданная строка</param>
/// <returns>Целое число</returns>
int stringToInt(const std::string& str, int b);

/// <summary>
/// Находит длину самого длинного слова
/// </summary>
/// <param name="str">- строка с русскими символами</param>
/// <returns>Длина самого длинного слова</returns>
int maxLengthRussianWord(const std::string& str);

/// <summary>
/// Формирует из данного вектора одну строку посредством конкатенации через строку-разделитель
/// </summary>
/// <param name="vec">- вектор строк</param>
/// <param name="str">- строка-разделитель</param>
/// <returns>Новая строка</returns>
std::string concatenationStringWithDelimitr(const std::vector<std::string> vec, const std::string& str);

/// <summary>
/// Возвращает строку из строчных английских букв в алфавитном порядке длины n
/// </summary>
/// <param name="n">- длина строки</param>
/// <returns>Строку из строчных английских букв</returns>
std::string latinicAlphabetLengthN(int n);
