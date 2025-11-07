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
    //variable declaration
    int s, hours, minutes, seconds;
    
    //initializing s to inputed value
    cin >> s;
    
    //initializing hours, minutes, seconds
    minutes = (s / 60) % 60;
    hours = (s / 3600) % 24;
    seconds = s % 60;
    
    //if stmnt to verify that s != 0.
    if(s != 0)
        cout << hours << ":" << minutes << ":" << seconds << endl;
    else
        cout << "Invalid" << endl;
    
    return 0;
    
}
