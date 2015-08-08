/*
 Purpose: HW2_q3, wait for user to randomly pick a card between 1 and 20
 */
#include<iostream>


using namespace std;
int main(){
    int num;
    int day,
    hour,
    minute,
    second,
    second2;
    
    // make sure input is valid
    
    cout<< "Please enter a number of seconds:"<<endl;
    cin>>num;
    
    
    //
    if (num >=0) {
        cout<< num<<" seconds = ";
        //condition 1: seconds is greater than 86400(1 day)
        if (num >= 86400) {
            day = num / 86400; //calculate days
            second = num % 86400; //calcuate how many minutes are left.
            cout<< day <<" days,";
            if (second >=3600) {
                hour = second / 3600; //calculate hours
                second = second % 3600;
                cout<< hour << " hours,";
                if (second >= 60) {
                    minute = second / 60; //calculate minute
                    second = second % 60;
                    cout << minute <<" minute,"<<second<<"seconds";
                }else{
                    cout<<second<<"seconds";
                }
            }else{
                if (second > 60) {
                    minute = second / 60; //calculate minute
                    second = second % 60;
                    cout << minute <<" minute,"<<second<<"seconds";
                }else{
                    cout<<second<<"seconds";
                }
            }
        }
        else if(num > 3600){
            // condition 2: seconds is greater than 3600(1 hour)
            hour = num / 3600;
            second = num % 3600;
            cout << hour <<" hours,";
            if (second >60) {
                minute = second / 60; //calculate minute
                second = second % 60;
                cout << minute <<" minute,"<<second<<" seconds";
            }else{
                if(second >0){
                    cout<<second<<" seconds";
                }else{cout<<"";}
            }
            
        }
        else if(num>60){
            // condition 3: second is greater than 60 (1 minute)
            minute = num / 60; //calculate minute
            second = num % 60;
            cout << minute <<" minute,"<<second<<" seconds";
        }
        else{
            cout<<num<<" seconds";
        }
        
        
    }else{
        cout<<"The number is negtive!";
    }
    return 0;
    
}






