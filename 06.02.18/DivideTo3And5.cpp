#include <iostream>

using namespace std;

int main()
{
	cout << "Input number: ";
	int a;
	cin >> a;
	if(a % 3 == 0 && a % 5 == 0)
	{
		cout << "divide";
	}
	else
	{
		cout << "wrong";
	}
}
