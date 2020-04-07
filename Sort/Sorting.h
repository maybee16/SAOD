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
string bubble_sort(T* mass, unsigned n)
{
	string result;
	T tmp;
	for (int i = 0; i < n - 1; ++i) // i - ����� �������
	{
		for (int j = 0; j < n - 1; ++j) // ���������� ���� �������
		{
			if (mass[j + 1] < mass[j])
			{
				tmp = mass[j + 1];
				mass[j + 1] = mass[j];
				mass[j] = tmp;
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		result += to_string(mass[i]) + "  ";
	}
	return result;
}

template <typename T>
string select_sort(T* mass, unsigned n)
{
	T tmp;
	string result;
	for (int i = 0; i < n; ++i) // i - ����� �������� ����
	{
		int pos = i;
		tmp = mass[i];
		for (int j = i + 1; j < n; ++j) // ���� ������ ����������� ��������
		{
			if (mass[j] < tmp)
			{
				pos = j;
				tmp = mass[j];
			}
		}
		mass[pos] = mass[i];
		mass[i] = tmp; // ������ ������� ���������� � a[i]
	}
	for (int i = 0; i < n; i++)
	{
		result += to_string(mass[i]) + "  ";
	}
	return result;
}

template <typename T>
string insert_sort(T* mass, unsigned n)
{
	T tmp;
	string result;
	for (int i = 1, j; i < n; ++i) // ���� ��������, i - ����� �������
	{
		tmp = mass[i];
		for (j = i - 1; j >= 0 && mass[j] > tmp; --j) // ����� ����� �������� � ������� ������������������ 
			mass[j + 1] = mass[j];    // �������� ������� �������, ���� �� �����
		mass[j + 1] = tmp; // ����� �������, �������� �������    
	}
	for (int i = 0; i < n; i++)
	{
		result += to_string(mass[i]) + "  ";
	}
	return result;
}

template <typename T>
string quick_sort(T* mass, unsigned n)
{
	string result;
	long i = 0, j = n;      // ��������� ��������� �� �������� �����
	T temp, p;
	p = mass[n >> 1];      // ����������� �������
	// ��������� ����������
	do 
	{
		while (mass[i] < p) i++;
		while (mass[j] > p) j--;

		if (i <= j) 
		{
			temp = mass[i]; mass[i] = mass[j]; mass[j] = temp;
			i++; j--;
		}
	} while (i <= j);
	// ����������� ������, ���� ����, ��� ����������� 
	if (j > 0) quick_sort(mass, j);
	if (n > i) quick_sort(mass + i, n - i);
	for (int i = 0; i < n; i++)
	{
		result += to_string(mass[i]) + "  ";
	}
	return result;
}

int increment(long inc[], long n)
{
	int p1, p2, p3, s;
	p1 = p2 = p3 = 1;
	s = -1;
	do
	{
		if (++s % 2)
		{
			inc[s] = 8 * p1 - 6 * p2 + 1;
		}
		else
		{
			inc[s] = 9 * p1 - 9 * p3 + 1;
			p2 *= 2;
			p3 *= 2;
		}
		p1 *= 2;
	} while (3 * inc[s] < n);

	return s > 0 ? --s : 0;
}

template <typename T>
string shell_sort(T* mass, unsigned n)
{
	string result;
	long inc, i, j, seq[40];
	int s;
	s = increment(seq, n); // ���������� ������������������ ����������
	while (s >= 0)  // ���������� ��������� � ������������ inc[] 
	{
		inc = seq[s--];
		for (i = inc; i < n; ++i)
		{
			T temp = mass[i];
			for (j = i; (j >= inc) && (temp < mass[j - inc]); j -= inc) {
				mass[j] = mass[j - inc];
			}
			mass[j] = temp;
		}
	}
	for (int i = 0; i < n; i++)
	{
		result += to_string(mass[i]) + "  ";
	}
	return result;
}

template <typename T>
void input(T mass, int n)
{
	for (int i = 0; i < n; i++) {
		cout << "������� ������� � �������� " << i << ": ";
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