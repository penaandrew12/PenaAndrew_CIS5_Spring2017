/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on March 28, 2017, 11:41 AM
 * Purpose: Simulate a Craps Game
 */

//System Libraries Here
#include <iostream>     //Library
#include <ctime>        //Time to set the seed
#include <cstdlib>      //Srand and rand function
#include <fstream>      //File IO
#include <iomanip>      //Format Output
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variable
//Like PI, e, Gravity, or conversions
const float PERCENT=100.f;  //Conversion to Percent

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare all Variables Here
    ifstream in;
    ofstream out;
    int nGames=0,Wins=0,Losses=0;
    int mxThrw=0,numThrw=0,LmGames=100000;
    
    //Initialize
    in.open("GameInfo.dat");
    out.open("GameStats.dat");
    while(in>>nGames); //Last Value becomes number of games
    nGames=nGames>LmGames?LmGames:nGames;
    
    //Play Game
    for(int game=1;game<=nGames;game++){
        //Throw dice and sum
        int gmThrw=1;
        char die1=rand()%6+1;// [1,6]
        char die2=rand()%6+1;// [1,6]
        char sum1=die1+die2;
        //Determine win
        switch(sum1){
            case  7:
            case 11:Wins++;break;
            case  2:
            case  3:
            case 12:Losses++;break;
            default:{
                //Loop until a 7 or previous sum is Given
                bool thrwAgn=true;
                do{
                    //Throw the Dice Again
                    char die1=rand()%6+1;// [1,6]
                    char die2=rand()%6+1;// [1,6]
                    char sum2=die1+die2;
                    gmThrw++;
                    if(sum2==7){
                            Losses++;
                            thrwAgn=false;
                    }else if (sum1==sum2){
                            Wins++;
                            thrwAgn=false;
                    }
                }while(thrwAgn);
            }  
        }
        numThrw+=gmThrw;
        if (mxThrw<gmThrw)mxThrw=gmThrw; //Independent If
    }
    
    //Output Located Here
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Total Number of Games         = "<<nGames<<endl;
    cout<<"Number of Games Won           = "<<Wins<<endl;
    cout<<"Number of Games Loss          = "<<Losses<<endl;
    cout<<"Total Games of Wins and Loses = "<<Wins+Losses<<endl;
    cout<<"Percentage Wins               = "
            <<static_cast<float>(Wins)/nGames*PERCENT<<"%"<<endl;
    cout<<"Percentage Losses             = "
            <<static_cast<float>(Losses)/nGames*PERCENT<<"%"<<endl;
    cout<<"Maximum number of throws in a Game = "<<mxThrw<<endl;
    cout<<"Average Throw Per Game = "<<static_cast<float>(numThrw)/nGames<<endl;
    
    //Output to a File
    out<<fixed<<setprecision(2)<<showpoint;
    out<<"Total Number of Games         = "<<nGames<<endl;
    out<<"Number of Games Won           = "<<Wins<<endl;
    out<<"Number of Games Loss          = "<<Losses<<endl;
    out<<"Total Games of Wins and Loses = "<<Wins+Losses<<endl;
    out<<"Percentage Wins               = "
            <<static_cast<float>(Wins)/nGames*PERCENT<<"%"<<endl;
    out<<"Percentage Losses             = "
            <<static_cast<float>(Losses)/nGames*PERCENT<<"%"<<endl;
    out<<"Maximum number of throws in a Game = "<<mxThrw<<endl;
    out<<"Average Throw Per Game = "<<static_cast<float>(numThrw)/nGames<<endl;
    
    //Exit Stage Right!
    in.close();
    out.close();
    return 0;
}

