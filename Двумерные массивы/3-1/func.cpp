#include "func.h"
#include <iostream>
using namespace std;

void rand_matrix(double** matr, unsigned n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			matr[i][j] = rand() % 100;
	}
}

void out_matrix(double** matr, unsigned n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			cout << matr[i][j] << " ";
		cout << endl;
	}
}

int local_min(double** matr, unsigned n)
{
	int min=0;
	bool fl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			fl = true;
			if (i > 0 && matr[i - 1][j] <= matr[i][j])
				fl = false;
			if (j > 0 && matr[i][j - 1] <= matr[i][j])
				fl = false;
			if (i < n-1 && matr[i + 1][j] <= matr[i][j])
				fl = false;
			if (j < n-1 && matr[i][j + 1] <= matr[i][j])
				fl = false;
			if (fl)
				min++;
		}
	}
	return min;
}

double modul_sum(double** matr, unsigned n)
{
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i < 9 - i)
				sum += abs(matr[i][j]);
		}
	}
	return sum;
}