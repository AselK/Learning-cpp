//7.Запросить у пользователя ввести число от 1 до 10, вывести на экран словом это число, в зависимости от выбранного (“one”, “two” и т.д.), если ввел не то, вывести “Obidul’ki:(”

#include <iostream>

int main()
{
	std::cout <<"Enter number from 1 to 10: ";
	int number;
	std::cin >> number;
	switch (number)
	{
		case 1: 
		{	
			std::cout << "one" << std::endl;
			break;
		}
		case 2:
		{
			std::cout << "two" << std::endl;
			break;
		}
		case 3: 
		{
			std::cout << "three" << std::endl;
			break;
		}
		case 4: 
		{
			std::cout << "four" << std::endl;
			break;
		}
		case 5: 
		{
			std::cout << "five" << std::endl;
			break;
		}
		case 6: 
		{
			std::cout << "six" << std::endl;
			break;
		}
		case 7: 
		{
			std::cout << "seven" << std::endl;
			break;
		}
		case 8: 
		{
			std::cout << "eight" << std::endl;
		}
		case 9: 
		{
			std::cout << "nine" << std::endl;
			break;
		}
		case 10:
		{
			std::cout << "ten" << std::endl;
			break;
		}
		default:
		{
			std::cout << "Obidul\'ki:(" << std::endl;

		}
	}
}
