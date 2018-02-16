//Compare numbers with A and B (2)

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
	if (a % 3 == 0 && a % 5 == 0)
	{
		if (b % 2 == 0)
		{
			if (a < 100)
			{
				cout << b * a << endl;
			}
			else
			{
				cout << a + b << endl;
			}
		}
		else 
		{
			cout << a - b << endl;
		}
	}
	else if (a % 3 != 0 && a % 5 != 0)
	{
		cout << "a not divided by 3 and 5. b: " << b << endl;
	}
	
}
