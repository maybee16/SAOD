#include "func.h"
#include <iostream>

using namespace std;

void out_matr(double a[3][3], unsigned n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}
}

void triangular_matr(double a[3][3], unsigned n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			double mu = a[j][i] / a[i][i];
			for (int k = 0; k < n; k++)
				a[j][k] -= a[i][k] * mu;
		}
	}
}

unsigned num_lines(double a[3][3], unsigned n, double value)
{
	unsigned k = 0;
	double x = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			x = a[i][j] + a[i][j + 1];
		if (x < value)
			k++;
	}
	return k;
}