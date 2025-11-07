//
//  lab9_q1.cpp
//  Compe160
//
//  Created by Jorge Cano on 10/29/25.
//

#include <iostream>
using namespace std;

void ReverseArray(int* arr, int size); //function prototype


int main()
{
    int nums[7] = {1, 2, 3, 4, 5, 6, 7}; //hard coded array
    
    ReverseArray(nums, 7);
    
    return(0);
}

void ReverseArray(int* arr, int size)
{
    int* rA = arr; //creating new pointer to array, to not change arr address
    int temp;
    int index = size - 1; //used to keep track of back end digit we are swapping
    
    for(int i = 0; i < size / 2; i++)
    {
        temp = *rA; //holding value at current rA address
        *rA = *(rA - i + index); //rA address now gets value at rA[0] + index value
        *(rA - i + index) = temp; // swapping front value with back value
        
        index--;
        rA++;
    }
    
    //for loop to print reversed array.
    for(int i = 0; i < size; i++)
    {
        cout << *arr << " ";
        arr++;
    }
    
    cout << endl;
    
}
