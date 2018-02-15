#include <iostream>

using namespace std;

int main()
{
	cout <<"Input Number a: ";
	int a;
	cin >> a;
	cout <<"Input Number b: ";
	int b;
	cin >> b;
	if(a > 0)
	{
		if(b > 0)
		{
			cout << a + b;
		} 
		else
		{
			cout << a - b;
		}
	}
	else if(a < 0)
	{
		if( b > 0)
		{
			cout << a * b;
		}
		else
		{
			cout << a / b;
		}
	}
}
