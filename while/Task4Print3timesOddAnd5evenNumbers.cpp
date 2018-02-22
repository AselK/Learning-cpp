//Print a three times if it's odd otherwise print it five times

#include <iostream>

int main()
{
	std::cout << "Input Number: ";
	int a;
	std::cin >> a;
	if ( a % 2 != 0)
	{
		int k = 1;
		while (k <= 3)
		{
			std::cout << "Odd number" << std::endl;
			k++;
		}
	}
	else if (a % 2 == 0)
	{
		int j = 1;
		while (j <= 5)
		{
			std::cout << "Even number" << std::endl;
			j++;
		}
	}
}
