//Нахождение максимального элемента в массиве

#include <iostream>

int main()
{
	int arr[5] = {5,8,23,67,100};
	int max = arr[0];
	for (int i = 1; i < 5; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
	}
	std::cout << max <<std::endl;
}

