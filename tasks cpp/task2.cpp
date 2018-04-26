//2.Создать массив char’ов или указатель на строку "Hello\ba\nr", вывести эту строку на экран, что оно выведет и почему?

#include <iostream>

int main()
{
	/*char a [11] = {};
	a[0] = 'h';
	a[1] = 'e';
	a[2] = 'l';
	a[3] = 'l';
	a[4] = 'o';
	std::cout << a;*/
	char a [13] = "Hello\\ba\\nr";
	std::cout <<a << std::endl;
	const char * str = "Hello\\ba\\nr";
	std::cout <<str;
}
