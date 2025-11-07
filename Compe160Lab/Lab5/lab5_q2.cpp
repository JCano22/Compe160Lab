//
//  lab5_q2.cpp
//  Compe160
//
//  Created by Jorge Cano on 10/2/25.
//

#include <iostream>
using namespace std;

int main()
{
    int num;
    
    for(int i = 1; i <= 10; i++)
    {
        cout << "Enter number " << i << ": ";
        cin >> num;
        
        //verification to make sure input is a number
        while(cin.fail())
        {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "That is not an integer.\n";
            cout << "Enter a number " << i << ": ";
            cin >> num;
        }
        
        //verification to make sure input is positive
        while(num < 0)
        {
            cout << "Enter a POSITIVE number " << i << ": ";
            cin >> num;
        }
        
        if(num % 2 != 0 && num % 3 != 0 && num % 5 != 0)
        {
            cout << "First number not divisible by 2, 3, or 5: " << num << endl;
            return(0);
        }
        
    }
    
    cout << "No number found." << endl;
    
    return(0);
}
