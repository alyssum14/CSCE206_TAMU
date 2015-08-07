/*
 Name: Zhang Xin
 UIN: 821007370
 Purpose: HW2_q2, give user a calcuator menu, calcuate area of circle, rectangle or triangle base on user's choice.
 */
#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    int choice;
    double r, //circle radius
    l, //rectangle length
    w, //rectangle width
    b, //triangle base
    h; //triangle height
    double Area;
    const double PI = 3.14159;
    
    cout << "Geometry Calculator"<<endl;
    cout<<"    1.Calculate the Area of a Circle"<<endl;
    cout<<"    2.Calculate the Area of a Rectangle"<<endl;
    cout<<"    3.Calculate the Area of a Triangle"<<endl;
    cout<<"    4.Quit"<<endl;
    
    cout<<"Enter your choice(1-4):"<<endl;
    cin>>choice;
    
    // set precsion to display 2 decimal digits
    cout << setprecision(2)<<fixed<<showpoint;
    
    switch(choice){
            //calculate area of a circle
        case 1:
            cout<<"Please enter radius:"<<endl;
            cin>>r;
            
            if (r>0) {
                Area = PI * r * r;
                cout<<"Area of Circle = "<<Area;
            }else{
                cout<<"Please enter postive number!"; //input validation
            }
            break;
            
            //calculate area of a rectangle
        case 2:
            cout<<"Please enter length:"<<endl;
            cin>>l;
            cout<<"Please enter width:"<<endl;
            cin>>w;
            
            if (l>0 && w>0) {
                Area = l * w;
                cout<<"Area of Rectangle = "<<Area;
            }else{
                cout<<"Please enter postive number!"; //input validation
            }
            break;
            
        case 3:
            cout<<"Please enter base:"<<endl;
            cin>>b;
            cout<<"Please enter height:"<<endl;
            cin>>h;
            
            if (b>0 && h>0) {
                Area = b * h * 0.5;
                cout<<"Area of Triangle = "<<Area;
            }else{
                cout<<"Please enter postive number!"; //input validation
            }
            break;
            
            //Quit the menu
        case 4:
            cin.get();
            break;
        default: cout<<"Wrong choice! Must be in the range of 1 through 4.";
    }
    return 0;
}