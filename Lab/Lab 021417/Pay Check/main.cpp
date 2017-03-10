/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on February 14, 2017, 10:56 PM
 * Purpose: Calculate Gross Pay
 */

//System Libraries
#include <iostream> //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

// Execution begins here!
int main(int argc, char** argv) {
    //Declare Variables
    float payChk,// paycheck in $'s
          hrsWrkd,//Hours worked in hours
          payRate;//Pay rate in $'s/hour
    
    //Initialize variables
    hrsWrkd=40;
    payRate=10;
    
    //Map Inputs to Outputs or process the data
    payChk=hrsWrkd*payRate;
    
    //Output the transformed data
    cout<<"Hours worked = "<<hrsWrkd<<"(hrs)"<<endl;
    cout<<"Pay rate = $"<<payRate<<"/hr"<<endl;
    cout<<"Gross Pay = $"<<payChk<<endl;
    
    //Exit stage right!
    return 0;
}

