#include <iostream>

int main()
{
	int array1[100] = {6,5,7};
	int array2[100] = {9,8,7};
	int array3[100] = {0};
	
	
	int tmp = array1[0] + array2[0]; // 15
	array3[0] = tmp % 10; // 5
	tmp = tmp / 10; // 1
	std::cout << array3[0];
	
	tmp = array1[1] + array2[1] + tmp; //14
	//std::cout << tmp <<std::endl;
	array3[1] = tmp % 10; //4
	//std::cout << array3[1] << std::endl;
	tmp = tmp / 10; //1
	//std::cout << tmp << std::endl;
	std::cout << array3[1];
	
	tmp = array1[2] + array2[1] + tmp; //15
	//std::cout << tmp <<std::endl;
	array3[2] = tmp % 10; //5
	//std::cout << array3[1] << std::endl;
	tmp = tmp / 10; //1
	//std::cout << tmp << std::endl;
	std::cout << array3[2];
	array3[3] = tmp;
	std::cout << tmp << std::endl;
}
