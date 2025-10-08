#pragma once

#include <string>
#include <vector>

/// <summary>
/// Размер оклада для повышения
/// </summary>
const int promotion_salary = 100000;

/// <summary>
/// Стаж работы для повышения
/// </summary>
const int promotion_years_of_service = 3;

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
	/// Стаж работы в компании (лет)
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
	void add_skill(const std::string& skill);

	/// <summary>
	/// Удаляет умение по названию
	/// </summary>
	/// <param name="skill">- Умение</param>
	void remove_skill(const std::string& skill);

	/// <summary>
	/// Проверяет наличие определенного умения
	/// </summary>
	/// <param name="skill">- Умение</param>
	/// <returns>true или false</returns>
	bool has_skill(const std::string& skill);

	/// <summary>
	/// Возвращает количество умений
	/// </summary>
	/// <returns>Количество умений</returns>
	int get_skills_count();

	/// <summary>
	/// Вычисляет бонус за стаж (10% от оклада за каждый год стажа, но не более 50% от оклада)
	/// </summary>
	/// <returns>Бонус за стаж</returns>
	int calculate_bonus();

	/// <summary>
	/// Вычисляет общую зарплату (оклад + бонус за стаж)
	/// </summary>
	/// <returns>Общая зарплата</returns>
	double calculate_total_salary();

	/// <summary>
	/// Проверяет возможность повышения (стаж более 3 лет и оклад менее 100000)
	/// </summary>
	/// <returns>true или false</returns>
	bool is_eligible_for_promotion();

	/// <summary>
	/// Выводит сводку по сотруднику: ID, имя, должность, стаж, общую зарплату, количество умений
	/// </summary>
	void print_summary();

	/// <summary>
	/// Выводит список всех умений сотрудника
	/// </summary>
	void print_skills();

	/// <summary>
	/// Cравнивает зарплату двух сотрудников (true если 1-ый зарабатывает больше, иначе false)
	/// </summary>
	/// <param name="emp">- Работник</param>
	/// <returns>true или false</returns>
	bool compare_by_salary(Employee emp);

	/// <summary>
	/// Cравнивает стаж двух сотрудников (true если 1-ый зарабатывает больше, иначе false)
	/// </summary>
	/// <param name="emp">- Работник</param>
	/// <returns>true или false</returns>
	bool compare_by_experience(Employee emp);
};
