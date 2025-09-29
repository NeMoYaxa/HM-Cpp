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

int stringToInt(const string& str)
{
	return -1;
}

int maxLengthRussianWord(const string& str)
{
	int size = str.size();
	assert(size > 0 && str.contains(' ') && [](const string& s, int size) {
		for (int i = 0; i < size; i++)
			if (!((s[i] >= 'à' && s[i] <= 'ÿ') || (s[i] >= 'À' && s[i] <= 'ß') || s[i] == ' '))
				return false;
		return true;
		}(str, size));
	
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