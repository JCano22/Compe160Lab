//
//  lab12_q1.cpp
//  Compe160
//
//  Created by Jorge Cano on 11/20/25.
//
#include <iostream>
using namespace std;

struct Date
{
    int day;
    int month;
    int year;
};

struct Event
{
    char name[50];
    Date date;
};

int CompareDates(Date a, Date b); //function prototype


int main()
{
    Event firstEvent;
    Event secondEvent;
    int returnNum;
    
    cout << "Enter name of event 1: ";
    cin.getline(firstEvent.name, 50);
    
    cout << "Enter date (MM DD YYYY): ";
    cin >> firstEvent.date.day >> firstEvent.date.month >> firstEvent.date.year;
    
    while(cin.fail())
    {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "That is not an integer.\n";
        cout << "Enter date (MM DD YYYY): ";
        cin >> firstEvent.date.day >> firstEvent.date.month >> firstEvent.date.year;
    }
    
    //line to flush out leftover \n
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    
    cout << "Enter name of event 2: ";
    cin.getline(secondEvent.name, 50);
    
    cout << "Enter date (MM DD YYYY): ";
    cin >> secondEvent.date.day >> secondEvent.date.month >> secondEvent.date.year;
    
    while(cin.fail())
    {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "That is not an integer.\n";
        cout << "Enter date (MM DD YYYY): ";
        cin >> secondEvent.date.day >> secondEvent.date.month >> secondEvent.date.year;
    }
    
    //initializing value with result from function
    returnNum = CompareDates(firstEvent.date, secondEvent.date);
    
    //final outputs
    if(returnNum == -1)
        cout << firstEvent.name << " occurs before " << secondEvent.name << ".\n";
    else if(returnNum == 1)
        cout << secondEvent.name << " occurs before " << firstEvent.name << ".\n";
    else
        cout << "Both events occur on same day.\n";
    
    return 0;
}

int CompareDates(Date a, Date b)
{
    if (a.year != b.year)
        return (a.year < b.year) ? -1 : 1;
    if (a.month != b.month)
        return (a.month < b.month) ? -1 : 1;
    if (a.day != b.day)
        return (a.day < b.day) ? -1 : 1;
    return 0;

}


