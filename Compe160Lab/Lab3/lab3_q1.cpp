//
//  lab3_q1.cpp
//  Compe160
//
//  Created by Jorge Cano on 9/16/25.
//

#include <iostream>
using namespace std;

int main()
{
    //variable declaration
    int a, b, sum, carry;
    
    //prompt for inputting a and b, and initializing var with inputted value
    cout << "Input binary symbol for a: ";
    cin >> a;
    
    cout << "Input binary symbol for b: ";
    cin >> b;
    
    //initializing sum, carry using a, b
    sum = (a | b) & !(a & b);
    carry = (a & b);
    
    
    //printing values for sum, carry
    cout << "Carry is " << carry << ", Sum is " << sum << endl;
    
    return 0;
}
