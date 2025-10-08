#pragma once

#include <string>
#include <vector>
#include "Employee.h"

/// <summary>
/// ���������� ���� ����������� ������������ ���������
/// </summary>
/// <param name="vec">- ������ �����������</param>
/// <param name="post">- ���������</param>
/// <returns>������ �����������</returns>
std::vector<Employee> find_employees_by_position(const std::vector<Employee>& vec, std::string& post);

/// <summary>
/// ���������� ����������� � ������������ �������
/// </summary>
/// <param name="vec">- ������ �����������</param>
/// <param name="skill">- ������</param>
/// <returns>������ �����������</returns>
std::vector<Employee> find_employees_with_skill(const std::vector<Employee>& vec, std::string& skill);

/// <summary>
/// ���������� �����������, ������� � ���������
/// </summary>
/// <param name="vec">- ������ �����������</param>
/// <returns>������ �����������</returns>
std::vector<Employee> find_eligible_for_promotion(const std::vector<Employee>& vec);