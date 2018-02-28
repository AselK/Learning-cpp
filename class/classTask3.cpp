//Compare area of rectangle 

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
	Rectangle obj, ob2;
	obj.setHeight(10); ob2.setHeight(5);
	obj.setWidth(8);  ob2.setWidth(7);
	std::cout << std::boolalpha << obj.compare(ob2);
}
