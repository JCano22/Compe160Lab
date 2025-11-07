//
//  lab8.q2.cpp
//  Compe160
//
//  Created by Jorge Cano on 10/23/25.
//

#include <iostream>
using namespace std;

bool IsPerfectSquare(int n)
{
    int s = sqrt(n); //we want to loop through numbers from 1 to sqrt(n)
    
    for(int i = 1; i <= s; i++)
    {
        //checking every number, if squared == n
        if(pow(i, 2) == n)
            return true;
    }
    return false;
}


bool AllElementsPerfectSquares(int a[], int s)
{
    bool p = false;
    
    //looping through array, if every element is perfect p becomes true, if one single element is not perfect, the function automatically returns false.
    for(int i = 0; i < s; i++)
    {
        p = IsPerfectSquare(a[i]);
        
        if(!p)
            return false;
    }
    
    return true;
}


int main()
{
    //declaring hard coded array
    int arr[] = {35, 49, 144};
    
    //output
    cout << "All elements are perfect squares: ";
    
    //will check through function call if array is perfect
    if(AllElementsPerfectSquares(arr, 4))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}
