#include <iostream>
#include "Templib.h"
using namespace std;

int main()
{
    double cTemp = 50;
    double fTemp = 96.7;

    cout << "Temp in C: " << CelsiusToFahrenheit(cTemp) << endl;

    cout << "Temp in C: " << FahrenheitToCelsius(fTemp) << endl;
    return 0;
}
