#include <iostream>
#include <string>
#include <cassert>
#include "hw-3.h"

using namespace std;

bool stringIsPalindrom(const string& str)
{
	int size = str.size();
	assert(size > 0);

	for (int i = 0; i < size / 2; i++)
		if (str[i] != str[size - 1 - i])
			return false;
	return true;
}

int stringToInt(const string& str, int b)
{
	int size = str.size();
	assert(size > 0 && b > 0 && b <= 10 && str[0] != '0' && [](const string& s, int b, int size) {
		int i = 0;
		if (s[0] == '-')
			i = 1;
		for (i; i < size; i++)
		{
			if (b == 1 && s[i] != '1')
				return false;
			if (b != 1 && (s[i] < '0' || s[i] > '0' + b - 1))
				return false;
		}
		return true;
		}(str, b, size));

	int i = 0, sign = 1, deg = 1, res = 0;
	if (str[0] == '-')
		i = 1, sign = -1;
	for (int g = size - 1; g >= i; g--)
	{
		res += deg * (str[g] - '0');
		deg *= 10;
	}
	return sign * res;
}

int maxLengthRussianWord(const string& str)
{
	int size = str.size();
	assert(size > 0 && str.contains(' ') /*&& [](const string& s, int size) {
		for (int i = 0; i < size; i++)
			if (!((s[i] >= 'à' && s[i] <= 'ÿ') || (s[i] >= 'À' && s[i] <= 'ß') || s[i] == ' '))
				return false;
		return true;
		}(str, size)*/);

	int cnt = 0, max = 0;
	for (int i = 0; i < size; i++)
		if (str[i] != ' ')
			cnt++;
		else if (cnt > max)
		{
			max = cnt;
			cnt = 0;
		}
	if (cnt > max)
		max = cnt;
	return max;
}