#include <iostream>

using namespace std;

int main()
{
	cout <<"Input number ended 3: ";
	int a;
	cin >> a;
	if(a % 10 == 3)
	{
		cout << (a + 1) / 2;
	}
	else
	{
		cout <<"wrong";
	}
}
