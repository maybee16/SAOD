#include "search.h"
#include <string>
#include <iostream>

void rand_mass(int* mass, unsigned n, int min, int max)
{
	for (int i = 0; i < n; i++)
		mass[i] = min + rand() % max;
}

string search(int* mass, int n, int key)
{
	string result = "Результат поиска по ключу (" + to_string(key) + ") : ";
	for (int i = 0; i < n; i++) {
		if (mass[i] == key) {
			result += to_string(i) + "  ";
		}
	}
	return result;
}

void input(int* mass, int n)
{
	for (int i = 0; i < n; i++) {
		cout << "Элемент с индексом " << i << ": ";
		cin >> mass[i];
	}
}

void output(int* mass, int n)
{
	int k = 0;
	for (int i = 0; i < n; i++) {
		cout << mass[i] << " \t";
		k++;
		if (k == 10) {
			cout << endl;
			k = 0;
		}
	}
	cout << endl;
}