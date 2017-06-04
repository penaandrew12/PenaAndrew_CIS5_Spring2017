/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on June 2, 2017, 1:04 AM
 * Purpose: Version 3 of Dr. Nim Game
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <cstdlib>  //Random Number Generator
#include <ctime>    //Library for Time
#include <string>   //String Library
#include <fstream>   //File I/O
#include <iomanip>  //Format Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants
//Like PI, e, Gravity, or conversions
const int PERCENT=100.0f; //Conversion to Percentage

//Function Prototypes
void Sort(int array[], int);        //Bubble Sort
void Display(int array[], int);     //Display Function
int search(int array[], int, int);   //Binary Search

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    char choice;
    
    //Menu Information
    cout<<"This is the Menu for the game Dr. Nim"<<endl;
    
    //Show menu and loop
    do{
        //Display Menu
        cout<<"--------------------------------------------------------------------------"<<endl;
        cout<<endl<<"Type 1 for Instructions"<<endl;
        cout<<"Type 2 To Play the Game"<<endl;
        cout<<"Type 3 To Look at the Score Board"<<endl;
        cout<<"Type anything else to exit"<<endl<<endl;
       
        //Input the choice
        cout<<"Would you Like to do?"<<endl;
        cout<<"Number: ";
        cin>>choice;
        cout<<endl<<"--------------------------------------------------------------------------"<<endl;
        
        //Place solutions to problems in switch statement
        switch(choice){
            case '1':{
                //Variables Set for Program
                string Name;
                
                //Display for Programs, States Rules, and allows user to have a winnable chance.  
                cout<<"Please Enter Name = ";
                cin>>Name;
                cout<<endl<<"Welcome "<<Name<<". You get to play Dr. NIM!"<<endl; 
                cout<<"The Objective of this game is to try to take the last Marble."<<endl;
                cout<<"The Rules are simple. The Computer will go first and it will choose One, Two, or Three Marbles."<<endl;
                cout<<"After it decides how many to take, it will be your turn. You get to choose from One, Two, or Three Marbles."<<endl;
                cout<<"The Game will continue until the last Marble is picked."<<endl<<endl;

                cout<<"The Computer will generate a random number from 16 to 100 Marbles every game."<<endl;
                cout<<"There is one trick to playing this game, and if you can understand it you will win every time."<<endl;
                cout<<"This is a very simple game and once you learn how it works you may use this game to trick people and have some fun."<<endl;
                cout<<"However, Many people have tried to win but have failed."<<endl;
                cout<<"This game is in favor of the computer. So until the game is understood correctly, I would suggest to not give up until you have won at least once."<<endl;
                cout<<"The game will be played with no mercy but once the trick is discovered you should win a vast majority of the time."<<endl;
                cout<<"How will you play?"<<endl;
                cout<<"Will You Win?"<<endl;
                cout<<"Can you Discover the Trick?"<<endl;
                cout<<"Good Luck! Also, if you do not win the first time you may play again."<<endl<<endl;
                
                break;
            }
            case '2':{
                //Set the random number seed
                srand(static_cast<unsigned int>(time(0)));

                //Declare all Variables Set for Program
                const int SIZE=5;
                int array[SIZE]={}; //Number of Marbles for Game  
                int srchNum=0;  //Number Selected for Guess Game
                int results;    //To hold Search results
                char ans;   //Answer to play again
                int RndmNum=0, //Random Number   
                    MrblsTkn=0; //Marbles Taken By player
                int Mrbls=0; //Symbols marbles for the materials for game (First Game Starts at 12)

                //Loop for the game. If the user wants he/she can play again
                do {

                //Random Number Generator for Guessing Game
                for(int i=0;i<SIZE;i++){
                array[i]=(rand()%20)+16; 
                }

                //Process/Calculations Here
                Sort(array,SIZE);
                Display(array,SIZE);

                cout<<"Please enter a number to search if it is in array. The number will be used in the game as the starting Marble size."<<endl;
                cin>>srchNum;

                results=search(array,SIZE,srchNum);
                if(results==-1)
                    cout<<"Number not in array"<<endl;
                else
                    cout<<"the Number was found in the array"<<endl;

                //Enter Marble Chosen from Above Array
                cout<<"Please enter the number, from the above array you chose."<<endl;
                cin>>Mrbls;

                //Pause to let user have time to get ready to play game
                cout<<"Press Enter To Start Game";
                cin.get();
                cin.ignore();

                //Game Start
                cout<<endl<<"The Game will play with "<<Mrbls<<" Marbles"<<endl<<endl;
                cout<<"The Computer will go First"<<endl;

                //If/Else Statements to have computer choose what move to make
                if (Mrbls%4==0){    //Statement to take certain Random amount per turn
                    RndmNum=(rand()% 3)+1;
                    cout<<"The Computer takes "<<RndmNum<<" Marble(s)."<<endl;
                    Mrbls=Mrbls-RndmNum;
                    cout<<"There are "<<Mrbls<<" Marbles Left."<<endl<<endl;
                    }
                else if ((Mrbls-1)%4==0){   //Statement to take 1 Marble per turn
                    cout<<"The Computer takes 1 Marble."<<endl;
                    Mrbls=Mrbls-1;
                    cout<<"There are "<<Mrbls<<" Marbles Left."<<endl<<endl;
                    }
                    else if ((Mrbls-2)%4==0){   //Statement to take 2 Marbles per turn
                        cout<<"The Computer takes 2 Marble."<<endl;
                        Mrbls=Mrbls-2;
                        cout<<"There are "<<Mrbls<<" Marbles Left."<<endl<<endl;
                        }
                        else if ((Mrbls-3)%4==0){   //Statement to take 3 Marbles per turn
                                cout<<"The Computer takes 3 Marble."<<endl;
                                Mrbls=Mrbls-3;
                                cout<<"There are "<<Mrbls<<" Marbles Left."<<endl<<endl;
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
                cout<<endl<<"There is now "<<Mrbls<<" Marble(s) Left."<<endl;

                //If game is run without not cheating and not entering fair the game will win
                if (Mrbls==1||Mrbls==2||Mrbls==3){
                    cout<<"The Computer Takes the Last Marble(s)."<<endl<<endl;
                }
                else{
                    cout<<"Congratulations!!! You Win!"<<endl<<endl;
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
                
                break;
            }
            case '3':{
                //Declare file and game variables
                ofstream out;              //Output File
                ifstream inFile;
                string Result;
                float Per=0, //Percentage of Winning
                      win=0,  //Games Won
                      loss=0; //Games Lost
                int total;  //Total Games

                //Initialize variables
                char outName[]="OutFile.md"; //Character Array Name
                inFile.open("Score Board.md");
                out.open(outName);  

                //Check for error
                if(inFile.fail()){
                    cout<<"Error Opening File"<<endl;
                    exit(1);
                }

                //How Many Wins and Losses from reading in files
                while(inFile){
                inFile>>Result;
                    if (Result=="Loss"){
                    loss++;
                    }
                    if (Result=="Win"){
                    win++;
                    }
                }

                total=win+loss;         //Total Games Played
                Per=(win/loss)*PERCENT; //Percentage of Winning

                //Score Board
                cout<<endl<<"Score Board"<<endl;
                cout<<win<<" Wins"<<endl;
                cout<<loss<<" Losses"<<endl;
                cout<<"Out of the "<<total<<" Games played so far. Only "<<win<<" Games were won."<<endl;
                cout<<"There is a "<<setprecision(4)<<Per<<"% Chance of Winning just Once"<<endl;
                if(Per>=50){
                    cout<<"You have a Favorable Chance of Winning."<<endl;
                }
                else {
                    cout<<"The Odds are stacked against you Winning."<<endl<<endl;
                }
                cout<<"This message is repeated to the out File."
                
                //Writing to File
                out<<win<<" Wins"<<endl;
                out<<loss<<" Losses"<<endl;
                out<<"Out of the "<<total<<" Games played so far. Only "<<win<<" Games were won."<<endl;
                out<<"There is a "<<setprecision(4)<<Per<<"% Chance of Winning just Once"<<endl;
                if(Per>=50){
                    out<<"You have a Favorable Chance of Winning."<<endl;
                }
                else {
                    out<<"The Odds are stacked against you Winning."<<endl;
                }

                //Close Files and Exit stage right!
                out.close();
                inFile.close();
                
                break;
            }
            default:{
                cout<<"Exit the program"<<endl;
            }
        }
    }while(choice>='1'&&choice<='3');
    
    //Exit stage right!
    return 0;
}

void Sort(int *array,int SIZE){
bool swap;
int temp;
do{
    swap=false;
    for (int i=1;i<(SIZE);i++){
        if(array[i-1]>array[i]){
            temp=array[i-1];
            array[i-1]=array[i];
            array[i]=temp;
            swap=true;
        }
    }
}
while(swap);
}
    
int search(int array[], int SIZE, int srchNum){  
    int first=0,
        last=SIZE-1,
        middle,
            position=-1;
    bool found=false;
    while(!found&&first<=last){
        middle=(first+last)/2;
        if(array[middle]==srchNum){
            found=true;
            position=middle;
        }
        else if(array[middle]>srchNum)
            last=middle-1;
        else
            first=middle+1;
    }
    return position;
}

void Display(int *array,int SIZE){
    for(int i=0;i<SIZE;i++){
        cout<<array[i]<<endl;
    }
}