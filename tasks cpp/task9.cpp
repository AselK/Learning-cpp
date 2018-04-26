//9.Создать массив из 1000 целых чисел, заполнить его последовательностью от 1000 до 2000

#include <iostream>

int main()
{
	//int a = 1000;
	int array [1000];
	for (int i = 0; i <= 1000; i++)
	{
		//array[i] = a;
		array[i] = 1000 + i;
		std::cout << array[i] << std::endl;
		//a++;
	}
}
