﻿// saod2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <fstream>
#include "functions.h"

const unsigned n = 10;

int main()
{
	setlocale(LC_ALL, "Rus");
	ofstream fout;
	string filename("Saod2.txt");
	fout.open(filename);
	double mass[n];
	rand_mass(mass, n);
	cout << "Начальный массив: ";
	output(mass, n);
	cout << endl;
	fout << "Начальный массив: ";
	for (int i = 0; i < n; i++)
	{
		fout << mass[i] << " ";
	}
	cout << "Минимальный по модулю элемент: " << min_el(mass, n) << endl;;
	fout << "Минимальный по модулю элемент: " << min_el(mass, n);

	cout << "Сумма модулей элементов массива, расположенных после первого элемента равного нулю: " << sum_el(mass, n) << endl;;
	fout << "Сумма модулей элементов массива, расположенных после первого элемента равного нулю: " << sum_el(mass, n);

	sort_mass(mass, n);
	cout << "Массив, в первой половине которого располагаются элементы, стоящие в четных позициях, а во второй половине — элементы, стоящие в нечетных позициях: ";
	output(mass, n);
	cout << endl;
	fout << "Массив, в первой половине которого располагаются элементы, стоящие в четных позициях, а во второй половине — элементы, стоящие в нечетных позициях : ";
	for (int i = 0; i < n; i++)
	{
		fout << mass[i] << " ";
	}
	fout.close();
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
