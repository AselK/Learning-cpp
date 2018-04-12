#include <iostream>

int main()
{
	int array1[100] = {0};
	array1[0] = 6;
	array1[1] = 5;
	array1[2] = 7;
	array1[3] = 8;
	int array2[100] = {0};
	array2[0] = 9;
	array2[1] = 8;
	array2[2] = 7;
	array2[3] = 6;
	int array3[100] = {0};
	int tmp = 0;
	for (int i = 0; i < 4; i++)
	{
		tmp = array1[i] + array2[i] + tmp;
		array3[i] = tmp % 10; 
		tmp = tmp / 10; 
		
	}
	
	array3[4] = tmp;
	
	for (int i = 4; i >= 0; i--)
	{
		std::cout << array3[i];
	}
}
