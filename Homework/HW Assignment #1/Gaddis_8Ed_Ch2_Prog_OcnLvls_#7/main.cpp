/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on February 28, 2017, 8:50 PM
 * Purpose: Rising Ocean Levels Calculation
 */

#include <iostream>
using namespace std;

//Global Constants
const float Meters=1.0f;        //Conversion to Meters
const float MilMtrs=1000.0f;    //Conversion to Millimeters
const float Yrs=1.0f;            //Years

int main(int argc, char** argv) {
    
    //Declare Variables
    float LvlRsng=1.5;              //Ocean Level Rising 1.5 millimeters per year
    float Fiveyrs=5;                //In 5 years
    float Svnyrs=7;                 //In 7 years
    float Tenyrs=10;                //In 10 years
    float FiveYr,SvnYr,TenYr;       //5 Years, 7 Years, 10 Years
    
    //Inputs-Outputs & Variables
    FiveYr=LvlRsng*Fiveyrs;
    SvnYr=LvlRsng*Svnyrs;
    TenYr=LvlRsng*Tenyrs;
    
    //Output Data 
    cout<<LvlRsng<<" Millimeters/Year x "<<Fiveyrs<<" Years  = "<<FiveYr
            <<" Millimeters Risen Above Current Ocean Levels"<<endl;
    cout<<LvlRsng<<" Millimeters/Year x "<<Svnyrs<<" Years  = "<<SvnYr
            <<" Millimeters Risen Above Current Ocean Levels"<<endl;
    cout<<LvlRsng<<" Millimeters/Year x "<<Tenyrs<<" Years = "<<TenYr
            <<" Millimeters Risen Above Current Ocean Levels"<<endl;
  
    //Exit
    return 0;
}