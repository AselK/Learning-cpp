//Check even numbers

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
	if (a % 2 != 0 )
	{   
		if (b % 2 == 0)
		{
			cout << "The number B is even" << endl;
		}
	}
}
