//Compare area of rectangle (Constructor)

#include <iostream>

class Rectangle
{
public:
	double area()
	{
		return width_ * height_;
	}
	bool compare(Rectangle ob)
	{
		return area() < ob.area();
	}
	Rectangle(double height, double width)
	{
		height_ = height;
		width_ = width;
	}
private:
	double height_;
	double width_;
};


int main()
{
	Rectangle obj(2,3), ob2(4,5); 
	std::cout << std::boolalpha << obj.compare(ob2)<< std:: endl;
}
