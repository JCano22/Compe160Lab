#include <iostream>
using namespace std;

/*Define a structure `Time` as follows:
struct Time
{
    short int hour;
    short int minute;
    short int second;
};
Write a function that takes the addresses of two distinct Time structure variables as parameters. The function should swap the values of these two variables.*/

struct Time
{
    short int hour;
    short int minute;
    short int second;
};

void structSwap(Time *a, Time *b)
{
    Time temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    Time first = {2, 30, 25};
    Time second = {3, 20, 45};

    cout << first.hour << ": " << first.minute << ": " << first.second << "\n";
    cout << second.hour << ": " << second.minute << ": " << second.second << "\n";
    
    structSwap(&first, &second);

    cout << first.hour << ": " << first.minute << ": " << first.second << "\n";
    cout << second.hour << ": " << second.minute << ": " << second.second << "\n";

}