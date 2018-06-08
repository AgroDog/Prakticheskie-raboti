#include <iostream>
#include <string>
using namespace std;
int main() 
{
	setlocale(LC_ALL, "Russian");
	int n = 9, m = 9;

	int** array = new int *[n];
	for (int i = 0; i < n; ++i)
		array[i] = new int[m];

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			array[i][j] = rand() % 31;
		}
	}

	cout << "Исходная матрица" << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << array[i][j] << '\t';
		}
		cout << endl;
	}
	cout << endl;

	for (int i = 0; i < 3; i++) 
	{
		for (int j = 0; j < 3; j++) 
		{
			int sum = 0;
			for (int k = 0; k < 3; k++) 
			{
				for (int t = 0; t < 3; t++) 
				{
					if (k!=1 || t!=1)
						sum += array[i*3 + k][j*3 + t];
				}
			}
			array[i*3 + 1][j*3 + 1] = sum;
		}
	}

	cout << "Преобразованная матрица" << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << array[i][j] << '\t';
		}
		cout << endl;
	}

	for (int i = 0; i < n; i++)
		delete[] array[i];
	delete[] array;
	
	system("pause");
	return 0;
}

