//Заполнить массив уникальными случайными числами

#include "stdafx.h"
#include <iostream>
#include <ctime>

int main()
{
	srand(time(NULL));

	int const SIZE = 10;
	int arr[SIZE];
	int count = 0;

	while (count < SIZE)
	{
		int randNumber = rand() % 20 + 1;
		if (count == 0)
		{
			arr[0] = randNumber;
			count++;
		}
		else
		{
			bool exists = false;
			for (int i = 0; i < count; i++)
			{

				if (arr[i] == randNumber)
				{
					exists = true;
					break;
				}
			}
			if (!exists)
			{
				arr[count] = randNumber;
				count++;
			}
		}
	}
	for (int i = 0; i < SIZE; i++)
	{
		std::cout << arr[i] << std::endl;
	}
    return 0;
}

