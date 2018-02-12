
//Input number from 10 to a

#include <iostream>

using namespace std;

int main()
{
	cout << "Input Number from 10: ";
	int a;
	cin >> a;
	int b = 10;
	while (b <= a)
	{
		cout << b << endl;
		b++;
	}
}
