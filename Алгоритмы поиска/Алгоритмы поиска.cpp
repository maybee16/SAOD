// Алгоритмы поиска.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "search.h"
#include <iostream>
#include <ctime>

using namespace std;

const int n = 10000;

int main()
{
	setlocale(LC_ALL, "Rus");
	struct MyStruct
	{
		int a;
	};

	MyStruct* mstr = new MyStruct[10];
	int* mass1 = new int[n];
	float* mass2 = new float[n];
	int min = 0;
	int max = 1000;

	//поиск по целочисленному массиву
	rand_mass<int*>(mass1, n, min, max);
	cout << "Введенный массив : " << endl;
	output<int*>(mass1, n);
	unsigned int start_time = clock(); // начальное время
	cout << search<int*>(mass1, n, min + rand() % max) << endl;
	unsigned int end_time = clock(); // конечное время
	cout << "Время поиска по ключу : " << ((float)end_time - start_time) / CLOCKS_PER_SEC << " секунды " << endl;

	//поиск по вещественному массиву
	rand_mass<float*>(mass2, n, min, max);
	cout << "Введенный массив : " << endl;
	output<float*>(mass2, n);
	cout << search<float*>(mass2, n, min + rand() % max) << endl;
	
	input<int*>(mass1, 10);
	cout << "Введенный массив : ";
	output(mass1, 10);
	cout << search<int*>(mass1, 10, 5) << endl;

	//поиск по массиву структуры
	input<MyStruct*>(mstr, 10);
	cout << "Введенный массив : " << endl;
	output<MyStruct*>(mstr, 10);
	cout << search<MyStruct*>(mstr, n, min + rand() % max) << endl;

	delete(mass1);
	delete(mass2);
	delete(mstr);
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
