/*
 Name: Zhang Xin
 UIN: 821007370
 Purpose: HW5_q4, using pointer to swap the first half of the elements in array RandomNumbers, which is created from Hw5_q2, with second half of the elements.
 */

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//function prototype;
void showArray(int [],int);
void swapArray(int [],int);

//main begins
int main() {
    //reuse code from Hw5_q2
    const int array_size = 100;
    int RandomNumbers[array_size];
    
    //generate rand seed;
    srand(unsigned(time(0)));
    
    //store and display 100 random numbers in RandomNumbers
    cout<<"Elements in RandomNumbers:"<<endl;
    for (int i = 0; i<array_size; i++) {
        RandomNumbers[i] = (1+ rand() % 1001) -1;
    }
    showArray(RandomNumbers, array_size);
    
    //swap RandomNumbers
    swapArray(RandomNumbers, array_size);
    
    return 0;
}
//main end

//showArray function
void showArray(int array[] , int array_size){
    for (int i = 0; i<array_size; i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
}

//swapArray function
void swapArray(int array[],int size){
    //initialize pointers
    int *first ;
    int *second;
    int middle;
    
    first = array;
    middle = size/2;
    second = &array[middle];
    
    for (int count = 0; count <size/2;count++ ) {
        int temp;
        temp = *first;              //change first half and second half
        *first = *second;
        *second = temp;
        first++;
        second++;
    }
    
    //display array after swap
    cout<<endl;
    cout<<"RandomNumbers after swap:"<<endl;
    showArray(array, size);
}

