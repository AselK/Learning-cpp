#include <iostream>

using namespace std;

int main()
{
	cout <<"Input number > 100: ";
	int a;
	cin >> a;
	if (a > 100)
	{
		cout << a / 100 * 100 + 80 + a % 10;
	}
}
