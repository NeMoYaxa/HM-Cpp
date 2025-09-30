#pragma once

#include <string>
#include <vector>

/// <summary>
/// ��������� ��-�� �� ������ �����������
/// </summary>
/// <param name="s">- �������� ������</param>
/// <returns>True ��� False</returns>
bool stringIsPalindrom(const std::string& s);

/// <summary>
/// �������� ������ � 10-�� �� � ����� �����
/// </summary>
/// <param name="str">- �������� ������</param>
/// <returns>����� �����</returns>
int stringToInt(const std::string& str, int b);

/// <summary>
/// ������� ����� ������ �������� �����
/// </summary>
/// <param name="str">- ������ � �������� ���������</param>
/// <returns>����� ������ �������� �����</returns>
int maxLengthRussianWord(const std::string& str);

/// <summary>
/// ��������� �� ������� ������� ���� ������ ����������� ������������ ����� ������-�����������
/// </summary>
/// <param name="vec">- ������ �����</param>
/// <param name="str">- ������-�����������</param>
/// <returns>����� ������</returns>
std::string concatenationStringWithDelimitr(const std::vector<std::string> vec, const std::string& str);

/// <summary>
/// ���������� ������ �� �������� ���������� ���� � ���������� ������� ����� n
/// </summary>
/// <param name="n">- ����� ������</param>
/// <returns>������ �� �������� ���������� ����</returns>
std::string latinicAlphabetLengthN(int n);
