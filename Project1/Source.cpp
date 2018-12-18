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
		 cout << "Enter the number rows ?" << endl;
		cin >> rows;


	} while (rows<=0 || rows>10);
	do
	{
		cout << "Enter the number cols ?" << endl;
		cin >> cols;
	} while (rows <= 0 || rows > 10);

	for (int  i = 0; i < rows; i++)
	{
		for (int  j = 0; j < cols; j++)
		{
			cout << "Enter the numbers:"<<i+1<<"rows"<<j+1<<"cols"<< endl;
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
	cout << endl;

	int r = cols - 1;
	int p = 0;
	int u;
	for (int i = 0; i < rows; i++)
	{                               //Min!
		min = array[i][0];
		for (int j = 1; j < cols; j++)
		{
			if (min > array[i][j])
			{
				min = array[i][j];
				p = j;
			}
		}
		cout << "min in " <<i+1<< " rows :" << min;
		cout << endl;
		u = array[i][r];
		array[i][r] = array[i][p];
		array[i][p] = u;


		                            //Max !
		int y = 0;
		int x;
		max = array[i][0];
		for (int j = 1; j < cols; j++)
		{
			if (max < array[i][j])
			{
				max = array[i][j];
				y = j;
			}
		}
		array[i][y] = max;
		cout << "max in " << i + 1 << " rows :" << max;

		x = array[i][0];
		array[i][0] = max;
		array[i][y] = x;
		cout << endl;
	}
	cout << endl;
	
	cout << "Have changed" <<"\t"<<"1rows,1cols with max value in rows :" << endl;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << array[i][j] << "\t";
		}
		cout << endl;
	}
	 
	 
	return 0;

 }