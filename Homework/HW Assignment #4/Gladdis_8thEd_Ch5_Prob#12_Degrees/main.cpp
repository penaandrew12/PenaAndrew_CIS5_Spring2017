/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on March 9, 2017, 4:00 PM
 * Purpose: Degree Calculations
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
    float F,        //Fahrenheit
          C;      //Celsius
    
    //Initialize variables
    cout<<"Celsius = ";
    cin>>C;     
            
    //Input data
    F=32+1.8*C;
    
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    cout<<"Fahrenheit = "<<F<<" degrees"<<endl;
    
    //Exit stage!
    return 0;
}

