//
//  main.cpp
//  Compe160Lecture
//
//  Created by Jorge Cano on 9/3/25.
//

#include <iostream>
using namespace std;

double square(double x)
{
    return x * x;
}

int cube(int x)
{
    return x * x * x;
}

int main()
{
    double* f(double);
    double (*p)(double);
    double *h;
    
    p = 0;
    p = square;
    return 0;
}
