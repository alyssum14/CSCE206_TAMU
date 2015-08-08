/*
 Purpose: calculate the sum of first n numbers, sum of even numbers and sum of odd numbers that user entered
 */

#include<iostream>


using namespace std;

int main(){
    int num;
    int sum=0,
    sum_even =0,
    sum_odd = 0;
    
    cout<< "Please a positive integer:"<<endl;
    cin >> num;
    
    if (num>0) {
        for(int i =1; i<=num;i++){//use for loop to calculate sum of first n , even and odd numbers
            
            sum += i;
            if(i % 2==0){
                sum_even += i;
            }else{
                sum_odd += i;
            }
        }
        
        cout<<"N = "<< num<<endl;
        cout<<"Sum of first N numbers = "<< sum<<endl;
        cout <<"Sum of even numbers = "<< sum_even<<endl;
        cout << "Sum of odd numbers = " << sum_odd<<endl;
    }else{
        cout<<"The number your entered is not a positive integer!"<<endl; //input validation
    }
    
    
    
    return 0;
};
