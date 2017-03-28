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
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare all Variables Here
    int nGames=0,Wins=0,Losses=0;
    
    //Initialize
    nGames=10000;
    
    //Play Game
    for(int game=1;game<=nGames;game++){
        //Throw dice and sum
        char die1=rand()%6+1;// [1,6]
        char die2=rand()%6+1;// [1,6]
        char sum1=die1+die2;
        //Determine win
        if(sum1==7||sum1==11)Wins++;
        else if(sum1==2||sum1==3||sum1==12)Losses++;
        else{
            //Loop until a 7 or previous sum is Given
            bool thrwAgn=true;
            do{
                //Throw the Dice Again
                char die1=rand()%6+1;// [1,6]
                char die2=rand()%6+1;// [1,6]
                char sum2=die1+die2;
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
    
    //Output Located Here
    cout<<"Total Number of Games = "<<nGames<<endl;
    cout<<"Number of Games Won   = "<<Wins<<endl;
    cout<<"Number of Games Loss  = "<<Losses<<endl;
    cout<<"Total Games of Wins and Loses = "<<Wins+Losses<<endl;
    
    //Exit
    return 0;
}

