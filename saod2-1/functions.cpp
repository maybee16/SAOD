#include "functions.h"
#include <iostream>

using namespace std;

void rand_mass(double mass[], unsigned n)
{
	for (int i = 0; i < n; i++)
		mass[i] = rand() % 100;
}

double min_el(double mass[], unsigned n)
{
	double min = mass[0];
	for (int i = 0; i < n; i++)
	{
		if (abs(mass[i]) < min)
			min = abs(mass[i]);
	}
	return min;
}

double sum_el(double mass[], unsigned n)
{
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		if (mass[i] == 0)
		{
			for (i + 1; i < n; i++)
				sum += mass[i];
		}
	}
	return sum;
}

void sort_mass(double mass[], unsigned n)
{
	double *mass1 = new double[n];
	int j = 0;
	int k = 0;
	for (int i = 0; i < n; i++)
	{
		if (i % 2 == 0)
		{
			mass1[j] = mass[i];
			j++;
			k++;
		}
	}
	for (int i = 0; i < n; i++)
	{
		if (i%2 == 1)
		{
			mass1[k] = mass[i];
			k++;
		}
	}
	for (int i = 0; i < n; i++)
	{
		mass[i] = mass1[i];
	}
}

void output(double mass[], unsigned n)
{
	for (int i = 0; i < n; i++) 
	{
		cout << mass[i] << " ";
	}
}

