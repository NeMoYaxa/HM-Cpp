#pragma once

#include <string>
#include <vector>

/// <summary>
/// Данные о сотруднике компании
/// </summary>
struct Employee
{
	/// <summary>
	/// Имя сотрудника
	/// </summary>
	std::string name;

	/// <summary>
	/// Идентификационный номер 
	/// </summary>
	int employee_id;

	/// <summary>
	/// Должность
	/// </summary>
	std::string position;

	/// <summary>
	/// Базовый оклад
	/// </summary>
	double salary;

	/// <summary>
	/// Стаж работы в компании(лет)
	/// </summary>
	int years_of_service;

	/// <summary>
	/// Умения
	/// </summary>
	std::vector<std::string> skills;

	/// <summary>
	/// Конструктор
	/// </summary>
	/// <param name="name">- Имя сотрудника</param>
	/// <param name="employee_id">- Идентификационный номер </param>
	/// <param name="position">- Должность</param>
	/// <param name="years_of_service">- Стаж работы в компании(лет)</param>
	Employee(std::string name, int employee_id, std::string position, int years_of_service)
	{
		this->name = name;
		this->employee_id = employee_id;
		this->position = position;
		this->years_of_service = years_of_service;
	}

	/// <summary>
	/// Добавляет умение сотруднику
	/// </summary>
	/// <param name="skill">- Умение</param>
	void add_skill(std::string& skill);

	/// <summary>
	/// Удаляет умение по названию
	/// </summary>
	/// <param name="skill">- Умение</param>
	void remove_skill(std::string& skill);

	/// <summary>
	/// Проверяет наличие определенного умения
	/// </summary>
	/// <param name="skill">- Умение</param>
	/// <returns>true или false</returns>
	bool has_skill(std::string& skill);

	/// <summary>
	/// Возвращает количество умений
	/// </summary>
	/// <returns>Количество умений</returns>
	int get_skills_count();
};
