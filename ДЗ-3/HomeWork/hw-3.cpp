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

}