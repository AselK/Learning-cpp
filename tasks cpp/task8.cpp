//8.Предложить пользователю ввести положительное число. Если он введет другое - повторять эту просьбу, пока не исправится.

#include <iostream>

int main()
{
	int number;
	
	do
	{
		std::cout <<"Enter positive number: " << std::endl;
		std::cin >> number;
	}
	while (number < 0);
}
