//Разработать программу, которая выводит на экран линию из символов.
//Число символов, какой использовать символ, и какая будет линия - вертикальная, или горизонтальная - указывает пользователь.
#include "stdafx.h"
#include <iostream>

int main()
{
	int symbolCount;
	char symbol;
	int lineType;
	int index = 0;

	std::cout << "Input quantity of symbol: " << std::endl;
	std::cin >> symbolCount;

	std::cout << "Input symbol: " << std::endl;
	std::cin >> symbol;

	std::cout << "Choose type of line: " << "1 is vertical line," << " 2 is horizontal line" << std::endl;
	std::cin >> lineType;

	if (lineType != 1 && lineType != 2)
	{
		std::cout << "Wrong line type!" << std::endl;
	}

	while (index < symbolCount)
	{
		if (lineType == 1)
		{
			std::cout << symbol << std::endl;
		}
		else if (lineType == 2)
		{
			std::cout << symbol;
		}
		index++;
	}
	std::cout << std::endl << std::endl;
}
