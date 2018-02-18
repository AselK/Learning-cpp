#include <iostream>
using namespace std;

/*IF В случае, если a и b - положительные, THEN
    IF проверить четные ли эти числа,
    IF нечетные ли они,
    IF делятся ли на 5,
    IF делятся ли на 7,
        и вывести результат, а так же написать кто из них больше другого.

 */

void firstCheck(int variableValue)
{
    if (variableValue > 0)
    {
		cout << " is positive, ";
	}
    else if (variableValue < 0) 
    {
		cout << " is negative, ";
    }
    if (variableValue % 2 == 0)
    {
		cout << "even, ";
	}
    else
    {
		cout << "odd, ";
	}
    
    if (variableValue % 5 == 0) 
    {
		cout << "can be devided by 5, ";
	}
    else 
    {
		cout << "cannot be devided by 5, ";
	}
    
    if (variableValue % 7 == 0) 
	{
		cout << "can be devided by 7.";
	}
    else 
    {
		cout << "cannot be devided by 7.";
	}
}

/* проверить: меньше ли каждый из них -100
 , меньше ли (-17 и одновременно больше ли -130) */
 
void secondCheck(int variableValue)
{
    if (variableValue < -100) 
    {
		cout << " is less then -100, ";
	}
    else 
    {
		cout << " is not less then -100, ";
    }
    if (variableValue < -17 && variableValue > -130)
    {
        cout << "between -130 and -17.";
	}
    else
	{
		cout << "not between -130 and -17.";
	}
}

int main()
{
    cout << "Enter a and b: ";
    int a;
    int b;
    cin >> a >> b;
    if (a > 0 && b > 0)
    {
        cout << "a";
        firstCheck(a);
        cout << endl;
        cout << "b";
        firstCheck(b);
        cout << endl;
        if (a > b) 
        {
			cout << "a is more then b.";
		}
        else if (a < b) 
        {
			cout << "a is less then b.";
		}
        else 
        {
			cout << "a equals b";
		}
    }
    // В случае если a и b - отрицательные,
    else if (a < 0 && b < 0)
    {
        cout << "a";
        secondCheck(a);
        cout << endl;
        cout << "b";
        secondCheck(b);
        cout << endl;
        // больше ли их произведение 15000*
        if (a * b > 15000) 
        {
			cout << "a * b is more then 15000";
		}
        else 
        {
			cout << "a * b is less or equal 15000";
		}
    }   
    cout << endl << endl;
}
