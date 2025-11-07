//
//  lab7_q2.cpp
//  Compe160
//
//  Created by Jorge Cano on 10/21/25.
//

#include <iostream>
using namespace std;

int main()
{
    int sum = 0;
    int greatest = 0, rows, cols, r = 0; //greatest will hold row with greatest sum, r = max sum
    
    //prompting user to input rows
    cout << "Enter number of rows: ";
    cin >> rows;
    
    //validating inputted value
    while(cin.fail() || rows <= 0)
    {
        if(rows <= 0)
        {
            cout << "Enter a POSITIVE number of rows greater than 0: ";
            cin >> rows;
        }
        else if(cin.fail())
        {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "That is not an integer.\n";
            cout << "Enter number or rows: ";
            cin >> rows;
        }
        
    }
    
    cout<< "Enter number of columns: ";
    cin >> cols;
    
    while(cin.fail() || cols <= 0)
    {
        if(cols <= 0)
        {
            cout << "Enter a POSITIVE number of columns greater than 0: ";
            cin >> cols;
        }
        else if(cin.fail())
        {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "That is not an integer.\n";
            cout << "Enter number or columns: ";
            cin >> cols;
        }
        
    }
    
    //declaring array a with inputted values
    int a[rows][cols];
    
    //initializing array with inputed values
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
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
    
    //nested for loops to see which row has the greatest sum
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            sum += a[i][j];
        }
        
        if(sum > r)
        {
            r = sum;
            greatest = i;
        }
        
        sum = 0;
    }
    
    //printing results
    cout << "Row " << greatest << " has the maximum sum: " << r << endl;
    
    return 0;
    
}
