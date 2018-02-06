#include <iostream>

using namespace std;

int main()
{
	cout << "Input number: ";
	int a;
	cin >> a;
	if(a % 2 == 0 || a % 7 == 0)
	{
		cout << "divide";
	}
	else
	{
		cout << "wrong";
	}
}
