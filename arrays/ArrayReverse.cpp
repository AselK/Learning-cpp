#include <iostream>

int main()
{
	std::cout <<"Enter number: ";
	int value;
	std::cin >> value;
	
	while (true)
	{
		int result = 0;
		result = value % 10;
		value = value / 10;
		std::cout << result << std::endl;
		if (value == 0)
		{
			break;
		}
	}
}
