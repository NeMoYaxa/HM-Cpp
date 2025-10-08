#include <iostream>
#include <string>
#include <vector>
#include <cassert>
#include "hw-4.h"

using namespace std;

void Employee::add_skill(const string& skill)
{
	assert(skill.size() > 0);
	skills.push_back(skill);
}

void Employee::remove_skill(const string& skill)
{
	assert(skill.size() > 0);
	int pos = -1;
	for (int i = 0; i < skills.size(); i++)
		if (skills[i] == skill)
			pos = i;
	if (pos > -1)
		skills.erase(skills.begin() + pos);
}

bool Employee::has_skill(const string& skill)
{
	assert(skill.size() > 0);
	for (const string& s : skills)
		if (s == skill)
			return true;
	return false;
}

int Employee::get_skills_count()
{
	return skills.size();
}

int Employee::calculate_bonus()
{
	if (years_of_service >= 5)
		return 50;
	return years_of_service * 10;
}

double Employee::calculate_total_salary()
{
	return salary + salary * static_cast<double>(calculate_bonus() / 100);
}

bool Employee::is_eligible_for_promotion()
{
	if (salary >= promotion_salary && years_of_service >= promotion_years_of_service)
		return true;
	return false;
}

void Employee::print_summary()
{
	cout << "ID = " << employee_id << endl
		<< "Имя = " << name << endl
		<< "Должность = " << position << endl
		<< "Общая зарплата = " << calculate_total_salary() << endl
		<< "Количество умений = " << get_skills_count() << endl;
}

void Employee::print_skills()
{
	for (const string& skill : skills)
		cout << skill << " ";
	cout << endl;
}

bool Employee::compare_by_salary(Employee emp)
{
	return salary > emp.salary;
}

bool Employee::compare_by_experience(Employee emp)
{
	return years_of_service > emp.years_of_service;
}