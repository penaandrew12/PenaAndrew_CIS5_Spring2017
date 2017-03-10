/* 
 * File:   main.cpp
 * Author: Andrew Pena
 *Created on February 26, 2017, 2:28 PM
 * Purpose: Calculate Sales Prediction 
 */

#include <iostream>
using namespace std;

//Global Constants
const float Percent=100.0f; //Conversion to Percentage
const float Million=1.06f; //Conversion to Millions

int main(int argc, char** argv) {
    
    //Declare Variables
    float CompSls=8.6f;     //Company Sales this year
    float TtlSls=.58f;      //Percentage of Total Sales Generated
    float Ttl;              //Total Generated
    
    //Inputs-Outputs & Variables
    Ttl=CompSls*TtlSls;
    
    //Output Data 
    cout<<CompSls<<" x "<<TtlSls<<" = "<<Ttl<<"Million"<<endl;
    
    //Exit
    return 0;
}

