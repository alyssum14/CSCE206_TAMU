/*
 Name: Zhang Xin
 UIN: 821007370
 Purpose: HW1_q5, organize information that user inputed into a simple story
 */

#include <iostream>

int main() {
    using namespace std;
    
    //get name,city,college,professor,age,animal and pet_name from user
    string name, city, college, profession, animal, pet_name,major;
    int age;
    
    cout << "Please enter your name:";
    getline(cin,name);
    
    cout << "Please enter your native city:";
    getline(cin,city);
    
    cout << "Please enter your college:";
    getline(cin, college);
    
    cout << "Please enter your major:";
    getline(cin,major);
    
    cout << "Please enter your professor:";
    getline(cin,profession);
    
    cout << "Please enter a type of animal:";
    getline(cin,animal);
    
    cout << "Please enter a pet's name:";
    getline(cin, pet_name);
    
    cout << "Please enter your age:";
    cin>>age;
    
    //print out the story
    cout<<"\n";
    
    cout <<"There once was a person named "<<name<<" who lived in " <<city<<". "<<"At the age of "<<static_cast<int>(age)<<", "<<name<<" went to college at "<<college<<". "<<name<<" completed his course and started working as a "<< profession<<". Then, "<<name<<" adopted a(n) "<<animal<<" named "<<pet_name<< " that was always loyal to "<<name<<".";
    
    return 0;
}
