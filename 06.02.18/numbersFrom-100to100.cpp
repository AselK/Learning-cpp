#include <iostream>

using namespace std;

int main()
{
	cout <<"Input number from -100 to 100: ";
	int a;
	cin >> a;
	if(a > -100 && a < 100)
	{
		cout << a;
	}
	else
	{
		cout << "wrong number";
	}
}
