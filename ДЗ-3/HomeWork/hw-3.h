#pragma once

#include <string>

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
int stringToInt(const std::string& str);

/// <summary>
/// Находит длину самого длинного слова
/// </summary>
/// <param name="str">- строка с русскими символами</param>
/// <returns>Длина самого длинного слова</returns>
int maxLengthRussianWord(const std::string& str);