//Task 8 (while)

#include <iostream>

using namespace std;

int main()
{
	cout << "Input Number: ";
	int a;
	cin >> a;
	int b = 2;
	while (2 * b < a)
	{
		b = b * 2;
	}
	cout << b << endl;
}
