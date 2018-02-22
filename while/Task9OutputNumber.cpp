//Output number * 2

#include <iostream>

int main()
{
	std::cout << "Input Number: ";
	int a;
	std::cin >> a;
	int counter = 0;
	while (a * 2 <= 1000000)
	{
		a = a * 2;
		counter++;
	}
	std::cout << counter << std::endl;
}
