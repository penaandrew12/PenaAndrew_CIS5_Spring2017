/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on February 28, 2017, 8:55 PM
 * Purpose: Miles Per Gallon Calculation
 */

#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    
    //Declare Variables
    float FulTnk=15;          //Car can Hold 15 Gallons
    float MilTrvl=375;        //Car can Travel 376 miles with 15 Gallons
    float MPG;                //Miles Per Gallon
    
    //Inputs-Outputs & Variables
    MPG=MilTrvl/FulTnk;
    
    //Output Data 
    cout<<MilTrvl<<" Miles"<<"/"<<FulTnk<<" Gallons"<<" = "<<MPG<<" MPG"<<endl;
  
    //Exit
    return 0;
}

