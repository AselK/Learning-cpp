//5.Сравнить два числа 18446700000000000.5 и 18446700000000000.4 на равенство, ответ должен быть 0 (false).

#include <iostream>

int main()
{
	long double a = 18446700000000000.5L;
	long double b = 18446700000000000.4L; 
	std::cout << std::fixed << a << std::endl;
	std::cout << std::fixed << b << std::endl;
	std::cout << std::boolalpha <<(a==b);
}
