/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on March 29, 2017, 9:10 PM
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
    cout<<"Pattern A            Pattern B"<<endl;
    cout<<"------------------------------"<<endl;
    
    //Output the transformed data
    for(int row=1;row<=10;row++)
        for(int Star=1;Star<=10;Star++){
            cout<<"*                    *"<<endl;
            if (Star=10)
                break;
        }
    
    //Exit stage!
    return 0;
}

