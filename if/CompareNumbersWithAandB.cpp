//Compare numbers with A and B

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
	if (a != 0 && a < b)
	{
		cout << b * 2 << endl;
	}
	else if (b < 100 && b > 10)
	{
		cout << b * 3 << endl;
	}
	else 
	{
		cout << b << endl;
	}
}
