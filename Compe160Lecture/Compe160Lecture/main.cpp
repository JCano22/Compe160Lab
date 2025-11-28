//
//  main.cpp
//  Compe160Lecture
//
//  Created by Jorge Cano on 9/3/25.
//

#include <iostream>
using namespace std;

struct User{
    
    int age;
    string name;
    
};


int main()
{
    User user1;
    
    cout << "What is your age: ";
    cin >> user1.age;
    
    cout << "What is your name: ";
    cin >> user1.name;
    
    cout << user1.age << ", " << user1.name << endl;
}
