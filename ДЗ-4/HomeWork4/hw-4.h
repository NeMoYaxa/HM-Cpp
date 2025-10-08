#pragma once

#include <string>
#include <vector>

/// <summary>
/// ������ ������ ��� ���������
/// </summary>
const int promotion_salary = 100000;

/// <summary>
/// ���� ������ ��� ���������
/// </summary>
const int promotion_years_of_service = 3;

/// <summary>
/// ������ � ���������� ��������
/// </summary>
struct Employee
{
	/// <summary>
	/// ��� ����������
	/// </summary>
	std::string name;

	/// <summary>
	/// ����������������� ����� 
	/// </summary>
	int employee_id;

	/// <summary>
	/// ���������
	/// </summary>
	std::string position;

	/// <summary>
	/// ������� �����
	/// </summary>
	double salary;

	/// <summary>
	/// ���� ������ � �������� (���)
	/// </summary>
	int years_of_service;

	/// <summary>
	/// ������
	/// </summary>
	std::vector<std::string> skills;

	/// <summary>
	/// �����������
	/// </summary>
	/// <param name="name">- ��� ����������</param>
	/// <param name="employee_id">- ����������������� ����� </param>
	/// <param name="position">- ���������</param>
	/// <param name="years_of_service">- ���� ������ � ��������(���)</param>
	Employee(std::string name, int employee_id, std::string position, int years_of_service)
	{
		this->name = name;
		this->employee_id = employee_id;
		this->position = position;
		this->years_of_service = years_of_service;
	}

	/// <summary>
	/// ��������� ������ ����������
	/// </summary>
	/// <param name="skill">- ������</param>
	void add_skill(const std::string& skill);

	/// <summary>
	/// ������� ������ �� ��������
	/// </summary>
	/// <param name="skill">- ������</param>
	void remove_skill(const std::string& skill);

	/// <summary>
	/// ��������� ������� ������������� ������
	/// </summary>
	/// <param name="skill">- ������</param>
	/// <returns>true ��� false</returns>
	bool has_skill(const std::string& skill);

	/// <summary>
	/// ���������� ���������� ������
	/// </summary>
	/// <returns>���������� ������</returns>
	int get_skills_count();

	/// <summary>
	/// ��������� ����� �� ���� (10% �� ������ �� ������ ��� �����, �� �� ����� 50% �� ������)
	/// </summary>
	/// <returns>����� �� ����</returns>
	int calculate_bonus();

	/// <summary>
	/// ��������� ����� �������� (����� + ����� �� ����)
	/// </summary>
	/// <returns>����� ��������</returns>
	double calculate_total_salary();

	/// <summary>
	/// ��������� ����������� ��������� (���� ����� 3 ��� � ����� ����� 100000)
	/// </summary>
	/// <returns>true ��� false</returns>
	bool is_eligible_for_promotion();

	/// <summary>
	/// ������� ������ �� ����������: ID, ���, ���������, ����, ����� ��������, ���������� ������
	/// </summary>
	void print_summary();

	/// <summary>
	/// ������� ������ ���� ������ ����������
	/// </summary>
	void print_skills();

	/// <summary>
	/// C��������� �������� ���� ����������� (true ���� 1-�� ������������ ������, ����� false)
	/// </summary>
	/// <param name="emp">- ��������</param>
	/// <returns>true ��� false</returns>
	bool compare_by_salary(Employee emp);

	/// <summary>
	/// C��������� ���� ���� ����������� (true ���� 1-�� ������������ ������, ����� false)
	/// </summary>
	/// <param name="emp">- ��������</param>
	/// <returns>true ��� false</returns>
	bool compare_by_experience(Employee emp);
};
