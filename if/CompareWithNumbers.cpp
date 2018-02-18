//Compare with numbers

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
	if (a > 10 && a < 80)
	{
		if (a < b && b != 66)
		{
			cout << a + b;
		}
		else if (a > b)
		{
			if ( a != 44)
			{
				cout << a - b;
			}
			else if ( a == 44 || a == 66)
			{
				cout << a / 2;
			}
		}
		
	}
}
