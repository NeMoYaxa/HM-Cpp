#include <iostream>
#include <assert.h>
#include <array>
#include <tuple>
#include "hw-2.h"
#include "date.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    // Задание 1
    cout << "Задание 1" << endl << "Введите номер года, месяца и деня: ";
    int year, month, day;
    cin >> year >> month >> day;
    assert(month >= 1 && month <= 12);
    Month mon = static_cast<Month>(month);
    cout << "Следующий день = ";
    nextDate(year, mon, day);
    cout << endl;
    
    // Задание 2
    cout << endl << "Задание 2" << endl << "Введите номер единица измерения и ее длину: ";
    int n;
    double len;
    cin >> n >> len;
    cout << "Длина отрезка в метрах = " << convertToMeters(n, len) << endl;

    // Задание 3
    cout << endl << "Задание 3" << endl << "Введите длину вектора: ";
    cin >> n;
    cout << "Вектор: ";
    for (int& x : createDegreeOfTwoVector(n))
        cout << x << " ";
    cout << endl;

    // Задание 4
    cout << endl << "Задание 4" << endl << "Массив: " << endl;
    array<int, 9> arr;
    for (int i = 0; i < 9; i++) 
    {
        arr[i] = i;
        cout << i << " ";
    }
    tuple<int, int> res = findFirstAndLastEvenNumber(arr);
    cout << endl << "Индекс первого и последнего четного числа = " << get<0>(res) << " " << get<1>(res) << endl;

    // Задание 5
    cout << endl << "Задание 5" << endl << "Массив: " << endl;
    for (int i = 0; i < 9; i++)
    {
        arr[i] = i;
        cout << i << " ";
    }
    cout << endl << "Элементы массива с нечетными номерами, начиная с последнег: ";
    printArray(arr);
    cout << endl;

    // Задание 6
    cout << endl << "Задание 6" << endl;
    array<int, 5> a = { 0, -2, 3 , 6, -3 };
    array<int, 5> b = { 4, -7, 5 , 3, 0 };
    cout << "Массив a: ";
    for (int i = 0; i < 5; i++)
        cout << a[i] << " ";
    cout << endl;
    cout << "Массив b: ";
    for (int i = 0; i < 5; i++)
        cout << b[i] << " ";
    cout << endl;
    cout << "Вектор: ";
    for (int& x : positiveProductArrays(a, b))
        cout << x << " ";
    cout << endl;

    // Задание 7
    cout << endl << "Задание 7" << endl << "Массив: " << endl;
    array<int, 10> arr_7;
    for (int i = 0; i < 10; i++)
    {
        arr_7[i] = i;
        cout << i << " ";
    }
    cout << endl;
    reverseArray(arr_7);
    cout << "Реверсируемый массив: ";
    for (int i = 0; i < 10; i++)
        cout << arr_7[i] << " ";
    cout << endl;

    // Задание 8
    cout << endl << "Задание 7" << endl << "Введите целое число n > 0 и 0 <= k < n: ";
    int k;
    cin >> n >> k;
    assert(n > 0);
    vector<int> vec(n);
    cout << "Вектор: ";
    for (int i = 0; i < n; i++)
    {
        vec[i] = i;
        cout << i << " ";
    }
    cout << endl;
    deleteElementK(vec, k);
    cout << "Новый вектор с удаленным номером элемента k: ";
    for (int i = 0; i < n - 1; i++)
        cout << i << " ";
}
/*
Задание 1
Введите номер года, месяца и деня: 4 2 28
Следующий день = February 29

Задание 2
Введите номер единица измерения и ее длину: 2 10
Длина отрезка в метрах = 10000

Задание 3
Введите длину вектора: 5
Вектор: 2 4 8 16 32

Задание 4
Массив:
0 1 2 3 4 5 6 7 8
Индекс первого и последнего четного числа = 0 8

Задание 5
Массив:
0 1 2 3 4 5 6 7 8
Элементы массива с нечетными номерами, начиная с последнег: 8 6 4 2

Задание 6
Массив a: 0 -2 3 6 -3
Массив b: 4 -7 5 3 0
Вектор: 15 18

Задание 7
Массив:
0 1 2 3 4 5 6 7 8 9
Реверсируемый массив: 9 8 7 6 5 4 3 2 1 0

Задание 7
Введите целое число n > 0 и 0 <= k < n: 4 2
Вектор: 0 1 2 3
Новый вектор с удаленным номером элемента k: 0 1 2
*/