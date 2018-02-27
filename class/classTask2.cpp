//Find rectangle perimeter

#include <iostream>

class Rectangle
{
public:
	double h;
	double w;
	double perim()
	{
		return 2 * w + 2 * h;
	}
};


int main()
{
	Rectangle rect1;
	rect1.h = 10;
	rect1.w = 3;
	std::cout << rect1.perim();
}
