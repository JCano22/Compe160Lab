//
//  lab2_q1.cpp
//  Compe160
//
//  Created by Jorge Cano on 9/11/25.
//
#include <iostream>
using namespace std;

int main()
{
    //declaring variables
    int a, b, sum, carry, sum2, carry2;
    
    //initializing a, b with inputted values
    cin >> a;
    cin >> b;
    
    //XOR in order to sum both values without carry
    sum = a ^ b;
    //AND both values to get carry, then shifting left by 1
    carry = (a & b) << 1;
    //adding(XOR) sum and carry to sum2
    sum2 = sum ^ carry;
    carry2 = (sum & carry) << 1;
    //updating sum to sum2 , carry to carry2, and repeating the process
    sum = sum2;
    carry = carry2;
    
    //adding sum and carry to sum2
    sum2 = sum ^ carry;
    carry2 = (sum & carry) << 1;
    //updating sum to sum2 / carry to carry2, and repeating the process
    sum = sum2;
    carry = carry2;
    
    //adding sum and carry to sum2
    sum2 = sum ^ carry;
    carry2 = (sum & carry) << 1;
    //updating sum to sum2 / carry to carry2, and repeating the process
    sum = sum2;
    carry = carry2;
    
    //adding sum and carry to sum2
    sum2 = sum ^ carry;
    carry2 = (sum & carry) << 1;
    //updating sum to sum2 / carry to carry2, and repeating the process
    sum = sum2;
    carry = carry2;
    
    //adding sum and carry to sum2
    sum2 = sum ^ carry;
    carry2 = (sum & carry) << 1;
    //updating sum to sum2 / carry to carry2, and repeating the process
    sum = sum2;
    carry = carry2;
    
    //adding sum and carry to sum2
    sum2 = sum ^ carry;
    carry2 = (sum & carry) << 1;
    //updating sum to sum2 / carry to carry2, and repeating the process
    sum = sum2;
    carry = carry2;
    
    //adding sum and carry to sum2
    sum2 = sum ^ carry;
    carry2 = (sum & carry) << 1;
    //updating sum to sum2 / carry to carry2, and repeating the process
    sum = sum2;
    carry = carry2;
    
    //adding sum and carry to sum2
    sum2 = sum ^ carry;
    carry2 = (sum & carry) << 1;
    //updating sum to sum2 / carry to carry2, and repeating the process
    sum = sum2;
    carry = carry2;
   
    
    //printing value
    cout << sum << endl;
    
    return 0;
}
