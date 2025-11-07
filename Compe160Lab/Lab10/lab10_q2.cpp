//
//  lab10_q2.cpp
//  Compe160
//
//  Created by Jorge Cano on 11/6/25.
//

#include <iostream>
using namespace std;

int SumDigits(int n)
{
    int sum = 0;
    
    if(n < 10)
        return n;
    
    while(n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    
    return SumDigits(sum);
}

int main()
{
    int num = 9876;
    
    int output = SumDigits(num);
    
    cout << num << endl;
    cout << "Output: " << output << endl;
    
    return (0);
}
