/*
 Purpose: HW4_q4, read data from a file into 2d array and calculate the sum and average for each column. Then build a function that transpose original function.
 */

#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

const int ROWS = 4;
const int COLS = 4;

//prototype
void columStats(int [][COLS], int);
void transpose(int [][COLS], int [][COLS]);

int main() {
    
    //create a two dimension array
    int Values[ROWS][COLS];
    
    //open the file
    ifstream inputfile;
    
    inputfile.open("Numbers.txt");
    if(!inputfile){
        cout << "Error opening file! \n";
    }
    else{
        //store data into array
        for (int r = 0; r<ROWS; r++) {
            for (int c = 0; c< COLS; c++)
            {
                inputfile >> Values[r][c];
            }
        }
    }
    
    //close file
    inputfile.close();
    
    //print out the 2d array
    cout<<"Values:"<<endl;
    for (int r = 0; r<ROWS; r++) {
        for (int c = 0; c< COLS; c++) {
            cout<<setw(4)<<Values[r][c]<<"  ";
        }
        cout<<endl;
    }
    
    //call columnstats function
    columStats(Values,COLS);
    
    //call transpose function
    int transpose_Value[ROWS][COLS];
    transpose(Values,transpose_Value);
    
    return 0;
}

void columStats(int Value[][COLS], int ROWS){
    int colsum = 0;
    int colavg;
    int r, c = 0;
    
    cout<<endl;
    cout<<"Sum and Average for each column:"<<endl;
    for (r = 0; r<COLS; r++) {
        for (c = 0; c<ROWS; c++)
            colsum+=Value[c][r];  //calcuate sum of each column
        colavg = colsum/COLS; //calcuate average of each column
        
        //display sum and average
        cout<<"Column"<<r+1<<": Sum = "<<colsum<<setw(11)<<"Average = "<<colavg;
        colsum = 0;
        cout<<endl;
    }
}

void transpose(int Value[][COLS] ,int transposed_Value[][COLS]){
    cout<<endl;
    cout<<"Transposed_Values:"<<endl;
    for (int r = 0; r<ROWS; r++) {
        for (int c = 0; c<COLS; c++) {
            //transpose Value and store new array into transposed_Value
            transposed_Value[r][c] = Value[c][r];
            
            //print out transposed_Value
            cout<<setw(4)<<transposed_Value[r][c]<<"  ";
        }
        cout<<endl;
    }
    
    
}
