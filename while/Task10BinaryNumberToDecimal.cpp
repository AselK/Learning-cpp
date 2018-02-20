//Input binary number to convert to decimal

#include <iostream>
#include <math.h>

using namespace std;

int main() 
{
    cout << "Enter binary number: ";
    int a;
    cin >> a;

    int result = 0;
    int position = 1;
    while (a > 0)
    {
        int digit = a % 10;
        result = result + digit * pow(2, position - 1);
        position++;
        a = a / 10;
    }

    cout << result << endl;
}
