#pragma once

#include <string>
#include <vector>
#include "Employee.h"

/// <summary>
/// Возвращает всех сотрудников определенной должности
/// </summary>
/// <param name="vec">- Вектор сотрудников</param>
/// <param name="post">- Должность</param>
/// <returns>Вектор сотрудников</returns>
std::vector<Employee> find_employees_by_position(const std::vector<Employee>& vec, std::string& post);

/// <summary>
/// Возвращает сотрудников с определенным умением
/// </summary>
/// <param name="vec">- Вектор сотрудников</param>
/// <param name="skill">- Умение</param>
/// <returns>Вектор сотрудников</returns>
std::vector<Employee> find_employees_with_skill(const std::vector<Employee>& vec, std::string& skill);

/// <summary>
/// Возвращает сотрудников, готовых к повышению
/// </summary>
/// <param name="vec">- Вектор сотрудников</param>
/// <returns>Вектор сотрудников</returns>
std::vector<Employee> find_eligible_for_promotion(const std::vector<Employee>& vec);