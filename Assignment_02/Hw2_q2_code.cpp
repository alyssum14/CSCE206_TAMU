/*
 Name: Zhang Xin
 UIN: 821007370
 Purpose: HW2_q2, calcuate total cost and discount of hambergers based on quantity 
 */
#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    const int PRICE = 8;
    int quantity;
    double discount,total=0;
    
    cout<<"How many burgers do you want to buy?";
    cin>>quantity;
    
    // set precsion to display 2 decimal digits
    cout << setprecision(2)<<fixed<<showpoint;
    
    // use if else statement to determine what discount will be used and calculate total cost based on it
    if(quantity < 0){
        cout<< "The quantity cannot be negtive";}
    else{
        if(quantity<=9){
            discount = 0;
            total = quantity * PRICE;
            
        }
        else if(quantity <=19){
            discount =0.1;
            total = 0.9 * quantity * PRICE;
        }
        else if(quantity <= 49){
            discount = 0.25;
            total= 0.75 * quantity * PRICE;
        }
        else if(quantity <= 99){
            discount = 0.5;
            total = 0.5 * quantity * PRICE;}
        else{
            discount = 0.75;
            total = 0.25* quantity * PRICE;
        }
        cout<<"You have "<<discount<<" discount."<<endl;
        cout<< "The total price will be " << total<<"."<<endl;
        return 0;
    }

}