//1.Инициализировать 4 переменных значением 123 в двоичном(bin), десятичном(dec), шестнадцатеричном(hex), восьмеричном(oct) представлениях (системах счисления) и вывести их на экран.

#include <iostream>

int main()
{
	int a = 123;
	int b = 0b1111011;
	int c = 0x7B;
	int d = 0173;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;
	std::cout << d << std::endl;
}



