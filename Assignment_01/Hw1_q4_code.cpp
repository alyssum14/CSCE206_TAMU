/*
 Name: Zhang Xin
 UIN: 821007370
 Purpose: HW1_q4, calcuate oncampus-plan, offcampus-plan and total revnue of college dining hall
 */

#include <iostream>
#include <iomanip>

int main(int argc, const char * argv[]) {
    using namespace std;
    string dh_name;
    double oncamp_revnue,offcamp_revnue,total_revnue;
    const double ONCAMP_PRICE = 350.75;
    const double OFFCAMP_PRICE=500.25;
    int oncamp_sold, offcamp_sold;
    
    // set precsion to display 2 decimal digits
    cout << setprecision(2)<<showpoint<<fixed;
    
    
    //input dining hall name
    cout << "Please enter name of a dinning hall:";
    getline(cin,dh_name);
    
    //input how many oncampus or offcampus plans were sold.
    cout <<"How many oncampus plans were sold:";
    cin >> oncamp_sold;
    
    cout<< "How many offcampus plans were sold:";
    cin >> offcamp_sold;
    
    //caculate oncampus ,offcause and total revnue
    oncamp_revnue = ONCAMP_PRICE * oncamp_sold;
    offcamp_revnue = OFFCAMP_PRICE *offcamp_sold;
    total_revnue = offcamp_revnue + oncamp_revnue;
    
    //print out the results
    cout <<"\n";
    cout <<"Dining Hall Name:"<<setw(31)<< dh_name<<endl;
    cout << setw(21)<<"OnCampus plans sold:"<<setw(20)<<oncamp_sold<<endl;
    cout << setw(21)<<"OffCampus plans sold:" << setw(20) <<offcamp_sold<<endl;
    cout << setw(29)<<"Revenue from OnCampus plans:" <<setw(15) << oncamp_revnue<<endl;
    cout << setw(29)<<"Revenue from OffCampus plans:" <<setw(15) << offcamp_revnue<<endl;
    cout << "Total Revenue earned in semester:" <<setw(11) << total_revnue<<endl;
    return 0;
}
