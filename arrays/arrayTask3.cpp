//Нахождение суммы элементов массива

#include <iostream>

int main()
{
	int length;
	std::cout << "Enter size: ";
	std::cin >> length;

	int* array = new int[length];
	// input
	for (int i = 0; i < length; i++)
	{
		std::cout << "Enter element #" << i << ":";
		std::cin >> array[i];
	}

	// calculate sum
	int sum = 0;
	for (int i = 0; i < length; i++)
	{
		sum = sum + array[i];
	}

	std::cout << sum;

	delete [] array;
}

