/*
 Purpose: HW4_q2, let user decide how many time a dice should be tossed, then calculate probablity of getting head and tails each round.
 */
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

//prototype
void binaryFlip();

int main(){
    int ftime;
    
    cout<<"Enter the number of tosses:";    // User input the flip times
    cin>>ftime;
    cout<<endl;
    //generate rand seed
    srand(unsigned(time(0)));
    
    //started toss
    for (int i = 1; i<=ftime; i++) {
        cout<< setw(2)<<i;
        binaryFlip();
    }
    return 0;
    
}

//coinfilp function
void binaryFlip(){
    int radnum;
    static double hdcount = 0;
    static double tlcount = 0;
    double phead,ptail;
    
    // set precsion to display 2 decimal digits
    cout << setprecision(2)<<fixed<<showpoint;
    
    //generate random number
    radnum = (1+ rand()%2) - 1;
    
    //judge the result of flipcoins
    if (radnum == 0) {
        cout<<setw(8)<<"Heads";
        hdcount++;
        
    }else{
        cout<<setw(8)<<"Tails";
        tlcount++;
        
    }
    
    //calculate probablity
    phead = hdcount/(hdcount + tlcount);
    ptail = tlcount/(hdcount + tlcount);
    
    //display result
    cout<<setw(14)<<"P(H) = "<<phead;
    cout<<setw(10)<<"P(T) = "<<ptail<<endl;
    
}
