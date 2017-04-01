/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on March 29, 2017, 9:10 PM
 * Purpose:
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <iomanip>   //Formatting Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    int Count=0;    //Number to Start
    
    //Initialize variables
    
    //Input data
    cout<<"This Program will calculate A Rising Sea Level Each Year"<<endl;
    cout<<"Year          Amount Risen"<<endl;
    cout<<"--------------------------"<<endl;
    
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    for(Count=0;Count<=9;Count++)
        cout<<Count<<" Years       "<<(Count*1.5f)<<" Millimeters"<<endl;
    for(Count=10;Count<=25;Count++)
        cout<<Count<<" Years      "<<(Count*1.5f)<<" Millimeters"<<endl;
        
    //Exit stage!
    return 0;
}

