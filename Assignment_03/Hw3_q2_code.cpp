/*
 Name: Zhang Xin
 UIN: 821007370
 Purpose: Hw3_q2,using nested loop to print a pattern as below:
 **
 ****
 ********
 ****************
 
 */

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    
    //nested loop begins
    for (int i=1; i<=4; i++) { //outer loop control rows
        for (int j=1; j<=pow(2, i) ; j++) { //inner loop controls how many starts in each row
            cout<<"*"; //disply stars
        }
        cout<<"\n";
    }
    
    
    return 0;
}
