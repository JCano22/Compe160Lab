#include <iostream>
using namespace std;

//8. Write an application which will ask the user to enter positive integer and which will print the first digit of this number.

int main()
{
    int num;
    int digit;
    cout << "Enter a positive integer: ";
    cin >> num;

    while(num != 0)
    {
        digit = num % 10;
        num /= 10;
    }

    cout << "Last digit: " << digit << "\n";

    return 0;
}