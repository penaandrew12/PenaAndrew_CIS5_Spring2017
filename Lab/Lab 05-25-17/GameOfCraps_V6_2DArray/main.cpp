/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on May 25, 2017, 11:45 AM
 * Purpose: Implement 2D Arrays
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <ctime>     //Time for rand
#include <cstdlib>   //Srand to set the seed
#include <fstream>   //File I/O
#include <iomanip>   //Format the output
#include <string>    //Strings
#include <cmath>     //Math functions
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants
const float PERCENT=100.0f;  //Conversion to Percent
const int COLS=2;  

//Function Prototypes
char rollDice(int);   //Roll Dice
void fileDsp(ofstream &,int[][COLS],int,int,int,int); //File Display
void scrnDsp(int[][COLS],int,int,int,int);  //Screen Display
void crpGame(int[][COLS],int,int &,int &,int &);  //Play Craps Game

//Execution begins here
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare file and game variables
    ifstream in;               //Input File
    ofstream out;              //Output File
    int nGames;         //Number of games, wins/losses
    int mxThrw=0,numThrw=0,lmGames=100000000;//Game limiter and Throw statistics
    const int SIZE=13;      //Size of Arrays
    int winLoss[SIZE][COLS]={};      //Initialize the Win Loss Array array
    int *Ptr;
    Ptr = *winLoss;
    
    //Initialize variables
    string inName="GameInfo.dat";   //String Name
    char outName[]="GameStats.dat"; //Character Array Name
    in.open(inName.c_str());        //Open the Input file
    out.open(outName);              //Open the Output file
    while(in>>nGames);  //Last value in file becomes the number of games
    nGames=nGames>lmGames?lmGames:nGames; //Limit games if to high
    
    //Play the game the prescribed number of times.
    int beg=time(0);//Time the game play
    
    crpGame(winLoss,SIZE,nGames,numThrw,mxThrw);
    
    //end of for-loop
    int end=time(0);//End time of Game play
    
    //Output the game statistics to the screen
    cout<<"Total time to play these Games in integer seconds = "<<end-beg<<endl;
    scrnDsp(winLoss,SIZE,nGames,numThrw,mxThrw);
    fileDsp(out,winLoss,SIZE,nGames,numThrw,mxThrw);
    
    //Close Files and Exit stage right!
    in.close();
    out.close();
    return 0;
}

void crpGame(int winLoss[][COLS],int SIZE,int &nGames,int &numThrw,int &mxThrw){
    
    for(int game=1;game<=nGames;game++){ 
    //Throw dice and sum, keep track of number of throws in a game
        int gmThrw=1;
        char sum1=rollDice(6);
        //Determine wins and losses
        switch(sum1){
            case  7:
            case 11:winLoss[sum1][0]++;break;
            case  2:
            case  3:
            case 12:*((winLoss+sum1++)+1);break;     //Is this correct    <-----
            default:{
                //Loop until a 7 or previous sum is thrown
                bool thrwAgn=true;
                do{
                    //Throw the dice again
                    char sum2=rollDice(6);
                    gmThrw++;//Increment the number of throws
                    if(sum2==7){
                        winLoss[sum1][1]++;
                        thrwAgn=false;
                    }else if(sum1==sum2){
                        winLoss[sum1][0]++;
                        thrwAgn=false;
                    }//end of dependent if-else
                }while(thrwAgn);//end of do-while
            }
        }//end of switch
        //Keep track of total throws and max throws
        numThrw+=gmThrw;
        if(mxThrw<gmThrw)mxThrw=gmThrw;//Independent if
    }
}

void fileDsp(ofstream &out,int winLoss[][COLS],int SIZE,int nGames,int numThrw,int mxThrw){
    out<<fixed<<setprecision(2)<<showpoint;
    out<<"Total number of Games = "<<nGames<<endl;
    out<<"Role     Wins     Losses"<<endl;
    int sWins=0,sLosses=0;
    for(int sum=2;sum<SIZE;sum++){
        sWins+=winLoss[sum][0];
        sLosses+=winLoss[sum][1];
        out<<setw(4)<<sum<<setw(10)<<winLoss[sum][0]<<setw(10)<<winLoss[sum][1]<<endl;
    }
    out<<"Total wins and losses = "<<sWins+sLosses<<endl;
    out<<"Percentage wins       = "
            <<static_cast<float>(sWins)/nGames*PERCENT<<"%"<<endl;
    out<<"Percentage losses     = "
            <<static_cast<float>(sLosses)/nGames*PERCENT<<"%"<<endl;
    out<<"Maximum number of throws in a game = "<<mxThrw<<endl;
    out<<"Average throw per game="<<static_cast<float>(numThrw)/nGames<<endl;
    out<<"Ratio of Longest to shortest game = 10^"<<log10(mxThrw)<<endl;
}

void scrnDsp(int winLoss[][COLS],int SIZE,int nGames,int numThrw,int mxThrw){
    //Output the game statistics to the screen
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Total number of Games = "<<nGames<<endl;
    cout<<"Role     Wins     Losses"<<endl;
    int sWins=0,sLosses=0;
    for(int sum=2;sum<SIZE;sum++){
        sWins+=winLoss[sum][0];
        sLosses+=winLoss[sum][1];
        cout<<setw(4)<<sum<<setw(10)<<winLoss[sum][0]<<setw(10)<<winLoss[sum][1]<<endl;
    }
    cout<<"Total wins and losses = "<<sWins+sLosses<<endl;
    cout<<"Percentage wins       = "
            <<static_cast<float>(sWins)/nGames*PERCENT<<"%"<<endl;
    cout<<"Percentage losses     = "
            <<static_cast<float>(sLosses)/nGames*PERCENT<<"%"<<endl;
    cout<<"Maximum number of throws in a game = "<<mxThrw<<endl;
    cout<<"Average throw per game="<<static_cast<float>(numThrw)/nGames<<endl;
    cout<<"Ratio of Longest to shortest game = 10^"<<log10(mxThrw)<<endl;
}

char rollDice(int sides){
    char die1=rand()%sides+1;//[1,number of rolls]
    char die2=rand()%sides+1;//[1,number of rolls]
    char sum1=die1+die2;
    return sum1;
}