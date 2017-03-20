/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on March 9, 2017, 3:51 PM
 * Purpose: Calculate Days in the Month (inputing year as well)
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
        Days,       //Days in Month
        Yr;         //Year
    
    //Input data
    cout<<"This Application will determine how many days in a month(including leap years)."<<endl; 
    cout<<"Enter the month(Use an Integer from 1-12)."<<endl;
    cin>>Mnth;
    cout<<"Enter the year(YYYY)."<<endl;
    cin>>Yr;
    
    //Map inputs to outputs or process the data
    if (LepYr==Yr/100&&LepYr==Yr/400)
    cout<<"This is a leap year."<<endl; 
    
        else if (LepYr=Yr/4);
        cout<<"This is a leap year."<<endl; 
        
            else cout<<"This is Not a Leap Year."<<endl;
        
    //Output the transformed data
    cout<<Days<<"Days."<<endl;
    
    //Exit stage!
    return 0;
}

