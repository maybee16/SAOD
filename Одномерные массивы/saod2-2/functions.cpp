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
		if (mass[i] < 0)
		{
			for (i + 1; i < n; i++)
				sum += mass[i];
		}
	}
	return sum;
}

void sort_mass(double mass[], unsigned n, double a, double b)
{
	int k = 0;
	for (int i = 0; i < n; i++)
	{
		if ((mass[i] < a) || (mass[i] > b))
		{
			mass[i-k] = mass[i];
		}
		else
			k++;
	}
	for (int i = k+1; i < n; i++)
	{
		mass[i] = 0;
	}
}

void output(double mass[], unsigned n)
{
	for (int i = 0; i < n; i++) 
	{
		cout << mass[i] << " ";
	}
}

