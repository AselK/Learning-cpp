#include <iostream>

using namespace std;

int main()
{
	cout << "Input even numbers: ";
	int a;
	cin >> a;
	if(a % 2 == 0)
	{
		cout << "yes";
	}
	else
	{
		cout << "wrong number";
	}
}
