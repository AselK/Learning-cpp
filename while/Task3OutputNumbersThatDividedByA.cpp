//Output all numbers that divided by a 

#include <iostream>

using namespace std;

int main()
{
	cout << "Input Number: ";
	int a;
	cin >> a;
	
	int i = 1;
	while (i <= a)
	{
		if (a % i == 0)
		{
			cout << i << endl;
		}
		i++;
	}
}
