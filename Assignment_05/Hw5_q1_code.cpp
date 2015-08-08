/*
 Purpose: Hw5_q1, using vectors to read numbers from a file, copy them into another vector, let users input element into vector. Then reverse vector and delete some elements in vector.
 */

#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;

//function prototype
bool checkPalindrome(vector<int>,vector<int>);
void displayValue(vector<int>);

//main begin
int main() {
    
    //initialize variables
    vector<int> v;
    vector<int> CopyValues;
    vector<int> ReverseValues;
    ifstream inputfile;
    double num;
    int v1,v2,v3;
    
    //input file into vector
    inputfile.open("Numbers.txt");
    if(!inputfile){
        cout << "Error opening file! \n";
    }
    else{
        while (inputfile >> num) {
            v.push_back(num);
        }
    }
    
    //close file
    inputfile.close();
    
    //display contents of the vector
    cout<<"Contents of Value:"<<endl;
    displayValue(v);
    
    //copy original vector into new vector
    CopyValues.swap(v);
    
    //let user input elements
    cout<<"please input three values into new vector CopyValue:"<<endl;
    cin>>v1>>v2>>v3;
    
    //input new values into new vector CopyValue
    CopyValues.push_back(v1);
    CopyValues.push_back(v2);
    CopyValues.push_back(v3);
    
    //display CopyValue
    cout<<"Contents of CopyValue:"<<endl;
    displayValue(CopyValues);
    
    //Reverse CopyValue
    ReverseValues = CopyValues;
    reverse(ReverseValues.begin(),ReverseValues.end());
    
    //display ReverseValue
    cout<<endl;
    cout<<"Content of ReverseValue:"<<endl;
    displayValue(ReverseValues);
    
    //check panlindrome
    cout<<endl;
    if (checkPalindrome(v, ReverseValues)) {
        cout<<"Value is a palindrome."<<endl;
    }else{
        cout<<"Value is not a palindrome."<<endl;
    }
    
    //delete last 3 value in CopyValue
    CopyValues.pop_back();
    CopyValues.pop_back();
    CopyValues.pop_back();
    
    //display CopyValue after deletion
    cout<<endl;
    cout<<"Content of CopyValue after deletion: "<<endl;
    displayValue(CopyValues);
    
    return 0;
}
//end of main


//checkPalindrome function
bool checkPalindrome(vector<int> orig_vec, vector<int> comp_vec){
    bool palindrome = false;
    for (int i=0;i<orig_vec.size();i++)
    {
        if (orig_vec[i] != comp_vec[i]) {   //compare each element from two vectors
            palindrome = false;
        }else{
            palindrome = true;
        }
        
    }
    return palindrome;
}

//display content and size of vectors
void displayValue(vector<int> v){
    
    for(int i = 0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<"Size:"<<v.size()<<endl;
}
