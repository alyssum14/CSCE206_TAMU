/*
 Name: Zhang Xin
 UIN: 821007370
 Purpose: HW2_q3, wait user input a number N between 50 and 100, generate 20 numbers between 1 and N, then input them into a file, then read number
 */
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <fstream>


using namespace std;


int main(){
    
    int N, num,num1;
    bool f = true;
    
    //input a value between 50 and 100
    cout<< "Please input a int value that between 50 and 100: "<<endl;
    cin >> N;
    
    //Validate input
    while (N <50 || N >100) {
        //display error message
        cout<<"You should input a value between 50 and 100! \n"<<endl;
        
        //input value again
        cout<<"Please input int number again: "<<endl;
        cin>>N;
        
    }
    
    
    // prepare file for output and input numbers
    ifstream infile;
    ofstream outfile("Random.txt"); //create a file to store numbers
    
    
    
    //Generate 20 random numbers from 1 to N;
    srand(unsigned(time(0)));
    
    for(int i = 0; i< 20;i++){
        num = (1+ rand() % N);  // Random pick 20 numbers from 1 to N
        outfile << num <<endl;  //output the numbers to file
    }
    
    cout<< "Prime numbers in file: "<<endl;
    
    //input numbers from "Random.txt"
    infile.open("Random.txt");
    if (!infile) {
        cout<<"File opening error!"; //file validation
    }
    else{
        // find prime numbers in file
        while (infile >> num1) {
            f = true;
            if (num1 >= 2) {
                for (int i = 2; i < num1/2; i++)
                {
                    if (num1 % i ==0)
                    {
                        f = false;
                        break;
                    }
                }
                if (f == true)
                {
                    cout << num1 << " ";
                }
                
            }
        }
    }
    
    //close the file
    infile.close();
    
    return 0;
}
