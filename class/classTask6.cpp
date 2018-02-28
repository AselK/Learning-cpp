//Написать метод в классе, возвращающий среднее из чисел (одно из)

#include <iostream>

class Num
{
public:
	void addValue(int num1, int num2, int num3)
	{
		if ( num1 > 0 && num1 <= 100)
		{
			number1_ = num1;
			std::cout << "Number " << num1 << " has been added" << std::endl;
		}
		else
		{
			std::cout << "You are wrong" << std::endl;
		}
		
		if ( num2 > 0 && num2 <= 100)
		{
			number2_ = num2;
			std::cout << "Number " << num2 << " has been added" << std::endl;
		}
		else
		{
			std::cout << "You are wrong" << std::endl;
		}
		if ( num3 > 0 && num3 <= 100)
		{
			number3_ = num3;
			std::cout << "Number " << num3 << " has been added" << std::endl;
		}
		if (( num2 < num1 && num2 > num3) || ( num2 > num1 && num2 < num3))
		{
			std::cout << "The middle number is " << num2 << std::endl;
		}
		else if (( num3 < num1 && num3 > num2) || (num3 > num1 && num3 < num2))
		{
			std::cout << "The middle number is " << num3 << std::endl;
		} 
		else
		{
			std::cout << "The middle number is " << num1 << std::endl;
		}
	}
private:
	int number1_;
	int number2_;
	int number3_;
};

int main()
{
	Num number;
	number.addValue(15, 30, 27);
	
}
