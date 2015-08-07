
/*
 Name: Zhang Xin
 UIN: 821007370
 Purpose: Hw_q1, Calculate the subtotal and grade point for three assignments
 */

#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    
    //store assignment scores and assignment grade point into different variable, variable's type is double
    double assign1, assign2, assign3, subtotal;
    double agp;
    
    // set precsion to display 2 decimal digits
    cout << setprecision(2)<<fixed<<showpoint;
    
    //user input assignment scores
    cout << "What is your first assignment score?";
    cin >> assign1;
    
    cout <<"What is your second assignment score?";
    cin >> assign2;
    
    cout << "What is your third assignment score?";
    cin >> assign3;
    
    //calculate subtotal and agp
    subtotal = assign1 + assign2 + assign3;
    
    //every assignment worth 100 points , 3 of them will worth 300 points.becasue the output request it printed out as a percetage, so subtotal should divide by 3
    agp = subtotal / 3;
    
    cout << "Subtotal = " << subtotal << endl;
    cout << "Assignment grade point= " << agp <<" %"<< endl;
}