/*
 Purpose: HW3_q1,input numbers from a file, which is manully created, calcuate the max, man and count of those numbers
 */

#include<iostream>
#include<ctime>
#include<fstream>

using namespace std;

int main(){
    
    //input from a file
    ifstream inputFile;
    double num, max=0, min=0;
    int count = 0;
    
    //open file
    inputFile.open("Numbers.txt");
    
    if(!inputFile){
        cout << "Error opening file! \n";// Test open file erros
    }
    else{
        // Read a number and execute the loop while read was successful
        while (inputFile >> num) {
            //compare max and min with numbers in sequence and get the max and min numbers.
            if (num>max)
                max=num;
            if (num<min)
                min=num;
            count++; // count how many numbers in this file
        }
        
        cout <<endl;
        
        //display results
        cout<< "Count = "<< count<<endl;
        cout<<"Largest Value = "<< max <<endl;
        cout<<"Smallest Value = "<< min<<endl;
        inputFile.close(); //close the file
    }
    return 0;
}
