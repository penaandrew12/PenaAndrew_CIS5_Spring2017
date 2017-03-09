/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on March 03, 2017, 11:30 AM
 * Purpose: Retro Pay
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes 

//Program Execution Begins 
int main(int argc, char** argv) {
    //Declare all Variables
    int PrevSlry;     //Previous Salary
    float Mnths=1.5f, //Retroactive Months
            MnthsYr=12;  //12 Months in 1 Year
    int NewAnulSlry,      //Annual Salary
          RtroActvPay,   //Retroactive Pay
          NewMnthySlry;      //Monthly Salary 
    float PayIncrse=.0076f;   //Pay Increase from Percent
   
    //Input or initialize values
    
    //Process/Calculations 
    NewAnulSlry=(1+PayIncrse)*PrevSlry;
    NewMnthySlry=(1+PayIncrse/MnthsYr)*PrevSlry;
    RtroActvPay=
    
    
    //Output Located 
    cout<<"Previous Salary = $";
    cin>>PrevSlry;
    cout<<"Retroactive Pay = $";
    cout<<"New Annual Salary = $"<<NewAnulSlry<<endl;
    cout<<"New Monthly Salary = $"<<NewMnthySlry<<endl;
    
    //Exit
    return 0;
}

