/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on April 2, 2017, 4:10 PM
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
    int Min=5,
        Incrmnt=5;
    
    //Input data
    cout<<"This Program will determine how many calories are burned per 5 minutes."<<endl;
    cout<<"It will start at 5 minutes and increment by 5 up to 30 minutes."<<endl;
            
    for(Min=5;Min<=30;Min+=Incrmnt){
        cout<<"In "<<Min<<" Minutes "<<(Min*3.6)<<" Calories will be Burned"<<endl;
    }
    
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    
    //Exit stage!
    return 0;
}

