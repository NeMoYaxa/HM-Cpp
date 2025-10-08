#include <string>
#include <vector>
#include <cassert>
#include "Employee.h"
#include "AddtionalFuncs.h"

using namespace std;

vector<Employee> find_employees_by_position(const vector<Employee>& vec, string& post)
{
	int size = vec.size();
	assert(size > 0);
	vector<Employee> res;
	for (Employee emp : vec)
		if (emp.position == post)
			res.push_back(emp);
	return res;
}

vector<Employee> find_employees_with_skill(const vector<Employee>& vec, string& skill)
{
	int size = vec.size();
	assert(size > 0);
	vector<Employee> res;
	for (Employee emp : vec)
		for (string& sk : emp.skills)
			if (sk == skill)
			{
				res.push_back(emp);
				break;
			}
	return res;
}

vector<Employee> find_eligible_for_promotion(const vector<Employee>& vec)
{
	int size = vec.size();
	assert(size > 0);
	vector<Employee> res;
	for (Employee emp : vec)
		if (emp.is_eligible_for_promotion())
			res.push_back(emp);
	return res;
}
