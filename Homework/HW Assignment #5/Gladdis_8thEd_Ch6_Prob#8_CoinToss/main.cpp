 /* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on May 05, 2017, 5:00 PM
 * Purpose: Coin-Toss
 */

//System Libraries 
#include <iostream>
#include <cmath> //Math Library
#include <iomanip> //Format Library 
#include <cstdlib>  //Random Number Generator
#include <ctime> //Library for Time
using namespace std;

//User Libraries 

//Global Constants Only
//Like PI, e, Gravity, or conversions

//Function Prototypes
float Toss(int);

//Program Execution Begins
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare all Variables
    float T=0,  //Turn Table
          Flip=0; //Turns for Flip
    
    cout<<"Enter the Amount of Times you Wish to Flip the Coin."<<endl;      
    cin>>Flip;
    
    cout<<"Turn       Toss"<<endl;
    cout<<"---------------"<<endl;
    //Draw from Function
    T=Toss(Flip);
    
    //Exit Stage
    return 0;

}

float Toss(int t){
    int num;
    //Loop for Turns
    for(int count=1;count<=t;count++){
    int num; //Number
    int T; //Toss
    //RNG
    num=(rand()%2)+1; 
    
        if (num==1){
        cout<<setw(4)<<count<<setw(11)<<"Heads"<<endl;
        }
            else if (num==2){
            cout<<setw(4)<<count<<setw(11)<<"Tails"<<endl;
            }
    }
        
    return num;
}


