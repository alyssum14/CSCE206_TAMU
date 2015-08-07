/*
 Name: Zhang Xin
 UIN: 821007370
 Purpose: HW5_q4, let user input two strings, convert them into csrings and create 3rd cstring to store concatenation of them.
 */

#include <iostream>
#include <cstring>
using namespace std;

//main begins
int main() {
    string str1, str2;
    char *cstr1, *cstr2, *cstr3;
    
    //let user enter the first string
    cout<<"Please enter first string:";
    getline(cin,str1);
    
    //user enter second string
    cout<<"Please enter second string:";
    getline(cin,str2);
    
    //allocate dynamic memory
    cstr1 = new char[str1.length() + 1];
    strcpy(cstr1, str1.c_str());
    
    cstr2 = new char[str2.length() + 1];
    strcpy(cstr2, str2.c_str());
    
    cstr3 = new char[str1.length() + str2.length() + 2];
    
    //insert first word into cstr3
    for (int count = 0; count < str1.length(); count++) {
        cstr3[count] = cstr1[count];
    }
    
    //insert space between two words
    string sp = " ";
    char *space;
    space = new char[sp.length() + 1];
    strcpy(space, sp.c_str());
    cstr3[str1.length()] = space[0];
    
    //insert second word into cstr3
    for (int count = 0; count< str2.length();count++) {
        cstr3[count+str1.length() +1] = cstr2[count];
    }
    
    //display result
    cout<<"str1: "<<str1<<endl;
    cout<<"str2: "<<str2<<endl;
    cout<<"Concatenated c-style string: "<<cstr3;
    
    return 0;
}
//main ends

