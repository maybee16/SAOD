#pragma once
#include <string>
#include <iostream>

using namespace std;

template <typename T>
void rand_mass(T mass, unsigned n, int min, int max)
{
	for (int i = 0; i < n; i++)
		mass[i] = min + rand() % max;
}

template <typename T>
string search(T mass, int n, int key)
{
	string result = "Результат поиска по ключу (" + to_string(key) + ") : ";
	for (int i = 0; i < n; i++) {
		if (mass[i] == key) {
			result += to_string(i) + "  ";
		}
	}
	return result;
}

template <typename T>
void input(T mass, int n)
{
	for (int i = 0; i < n; i++) {
		cout << "Элемент с индексом " << i << ": ";
		cin >> mass[i];
	}
}

template <typename T>
void output(T mass, int n)
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