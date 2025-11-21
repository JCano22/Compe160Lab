//
//  Bonus.cpp
//  Compe160
//
//  Created by Jorge Cano on 11/14/25.
//
#include <iostream>
using namespace std;

double CalculateAverage(int grades[], int n)
{
    int sum = 0;
    
    for(int i = 0; i < n; i++)
    {
        sum += grades[i];
    }
    
    return (double)sum / n;
}

char* FindTopper(char *names, int grades[], int n)
{
    int maxIndex = 0;
    
    for(int i = 0; i < n; i++)
    {
        if(grades[i] > grades[maxIndex])
            maxIndex = i;
        
    }
    return *names[maxIndex];
}
    
    int main()
    {
        int n;
        char names[10];
        int grades[10];
        
        cout << "Enter number of students (max 10): ";
        cin >> n;
        
        for (int i = 0; i < n; i++)
        {
            cout << "Student " << i + 1 << " name: ";
            cin >> names[i];
            cout << "Student " << i + 1 << " grade: ";
            cin >> grades[i];
        }
        
        double avg = CalculateAverage(grades, n);
        char* topper = FindTopper(names, grades, n);
        
        cout << "\nAverage grade: " << avg << endl;
        cout << "Highest grade: " << topper << endl; // Add topper logic
        
        cout << "\nStudents who failed: \n";
        
        for (int i = 0; i < n; i++)
        {
            if (grades[i] < 40)
            {
                cout << names[i] << endl;
            }
        }
        return 0;
    }
