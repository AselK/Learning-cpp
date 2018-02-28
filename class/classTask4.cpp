//Написать класс Num, который хранит число от 0 до 100

#include <iostream>

class Num
{
public:
	void addValue(int number)
	{
		if ( number > 0 && number <= 100)
		{
			number_ = number;
			std::cout << "Number " << number << " has been added" << std::endl;
		}
		else
		{
			std::cout << "You are wrong" << std::endl;
		}
	}
private:
	int number_;
};

int main()
{
	Num number;
	number.addValue(25);
}
