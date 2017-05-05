 /* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on May 03, 2017, 11:30 AM
 * Purpose: Mark-Up
 */

//System Libraries 
#include <iostream>
#include <cmath> //Math Library
#include <iomanip> //Format Library 
using namespace std;

//User Libraries 

//Global Constants Only
//Like PI, e, Gravity, or conversions

//Function Prototypes
float Temp(float);

//Program Execution Begins
int main(int argc, char** argv) {
    //Declare all Variables
    float F=0,  //Falling Distance
          Fahr=0; //Time in Seconds
          
    cout<<"Enter the Amount of Second The Object takes to fall."<<endl;      
    cin>>Fahr;
    
    //Draw from Function
    cout<<"Fahrenheit       Celsius"<<endl;
    cout<<"------------------------"<<endl;
    F=Temp(Fahr);
    
    //Exit Stage
    return 0;

}

float Temp(float t){
    float C; //Distance
    for(float F=0;F<=t;F++){
    C=(5*(F-32))/9;
    cout<<setw(5)<<F<<setw(19)<<C<<endl;
    }
    return C;
}


