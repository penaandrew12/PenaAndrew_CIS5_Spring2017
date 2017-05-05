 /* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on May 03, 2017, 11:30 AM
 * Purpose: Mark-Up
 */

//System Libraries 
#include <iostream>
#include <cmath>    //Math Library
using namespace std;

//User Libraries 

//Global Constants Only
//Like PI, e, Gravity, or conversions

//Function Prototypes
float Distance(float,float);

//Program Execution Begins
int main(int argc, char** argv) {
    //Declare all Variables
    float F=0,  //Falling Distance
          Time=0; //Time in Seconds
    float g=9.8f; //Gravity
          
    cout<<"Enter the Amount of Second The Object takes to fall."<<endl;      
    cin>>Time;
    
    //Draw from Function
    F=Distance(Time,g);
    
    //Exit Stage
    return 0;

}

float Distance(float t,float b){
    float a; //Distance
    for(int sec=1;sec<=t;sec++){
    a=0.5f*b*pow(sec,2);
    cout<<sec<<" Second(s). Object has fallen "<<a<<" Meter(s)"<<endl;
    }
    return a;
}

