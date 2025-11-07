//
//  lab7_q1.cpp
//  Compe160
//
//  Created by Jorge Cano on 10/21/25.
//
#include <iostream>
using namespace std;

int main()
{
    //declaring and initializing given array in assignment
    //int a[4][4] = { {1, 2, 3, 4}, {5, 6, 7, 8}, {9,10,11,12}, {13,14,15,16} };
    int b[100];
    int raB = 0; //this will be used to keep track of index for array b
    int sum = 0; //variable to hold sum of elements below diagonal
    int rowsCols; //num of rows and cols, same since square matrix
    
    cout << "Enter number of rows and colums for this square matrix: ";
    cin >> rowsCols;
    
    //validating inputted value
    while(cin.fail() || rowsCols <= 0)
    {
        if(cin.fail())
        {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "That is not an integer.\n";
            cout << "Enter number or rows: ";
            cin >> rowsCols;
            
        }
        else if(rowsCols == 0)
        {
            cout << "Enter a POSITVIE number greater than zero: ";
            cin >> rowsCols;
        }
        else if(rowsCols < 0)
        {
            cout << "Enter a POSITIVE number of rows and columns: ";
            cin >> rowsCols;
        }
        
    }
    
    
    //declaring array a with inputted values
    int a[rowsCols][rowsCols];
    
    //initializing array with inputed values
    for(int i = 0; i < rowsCols; i++)
    {
        for(int j = 0; j < rowsCols; j++)
        {
            cout << "Enter number to add to the array: ";
            cin >> a[i][j];
            while(cin.fail())
            {
                cin.clear();
                cin.ignore(1000, '\n');
                cout << "That is not an integer.\n";
                cout << "Enter number to add to the array: ";
                cin >> a[i][j];
            }
        }
    }
    
    //initializing array b with all zeros to avoid "trash" values later
    for(int i = 0; i < sizeof(b) / sizeof(b[0]); i++)
        b[i] = 0;
    
    
    //nested for loops to add elements below diagonal. first loop goes through rows, 2nd through cols
    for(int i = 1; i < rowsCols; i++)
    {
        for(int j = 0; j < i; j++)
        {
            sum += a[i][j];
            b[raB] = a[i][j]; //adding number to array b to later print out.
            raB++; //increasing index array b
        }
    }
    
    //final output
    
    cout << "Sum of elements below main diagonal: " << sum << " // (";
    for(int i = 0; i < sizeof(b)/sizeof(b[0]); i++)
    {
        if(b[i] != 0)
            cout << b[i] << " + ";
    }
    cout << ")" << endl;
    
    return(0);
}
