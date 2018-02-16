//Compare divide number

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
	if (a % b == 0)
	{
		
	if (b % 2 == 0)
	{
		cout << "b is even" << endl;
	}
	}
	else if (a % b != 0)
	{
		if (a % 2 == 0)
		{
			cout << "a is even" << endl;
		}
	}
}
