/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on February 16, 2017, 10:59 PM
 * Purpose:  Determine the distance from dropping a ball 
 * off a tall building
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//Global Constants
const float GRAVITY=32.174f;//Gravity on Earth Sea-Level ft/sec^2

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float time,distnce;
    
    //Initialize variables
    time=1.0f; 
    
    //Map inputs to outputs or process the data
    distnce=GRAVITY*time*time/2; //Result in ft
    
    //Output the transformed data
    cout<<"Free fall of "<<time<<" secs = "<<distnce<<" ft"<<endl;
    
    //Exit stage right!
    return 0;
}