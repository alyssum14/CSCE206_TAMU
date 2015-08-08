/*
 Purpose: HW3_q4, user and computer roll dice for 10 rounds, calcuate how many round each of them wins, and judge the grande winner
 */

#include<iostream>
#include<ctime>
#include<fstream>
#include<iomanip>
#include<cstdlib>

using namespace std;


int main(){
    
    //initilize variables
    int computerWin = 0,
    computerRound =0,
    userWin = 0,
    userRound = 0,
    tieRound = 0;
    string winner;
    
    
    cout << "Round  "<<"Computer's Die  "<<"User's Die  "<<"Winner"<<endl;
    
    // pick a seed for random function
    srand(unsigned(time(0)));
    
    //start rolling dice
    for (int round = 1; round <= 10; round++) {
        
        computerRound = 1 + int(rand()%6);       //computer roll a die
        userRound = 1 + int(rand()%6);           //user roll a die
        
        // judge who win the game
        if (computerRound > userRound) {        // computer wins
            winner = "Computer";
            computerWin++;
        }else{
            if (computerRound < userRound) {    // user wins
                userWin++;
                winner = "User";
            }else{
                tieRound++;
                winner = "Tie";                // tie round
            }
        }
        
        
        //Display result
        cout<<setw(3)<<round<<setw(12)<<computerRound<<setw(12)<<userRound<<setw(16)<< winner<<endl;
    }
    
    cout<<"\n";
    
    cout << "Total Rounds won by Computer = "<< computerWin<<endl;
    cout << "Total Rounds won by User = "<<userWin<<endl;
    cout <<"Grand Winner is ";
    
    //judge the grande winner
    if (computerWin > userWin) {
        cout<<"Computer!";
    }else{
        if(userWin > computerWin){
            cout<<"User!";}
        else{
            cout <<"both of computer and user!";
        }
    }
    return 0;
}


