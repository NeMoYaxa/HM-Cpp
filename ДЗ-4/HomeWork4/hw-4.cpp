#include <string>
#include <vector>
#include <cassert>
#include "hw-4.h"

using namespace std;

void Employee::add_skill(string& skill)
{
	assert(skill.size() > 0);
	skills.push_back(skill);
}

void Employee::remove_skill(string& skill)
{
	assert(skill.size() > 0);
	int pos = -1;
	for (int i = 0; i < skills.size(); i++)
		if (skills[i] == skill)
			pos = i;
	if (pos > -1)
		skills.erase(skills.begin() + pos);
}

bool Employee::has_skill(string& skill)
{
	assert(skill.size() > 0);
	for (string& s : skills)
		if (s == skill)
			return true;
	return false;
}

int Employee::get_skills_count()
{
	return skills.size();
}
