#include <iostream>
using namespace std;

/* Write an application that prints the unique characters found in a given null-terminated string. If a character appears multiple times in the string, it should be printed only once.
For example, given the following null-terminated string:
char text[] = "This_is_a_test";
The application should print: T, h, _, i, s, a, t, e. */

int main()
{
    char str[] = {"This_is_a_test"};

    cout << str[0] << " ";

    for(int i = 1; str[i] != '\0'; i++)
    {
        bool seen = false;

        for(int j = 0; j < i; j++)
        {
            if(str[j] == str[i])
            {
                seen = true;
                break;
            }
        }

        if(!seen)
            cout << str[i] << " ";
    }

}