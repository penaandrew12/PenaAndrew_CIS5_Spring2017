/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on March 30, 2017, 12:20 AM
 * Purpose: Check Your Weight
 */

//System Libraries 
#include <iostream> //Library
using namespace std;

//User Libraries 

//Global Constants Only
//Like PI, e, Gravity, or conversions
const float MSSERTH=5.972e27f;  //Mass of Earth in Grams
const float GCONST=6.673e-8f;   //Gravitational Constant cm^3/gm sec^2
const float CNVFTCM=1.0f/30.48f; //Conversion from ft to cm
const float CNVMSFT=5280.0f;    //Conversion from miles to feet
const float RDSERTH=3959;       //Radius of Earth in Miles

//Function Prototypes

//Program Execution Begins
int main(int argc, char** argv) {
    //Declare all Variables
    float myWght;  //Result in Pounds (lbs)
    float myMass=6; //Units in Slugs
    
    //Input or initialize values
    myWght=GCONST*CNVFTCM*CNVFTCM*CNVFTCM*MSSERTH*myMass
            /(RDSERTH*RDSERTH*CNVMSFT*CNVMSFT);
    
    //Output Located
    cout<<"You Weigh "<<myWght<<" lbs"<<endl;
    
    //Exit Stage
    return 0;
}

