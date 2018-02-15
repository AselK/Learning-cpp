//Compare numbers and output them

#include <iostream>

using namespace std;

int main()
{
	cout << "Input number a: ";
	int a;
	cin >> a;
	cout << "Input number b: ";
	int b;
	cin >> b;
	if (a > 0 && a < 10)
	{
		if (b < a)
		{
			cout << " b is less than a";
		}
	}
	else if (a < 0 || a > 10)
	{
		if ( b > 100)
		{
			cout << "b is more than 100";
		}
	}
}
