//
//  lab3_q2.cpp
//  Compe160
//
//  Created by Jorge Cano on 9/16/25.
//

#include <iostream>
using namespace std;

int main()
{
    //variable declaration
    int age;
    int price = 0;
    string day;
    
    //prompts and initialization for age and day.
    cout << "Enter age: ";
    cin >> age;
    
    while(!(cin >> age))
    {
        if(!cin)
        {
            cin.clear();
            //ignores everything after the int part of the input until newline is found.
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            
            cout << "Enter a valid age: ";
            cin >> age;
        }
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    
    
    //if age is negative, print error.
    if(age < 0)
    {
        cout << "Invalid age." << endl;
        return 0;
    }
    
    //prompt to get day of week
    cout << "Enter day of the week: ";
    cin >> day;
    
    //if stmnts with logic for ticke price.
    //between 0 and < 3 > free
    if(age >= 0 && age < 3)
        cout << "Ticket price: Free" << endl;
    //between 3 and 12  >> 10
    else if(age >= 3 && age <= 12)
    {
        price = 10;
        //checking day of week for possible additional discounts
        if(day == "Wednesday" || day == "wednesday")
            price = price - (price * .20);
        else if(day == "Saturday" || day == "saturday" || day == "sunday" || day == "Sunday")
            price = price - (price * .50);
        
        cout << "Ticket price: $" << price << endl;
    }
    //if 13 - 59 price = 20
    else if(age >= 13 && age <= 59)
    {
        price = 20;
        //checking week day and age for possible extra discounts
        if(day == "Wednesday" || day == "wednesday")
            price = price - (price * .20);
        else if((day == "Saturday" || day == "saturday" || day == "sunday" || day == "Sunday") && age < 18)
            price = price * .50;
        
        cout << "Ticket price: $" << price << endl;
    }
    //if 60+ price = 15
    else if(age >= 60)
    {
        price = 15;
        //checking day for possible extra discounts.
        if(day == "wednesday" || day == "Wednesday")
            price = price - (price * .20);
        
        cout << "Ticket price: $" << price << endl;
        
    }
    
    return 0;
}
