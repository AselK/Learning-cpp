//Пользователь вводит значение двух переменных. 
//Описать меню в консоли для математических операций сложения, вычитания, умножения, деления. 
//Через оператор switch реализовать математическую операцию соответствующую пункту меню.

#include "stdafx.h"
#include <iostream>


int main()
{
	std::cout << "Enter number1: ";
	double number1;
	std::cin >> number1;
	std::cout << "Enter number2: ";
	double number2;
	std::cin >> number2;
	int result;
	double count;
	std::cout << "Choose: 1 - addition, 2 - subtraction, 3 - multiplication, 4 - division " << std::endl;
	std::cin >> result;

	switch (result)
	{
	case 1:
		count = number1 + number2;
		std::cout << "You've choosen addition. Result is: " << count << std::endl;
		break;
	case 2:
		count = number1 - number1;
		std::cout << "You've choosen subtraction. Result is: " << count << std::endl;
		break;
	case 3:
		count = number1 * number2;
		std::cout << "You've choosen multiplication. Result is: " << count << std::endl;
		break;
	case 4:
		if (number2 == 0)
		{
			std::cout << "Cannot divide by zero!" << std::endl;
		}
		else
		{
			count = number1 / number2;
			std::cout << "You've choosen division. Result is: " << count << std::endl;
		}
		break;
	default:
		std::cout << "You didn't choose anything!" << std::endl;
		break;
	}
}

