/*
 Purpose: HW1_q2, conversion of Celsius temperature and Fahrenheit
 */

#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    double ctemp, ftemp; // variables to store original Celsius temperature and Fahrenheit temperature
    double cctemp, cftemp; // variables to store converted temperature for Celsius and Fahrenheit temperature
    
    
    // set precsion to display 2 decimal digits
    cout << setprecision(2)<<fixed<<showpoint;

    //Convert Celsius temperature to Fahrenheit temperature
    cout << "Please enter a temperature in Celsius:";
    cin >> ctemp;
    cctemp = ctemp * 1.8 + 32;
    cout <<ctemp<<" C is equivalent to "<<cctemp<<" F\n"<<endl;
    
    //Convert Fahrenheit temperature to Celsius temperature
    cout << "Please enter a temperature in Fahrenheit:";
    cin >> ftemp;
    cftemp = (ftemp - 32) / 1.8;
    cout << ftemp << " F is equivalent to " << cftemp<<" C";
    
    return 0;
    
}
