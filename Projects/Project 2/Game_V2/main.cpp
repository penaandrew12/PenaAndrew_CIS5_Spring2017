/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on March 30, 2017, 5:40 PM
 * Purpose: Version 2 of Game
 */

//System Libraries 
#include <iostream>  //Main Library
#include <cmath>     //Power Function
#include <iomanip>  //Format
#include <cstdlib>  //Random Number Generator
#include <ctime>    //Library for time
#include <string>   //String Library
using namespace std;

//User Libraries 

//Global Constants Only

//Like PI, e, Gravity, or conversions

//Function Prototypes

//Program Execution Begins
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Variables Set for Program
    string Name;
    char Input,
         ans;   //Answer to play again
    int RndmNum=0, //Random Number   
        i=0,      //For loop
        MrblsTkn=0; //Marbles Taken By player
    float num=0;  //Random Number Generator
    int Mrbls=0; //Symbols marbles for the materials for game (First Game Starts at 12)
    bool a=true,
         b=false;
 
    //Display for Programs, States Rules, and allows user to have a winnable chance.  
    cout<<"Please Enter Name = ";
    cin>>Name;
    cout<<"Welcome "<<Name<<". You get to play Dr. NIM!"<<endl; 
    cout<<"The Objective of this game is to try to take the last Marble."<<endl;
    cout<<"The Rules are simple. The Computer will go first and it will choose One, Two, or Three Marbles."<<endl;
    cout<<"After it picks the Marbles, it will be your turn to choose from One, Two, or Three Marbles."<<endl;
    cout<<"It will then repeat and will let you go again until the last Marble is picked."<<endl;
    cout<<"Good Luck! Also, if you do not win the first time you may play again."<<endl;
    cout<<"Please press Enter to Start Game."<<endl;
    
    //Pause to let user have time to get ready to play game
    cin.get();
    cin.ignore();
    
    //Loop for the game. If the user wants he/she can play again
    do {
    
    //Random Number Generator Formula
    num=(rand()% 4)+16; 
    num=pow(num,2);
    
    //Random Amount of Marbles chosen to play game 
    Mrbls=num;
    //Conversion to turn float Marbles into an Integer
    Mrbls=static_cast<int>(Mrbls);
    
    cout<<"The Game will play with "<<Mrbls<<" Marbles"<<endl<<endl;
    
    cout<<"Many have tried but have always failed. There is a secret to the game and if you do not know it the computer will always win."<<endl;
    cout<<"You may enter a to make the game fair and winnable or choose b to have it show no mercy."<<endl;
    cout<<"what will you decide?"<<endl;
    cin>>Input;
    
    if (Input==a){
        for (i<=4;i>=Mrbls;i--){
        if (Mrbls%3==0)//Statement to take certain Random amount per turn
        RndmNum=(rand()% 3)+1;
        cout<<"The Computer takes "<<RndmNum<<" Marble(s)."<<endl;
        Mrbls=Mrbls-RndmNum;
        cout<<"There are "<<Mrbls<<" Marbles Left."<<endl<<endl;
        }    
    }
    else if (!(Input==b)){
    //If/Else Statements to have computer choose what move to make
    if (Mrbls%4==0){    //Statement to take certain Random amount per turn
        RndmNum=(rand()% 3)+1;
        cout<<"The Computer takes "<<RndmNum<<" Marble(s)."<<endl;
        Mrbls=Mrbls-RndmNum;
        cout<<"There are "<<Mrbls<<" Marbles Left."<<endl<<endl;
        }
    else if ((Mrbls-1)%4==0){   //Statement to take 1 Marble  per turn
        cout<<"The Computer takes 1 Marble."<<endl;
        Mrbls=Mrbls-1;
        cout<<"There are "<<Mrbls<<" Marbles Left."<<endl<<endl;
        }
        else if ((Mrbls-2)%4==0){   //Statement to take 2 Marbles  per turn
            cout<<"The Computer takes 2 Marble."<<endl;
            Mrbls=Mrbls-2;
            cout<<"There are "<<Mrbls<<" Marbles Left."<<endl<<endl;
            }
            else if ((Mrbls-3)%4==0){   //Statement to take 3 Marbles per turn
                    cout<<"The Computer takes 3 Marble."<<endl;
                    Mrbls=Mrbls-3;
                    cout<<"There are "<<Mrbls<<" Marbles Left."<<endl<<endl;
                    }
    }
    
    //loop for the program to keep going until only 4 marbles are left
    while (Mrbls>4){
    
    //Users Turn to choose the amount of marbles to take    
    cout<<"Enter The Amount of Marbles you wish to take for Your Turn = ";
    cin>>MrblsTkn;
    
    //If user does not take 1, 2, or 3 Marbles error will run and end game
    if(!(MrblsTkn==1||MrblsTkn==2||MrblsTkn==3)){
        cout<<"Invalid Input. The Computer Follows the Rules of the Game, which "
                "if not are not followed, it will not work properly."<<endl;
        return 1; 
    }
    
    //After User chooses it is computer turn
    Mrbls=Mrbls-MrblsTkn;
    cout<<"You have taken "<<MrblsTkn<<" Marble(s). There are ";
    cout<<Mrbls<<" Marble(s) Left."<<endl;
    
    
    if (Mrbls%4==0){
        RndmNum=(rand()% 3)+1;
        cout<<"The Computer takes "<<RndmNum<<" Marble(s)."<<endl;
        Mrbls=Mrbls-RndmNum;
        cout<<"There are "<<Mrbls<<" Marbles Left."<<endl<<endl;
        }
    else if ((Mrbls-1)%4==0){       //Statement to take 1 Marble per turn
        cout<<"The Computer takes 1 Marble."<<endl;
        Mrbls=Mrbls-1;
        cout<<"There are "<<Mrbls<<" Marbles Left."<<endl<<endl;
        }
        else if ((Mrbls-2)%4==0){       //Statement to take 2 Marbles per turn
            cout<<"The Computer takes 2 Marble."<<endl;
            Mrbls=Mrbls-2;
            cout<<"There are "<<Mrbls<<" Marbles Left."<<endl<<endl;
            }
            else if ((Mrbls-3)%4==0){       //Statement to take 3 Marbles per turn
                cout<<"The Computer takes 3 Marble."<<endl;
                Mrbls=Mrbls-3;
                cout<<"There are "<<Mrbls<<" Marbles Left."<<endl<<endl;
                }
    }
    
    //At the 4th Marble the program will no longer loop and   
    cout<<"Enter The Amount of Marbles you wish to take for the Next Turn = ";
    cin>>MrblsTkn;
    
    //If user does not take 1, 2, or 3 Marbles error will run and end game
    if(!(MrblsTkn==1||MrblsTkn==2||MrblsTkn==3)){
        cout<<"Invalid Input. The Computer Follows the Rules of the Game, which "
                "if not are not followed, it can not work properly."<<endl;
        return 1;  //Use of DeMorgans law to make clear
    }
    
    //The game is at the end and the reaming marbles are left.
    Mrbls=Mrbls-MrblsTkn;
    cout<<fixed<<setprecision(3)<<showpoint;
    cout<<endl<<"During the game there was a total of "<<setw(1)<<num<<" Marbles. There is now "<<Mrbls<<" Left."<<endl;
    
        //If game is run without not cheating and not entering fair the game will win
        if (Mrbls=1,Mrbls=2,Mrbls=3){
            cout<<"The Computer Takes the Last Marble(s)."<<endl<<endl;
        }
    
    //Option to play again
    cout<<"Play Again?"<<endl;
    cout<<"Yes or No?"<<endl;
    cout<<"Type Y for Yes N for No."<<endl;
    cin>>ans;
    cout<<endl;
    }
    
    //If the user types Yes or yes the game will start again asking if you would like a fair match
    while (ans=='Y'||ans=='y');
    
    //Exit Stage
    return 0;
}

