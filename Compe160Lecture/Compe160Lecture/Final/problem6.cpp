#include <iostream>
using namespace std;

/*Write an application that prompts the user to input a positive integer and determines if the number has exactly three divisors. For example, if the user enters 25, the application should print 'Yes' because the divisors of 25 are: 1, 5, and 25. But If the user enters 35, the application should print 'No' because the divisors of 35 are 1, 5, 7 and 35.*/

int main()
{
    int num;
    int count = 0;

    cout << "Enter a number: ";
    cin >> num;

    for(int i = 1; i <= num; i++)
    {
        if(num % i == 0)
            count++;
        
        if(count > 3)
        {
            cout << "No" << endl;
            return 0;
        }
    }
    if(count == 3)
    {
        cout << "Yes" << endl;
    }
    else
        cout << "No" << endl;
}