/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on March 9, 2017, 3:51 PM
 * Purpose:
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    int Mnth,       //Month
        LepYr,      //Leap Year
        Yr;         //Year
    
    //Input data
    cout<<"Enter the month(Use an Integer from 1-12)."<<endl;
    cin>>Mnth;
    cout<<"Enter the year(YYYY)."<<endl;
    cin>>Yr;
    
    //Map inputs to outputs or process the data
    LepYr=Yr/400; LepYr=Yr/4;
    
    //Output the transformed data
    
    //Exit stage!
    return 0;
}

