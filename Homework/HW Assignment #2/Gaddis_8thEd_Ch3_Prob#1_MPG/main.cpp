/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on March 9, 2017, 3:51 PM
 * Purpose: MPG Calculations
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
    float GalHld,
            MlsDrvn,
            MPG;
    
    //Initialize variables
    cout<<"Full Tank of Gas in Gallons = ";
    cin>>GalHld;
    cout<<"Miles Driven on Full Tank = ";
    cin>>MlsDrvn;
    
    //Input data
    MPG=MlsDrvn/GalHld;
    
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    cout<<"Miles Driven Per Gallon = "<<MPG<<endl;
    
    //Exit stage!
    return 0;
}

