#include <iostream>

int main()
{
	std::cout <<"Enter number: ";
	int value;
	std::cin >> value;
	int array[100] = {0};
	int counter = 0;
	while (true)
	{
		array[counter] = value % 10;
		value = value / 10;
		counter++;
		if (value == 0)
		{
			break;
		}
	}
	for (int i = 0; i < counter ; i++)
	{
		std::cout << array[i] << std::endl;
	}
}
