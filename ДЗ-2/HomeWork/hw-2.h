#pragma once

#include <iostream>
#include <vector>
#include <array>
#include <tuple>
#include <assert.h>

/// <summary>
/// ��� ��� ������������� ������ ��������� 
/// </summary>
enum class UnitsOfLength { Decimeter = 1, Kilometer, Metre, Millimeter, Centimetre };

/// <summary>
/// ������� ����� ������� � ������
/// </summary>
/// <param name="n">- ����� ������� ���������</param>
/// <param name="len">- ����� �������</param>
/// <returns>����� ������� � ������</returns>
double convertToMeters(int n, double len);

/// <summary>
/// ������� ������ � ��������� ��� ��������� ������ �� 1 �� n-��
/// </summary>
/// <param name="n">- ����� �������</param>
/// <returns>������ �� ��������� ������ �� 1 �� n-��</returns>
std::vector<int> createDegreeOfTwoVector(int n);

/// <summary>
/// ������� ������ � ��������� ������ ����� � ������ �������
/// </summary>
/// <typeparam name="n">- ������ �������</typeparam>
/// <param name="arr">- ������ ����� �����</param>
/// <returns>������ � ��������� ������ ����� � �������</returns>
template<size_t n>
std::tuple<int, int> findFirstAndLastEvenNumber(const std::array<int, n>& arr)
{
	std::tuple<int, int> res = { -1, -1 };
	bool flag = true;
	for (int i = 0; i < arr.size(); i++)
		if (arr[i] % 2 == 0 && flag)
		{
			std::get<0>(res) = i, std::get<1>(res) = i;
			flag = false;
		}
		else
			if (arr[i] % 2 == 0)
				std::get<1>(res) = i;
	return res;
}

/// <summary>
/// ������� �������� ������� � ��������� ��������, ������� � ����������
/// </summary>
/// <typeparam name="T">- ��� ������ � �������</typeparam>
/// <typeparam name="n">- ������ �������, ��������</typeparam>
/// <param name="arr">- ������</param>
template<typename T, size_t n>
void printArray(const std::array<T, n>& arr)
{
	assert(n % 2 == 1);
	for (int i = n - 1; i > 0; i -= 2)
		std::cout << arr[i] << " ";
}

/// <summary>
/// ������� ������, ��� �������� a[i] � b[i] ������������, �� ����������� �� ������������
/// </summary>
/// <typeparam name="n">- ������ �������, ��������</typeparam>
/// <param name="a">������ a</param>
/// <param name="b">������ b</param>
/// <returns>������������ a[i] � b[i]</returns>
template<size_t n>
std::vector<int> positiveProductArrays(const std::array<int, n>& a, const std::array<int, n>& b)
{
	int cnt = 0;
	for (int i = 0; i < n; i++)
		if (a[i] > 0 && b[i] > 0)
			cnt++;
	std::vector<int> v(cnt);
	int curr = 0;
	for (int i = 0; i < n; i++)
		if (a[i] > 0 && b[i] > 0)
			v[curr++] = a[i] * b[i];
	return v;
}

/// <summary>
/// ������ ������� ������ � ������ �������� �������
/// </summary>
/// <typeparam name="T">- ��� ������ � �������</typeparam>
/// <typeparam name="n">- ������ �������, ��������</typeparam>
/// <param name="arr">- ������</param>
template<typename T, rsize_t n>
void reverseArray(std::array<T, n>& arr)
{
	assert(n % 2 == 0);
	for (int i = 0; i < n / 2; i++)
	{
		int curr = arr[i];
		arr[i] = arr[n - 1 - i];
		arr[n - 1 - i] = curr;
	}
}

/// <summary>
/// ������� �� ������� ������� � ���������� ������� K,
/// ������� ��� ��������� �� ��� �������� �� ���� ������� ����� � �������� ������ ������� �� �������
/// </summary>
/// <typeparam name="T">- ��� ������ � ������� � �������</typeparam>
/// <param name="vec">- ������</param>
/// <param name="k">- ������ k-�� ��������</param>
template<typename T>
void deleteElementK(std::vector<T>& vec, size_t k)
{
	assert(k >= 0 && k < vec.size());
	vec.erase(vec.begin() + k);
}