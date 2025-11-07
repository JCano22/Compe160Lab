//
//  lab5_q2.cpp
//  Compe160
//
//  Created by Jorge Cano on 10/9/25.
//
#include <iostream>
using namespace std;

int main()
{
    int n;
    
    cout << "Enter size of array: ";
    cin >> n;
    
    //verification loop checking for non-integers and non-positive values
    while(cin.fail() || n < 0)
    {
        if(n < 0)
        {
            cout << "Enter a POSITIVE size of array: ";
            cin >> n;
        }
        else if(cin.fail())
        {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "That is not an integer.\n";
            cout << "Enter size of array: ";
            cin >> n;
        }
        
    }
    
    //declaring array of size n
    int a[n];
    
    cout << "Enter " << n << " numbers: ";
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
    /*To find duplicates and remove them, we will use nested for-loops, one holds value at index i
        and the other at index j, index j will loop through the remaining values comparing numbers.
        If values a i and j match, another for loop will replace the repeated value with the next index value and proceed to shift all remaining values in the array to the left by one index.  We
        then decrease n and j so that in the next round of the loop it checks that same index value again, since it is now a new number being held there.*/
    
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(a[i] == a[j]) //if loop to check if values are equal
            {
                for(int k = j; k < n; k++) //loop to shift all elements to the left by 1
                {
                    a[k] = a[k + 1];
                }
                
                j--; //decreasing j to check new value in this position after shift.
                n--; //decreasing size of array
            }
            
        }
            
    }
    
    //output of new numbers in array
    cout << "Array after removing duplicates: ";
    for(int i = 0; i < n; i++)
        cout << a[i] << " ";
    
    cout << endl;
    
    return(0);
    
}
