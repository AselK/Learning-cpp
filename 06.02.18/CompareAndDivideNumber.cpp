#include <iostream>

using namespace std;

int main()
{
	cout <<"Input number: ";
	int a;
	cin >> a;
	if(a > 1000)
	{
		cout << a / 10;
	}
	else
	{
		cout << "wrong";
	}
}
