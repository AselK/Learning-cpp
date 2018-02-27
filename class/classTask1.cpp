//Find rectangle area

#include <iostream>

class Rectangle
{
public:
	double h;
	double w;
	double area()
	{
		return w * h;
	}
};


int main()
{
	Rectangle rect1;
	rect1.h = 10;
	rect1.w = 3;
	std::cout << rect1.area();
}
