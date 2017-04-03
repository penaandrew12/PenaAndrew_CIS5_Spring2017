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
    float F,  //Fahrenheit
          C;  //Celsius
    
    //Initialize variables
    cout<<"This Program will Display a Table from 0 to 20 Degrees Celsius and convert it to Fahrenheit."<<endl;
    cout<<"Hit Enter For Table,"<<endl;
    cin.get();
    cout<<"Celsius        Fahrenheit"<<endl;
    cout<<"-------------------------"<<endl;
            
    //Output the transformed data
    for(int C=0;C<=9;C++){
        F=32+1.8*C;
        cout<<C<<"              "<<F<<endl;
    }
    for(int C=10;C<=20;C++){
        F=32+1.8*C;
        cout<<C<<"             "<<F<<endl;
    }    
    //Exit stage!
    return 0;
}

