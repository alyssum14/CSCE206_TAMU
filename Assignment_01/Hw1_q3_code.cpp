/*
 Name: Zhang Xin
 UIN: 821007370
 Purpose: HW1_q3, given initial velocity(u), acceleration(a) and time taken(t), calculate final velocity(v),displacement(s) and square of v(v3)
 */

#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    double u, a , t; // variables for initial velocity(u), acceleration(a) and time taken(t)
    double v, s, v3; // variabbles for final velocity(v),displacement(s) and square of v(v3)
    
    
    // set precsion to display 2 decimal digits
    cout << setprecision(2)<<fixed<<showpoint;
    
    //user input value for u, a and t
    cout << "Please enter initial velocity: ";
    cin >> u;
    
    cout << "Please enter acceleration: ";
    cin >> a;
    
    cout <<"Please enter time taken: ";
    cin >> t;
    
    // calculate final velocity(v),displacement(s) and square of v(v3)
    v = u + a*t;
    s = u*t + 0.5 * a * t* t;
    v3 = u*u + 2 *a *s;
    
    // print out the values that user entered and results
    cout <<"Given quantities: \n";
    cout << "u = " <<u << endl;
    cout << "a = " <<a<<endl;
    cout << "t = "<<t<<"\n"<<endl;
    
    cout <<"Calculated quantities:\n";
    cout << "v = "<< v<<endl;
    cout << "s = "<< s<<endl;
    cout << "v3 = "<< v3<<endl;
}