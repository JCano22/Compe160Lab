#include <iostream>
using namespace std;

//Write a function that takes an array of doubles as the first parameter and the length of the array as the second parameter. The function should return the sum of the elements in the array.

int sumElements(int a[], int n)
{
    int sum = 0;

    for(int i =0; i < n; i++)
    {
        sum += a[i];
    }
    return sum;
}

int main()
{
    int rA[5] = {1, 2, 3, 4, 5};

    cout << sumElements(rA, 5) << endl;
}