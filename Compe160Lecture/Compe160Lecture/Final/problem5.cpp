#include <iostream>
using namespace std;

//Write a macro that takes two parameters. The macro should calculate and return the greater of the two numbers passed as parameters.

#define maxNum(a, b) ((a) > (b) ? (a): (b));

int main()
{
    int a = 1;
    int b = 2;
    int max = maxNum(a,b);
    cout << max << endl;
}