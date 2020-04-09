// Sort.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "Sorting.h"
#include <iostream>
#include <ctime>

using namespace std;

const int n = 40000;

int main()
{
	setlocale(LC_ALL, "Rus");

	int* mass1 = new int[n];
	float* mass2 = new float[n];
	int min = 0;
	int max = 1000;
	
	//сортировка целочисленного массива
	rand_mass<int*>(mass1, 10000, min, max);
	cout << "Введенный массив : " << endl;
	output<int*>(mass1, 10000);
	unsigned int start_time = clock(); // начальное время
	cout << "Сортировка пузырьком " << bubble_sort<int>(mass1, 10000) << endl;
	cout << "Сортировка выбором " << select_sort<int>(mass1, 20000) << endl;
	cout << "Сортировка вставками " << insert_sort<int>(mass1, 30000) << endl;
	cout << "Быстрая сортировка " << quick_sort<int>(mass1, 40000) << endl;
	cout << "Сортировка Шелла " << shell_sort<int>(mass1, 10) << endl;
	unsigned int end_time = clock(); // конечное время
	cout << "Время сортировки 10000 элементов : " << ((float)end_time - start_time) / CLOCKS_PER_SEC << " секунды " << endl;
	
	//сортировка по вещественного массива
	rand_mass<float*>(mass2, 20000, min, max);
	cout << "Введенный массив : " << endl;
	output<float*>(mass2, 20000);
	unsigned int start_time1 = clock(); // начальное время
	cout << "Сортировка пузырьком " << bubble_sort<float>(mass2, 10000) << endl;
	cout << "Сортировка выбором " << select_sort<float>(mass2, 20000) << endl;
	cout << "Сортировка вставками " << insert_sort<float>(mass2, 30000) << endl;
	cout << "Быстрая сортировка " << quick_sort<float>(mass2, 40000) << endl;
	cout << "Сортировка Шелла " << shell_sort<float>(mass2, 10) << endl;
	unsigned int end_time1 = clock(); // конечное время
	cout << "Время сортировки 20000 элементов : " << ((float)end_time1 - start_time1) / CLOCKS_PER_SEC << " секунды " << endl;
	
	rand_mass<float*>(mass2, 30000, min, max);
	unsigned int start_time2 = clock(); // начальное время
	bubble_sort<float>(mass2, 30000);
	unsigned int end_time2 = clock(); // конечное время
	cout << "Время сортировки 30000 элементов : " << ((float)end_time2 - start_time2) / CLOCKS_PER_SEC << " секунды " << endl;

	rand_mass<float*>(mass2, 40000, min, max);
	unsigned int start_time3 = clock(); // начальное время
	bubble_sort<float>(mass2, 40000);
	unsigned int end_time3 = clock(); // конечное время
	cout << "Время сортировки 40000 элементов : " << ((float)end_time3 - start_time3) / CLOCKS_PER_SEC << " секунды " << endl;

	input<int*>(mass1, 10);
	cout << "Введенный массив : ";
	output(mass1, 10);
	cout << "Сортировка Шелла " << shell_sort<int>(mass1, 10) << endl;

	delete(mass1);
	delete(mass2);
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
