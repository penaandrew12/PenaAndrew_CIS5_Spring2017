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
    
    //Input data
    cout<<"This Program will calculate A Rising Sea Level for 25 years if it rises by 1.5 Millimeters Per Year"<<endl;
    cout<<"Press Enter to Display Table."<<endl;
    cin.get();
    cout<<"Year          Amount Risen"<<endl;
    cout<<"--------------------------"<<endl;
    
    //Output the transformed data
    for(Count=1;Count<=9;Count++)
        cout<<Count<<" Years       "<<(Count*1.5f)<<" Millimeters"<<endl;
    for(Count=10;Count<=25;Count++)
        cout<<Count<<" Years      "<<(Count*1.5f)<<" Millimeters"<<endl;
        
    //Exit stage!
    return 0;
}

