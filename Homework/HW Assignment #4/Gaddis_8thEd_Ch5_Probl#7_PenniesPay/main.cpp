/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on March 29, 2017, 9:10 PM
 * Purpose:
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <cmath>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    int Days=1,
        DaysDsrd;
    
    //Initialize variables
    cout<<"Number of Days = ";
    cin>>DaysDsrd;
            
    //Input data
    for(int Days=1;Days<=DaysDsrd;Days++){
        cout<<"Day "<<Days<<" Earned $"<<(pow(2,Days))*.01<<endl;
    }

    //Output the transformed data
    
    //Exit stage!
    return 0;
}

