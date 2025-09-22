#include <iostream>
#include <assert.h>
#include <vector>
#include "hw-2.h"

using namespace std;

double convertToMeters(int n, double len)
{
	assert(n >= 1 && n <= 5 && len >= 0);
	UnitsOfLength uof = static_cast<UnitsOfLength>(n);

	switch (uof)
	{
	case UnitsOfLength::Decimeter:
		return len / 10;
		break;
	case UnitsOfLength::Kilometer:
		return len * 1000;
		break;
	case UnitsOfLength::Metre:
		return len;
		break;
	case UnitsOfLength::Millimeter:
		return len / 1000;
		break;
	case UnitsOfLength::Centimetre:
		return len / 100;
	}
}

vector<int> createDegreeOfTwoVector(int n)
{
	assert(n > 0);
	vector<int> res(n);
	int val = 2;
	for (int i = 0; i < n; i++)
	{
		res[i] = val;
		val *= 2;
	}
	return res;
}