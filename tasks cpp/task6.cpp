//6.Создать три переменные char, запросить у пользователя ввести в каждую из этих переменных символ, если эти символы ‘a’, ’b’ и ‘c’ (в любом порядке) - вывести на экран “ABC”, иначе “NO\ABC”

#include <iostream>

int main()
{
	char a;
	char b;
	char c;
	//std::cout <<"Insert: ";
	std::cin >> a;
	//std::cout <<"Insert: ";
	std::cin >> b;
	//std::cout <<"Insert: ";
	std::cin >> c;
	/*std::cout <<"Insert: ";
	char insert;
	std::cin >> insert;*/
	if (a == 'a' && b == 'b' && c == 'c')
	{
		std::cout << "ABC" << std::endl;
	}
	else if (a == 'a' && b == 'c' && c == 'b')
	{
		std::cout << "ABC" << std::endl;
	}
	else if (a == 'b' && b == 'a' && c == 'c')
	{
		std::cout << "ABC" << std::endl;
	}
	else if (a == 'b' && b == 'c' && c == 'a')
	{
		std::cout << "ABC" << std::endl;
	}
	else if (a == 'c' && b == 'a'  && c == 'b')
	{
		std::cout << "ABC" << std::endl;
	}
	else if (a == 'c' && b == 'b' && c == 'a')
	{
		std::cout << "ABC" << std::endl;
	}
	else
	{
		std::cout << "NO ABC" << std::endl;
	}
}
