//
//  lab9_q2.cpp
//  Compe160
//
//  Created by Jorge Cano on 10/31/25.
//

#include <iostream>
using namespace std;

void RotateRight(int* arr, int size, int k); //function prototype

int main()
{
    int a[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int k = 3;
    
    RotateRight(a, 8, k);
}


void RotateRight(int* arr, int size, int k)
{
    int* l = arr;
    int* r = arr + size - 1; //will be used to point to furthest right index
    
    //while loop to reverse array
    while(l < r)
    {
        int temp = *l;
        *l = *r;
        *r = temp;
        
        l++;
        r--;
    }
    
    //resetting values for r and l
    l = arr;
    r = arr + k - 1; //r will now be the k index
    
    while(l < r)
    {
        int temp = *l;
        *l = *r;
        *r = temp;
        
        l++;
        r--;
    }
    
    
    //resetting values for r and l again
    l = arr + k;
    r = arr + size - 1;
    
    while(l < r)
    {
        int temp = *l;
        *l = *r;
        *r = temp;
        
        l++;
        r--;
    }
    
    for(int i = 0; i < size; i++)
    {
        cout << *arr << " ";
        arr++;
    }
}
