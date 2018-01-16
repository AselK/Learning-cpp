#include <iostream>

using namespace std;

void swap(int& x, int& y)
{
	int temp = x;
	x = y;
	y = temp;
}

int main()
{
	const int ARRAY_LENGTH = 5;
	
	int array[ARRAY_LENGTH] = {7, 6, 5, 4, 10};
	
	for (int i = 0; i < ARRAY_LENGTH; i++)
	{
		cout << array[i] << " ";
	}
	cout << endl;
	
	// сортировка
	for (int j = 0; j < ARRAY_LENGTH - 1; j++)
	{
		for (int i = 0; i < ARRAY_LENGTH - 1 - j; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap(array[i], array[i + 1]);
			}
		}
	}
	
	// вывод в консоль
	for (int i = 0; i < ARRAY_LENGTH; i++)
	{
		cout << array[i] << " ";
	}
	
}
