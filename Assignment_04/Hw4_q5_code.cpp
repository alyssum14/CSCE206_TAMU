/*
 Purpose: HW4_q5, read data from a file into array A and B, then cacluate product of them and store results into array C
 */


#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
const int ROWS = 3;
const int COLS = 3;

int main() {
    //create two 2d arrays
    int A[ROWS][COLS];
    int B[ROWS][COLS];
    int C[ROWS][COLS];
    
    //open the file
    
    ifstream inputfile;
    
    inputfile.open("Multiply.txt");
    if(!inputfile){
        cout << "Error opening file! \n";
    }
    else{
        //store data into array A
        cout<<"A:"<<endl;
        for (int r = 0; r<ROWS; r++) {
            for (int c = 0; c< COLS; c++)
            {
                inputfile >> A[r][c];
                cout<<setw(4)<<A[r][c]<<"  ";
            }
            cout<<endl;
        }
        
        //store data into array B
        cout<<"B:"<<endl;
        for (int r = 0; r<ROWS; r++) {
            for (int c = 0; c< COLS; c++)
            {
                inputfile >> B[r][c];
                cout<<setw(4)<<B[r][c]<<"  ";
            }
            cout<<endl;
        }
        
    }
    
    //close file
    inputfile.close();
    
    //Calculate product of A and B and store results in C
    for (int r = 0; r<ROWS; r++) {
        for (int c = 0; c< COLS; c++){
            C[r][c] =0;
            for(int k = 0; k<ROWS; k++){
                C[r][c] += A[r][k]* B[k][c];
            }
        }
    }
    
    //display C
    cout<<"A * B = C:"<<endl;
    for (int r = 0; r<ROWS; r++) {
        for (int c = 0; c< COLS; c++) {
            cout<<setw(4)<<C[r][c]<<"  ";
        }
        cout<<endl;
    }
    return 0;
}
