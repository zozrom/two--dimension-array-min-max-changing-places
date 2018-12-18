#include <iostream>
using namespace std;
int main()
{
	int array[10][10];
	int rows;
	int cols;
	int max, min;
 	cout << "matrix B of dimension n  m. Find the maximum and minimum elements in each row of the matrix and swap them with the first and last elements of the row, respectively." << endl;
	cout << endl;
	 do
	{
		cout << "Enter the number rows ?";
		cin >> rows;


	} while (rows<=0 || rows>10);
	do
	{
		cout << "Enter the number cols ?";
		cin >> cols;
	} while (rows <= 0 || rows > 10);
	for (int  i = 0; i < rows; i++)
	{
		for (int  j = 0; j < cols; j++)
		{
			cout << "Enter the numbers:" << endl;
			cin >> array[i][j];
		}
		cout << endl;
	}
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << array[i][j] << "\t";
		}
		cout << endl;
	}
	 
	for (int i = 0; i < rows; i++)
	{
		max = array[i][0];
		for (int j = 1; j < cols; j++)
		{
			if (max<array[i][j])
			{
				max = array[i][j];
			}
		}
		cout << "max in first rows :" << max;
		cout << endl;
	}
	cout << endl;
	for (int i = 0; i < rows; i++)
	{
		min = array[i][0];
		for (int j = 1; j < cols; j++)
		{
			if (min >array[i][j])
			{
				min = array[i][j];
			}
		}
		cout << "min in first rows :" << min;
		cout << endl;
	}
	 
	return 0;

 }