/*
 Name: Zhang Xin
 UIN: 821007370
 Purpose: HW5_q2, randomly generate 100 numbers between 0 and 1000 then store them in array RandomNumbers, using selection sort algorithm sort the array in non-decreasing order. Then initialize another array TerminalSum by adding each pair of terminal elements form RandomNumbers(e.g Terminal[0]=RandomNumbers[0] + RandomNumbers[1]...) and sort it in non-decreasing order. Disply elements of above arries.
 */

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//function prototype;
void showArray(int [], int);
void selectionSort(int[], int);

//main begins
int main() {
    const int array_size = 100;
    const int array_size2 = 50;
    int RandomNumbers[array_size];
    int TerminalSum[array_size2];
    
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
    
    //initialize TerminalSum
    int frontIndex = 0;
    int backIndex = 99;
    for(int terIndex = 0; terIndex< array_size2; terIndex ++ ,frontIndex++,backIndex--){
        TerminalSum[terIndex] = RandomNumbers[frontIndex] + RandomNumbers[backIndex];
    }
    
    //display TerminalSum
    cout<<endl;
    cout<<"TerminalSum:"<<endl;
    showArray(TerminalSum, array_size2);
    
    //sort TerminalSum
    cout<<endl;
    cout<<"TerminalSum after sort:"<<endl;
    selectionSort(TerminalSum, array_size2);
    
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

//selection sort function
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
                minValue = array[index];        //find new min value
                minIndex = index;
            }
        }
        array[minIndex] = array[startScan];     //  restart scan from new minvalue
        array[startScan] = minValue;
    }
    showArray(array, size);
}