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
    int CrrntChrge=2500,
        NewChrge=0,
        Yr=1;
    float MembrShipFee=.04f;
    
    //Input data
    for(Yr=1;Yr<=6;Yr++){
        NewChrge=CrrntChrge+(CrrntChrge*MembrShipFee);
        cout<<"Year "<<Yr<<" New Membership Charge is $"<<NewChrge<<endl;
    }
    
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    
    //Exit stage!
    return 0;
}

