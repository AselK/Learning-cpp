#include <iostream>

using namespace std;

int main()
{
	cout << "Input two - digit numbers: ";
	int a;
	cin >> a;
	if( a >= 10 && a <= 100)
	{
		cout << a;
	}
	else
	{
		cout << "wrong number";
	}
}
