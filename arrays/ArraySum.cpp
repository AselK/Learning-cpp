#include <iostream>

int main()
{
	int array1[5];
	int array2[5];
	int array3[5];
	
	array1[0] = 1;
	array1[1] = 2;
	array1[2] = 3;
	array1[3] = 4;
	array1[4] = 5;
	
	array2[0] = 1;
	array2[1] = 2;
	array2[2] = 3;
	array2[3] = 4;
	array2[4] = 5;
	
	array3[0] = array1[0] + array2[0];
	array3[1] = array1[1] + array2[1];
	array3[2] = array1[2] + array2[2];
	array3[3] = array1[3] + array2[3];
	array3[4] = array1[4] + array2[4];
	
	std::cout << array3[0] << std::endl;
	std::cout << array3[1] << std::endl;
	std::cout << array3[2] << std::endl;
	std::cout << array3[3] << std::endl;
	std::cout << array3[4] << std::endl;
	
	
	for (int i = 0; i < 5; i++)
	{
		array3[i] = array1[i] + array2[i];
		std::cout << array3[i] << std::endl;
	}
}
