#include <iostream>
#include <vector>
#include "Employee.h"
#include "AddtionalFuncs.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	cout << boolalpha;

	Employee emp1("Иван Петров", 1001, "Разработчик", 1);
	emp1.salary = 81000;
	emp1.add_skill("C++");
	emp1.add_skill("Базы данных");
	emp1.print_summary();
	emp1.print_skills();
	cout << endl;


	Employee emp2("Мария Сидорова", 1002, "Дизайнер", 4);
	emp2.salary = 80000;
	emp2.add_skill("Adobe Photoshop");
	emp2.add_skill("Figma");
	emp2.add_skill("UI/UX дизайн");
	emp2.print_summary();
	emp2.print_skills();
	cout << endl;


	Employee emp3("Алексей Козлов", 1003, "Менеджер проектов", 7);
	emp3.salary = 110000;
	emp3.add_skill("Управление проектами");
	emp3.add_skill("Agile");
	emp3.add_skill("Презентации");
	emp3.print_summary();
	emp3.print_skills();
	cout << endl;


	Employee emp4("Яков Батуев", 1004, "Разработчик", 9);
	emp4.salary = 95700;
	emp4.add_skill("C++");
	emp4.add_skill("C#");
	emp4.add_skill("Базы данных");
	emp4.print_summary();
	emp4.print_skills();
	cout << endl;

	cout << "Сравнение по зарплате:" << endl;
	cout << "Иван зарабатывает больше Марии = " << emp1.compare_by_salary(emp2) << endl;
	cout << "Яков зарабатывает больше Алексея = " << emp4.compare_by_salary(emp3) << endl;

	cout << endl << "Сравнение по стажу:" << endl;
	cout << "У Ивана больше стажа чем Марии = " << emp1.compare_by_experience(emp2) << endl;
	cout << "У Якова больше стажа Алексея = " << emp4.compare_by_experience(emp3) << endl;

	cout << endl << "Тестирование удаления, повышения (для Марии): ";
	cout << emp2.is_eligible_for_promotion() << "  ";
	emp2.remove_skill("Figma");
	cout << emp2.get_skills_count();
	cout << endl;

	cout << endl << "Тесты дополнительных функций:" << endl;
	vector<Employee> vec;
	vec.push_back(emp1);
	vec.push_back(emp2);
	vec.push_back(emp3);
	vec.push_back(emp4);

	string post = "Разработчик";
	for (Employee emp : find_employees_by_position(vec, post))
		cout << emp.name << " Разработчик " << endl;
	cout << endl;

	string skill = "C++";
	for (Employee emp : find_employees_with_skill(vec, skill))
		cout << emp.name << " Разработчик C++" << endl;
	cout << endl;

	for (Employee emp : find_eligible_for_promotion(vec))
		cout << emp.name << " Готов(а) к повышению  " << endl;
	cout << endl;

	sort_employees_by_salary(vec);
	for (Employee emp : vec)
		cout << emp.salary << endl;
}

/*
ID = 1001
Имя = Иван Петров
Должность = Разработчик
Общая зарплата = 81000
Количество умений = 2
C++ Базы данных

ID = 1002
Имя = Мария Сидорова
Должность = Дизайнер
Общая зарплата = 80000
Количество умений = 3
Adobe Photoshop Figma UI/UX дизайн

ID = 1003
Имя = Алексей Козлов
Должность = Менеджер проектов
Общая зарплата = 110000
Количество умений = 3
Управление проектами Agile Презентации

ID = 1004
Имя = Яков Батуев
Должность = Разработчик
Общая зарплата = 95700
Количество умений = 3
C++ C# Базы данных

Сравнение по зарплате:
Иван зарабатывает больше Марии = true
Яков зарабатывает больше Алексея = false

Сравнение по стажу:
У Ивана больше стажа чем Марии = false
У Якова больше стажа Алексея = true

Тестирование удаления, повышения (для Марии): true  2

Тесты дополнительных функций:
Иван Петров Разработчик
Яков Батуев Разработчик

Иван Петров Разработчик C++
Яков Батуев Разработчик C++

Мария Сидорова Готов(а) к повышению
Яков Батуев Готов(а) к повышению

80000
81000
95700
110000
*/
