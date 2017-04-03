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
        Yr=1;
    float MembrShipFee=.04f;
    
    //Input data
    cout<<"Current Membership Cost $2500. Each Year it will increase by 4%. "
            "This will show up to six years of the Increasing Membership Fee."<<endl;
    for(Yr=1;Yr<=6;Yr++){
        CrrntChrge=CrrntChrge+(CrrntChrge*MembrShipFee);
        cout<<"Year "<<Yr<<" New Membership Charge is $"<<CrrntChrge<<". "
                "Increase of $"<<(CrrntChrge*MembrShipFee)<<endl;
    }
    
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    
    //Exit stage!
    return 0;
}

