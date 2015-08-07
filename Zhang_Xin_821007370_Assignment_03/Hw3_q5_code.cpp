/*
 Name: Zhang Xin
 UIN: 821007370
 Purpose: HW2_q5, wait user input a number N between 50 and 100, generate 20 numbers between 1 and N, then input them into a file and find prime number among them. In this case, funcation
 */
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <fstream>


using namespace std;
ifstream infile;


//function prototype
void generateFile(int,string);
bool isprime(int);

//main function
int main(){
    int N,num1;
    string filename;
    
    //input a value between 50 and 100
    cout<< "Please input a int value that between 50 and 100: "<<endl;
    cin >> N;
    
    //Validate input
    while (N <50 || N >100) {
        //display error message
        cout<<"You should input a value between 50 and 100! \n"<<endl;
        cin.get();
        //input value again
        cout<<"Please input int again: "<<endl;
        cin>>N;
        
    }
    
    
    // prepare file for output and input numbers
    cout << "Please enter a file name(e.g. 'a.txt'): "<<endl;
    cin >> filename;
    
    //call generateFile function
    generateFile(N, filename);
    
    //find prime number in this file
    cout<< "Prime numbers in file: "<<endl;
    
    //input numbers from the file
    infile.open(filename.c_str());
    while (infile >> num1) {
        if (num1>=2){
            if(isprime(num1)) {
                cout<<num1<<"  ";
            }
        }
    }
    
    infile.close(); //close the file
    return 0;
}


// generate file and 20 random numbers based on user's choice
void generateFile(int N, string filename){
    int num;
    
    //create a file to store numbers
    ofstream outfile(filename.c_str());
    
    //file validation
    if (!infile) {
        cout<<"File opening error!"; //file validation
    }
    else{
        cout<<filename<<" is created!"<<endl;
    }
    
    
    //Generate 20 random numbers from 1 to N;
    srand(unsigned(time(0)));
    
    for(int i = 0; i< 20;i++){
        num = (1+ rand() % N);  // Random pick 20 numbers from 1 to N
        outfile << num <<endl;  //output the numbers to file
        //cout << num << "  ";
    }
    
}

bool isprime(int num1){
    bool f=true;
    for (int i = 2; i <= num1/2; i++){
        if (num1 % i ==0){
            f= false;
        }
    }
    return f;
}
