/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on March 07, 2017, 12:00 PM
 * Purpose: BMR Calculations of Number of Candy Bars
 */

//System Libraries 
#include <iostream>
using namespace std;

//User Libraries 

//Global Constants Only

//Like PI, e, Gravity, or conversions

//Function Prototypes

//Program Execution Begins
int main(int argc, char** argv) {
    //Declare and initialize all Variables
    char sex;                   //M or F
    unsigned short ht,          //66 Inches in Height (in)
                   wt,          //Weight is 145 Pounds (lbs))
                   age;         //Current Age In Years 21 (yrs)
    unsigned char CdyCals=230;  //Candy Bar Calories
    float bmr;                  //Basic Metabolic Rate (Calories)
    int NCdyBrs;                //Number in Candy Bars we can eat
            
    //Input Data
    cout<<"This program calculates the number of ";
    cout<<"candy bars allowed per day based upon your BMR "<<endl;
    cout<<"Type in your Sex (M/F),Ht(In),Wt(lbs),Age(yrs)"<<endl;
    cout<<"Inputs are integer based"<<endl;
    cin>>sex>>ht>>wt>>age;
    
    //Process/Calculations
    bmr=(sex=='M')?
        66  + 6.3f*wt + 12.9f*ht - 6.8f*age:
       655  + 4.3f*wt + 4.7f*ht  - 4.7f*age;
    NCdyBrs=static_cast<int>(bmr/CdyCals);
    
    //Output Located
    cout<<"The number of candy bars you can eat = "<<NCdyBrs<<endl;
    
    //Exit Stage
    return 0;
}

