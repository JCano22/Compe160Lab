//
//  lab1_q3.cpp
//  Compe160
//
//  Created by Jorge Cano on 9/4/25.
//

#include <iostream>
using namespace std;

int main()
{
    //variable declarations
    int x, y, temp;
    
    //inputting values for x and y
    cin >> x ;
    cin >> y ;
    
    //printing inputted x and y values
    cout << "x = " << x << " y = " << y << endl;
    
    /*
    //swaping values in x and y
    temp = x;
    x = y;
    y = temp;*/
    
    temp = x + y;
    x = temp - x;
    y = temp - y;
    
    //printing new values for variables
    cout << "x = " << x << " y = " << y << endl;
    
}
