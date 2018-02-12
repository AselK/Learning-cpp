//Input number from a to 0

#include <iostream>

using namespace std;

int main()
{
	cout << "Input Number: ";
	int a;
	cin >> a;
	int i = a;
	while (i >= 0)
	{
		cout << i << endl;
		i--;
	}
}
