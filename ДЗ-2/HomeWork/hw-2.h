#pragma once

#include <iostream>
#include <vector>
#include <array>
#include <tuple>
#include <assert.h>

/// <summary>
/// “ип дл€ представлени€ единиц измерени€ 
/// </summary>
enum class UnitsOfLength { Decimeter = 1, Kilometer, Metre, Millimeter, Centimetre };

/// <summary>
/// Ќаходит длину отрезка в метрах
/// </summary>
/// <param name="n">- номер единицы измерени€</param>
/// <param name="len">- длина отрезка</param>
/// <returns>ƒлину отрезка в метрах</returns>
double convertToMeters(int n, double len);

/// <summary>
/// —оздает вектор и заполн€ет его степен€ми двойки от 1 до n-ой
/// </summary>
/// <param name="n">- длина вектора</param>
/// <returns>¬ектор со степен€ми двойки от 1 до n-ой</returns>
std::vector<int> createDegreeOfTwoVector(int n);

/// <summary>
/// Ќаходит первое и последнее чЄтное число в данном массиве
/// </summary>
/// <typeparam name="n">- размер массива</typeparam>
/// <param name="arr">- массив целых чисел</param>
/// <returns>ѕервое и последнее чЄтное число в массиве</returns>
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
/// ¬ыводит элементы массива с нечетными номерами, начина€ с последнего
/// </summary>
/// <typeparam name="T">- тип данных в массиве</typeparam>
/// <typeparam name="n">- размер массива, нечетный</typeparam>
/// <param name="arr">- массив</param>
template<typename T, size_t n>
void printArray(const std::array<T, n>& arr)
{
	assert(n % 2 == 1);
	for (int i = n - 1; i > 0; i -= 2)
		std::cout << arr[i] << " ";
}

/// <summary>
/// —оздает вектор, где элементы a[i] и b[i] положительны, то добавл€етс€ их произведение
/// </summary>
/// <typeparam name="n">- размер массива, нечетный</typeparam>
/// <param name="a">ћассив a</param>
/// <param name="b">ћассив b</param>
/// <returns>ѕроизведение a[i] и b[i]</returns>
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
/// ћен€ет местами первую и вторую половины массива
/// </summary>
/// <typeparam name="T">- тип данных в массиве</typeparam>
/// <typeparam name="n">- размер массива, нечетный</typeparam>
/// <param name="arr">- массив</param>
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
/// ”дал€ет из вектора элемент с пор€дковым номером K,
/// сдвинув все следующие за ним элементы на одну позицию влево и уменьшив размер вектора на единицу
/// </summary>
/// <typeparam name="T">- тип данных в массиве в векторе</typeparam>
/// <param name="vec">- вектор</param>
/// <param name="k">- индекс k-го элемента</param>
template<typename T>
void deleteElementK(std::vector<T>& vec, size_t k)
{
	assert(k >= 0 && k < vec.size());
	vec.erase(vec.begin() + k);
}