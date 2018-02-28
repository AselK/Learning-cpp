//Find rectangle perimeter

#include <iostream>

class Rectangle
{
public:
	void setWidth(double width)
	{
		width_ = width;
	}
	double getWidth()
	{
		return  width_;
	}

	void setHeight(double height)
	{
		height_ = height;
	}
	double getHeight()
	{
		return height_;
	}

	double perim()
	{
		return 2 * width_ + 2 * height_;
	}

private:
	double height_;
	double width_;
};

int main()
{
	Rectangle rect1;
	rect1.setHeight(10);
	rect1.setWidth(10);

	std::cout << rect1.perim();
}
