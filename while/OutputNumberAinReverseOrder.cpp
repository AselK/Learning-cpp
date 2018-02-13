//Output Number a in reverse order

#include <iostream>

using namespace std;

int main()
{
	cout << "Input Number: ";
	int a;
	cin >> a;
	int b = 0;
	int c = 0;
	while (a > 0)
	{
		if (a >= 10)
		{
			c = a % 10;
		}
		else
		{
			c = a;
		}
		b = 10 * b + c;
		a = a / 10;
	}
	cout << b << endl;
}

