#include <iostream>
#include "Templib.h"
using namespace std;

double CelsiusToFahrenheit(double c)
{
    return c * (9.0/5) + 32;
}

double FahrenheitToCelsius(double f)
{
    return (f - 32) * (5.0/9);
}