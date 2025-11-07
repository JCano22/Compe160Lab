//
//  lab4.q2.cpp
//  Compe160
//
//  Created by Jorge Cano on 9/25/25.
//

#include <iostream>
using namespace std;

int main()
{
    //declaring variables
    long long n, largest = 0, second = 0;
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
    
    //setting initial n to be largest
    if(n % 2 == 0)
        largest = n;
    
    //if number is 0 or negative the program ends
    if(n <= 0 && c < 2)
    {
        cout << "Not enough even numbers." << endl;
        exit(0);
    }
    
    while(n > 0)
    {
        if(n > largest && n % 2 == 0)
        {
            second = largest;
            largest = n;
            c++;
        }
        else if((n > second || second == largest)  && n != largest && n % 2 == 0)
        {
            second = n;
            c++;
        }
        else if(n % 2 == 0)
            c++;
        
        //repeating prompt for number
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
    }
    
    //outputs
    if(c < 2)
        cout << "Not enough even numbers." << endl;
    else
        cout << "Second largest even number: " << second << endl;
}
