//
//  lab8.q1.cpp
//  Compe160
//
//  Created by Jorge Cano on 10/22/25.
//

#include <iostream>
using namespace std;

int CountEvenDigits(int number)
{
    int digit, count = 0;
    
    //while loop to strip digits and check for even or odd
    while(number != 0)
    {
        digit = number % 10;
        if(digit % 2 == 0)
            count++;
        
        number /= 10;
    }
    
    return count;
}

int main()
{
    //declaring variables
    int num;
    
    cout << "Enter a number: ";
    cin >> num;
    
    while(cin.fail())
    {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "That is not an integer.\n";
        cout << "Enter a number: ";
        cin >> num;
    }
    
    cout << "Number of even digits = " << CountEvenDigits(num) << endl;
        
    
    
}
