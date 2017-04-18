/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on March 30, 2017, 5:40 PM
 * Purpose: Version 1 of Game
 */

//System Libraries 
#include <iostream>
using namespace std;

//User Libraries 

//Global Constants Only

//Like PI, e, Gravity, or conversions

//Function Prototypes

//Program Execution Begins
int main(int argc, char** argv) {
    //Declare all Variables
    char ans;
    int MrblsTkn, //Marbles Taken By player
        Mrbls=16; //Symbols marbles for the materials for game (First Game Starts at 12)
    
    cout<<"Congratulations! You get to play Dr. NIM!"<<endl; 
    cout<<"The Objective of this game is to try to take the last Marble."<<endl;
    cout<<"The Rules are simple. You are to go first and you can choose One, Two, or Three Marbles."<<endl;
    cout<<"After you pick your Marbles, The Computer will then have its turn to choose as well."<<endl;
    cout<<"It will then let you go again and the process will repeat until the last Marble is picked."<<endl;
    cout<<"Good Luck! Also, if you do not win the first time you may play again."<<endl<<endl;
    
    do {
    
    cout<<"The Game will start at 16 Marbles."<<endl;    
    cout<<"Enter The Amount of Marbles you wish to take for the First Turn = ";
    cin>>MrblsTkn;
               
    if(!(MrblsTkn==1||MrblsTkn==2||MrblsTkn==3)){
        cout<<"Invalid Input. The Computer Follows the Rules of the Game, which "
                "if not are not followed, it can not work properly."<<endl;
        return 1;  //Use of DeMorgans law to make clear
    }
    
    Mrbls=Mrbls-MrblsTkn;
    cout<<"You have taken "<<MrblsTkn<<" Marbles."<<endl;
    cout<<"There are "<<Mrbls<<" Marbles Left."<<endl;
    
    if (Mrbls==15){
    int Comp=3;
    Mrbls=Mrbls-Comp;
    cout<<"The Computer has decided to take "<<Comp<<" Marbles."<<endl;
    cout<<"There are "<<Mrbls<<" Marbles Left."<<endl<<endl;
    }
        else if (Mrbls==14){
            int Comp=2;
            Mrbls=Mrbls-Comp;
            cout<<"The Computer has decided to take "<<Comp<<" Marbles."<<endl;
            cout<<"There are "<<Mrbls<<" Marbles Left."<<endl<<endl;
            }
            else if (Mrbls==13){
                    int Comp=1;
                    Mrbls=Mrbls-Comp;
                    cout<<"The Computer has decided to take "<<Comp<<" Marble."<<endl;
                    cout<<"There are "<<Mrbls<<" Marbles Left."<<endl<<endl;
                    } 

    cout<<"Enter The Amount of Marbles you wish to take for the Next Turn = ";
    cin>>MrblsTkn;

    Mrbls=Mrbls-MrblsTkn;
    cout<<"You have taken "<<MrblsTkn<<" Marbles."<<endl;
    cout<<"There are "<<Mrbls<<" Marbles Left."<<endl;

    if(!(MrblsTkn==1||MrblsTkn==2||MrblsTkn==3)){
        cout<<"Invalid Input. The Computer Follows the Rules of the Game, which "
                "if not are not followed, it can not work properly."<<endl;
        return 1;  //Use of DeMorgans law to make clear
    }
    
        if (Mrbls==11){
        int Comp=3;
        Mrbls=Mrbls-Comp;
        cout<<"The Computer has decided to take "<<Comp<<" Marbles."<<endl;
        cout<<"There are "<<Mrbls<<" Marbles Left."<<endl<<endl;
        }
        if (Mrbls==10){
            int Comp=2;
            Mrbls=Mrbls-Comp;
            cout<<"The Computer has decided to take "<<Comp<<" Marbles."<<endl;
            cout<<"There are "<<Mrbls<<" Marbles Left."<<endl<<endl;
            }
            if (Mrbls==9){
                    int Comp=1;
                    Mrbls=Mrbls-Comp;
                    cout<<"The Computer has decided to take "<<Comp<<" Marble."<<endl;
                    cout<<"There are "<<Mrbls<<" Marbles Left."<<endl<<endl;
                    }

    cout<<"Enter The Amount of Marbles you wish to take for the Next Turn = ";
    cin>>MrblsTkn;

    Mrbls=Mrbls-MrblsTkn;
    cout<<"You have taken "<<MrblsTkn<<" Marbles."<<endl;
    cout<<"There are "<<Mrbls<<" Marbles Left."<<endl;

    if(!(MrblsTkn==1||MrblsTkn==2||MrblsTkn==3)){
        cout<<"Invalid Input. The Computer Follows the Rules of the Game, which "
                "if not are not followed, it can not work properly."<<endl;
        return 1;  //Use of DeMorgans law to make clear
    }
    
        if (Mrbls==7){
        int Comp=3;
        Mrbls=Mrbls-Comp;
        cout<<"The Computer has decided to take "<<Comp<<" Marbles."<<endl;
        cout<<"There are "<<Mrbls<<" Marbles Left."<<endl<<endl;
        }
        else if (Mrbls==6){
            int Comp=2;
            Mrbls=Mrbls-Comp;
            cout<<"The Computer has decided to take "<<Comp<<" Marbles."<<endl;
            cout<<"There are "<<Mrbls<<" Marbles Left."<<endl<<endl;
            }
            else if (Mrbls==5){
                    int Comp=1;
                    Mrbls=Mrbls-Comp;
                    cout<<"The Computer has decided to take "<<Comp<<" Marble."<<endl;
                    cout<<"There are "<<Mrbls<<" Marbles Left."<<endl<<endl;
                    }

    cout<<"Enter The Amount of Marbles you wish to take for the Next Turn = ";
    cin>>MrblsTkn;

    Mrbls=Mrbls-MrblsTkn;
    cout<<"You have taken "<<MrblsTkn<<" Marble(s). There are ";
    cout<<Mrbls<<" Marble(s) Left."<<endl;

    if(!(MrblsTkn==1||MrblsTkn==2||MrblsTkn==3)){
        cout<<"Invalid Input. The Computer Follows the Rules of the Game, which "
                "if not are not followed, it can not work properly."<<endl;
        return 1;  //Use of DeMorgans law to make clear
    }
    
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

