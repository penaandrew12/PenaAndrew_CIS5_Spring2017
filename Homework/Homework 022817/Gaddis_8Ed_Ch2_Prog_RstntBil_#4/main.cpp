/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on February 26, 2017, 3:05 PM
 * Purpose: Calculate Bill For Meal
 */

#include <iostream>
using namespace std;

//Global Constants
const float Percent=100;         //Conversion to Percent
const float Dlrs=1.0f;            //Dollars
const float Cnts=.100f;            //Cents

int main(int argc, char** argv) {
    
    //Declare Variables
    float MealChrge=88.67f;         //Meal Charge
    float Tax=.0675f;               //Tax For Meal
    float Tip=.20f;                 //Tip For Meal
    float TtlBill,TtlTax,TtlTip;    //Total Bill, Total Tax, Total Tip
    
    //Inputs-Outputs & Variables
    TtlBill=MealChrge+(MealChrge*Tax)+(MealChrge*Tip);
    TtlTax=MealChrge*Tax;
    TtlTip=MealChrge*Tip;
    
    //Output Data 
    cout<<"Meal Charge = $"<<MealChrge<<endl;
    cout<<"Total Tip   = $"<<TtlTip<<endl;
    cout<<"Total Tax   = $"<<TtlTax<<endl;
    cout<<"Total Bill  = $"<<TtlBill<<endl;
  
    //Exit
    return 0;
}

