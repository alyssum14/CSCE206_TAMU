/*
 Name: Zhang Xin
 UIN: 821007370
 Purpose: Hw4_q3, read rainfall data from a file then build arraies and functions to display it and calculate total rainfal for a year, average monthly rainfall, max_rainfall and min_rainfall.
 */

#include<iostream>
#include <fstream>


using namespace std;

//function prototype
void fillArray(double [], int);
void display(double[], int);
void min_max(double[], string[], int);

int main(){
    int array_size = 12;
    
    // create an array to store month names
    string nameMonth[] ={"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct",                "Nov", "Dec"};
    
    //create an array to store rainfall data
    double rainMonth[array_size];
    
    fillArray(rainMonth, array_size);               // call fillArray Function
    
    display(rainMonth, array_size);                 // call display Function
    
    min_max(rainMonth, nameMonth, array_size);      // call min_max Function
    
    return 0;
};

void fillArray(double rainMonth[], int array_size ){
    
    ifstream inputFile;
    double num;
    
    //open file
    inputFile.open("rainfall.txt");
    
    if(!inputFile){
        cout << "Error opening file! \n";           // Test open file erros
    }
    else{
        // Read the file
        int count = 0;
        while (inputFile >> num) {
            rainMonth[count] = num;                 //store the data into rainMonth
            count++;
        }
        
    }
    
}


void display(double rainMonth[], int array_size){
    
    double sum = 0;
    double average = 0;
    
    // print out railfall for each month
    cout<<"Rainfall for each month: ";
    for (int i = 0; i< array_size; i++) {
        cout<<rainMonth[i]<<"; ";
        
    //total rainfall for a year
    sum += rainMonth[i];
        
    //average rainfall for a year
    average = sum / array_size;
    }
    cout<<endl;
    cout<<"Total rainfall for the year: "<<sum<<endl;
    cout<<"Average monthly rainfall: "<<average<<endl;
    
}

void min_max(double rainMonth[], string nameMonth[], int array_size){
    double highRf = 0.0, lowRf = 0.0;
    string highmth, lowmth;
    
    //find highest value in array
    for (int i = 0; i<array_size; i++) {
        highRf = rainMonth[0];
        if(rainMonth[i] > highRf)
        {
            highRf = rainMonth[i];
            highmth = nameMonth[i];
        }
        
        //find lowest value in array
        lowRf = rainMonth[0];
        if (rainMonth[i] < lowRf) {
            lowRf = rainMonth[i];
            lowmth = nameMonth[i];
        }
    }
    //display results
    cout << "Highest Rainfall recorded is " << highRf <<" inches in month of " <<highmth<<endl;
    cout << "Lowest Rainfall recorded is " << lowRf <<" inches in month of " <<lowmth;
}
