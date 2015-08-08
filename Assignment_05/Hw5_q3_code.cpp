/*
 Name: Zhang Xin
 UIN: 821007370
 Purpose: HW5_q3, using binary search algorithm to search last 3 digits of UIN in RandomNumbers created in Hw5_q2 and report if the number is found or not. Then let user input number and search it, if the number is negative then search its positive counterpart in array.
 */

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


//function prototype;
void showArray(int array[], int);
int binarySearch(int [], int, int);
void searchResult(int[], int, int);
void selectionSort(int[], int);

//main begins
int main() {
    //reuse code from Hw5_q2
    const int array_size = 100;
    int RandomNumbers[array_size];
    int resultIndex,resultIndex_User;
    int userNum,userNum2;
    
    //generate rand seed;
    srand(unsigned(time(0)));
    
    //store and display 100 random numbers in RandomNumbers
    cout<<"Elements in RandomNumbers:"<<endl;
    for (int i = 0; i<array_size; i++) {
        RandomNumbers[i] = (1+ rand() % 1001) -1;
    }
    showArray(RandomNumbers, array_size);
    
    //sort RandomNumbers
    cout<<endl;
    cout<<"RandomNumbers after sort:"<<endl;
    selectionSort(RandomNumbers, array_size);
    
    //search last s digits of my UIN:821007370 and display search result
    int UIN = 370;
    resultIndex = binarySearch(RandomNumbers, array_size, UIN);
    cout<<endl;
    cout<<"Searching "<<UIN<<"..."<<endl;
    searchResult(RandomNumbers, array_size, resultIndex);
    
    
    //let user input searchNumber and search it
    cout<<endl;
    cout<<"Please input a search Number:"<<endl;
    cin>>userNum;
    userNum2 = abs(userNum);
    
    //search the number a user put
    showArray(RandomNumbers, array_size);
    resultIndex_User = binarySearch(RandomNumbers, array_size, userNum2);
    cout<<"Searching "<<userNum2<<"..."<<endl;
    searchResult(RandomNumbers, array_size, resultIndex_User);
    
    return 0;
}
//main end

//show array function
void showArray(int array[] , int array_size){
    for (int i = 0; i<array_size; i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
}

//binarySearch function
int binarySearch(int array[], int size, int searchNum){
    int firstIndex = 0,
    lastIndex = size - 1,
    middleIndex,
    index = -1;
    bool found = false;
    
    while (!found && firstIndex<lastIndex) {
        middleIndex = (firstIndex + lastIndex) / 2;  //find middle point
        if (array[middleIndex] == searchNum) {
            found = true;
            index = middleIndex;
        }else if(array[middleIndex] > searchNum){
            lastIndex = middleIndex - 1;            //searchNumber in smaller half
        }else{
            firstIndex = middleIndex + 1;           //searchNumber in larger half
        }
    }
    return index;
    
}

//selctions Sort function
void selectionSort(int array[], int size)
{
    int startScan, minIndex, minValue;
    for ( startScan = 0; startScan < (size -1); startScan++)
    {
        minIndex = startScan;
        minValue = array[startScan];
        for (int index = startScan + 1; index < size; index++)
        {
            if (array[index] < minValue)
            {
                minValue = array[index];   //find new min value
                minIndex = index;
            }
        }
        array[minIndex] = array[startScan];     //  restart scan from new minvalue
        array[startScan] = minValue;
    }
    showArray(array, size);
}

//search result report function
void searchResult(int array[], int size, int result){
    if (result == -1) {
        cout<<"The number is not found..."<<endl;
    }else{
        cout<<"The number is found:"<<array[result]<<endl;
    }
}
