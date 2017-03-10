/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on February 28, 2017, 9:05 PM
 * Purpose: Calculation on Distance Traveled on a Tank of Gas
 */

#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    
    //Declare Variables
    float FullGasTnk=20;     //Full Gas Tank of 20 Gallons
    float MPGTown=23.5f;     //23.5 MPG in Town
    float MPGHghwy=28.9f;    //28.9 MPG on Highway
    float DstnceTown,        //Distance Traveled in Town Per Gallon
            DstnceHghwy;     //Distance Traveled on Highway Per Gallon
    
    //Inputs-Outputs & Variables
    DstnceTown=FullGasTnk*MPGTown;
    DstnceHghwy=FullGasTnk*MPGHghwy;
            
    //Output Data 
    cout<<DstnceTown<<" Miles in Town"<<endl;
    cout<<DstnceHghwy<<" Miles on Highway"<<endl;
    
    //Exit
    return 0;
}

