/*
 Name: Zhang Xin
 UIN: 821007370
 Purpose: HW2_q1, wait for user to randomly pick a card between 1 and 20
 */

#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;

int main(){
    
    unsigned seed = time(0); //randomly pick a number by using system clock
    srand(seed); //use it as seed
    cout << "Shuffling the cards...";
    cin.get(); // Program will be pause untill user enter to continue
    
    cout << (1+ rand() % 20)<<endl; //random print out a number between 1 and 20
    
    cout <<"Shuffling the cards again...";
    cin.get();
    
    cout << (1 + rand() % 20);
    
    return 0;
};