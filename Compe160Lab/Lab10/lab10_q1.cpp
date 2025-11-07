//
//  lab10_q1.cpp
//  Compe160
//
//  Created by Jorge Cano on 11/6/25.
//
#include <iostream>
using namespace std;

//function to add up sum of func(even#s)
int SumIfEven(int left, int right, int (*func)(int))
{
    int sum = 0;
    
    for(int i = left; i <= right; i++)
    {
        if(i % 2 == 0)
            sum += func(i);
    }
    
    return sum;
}

int cube(int x)
{
    return x * x * x;
}

int main()
{
    int result = SumIfEven(1, 2, cube);
    
    cout << result << endl;

}
