//Compare a and b

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
	if (a >= -100 && a <= 100 && a % 2 != 0 && a % 10 != 1)
	{
		if (b >= -100 && b <= 100 && b % 2 != 0 && b % 10 != 1)
		{
			cout << "b is the same a" << endl;
		}
	}
}
