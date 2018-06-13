// array/function
#include "stdafx.h"
#include <iostream>
#include <ctime>

void fillArray(int arr[], const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % 10;
	}
}

void printArray(int arr[], const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		std::cout << arr[i] << std::endl;
	}
}

int main()
{
	const int SIZE = 10;
	int arr[SIZE];

	fillArray (arr, SIZE);
	printArray (arr, SIZE);
    return 0;
}

