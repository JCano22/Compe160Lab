//
//  lab11_q2.cpp
//  Compe160
//
//  Created by Jorge Cano on 11/13/25.
//
#include <iostream>
using namespace std;

int main()
{
    //variable declarations
    char sentence[100];
    char word[100];
    int i = 0, j = 0, k = 0, index = -1;
    bool found;
    
    
    cout << "Enter sentence: ";
    cin.getline(sentence, 100);
    
    //validating if sentence is not empty
    while(sentence[0] == '\0')
    {
        cout << "Enter sentence: ";
        cin.getline(sentence, 100);
    }
    
    cout << "Enter word to find: ";
    cin >> word;
    
    //validating if word is not empty
    while(word[0] == '\0')
    {
        cout << "Enter word to find: ";
        cin >> word;
    }
    
    //loop while Null char is not in index i
    while (sentence[i] != '\0')
    {
        found = false; //setting flag

        if (sentence[i] == word[0])
        {
            j = 0; //resetting j
            k = i;
            index = i;
            while (word[j] != '\0' && sentence[k] != '\0')
            {
                if (sentence[k] != word[j])
                {
                    break; //if chars don't match exit loop
                }
                ++j;
                ++k;
            }

            //if we are at end of word it means there was a match for the full word.
            if (word[j] == '\0' && (sentence[k] == ' ' || sentence[k] == '\0'))
            {
                found = true;
            }
        }

        if (found)
        {
            cout << "Found '" << word << "' at index " << index << '\n';
        }

        ++i;  // check next starting position
    }

    if (!found && index == -1)
    {
        cout << "Word not found.\n";
    }

    return 0;

}
