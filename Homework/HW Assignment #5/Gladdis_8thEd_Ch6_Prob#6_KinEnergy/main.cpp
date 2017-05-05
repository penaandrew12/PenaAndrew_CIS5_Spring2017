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
float KinEngy(float,float);

//Program Execution Begins
int main(int argc, char** argv) {
    //Declare all Variables
    float E=0,  //Energy
          m=0; //Mass in Kilograms
    float v=0; //Velocity of Object
          
    cout<<"Enter the Mass of the Object in Kilograms."<<endl;      
    cin>>m;
    cout<<"Enter the Velocity of the Object in m/s."<<endl;      
    cin>>v;
    
    //Draw from Function
    E=KinEngy(m,v);
    cout<<"The Moving Objects Kinetic Energy is "<<E<<endl;
            
    //Exit Stage
    return 0;

}

float KinEngy(float a,float b){
    float c; //Distance
    c=0.5f*a*pow(b,2);
    return c;
}

