//Find rectangle area

#include <iostream>

class Rectangle
{
public:
	double area()
	{
		return width_ * height_;
	}
	void setHeight(double height)
	{
		height_ = height;
	}
	void setWidth(double width)
	{
		width_ = width;
	}
private:
	double height_;
	double width_;
};


int main()
{
	Rectangle rect1;
	rect1.setHeight(10);
	rect1.setWidth(3);
	std::cout << rect1.area();
}
