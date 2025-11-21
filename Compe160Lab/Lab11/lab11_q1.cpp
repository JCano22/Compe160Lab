//
//  lab11_q1.cpp
//  
//
//  Created by Jorge Cano on 11/13/25.
//
#include <iostream>
using namespace std;

int countChar(char str[], char l);

int main()
{
    char userStr[100];
    char letter;
    int count = 0, i = 0;
    
    cout << "Enter a string: ";
    cin.getline(userStr, 100);
    
    cout << "Enter a character to count: ";
    cin >> letter;
    
    while(userStr[i])
    {
        if(userStr[i] == letter)
            count++;
        
        i++;
    }
    
    cout << "The character '" << letter << "' appears " << count << " times." << endl;
    
    return 0;
}


