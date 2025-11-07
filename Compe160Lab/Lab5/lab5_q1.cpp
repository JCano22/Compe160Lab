//
//  lab5_q1.cpp
//  Compe160
//
//  Created by Jorge Cano on 10/2/25.
//
#include <iostream>
using namespace std;

int main()
{
    //declaring and initializing variables.
    double evenSum = 0;
    double oddSum = 0;
    double num;
    
    //for loop to ask for 8 numbers
    for(int i = 1; i <= 8; i++)
    {
        cout << "Enter number " << i << ": ";
        cin >> num;
        
        //if stmnt to ask for an intenger if input is other type
        if(cin.fail())
        {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "That is not an integer.\n";
            cout << "Enter a number " << i << ": ";
            cin >> num;
        }
        
        //if even position and less than 50
        if(i % 2 == 0 && num < 50)
            evenSum += num;
        //if odd position and greater than 25
        else if(i % 2 != 0 && num > 25)
            oddSum += num;
    }
    
    //output stmnts showing sums.
    cout << "Sum of odd-position (>25) numbers: " << oddSum << endl;
    cout << "Sum of even-position (<50) numbers: " << evenSum << endl;
}
