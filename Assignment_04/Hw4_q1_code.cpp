/*
 Purpose: HW4_q1, show a menu that display choices of sum two arguments, the arguments could be int, char or float. Then overload add function based on user's choice.
 */

# include<iostream>
using namespace std;

//function prototype
void showMenu();

//variable inilinzation
int add(int int1=11, int int2 = 21);
float add(float,float);
int add(char,char);
float add(int,float);
float add(float,int);
int add(char,int);
int add(int, char);

int int1, int2;
float f1, f2;
char ch1,ch2;


int main(){
    int choice;                 //hold a menu choice
    do
    {
        showMenu();
        cin>>choice;
        //input validation
        while(choice < 1 || choice >9)
        {
            cout<<"Please enter a valid menu choice:"<<endl;
            cin>>choice;
        }
        if(choice != 9)
        {
            //user input arguments
            switch(choice)
            {
                case 1:         //choice 1 int + int
                    cout<<"enter two int numbers:";
                    cin>>int1>>int2;
                    cout<<"Result is "<<add(int1,int2);
                    cin.get();
                    cin.get();
                    break;
                    
                case 2:         //choice 2 float+float
                    cout<<"enter two float numbers:";
                    cin>>f1>>f2;
                    cout<<"Result is "<<add(f1, f2);
                    cin.get();
                    cin.get();
                    break;
                    
                case 3:          //choice 3 char+ char
                    cout<<"enter two chars:";
                    cin>>ch1>>ch2;
                    cout<<"Result is "<<add(ch1,ch2);
                    cin.get();
                    cin.get();
                    break;
                    
                case 4:         //choice 4 int + float
                    cout<<"enter int and float numbers:";
                    cin>>int1>>f2;
                    cout<<"Result is "<<add(int1,f2);
                    cin.get();
                    cin.get();
                    break;
                    
                case 5:         //choice 5 float+ int
                    cout<<"enter float and int numbers:";
                    cin>>f1>>int2;
                    cout<<"Result is "<<add(f1,int2);
                    cin.get();
                    cin.get();
                    break;
                    
                case 6:         //choce6 int + char
                    cout<<"enter int and char:";
                    cin>>int1>>ch2;
                    cout<<"Result is "<<add(int1,ch2);
                    cin.get();
                    cin.get();
                    break;
                case 7:         //choice 7 char + int
                    cout<<"enter char and int:";
                    cin>>int1>>ch2;
                    cout<<"Result is "<<add(f1, int2);
                    cin.get();
                    cin.get();
                    break;
                    
                case 8:        //choice 8 default
                    cout<<"Result is "<< add();
                    cin.get();
                    cin.get();
                    break;
            }
        }else{                  //choice 9 exit()
            cout<<"Program ending...";
            cin.get();
            cin.get();
        }
    }while (choice != 9);
    return 0;
}

//display the menu
void showMenu()
{
    cout<< "Add two elements:\n";
    cout<<"1.int,int"<<endl;
    cout<<"2.float,float"<<endl;
    cout<<"3.char,char"<<endl;
    cout<<"4.int,float"<<endl;
    cout<<"5.float,int"<<endl;
    cout<<"6.int,char"<<endl;
    cout<<"7.char,int" <<endl;
    cout<<"8.Default arguments"<<endl;
    cout<<"9.exit"<<endl;
    cout<<"Please enter your choice:"<<endl;
}

//add function
int add(int int1,int int2){ return int1 + int2;}  //func for choice 1 int + int

float add(float f1,float f2){return f1+ f2;} //func for choice 2 float+float

int add(char ch1, char ch2){return static_cast<int>(ch1+ ch2);} //func for choice 3 char+ char

float add(int int1, float f2) // func for choice 4 int + float
{
    return static_cast<float>(int1+ f2);
}
float add(float f1, int int2) //func for choice 5 float+ int
{
    return static_cast<float>(f1+ int2);
}
int add(int int1, char ch2) // func for choice 6 int + char
{
    return static_cast<int>(int1+ch2);
}

int add(char ch1, int int2){return static_cast<int>(ch1 + int2);} // func for choice 7 char + int










