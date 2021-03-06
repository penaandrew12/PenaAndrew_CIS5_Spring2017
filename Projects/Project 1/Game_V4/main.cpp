/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on March 30, 2017, 5:40 PM
 * Purpose: Version 4 of Game
 */

//System Libraries 
#include <iostream>  //Main Library
#include <cmath>     //Power Function
#include <iomanip>  //Format
#include <cstdlib>  //Random Number Generator
using namespace std;

//User Libraries 

//Global Constants Only

//Like PI, e, Gravity, or conversions

//Function Prototypes

//Program Execution Begins
int main(int argc, char** argv) {
    //Set the random number seed
    string Name;    //Name
    char ans;   //Answer to play again
    int RndmNum, //Random Number   
        i,      //For loop
        MrblsTkn; //Marbles Taken By player
    float num=0;  //Random Number
    int Mrbls=0; //Symbols marbles for the materials for game (First Game Starts at 12)
 
    cout<<"Please Enter Name = ";
    cin>>Name;
    cout<<"Welcome "<<Name<<". You get to play Dr. NIM!"<<endl; 
    cout<<"The Objective of this game is to try to take the last Marble."<<endl;
    cout<<"The Rules are simple. The Computer will go first and it will choose One, Two, or Three Marbles."<<endl;
    cout<<"After it picks the Marbles, it will be your turn to choose from One, Two, or Three Marbles."<<endl;
    cout<<"It will then repeat and will let you go again until the last Marble is picked."<<endl;
    cout<<"Good Luck! Also, if you do not win the first time you may play again."<<endl;
    cout<<"Please press Enter to Start Game."<<endl<<endl;
    cin.get();
    cin.ignore();
    
    do {
 
    num=(rand()% 100)+16; 
    
    Mrbls=num;
    Mrbls=static_cast<int>(Mrbls);
    
    cout<<"The Game will play with "<<Mrbls<<" Marbles"<<endl;
    
    if (Mrbls%3==0){
        RndmNum=(rand()% 3)+1;
        cout<<"The Computer takes "<<RndmNum<<" Marble(s)."<<endl;
        Mrbls=Mrbls-RndmNum;
        cout<<"There are "<<Mrbls<<" Marbles Left."<<endl<<endl;
        }
    else if ((Mrbls-1)%3==0){
        cout<<"The Computer takes 1 Marble."<<endl;
        Mrbls=Mrbls-1;
        cout<<"There are "<<Mrbls<<" Marbles Left."<<endl<<endl;
        }
        else if ((Mrbls-2)%3==0){
            cout<<"The Computer takes 2 Marbles."<<endl;
            Mrbls=Mrbls-2;
            cout<<"There are "<<Mrbls<<" Marbles Left."<<endl<<endl;
            }
            else if ((Mrbls-3)%4==0){
                cout<<"The Computer takes 3 Marbles."<<endl;
                Mrbls=Mrbls-3;
                cout<<"There are "<<Mrbls<<" Marbles Left."<<endl<<endl;
                }
            else cout<<"The Computer takes 3 Marbles."<<endl;
                Mrbls=Mrbls-3;
                cout<<"There are "<<Mrbls<<" Marbles Left."<<endl<<endl;
    
    
    while (Mrbls<4);{
    
    cout<<"Enter The Amount of Marbles you wish to take for Your Turn = ";
    cin>>MrblsTkn;
    
    if(!(MrblsTkn==1||MrblsTkn==2||MrblsTkn==3)){
        cout<<"Invalid Input. The Computer Follows the Rules of the Game, which "
                "if not are not followed, it will not work properly."<<endl;
        return 1; 
    }
    
    Mrbls=Mrbls-MrblsTkn;
    cout<<"You have taken "<<MrblsTkn<<" Marble(s). There are ";
    cout<<Mrbls<<" Marble(s) Left."<<endl;
    
    if (Mrbls%4==0){
        RndmNum=(rand()% 3)+1;
        cout<<"The Computer takes "<<RndmNum<<" Marble(s)."<<endl;
        Mrbls=Mrbls-RndmNum;
        cout<<"There are "<<Mrbls<<" Marbles Left."<<endl<<endl;
        }
    else if ((Mrbls-1)%4==0){
        cout<<"The Computer takes 1 Marble."<<endl;
        Mrbls=Mrbls-1;
        cout<<"There are "<<Mrbls<<" Marbles Left."<<endl<<endl;
        }
        else if ((Mrbls-2)%4==0){
            cout<<"The Computer takes 2 Marbles."<<endl;
            Mrbls=Mrbls-2;
            cout<<"There are "<<Mrbls<<" Marbles Left."<<endl<<endl;
            }
            else if ((Mrbls-3)%4==0){
                cout<<"The Computer takes 3 Marbles."<<endl;
                Mrbls=Mrbls-3;
                cout<<"There are "<<Mrbls<<" Marbles Left."<<endl<<endl;
                }
    }
    

    
    cout<<"Enter The Amount of Marbles you wish to take for the Next Turn = ";
    cin>>MrblsTkn;
    
    if(!(MrblsTkn==1||MrblsTkn==2||MrblsTkn==3)){
        cout<<"Invalid Input. The Computer Follows the Rules of the Game, which "
                "if not are not followed, it can not work properly."<<endl;
        return 1;  //Use of DeMorgans law to make clear
    }
    
    Mrbls=Mrbls-MrblsTkn;
    cout<<fixed<<setprecision(3)<<showpoint;
    cout<<endl<<"During the game there was a total of "<<setw(1)<<num<<" Marbles. There is now "<<Mrbls<<" Left."<<endl;
    
        if (Mrbls=1,Mrbls=2,Mrbls=3){
            cout<<"The Computer Takes the Last Marble(s)."<<endl<<endl;
        }
    
    cout<<"Play Again?"<<endl;
    cout<<"Yes or No?"<<endl;
    cout<<"Type Y for Yes N for No."<<endl;
    cin>>ans;
    cout<<endl;
    }
    
    while (ans=='Y'||ans=='y');
    
    //Exit Stage
    return 0;
}

