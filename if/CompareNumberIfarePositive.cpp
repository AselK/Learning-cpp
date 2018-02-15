#include <iostream>

using namespace std;

int main()
{
	cout << "Input Number a: ";
	int a;
	cin >> a;
	cout << "Input Number b: ";
	int b;
	cin >> b;
	if (b < a)
	{
		if (b > 0)
		{
			cout << "B is more than zero";
		}
	}
	else if (b > a)
	{
		if (a > 0)
		{
			cout << "A is a positive number";
		}
	}
}
