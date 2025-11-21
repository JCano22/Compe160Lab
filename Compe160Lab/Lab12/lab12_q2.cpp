//
//  lab12_q2.cpp
//  Compe160
//
//  Created by Jorge Cano on 11/20/25.
//

#include <iostream>
using namespace std;

struct Student
{
    char name[50];
    int rollNumber;
    Student* next;
};

int main()
{
    Student student1 = {"Alice", 101};
    Student student2 = {"Bob", 105};
    Student student3 = {"Charlie", 107};
    Student student4 = {"Dave", 110};
    Student student5 = {"Eve", 115};
    Student* current; //will be used to check roll number later.
    int rollNumSearch;
    
    //setting .next for each student
    student1.next = &student2;
    student2.next = &student3;
    student3.next = &student4;
    student4.next = &student5;
    student5.next = NULL;
    
    cout << "Enter roll number to search: ";
    cin >> rollNumSearch;
    
    current = &student1; //setting pointer to first student
    
    while(current != NULL)
    {
        if(current -> rollNumber == rollNumSearch)
            break;
        else
            current = current -> next;
    }
    
    if(current != NULL)
        cout << "Found: " << current -> name << endl;
    else
        cout << "Not found." << endl;
    
    return 0;
}

