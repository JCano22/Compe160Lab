//
//  lab4.q1.cpp
//  Compe160
//
//  Created by Jorge Cano on 9/25/25.
//
#include <iostream>
using namespace std;

int main()
{
    //declaring variable
    long long n, d, r;
    int c = 0;
    
    cout << "Enter a number: ";
    cin >> n;
    
    //checks if input fails, if input is not an integer.
    if(cin.fail())
    {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "That is not an integer.\n";
        cout << "Please enter a number: ";
        cin >> n;
    }
    
    //while loop to verify number is positive
    //if input is negative it prompts the user for a new input.
    while(n < 0)
    {
        cout << "Enter a POSITIVE number: ";
        cin >> n;
        
        if(cin.fail())
        {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "That is not an integer.\n";
            cout << "Please enter a number: ";
            cin >> n;
        }
    }
    
    //setting r to same value as n;
    r = n;
    
    if(n == 0)
    {
        cout << "Number of even digits: 1\n";
        exit(0); //ends program if inputed number is 0
    }
    
    //while loop to check every digit in inputed number
    //% will strip last digit, then dividing by 10 will
    while(r > 0)
    {
        d = r % 10;
        if(d % 2 == 0)
            c++;
        
        r /= 10;
    }
    
    //printing final result
    cout << "Number of even digits: " << c << endl;
    
    return 0;
    
}
