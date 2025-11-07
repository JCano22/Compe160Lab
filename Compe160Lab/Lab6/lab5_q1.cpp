//
//  lab5_q1.cpp
//  Compe160
//
//  Created by Jorge Cano on 10/9/25.
//

#include <iostream>
using namespace std;

int main()
{
    
    //variable declarations
    int a[10] = { 17, 43, 12, 89, 65, 43, 28, 91, 56, 75 };
    int max, secondMax;
    
    //assigning max and secondMax to first value in array.
    max = a[0];
    secondMax = a[0];
    
    for(int i = 1; i < 10; i++)
    {
        //checks if value at index i is larger than max, if it is old max becomes 2nd max and a[i] becomes max
        if(a[i] > max)
        {
            secondMax = max;
            max = a[i];
        }
        
        //if stmnt to make sure 2nd largest is correctly updated
        if(a[i] > secondMax && a[i] < max)
            secondMax = a[i];
    }
    
    cout << "Second largest number: " << secondMax << endl;
    
    return(0);
}
